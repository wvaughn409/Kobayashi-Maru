// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/ScrollBox.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScrollBox() {}
// Cross Module References
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnUserScrolledEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UClass* Z_Construct_UClass_UScrollBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UScrollBox();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_EDescendantScrollDestination();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EConsumeMouseWheel();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EOrientation();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateVisibility();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_EScrollWhenFocusChanges();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleAsset_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FScrollBarStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FScrollBoxStyle();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UMG_OnUserScrolledEvent__DelegateSignature_Statics
	{
		struct _Script_UMG_eventOnUserScrolledEvent_Parms
		{
			float CurrentOffset;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UMG_OnUserScrolledEvent__DelegateSignature_Statics::NewProp_CurrentOffset = { "CurrentOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UMG_eventOnUserScrolledEvent_Parms, CurrentOffset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMG_OnUserScrolledEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_OnUserScrolledEvent__DelegateSignature_Statics::NewProp_CurrentOffset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMG_OnUserScrolledEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMG_OnUserScrolledEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, nullptr, "OnUserScrolledEvent__DelegateSignature", nullptr, nullptr, sizeof(_Script_UMG_eventOnUserScrolledEvent_Parms), Z_Construct_UDelegateFunction_UMG_OnUserScrolledEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnUserScrolledEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMG_OnUserScrolledEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnUserScrolledEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMG_OnUserScrolledEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UMG_OnUserScrolledEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UScrollBox::execScrollWidgetIntoView)
	{
		P_GET_OBJECT(UWidget,Z_Param_WidgetToFind);
		P_GET_UBOOL(Z_Param_AnimateScroll);
		P_GET_ENUM(EDescendantScrollDestination,Z_Param_ScrollDestination);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Padding);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ScrollWidgetIntoView(Z_Param_WidgetToFind,Z_Param_AnimateScroll,EDescendantScrollDestination(Z_Param_ScrollDestination),Z_Param_Padding);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScrollBox::execScrollToEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ScrollToEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScrollBox::execScrollToStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ScrollToStart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScrollBox::execGetViewOffsetFraction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetViewOffsetFraction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScrollBox::execGetScrollOffsetOfEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetScrollOffsetOfEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScrollBox::execGetScrollOffset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetScrollOffset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScrollBox::execSetScrollOffset)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewScrollOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetScrollOffset(Z_Param_NewScrollOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScrollBox::execEndInertialScrolling)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndInertialScrolling();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScrollBox::execSetWheelScrollMultiplier)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewWheelScrollMultiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWheelScrollMultiplier(Z_Param_NewWheelScrollMultiplier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScrollBox::execSetAnimateWheelScrolling)
	{
		P_GET_UBOOL(Z_Param_bShouldAnimateWheelScrolling);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAnimateWheelScrolling(Z_Param_bShouldAnimateWheelScrolling);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScrollBox::execSetAllowOverscroll)
	{
		P_GET_UBOOL(Z_Param_NewAllowOverscroll);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAllowOverscroll(Z_Param_NewAllowOverscroll);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScrollBox::execSetAlwaysShowScrollbar)
	{
		P_GET_UBOOL(Z_Param_NewAlwaysShowScrollbar);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAlwaysShowScrollbar(Z_Param_NewAlwaysShowScrollbar);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScrollBox::execSetScrollbarPadding)
	{
		P_GET_STRUCT_REF(FMargin,Z_Param_Out_NewScrollbarPadding);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetScrollbarPadding(Z_Param_Out_NewScrollbarPadding);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScrollBox::execSetScrollbarThickness)
	{
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_NewScrollbarThickness);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetScrollbarThickness(Z_Param_Out_NewScrollbarThickness);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScrollBox::execSetScrollBarVisibility)
	{
		P_GET_ENUM(ESlateVisibility,Z_Param_NewScrollBarVisibility);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetScrollBarVisibility(ESlateVisibility(Z_Param_NewScrollBarVisibility));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScrollBox::execSetOrientation)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_NewOrientation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOrientation(EOrientation(Z_Param_NewOrientation));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScrollBox::execSetConsumeMouseWheel)
	{
		P_GET_ENUM(EConsumeMouseWheel,Z_Param_NewConsumeMouseWheel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetConsumeMouseWheel(EConsumeMouseWheel(Z_Param_NewConsumeMouseWheel));
		P_NATIVE_END;
	}
	void UScrollBox::StaticRegisterNativesUScrollBox()
	{
		UClass* Class = UScrollBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndInertialScrolling", &UScrollBox::execEndInertialScrolling },
			{ "GetScrollOffset", &UScrollBox::execGetScrollOffset },
			{ "GetScrollOffsetOfEnd", &UScrollBox::execGetScrollOffsetOfEnd },
			{ "GetViewOffsetFraction", &UScrollBox::execGetViewOffsetFraction },
			{ "ScrollToEnd", &UScrollBox::execScrollToEnd },
			{ "ScrollToStart", &UScrollBox::execScrollToStart },
			{ "ScrollWidgetIntoView", &UScrollBox::execScrollWidgetIntoView },
			{ "SetAllowOverscroll", &UScrollBox::execSetAllowOverscroll },
			{ "SetAlwaysShowScrollbar", &UScrollBox::execSetAlwaysShowScrollbar },
			{ "SetAnimateWheelScrolling", &UScrollBox::execSetAnimateWheelScrolling },
			{ "SetConsumeMouseWheel", &UScrollBox::execSetConsumeMouseWheel },
			{ "SetOrientation", &UScrollBox::execSetOrientation },
			{ "SetScrollbarPadding", &UScrollBox::execSetScrollbarPadding },
			{ "SetScrollbarThickness", &UScrollBox::execSetScrollbarThickness },
			{ "SetScrollBarVisibility", &UScrollBox::execSetScrollBarVisibility },
			{ "SetScrollOffset", &UScrollBox::execSetScrollOffset },
			{ "SetWheelScrollMultiplier", &UScrollBox::execSetWheelScrollMultiplier },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UScrollBox_EndInertialScrolling_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScrollBox_EndInertialScrolling_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scroll" },
		{ "Comment", "/** Instantly stops any inertial scrolling that is currently in progress */" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
		{ "ToolTip", "Instantly stops any inertial scrolling that is currently in progress" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScrollBox_EndInertialScrolling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScrollBox, nullptr, "EndInertialScrolling", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScrollBox_EndInertialScrolling_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_EndInertialScrolling_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScrollBox_EndInertialScrolling()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScrollBox_EndInertialScrolling_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScrollBox_GetScrollOffset_Statics
	{
		struct ScrollBox_eventGetScrollOffset_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UScrollBox_GetScrollOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScrollBox_eventGetScrollOffset_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScrollBox_GetScrollOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScrollBox_GetScrollOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScrollBox_GetScrollOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/**\n\x09 * Gets the scroll offset of the scrollbox in Slate Units.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
		{ "ToolTip", "Gets the scroll offset of the scrollbox in Slate Units." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScrollBox_GetScrollOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScrollBox, nullptr, "GetScrollOffset", nullptr, nullptr, sizeof(ScrollBox_eventGetScrollOffset_Parms), Z_Construct_UFunction_UScrollBox_GetScrollOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_GetScrollOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScrollBox_GetScrollOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_GetScrollOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScrollBox_GetScrollOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScrollBox_GetScrollOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScrollBox_GetScrollOffsetOfEnd_Statics
	{
		struct ScrollBox_eventGetScrollOffsetOfEnd_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UScrollBox_GetScrollOffsetOfEnd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScrollBox_eventGetScrollOffsetOfEnd_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScrollBox_GetScrollOffsetOfEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScrollBox_GetScrollOffsetOfEnd_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScrollBox_GetScrollOffsetOfEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/** Gets the scroll offset of the bottom of the ScrollBox in Slate Units. */" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
		{ "ToolTip", "Gets the scroll offset of the bottom of the ScrollBox in Slate Units." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScrollBox_GetScrollOffsetOfEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScrollBox, nullptr, "GetScrollOffsetOfEnd", nullptr, nullptr, sizeof(ScrollBox_eventGetScrollOffsetOfEnd_Parms), Z_Construct_UFunction_UScrollBox_GetScrollOffsetOfEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_GetScrollOffsetOfEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScrollBox_GetScrollOffsetOfEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_GetScrollOffsetOfEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScrollBox_GetScrollOffsetOfEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScrollBox_GetScrollOffsetOfEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScrollBox_GetViewOffsetFraction_Statics
	{
		struct ScrollBox_eventGetViewOffsetFraction_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UScrollBox_GetViewOffsetFraction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScrollBox_eventGetViewOffsetFraction_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScrollBox_GetViewOffsetFraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScrollBox_GetViewOffsetFraction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScrollBox_GetViewOffsetFraction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScrollBox_GetViewOffsetFraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScrollBox, nullptr, "GetViewOffsetFraction", nullptr, nullptr, sizeof(ScrollBox_eventGetViewOffsetFraction_Parms), Z_Construct_UFunction_UScrollBox_GetViewOffsetFraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_GetViewOffsetFraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScrollBox_GetViewOffsetFraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_GetViewOffsetFraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScrollBox_GetViewOffsetFraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScrollBox_GetViewOffsetFraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScrollBox_ScrollToEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScrollBox_ScrollToEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/** Scrolls the ScrollBox to the bottom instantly during the next layout pass. */" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
		{ "ToolTip", "Scrolls the ScrollBox to the bottom instantly during the next layout pass." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScrollBox_ScrollToEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScrollBox, nullptr, "ScrollToEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScrollBox_ScrollToEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_ScrollToEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScrollBox_ScrollToEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScrollBox_ScrollToEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScrollBox_ScrollToStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScrollBox_ScrollToStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/** Scrolls the ScrollBox to the top instantly */" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
		{ "ToolTip", "Scrolls the ScrollBox to the top instantly" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScrollBox_ScrollToStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScrollBox, nullptr, "ScrollToStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScrollBox_ScrollToStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_ScrollToStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScrollBox_ScrollToStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScrollBox_ScrollToStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView_Statics
	{
		struct ScrollBox_eventScrollWidgetIntoView_Parms
		{
			UWidget* WidgetToFind;
			bool AnimateScroll;
			EDescendantScrollDestination ScrollDestination;
			float Padding;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Padding;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ScrollDestination;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ScrollDestination_Underlying;
		static void NewProp_AnimateScroll_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AnimateScroll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetToFind_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WidgetToFind;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScrollBox_eventScrollWidgetIntoView_Parms, Padding), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView_Statics::NewProp_ScrollDestination = { "ScrollDestination", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScrollBox_eventScrollWidgetIntoView_Parms, ScrollDestination), Z_Construct_UEnum_Slate_EDescendantScrollDestination, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView_Statics::NewProp_ScrollDestination_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView_Statics::NewProp_AnimateScroll_SetBit(void* Obj)
	{
		((ScrollBox_eventScrollWidgetIntoView_Parms*)Obj)->AnimateScroll = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView_Statics::NewProp_AnimateScroll = { "AnimateScroll", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ScrollBox_eventScrollWidgetIntoView_Parms), &Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView_Statics::NewProp_AnimateScroll_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView_Statics::NewProp_WidgetToFind_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView_Statics::NewProp_WidgetToFind = { "WidgetToFind", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScrollBox_eventScrollWidgetIntoView_Parms, WidgetToFind), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView_Statics::NewProp_WidgetToFind_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView_Statics::NewProp_WidgetToFind_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView_Statics::NewProp_Padding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView_Statics::NewProp_ScrollDestination,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView_Statics::NewProp_ScrollDestination_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView_Statics::NewProp_AnimateScroll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView_Statics::NewProp_WidgetToFind,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/** Scrolls the ScrollBox to the widget during the next layout pass. */" },
		{ "CPP_Default_AnimateScroll", "true" },
		{ "CPP_Default_Padding", "0.000000" },
		{ "CPP_Default_ScrollDestination", "IntoView" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
		{ "ToolTip", "Scrolls the ScrollBox to the widget during the next layout pass." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScrollBox, nullptr, "ScrollWidgetIntoView", nullptr, nullptr, sizeof(ScrollBox_eventScrollWidgetIntoView_Parms), Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScrollBox_SetAllowOverscroll_Statics
	{
		struct ScrollBox_eventSetAllowOverscroll_Parms
		{
			bool NewAllowOverscroll;
		};
		static void NewProp_NewAllowOverscroll_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewAllowOverscroll;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UScrollBox_SetAllowOverscroll_Statics::NewProp_NewAllowOverscroll_SetBit(void* Obj)
	{
		((ScrollBox_eventSetAllowOverscroll_Parms*)Obj)->NewAllowOverscroll = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScrollBox_SetAllowOverscroll_Statics::NewProp_NewAllowOverscroll = { "NewAllowOverscroll", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ScrollBox_eventSetAllowOverscroll_Parms), &Z_Construct_UFunction_UScrollBox_SetAllowOverscroll_Statics::NewProp_NewAllowOverscroll_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScrollBox_SetAllowOverscroll_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScrollBox_SetAllowOverscroll_Statics::NewProp_NewAllowOverscroll,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScrollBox_SetAllowOverscroll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scroll" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScrollBox_SetAllowOverscroll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScrollBox, nullptr, "SetAllowOverscroll", nullptr, nullptr, sizeof(ScrollBox_eventSetAllowOverscroll_Parms), Z_Construct_UFunction_UScrollBox_SetAllowOverscroll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_SetAllowOverscroll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScrollBox_SetAllowOverscroll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_SetAllowOverscroll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScrollBox_SetAllowOverscroll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScrollBox_SetAllowOverscroll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScrollBox_SetAlwaysShowScrollbar_Statics
	{
		struct ScrollBox_eventSetAlwaysShowScrollbar_Parms
		{
			bool NewAlwaysShowScrollbar;
		};
		static void NewProp_NewAlwaysShowScrollbar_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewAlwaysShowScrollbar;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UScrollBox_SetAlwaysShowScrollbar_Statics::NewProp_NewAlwaysShowScrollbar_SetBit(void* Obj)
	{
		((ScrollBox_eventSetAlwaysShowScrollbar_Parms*)Obj)->NewAlwaysShowScrollbar = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScrollBox_SetAlwaysShowScrollbar_Statics::NewProp_NewAlwaysShowScrollbar = { "NewAlwaysShowScrollbar", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ScrollBox_eventSetAlwaysShowScrollbar_Parms), &Z_Construct_UFunction_UScrollBox_SetAlwaysShowScrollbar_Statics::NewProp_NewAlwaysShowScrollbar_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScrollBox_SetAlwaysShowScrollbar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScrollBox_SetAlwaysShowScrollbar_Statics::NewProp_NewAlwaysShowScrollbar,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScrollBox_SetAlwaysShowScrollbar_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scroll" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScrollBox_SetAlwaysShowScrollbar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScrollBox, nullptr, "SetAlwaysShowScrollbar", nullptr, nullptr, sizeof(ScrollBox_eventSetAlwaysShowScrollbar_Parms), Z_Construct_UFunction_UScrollBox_SetAlwaysShowScrollbar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_SetAlwaysShowScrollbar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScrollBox_SetAlwaysShowScrollbar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_SetAlwaysShowScrollbar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScrollBox_SetAlwaysShowScrollbar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScrollBox_SetAlwaysShowScrollbar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScrollBox_SetAnimateWheelScrolling_Statics
	{
		struct ScrollBox_eventSetAnimateWheelScrolling_Parms
		{
			bool bShouldAnimateWheelScrolling;
		};
		static void NewProp_bShouldAnimateWheelScrolling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldAnimateWheelScrolling;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UScrollBox_SetAnimateWheelScrolling_Statics::NewProp_bShouldAnimateWheelScrolling_SetBit(void* Obj)
	{
		((ScrollBox_eventSetAnimateWheelScrolling_Parms*)Obj)->bShouldAnimateWheelScrolling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScrollBox_SetAnimateWheelScrolling_Statics::NewProp_bShouldAnimateWheelScrolling = { "bShouldAnimateWheelScrolling", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ScrollBox_eventSetAnimateWheelScrolling_Parms), &Z_Construct_UFunction_UScrollBox_SetAnimateWheelScrolling_Statics::NewProp_bShouldAnimateWheelScrolling_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScrollBox_SetAnimateWheelScrolling_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScrollBox_SetAnimateWheelScrolling_Statics::NewProp_bShouldAnimateWheelScrolling,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScrollBox_SetAnimateWheelScrolling_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scroll" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScrollBox_SetAnimateWheelScrolling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScrollBox, nullptr, "SetAnimateWheelScrolling", nullptr, nullptr, sizeof(ScrollBox_eventSetAnimateWheelScrolling_Parms), Z_Construct_UFunction_UScrollBox_SetAnimateWheelScrolling_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_SetAnimateWheelScrolling_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScrollBox_SetAnimateWheelScrolling_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_SetAnimateWheelScrolling_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScrollBox_SetAnimateWheelScrolling()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScrollBox_SetAnimateWheelScrolling_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScrollBox_SetConsumeMouseWheel_Statics
	{
		struct ScrollBox_eventSetConsumeMouseWheel_Parms
		{
			EConsumeMouseWheel NewConsumeMouseWheel;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewConsumeMouseWheel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewConsumeMouseWheel_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UScrollBox_SetConsumeMouseWheel_Statics::NewProp_NewConsumeMouseWheel = { "NewConsumeMouseWheel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScrollBox_eventSetConsumeMouseWheel_Parms, NewConsumeMouseWheel), Z_Construct_UEnum_SlateCore_EConsumeMouseWheel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UScrollBox_SetConsumeMouseWheel_Statics::NewProp_NewConsumeMouseWheel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScrollBox_SetConsumeMouseWheel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScrollBox_SetConsumeMouseWheel_Statics::NewProp_NewConsumeMouseWheel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScrollBox_SetConsumeMouseWheel_Statics::NewProp_NewConsumeMouseWheel_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScrollBox_SetConsumeMouseWheel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scroll" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScrollBox_SetConsumeMouseWheel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScrollBox, nullptr, "SetConsumeMouseWheel", nullptr, nullptr, sizeof(ScrollBox_eventSetConsumeMouseWheel_Parms), Z_Construct_UFunction_UScrollBox_SetConsumeMouseWheel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_SetConsumeMouseWheel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScrollBox_SetConsumeMouseWheel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_SetConsumeMouseWheel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScrollBox_SetConsumeMouseWheel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScrollBox_SetConsumeMouseWheel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScrollBox_SetOrientation_Statics
	{
		struct ScrollBox_eventSetOrientation_Parms
		{
			TEnumAsByte<EOrientation> NewOrientation;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewOrientation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UScrollBox_SetOrientation_Statics::NewProp_NewOrientation = { "NewOrientation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScrollBox_eventSetOrientation_Parms, NewOrientation), Z_Construct_UEnum_SlateCore_EOrientation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScrollBox_SetOrientation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScrollBox_SetOrientation_Statics::NewProp_NewOrientation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScrollBox_SetOrientation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scroll" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScrollBox_SetOrientation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScrollBox, nullptr, "SetOrientation", nullptr, nullptr, sizeof(ScrollBox_eventSetOrientation_Parms), Z_Construct_UFunction_UScrollBox_SetOrientation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_SetOrientation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScrollBox_SetOrientation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_SetOrientation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScrollBox_SetOrientation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScrollBox_SetOrientation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScrollBox_SetScrollbarPadding_Statics
	{
		struct ScrollBox_eventSetScrollbarPadding_Parms
		{
			FMargin NewScrollbarPadding;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewScrollbarPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewScrollbarPadding;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScrollBox_SetScrollbarPadding_Statics::NewProp_NewScrollbarPadding_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScrollBox_SetScrollbarPadding_Statics::NewProp_NewScrollbarPadding = { "NewScrollbarPadding", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScrollBox_eventSetScrollbarPadding_Parms, NewScrollbarPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UFunction_UScrollBox_SetScrollbarPadding_Statics::NewProp_NewScrollbarPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_SetScrollbarPadding_Statics::NewProp_NewScrollbarPadding_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScrollBox_SetScrollbarPadding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScrollBox_SetScrollbarPadding_Statics::NewProp_NewScrollbarPadding,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScrollBox_SetScrollbarPadding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scroll" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScrollBox_SetScrollbarPadding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScrollBox, nullptr, "SetScrollbarPadding", nullptr, nullptr, sizeof(ScrollBox_eventSetScrollbarPadding_Parms), Z_Construct_UFunction_UScrollBox_SetScrollbarPadding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_SetScrollbarPadding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScrollBox_SetScrollbarPadding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_SetScrollbarPadding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScrollBox_SetScrollbarPadding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScrollBox_SetScrollbarPadding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScrollBox_SetScrollbarThickness_Statics
	{
		struct ScrollBox_eventSetScrollbarThickness_Parms
		{
			FVector2D NewScrollbarThickness;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewScrollbarThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewScrollbarThickness;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScrollBox_SetScrollbarThickness_Statics::NewProp_NewScrollbarThickness_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScrollBox_SetScrollbarThickness_Statics::NewProp_NewScrollbarThickness = { "NewScrollbarThickness", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScrollBox_eventSetScrollbarThickness_Parms, NewScrollbarThickness), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UScrollBox_SetScrollbarThickness_Statics::NewProp_NewScrollbarThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_SetScrollbarThickness_Statics::NewProp_NewScrollbarThickness_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScrollBox_SetScrollbarThickness_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScrollBox_SetScrollbarThickness_Statics::NewProp_NewScrollbarThickness,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScrollBox_SetScrollbarThickness_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scroll" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScrollBox_SetScrollbarThickness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScrollBox, nullptr, "SetScrollbarThickness", nullptr, nullptr, sizeof(ScrollBox_eventSetScrollbarThickness_Parms), Z_Construct_UFunction_UScrollBox_SetScrollbarThickness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_SetScrollbarThickness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScrollBox_SetScrollbarThickness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_SetScrollbarThickness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScrollBox_SetScrollbarThickness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScrollBox_SetScrollbarThickness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScrollBox_SetScrollBarVisibility_Statics
	{
		struct ScrollBox_eventSetScrollBarVisibility_Parms
		{
			ESlateVisibility NewScrollBarVisibility;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewScrollBarVisibility;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewScrollBarVisibility_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UScrollBox_SetScrollBarVisibility_Statics::NewProp_NewScrollBarVisibility = { "NewScrollBarVisibility", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScrollBox_eventSetScrollBarVisibility_Parms, NewScrollBarVisibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UScrollBox_SetScrollBarVisibility_Statics::NewProp_NewScrollBarVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScrollBox_SetScrollBarVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScrollBox_SetScrollBarVisibility_Statics::NewProp_NewScrollBarVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScrollBox_SetScrollBarVisibility_Statics::NewProp_NewScrollBarVisibility_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScrollBox_SetScrollBarVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scroll" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScrollBox_SetScrollBarVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScrollBox, nullptr, "SetScrollBarVisibility", nullptr, nullptr, sizeof(ScrollBox_eventSetScrollBarVisibility_Parms), Z_Construct_UFunction_UScrollBox_SetScrollBarVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_SetScrollBarVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScrollBox_SetScrollBarVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_SetScrollBarVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScrollBox_SetScrollBarVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScrollBox_SetScrollBarVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScrollBox_SetScrollOffset_Statics
	{
		struct ScrollBox_eventSetScrollOffset_Parms
		{
			float NewScrollOffset;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewScrollOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UScrollBox_SetScrollOffset_Statics::NewProp_NewScrollOffset = { "NewScrollOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScrollBox_eventSetScrollOffset_Parms, NewScrollOffset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScrollBox_SetScrollOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScrollBox_SetScrollOffset_Statics::NewProp_NewScrollOffset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScrollBox_SetScrollOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/**\n\x09 * Updates the scroll offset of the scrollbox.\n\x09 * @param NewScrollOffset is in Slate Units.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
		{ "ToolTip", "Updates the scroll offset of the scrollbox.\n@param NewScrollOffset is in Slate Units." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScrollBox_SetScrollOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScrollBox, nullptr, "SetScrollOffset", nullptr, nullptr, sizeof(ScrollBox_eventSetScrollOffset_Parms), Z_Construct_UFunction_UScrollBox_SetScrollOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_SetScrollOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScrollBox_SetScrollOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_SetScrollOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScrollBox_SetScrollOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScrollBox_SetScrollOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScrollBox_SetWheelScrollMultiplier_Statics
	{
		struct ScrollBox_eventSetWheelScrollMultiplier_Parms
		{
			float NewWheelScrollMultiplier;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewWheelScrollMultiplier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UScrollBox_SetWheelScrollMultiplier_Statics::NewProp_NewWheelScrollMultiplier = { "NewWheelScrollMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScrollBox_eventSetWheelScrollMultiplier_Parms, NewWheelScrollMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScrollBox_SetWheelScrollMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScrollBox_SetWheelScrollMultiplier_Statics::NewProp_NewWheelScrollMultiplier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScrollBox_SetWheelScrollMultiplier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scroll" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScrollBox_SetWheelScrollMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScrollBox, nullptr, "SetWheelScrollMultiplier", nullptr, nullptr, sizeof(ScrollBox_eventSetWheelScrollMultiplier_Parms), Z_Construct_UFunction_UScrollBox_SetWheelScrollMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_SetWheelScrollMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScrollBox_SetWheelScrollMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_SetWheelScrollMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScrollBox_SetWheelScrollMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScrollBox_SetWheelScrollMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UScrollBox_NoRegister()
	{
		return UScrollBox::StaticClass();
	}
	struct Z_Construct_UClass_UScrollBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnUserScrolled_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUserScrolled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WheelScrollMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WheelScrollMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowRightClickDragScrolling_MetaData[];
#endif
		static void NewProp_bAllowRightClickDragScrolling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowRightClickDragScrolling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScrollWhenFocusChanges_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ScrollWhenFocusChanges;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ScrollWhenFocusChanges_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavigationScrollPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NavigationScrollPadding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavigationDestination_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NavigationDestination;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NavigationDestination_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAnimateWheelScrolling_MetaData[];
#endif
		static void NewProp_bAnimateWheelScrolling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAnimateWheelScrolling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowOverscroll_MetaData[];
#endif
		static void NewProp_AllowOverscroll_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AllowOverscroll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlwaysShowScrollbarTrack_MetaData[];
#endif
		static void NewProp_AlwaysShowScrollbarTrack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AlwaysShowScrollbarTrack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlwaysShowScrollbar_MetaData[];
#endif
		static void NewProp_AlwaysShowScrollbar_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AlwaysShowScrollbar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScrollbarPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScrollbarPadding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScrollbarThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScrollbarThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConsumeMouseWheel_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ConsumeMouseWheel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ConsumeMouseWheel_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScrollBarVisibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ScrollBarVisibility;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ScrollBarVisibility_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Orientation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BarStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BarStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Style_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Style;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetBarStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WidgetBarStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WidgetStyle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScrollBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPanelWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UScrollBox_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UScrollBox_EndInertialScrolling, "EndInertialScrolling" }, // 256027661
		{ &Z_Construct_UFunction_UScrollBox_GetScrollOffset, "GetScrollOffset" }, // 4153220031
		{ &Z_Construct_UFunction_UScrollBox_GetScrollOffsetOfEnd, "GetScrollOffsetOfEnd" }, // 52872086
		{ &Z_Construct_UFunction_UScrollBox_GetViewOffsetFraction, "GetViewOffsetFraction" }, // 2018318289
		{ &Z_Construct_UFunction_UScrollBox_ScrollToEnd, "ScrollToEnd" }, // 3689730161
		{ &Z_Construct_UFunction_UScrollBox_ScrollToStart, "ScrollToStart" }, // 103825010
		{ &Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView, "ScrollWidgetIntoView" }, // 1552987215
		{ &Z_Construct_UFunction_UScrollBox_SetAllowOverscroll, "SetAllowOverscroll" }, // 2763024796
		{ &Z_Construct_UFunction_UScrollBox_SetAlwaysShowScrollbar, "SetAlwaysShowScrollbar" }, // 3067714863
		{ &Z_Construct_UFunction_UScrollBox_SetAnimateWheelScrolling, "SetAnimateWheelScrolling" }, // 1296500991
		{ &Z_Construct_UFunction_UScrollBox_SetConsumeMouseWheel, "SetConsumeMouseWheel" }, // 2058374957
		{ &Z_Construct_UFunction_UScrollBox_SetOrientation, "SetOrientation" }, // 752075601
		{ &Z_Construct_UFunction_UScrollBox_SetScrollbarPadding, "SetScrollbarPadding" }, // 271466860
		{ &Z_Construct_UFunction_UScrollBox_SetScrollbarThickness, "SetScrollbarThickness" }, // 1368945294
		{ &Z_Construct_UFunction_UScrollBox_SetScrollBarVisibility, "SetScrollBarVisibility" }, // 639553306
		{ &Z_Construct_UFunction_UScrollBox_SetScrollOffset, "SetScrollOffset" }, // 673744284
		{ &Z_Construct_UFunction_UScrollBox_SetWheelScrollMultiplier, "SetWheelScrollMultiplier" }, // 3662729866
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScrollBox_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * An arbitrary scrollable collection of widgets.  Great for presenting 10-100 widgets in a list.  Doesn't support virtualization.\n */" },
		{ "IncludePath", "Components/ScrollBox.h" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
		{ "ToolTip", "An arbitrary scrollable collection of widgets.  Great for presenting 10-100 widgets in a list.  Doesn't support virtualization." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScrollBox_Statics::NewProp_OnUserScrolled_MetaData[] = {
		{ "Category", "Button|Event" },
		{ "Comment", "/** Called when the scroll has changed */" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
		{ "ToolTip", "Called when the scroll has changed" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UScrollBox_Statics::NewProp_OnUserScrolled = { "OnUserScrolled", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScrollBox, OnUserScrolled), Z_Construct_UDelegateFunction_UMG_OnUserScrolledEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UScrollBox_Statics::NewProp_OnUserScrolled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScrollBox_Statics::NewProp_OnUserScrolled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScrollBox_Statics::NewProp_WheelScrollMultiplier_MetaData[] = {
		{ "Category", "Scroll" },
		{ "Comment", "/** The multiplier to apply when wheel scrolling */" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
		{ "ToolTip", "The multiplier to apply when wheel scrolling" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UScrollBox_Statics::NewProp_WheelScrollMultiplier = { "WheelScrollMultiplier", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScrollBox, WheelScrollMultiplier), METADATA_PARAMS(Z_Construct_UClass_UScrollBox_Statics::NewProp_WheelScrollMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScrollBox_Statics::NewProp_WheelScrollMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScrollBox_Statics::NewProp_bAllowRightClickDragScrolling_MetaData[] = {
		{ "Category", "Scroll" },
		{ "Comment", "/** Option to disable right-click-drag scrolling */" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
		{ "ToolTip", "Option to disable right-click-drag scrolling" },
	};
#endif
	void Z_Construct_UClass_UScrollBox_Statics::NewProp_bAllowRightClickDragScrolling_SetBit(void* Obj)
	{
		((UScrollBox*)Obj)->bAllowRightClickDragScrolling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UScrollBox_Statics::NewProp_bAllowRightClickDragScrolling = { "bAllowRightClickDragScrolling", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UScrollBox), &Z_Construct_UClass_UScrollBox_Statics::NewProp_bAllowRightClickDragScrolling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UScrollBox_Statics::NewProp_bAllowRightClickDragScrolling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScrollBox_Statics::NewProp_bAllowRightClickDragScrolling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScrollBox_Statics::NewProp_ScrollWhenFocusChanges_MetaData[] = {
		{ "Category", "Scroll" },
		{ "Comment", "/** Scroll behavior when user focus is given to a child widget */" },
		{ "DisplayName", "Scroll When Focus Changes" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
		{ "ToolTip", "Scroll behavior when user focus is given to a child widget" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UScrollBox_Statics::NewProp_ScrollWhenFocusChanges = { "ScrollWhenFocusChanges", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScrollBox, ScrollWhenFocusChanges), Z_Construct_UEnum_Slate_EScrollWhenFocusChanges, METADATA_PARAMS(Z_Construct_UClass_UScrollBox_Statics::NewProp_ScrollWhenFocusChanges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScrollBox_Statics::NewProp_ScrollWhenFocusChanges_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UScrollBox_Statics::NewProp_ScrollWhenFocusChanges_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScrollBox_Statics::NewProp_NavigationScrollPadding_MetaData[] = {
		{ "Category", "Scroll" },
		{ "Comment", "/**\n\x09 * The amount of padding to ensure exists between the item being navigated to, at the edge of the\n\x09 * scrollbox.  Use this if you want to ensure there's a preview of the next item the user could scroll to.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
		{ "ToolTip", "The amount of padding to ensure exists between the item being navigated to, at the edge of the\nscrollbox.  Use this if you want to ensure there's a preview of the next item the user could scroll to." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UScrollBox_Statics::NewProp_NavigationScrollPadding = { "NavigationScrollPadding", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScrollBox, NavigationScrollPadding), METADATA_PARAMS(Z_Construct_UClass_UScrollBox_Statics::NewProp_NavigationScrollPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScrollBox_Statics::NewProp_NavigationScrollPadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScrollBox_Statics::NewProp_NavigationDestination_MetaData[] = {
		{ "Category", "Scroll" },
		{ "Comment", "/** Sets where to scroll a widget to when using explicit navigation or if ScrollWhenFocusChanges is enabled */" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
		{ "ToolTip", "Sets where to scroll a widget to when using explicit navigation or if ScrollWhenFocusChanges is enabled" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UScrollBox_Statics::NewProp_NavigationDestination = { "NavigationDestination", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScrollBox, NavigationDestination), Z_Construct_UEnum_Slate_EDescendantScrollDestination, METADATA_PARAMS(Z_Construct_UClass_UScrollBox_Statics::NewProp_NavigationDestination_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScrollBox_Statics::NewProp_NavigationDestination_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UScrollBox_Statics::NewProp_NavigationDestination_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScrollBox_Statics::NewProp_bAnimateWheelScrolling_MetaData[] = {
		{ "Category", "Scroll" },
		{ "Comment", "/** True to lerp smoothly when wheel scrolling along the scroll box */" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
		{ "ToolTip", "True to lerp smoothly when wheel scrolling along the scroll box" },
	};
#endif
	void Z_Construct_UClass_UScrollBox_Statics::NewProp_bAnimateWheelScrolling_SetBit(void* Obj)
	{
		((UScrollBox*)Obj)->bAnimateWheelScrolling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UScrollBox_Statics::NewProp_bAnimateWheelScrolling = { "bAnimateWheelScrolling", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UScrollBox), &Z_Construct_UClass_UScrollBox_Statics::NewProp_bAnimateWheelScrolling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UScrollBox_Statics::NewProp_bAnimateWheelScrolling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScrollBox_Statics::NewProp_bAnimateWheelScrolling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScrollBox_Statics::NewProp_AllowOverscroll_MetaData[] = {
		{ "Category", "Scroll" },
		{ "Comment", "/**  Disable to stop scrollbars from activating inertial overscrolling */" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
		{ "ToolTip", "Disable to stop scrollbars from activating inertial overscrolling" },
	};
#endif
	void Z_Construct_UClass_UScrollBox_Statics::NewProp_AllowOverscroll_SetBit(void* Obj)
	{
		((UScrollBox*)Obj)->AllowOverscroll = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UScrollBox_Statics::NewProp_AllowOverscroll = { "AllowOverscroll", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UScrollBox), &Z_Construct_UClass_UScrollBox_Statics::NewProp_AllowOverscroll_SetBit, METADATA_PARAMS(Z_Construct_UClass_UScrollBox_Statics::NewProp_AllowOverscroll_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScrollBox_Statics::NewProp_AllowOverscroll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScrollBox_Statics::NewProp_AlwaysShowScrollbarTrack_MetaData[] = {
		{ "Category", "Scroll" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
	};
#endif
	void Z_Construct_UClass_UScrollBox_Statics::NewProp_AlwaysShowScrollbarTrack_SetBit(void* Obj)
	{
		((UScrollBox*)Obj)->AlwaysShowScrollbarTrack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UScrollBox_Statics::NewProp_AlwaysShowScrollbarTrack = { "AlwaysShowScrollbarTrack", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UScrollBox), &Z_Construct_UClass_UScrollBox_Statics::NewProp_AlwaysShowScrollbarTrack_SetBit, METADATA_PARAMS(Z_Construct_UClass_UScrollBox_Statics::NewProp_AlwaysShowScrollbarTrack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScrollBox_Statics::NewProp_AlwaysShowScrollbarTrack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScrollBox_Statics::NewProp_AlwaysShowScrollbar_MetaData[] = {
		{ "Category", "Scroll" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
	};
#endif
	void Z_Construct_UClass_UScrollBox_Statics::NewProp_AlwaysShowScrollbar_SetBit(void* Obj)
	{
		((UScrollBox*)Obj)->AlwaysShowScrollbar = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UScrollBox_Statics::NewProp_AlwaysShowScrollbar = { "AlwaysShowScrollbar", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UScrollBox), &Z_Construct_UClass_UScrollBox_Statics::NewProp_AlwaysShowScrollbar_SetBit, METADATA_PARAMS(Z_Construct_UClass_UScrollBox_Statics::NewProp_AlwaysShowScrollbar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScrollBox_Statics::NewProp_AlwaysShowScrollbar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScrollBox_Statics::NewProp_ScrollbarPadding_MetaData[] = {
		{ "Category", "Scroll" },
		{ "Comment", "/** The margin around the scrollbar */" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
		{ "ToolTip", "The margin around the scrollbar" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UScrollBox_Statics::NewProp_ScrollbarPadding = { "ScrollbarPadding", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScrollBox, ScrollbarPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UScrollBox_Statics::NewProp_ScrollbarPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScrollBox_Statics::NewProp_ScrollbarPadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScrollBox_Statics::NewProp_ScrollbarThickness_MetaData[] = {
		{ "Category", "Scroll" },
		{ "Comment", "/** The thickness of the scrollbar thumb */" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
		{ "ToolTip", "The thickness of the scrollbar thumb" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UScrollBox_Statics::NewProp_ScrollbarThickness = { "ScrollbarThickness", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScrollBox, ScrollbarThickness), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UScrollBox_Statics::NewProp_ScrollbarThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScrollBox_Statics::NewProp_ScrollbarThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScrollBox_Statics::NewProp_ConsumeMouseWheel_MetaData[] = {
		{ "Category", "Scroll" },
		{ "Comment", "/** When mouse wheel events should be consumed. */" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
		{ "ToolTip", "When mouse wheel events should be consumed." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UScrollBox_Statics::NewProp_ConsumeMouseWheel = { "ConsumeMouseWheel", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScrollBox, ConsumeMouseWheel), Z_Construct_UEnum_SlateCore_EConsumeMouseWheel, METADATA_PARAMS(Z_Construct_UClass_UScrollBox_Statics::NewProp_ConsumeMouseWheel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScrollBox_Statics::NewProp_ConsumeMouseWheel_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UScrollBox_Statics::NewProp_ConsumeMouseWheel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScrollBox_Statics::NewProp_ScrollBarVisibility_MetaData[] = {
		{ "Category", "Scroll" },
		{ "Comment", "/** Visibility */" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
		{ "ToolTip", "Visibility" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UScrollBox_Statics::NewProp_ScrollBarVisibility = { "ScrollBarVisibility", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScrollBox, ScrollBarVisibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(Z_Construct_UClass_UScrollBox_Statics::NewProp_ScrollBarVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScrollBox_Statics::NewProp_ScrollBarVisibility_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UScrollBox_Statics::NewProp_ScrollBarVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScrollBox_Statics::NewProp_Orientation_MetaData[] = {
		{ "Category", "Scroll" },
		{ "Comment", "/** The orientation of the scrolling and stacking in the box. */" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
		{ "ToolTip", "The orientation of the scrolling and stacking in the box." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UScrollBox_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScrollBox, Orientation), Z_Construct_UEnum_SlateCore_EOrientation, METADATA_PARAMS(Z_Construct_UClass_UScrollBox_Statics::NewProp_Orientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScrollBox_Statics::NewProp_Orientation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScrollBox_Statics::NewProp_BarStyle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UScrollBox_Statics::NewProp_BarStyle = { "BarStyle", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScrollBox, BarStyle_DEPRECATED), Z_Construct_UClass_USlateWidgetStyleAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UScrollBox_Statics::NewProp_BarStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScrollBox_Statics::NewProp_BarStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScrollBox_Statics::NewProp_Style_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UScrollBox_Statics::NewProp_Style = { "Style", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScrollBox, Style_DEPRECATED), Z_Construct_UClass_USlateWidgetStyleAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UScrollBox_Statics::NewProp_Style_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScrollBox_Statics::NewProp_Style_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScrollBox_Statics::NewProp_WidgetBarStyle_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/** The bar style */" },
		{ "DisplayName", "Bar Style" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
		{ "ToolTip", "The bar style" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UScrollBox_Statics::NewProp_WidgetBarStyle = { "WidgetBarStyle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScrollBox, WidgetBarStyle), Z_Construct_UScriptStruct_FScrollBarStyle, METADATA_PARAMS(Z_Construct_UClass_UScrollBox_Statics::NewProp_WidgetBarStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScrollBox_Statics::NewProp_WidgetBarStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScrollBox_Statics::NewProp_WidgetStyle_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/** The style */" },
		{ "DisplayName", "Style" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
		{ "ToolTip", "The style" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UScrollBox_Statics::NewProp_WidgetStyle = { "WidgetStyle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScrollBox, WidgetStyle), Z_Construct_UScriptStruct_FScrollBoxStyle, METADATA_PARAMS(Z_Construct_UClass_UScrollBox_Statics::NewProp_WidgetStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScrollBox_Statics::NewProp_WidgetStyle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScrollBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBox_Statics::NewProp_OnUserScrolled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBox_Statics::NewProp_WheelScrollMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBox_Statics::NewProp_bAllowRightClickDragScrolling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBox_Statics::NewProp_ScrollWhenFocusChanges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBox_Statics::NewProp_ScrollWhenFocusChanges_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBox_Statics::NewProp_NavigationScrollPadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBox_Statics::NewProp_NavigationDestination,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBox_Statics::NewProp_NavigationDestination_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBox_Statics::NewProp_bAnimateWheelScrolling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBox_Statics::NewProp_AllowOverscroll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBox_Statics::NewProp_AlwaysShowScrollbarTrack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBox_Statics::NewProp_AlwaysShowScrollbar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBox_Statics::NewProp_ScrollbarPadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBox_Statics::NewProp_ScrollbarThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBox_Statics::NewProp_ConsumeMouseWheel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBox_Statics::NewProp_ConsumeMouseWheel_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBox_Statics::NewProp_ScrollBarVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBox_Statics::NewProp_ScrollBarVisibility_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBox_Statics::NewProp_Orientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBox_Statics::NewProp_BarStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBox_Statics::NewProp_Style,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBox_Statics::NewProp_WidgetBarStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBox_Statics::NewProp_WidgetStyle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScrollBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScrollBox>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UScrollBox_Statics::ClassParams = {
		&UScrollBox::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UScrollBox_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UScrollBox_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UScrollBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UScrollBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScrollBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UScrollBox_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UScrollBox, 807928562);
	template<> UMG_API UClass* StaticClass<UScrollBox>()
	{
		return UScrollBox::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UScrollBox(Z_Construct_UClass_UScrollBox, &UScrollBox::StaticClass, TEXT("/Script/UMG"), TEXT("UScrollBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScrollBox);
#if WITH_EDITORONLY_DATA
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UScrollBox)
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
