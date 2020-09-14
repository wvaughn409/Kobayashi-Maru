// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SignificanceManager/Public/SignificanceManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSignificanceManager() {}
// Cross Module References
	SIGNIFICANCEMANAGER_API UClass* Z_Construct_UClass_USignificanceManager_NoRegister();
	SIGNIFICANCEMANAGER_API UClass* Z_Construct_UClass_USignificanceManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SignificanceManager();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
// End Cross Module References
	void USignificanceManager::StaticRegisterNativesUSignificanceManager()
	{
	}
	UClass* Z_Construct_UClass_USignificanceManager_NoRegister()
	{
		return USignificanceManager::StaticClass();
	}
	struct Z_Construct_UClass_USignificanceManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SignificanceManagerClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SignificanceManagerClassName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USignificanceManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SignificanceManager,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USignificanceManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* The significance manager provides a framework for registering objects by tag to each have a significance\n * value calculated from which a game specific subclass and game logic can make decisions about what level\n * of detail objects should be at, tick frequency, whether to spawn effects, and other such functionality\n *\n * Each object that is registered must have a corresponding unregister event or else a dangling Object reference will\n * be left resulting in an eventual crash once the Object has been garbage collected.\n *\n * Each user of the significance manager is expected to call the Update function from the appropriate location in the\n * game code.  GameViewportClient::Tick may often serve as a good place to do this.\n */" },
		{ "IncludePath", "SignificanceManager.h" },
		{ "ModuleRelativePath", "Public/SignificanceManager.h" },
		{ "ToolTip", "The significance manager provides a framework for registering objects by tag to each have a significance\n* value calculated from which a game specific subclass and game logic can make decisions about what level\n* of detail objects should be at, tick frequency, whether to spawn effects, and other such functionality\n*\n* Each object that is registered must have a corresponding unregister event or else a dangling Object reference will\n* be left resulting in an eventual crash once the Object has been garbage collected.\n*\n* Each user of the significance manager is expected to call the Update function from the appropriate location in the\n* game code.  GameViewportClient::Tick may often serve as a good place to do this." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USignificanceManager_Statics::NewProp_SignificanceManagerClassName_MetaData[] = {
		{ "Category", "DefaultClasses" },
		{ "Comment", "// Game specific significance class to instantiate\n" },
		{ "DisplayName", "Significance Manager Class" },
		{ "MetaClass", "SignificanceManager" },
		{ "ModuleRelativePath", "Public/SignificanceManager.h" },
		{ "ToolTip", "Game specific significance class to instantiate" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USignificanceManager_Statics::NewProp_SignificanceManagerClassName = { "SignificanceManagerClassName", nullptr, (EPropertyFlags)0x0040000002044001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USignificanceManager, SignificanceManagerClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_USignificanceManager_Statics::NewProp_SignificanceManagerClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USignificanceManager_Statics::NewProp_SignificanceManagerClassName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USignificanceManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USignificanceManager_Statics::NewProp_SignificanceManagerClassName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USignificanceManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USignificanceManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USignificanceManager_Statics::ClassParams = {
		&USignificanceManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USignificanceManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USignificanceManager_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USignificanceManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USignificanceManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USignificanceManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USignificanceManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USignificanceManager, 952253421);
	template<> SIGNIFICANCEMANAGER_API UClass* StaticClass<USignificanceManager>()
	{
		return USignificanceManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USignificanceManager(Z_Construct_UClass_USignificanceManager, &USignificanceManager::StaticClass, TEXT("/Script/SignificanceManager"), TEXT("USignificanceManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USignificanceManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
