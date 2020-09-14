// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/AI/NavigationSystemConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationSystemConfig() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UNavigationSystemConfig_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavigationSystemConfig();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavAgentSelector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	ENGINE_API UClass* Z_Construct_UClass_UNullNavSysConfig_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNullNavSysConfig();
// End Cross Module References
	void UNavigationSystemConfig::StaticRegisterNativesUNavigationSystemConfig()
	{
	}
	UClass* Z_Construct_UClass_UNavigationSystemConfig_NoRegister()
	{
		return UNavigationSystemConfig::StaticClass();
	}
	struct Z_Construct_UClass_UNavigationSystemConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsOverriden_MetaData[];
#endif
		static void NewProp_bIsOverriden_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsOverriden;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultAgentName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DefaultAgentName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SupportedAgentsMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SupportedAgentsMask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavigationSystemClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NavigationSystemClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavigationSystemConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationSystemConfig_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Generic Navigation System Config" },
		{ "IncludePath", "AI/NavigationSystemConfig.h" },
		{ "ModuleRelativePath", "Classes/AI/NavigationSystemConfig.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationSystemConfig_Statics::NewProp_bIsOverriden_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "/** If true it means the navigation system settings are overridden from another source (like a NavConfigOverrideActor) */" },
		{ "ModuleRelativePath", "Classes/AI/NavigationSystemConfig.h" },
		{ "ToolTip", "If true it means the navigation system settings are overridden from another source (like a NavConfigOverrideActor)" },
	};
#endif
	void Z_Construct_UClass_UNavigationSystemConfig_Statics::NewProp_bIsOverriden_SetBit(void* Obj)
	{
		((UNavigationSystemConfig*)Obj)->bIsOverriden = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavigationSystemConfig_Statics::NewProp_bIsOverriden = { "bIsOverriden", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNavigationSystemConfig), &Z_Construct_UClass_UNavigationSystemConfig_Statics::NewProp_bIsOverriden_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNavigationSystemConfig_Statics::NewProp_bIsOverriden_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemConfig_Statics::NewProp_bIsOverriden_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationSystemConfig_Statics::NewProp_DefaultAgentName_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "/** If not None indicates which of navigation datas and supported agents are \n\x09 * going to be used as the default ones. If navigation agent of this type does \n\x09 * not exist or is not enabled then the first available nav data will be used \n\x09 * as the default one */" },
		{ "ModuleRelativePath", "Classes/AI/NavigationSystemConfig.h" },
		{ "ToolTip", "If not None indicates which of navigation datas and supported agents are\ngoing to be used as the default ones. If navigation agent of this type does\nnot exist or is not enabled then the first available nav data will be used\nas the default one" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNavigationSystemConfig_Statics::NewProp_DefaultAgentName = { "DefaultAgentName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNavigationSystemConfig, DefaultAgentName), METADATA_PARAMS(Z_Construct_UClass_UNavigationSystemConfig_Statics::NewProp_DefaultAgentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemConfig_Statics::NewProp_DefaultAgentName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationSystemConfig_Statics::NewProp_SupportedAgentsMask_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "/** NavigationSystem's properties in Project Settings define all possible supported agents,\n\x09 *\x09""but a specific navigation system can choose to support only a subset of agents.*/" },
		{ "ModuleRelativePath", "Classes/AI/NavigationSystemConfig.h" },
		{ "ToolTip", "NavigationSystem's properties in Project Settings define all possible supported agents,\n    but a specific navigation system can choose to support only a subset of agents." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavigationSystemConfig_Statics::NewProp_SupportedAgentsMask = { "SupportedAgentsMask", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNavigationSystemConfig, SupportedAgentsMask), Z_Construct_UScriptStruct_FNavAgentSelector, METADATA_PARAMS(Z_Construct_UClass_UNavigationSystemConfig_Statics::NewProp_SupportedAgentsMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemConfig_Statics::NewProp_SupportedAgentsMask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationSystemConfig_Statics::NewProp_NavigationSystemClass_MetaData[] = {
		{ "Category", "Navigation" },
		{ "MetaClass", "NavigationSystemBase" },
		{ "ModuleRelativePath", "Classes/AI/NavigationSystemConfig.h" },
		{ "NoResetToDefault", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavigationSystemConfig_Statics::NewProp_NavigationSystemClass = { "NavigationSystemClass", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNavigationSystemConfig, NavigationSystemClass), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UNavigationSystemConfig_Statics::NewProp_NavigationSystemClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemConfig_Statics::NewProp_NavigationSystemClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNavigationSystemConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemConfig_Statics::NewProp_bIsOverriden,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemConfig_Statics::NewProp_DefaultAgentName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemConfig_Statics::NewProp_SupportedAgentsMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemConfig_Statics::NewProp_NavigationSystemClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavigationSystemConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavigationSystemConfig>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNavigationSystemConfig_Statics::ClassParams = {
		&UNavigationSystemConfig::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNavigationSystemConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemConfig_Statics::PropPointers),
		0,
		0x001030A2u,
		METADATA_PARAMS(Z_Construct_UClass_UNavigationSystemConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavigationSystemConfig()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNavigationSystemConfig_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNavigationSystemConfig, 1936812660);
	template<> ENGINE_API UClass* StaticClass<UNavigationSystemConfig>()
	{
		return UNavigationSystemConfig::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavigationSystemConfig(Z_Construct_UClass_UNavigationSystemConfig, &UNavigationSystemConfig::StaticClass, TEXT("/Script/Engine"), TEXT("UNavigationSystemConfig"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavigationSystemConfig);
	void UNullNavSysConfig::StaticRegisterNativesUNullNavSysConfig()
	{
	}
	UClass* Z_Construct_UClass_UNullNavSysConfig_NoRegister()
	{
		return UNullNavSysConfig::StaticClass();
	}
	struct Z_Construct_UClass_UNullNavSysConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNullNavSysConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNavigationSystemConfig,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNullNavSysConfig_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AI/NavigationSystemConfig.h" },
		{ "ModuleRelativePath", "Classes/AI/NavigationSystemConfig.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNullNavSysConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNullNavSysConfig>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNullNavSysConfig_Statics::ClassParams = {
		&UNullNavSysConfig::StaticClass,
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
		0x000830A2u,
		METADATA_PARAMS(Z_Construct_UClass_UNullNavSysConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNullNavSysConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNullNavSysConfig()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNullNavSysConfig_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNullNavSysConfig, 2329118167);
	template<> ENGINE_API UClass* StaticClass<UNullNavSysConfig>()
	{
		return UNullNavSysConfig::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNullNavSysConfig(Z_Construct_UClass_UNullNavSysConfig, &UNullNavSysConfig::StaticClass, TEXT("/Script/Engine"), TEXT("UNullNavSysConfig"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNullNavSysConfig);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
