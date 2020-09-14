// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Slate/Public/Framework/MultiBox/ToolMenuBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToolMenuBase() {}
// Cross Module References
	SLATE_API UEnum* Z_Construct_UEnum_Slate_ECustomizedToolMenuVisibility();
	UPackage* Z_Construct_UPackage__Script_Slate();
	SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizedToolMenu();
	SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray();
	SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizedToolMenuSection();
	SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizedToolMenuEntry();
	SLATE_API UClass* Z_Construct_UClass_UToolMenuBase_NoRegister();
	SLATE_API UClass* Z_Construct_UClass_UToolMenuBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* ECustomizedToolMenuVisibility_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Slate_ECustomizedToolMenuVisibility, Z_Construct_UPackage__Script_Slate(), TEXT("ECustomizedToolMenuVisibility"));
		}
		return Singleton;
	}
	template<> SLATE_API UEnum* StaticEnum<ECustomizedToolMenuVisibility>()
	{
		return ECustomizedToolMenuVisibility_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECustomizedToolMenuVisibility(ECustomizedToolMenuVisibility_StaticEnum, TEXT("/Script/Slate"), TEXT("ECustomizedToolMenuVisibility"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Slate_ECustomizedToolMenuVisibility_Hash() { return 2101617895U; }
	UEnum* Z_Construct_UEnum_Slate_ECustomizedToolMenuVisibility()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Slate();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECustomizedToolMenuVisibility"), 0, Get_Z_Construct_UEnum_Slate_ECustomizedToolMenuVisibility_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECustomizedToolMenuVisibility::None", (int64)ECustomizedToolMenuVisibility::None },
				{ "ECustomizedToolMenuVisibility::Visible", (int64)ECustomizedToolMenuVisibility::Visible },
				{ "ECustomizedToolMenuVisibility::Hidden", (int64)ECustomizedToolMenuVisibility::Hidden },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Hidden.Name", "ECustomizedToolMenuVisibility::Hidden" },
				{ "ModuleRelativePath", "Public/Framework/MultiBox/ToolMenuBase.h" },
				{ "None.Name", "ECustomizedToolMenuVisibility::None" },
				{ "Visible.Name", "ECustomizedToolMenuVisibility::Visible" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Slate,
				nullptr,
				"ECustomizedToolMenuVisibility",
				"ECustomizedToolMenuVisibility",
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
class UScriptStruct* FCustomizedToolMenu::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATE_API uint32 Get_Z_Construct_UScriptStruct_FCustomizedToolMenu_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomizedToolMenu, Z_Construct_UPackage__Script_Slate(), TEXT("CustomizedToolMenu"), sizeof(FCustomizedToolMenu), Get_Z_Construct_UScriptStruct_FCustomizedToolMenu_Hash());
	}
	return Singleton;
}
template<> SLATE_API UScriptStruct* StaticStruct<FCustomizedToolMenu>()
{
	return FCustomizedToolMenu::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCustomizedToolMenu(FCustomizedToolMenu::StaticStruct, TEXT("/Script/Slate"), TEXT("CustomizedToolMenu"), false, nullptr, nullptr);
static struct FScriptStruct_Slate_StaticRegisterNativesFCustomizedToolMenu
{
	FScriptStruct_Slate_StaticRegisterNativesFCustomizedToolMenu()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CustomizedToolMenu")),new UScriptStruct::TCppStructOps<FCustomizedToolMenu>);
	}
} ScriptStruct_Slate_StaticRegisterNativesFCustomizedToolMenu;
	struct Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SectionOrder;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SectionOrder_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntryOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_EntryOrder;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EntryOrder_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EntryOrder_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sections_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Sections;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Sections_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Sections_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Entries;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Entries_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Entries_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Framework/MultiBox/ToolMenuBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomizedToolMenu>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_SectionOrder_MetaData[] = {
		{ "ModuleRelativePath", "Public/Framework/MultiBox/ToolMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_SectionOrder = { "SectionOrder", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomizedToolMenu, SectionOrder), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_SectionOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_SectionOrder_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_SectionOrder_Inner = { "SectionOrder", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_EntryOrder_MetaData[] = {
		{ "ModuleRelativePath", "Public/Framework/MultiBox/ToolMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_EntryOrder = { "EntryOrder", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomizedToolMenu, EntryOrder), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_EntryOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_EntryOrder_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_EntryOrder_Key_KeyProp = { "EntryOrder_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_EntryOrder_ValueProp = { "EntryOrder", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_Sections_MetaData[] = {
		{ "ModuleRelativePath", "Public/Framework/MultiBox/ToolMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_Sections = { "Sections", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomizedToolMenu, Sections), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_Sections_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_Sections_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_Sections_Key_KeyProp = { "Sections_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_Sections_ValueProp = { "Sections", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FCustomizedToolMenuSection, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_Entries_MetaData[] = {
		{ "ModuleRelativePath", "Public/Framework/MultiBox/ToolMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomizedToolMenu, Entries), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_Entries_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_Entries_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_Entries_Key_KeyProp = { "Entries_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_Entries_ValueProp = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FCustomizedToolMenuEntry, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/Framework/MultiBox/ToolMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomizedToolMenu, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_SectionOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_SectionOrder_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_EntryOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_EntryOrder_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_EntryOrder_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_Sections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_Sections_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_Sections_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_Entries,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_Entries_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_Entries_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Slate,
		nullptr,
		&NewStructOps,
		"CustomizedToolMenu",
		sizeof(FCustomizedToolMenu),
		alignof(FCustomizedToolMenu),
		Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomizedToolMenu()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCustomizedToolMenu_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Slate();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CustomizedToolMenu"), sizeof(FCustomizedToolMenu), Get_Z_Construct_UScriptStruct_FCustomizedToolMenu_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCustomizedToolMenu_Hash() { return 585984624U; }
class UScriptStruct* FCustomizedToolMenuNameArray::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATE_API uint32 Get_Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray, Z_Construct_UPackage__Script_Slate(), TEXT("CustomizedToolMenuNameArray"), sizeof(FCustomizedToolMenuNameArray), Get_Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray_Hash());
	}
	return Singleton;
}
template<> SLATE_API UScriptStruct* StaticStruct<FCustomizedToolMenuNameArray>()
{
	return FCustomizedToolMenuNameArray::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCustomizedToolMenuNameArray(FCustomizedToolMenuNameArray::StaticStruct, TEXT("/Script/Slate"), TEXT("CustomizedToolMenuNameArray"), false, nullptr, nullptr);
static struct FScriptStruct_Slate_StaticRegisterNativesFCustomizedToolMenuNameArray
{
	FScriptStruct_Slate_StaticRegisterNativesFCustomizedToolMenuNameArray()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CustomizedToolMenuNameArray")),new UScriptStruct::TCppStructOps<FCustomizedToolMenuNameArray>);
	}
} ScriptStruct_Slate_StaticRegisterNativesFCustomizedToolMenuNameArray;
	struct Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Names_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Names;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Names_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Framework/MultiBox/ToolMenuBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomizedToolMenuNameArray>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray_Statics::NewProp_Names_MetaData[] = {
		{ "ModuleRelativePath", "Public/Framework/MultiBox/ToolMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray_Statics::NewProp_Names = { "Names", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomizedToolMenuNameArray, Names), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray_Statics::NewProp_Names_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray_Statics::NewProp_Names_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray_Statics::NewProp_Names_Inner = { "Names", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray_Statics::NewProp_Names,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray_Statics::NewProp_Names_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Slate,
		nullptr,
		&NewStructOps,
		"CustomizedToolMenuNameArray",
		sizeof(FCustomizedToolMenuNameArray),
		alignof(FCustomizedToolMenuNameArray),
		Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Slate();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CustomizedToolMenuNameArray"), sizeof(FCustomizedToolMenuNameArray), Get_Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray_Hash() { return 3698254012U; }
class UScriptStruct* FCustomizedToolMenuSection::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATE_API uint32 Get_Z_Construct_UScriptStruct_FCustomizedToolMenuSection_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomizedToolMenuSection, Z_Construct_UPackage__Script_Slate(), TEXT("CustomizedToolMenuSection"), sizeof(FCustomizedToolMenuSection), Get_Z_Construct_UScriptStruct_FCustomizedToolMenuSection_Hash());
	}
	return Singleton;
}
template<> SLATE_API UScriptStruct* StaticStruct<FCustomizedToolMenuSection>()
{
	return FCustomizedToolMenuSection::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCustomizedToolMenuSection(FCustomizedToolMenuSection::StaticStruct, TEXT("/Script/Slate"), TEXT("CustomizedToolMenuSection"), false, nullptr, nullptr);
static struct FScriptStruct_Slate_StaticRegisterNativesFCustomizedToolMenuSection
{
	FScriptStruct_Slate_StaticRegisterNativesFCustomizedToolMenuSection()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CustomizedToolMenuSection")),new UScriptStruct::TCppStructOps<FCustomizedToolMenuSection>);
	}
} ScriptStruct_Slate_StaticRegisterNativesFCustomizedToolMenuSection;
	struct Z_Construct_UScriptStruct_FCustomizedToolMenuSection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Visibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Visibility;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Visibility_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizedToolMenuSection_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Framework/MultiBox/ToolMenuBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomizedToolMenuSection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomizedToolMenuSection>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizedToolMenuSection_Statics::NewProp_Visibility_MetaData[] = {
		{ "ModuleRelativePath", "Public/Framework/MultiBox/ToolMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCustomizedToolMenuSection_Statics::NewProp_Visibility = { "Visibility", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomizedToolMenuSection, Visibility), Z_Construct_UEnum_Slate_ECustomizedToolMenuVisibility, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizedToolMenuSection_Statics::NewProp_Visibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizedToolMenuSection_Statics::NewProp_Visibility_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FCustomizedToolMenuSection_Statics::NewProp_Visibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomizedToolMenuSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizedToolMenuSection_Statics::NewProp_Visibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizedToolMenuSection_Statics::NewProp_Visibility_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomizedToolMenuSection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Slate,
		nullptr,
		&NewStructOps,
		"CustomizedToolMenuSection",
		sizeof(FCustomizedToolMenuSection),
		alignof(FCustomizedToolMenuSection),
		Z_Construct_UScriptStruct_FCustomizedToolMenuSection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizedToolMenuSection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizedToolMenuSection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizedToolMenuSection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomizedToolMenuSection()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCustomizedToolMenuSection_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Slate();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CustomizedToolMenuSection"), sizeof(FCustomizedToolMenuSection), Get_Z_Construct_UScriptStruct_FCustomizedToolMenuSection_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCustomizedToolMenuSection_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCustomizedToolMenuSection_Hash() { return 3886207217U; }
class UScriptStruct* FCustomizedToolMenuEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATE_API uint32 Get_Z_Construct_UScriptStruct_FCustomizedToolMenuEntry_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomizedToolMenuEntry, Z_Construct_UPackage__Script_Slate(), TEXT("CustomizedToolMenuEntry"), sizeof(FCustomizedToolMenuEntry), Get_Z_Construct_UScriptStruct_FCustomizedToolMenuEntry_Hash());
	}
	return Singleton;
}
template<> SLATE_API UScriptStruct* StaticStruct<FCustomizedToolMenuEntry>()
{
	return FCustomizedToolMenuEntry::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCustomizedToolMenuEntry(FCustomizedToolMenuEntry::StaticStruct, TEXT("/Script/Slate"), TEXT("CustomizedToolMenuEntry"), false, nullptr, nullptr);
static struct FScriptStruct_Slate_StaticRegisterNativesFCustomizedToolMenuEntry
{
	FScriptStruct_Slate_StaticRegisterNativesFCustomizedToolMenuEntry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CustomizedToolMenuEntry")),new UScriptStruct::TCppStructOps<FCustomizedToolMenuEntry>);
	}
} ScriptStruct_Slate_StaticRegisterNativesFCustomizedToolMenuEntry;
	struct Z_Construct_UScriptStruct_FCustomizedToolMenuEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Visibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Visibility;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Visibility_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizedToolMenuEntry_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Framework/MultiBox/ToolMenuBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomizedToolMenuEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomizedToolMenuEntry>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizedToolMenuEntry_Statics::NewProp_Visibility_MetaData[] = {
		{ "ModuleRelativePath", "Public/Framework/MultiBox/ToolMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCustomizedToolMenuEntry_Statics::NewProp_Visibility = { "Visibility", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomizedToolMenuEntry, Visibility), Z_Construct_UEnum_Slate_ECustomizedToolMenuVisibility, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizedToolMenuEntry_Statics::NewProp_Visibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizedToolMenuEntry_Statics::NewProp_Visibility_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FCustomizedToolMenuEntry_Statics::NewProp_Visibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomizedToolMenuEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizedToolMenuEntry_Statics::NewProp_Visibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizedToolMenuEntry_Statics::NewProp_Visibility_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomizedToolMenuEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Slate,
		nullptr,
		&NewStructOps,
		"CustomizedToolMenuEntry",
		sizeof(FCustomizedToolMenuEntry),
		alignof(FCustomizedToolMenuEntry),
		Z_Construct_UScriptStruct_FCustomizedToolMenuEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizedToolMenuEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizedToolMenuEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizedToolMenuEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomizedToolMenuEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCustomizedToolMenuEntry_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Slate();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CustomizedToolMenuEntry"), sizeof(FCustomizedToolMenuEntry), Get_Z_Construct_UScriptStruct_FCustomizedToolMenuEntry_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCustomizedToolMenuEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCustomizedToolMenuEntry_Hash() { return 1113096620U; }
	void UToolMenuBase::StaticRegisterNativesUToolMenuBase()
	{
	}
	UClass* Z_Construct_UClass_UToolMenuBase_NoRegister()
	{
		return UToolMenuBase::StaticClass();
	}
	struct Z_Construct_UClass_UToolMenuBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UToolMenuBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Slate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolMenuBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Framework/MultiBox/ToolMenuBase.h" },
		{ "ModuleRelativePath", "Public/Framework/MultiBox/ToolMenuBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UToolMenuBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UToolMenuBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UToolMenuBase_Statics::ClassParams = {
		&UToolMenuBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UToolMenuBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenuBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UToolMenuBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UToolMenuBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UToolMenuBase, 3467024000);
	template<> SLATE_API UClass* StaticClass<UToolMenuBase>()
	{
		return UToolMenuBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UToolMenuBase(Z_Construct_UClass_UToolMenuBase, &UToolMenuBase::StaticClass, TEXT("/Script/Slate"), TEXT("UToolMenuBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UToolMenuBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
