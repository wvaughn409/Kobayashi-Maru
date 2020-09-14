// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutomationUtils/Public/AutomationUtilsBlueprintLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutomationUtilsBlueprintLibrary() {}
// Cross Module References
	AUTOMATIONUTILS_API UClass* Z_Construct_UClass_UAutomationUtilsBlueprintLibrary_NoRegister();
	AUTOMATIONUTILS_API UClass* Z_Construct_UClass_UAutomationUtilsBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AutomationUtils();
// End Cross Module References
	DEFINE_FUNCTION(UAutomationUtilsBlueprintLibrary::execTakeGameplayAutomationScreenshot)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ScreenshotName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxGlobalError);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxLocalError);
		P_GET_PROPERTY(FStrProperty,Z_Param_MapNameOverride);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAutomationUtilsBlueprintLibrary::TakeGameplayAutomationScreenshot(Z_Param_ScreenshotName,Z_Param_MaxGlobalError,Z_Param_MaxLocalError,Z_Param_MapNameOverride);
		P_NATIVE_END;
	}
	void UAutomationUtilsBlueprintLibrary::StaticRegisterNativesUAutomationUtilsBlueprintLibrary()
	{
		UClass* Class = UAutomationUtilsBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TakeGameplayAutomationScreenshot", &UAutomationUtilsBlueprintLibrary::execTakeGameplayAutomationScreenshot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Statics
	{
		struct AutomationUtilsBlueprintLibrary_eventTakeGameplayAutomationScreenshot_Parms
		{
			FString ScreenshotName;
			float MaxGlobalError;
			float MaxLocalError;
			FString MapNameOverride;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MapNameOverride;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxLocalError;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxGlobalError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenshotName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ScreenshotName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Statics::NewProp_MapNameOverride = { "MapNameOverride", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutomationUtilsBlueprintLibrary_eventTakeGameplayAutomationScreenshot_Parms, MapNameOverride), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Statics::NewProp_MaxLocalError = { "MaxLocalError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutomationUtilsBlueprintLibrary_eventTakeGameplayAutomationScreenshot_Parms, MaxLocalError), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Statics::NewProp_MaxGlobalError = { "MaxGlobalError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutomationUtilsBlueprintLibrary_eventTakeGameplayAutomationScreenshot_Parms, MaxGlobalError), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Statics::NewProp_ScreenshotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Statics::NewProp_ScreenshotName = { "ScreenshotName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutomationUtilsBlueprintLibrary_eventTakeGameplayAutomationScreenshot_Parms, ScreenshotName), METADATA_PARAMS(Z_Construct_UFunction_UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Statics::NewProp_ScreenshotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Statics::NewProp_ScreenshotName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Statics::NewProp_MapNameOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Statics::NewProp_MaxLocalError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Statics::NewProp_MaxGlobalError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Statics::NewProp_ScreenshotName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "CPP_Default_MapNameOverride", "" },
		{ "CPP_Default_MaxGlobalError", "0.020000" },
		{ "CPP_Default_MaxLocalError", "0.120000" },
		{ "ModuleRelativePath", "Public/AutomationUtilsBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationUtilsBlueprintLibrary, nullptr, "TakeGameplayAutomationScreenshot", nullptr, nullptr, sizeof(AutomationUtilsBlueprintLibrary_eventTakeGameplayAutomationScreenshot_Parms), Z_Construct_UFunction_UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAutomationUtilsBlueprintLibrary_NoRegister()
	{
		return UAutomationUtilsBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UAutomationUtilsBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAutomationUtilsBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AutomationUtils,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAutomationUtilsBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot, "TakeGameplayAutomationScreenshot" }, // 39150537
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationUtilsBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AutomationUtilsBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/AutomationUtilsBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAutomationUtilsBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutomationUtilsBlueprintLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAutomationUtilsBlueprintLibrary_Statics::ClassParams = {
		&UAutomationUtilsBlueprintLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAutomationUtilsBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationUtilsBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAutomationUtilsBlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAutomationUtilsBlueprintLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAutomationUtilsBlueprintLibrary, 473765368);
	template<> AUTOMATIONUTILS_API UClass* StaticClass<UAutomationUtilsBlueprintLibrary>()
	{
		return UAutomationUtilsBlueprintLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAutomationUtilsBlueprintLibrary(Z_Construct_UClass_UAutomationUtilsBlueprintLibrary, &UAutomationUtilsBlueprintLibrary::StaticClass, TEXT("/Script/AutomationUtils"), TEXT("UAutomationUtilsBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAutomationUtilsBlueprintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
