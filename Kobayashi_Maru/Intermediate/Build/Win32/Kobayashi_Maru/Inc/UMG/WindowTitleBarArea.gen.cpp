// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/WindowTitleBarArea.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWindowTitleBarArea() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UWindowTitleBarArea_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWindowTitleBarArea();
	UMG_API UClass* Z_Construct_UClass_UContentWidget();
	UPackage* Z_Construct_UPackage__Script_UMG();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EVerticalAlignment();
// End Cross Module References
	DEFINE_FUNCTION(UWindowTitleBarArea::execSetVerticalAlignment)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InVerticalAlignment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVerticalAlignment(EVerticalAlignment(Z_Param_InVerticalAlignment));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWindowTitleBarArea::execSetHorizontalAlignment)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InHorizontalAlignment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHorizontalAlignment(EHorizontalAlignment(Z_Param_InHorizontalAlignment));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWindowTitleBarArea::execSetPadding)
	{
		P_GET_STRUCT(FMargin,Z_Param_InPadding);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPadding(Z_Param_InPadding);
		P_NATIVE_END;
	}
	void UWindowTitleBarArea::StaticRegisterNativesUWindowTitleBarArea()
	{
		UClass* Class = UWindowTitleBarArea::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetHorizontalAlignment", &UWindowTitleBarArea::execSetHorizontalAlignment },
			{ "SetPadding", &UWindowTitleBarArea::execSetPadding },
			{ "SetVerticalAlignment", &UWindowTitleBarArea::execSetVerticalAlignment },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWindowTitleBarArea_SetHorizontalAlignment_Statics
	{
		struct WindowTitleBarArea_eventSetHorizontalAlignment_Parms
		{
			TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InHorizontalAlignment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWindowTitleBarArea_SetHorizontalAlignment_Statics::NewProp_InHorizontalAlignment = { "InHorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WindowTitleBarArea_eventSetHorizontalAlignment_Parms, InHorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowTitleBarArea_SetHorizontalAlignment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowTitleBarArea_SetHorizontalAlignment_Statics::NewProp_InHorizontalAlignment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWindowTitleBarArea_SetHorizontalAlignment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/WindowTitleBarArea.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowTitleBarArea_SetHorizontalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowTitleBarArea, nullptr, "SetHorizontalAlignment", nullptr, nullptr, sizeof(WindowTitleBarArea_eventSetHorizontalAlignment_Parms), Z_Construct_UFunction_UWindowTitleBarArea_SetHorizontalAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowTitleBarArea_SetHorizontalAlignment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWindowTitleBarArea_SetHorizontalAlignment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowTitleBarArea_SetHorizontalAlignment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWindowTitleBarArea_SetHorizontalAlignment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWindowTitleBarArea_SetHorizontalAlignment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWindowTitleBarArea_SetPadding_Statics
	{
		struct WindowTitleBarArea_eventSetPadding_Parms
		{
			FMargin InPadding;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPadding;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWindowTitleBarArea_SetPadding_Statics::NewProp_InPadding = { "InPadding", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WindowTitleBarArea_eventSetPadding_Parms, InPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowTitleBarArea_SetPadding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowTitleBarArea_SetPadding_Statics::NewProp_InPadding,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWindowTitleBarArea_SetPadding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/WindowTitleBarArea.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowTitleBarArea_SetPadding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowTitleBarArea, nullptr, "SetPadding", nullptr, nullptr, sizeof(WindowTitleBarArea_eventSetPadding_Parms), Z_Construct_UFunction_UWindowTitleBarArea_SetPadding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowTitleBarArea_SetPadding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWindowTitleBarArea_SetPadding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowTitleBarArea_SetPadding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWindowTitleBarArea_SetPadding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWindowTitleBarArea_SetPadding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWindowTitleBarArea_SetVerticalAlignment_Statics
	{
		struct WindowTitleBarArea_eventSetVerticalAlignment_Parms
		{
			TEnumAsByte<EVerticalAlignment> InVerticalAlignment;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InVerticalAlignment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWindowTitleBarArea_SetVerticalAlignment_Statics::NewProp_InVerticalAlignment = { "InVerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WindowTitleBarArea_eventSetVerticalAlignment_Parms, InVerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowTitleBarArea_SetVerticalAlignment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowTitleBarArea_SetVerticalAlignment_Statics::NewProp_InVerticalAlignment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWindowTitleBarArea_SetVerticalAlignment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/WindowTitleBarArea.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowTitleBarArea_SetVerticalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowTitleBarArea, nullptr, "SetVerticalAlignment", nullptr, nullptr, sizeof(WindowTitleBarArea_eventSetVerticalAlignment_Parms), Z_Construct_UFunction_UWindowTitleBarArea_SetVerticalAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowTitleBarArea_SetVerticalAlignment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWindowTitleBarArea_SetVerticalAlignment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowTitleBarArea_SetVerticalAlignment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWindowTitleBarArea_SetVerticalAlignment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWindowTitleBarArea_SetVerticalAlignment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWindowTitleBarArea_NoRegister()
	{
		return UWindowTitleBarArea::StaticClass();
	}
	struct Z_Construct_UClass_UWindowTitleBarArea_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDoubleClickTogglesFullscreen_MetaData[];
#endif
		static void NewProp_bDoubleClickTogglesFullscreen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoubleClickTogglesFullscreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWindowButtonsEnabled_MetaData[];
#endif
		static void NewProp_bWindowButtonsEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWindowButtonsEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWindowTitleBarArea_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UContentWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWindowTitleBarArea_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWindowTitleBarArea_SetHorizontalAlignment, "SetHorizontalAlignment" }, // 352973488
		{ &Z_Construct_UFunction_UWindowTitleBarArea_SetPadding, "SetPadding" }, // 1999449074
		{ &Z_Construct_UFunction_UWindowTitleBarArea_SetVerticalAlignment, "SetVerticalAlignment" }, // 3671241240
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindowTitleBarArea_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* A panel for defining a region of the UI that should allow users to drag the window on desktop platforms.\n*/" },
		{ "IncludePath", "Components/WindowTitleBarArea.h" },
		{ "ModuleRelativePath", "Public/Components/WindowTitleBarArea.h" },
		{ "ToolTip", "A panel for defining a region of the UI that should allow users to drag the window on desktop platforms." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindowTitleBarArea_Statics::NewProp_bDoubleClickTogglesFullscreen_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/** Should double clicking the title bar area toggle fullscreen instead of maximizing the window. */" },
		{ "DisplayName", "Toggle Fullscreen" },
		{ "ModuleRelativePath", "Public/Components/WindowTitleBarArea.h" },
		{ "ToolTip", "Should double clicking the title bar area toggle fullscreen instead of maximizing the window." },
	};
#endif
	void Z_Construct_UClass_UWindowTitleBarArea_Statics::NewProp_bDoubleClickTogglesFullscreen_SetBit(void* Obj)
	{
		((UWindowTitleBarArea*)Obj)->bDoubleClickTogglesFullscreen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWindowTitleBarArea_Statics::NewProp_bDoubleClickTogglesFullscreen = { "bDoubleClickTogglesFullscreen", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWindowTitleBarArea), &Z_Construct_UClass_UWindowTitleBarArea_Statics::NewProp_bDoubleClickTogglesFullscreen_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWindowTitleBarArea_Statics::NewProp_bDoubleClickTogglesFullscreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWindowTitleBarArea_Statics::NewProp_bDoubleClickTogglesFullscreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindowTitleBarArea_Statics::NewProp_bWindowButtonsEnabled_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/** Should the title bar area diaplay window minimize/maximize/close buttons. */" },
		{ "DisplayName", "Window Buttons Enabled" },
		{ "ModuleRelativePath", "Public/Components/WindowTitleBarArea.h" },
		{ "ToolTip", "Should the title bar area diaplay window minimize/maximize/close buttons." },
	};
#endif
	void Z_Construct_UClass_UWindowTitleBarArea_Statics::NewProp_bWindowButtonsEnabled_SetBit(void* Obj)
	{
		((UWindowTitleBarArea*)Obj)->bWindowButtonsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWindowTitleBarArea_Statics::NewProp_bWindowButtonsEnabled = { "bWindowButtonsEnabled", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWindowTitleBarArea), &Z_Construct_UClass_UWindowTitleBarArea_Statics::NewProp_bWindowButtonsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWindowTitleBarArea_Statics::NewProp_bWindowButtonsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWindowTitleBarArea_Statics::NewProp_bWindowButtonsEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWindowTitleBarArea_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindowTitleBarArea_Statics::NewProp_bDoubleClickTogglesFullscreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindowTitleBarArea_Statics::NewProp_bWindowButtonsEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWindowTitleBarArea_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWindowTitleBarArea>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWindowTitleBarArea_Statics::ClassParams = {
		&UWindowTitleBarArea::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWindowTitleBarArea_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWindowTitleBarArea_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWindowTitleBarArea_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWindowTitleBarArea_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWindowTitleBarArea()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWindowTitleBarArea_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWindowTitleBarArea, 755325575);
	template<> UMG_API UClass* StaticClass<UWindowTitleBarArea>()
	{
		return UWindowTitleBarArea::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWindowTitleBarArea(Z_Construct_UClass_UWindowTitleBarArea, &UWindowTitleBarArea::StaticClass, TEXT("/Script/UMG"), TEXT("UWindowTitleBarArea"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWindowTitleBarArea);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
