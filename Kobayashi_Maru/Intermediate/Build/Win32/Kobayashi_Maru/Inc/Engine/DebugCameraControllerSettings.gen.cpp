// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/DebugCameraControllerSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDebugCameraControllerSettings() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDebugCameraControllerSettingsViewModeIndex();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EViewModeIndex();
	ENGINE_API UClass* Z_Construct_UClass_UDebugCameraControllerSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDebugCameraControllerSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDeveloperSettings();
// End Cross Module References
class UScriptStruct* FDebugCameraControllerSettingsViewModeIndex::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FDebugCameraControllerSettingsViewModeIndex_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDebugCameraControllerSettingsViewModeIndex, Z_Construct_UPackage__Script_Engine(), TEXT("DebugCameraControllerSettingsViewModeIndex"), sizeof(FDebugCameraControllerSettingsViewModeIndex), Get_Z_Construct_UScriptStruct_FDebugCameraControllerSettingsViewModeIndex_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDebugCameraControllerSettingsViewModeIndex>()
{
	return FDebugCameraControllerSettingsViewModeIndex::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDebugCameraControllerSettingsViewModeIndex(FDebugCameraControllerSettingsViewModeIndex::StaticStruct, TEXT("/Script/Engine"), TEXT("DebugCameraControllerSettingsViewModeIndex"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFDebugCameraControllerSettingsViewModeIndex
{
	FScriptStruct_Engine_StaticRegisterNativesFDebugCameraControllerSettingsViewModeIndex()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DebugCameraControllerSettingsViewModeIndex")),new UScriptStruct::TCppStructOps<FDebugCameraControllerSettingsViewModeIndex>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFDebugCameraControllerSettingsViewModeIndex;
	struct Z_Construct_UScriptStruct_FDebugCameraControllerSettingsViewModeIndex_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewModeIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ViewModeIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugCameraControllerSettingsViewModeIndex_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/DebugCameraControllerSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDebugCameraControllerSettingsViewModeIndex_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDebugCameraControllerSettingsViewModeIndex>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugCameraControllerSettingsViewModeIndex_Statics::NewProp_ViewModeIndex_MetaData[] = {
		{ "Category", "General" },
		{ "DisplayName", "Cycle View Mode" },
		{ "ModuleRelativePath", "Classes/Engine/DebugCameraControllerSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDebugCameraControllerSettingsViewModeIndex_Statics::NewProp_ViewModeIndex = { "ViewModeIndex", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDebugCameraControllerSettingsViewModeIndex, ViewModeIndex), Z_Construct_UEnum_Engine_EViewModeIndex, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugCameraControllerSettingsViewModeIndex_Statics::NewProp_ViewModeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugCameraControllerSettingsViewModeIndex_Statics::NewProp_ViewModeIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDebugCameraControllerSettingsViewModeIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugCameraControllerSettingsViewModeIndex_Statics::NewProp_ViewModeIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDebugCameraControllerSettingsViewModeIndex_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"DebugCameraControllerSettingsViewModeIndex",
		sizeof(FDebugCameraControllerSettingsViewModeIndex),
		alignof(FDebugCameraControllerSettingsViewModeIndex),
		Z_Construct_UScriptStruct_FDebugCameraControllerSettingsViewModeIndex_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugCameraControllerSettingsViewModeIndex_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugCameraControllerSettingsViewModeIndex_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugCameraControllerSettingsViewModeIndex_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDebugCameraControllerSettingsViewModeIndex()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDebugCameraControllerSettingsViewModeIndex_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DebugCameraControllerSettingsViewModeIndex"), sizeof(FDebugCameraControllerSettingsViewModeIndex), Get_Z_Construct_UScriptStruct_FDebugCameraControllerSettingsViewModeIndex_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDebugCameraControllerSettingsViewModeIndex_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDebugCameraControllerSettingsViewModeIndex_Hash() { return 3534467596U; }
	void UDebugCameraControllerSettings::StaticRegisterNativesUDebugCameraControllerSettings()
	{
	}
	UClass* Z_Construct_UClass_UDebugCameraControllerSettings_NoRegister()
	{
		return UDebugCameraControllerSettings::StaticClass();
	}
	struct Z_Construct_UClass_UDebugCameraControllerSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CycleViewModes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CycleViewModes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CycleViewModes_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDebugCameraControllerSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugCameraControllerSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Default debug camera controller settings.\n */" },
		{ "DisplayName", "Debug Camera Controller" },
		{ "IncludePath", "Engine/DebugCameraControllerSettings.h" },
		{ "ModuleRelativePath", "Classes/Engine/DebugCameraControllerSettings.h" },
		{ "ToolTip", "Default debug camera controller settings." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugCameraControllerSettings_Statics::NewProp_CycleViewModes_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Classes/Engine/DebugCameraControllerSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDebugCameraControllerSettings_Statics::NewProp_CycleViewModes = { "CycleViewModes", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDebugCameraControllerSettings, CycleViewModes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDebugCameraControllerSettings_Statics::NewProp_CycleViewModes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugCameraControllerSettings_Statics::NewProp_CycleViewModes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDebugCameraControllerSettings_Statics::NewProp_CycleViewModes_Inner = { "CycleViewModes", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDebugCameraControllerSettingsViewModeIndex, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDebugCameraControllerSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugCameraControllerSettings_Statics::NewProp_CycleViewModes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugCameraControllerSettings_Statics::NewProp_CycleViewModes_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDebugCameraControllerSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDebugCameraControllerSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDebugCameraControllerSettings_Statics::ClassParams = {
		&UDebugCameraControllerSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDebugCameraControllerSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDebugCameraControllerSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UDebugCameraControllerSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugCameraControllerSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDebugCameraControllerSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDebugCameraControllerSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDebugCameraControllerSettings, 2886190246);
	template<> ENGINE_API UClass* StaticClass<UDebugCameraControllerSettings>()
	{
		return UDebugCameraControllerSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDebugCameraControllerSettings(Z_Construct_UClass_UDebugCameraControllerSettings, &UDebugCameraControllerSettings::StaticClass, TEXT("/Script/Engine"), TEXT("UDebugCameraControllerSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDebugCameraControllerSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
