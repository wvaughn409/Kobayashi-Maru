// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/MenuAnchor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMenuAnchor() {}
// Cross Module References
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnMenuOpenChangedEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UClass* Z_Construct_UClass_UMenuAnchor_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UMenuAnchor();
	UMG_API UClass* Z_Construct_UClass_UContentWidget();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EMenuPlacement();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetWidget__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UMG_OnMenuOpenChangedEvent__DelegateSignature_Statics
	{
		struct _Script_UMG_eventOnMenuOpenChangedEvent_Parms
		{
			bool bIsOpen;
		};
		static void NewProp_bIsOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsOpen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_UMG_OnMenuOpenChangedEvent__DelegateSignature_Statics::NewProp_bIsOpen_SetBit(void* Obj)
	{
		((_Script_UMG_eventOnMenuOpenChangedEvent_Parms*)Obj)->bIsOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UMG_OnMenuOpenChangedEvent__DelegateSignature_Statics::NewProp_bIsOpen = { "bIsOpen", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_UMG_eventOnMenuOpenChangedEvent_Parms), &Z_Construct_UDelegateFunction_UMG_OnMenuOpenChangedEvent__DelegateSignature_Statics::NewProp_bIsOpen_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMG_OnMenuOpenChangedEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_OnMenuOpenChangedEvent__DelegateSignature_Statics::NewProp_bIsOpen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMG_OnMenuOpenChangedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/MenuAnchor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMG_OnMenuOpenChangedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, nullptr, "OnMenuOpenChangedEvent__DelegateSignature", nullptr, nullptr, sizeof(_Script_UMG_eventOnMenuOpenChangedEvent_Parms), Z_Construct_UDelegateFunction_UMG_OnMenuOpenChangedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnMenuOpenChangedEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMG_OnMenuOpenChangedEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnMenuOpenChangedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMG_OnMenuOpenChangedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UMG_OnMenuOpenChangedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UMenuAnchor::execHasOpenSubMenus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasOpenSubMenus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMenuAnchor::execGetMenuPosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetMenuPosition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMenuAnchor::execShouldOpenDueToClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldOpenDueToClick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMenuAnchor::execIsOpen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsOpen();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMenuAnchor::execClose)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Close();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMenuAnchor::execOpen)
	{
		P_GET_UBOOL(Z_Param_bFocusMenu);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Open(Z_Param_bFocusMenu);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMenuAnchor::execToggleOpen)
	{
		P_GET_UBOOL(Z_Param_bFocusOnOpen);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleOpen(Z_Param_bFocusOnOpen);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMenuAnchor::execFitInWindow)
	{
		P_GET_UBOOL(Z_Param_bFit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FitInWindow(Z_Param_bFit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMenuAnchor::execSetPlacement)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InPlacement);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlacement(EMenuPlacement(Z_Param_InPlacement));
		P_NATIVE_END;
	}
	void UMenuAnchor::StaticRegisterNativesUMenuAnchor()
	{
		UClass* Class = UMenuAnchor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Close", &UMenuAnchor::execClose },
			{ "FitInWindow", &UMenuAnchor::execFitInWindow },
			{ "GetMenuPosition", &UMenuAnchor::execGetMenuPosition },
			{ "HasOpenSubMenus", &UMenuAnchor::execHasOpenSubMenus },
			{ "IsOpen", &UMenuAnchor::execIsOpen },
			{ "Open", &UMenuAnchor::execOpen },
			{ "SetPlacement", &UMenuAnchor::execSetPlacement },
			{ "ShouldOpenDueToClick", &UMenuAnchor::execShouldOpenDueToClick },
			{ "ToggleOpen", &UMenuAnchor::execToggleOpen },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMenuAnchor_Close_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMenuAnchor_Close_Statics::Function_MetaDataParams[] = {
		{ "Category", "Menu Anchor" },
		{ "Comment", "/** Closes the menu if it is currently open. */" },
		{ "ModuleRelativePath", "Public/Components/MenuAnchor.h" },
		{ "ToolTip", "Closes the menu if it is currently open." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuAnchor_Close_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuAnchor, nullptr, "Close", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMenuAnchor_Close_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuAnchor_Close_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMenuAnchor_Close()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMenuAnchor_Close_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMenuAnchor_FitInWindow_Statics
	{
		struct MenuAnchor_eventFitInWindow_Parms
		{
			bool bFit;
		};
		static void NewProp_bFit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMenuAnchor_FitInWindow_Statics::NewProp_bFit_SetBit(void* Obj)
	{
		((MenuAnchor_eventFitInWindow_Parms*)Obj)->bFit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMenuAnchor_FitInWindow_Statics::NewProp_bFit = { "bFit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MenuAnchor_eventFitInWindow_Parms), &Z_Construct_UFunction_UMenuAnchor_FitInWindow_Statics::NewProp_bFit_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMenuAnchor_FitInWindow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenuAnchor_FitInWindow_Statics::NewProp_bFit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMenuAnchor_FitInWindow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Menu Anchor" },
		{ "ModuleRelativePath", "Public/Components/MenuAnchor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuAnchor_FitInWindow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuAnchor, nullptr, "FitInWindow", nullptr, nullptr, sizeof(MenuAnchor_eventFitInWindow_Parms), Z_Construct_UFunction_UMenuAnchor_FitInWindow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuAnchor_FitInWindow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMenuAnchor_FitInWindow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuAnchor_FitInWindow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMenuAnchor_FitInWindow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMenuAnchor_FitInWindow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMenuAnchor_GetMenuPosition_Statics
	{
		struct MenuAnchor_eventGetMenuPosition_Parms
		{
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMenuAnchor_GetMenuPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MenuAnchor_eventGetMenuPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMenuAnchor_GetMenuPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenuAnchor_GetMenuPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMenuAnchor_GetMenuPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Menu Anchor" },
		{ "Comment", "/** Returns the current menu position */" },
		{ "ModuleRelativePath", "Public/Components/MenuAnchor.h" },
		{ "ToolTip", "Returns the current menu position" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuAnchor_GetMenuPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuAnchor, nullptr, "GetMenuPosition", nullptr, nullptr, sizeof(MenuAnchor_eventGetMenuPosition_Parms), Z_Construct_UFunction_UMenuAnchor_GetMenuPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuAnchor_GetMenuPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMenuAnchor_GetMenuPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuAnchor_GetMenuPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMenuAnchor_GetMenuPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMenuAnchor_GetMenuPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMenuAnchor_HasOpenSubMenus_Statics
	{
		struct MenuAnchor_eventHasOpenSubMenus_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMenuAnchor_HasOpenSubMenus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MenuAnchor_eventHasOpenSubMenus_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMenuAnchor_HasOpenSubMenus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MenuAnchor_eventHasOpenSubMenus_Parms), &Z_Construct_UFunction_UMenuAnchor_HasOpenSubMenus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMenuAnchor_HasOpenSubMenus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenuAnchor_HasOpenSubMenus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMenuAnchor_HasOpenSubMenus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Menu Anchor" },
		{ "Comment", "/** Returns whether this menu has open submenus */" },
		{ "ModuleRelativePath", "Public/Components/MenuAnchor.h" },
		{ "ToolTip", "Returns whether this menu has open submenus" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuAnchor_HasOpenSubMenus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuAnchor, nullptr, "HasOpenSubMenus", nullptr, nullptr, sizeof(MenuAnchor_eventHasOpenSubMenus_Parms), Z_Construct_UFunction_UMenuAnchor_HasOpenSubMenus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuAnchor_HasOpenSubMenus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMenuAnchor_HasOpenSubMenus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuAnchor_HasOpenSubMenus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMenuAnchor_HasOpenSubMenus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMenuAnchor_HasOpenSubMenus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMenuAnchor_IsOpen_Statics
	{
		struct MenuAnchor_eventIsOpen_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMenuAnchor_IsOpen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MenuAnchor_eventIsOpen_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMenuAnchor_IsOpen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MenuAnchor_eventIsOpen_Parms), &Z_Construct_UFunction_UMenuAnchor_IsOpen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMenuAnchor_IsOpen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenuAnchor_IsOpen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMenuAnchor_IsOpen_Statics::Function_MetaDataParams[] = {
		{ "Category", "Menu Anchor" },
		{ "Comment", "/** Returns true if the popup is open; false otherwise. */" },
		{ "ModuleRelativePath", "Public/Components/MenuAnchor.h" },
		{ "ToolTip", "Returns true if the popup is open; false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuAnchor_IsOpen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuAnchor, nullptr, "IsOpen", nullptr, nullptr, sizeof(MenuAnchor_eventIsOpen_Parms), Z_Construct_UFunction_UMenuAnchor_IsOpen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuAnchor_IsOpen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMenuAnchor_IsOpen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuAnchor_IsOpen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMenuAnchor_IsOpen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMenuAnchor_IsOpen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMenuAnchor_Open_Statics
	{
		struct MenuAnchor_eventOpen_Parms
		{
			bool bFocusMenu;
		};
		static void NewProp_bFocusMenu_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFocusMenu;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMenuAnchor_Open_Statics::NewProp_bFocusMenu_SetBit(void* Obj)
	{
		((MenuAnchor_eventOpen_Parms*)Obj)->bFocusMenu = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMenuAnchor_Open_Statics::NewProp_bFocusMenu = { "bFocusMenu", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MenuAnchor_eventOpen_Parms), &Z_Construct_UFunction_UMenuAnchor_Open_Statics::NewProp_bFocusMenu_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMenuAnchor_Open_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenuAnchor_Open_Statics::NewProp_bFocusMenu,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMenuAnchor_Open_Statics::Function_MetaDataParams[] = {
		{ "Category", "Menu Anchor" },
		{ "Comment", "/** Opens the menu if it is not already open */" },
		{ "ModuleRelativePath", "Public/Components/MenuAnchor.h" },
		{ "ToolTip", "Opens the menu if it is not already open" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuAnchor_Open_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuAnchor, nullptr, "Open", nullptr, nullptr, sizeof(MenuAnchor_eventOpen_Parms), Z_Construct_UFunction_UMenuAnchor_Open_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuAnchor_Open_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMenuAnchor_Open_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuAnchor_Open_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMenuAnchor_Open()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMenuAnchor_Open_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMenuAnchor_SetPlacement_Statics
	{
		struct MenuAnchor_eventSetPlacement_Parms
		{
			TEnumAsByte<EMenuPlacement> InPlacement;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InPlacement;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMenuAnchor_SetPlacement_Statics::NewProp_InPlacement = { "InPlacement", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MenuAnchor_eventSetPlacement_Parms, InPlacement), Z_Construct_UEnum_SlateCore_EMenuPlacement, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMenuAnchor_SetPlacement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenuAnchor_SetPlacement_Statics::NewProp_InPlacement,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMenuAnchor_SetPlacement_Statics::Function_MetaDataParams[] = {
		{ "Category", "Menu Anchor" },
		{ "Comment", "//TODO UMG Add Set MenuClass\n" },
		{ "ModuleRelativePath", "Public/Components/MenuAnchor.h" },
		{ "ToolTip", "TODO UMG Add Set MenuClass" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuAnchor_SetPlacement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuAnchor, nullptr, "SetPlacement", nullptr, nullptr, sizeof(MenuAnchor_eventSetPlacement_Parms), Z_Construct_UFunction_UMenuAnchor_SetPlacement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuAnchor_SetPlacement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMenuAnchor_SetPlacement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuAnchor_SetPlacement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMenuAnchor_SetPlacement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMenuAnchor_SetPlacement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMenuAnchor_ShouldOpenDueToClick_Statics
	{
		struct MenuAnchor_eventShouldOpenDueToClick_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMenuAnchor_ShouldOpenDueToClick_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MenuAnchor_eventShouldOpenDueToClick_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMenuAnchor_ShouldOpenDueToClick_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MenuAnchor_eventShouldOpenDueToClick_Parms), &Z_Construct_UFunction_UMenuAnchor_ShouldOpenDueToClick_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMenuAnchor_ShouldOpenDueToClick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenuAnchor_ShouldOpenDueToClick_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMenuAnchor_ShouldOpenDueToClick_Statics::Function_MetaDataParams[] = {
		{ "Category", "Menu Anchor" },
		{ "Comment", "/**\n\x09 * Returns true if we should open the menu due to a click. Sometimes we should not, if\n\x09 * the same MouseDownEvent that just closed the menu is about to re-open it because it \n\x09 * happens to land on the button.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/MenuAnchor.h" },
		{ "ToolTip", "Returns true if we should open the menu due to a click. Sometimes we should not, if\nthe same MouseDownEvent that just closed the menu is about to re-open it because it\nhappens to land on the button." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuAnchor_ShouldOpenDueToClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuAnchor, nullptr, "ShouldOpenDueToClick", nullptr, nullptr, sizeof(MenuAnchor_eventShouldOpenDueToClick_Parms), Z_Construct_UFunction_UMenuAnchor_ShouldOpenDueToClick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuAnchor_ShouldOpenDueToClick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMenuAnchor_ShouldOpenDueToClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuAnchor_ShouldOpenDueToClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMenuAnchor_ShouldOpenDueToClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMenuAnchor_ShouldOpenDueToClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMenuAnchor_ToggleOpen_Statics
	{
		struct MenuAnchor_eventToggleOpen_Parms
		{
			bool bFocusOnOpen;
		};
		static void NewProp_bFocusOnOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFocusOnOpen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMenuAnchor_ToggleOpen_Statics::NewProp_bFocusOnOpen_SetBit(void* Obj)
	{
		((MenuAnchor_eventToggleOpen_Parms*)Obj)->bFocusOnOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMenuAnchor_ToggleOpen_Statics::NewProp_bFocusOnOpen = { "bFocusOnOpen", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MenuAnchor_eventToggleOpen_Parms), &Z_Construct_UFunction_UMenuAnchor_ToggleOpen_Statics::NewProp_bFocusOnOpen_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMenuAnchor_ToggleOpen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenuAnchor_ToggleOpen_Statics::NewProp_bFocusOnOpen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMenuAnchor_ToggleOpen_Statics::Function_MetaDataParams[] = {
		{ "Category", "Menu Anchor" },
		{ "Comment", "/**\n\x09 * Toggles the menus open state.\n\x09 *\n\x09 * @param bFocusOnOpen  Should we focus the popup as soon as it opens?\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/MenuAnchor.h" },
		{ "ToolTip", "Toggles the menus open state.\n\n@param bFocusOnOpen  Should we focus the popup as soon as it opens?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuAnchor_ToggleOpen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuAnchor, nullptr, "ToggleOpen", nullptr, nullptr, sizeof(MenuAnchor_eventToggleOpen_Parms), Z_Construct_UFunction_UMenuAnchor_ToggleOpen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuAnchor_ToggleOpen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMenuAnchor_ToggleOpen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuAnchor_ToggleOpen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMenuAnchor_ToggleOpen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMenuAnchor_ToggleOpen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMenuAnchor_NoRegister()
	{
		return UMenuAnchor::StaticClass();
	}
	struct Z_Construct_UClass_UMenuAnchor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMenuOpenChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMenuOpenChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseApplicationMenuStack_MetaData[];
#endif
		static void NewProp_UseApplicationMenuStack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseApplicationMenuStack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShouldDeferPaintingAfterWindowContent_MetaData[];
#endif
		static void NewProp_ShouldDeferPaintingAfterWindowContent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShouldDeferPaintingAfterWindowContent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFitInWindow_MetaData[];
#endif
		static void NewProp_bFitInWindow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFitInWindow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Placement_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Placement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnGetMenuContentEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnGetMenuContentEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MenuClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMenuAnchor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UContentWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMenuAnchor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMenuAnchor_Close, "Close" }, // 2690534229
		{ &Z_Construct_UFunction_UMenuAnchor_FitInWindow, "FitInWindow" }, // 869269018
		{ &Z_Construct_UFunction_UMenuAnchor_GetMenuPosition, "GetMenuPosition" }, // 1053133804
		{ &Z_Construct_UFunction_UMenuAnchor_HasOpenSubMenus, "HasOpenSubMenus" }, // 3090975373
		{ &Z_Construct_UFunction_UMenuAnchor_IsOpen, "IsOpen" }, // 1738187944
		{ &Z_Construct_UFunction_UMenuAnchor_Open, "Open" }, // 432111484
		{ &Z_Construct_UFunction_UMenuAnchor_SetPlacement, "SetPlacement" }, // 2659183333
		{ &Z_Construct_UFunction_UMenuAnchor_ShouldOpenDueToClick, "ShouldOpenDueToClick" }, // 3935700008
		{ &Z_Construct_UFunction_UMenuAnchor_ToggleOpen, "ToggleOpen" }, // 1744667980
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMenuAnchor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The Menu Anchor allows you to specify an location that a popup menu should be anchored to, \n * and should be summoned from.\n * * Single Child\n * * Popup\n */" },
		{ "IncludePath", "Components/MenuAnchor.h" },
		{ "ModuleRelativePath", "Public/Components/MenuAnchor.h" },
		{ "ToolTip", "The Menu Anchor allows you to specify an location that a popup menu should be anchored to,\nand should be summoned from.\n* Single Child\n* Popup" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMenuAnchor_Statics::NewProp_OnMenuOpenChanged_MetaData[] = {
		{ "Category", "Menu Anchor|Event" },
		{ "Comment", "/** Called when the opened state of the menu changes */" },
		{ "ModuleRelativePath", "Public/Components/MenuAnchor.h" },
		{ "ToolTip", "Called when the opened state of the menu changes" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMenuAnchor_Statics::NewProp_OnMenuOpenChanged = { "OnMenuOpenChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMenuAnchor, OnMenuOpenChanged), Z_Construct_UDelegateFunction_UMG_OnMenuOpenChangedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMenuAnchor_Statics::NewProp_OnMenuOpenChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMenuAnchor_Statics::NewProp_OnMenuOpenChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMenuAnchor_Statics::NewProp_UseApplicationMenuStack_MetaData[] = {
		{ "Category", "Menu Anchor" },
		{ "Comment", "/** Does this menu behave like a normal stacked menu? Set it to false to control the menu's lifetime yourself. */" },
		{ "ModuleRelativePath", "Public/Components/MenuAnchor.h" },
		{ "ToolTip", "Does this menu behave like a normal stacked menu? Set it to false to control the menu's lifetime yourself." },
	};
#endif
	void Z_Construct_UClass_UMenuAnchor_Statics::NewProp_UseApplicationMenuStack_SetBit(void* Obj)
	{
		((UMenuAnchor*)Obj)->UseApplicationMenuStack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMenuAnchor_Statics::NewProp_UseApplicationMenuStack = { "UseApplicationMenuStack", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMenuAnchor), &Z_Construct_UClass_UMenuAnchor_Statics::NewProp_UseApplicationMenuStack_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMenuAnchor_Statics::NewProp_UseApplicationMenuStack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMenuAnchor_Statics::NewProp_UseApplicationMenuStack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMenuAnchor_Statics::NewProp_ShouldDeferPaintingAfterWindowContent_MetaData[] = {
		{ "Category", "Menu Anchor" },
		{ "ModuleRelativePath", "Public/Components/MenuAnchor.h" },
	};
#endif
	void Z_Construct_UClass_UMenuAnchor_Statics::NewProp_ShouldDeferPaintingAfterWindowContent_SetBit(void* Obj)
	{
		((UMenuAnchor*)Obj)->ShouldDeferPaintingAfterWindowContent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMenuAnchor_Statics::NewProp_ShouldDeferPaintingAfterWindowContent = { "ShouldDeferPaintingAfterWindowContent", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMenuAnchor), &Z_Construct_UClass_UMenuAnchor_Statics::NewProp_ShouldDeferPaintingAfterWindowContent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMenuAnchor_Statics::NewProp_ShouldDeferPaintingAfterWindowContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMenuAnchor_Statics::NewProp_ShouldDeferPaintingAfterWindowContent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMenuAnchor_Statics::NewProp_bFitInWindow_MetaData[] = {
		{ "Category", "Menu Anchor" },
		{ "Comment", "/** Should the menu anchor attempt to fit the menu inside the window. */" },
		{ "ModuleRelativePath", "Public/Components/MenuAnchor.h" },
		{ "ScriptName", "ShouldFitInWindow" },
		{ "ToolTip", "Should the menu anchor attempt to fit the menu inside the window." },
	};
#endif
	void Z_Construct_UClass_UMenuAnchor_Statics::NewProp_bFitInWindow_SetBit(void* Obj)
	{
		((UMenuAnchor*)Obj)->bFitInWindow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMenuAnchor_Statics::NewProp_bFitInWindow = { "bFitInWindow", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMenuAnchor), &Z_Construct_UClass_UMenuAnchor_Statics::NewProp_bFitInWindow_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMenuAnchor_Statics::NewProp_bFitInWindow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMenuAnchor_Statics::NewProp_bFitInWindow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMenuAnchor_Statics::NewProp_Placement_MetaData[] = {
		{ "Category", "Menu Anchor" },
		{ "Comment", "/** The placement location of the summoned widget. */" },
		{ "ModuleRelativePath", "Public/Components/MenuAnchor.h" },
		{ "ToolTip", "The placement location of the summoned widget." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMenuAnchor_Statics::NewProp_Placement = { "Placement", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMenuAnchor, Placement), Z_Construct_UEnum_SlateCore_EMenuPlacement, METADATA_PARAMS(Z_Construct_UClass_UMenuAnchor_Statics::NewProp_Placement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMenuAnchor_Statics::NewProp_Placement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMenuAnchor_Statics::NewProp_OnGetMenuContentEvent_MetaData[] = {
		{ "Category", "Events" },
		{ "Comment", "/** Called when the menu content is requested to allow a more customized handling over what to display */" },
		{ "ModuleRelativePath", "Public/Components/MenuAnchor.h" },
		{ "ToolTip", "Called when the menu content is requested to allow a more customized handling over what to display" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UMenuAnchor_Statics::NewProp_OnGetMenuContentEvent = { "OnGetMenuContentEvent", nullptr, (EPropertyFlags)0x0010000000080001, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMenuAnchor, OnGetMenuContentEvent), Z_Construct_UDelegateFunction_UWidget_GetWidget__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMenuAnchor_Statics::NewProp_OnGetMenuContentEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMenuAnchor_Statics::NewProp_OnGetMenuContentEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMenuAnchor_Statics::NewProp_MenuClass_MetaData[] = {
		{ "Category", "Menu Anchor" },
		{ "Comment", "/**\n\x09 * The widget class to spawn when the menu is required.  Creates the widget freshly each time.  \n\x09 * If you want to customize the creation of the popup, you should bind a function to OnGetMenuContentEvent \n\x09 * instead.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/MenuAnchor.h" },
		{ "ToolTip", "The widget class to spawn when the menu is required.  Creates the widget freshly each time.\nIf you want to customize the creation of the popup, you should bind a function to OnGetMenuContentEvent\ninstead." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMenuAnchor_Statics::NewProp_MenuClass = { "MenuClass", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMenuAnchor, MenuClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UMenuAnchor_Statics::NewProp_MenuClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMenuAnchor_Statics::NewProp_MenuClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMenuAnchor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuAnchor_Statics::NewProp_OnMenuOpenChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuAnchor_Statics::NewProp_UseApplicationMenuStack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuAnchor_Statics::NewProp_ShouldDeferPaintingAfterWindowContent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuAnchor_Statics::NewProp_bFitInWindow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuAnchor_Statics::NewProp_Placement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuAnchor_Statics::NewProp_OnGetMenuContentEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuAnchor_Statics::NewProp_MenuClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMenuAnchor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMenuAnchor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMenuAnchor_Statics::ClassParams = {
		&UMenuAnchor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMenuAnchor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMenuAnchor_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMenuAnchor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMenuAnchor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMenuAnchor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMenuAnchor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMenuAnchor, 2967100337);
	template<> UMG_API UClass* StaticClass<UMenuAnchor>()
	{
		return UMenuAnchor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMenuAnchor(Z_Construct_UClass_UMenuAnchor, &UMenuAnchor::StaticClass, TEXT("/Script/UMG"), TEXT("UMenuAnchor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMenuAnchor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
