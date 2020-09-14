// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Slate/Public/Framework/Views/ITypedTableView.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeITypedTableView() {}
// Cross Module References
	SLATE_API UEnum* Z_Construct_UEnum_Slate_ETableViewMode();
	UPackage* Z_Construct_UPackage__Script_Slate();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_ESelectionMode();
// End Cross Module References
	static UEnum* ETableViewMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Slate_ETableViewMode, Z_Construct_UPackage__Script_Slate(), TEXT("ETableViewMode"));
		}
		return Singleton;
	}
	template<> SLATE_API UEnum* StaticEnum<ETableViewMode::Type>()
	{
		return ETableViewMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETableViewMode(ETableViewMode_StaticEnum, TEXT("/Script/Slate"), TEXT("ETableViewMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Slate_ETableViewMode_Hash() { return 416907778U; }
	UEnum* Z_Construct_UEnum_Slate_ETableViewMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Slate();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETableViewMode"), 0, Get_Z_Construct_UEnum_Slate_ETableViewMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETableViewMode::List", (int64)ETableViewMode::List },
				{ "ETableViewMode::Tile", (int64)ETableViewMode::Tile },
				{ "ETableViewMode::Tree", (int64)ETableViewMode::Tree },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** Lists can exist as regular lists or as backing widgets for a tree. */" },
				{ "List.Name", "ETableViewMode::List" },
				{ "ModuleRelativePath", "Public/Framework/Views/ITypedTableView.h" },
				{ "Tile.Name", "ETableViewMode::Tile" },
				{ "ToolTip", "Lists can exist as regular lists or as backing widgets for a tree." },
				{ "Tree.Name", "ETableViewMode::Tree" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Slate,
				nullptr,
				"ETableViewMode",
				"ETableViewMode::Type",
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
	static UEnum* ESelectionMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Slate_ESelectionMode, Z_Construct_UPackage__Script_Slate(), TEXT("ESelectionMode"));
		}
		return Singleton;
	}
	template<> SLATE_API UEnum* StaticEnum<ESelectionMode::Type>()
	{
		return ESelectionMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESelectionMode(ESelectionMode_StaticEnum, TEXT("/Script/Slate"), TEXT("ESelectionMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Slate_ESelectionMode_Hash() { return 1867537265U; }
	UEnum* Z_Construct_UEnum_Slate_ESelectionMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Slate();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESelectionMode"), 0, Get_Z_Construct_UEnum_Slate_ESelectionMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESelectionMode::None", (int64)ESelectionMode::None },
				{ "ESelectionMode::Single", (int64)ESelectionMode::Single },
				{ "ESelectionMode::SingleToggle", (int64)ESelectionMode::SingleToggle },
				{ "ESelectionMode::Multi", (int64)ESelectionMode::Multi },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Framework/Views/ITypedTableView.h" },
				{ "Multi.Comment", "/** Multiple items can be selected at the same time. */" },
				{ "Multi.Name", "ESelectionMode::Multi" },
				{ "Multi.ToolTip", "Multiple items can be selected at the same time." },
				{ "None.Comment", "/** Nothing can be selected and there is no hover cue for selection.  You can still handle mouse button events though. */" },
				{ "None.Name", "ESelectionMode::None" },
				{ "None.ToolTip", "Nothing can be selected and there is no hover cue for selection.  You can still handle mouse button events though." },
				{ "Single.Comment", "/** A single item can be selected at once, or no item may be selected. */" },
				{ "Single.Name", "ESelectionMode::Single" },
				{ "Single.ToolTip", "A single item can be selected at once, or no item may be selected." },
				{ "SingleToggle.Comment", "/** A single item can be selected at once, or no item may be selected.  You can click the item to toggle selection on and off. */" },
				{ "SingleToggle.Name", "ESelectionMode::SingleToggle" },
				{ "SingleToggle.ToolTip", "A single item can be selected at once, or no item may be selected.  You can click the item to toggle selection on and off." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Slate,
				nullptr,
				"ESelectionMode",
				"ESelectionMode::Type",
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
