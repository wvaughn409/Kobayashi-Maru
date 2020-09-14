// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutomationController/Public/AutomationControllerSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutomationControllerSettings() {}
// Cross Module References
	AUTOMATIONCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FAutomatedTestGroup();
	UPackage* Z_Construct_UPackage__Script_AutomationController();
	AUTOMATIONCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FAutomatedTestFilter();
	AUTOMATIONCONTROLLER_API UClass* Z_Construct_UClass_UAutomationControllerSettings_NoRegister();
	AUTOMATIONCONTROLLER_API UClass* Z_Construct_UClass_UAutomationControllerSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FAutomatedTestGroup::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOMATIONCONTROLLER_API uint32 Get_Z_Construct_UScriptStruct_FAutomatedTestGroup_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomatedTestGroup, Z_Construct_UPackage__Script_AutomationController(), TEXT("AutomatedTestGroup"), sizeof(FAutomatedTestGroup), Get_Z_Construct_UScriptStruct_FAutomatedTestGroup_Hash());
	}
	return Singleton;
}
template<> AUTOMATIONCONTROLLER_API UScriptStruct* StaticStruct<FAutomatedTestGroup>()
{
	return FAutomatedTestGroup::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutomatedTestGroup(FAutomatedTestGroup::StaticStruct, TEXT("/Script/AutomationController"), TEXT("AutomatedTestGroup"), false, nullptr, nullptr);
static struct FScriptStruct_AutomationController_StaticRegisterNativesFAutomatedTestGroup
{
	FScriptStruct_AutomationController_StaticRegisterNativesFAutomatedTestGroup()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutomatedTestGroup")),new UScriptStruct::TCppStructOps<FAutomatedTestGroup>);
	}
} ScriptStruct_AutomationController_StaticRegisterNativesFAutomatedTestGroup;
	struct Z_Construct_UScriptStruct_FAutomatedTestGroup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Filters;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Filters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedTestGroup_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/*\n *\x09""Describes a group of tests. Each group has a name and a set of filters that determine group membership\n */" },
		{ "ModuleRelativePath", "Public/AutomationControllerSettings.h" },
		{ "ToolTip", "*     Describes a group of tests. Each group has a name and a set of filters that determine group membership" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomatedTestGroup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomatedTestGroup>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedTestGroup_Statics::NewProp_Filters_MetaData[] = {
		{ "ModuleRelativePath", "Public/AutomationControllerSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAutomatedTestGroup_Statics::NewProp_Filters = { "Filters", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAutomatedTestGroup, Filters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomatedTestGroup_Statics::NewProp_Filters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestGroup_Statics::NewProp_Filters_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAutomatedTestGroup_Statics::NewProp_Filters_Inner = { "Filters", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAutomatedTestFilter, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedTestGroup_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/AutomationControllerSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomatedTestGroup_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAutomatedTestGroup, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomatedTestGroup_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestGroup_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomatedTestGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestGroup_Statics::NewProp_Filters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestGroup_Statics::NewProp_Filters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestGroup_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomatedTestGroup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutomationController,
		nullptr,
		&NewStructOps,
		"AutomatedTestGroup",
		sizeof(FAutomatedTestGroup),
		alignof(FAutomatedTestGroup),
		Z_Construct_UScriptStruct_FAutomatedTestGroup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestGroup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomatedTestGroup_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestGroup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutomatedTestGroup()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAutomatedTestGroup_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AutomationController();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutomatedTestGroup"), sizeof(FAutomatedTestGroup), Get_Z_Construct_UScriptStruct_FAutomatedTestGroup_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAutomatedTestGroup_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutomatedTestGroup_Hash() { return 2705245252U; }
class UScriptStruct* FAutomatedTestFilter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOMATIONCONTROLLER_API uint32 Get_Z_Construct_UScriptStruct_FAutomatedTestFilter_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomatedTestFilter, Z_Construct_UPackage__Script_AutomationController(), TEXT("AutomatedTestFilter"), sizeof(FAutomatedTestFilter), Get_Z_Construct_UScriptStruct_FAutomatedTestFilter_Hash());
	}
	return Singleton;
}
template<> AUTOMATIONCONTROLLER_API UScriptStruct* StaticStruct<FAutomatedTestFilter>()
{
	return FAutomatedTestFilter::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutomatedTestFilter(FAutomatedTestFilter::StaticStruct, TEXT("/Script/AutomationController"), TEXT("AutomatedTestFilter"), false, nullptr, nullptr);
static struct FScriptStruct_AutomationController_StaticRegisterNativesFAutomatedTestFilter
{
	FScriptStruct_AutomationController_StaticRegisterNativesFAutomatedTestFilter()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutomatedTestFilter")),new UScriptStruct::TCppStructOps<FAutomatedTestFilter>);
	}
} ScriptStruct_AutomationController_StaticRegisterNativesFAutomatedTestFilter;
	struct Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchFromStart_MetaData[];
#endif
		static void NewProp_MatchFromStart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MatchFromStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Contains_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Contains;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/*\n* Describes a filter for a test group.\n*/" },
		{ "ModuleRelativePath", "Public/AutomationControllerSettings.h" },
		{ "ToolTip", "* Describes a filter for a test group." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomatedTestFilter>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics::NewProp_MatchFromStart_MetaData[] = {
		{ "Comment", "/** If true start matching from the start of the string, else anywhere */" },
		{ "ModuleRelativePath", "Public/AutomationControllerSettings.h" },
		{ "ToolTip", "If true start matching from the start of the string, else anywhere" },
	};
#endif
	void Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics::NewProp_MatchFromStart_SetBit(void* Obj)
	{
		((FAutomatedTestFilter*)Obj)->MatchFromStart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics::NewProp_MatchFromStart = { "MatchFromStart", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAutomatedTestFilter), &Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics::NewProp_MatchFromStart_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics::NewProp_MatchFromStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics::NewProp_MatchFromStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics::NewProp_Contains_MetaData[] = {
		{ "Comment", "/** String that the test must contain */" },
		{ "ModuleRelativePath", "Public/AutomationControllerSettings.h" },
		{ "ToolTip", "String that the test must contain" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics::NewProp_Contains = { "Contains", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAutomatedTestFilter, Contains), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics::NewProp_Contains_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics::NewProp_Contains_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics::NewProp_MatchFromStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics::NewProp_Contains,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutomationController,
		nullptr,
		&NewStructOps,
		"AutomatedTestFilter",
		sizeof(FAutomatedTestFilter),
		alignof(FAutomatedTestFilter),
		Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutomatedTestFilter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAutomatedTestFilter_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AutomationController();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutomatedTestFilter"), sizeof(FAutomatedTestFilter), Get_Z_Construct_UScriptStruct_FAutomatedTestFilter_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutomatedTestFilter_Hash() { return 778766380U; }
	void UAutomationControllerSettings::StaticRegisterNativesUAutomationControllerSettings()
	{
	}
	UClass* Z_Construct_UClass_UAutomationControllerSettings_NoRegister()
	{
		return UAutomationControllerSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAutomationControllerSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameInstanceLostTimerSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GameInstanceLostTimerSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckTestIntervalSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CheckTestIntervalSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTreatLogWarningsAsTestErrors_MetaData[];
#endif
		static void NewProp_bTreatLogWarningsAsTestErrors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTreatLogWarningsAsTestErrors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTreatLogErrorsAsTestErrors_MetaData[];
#endif
		static void NewProp_bTreatLogErrorsAsTestErrors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTreatLogErrorsAsTestErrors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Groups_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Groups;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Groups_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAutomationControllerSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AutomationController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationControllerSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements the Editor's user settings.\n */" },
		{ "IncludePath", "AutomationControllerSettings.h" },
		{ "ModuleRelativePath", "Public/AutomationControllerSettings.h" },
		{ "ToolTip", "Implements the Editor's user settings." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_GameInstanceLostTimerSeconds_MetaData[] = {
		{ "Comment", "/** The maximum response wait time for detecting a lost game instance (default=300sec)*/" },
		{ "ModuleRelativePath", "Public/AutomationControllerSettings.h" },
		{ "ToolTip", "The maximum response wait time for detecting a lost game instance (default=300sec)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_GameInstanceLostTimerSeconds = { "GameInstanceLostTimerSeconds", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutomationControllerSettings, GameInstanceLostTimerSeconds), METADATA_PARAMS(Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_GameInstanceLostTimerSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_GameInstanceLostTimerSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_CheckTestIntervalSeconds_MetaData[] = {
		{ "Comment", "/** How long to wait between test updates (default=1sec)*/" },
		{ "ModuleRelativePath", "Public/AutomationControllerSettings.h" },
		{ "ToolTip", "How long to wait between test updates (default=1sec)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_CheckTestIntervalSeconds = { "CheckTestIntervalSeconds", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutomationControllerSettings, CheckTestIntervalSeconds), METADATA_PARAMS(Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_CheckTestIntervalSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_CheckTestIntervalSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bTreatLogWarningsAsTestErrors_MetaData[] = {
		{ "Comment", "/** Whether to treat log warnings as test errors (default=false) */" },
		{ "ModuleRelativePath", "Public/AutomationControllerSettings.h" },
		{ "ToolTip", "Whether to treat log warnings as test errors (default=false)" },
	};
#endif
	void Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bTreatLogWarningsAsTestErrors_SetBit(void* Obj)
	{
		((UAutomationControllerSettings*)Obj)->bTreatLogWarningsAsTestErrors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bTreatLogWarningsAsTestErrors = { "bTreatLogWarningsAsTestErrors", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutomationControllerSettings), &Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bTreatLogWarningsAsTestErrors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bTreatLogWarningsAsTestErrors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bTreatLogWarningsAsTestErrors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bTreatLogErrorsAsTestErrors_MetaData[] = {
		{ "Comment", "/** Whether to treat log errors as test errors (default=true) */" },
		{ "ModuleRelativePath", "Public/AutomationControllerSettings.h" },
		{ "ToolTip", "Whether to treat log errors as test errors (default=true)" },
	};
#endif
	void Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bTreatLogErrorsAsTestErrors_SetBit(void* Obj)
	{
		((UAutomationControllerSettings*)Obj)->bTreatLogErrorsAsTestErrors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bTreatLogErrorsAsTestErrors = { "bTreatLogErrorsAsTestErrors", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutomationControllerSettings), &Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bTreatLogErrorsAsTestErrors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bTreatLogErrorsAsTestErrors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bTreatLogErrorsAsTestErrors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_Groups_MetaData[] = {
		{ "Comment", "/** List of user-defined test groups */" },
		{ "ModuleRelativePath", "Public/AutomationControllerSettings.h" },
		{ "ToolTip", "List of user-defined test groups" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_Groups = { "Groups", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutomationControllerSettings, Groups), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_Groups_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_Groups_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_Groups_Inner = { "Groups", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAutomatedTestGroup, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAutomationControllerSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_GameInstanceLostTimerSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_CheckTestIntervalSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bTreatLogWarningsAsTestErrors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bTreatLogErrorsAsTestErrors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_Groups,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_Groups_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAutomationControllerSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutomationControllerSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAutomationControllerSettings_Statics::ClassParams = {
		&UAutomationControllerSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAutomationControllerSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationControllerSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UAutomationControllerSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationControllerSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAutomationControllerSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAutomationControllerSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAutomationControllerSettings, 348837508);
	template<> AUTOMATIONCONTROLLER_API UClass* StaticClass<UAutomationControllerSettings>()
	{
		return UAutomationControllerSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAutomationControllerSettings(Z_Construct_UClass_UAutomationControllerSettings, &UAutomationControllerSettings::StaticClass, TEXT("/Script/AutomationController"), TEXT("UAutomationControllerSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAutomationControllerSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
