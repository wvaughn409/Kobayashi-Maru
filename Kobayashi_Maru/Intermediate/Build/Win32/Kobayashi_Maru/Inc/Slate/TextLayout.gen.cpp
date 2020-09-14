// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Slate/Public/Framework/Text/TextLayout.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextLayout() {}
// Cross Module References
	SLATE_API UEnum* Z_Construct_UEnum_Slate_ETextFlowDirection();
	UPackage* Z_Construct_UPackage__Script_Slate();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_ETextWrappingPolicy();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_ETextJustify();
// End Cross Module References
	static UEnum* ETextFlowDirection_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Slate_ETextFlowDirection, Z_Construct_UPackage__Script_Slate(), TEXT("ETextFlowDirection"));
		}
		return Singleton;
	}
	template<> SLATE_API UEnum* StaticEnum<ETextFlowDirection>()
	{
		return ETextFlowDirection_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETextFlowDirection(ETextFlowDirection_StaticEnum, TEXT("/Script/Slate"), TEXT("ETextFlowDirection"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Slate_ETextFlowDirection_Hash() { return 2702145854U; }
	UEnum* Z_Construct_UEnum_Slate_ETextFlowDirection()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Slate();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETextFlowDirection"), 0, Get_Z_Construct_UEnum_Slate_ETextFlowDirection_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETextFlowDirection::Auto", (int64)ETextFlowDirection::Auto },
				{ "ETextFlowDirection::LeftToRight", (int64)ETextFlowDirection::LeftToRight },
				{ "ETextFlowDirection::RightToLeft", (int64)ETextFlowDirection::RightToLeft },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Auto.Comment", "/** Automatically detect the flow direction for each paragraph from its text */" },
				{ "Auto.Name", "ETextFlowDirection::Auto" },
				{ "Auto.ToolTip", "Automatically detect the flow direction for each paragraph from its text" },
				{ "BlueprintType", "true" },
				{ "Comment", "/** \n * The different directions that text can flow within a paragraph of text.\n * @note If you change this enum, make sure and update CVarDefaultTextFlowDirection and GetDefaultTextFlowDirection.\n */" },
				{ "LeftToRight.Comment", "/** Force text to be flowed left-to-right */" },
				{ "LeftToRight.Name", "ETextFlowDirection::LeftToRight" },
				{ "LeftToRight.ToolTip", "Force text to be flowed left-to-right" },
				{ "ModuleRelativePath", "Public/Framework/Text/TextLayout.h" },
				{ "RightToLeft.Comment", "/** Force text to be flowed right-to-left */" },
				{ "RightToLeft.Name", "ETextFlowDirection::RightToLeft" },
				{ "RightToLeft.ToolTip", "Force text to be flowed right-to-left" },
				{ "ToolTip", "The different directions that text can flow within a paragraph of text.\n@note If you change this enum, make sure and update CVarDefaultTextFlowDirection and GetDefaultTextFlowDirection." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Slate,
				nullptr,
				"ETextFlowDirection",
				"ETextFlowDirection",
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
	static UEnum* ETextWrappingPolicy_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Slate_ETextWrappingPolicy, Z_Construct_UPackage__Script_Slate(), TEXT("ETextWrappingPolicy"));
		}
		return Singleton;
	}
	template<> SLATE_API UEnum* StaticEnum<ETextWrappingPolicy>()
	{
		return ETextWrappingPolicy_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETextWrappingPolicy(ETextWrappingPolicy_StaticEnum, TEXT("/Script/Slate"), TEXT("ETextWrappingPolicy"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Slate_ETextWrappingPolicy_Hash() { return 2765105961U; }
	UEnum* Z_Construct_UEnum_Slate_ETextWrappingPolicy()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Slate();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETextWrappingPolicy"), 0, Get_Z_Construct_UEnum_Slate_ETextWrappingPolicy_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETextWrappingPolicy::DefaultWrapping", (int64)ETextWrappingPolicy::DefaultWrapping },
				{ "ETextWrappingPolicy::AllowPerCharacterWrapping", (int64)ETextWrappingPolicy::AllowPerCharacterWrapping },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AllowPerCharacterWrapping.Comment", "/** Fallback to per-character wrapping if a word is too long */" },
				{ "AllowPerCharacterWrapping.Name", "ETextWrappingPolicy::AllowPerCharacterWrapping" },
				{ "AllowPerCharacterWrapping.ToolTip", "Fallback to per-character wrapping if a word is too long" },
				{ "BlueprintType", "true" },
				{ "Comment", "/** \n * The different methods that can be used if a word is too long to be broken by the default line-break iterator.\n */" },
				{ "DefaultWrapping.Comment", "/** No fallback, just use the given line-break iterator */" },
				{ "DefaultWrapping.Name", "ETextWrappingPolicy::DefaultWrapping" },
				{ "DefaultWrapping.ToolTip", "No fallback, just use the given line-break iterator" },
				{ "ModuleRelativePath", "Public/Framework/Text/TextLayout.h" },
				{ "ToolTip", "The different methods that can be used if a word is too long to be broken by the default line-break iterator." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Slate,
				nullptr,
				"ETextWrappingPolicy",
				"ETextWrappingPolicy",
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
	static UEnum* ETextJustify_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Slate_ETextJustify, Z_Construct_UPackage__Script_Slate(), TEXT("ETextJustify"));
		}
		return Singleton;
	}
	template<> SLATE_API UEnum* StaticEnum<ETextJustify::Type>()
	{
		return ETextJustify_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETextJustify(ETextJustify_StaticEnum, TEXT("/Script/Slate"), TEXT("ETextJustify"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Slate_ETextJustify_Hash() { return 935579290U; }
	UEnum* Z_Construct_UEnum_Slate_ETextJustify()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Slate();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETextJustify"), 0, Get_Z_Construct_UEnum_Slate_ETextJustify_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETextJustify::Left", (int64)ETextJustify::Left },
				{ "ETextJustify::Center", (int64)ETextJustify::Center },
				{ "ETextJustify::Right", (int64)ETextJustify::Right },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Center.Comment", "/**\n\x09\x09 * Justify the text in the center.\n\x09\x09 * Text flow direction has no impact on this justification mode.\n\x09\x09 */" },
				{ "Center.Name", "ETextJustify::Center" },
				{ "Center.ToolTip", "Justify the text in the center.\nText flow direction has no impact on this justification mode." },
				{ "Left.Comment", "/**\n\x09\x09 * Justify the text logically to the left.\n\x09\x09 * When text is flowing left-to-right, this will align text visually to the left.\n\x09\x09 * When text is flowing right-to-left, this will align text visually to the right.\n\x09\x09 */" },
				{ "Left.Name", "ETextJustify::Left" },
				{ "Left.ToolTip", "Justify the text logically to the left.\nWhen text is flowing left-to-right, this will align text visually to the left.\nWhen text is flowing right-to-left, this will align text visually to the right." },
				{ "ModuleRelativePath", "Public/Framework/Text/TextLayout.h" },
				{ "Right.Comment", "/**\n\x09\x09 * Justify the text logically to the right.\n\x09\x09 * When text is flowing left-to-right, this will align text visually to the right.\n\x09\x09 * When text is flowing right-to-left, this will align text visually to the left.\n\x09\x09 */" },
				{ "Right.Name", "ETextJustify::Right" },
				{ "Right.ToolTip", "Justify the text logically to the right.\nWhen text is flowing left-to-right, this will align text visually to the right.\nWhen text is flowing right-to-left, this will align text visually to the left." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Slate,
				nullptr,
				"ETextJustify",
				"ETextJustify::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
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
