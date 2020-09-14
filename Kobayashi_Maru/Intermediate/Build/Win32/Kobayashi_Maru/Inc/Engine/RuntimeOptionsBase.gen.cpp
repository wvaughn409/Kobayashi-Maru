// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/RuntimeOptionsBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeOptionsBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_URuntimeOptionsBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_URuntimeOptionsBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void URuntimeOptionsBase::StaticRegisterNativesURuntimeOptionsBase()
	{
	}
	UClass* Z_Construct_UClass_URuntimeOptionsBase_NoRegister()
	{
		return URuntimeOptionsBase::StaticClass();
	}
	struct Z_Construct_UClass_URuntimeOptionsBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URuntimeOptionsBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeOptionsBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n * URuntimeOptionsBase: Base class designed to be subclassed in your game.\n *\n * Supports checking at runtime whether features are enabled/disabled, and changing\n * configuration parameters via console cheats or startup commands.\n *\n * Add new config properties to your subclasses which default to the desired normal state\n * This can be adjusted via the development-only tools (command line or cvar) or via an\n * override in the config hierarchy to adjust it as needed (e.g., via a hotfix).\n *\n * In non-Shipping builds, each property will be exposed both as a console variable and as a\n * command-line argument for easy testing during development.\n *\n * Debug console syntax (disabled in Shipping configurations):\n *   prefix.PropertyName Value\n * Command line syntax (disabled in Shipping configurations):\n *   -prefix.PropertyName=Value\n * DefaultRuntimeOptions.ini syntax (note that there is no prefix for these):\n *   [/Script/YourModule.YourRuntimeOptionsSubclass]\n *   PropertyName=Value\n *\n * Where the prefix is set by the value of OptionCommandPrefix (defaults to \"ro\" but can be overridden)\n *\n * You can also change the name of the ini file that settings are gathered from in your derived\n * UCLASS() declaration\n */" },
		{ "IncludePath", "Engine/RuntimeOptionsBase.h" },
		{ "ModuleRelativePath", "Classes/Engine/RuntimeOptionsBase.h" },
		{ "ToolTip", "URuntimeOptionsBase: Base class designed to be subclassed in your game.\n\nSupports checking at runtime whether features are enabled/disabled, and changing\nconfiguration parameters via console cheats or startup commands.\n\nAdd new config properties to your subclasses which default to the desired normal state\nThis can be adjusted via the development-only tools (command line or cvar) or via an\noverride in the config hierarchy to adjust it as needed (e.g., via a hotfix).\n\nIn non-Shipping builds, each property will be exposed both as a console variable and as a\ncommand-line argument for easy testing during development.\n\nDebug console syntax (disabled in Shipping configurations):\n  prefix.PropertyName Value\nCommand line syntax (disabled in Shipping configurations):\n  -prefix.PropertyName=Value\nDefaultRuntimeOptions.ini syntax (note that there is no prefix for these):\n  [/Script/YourModule.YourRuntimeOptionsSubclass]\n  PropertyName=Value\n\nWhere the prefix is set by the value of OptionCommandPrefix (defaults to \"ro\" but can be overridden)\n\nYou can also change the name of the ini file that settings are gathered from in your derived\nUCLASS() declaration" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URuntimeOptionsBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeOptionsBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URuntimeOptionsBase_Statics::ClassParams = {
		&URuntimeOptionsBase::StaticClass,
		"RuntimeOptions",
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
		METADATA_PARAMS(Z_Construct_UClass_URuntimeOptionsBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeOptionsBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URuntimeOptionsBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URuntimeOptionsBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URuntimeOptionsBase, 2150195722);
	template<> ENGINE_API UClass* StaticClass<URuntimeOptionsBase>()
	{
		return URuntimeOptionsBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URuntimeOptionsBase(Z_Construct_UClass_URuntimeOptionsBase, &URuntimeOptionsBase::StaticClass, TEXT("/Script/Engine"), TEXT("URuntimeOptionsBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeOptionsBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
