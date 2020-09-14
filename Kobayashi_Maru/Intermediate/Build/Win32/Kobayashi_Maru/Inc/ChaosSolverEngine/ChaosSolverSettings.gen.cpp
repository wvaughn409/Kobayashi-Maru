// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosSolverEngine/Public/Chaos/ChaosSolverSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosSolverSettings() {}
// Cross Module References
	CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_UChaosSolverSettings_NoRegister();
	CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_UChaosSolverSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_ChaosSolverEngine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
// End Cross Module References
	void UChaosSolverSettings::StaticRegisterNativesUChaosSolverSettings()
	{
	}
	UClass* Z_Construct_UClass_UChaosSolverSettings_NoRegister()
	{
		return UChaosSolverSettings::StaticClass();
	}
	struct Z_Construct_UClass_UChaosSolverSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultChaosSolverActorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultChaosSolverActorClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChaosSolverSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosSolverEngine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosSolverSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Settings class for the Chaos Solver\n */" },
		{ "DisplayName", "Chaos Solver" },
		{ "IncludePath", "Chaos/ChaosSolverSettings.h" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverSettings.h" },
		{ "ToolTip", "Settings class for the Chaos Solver" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosSolverSettings_Statics::NewProp_DefaultChaosSolverActorClass_MetaData[] = {
		{ "Category", "GameInstance" },
		{ "Comment", "/** The class to use when auto-creating a default chaos solver actor */" },
		{ "MetaClass", "ChaosSolverActor" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverSettings.h" },
		{ "ToolTip", "The class to use when auto-creating a default chaos solver actor" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosSolverSettings_Statics::NewProp_DefaultChaosSolverActorClass = { "DefaultChaosSolverActorClass", nullptr, (EPropertyFlags)0x0010000002004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosSolverSettings, DefaultChaosSolverActorClass), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UChaosSolverSettings_Statics::NewProp_DefaultChaosSolverActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosSolverSettings_Statics::NewProp_DefaultChaosSolverActorClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChaosSolverSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosSolverSettings_Statics::NewProp_DefaultChaosSolverActorClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChaosSolverSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChaosSolverSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UChaosSolverSettings_Statics::ClassParams = {
		&UChaosSolverSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UChaosSolverSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UChaosSolverSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UChaosSolverSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosSolverSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChaosSolverSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UChaosSolverSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UChaosSolverSettings, 4029402677);
	template<> CHAOSSOLVERENGINE_API UClass* StaticClass<UChaosSolverSettings>()
	{
		return UChaosSolverSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UChaosSolverSettings(Z_Construct_UClass_UChaosSolverSettings, &UChaosSolverSettings::StaticClass, TEXT("/Script/ChaosSolverEngine"), TEXT("UChaosSolverSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChaosSolverSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
