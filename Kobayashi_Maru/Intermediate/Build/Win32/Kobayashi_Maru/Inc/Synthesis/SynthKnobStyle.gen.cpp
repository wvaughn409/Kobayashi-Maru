// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Synthesis/Public/UI/SynthKnobStyle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSynthKnobStyle() {}
// Cross Module References
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESynthKnobSize();
	UPackage* Z_Construct_UPackage__Script_Synthesis();
	SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSynthKnobStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateWidgetStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
// End Cross Module References
	static UEnum* ESynthKnobSize_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_ESynthKnobSize, Z_Construct_UPackage__Script_Synthesis(), TEXT("ESynthKnobSize"));
		}
		return Singleton;
	}
	template<> SYNTHESIS_API UEnum* StaticEnum<ESynthKnobSize>()
	{
		return ESynthKnobSize_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESynthKnobSize(ESynthKnobSize_StaticEnum, TEXT("/Script/Synthesis"), TEXT("ESynthKnobSize"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Synthesis_ESynthKnobSize_Hash() { return 4278598171U; }
	UEnum* Z_Construct_UEnum_Synthesis_ESynthKnobSize()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Synthesis();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESynthKnobSize"), 0, Get_Z_Construct_UEnum_Synthesis_ESynthKnobSize_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESynthKnobSize::Medium", (int64)ESynthKnobSize::Medium },
				{ "ESynthKnobSize::Large", (int64)ESynthKnobSize::Large },
				{ "ESynthKnobSize::Count", (int64)ESynthKnobSize::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Count.Hidden", "" },
				{ "Count.Name", "ESynthKnobSize::Count" },
				{ "Large.Name", "ESynthKnobSize::Large" },
				{ "Medium.Name", "ESynthKnobSize::Medium" },
				{ "ModuleRelativePath", "Public/UI/SynthKnobStyle.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
				nullptr,
				"ESynthKnobSize",
				"ESynthKnobSize",
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
class UScriptStruct* FSynthKnobStyle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SYNTHESIS_API uint32 Get_Z_Construct_UScriptStruct_FSynthKnobStyle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSynthKnobStyle, Z_Construct_UPackage__Script_Synthesis(), TEXT("SynthKnobStyle"), sizeof(FSynthKnobStyle), Get_Z_Construct_UScriptStruct_FSynthKnobStyle_Hash());
	}
	return Singleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSynthKnobStyle>()
{
	return FSynthKnobStyle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSynthKnobStyle(FSynthKnobStyle::StaticStruct, TEXT("/Script/Synthesis"), TEXT("SynthKnobStyle"), false, nullptr, nullptr);
static struct FScriptStruct_Synthesis_StaticRegisterNativesFSynthKnobStyle
{
	FScriptStruct_Synthesis_StaticRegisterNativesFSynthKnobStyle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SynthKnobStyle")),new UScriptStruct::TCppStructOps<FSynthKnobStyle>);
	}
} ScriptStruct_Synthesis_StaticRegisterNativesFSynthKnobStyle;
	struct Z_Construct_UScriptStruct_FSynthKnobStyle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KnobSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_KnobSize;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_KnobSize_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxValueAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxValueAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinValueAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinValueAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MediumKnobOverlay_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MediumKnobOverlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MediumKnob_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MediumKnob;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LargeKnobOverlay_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LargeKnobOverlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LargeKnob_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LargeKnob;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the appearance of an SSynthKnob\n */" },
		{ "ModuleRelativePath", "Public/UI/SynthKnobStyle.h" },
		{ "ToolTip", "Represents the appearance of an SSynthKnob" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSynthKnobStyle>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_KnobSize_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The size of the knobs to use. */" },
		{ "ModuleRelativePath", "Public/UI/SynthKnobStyle.h" },
		{ "ToolTip", "The size of the knobs to use." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_KnobSize = { "KnobSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSynthKnobStyle, KnobSize), Z_Construct_UEnum_Synthesis_ESynthKnobSize, METADATA_PARAMS(Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_KnobSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_KnobSize_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_KnobSize_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_MaxValueAngle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "// Image to use for the mediaum knob dot handle\n" },
		{ "ModuleRelativePath", "Public/UI/SynthKnobStyle.h" },
		{ "ToolTip", "Image to use for the mediaum knob dot handle" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_MaxValueAngle = { "MaxValueAngle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSynthKnobStyle, MaxValueAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_MaxValueAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_MaxValueAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_MinValueAngle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "// Image to use for the mediaum knob dot handle\n" },
		{ "ModuleRelativePath", "Public/UI/SynthKnobStyle.h" },
		{ "ToolTip", "Image to use for the mediaum knob dot handle" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_MinValueAngle = { "MinValueAngle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSynthKnobStyle, MinValueAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_MinValueAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_MinValueAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_MediumKnobOverlay_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "// Image to use for the mediaum knob dot handle\n" },
		{ "ModuleRelativePath", "Public/UI/SynthKnobStyle.h" },
		{ "ToolTip", "Image to use for the mediaum knob dot handle" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_MediumKnobOverlay = { "MediumKnobOverlay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSynthKnobStyle, MediumKnobOverlay), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_MediumKnobOverlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_MediumKnobOverlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_MediumKnob_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "// Image to use for the medium large knob\n" },
		{ "ModuleRelativePath", "Public/UI/SynthKnobStyle.h" },
		{ "ToolTip", "Image to use for the medium large knob" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_MediumKnob = { "MediumKnob", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSynthKnobStyle, MediumKnob), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_MediumKnob_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_MediumKnob_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_LargeKnobOverlay_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "// Image to use for the dot handle\n" },
		{ "ModuleRelativePath", "Public/UI/SynthKnobStyle.h" },
		{ "ToolTip", "Image to use for the dot handle" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_LargeKnobOverlay = { "LargeKnobOverlay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSynthKnobStyle, LargeKnobOverlay), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_LargeKnobOverlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_LargeKnobOverlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_LargeKnob_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "// Image to use for the large knob\n" },
		{ "ModuleRelativePath", "Public/UI/SynthKnobStyle.h" },
		{ "ToolTip", "Image to use for the large knob" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_LargeKnob = { "LargeKnob", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSynthKnobStyle, LargeKnob), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_LargeKnob_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_LargeKnob_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_KnobSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_KnobSize_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_MaxValueAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_MinValueAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_MediumKnobOverlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_MediumKnob,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_LargeKnobOverlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_LargeKnob,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
		Z_Construct_UScriptStruct_FSlateWidgetStyle,
		&NewStructOps,
		"SynthKnobStyle",
		sizeof(FSynthKnobStyle),
		alignof(FSynthKnobStyle),
		Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSynthKnobStyle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSynthKnobStyle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Synthesis();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SynthKnobStyle"), sizeof(FSynthKnobStyle), Get_Z_Construct_UScriptStruct_FSynthKnobStyle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSynthKnobStyle_Hash() { return 3464105692U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
