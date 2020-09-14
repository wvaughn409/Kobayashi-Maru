// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Slate/Public/Framework/MultiBox/MultiBoxDefs.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiBoxDefs() {}
// Cross Module References
	SLATE_API UEnum* Z_Construct_UEnum_Slate_EMultiBlockType();
	UPackage* Z_Construct_UPackage__Script_Slate();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_EMultiBoxType();
// End Cross Module References
	static UEnum* EMultiBlockType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Slate_EMultiBlockType, Z_Construct_UPackage__Script_Slate(), TEXT("EMultiBlockType"));
		}
		return Singleton;
	}
	template<> SLATE_API UEnum* StaticEnum<EMultiBlockType>()
	{
		return EMultiBlockType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMultiBlockType(EMultiBlockType_StaticEnum, TEXT("/Script/Slate"), TEXT("EMultiBlockType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Slate_EMultiBlockType_Hash() { return 3503418156U; }
	UEnum* Z_Construct_UEnum_Slate_EMultiBlockType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Slate();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMultiBlockType"), 0, Get_Z_Construct_UEnum_Slate_EMultiBlockType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMultiBlockType::None", (int64)EMultiBlockType::None },
				{ "EMultiBlockType::ButtonRow", (int64)EMultiBlockType::ButtonRow },
				{ "EMultiBlockType::EditableText", (int64)EMultiBlockType::EditableText },
				{ "EMultiBlockType::Heading", (int64)EMultiBlockType::Heading },
				{ "EMultiBlockType::MenuEntry", (int64)EMultiBlockType::MenuEntry },
				{ "EMultiBlockType::MenuSeparator", (int64)EMultiBlockType::MenuSeparator },
				{ "EMultiBlockType::ToolBarButton", (int64)EMultiBlockType::ToolBarButton },
				{ "EMultiBlockType::ToolBarComboButton", (int64)EMultiBlockType::ToolBarComboButton },
				{ "EMultiBlockType::ToolBarSeparator", (int64)EMultiBlockType::ToolBarSeparator },
				{ "EMultiBlockType::Widget", (int64)EMultiBlockType::Widget },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ButtonRow.Name", "EMultiBlockType::ButtonRow" },
				{ "Comment", "/**\n * Types of MultiBlocks\n */" },
				{ "EditableText.Name", "EMultiBlockType::EditableText" },
				{ "Heading.Name", "EMultiBlockType::Heading" },
				{ "MenuEntry.Name", "EMultiBlockType::MenuEntry" },
				{ "MenuSeparator.Name", "EMultiBlockType::MenuSeparator" },
				{ "ModuleRelativePath", "Public/Framework/MultiBox/MultiBoxDefs.h" },
				{ "None.Name", "EMultiBlockType::None" },
				{ "ToolBarButton.Name", "EMultiBlockType::ToolBarButton" },
				{ "ToolBarComboButton.Name", "EMultiBlockType::ToolBarComboButton" },
				{ "ToolBarSeparator.Name", "EMultiBlockType::ToolBarSeparator" },
				{ "ToolTip", "Types of MultiBlocks" },
				{ "Widget.Name", "EMultiBlockType::Widget" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Slate,
				nullptr,
				"EMultiBlockType",
				"EMultiBlockType",
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
	static UEnum* EMultiBoxType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Slate_EMultiBoxType, Z_Construct_UPackage__Script_Slate(), TEXT("EMultiBoxType"));
		}
		return Singleton;
	}
	template<> SLATE_API UEnum* StaticEnum<EMultiBoxType>()
	{
		return EMultiBoxType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMultiBoxType(EMultiBoxType_StaticEnum, TEXT("/Script/Slate"), TEXT("EMultiBoxType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Slate_EMultiBoxType_Hash() { return 2094903764U; }
	UEnum* Z_Construct_UEnum_Slate_EMultiBoxType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Slate();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMultiBoxType"), 0, Get_Z_Construct_UEnum_Slate_EMultiBoxType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMultiBoxType::MenuBar", (int64)EMultiBoxType::MenuBar },
				{ "EMultiBoxType::ToolBar", (int64)EMultiBoxType::ToolBar },
				{ "EMultiBoxType::VerticalToolBar", (int64)EMultiBoxType::VerticalToolBar },
				{ "EMultiBoxType::UniformToolBar", (int64)EMultiBoxType::UniformToolBar },
				{ "EMultiBoxType::Menu", (int64)EMultiBoxType::Menu },
				{ "EMultiBoxType::ButtonRow", (int64)EMultiBoxType::ButtonRow },
				{ "EMultiBoxType::ToolMenuBar", (int64)EMultiBoxType::ToolMenuBar },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ButtonRow.Comment", "/** Buttons arranged in rows, with a maximum number of buttons per row, like a toolbar but can have multiple rows*/" },
				{ "ButtonRow.Name", "EMultiBoxType::ButtonRow" },
				{ "ButtonRow.ToolTip", "Buttons arranged in rows, with a maximum number of buttons per row, like a toolbar but can have multiple rows" },
				{ "Comment", "/**\n * Types of MultiBoxes\n */" },
				{ "Menu.Comment", "/** Vertical menu (pull-down menu, or context menu) */" },
				{ "Menu.Name", "EMultiBoxType::Menu" },
				{ "Menu.ToolTip", "Vertical menu (pull-down menu, or context menu)" },
				{ "MenuBar.Comment", "/** Horizontal menu bar */" },
				{ "MenuBar.Name", "EMultiBoxType::MenuBar" },
				{ "MenuBar.ToolTip", "Horizontal menu bar" },
				{ "ModuleRelativePath", "Public/Framework/MultiBox/MultiBoxDefs.h" },
				{ "ToolBar.Comment", "/** Horizontal tool bar */" },
				{ "ToolBar.Name", "EMultiBoxType::ToolBar" },
				{ "ToolBar.ToolTip", "Horizontal tool bar" },
				{ "ToolMenuBar.Comment", "/** Horizontal menu bar used as a tool bar */" },
				{ "ToolMenuBar.Name", "EMultiBoxType::ToolMenuBar" },
				{ "ToolMenuBar.ToolTip", "Horizontal menu bar used as a tool bar" },
				{ "ToolTip", "Types of MultiBoxes" },
				{ "UniformToolBar.Comment", "/** A toolbar that tries to arrange all toolbar items uniformly (supports only horizontal toolbars for now) */" },
				{ "UniformToolBar.Name", "EMultiBoxType::UniformToolBar" },
				{ "UniformToolBar.ToolTip", "A toolbar that tries to arrange all toolbar items uniformly (supports only horizontal toolbars for now)" },
				{ "VerticalToolBar.Comment", "/** Vertical tool bar */" },
				{ "VerticalToolBar.Name", "EMultiBoxType::VerticalToolBar" },
				{ "VerticalToolBar.ToolTip", "Vertical tool bar" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Slate,
				nullptr,
				"EMultiBoxType",
				"EMultiBoxType",
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
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
