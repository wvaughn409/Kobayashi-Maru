// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/WidgetSwitcher.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetSwitcher() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UWidgetSwitcher_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetSwitcher();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UWidgetSwitcher::execGetActiveWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWidget**)Z_Param__Result=P_THIS->GetActiveWidget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetSwitcher::execGetWidgetAtIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWidget**)Z_Param__Result=P_THIS->GetWidgetAtIndex(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetSwitcher::execSetActiveWidget)
	{
		P_GET_OBJECT(UWidget,Z_Param_Widget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActiveWidget(Z_Param_Widget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetSwitcher::execSetActiveWidgetIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActiveWidgetIndex(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetSwitcher::execGetActiveWidgetIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetActiveWidgetIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetSwitcher::execGetNumWidgets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumWidgets();
		P_NATIVE_END;
	}
	void UWidgetSwitcher::StaticRegisterNativesUWidgetSwitcher()
	{
		UClass* Class = UWidgetSwitcher::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActiveWidget", &UWidgetSwitcher::execGetActiveWidget },
			{ "GetActiveWidgetIndex", &UWidgetSwitcher::execGetActiveWidgetIndex },
			{ "GetNumWidgets", &UWidgetSwitcher::execGetNumWidgets },
			{ "GetWidgetAtIndex", &UWidgetSwitcher::execGetWidgetAtIndex },
			{ "SetActiveWidget", &UWidgetSwitcher::execSetActiveWidget },
			{ "SetActiveWidgetIndex", &UWidgetSwitcher::execSetActiveWidgetIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidget_Statics
	{
		struct WidgetSwitcher_eventGetActiveWidget_Parms
		{
			UWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetSwitcher_eventGetActiveWidget_Parms, ReturnValue), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidget_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidget_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Switcher" },
		{ "Comment", "/** Get the reference of the currently active widget */" },
		{ "ModuleRelativePath", "Public/Components/WidgetSwitcher.h" },
		{ "ToolTip", "Get the reference of the currently active widget" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetSwitcher, nullptr, "GetActiveWidget", nullptr, nullptr, sizeof(WidgetSwitcher_eventGetActiveWidget_Parms), Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidgetIndex_Statics
	{
		struct WidgetSwitcher_eventGetActiveWidgetIndex_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidgetIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetSwitcher_eventGetActiveWidgetIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidgetIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidgetIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidgetIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Switcher" },
		{ "Comment", "/** Gets the slot index of the currently active widget */" },
		{ "ModuleRelativePath", "Public/Components/WidgetSwitcher.h" },
		{ "ToolTip", "Gets the slot index of the currently active widget" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidgetIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetSwitcher, nullptr, "GetActiveWidgetIndex", nullptr, nullptr, sizeof(WidgetSwitcher_eventGetActiveWidgetIndex_Parms), Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidgetIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidgetIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidgetIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidgetIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidgetIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidgetIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetSwitcher_GetNumWidgets_Statics
	{
		struct WidgetSwitcher_eventGetNumWidgets_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWidgetSwitcher_GetNumWidgets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetSwitcher_eventGetNumWidgets_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetSwitcher_GetNumWidgets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetSwitcher_GetNumWidgets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetSwitcher_GetNumWidgets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Switcher" },
		{ "Comment", "/** Gets the number of widgets that this switcher manages. */" },
		{ "ModuleRelativePath", "Public/Components/WidgetSwitcher.h" },
		{ "ToolTip", "Gets the number of widgets that this switcher manages." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetSwitcher_GetNumWidgets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetSwitcher, nullptr, "GetNumWidgets", nullptr, nullptr, sizeof(WidgetSwitcher_eventGetNumWidgets_Parms), Z_Construct_UFunction_UWidgetSwitcher_GetNumWidgets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetSwitcher_GetNumWidgets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetSwitcher_GetNumWidgets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetSwitcher_GetNumWidgets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetSwitcher_GetNumWidgets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetSwitcher_GetNumWidgets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex_Statics
	{
		struct WidgetSwitcher_eventGetWidgetAtIndex_Parms
		{
			int32 Index;
			UWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetSwitcher_eventGetWidgetAtIndex_Parms, ReturnValue), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetSwitcher_eventGetWidgetAtIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Switcher" },
		{ "Comment", "/** Get a widget at the provided index */" },
		{ "ModuleRelativePath", "Public/Components/WidgetSwitcher.h" },
		{ "ToolTip", "Get a widget at the provided index" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetSwitcher, nullptr, "GetWidgetAtIndex", nullptr, nullptr, sizeof(WidgetSwitcher_eventGetWidgetAtIndex_Parms), Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidget_Statics
	{
		struct WidgetSwitcher_eventSetActiveWidget_Parms
		{
			UWidget* Widget;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidget_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidget_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetSwitcher_eventSetActiveWidget_Parms, Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidget_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidget_Statics::NewProp_Widget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidget_Statics::NewProp_Widget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Switcher" },
		{ "Comment", "/** Activates the widget and makes it the active index. */" },
		{ "ModuleRelativePath", "Public/Components/WidgetSwitcher.h" },
		{ "ToolTip", "Activates the widget and makes it the active index." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetSwitcher, nullptr, "SetActiveWidget", nullptr, nullptr, sizeof(WidgetSwitcher_eventSetActiveWidget_Parms), Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidgetIndex_Statics
	{
		struct WidgetSwitcher_eventSetActiveWidgetIndex_Parms
		{
			int32 Index;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidgetIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetSwitcher_eventSetActiveWidgetIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidgetIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidgetIndex_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidgetIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Switcher" },
		{ "Comment", "/** Activates the widget at the specified index. */" },
		{ "ModuleRelativePath", "Public/Components/WidgetSwitcher.h" },
		{ "ToolTip", "Activates the widget at the specified index." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidgetIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetSwitcher, nullptr, "SetActiveWidgetIndex", nullptr, nullptr, sizeof(WidgetSwitcher_eventSetActiveWidgetIndex_Parms), Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidgetIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidgetIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidgetIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidgetIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidgetIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidgetIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWidgetSwitcher_NoRegister()
	{
		return UWidgetSwitcher::StaticClass();
	}
	struct Z_Construct_UClass_UWidgetSwitcher_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveWidgetIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ActiveWidgetIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidgetSwitcher_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPanelWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWidgetSwitcher_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidget, "GetActiveWidget" }, // 3823656699
		{ &Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidgetIndex, "GetActiveWidgetIndex" }, // 1661420876
		{ &Z_Construct_UFunction_UWidgetSwitcher_GetNumWidgets, "GetNumWidgets" }, // 2448970788
		{ &Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex, "GetWidgetAtIndex" }, // 3782683721
		{ &Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidget, "SetActiveWidget" }, // 2451631537
		{ &Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidgetIndex, "SetActiveWidgetIndex" }, // 4165022205
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetSwitcher_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A widget switcher is like a tab control, but without tabs. At most one widget is visible at time.\n */" },
		{ "IncludePath", "Components/WidgetSwitcher.h" },
		{ "ModuleRelativePath", "Public/Components/WidgetSwitcher.h" },
		{ "ToolTip", "A widget switcher is like a tab control, but without tabs. At most one widget is visible at time." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetSwitcher_Statics::NewProp_ActiveWidgetIndex_MetaData[] = {
		{ "Category", "Switcher" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The slot index to display */" },
		{ "ModuleRelativePath", "Public/Components/WidgetSwitcher.h" },
		{ "ToolTip", "The slot index to display" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWidgetSwitcher_Statics::NewProp_ActiveWidgetIndex = { "ActiveWidgetIndex", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetSwitcher, ActiveWidgetIndex), METADATA_PARAMS(Z_Construct_UClass_UWidgetSwitcher_Statics::NewProp_ActiveWidgetIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetSwitcher_Statics::NewProp_ActiveWidgetIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidgetSwitcher_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetSwitcher_Statics::NewProp_ActiveWidgetIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidgetSwitcher_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetSwitcher>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWidgetSwitcher_Statics::ClassParams = {
		&UWidgetSwitcher::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWidgetSwitcher_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetSwitcher_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWidgetSwitcher_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetSwitcher_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidgetSwitcher()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWidgetSwitcher_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWidgetSwitcher, 2846526274);
	template<> UMG_API UClass* StaticClass<UWidgetSwitcher>()
	{
		return UWidgetSwitcher::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWidgetSwitcher(Z_Construct_UClass_UWidgetSwitcher, &UWidgetSwitcher::StaticClass, TEXT("/Script/UMG"), TEXT("UWidgetSwitcher"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetSwitcher);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
