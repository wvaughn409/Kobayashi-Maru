// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Slate/Public/Framework/Commands/UICommandInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUICommandInfo() {}
// Cross Module References
	SLATE_API UEnum* Z_Construct_UEnum_Slate_EMultipleKeyBindingIndex();
	UPackage* Z_Construct_UPackage__Script_Slate();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_EUserInterfaceActionType();
// End Cross Module References
	static UEnum* EMultipleKeyBindingIndex_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Slate_EMultipleKeyBindingIndex, Z_Construct_UPackage__Script_Slate(), TEXT("EMultipleKeyBindingIndex"));
		}
		return Singleton;
	}
	template<> SLATE_API UEnum* StaticEnum<EMultipleKeyBindingIndex>()
	{
		return EMultipleKeyBindingIndex_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMultipleKeyBindingIndex(EMultipleKeyBindingIndex_StaticEnum, TEXT("/Script/Slate"), TEXT("EMultipleKeyBindingIndex"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Slate_EMultipleKeyBindingIndex_Hash() { return 2463085448U; }
	UEnum* Z_Construct_UEnum_Slate_EMultipleKeyBindingIndex()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Slate();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMultipleKeyBindingIndex"), 0, Get_Z_Construct_UEnum_Slate_EMultipleKeyBindingIndex_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMultipleKeyBindingIndex::Primary", (int64)EMultipleKeyBindingIndex::Primary },
				{ "EMultipleKeyBindingIndex::Secondary", (int64)EMultipleKeyBindingIndex::Secondary },
				{ "EMultipleKeyBindingIndex::NumChords", (int64)EMultipleKeyBindingIndex::NumChords },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Framework/Commands/UICommandInfo.h" },
				{ "NumChords.Name", "EMultipleKeyBindingIndex::NumChords" },
				{ "Primary.Name", "EMultipleKeyBindingIndex::Primary" },
				{ "Secondary.Name", "EMultipleKeyBindingIndex::Secondary" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Slate,
				nullptr,
				"EMultipleKeyBindingIndex",
				"EMultipleKeyBindingIndex",
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
	static UEnum* EUserInterfaceActionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Slate_EUserInterfaceActionType, Z_Construct_UPackage__Script_Slate(), TEXT("EUserInterfaceActionType"));
		}
		return Singleton;
	}
	template<> SLATE_API UEnum* StaticEnum<EUserInterfaceActionType>()
	{
		return EUserInterfaceActionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUserInterfaceActionType(EUserInterfaceActionType_StaticEnum, TEXT("/Script/Slate"), TEXT("EUserInterfaceActionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Slate_EUserInterfaceActionType_Hash() { return 3339534581U; }
	UEnum* Z_Construct_UEnum_Slate_EUserInterfaceActionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Slate();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUserInterfaceActionType"), 0, Get_Z_Construct_UEnum_Slate_EUserInterfaceActionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUserInterfaceActionType::None", (int64)EUserInterfaceActionType::None },
				{ "EUserInterfaceActionType::Button", (int64)EUserInterfaceActionType::Button },
				{ "EUserInterfaceActionType::ToggleButton", (int64)EUserInterfaceActionType::ToggleButton },
				{ "EUserInterfaceActionType::RadioButton", (int64)EUserInterfaceActionType::RadioButton },
				{ "EUserInterfaceActionType::Check", (int64)EUserInterfaceActionType::Check },
				{ "EUserInterfaceActionType::CollapsedButton", (int64)EUserInterfaceActionType::CollapsedButton },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Button.Comment", "/** Momentary buttons or menu items.  These support enable state, and execute a delegate when clicked. */" },
				{ "Button.Name", "EUserInterfaceActionType::Button" },
				{ "Button.ToolTip", "Momentary buttons or menu items.  These support enable state, and execute a delegate when clicked." },
				{ "Check.Comment", "/** Similar to Button but will display a readonly checkbox next to the item. */" },
				{ "Check.Name", "EUserInterfaceActionType::Check" },
				{ "Check.ToolTip", "Similar to Button but will display a readonly checkbox next to the item." },
				{ "CollapsedButton.Comment", "/** Similar to Button but has the checkbox area collapsed */" },
				{ "CollapsedButton.Name", "EUserInterfaceActionType::CollapsedButton" },
				{ "CollapsedButton.ToolTip", "Similar to Button but has the checkbox area collapsed" },
				{ "Comment", "/** Types of user interfaces that can be associated with a user interface action */" },
				{ "ModuleRelativePath", "Public/Framework/Commands/UICommandInfo.h" },
				{ "None.Comment", "/** An action which should not be associated with a user interface action */" },
				{ "None.Name", "EUserInterfaceActionType::None" },
				{ "None.ToolTip", "An action which should not be associated with a user interface action" },
				{ "RadioButton.Comment", "/** Radio buttons are similar to toggle buttons in that they are for menu items that store on/off state.  However they should be used to indicate that menu items in a group can only be in one state */" },
				{ "RadioButton.Name", "EUserInterfaceActionType::RadioButton" },
				{ "RadioButton.ToolTip", "Radio buttons are similar to toggle buttons in that they are for menu items that store on/off state.  However they should be used to indicate that menu items in a group can only be in one state" },
				{ "ToggleButton.Comment", "/** Toggleable buttons or menu items that store on/off state.  These support enable state, and execute a delegate when toggled. */" },
				{ "ToggleButton.Name", "EUserInterfaceActionType::ToggleButton" },
				{ "ToggleButton.ToolTip", "Toggleable buttons or menu items that store on/off state.  These support enable state, and execute a delegate when toggled." },
				{ "ToolTip", "Types of user interfaces that can be associated with a user interface action" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Slate,
				nullptr,
				"EUserInterfaceActionType",
				"EUserInterfaceActionType",
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
