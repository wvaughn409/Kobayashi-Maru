// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Slate/Public/Widgets/Notifications/SProgressBar.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSProgressBar() {}
// Cross Module References
	SLATE_API UEnum* Z_Construct_UEnum_Slate_EProgressBarFillType();
	UPackage* Z_Construct_UPackage__Script_Slate();
// End Cross Module References
	static UEnum* EProgressBarFillType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Slate_EProgressBarFillType, Z_Construct_UPackage__Script_Slate(), TEXT("EProgressBarFillType"));
		}
		return Singleton;
	}
	template<> SLATE_API UEnum* StaticEnum<EProgressBarFillType::Type>()
	{
		return EProgressBarFillType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EProgressBarFillType(EProgressBarFillType_StaticEnum, TEXT("/Script/Slate"), TEXT("EProgressBarFillType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Slate_EProgressBarFillType_Hash() { return 2519544303U; }
	UEnum* Z_Construct_UEnum_Slate_EProgressBarFillType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Slate();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EProgressBarFillType"), 0, Get_Z_Construct_UEnum_Slate_EProgressBarFillType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EProgressBarFillType::LeftToRight", (int64)EProgressBarFillType::LeftToRight },
				{ "EProgressBarFillType::RightToLeft", (int64)EProgressBarFillType::RightToLeft },
				{ "EProgressBarFillType::FillFromCenter", (int64)EProgressBarFillType::FillFromCenter },
				{ "EProgressBarFillType::TopToBottom", (int64)EProgressBarFillType::TopToBottom },
				{ "EProgressBarFillType::BottomToTop", (int64)EProgressBarFillType::BottomToTop },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "BottomToTop.Comment", "// will fill up from the bottom to the the top\n" },
				{ "BottomToTop.Name", "EProgressBarFillType::BottomToTop" },
				{ "BottomToTop.ToolTip", "will fill up from the bottom to the the top" },
				{ "Comment", "/**\n * SProgressBar Fill Type \n */" },
				{ "FillFromCenter.Comment", "// will fill up from the center to the outer edges\n" },
				{ "FillFromCenter.Name", "EProgressBarFillType::FillFromCenter" },
				{ "FillFromCenter.ToolTip", "will fill up from the center to the outer edges" },
				{ "LeftToRight.Comment", "// will fill up from the left side to the right\n" },
				{ "LeftToRight.Name", "EProgressBarFillType::LeftToRight" },
				{ "LeftToRight.ToolTip", "will fill up from the left side to the right" },
				{ "ModuleRelativePath", "Public/Widgets/Notifications/SProgressBar.h" },
				{ "RightToLeft.Comment", "// will fill up from the right side to the left side\n" },
				{ "RightToLeft.Name", "EProgressBarFillType::RightToLeft" },
				{ "RightToLeft.ToolTip", "will fill up from the right side to the left side" },
				{ "ToolTip", "SProgressBar Fill Type" },
				{ "TopToBottom.Comment", "// will fill up from the top to the the bottom\n" },
				{ "TopToBottom.Name", "EProgressBarFillType::TopToBottom" },
				{ "TopToBottom.ToolTip", "will fill up from the top to the the bottom" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Slate,
				nullptr,
				"EProgressBarFillType",
				"EProgressBarFillType::Type",
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
