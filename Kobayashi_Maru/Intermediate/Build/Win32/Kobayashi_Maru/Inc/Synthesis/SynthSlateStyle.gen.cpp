// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Synthesis/Public/UI/SynthSlateStyle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSynthSlateStyle() {}
// Cross Module References
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESynthSlateColorStyle();
	UPackage* Z_Construct_UPackage__Script_Synthesis();
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESynthSlateSizeType();
	SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSynthSlateStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateWidgetStyle();
// End Cross Module References
	static UEnum* ESynthSlateColorStyle_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_ESynthSlateColorStyle, Z_Construct_UPackage__Script_Synthesis(), TEXT("ESynthSlateColorStyle"));
		}
		return Singleton;
	}
	template<> SYNTHESIS_API UEnum* StaticEnum<ESynthSlateColorStyle>()
	{
		return ESynthSlateColorStyle_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESynthSlateColorStyle(ESynthSlateColorStyle_StaticEnum, TEXT("/Script/Synthesis"), TEXT("ESynthSlateColorStyle"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Synthesis_ESynthSlateColorStyle_Hash() { return 2338164941U; }
	UEnum* Z_Construct_UEnum_Synthesis_ESynthSlateColorStyle()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Synthesis();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESynthSlateColorStyle"), 0, Get_Z_Construct_UEnum_Synthesis_ESynthSlateColorStyle_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESynthSlateColorStyle::Light", (int64)ESynthSlateColorStyle::Light },
				{ "ESynthSlateColorStyle::Dark", (int64)ESynthSlateColorStyle::Dark },
				{ "ESynthSlateColorStyle::Count", (int64)ESynthSlateColorStyle::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Count.Hidden", "" },
				{ "Count.Name", "ESynthSlateColorStyle::Count" },
				{ "Dark.Name", "ESynthSlateColorStyle::Dark" },
				{ "Light.Name", "ESynthSlateColorStyle::Light" },
				{ "ModuleRelativePath", "Public/UI/SynthSlateStyle.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
				nullptr,
				"ESynthSlateColorStyle",
				"ESynthSlateColorStyle",
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
	static UEnum* ESynthSlateSizeType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_ESynthSlateSizeType, Z_Construct_UPackage__Script_Synthesis(), TEXT("ESynthSlateSizeType"));
		}
		return Singleton;
	}
	template<> SYNTHESIS_API UEnum* StaticEnum<ESynthSlateSizeType>()
	{
		return ESynthSlateSizeType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESynthSlateSizeType(ESynthSlateSizeType_StaticEnum, TEXT("/Script/Synthesis"), TEXT("ESynthSlateSizeType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Synthesis_ESynthSlateSizeType_Hash() { return 1531989749U; }
	UEnum* Z_Construct_UEnum_Synthesis_ESynthSlateSizeType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Synthesis();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESynthSlateSizeType"), 0, Get_Z_Construct_UEnum_Synthesis_ESynthSlateSizeType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESynthSlateSizeType::Small", (int64)ESynthSlateSizeType::Small },
				{ "ESynthSlateSizeType::Medium", (int64)ESynthSlateSizeType::Medium },
				{ "ESynthSlateSizeType::Large", (int64)ESynthSlateSizeType::Large },
				{ "ESynthSlateSizeType::Count", (int64)ESynthSlateSizeType::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Count.Hidden", "" },
				{ "Count.Name", "ESynthSlateSizeType::Count" },
				{ "Large.Name", "ESynthSlateSizeType::Large" },
				{ "Medium.Name", "ESynthSlateSizeType::Medium" },
				{ "ModuleRelativePath", "Public/UI/SynthSlateStyle.h" },
				{ "Small.Name", "ESynthSlateSizeType::Small" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
				nullptr,
				"ESynthSlateSizeType",
				"ESynthSlateSizeType",
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
class UScriptStruct* FSynthSlateStyle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SYNTHESIS_API uint32 Get_Z_Construct_UScriptStruct_FSynthSlateStyle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSynthSlateStyle, Z_Construct_UPackage__Script_Synthesis(), TEXT("SynthSlateStyle"), sizeof(FSynthSlateStyle), Get_Z_Construct_UScriptStruct_FSynthSlateStyle_Hash());
	}
	return Singleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSynthSlateStyle>()
{
	return FSynthSlateStyle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSynthSlateStyle(FSynthSlateStyle::StaticStruct, TEXT("/Script/Synthesis"), TEXT("SynthSlateStyle"), false, nullptr, nullptr);
static struct FScriptStruct_Synthesis_StaticRegisterNativesFSynthSlateStyle
{
	FScriptStruct_Synthesis_StaticRegisterNativesFSynthSlateStyle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SynthSlateStyle")),new UScriptStruct::TCppStructOps<FSynthSlateStyle>);
	}
} ScriptStruct_Synthesis_StaticRegisterNativesFSynthSlateStyle;
	struct Z_Construct_UScriptStruct_FSynthSlateStyle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ColorStyle;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ColorStyle_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SizeType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SizeType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSynthSlateStyle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the appearance of synth UI elements in slate.\n */" },
		{ "ModuleRelativePath", "Public/UI/SynthSlateStyle.h" },
		{ "ToolTip", "Represents the appearance of synth UI elements in slate." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSynthSlateStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSynthSlateStyle>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSynthSlateStyle_Statics::NewProp_ColorStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image to use when the slider bar is in its disabled state */" },
		{ "ModuleRelativePath", "Public/UI/SynthSlateStyle.h" },
		{ "ToolTip", "Image to use when the slider bar is in its disabled state" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSynthSlateStyle_Statics::NewProp_ColorStyle = { "ColorStyle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSynthSlateStyle, ColorStyle), Z_Construct_UEnum_Synthesis_ESynthSlateColorStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FSynthSlateStyle_Statics::NewProp_ColorStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSynthSlateStyle_Statics::NewProp_ColorStyle_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSynthSlateStyle_Statics::NewProp_ColorStyle_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSynthSlateStyle_Statics::NewProp_SizeType_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The size of the knobs to use. */" },
		{ "ModuleRelativePath", "Public/UI/SynthSlateStyle.h" },
		{ "ToolTip", "The size of the knobs to use." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSynthSlateStyle_Statics::NewProp_SizeType = { "SizeType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSynthSlateStyle, SizeType), Z_Construct_UEnum_Synthesis_ESynthSlateSizeType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSynthSlateStyle_Statics::NewProp_SizeType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSynthSlateStyle_Statics::NewProp_SizeType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSynthSlateStyle_Statics::NewProp_SizeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSynthSlateStyle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSynthSlateStyle_Statics::NewProp_ColorStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSynthSlateStyle_Statics::NewProp_ColorStyle_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSynthSlateStyle_Statics::NewProp_SizeType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSynthSlateStyle_Statics::NewProp_SizeType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSynthSlateStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
		Z_Construct_UScriptStruct_FSlateWidgetStyle,
		&NewStructOps,
		"SynthSlateStyle",
		sizeof(FSynthSlateStyle),
		alignof(FSynthSlateStyle),
		Z_Construct_UScriptStruct_FSynthSlateStyle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSynthSlateStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSynthSlateStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSynthSlateStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSynthSlateStyle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSynthSlateStyle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Synthesis();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SynthSlateStyle"), sizeof(FSynthSlateStyle), Get_Z_Construct_UScriptStruct_FSynthSlateStyle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSynthSlateStyle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSynthSlateStyle_Hash() { return 3655031202U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
