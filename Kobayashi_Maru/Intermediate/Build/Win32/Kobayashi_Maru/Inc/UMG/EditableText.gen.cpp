// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/EditableText.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditableText() {}
// Cross Module References
	UMG_API UFunction* Z_Construct_UDelegateFunction_UEditableText_OnEditableTextCommittedEvent__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_UEditableText();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextCommit();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UEditableText_OnEditableTextChangedEvent__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_UEditableText_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UPackage* Z_Construct_UPackage__Script_UMG();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_ETextJustify();
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FShapedTextOptions();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_EVirtualKeyboardDismissAction();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_EVirtualKeyboardTrigger();
	SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FVirtualKeyboardOptions();
	UMG_API UEnum* Z_Construct_UEnum_UMG_EVirtualKeyboardType();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
	ENGINE_API UClass* Z_Construct_UClass_USlateBrushAsset_NoRegister();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleAsset_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FEditableTextStyle();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetText__DelegateSignature();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UEditableText_OnEditableTextCommittedEvent__DelegateSignature_Statics
	{
		struct EditableText_eventOnEditableTextCommittedEvent_Parms
		{
			FText Text;
			TEnumAsByte<ETextCommit::Type> CommitMethod;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CommitMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UEditableText_OnEditableTextCommittedEvent__DelegateSignature_Statics::NewProp_CommitMethod = { "CommitMethod", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableText_eventOnEditableTextCommittedEvent_Parms, CommitMethod), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UEditableText_OnEditableTextCommittedEvent__DelegateSignature_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UDelegateFunction_UEditableText_OnEditableTextCommittedEvent__DelegateSignature_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableText_eventOnEditableTextCommittedEvent_Parms, Text), METADATA_PARAMS(Z_Construct_UDelegateFunction_UEditableText_OnEditableTextCommittedEvent__DelegateSignature_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEditableText_OnEditableTextCommittedEvent__DelegateSignature_Statics::NewProp_Text_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UEditableText_OnEditableTextCommittedEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UEditableText_OnEditableTextCommittedEvent__DelegateSignature_Statics::NewProp_CommitMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UEditableText_OnEditableTextCommittedEvent__DelegateSignature_Statics::NewProp_Text,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UEditableText_OnEditableTextCommittedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UEditableText_OnEditableTextCommittedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableText, nullptr, "OnEditableTextCommittedEvent__DelegateSignature", nullptr, nullptr, sizeof(EditableText_eventOnEditableTextCommittedEvent_Parms), Z_Construct_UDelegateFunction_UEditableText_OnEditableTextCommittedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEditableText_OnEditableTextCommittedEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UEditableText_OnEditableTextCommittedEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEditableText_OnEditableTextCommittedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UEditableText_OnEditableTextCommittedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UEditableText_OnEditableTextCommittedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UEditableText_OnEditableTextChangedEvent__DelegateSignature_Statics
	{
		struct EditableText_eventOnEditableTextChangedEvent_Parms
		{
			FText Text;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UEditableText_OnEditableTextChangedEvent__DelegateSignature_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UDelegateFunction_UEditableText_OnEditableTextChangedEvent__DelegateSignature_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableText_eventOnEditableTextChangedEvent_Parms, Text), METADATA_PARAMS(Z_Construct_UDelegateFunction_UEditableText_OnEditableTextChangedEvent__DelegateSignature_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEditableText_OnEditableTextChangedEvent__DelegateSignature_Statics::NewProp_Text_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UEditableText_OnEditableTextChangedEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UEditableText_OnEditableTextChangedEvent__DelegateSignature_Statics::NewProp_Text,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UEditableText_OnEditableTextChangedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UEditableText_OnEditableTextChangedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableText, nullptr, "OnEditableTextChangedEvent__DelegateSignature", nullptr, nullptr, sizeof(EditableText_eventOnEditableTextChangedEvent_Parms), Z_Construct_UDelegateFunction_UEditableText_OnEditableTextChangedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEditableText_OnEditableTextChangedEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UEditableText_OnEditableTextChangedEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEditableText_OnEditableTextChangedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UEditableText_OnEditableTextChangedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UEditableText_OnEditableTextChangedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UEditableText::execSetJustification)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InJustification);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetJustification(ETextJustify::Type(Z_Param_InJustification));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditableText::execSetIsReadOnly)
	{
		P_GET_UBOOL(Z_Param_InbIsReadyOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsReadOnly(Z_Param_InbIsReadyOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditableText::execSetHintText)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_InHintText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHintText(Z_Param_InHintText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditableText::execSetIsPassword)
	{
		P_GET_UBOOL(Z_Param_InbIsPassword);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsPassword(Z_Param_InbIsPassword);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditableText::execSetText)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_InText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetText(Z_Param_InText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditableText::execGetText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetText();
		P_NATIVE_END;
	}
	void UEditableText::StaticRegisterNativesUEditableText()
	{
		UClass* Class = UEditableText::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetText", &UEditableText::execGetText },
			{ "SetHintText", &UEditableText::execSetHintText },
			{ "SetIsPassword", &UEditableText::execSetIsPassword },
			{ "SetIsReadOnly", &UEditableText::execSetIsReadOnly },
			{ "SetJustification", &UEditableText::execSetJustification },
			{ "SetText", &UEditableText::execSetText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEditableText_GetText_Statics
	{
		struct EditableText_eventGetText_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UEditableText_GetText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableText_eventGetText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableText_GetText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableText_GetText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableText_GetText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/**\n\x09 * Gets the widget text\n\x09 * @return The widget text\n\x09 */" },
		{ "DisplayName", "GetText (Editable Text)" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
		{ "ToolTip", "Gets the widget text\n@return The widget text" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableText_GetText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableText, nullptr, "GetText", nullptr, nullptr, sizeof(EditableText_eventGetText_Parms), Z_Construct_UFunction_UEditableText_GetText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableText_GetText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableText_GetText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableText_GetText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableText_GetText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableText_GetText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableText_SetHintText_Statics
	{
		struct EditableText_eventSetHintText_Parms
		{
			FText InHintText;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_InHintText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UEditableText_SetHintText_Statics::NewProp_InHintText = { "InHintText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableText_eventSetHintText_Parms, InHintText), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableText_SetHintText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableText_SetHintText_Statics::NewProp_InHintText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableText_SetHintText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableText_SetHintText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableText, nullptr, "SetHintText", nullptr, nullptr, sizeof(EditableText_eventSetHintText_Parms), Z_Construct_UFunction_UEditableText_SetHintText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableText_SetHintText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableText_SetHintText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableText_SetHintText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableText_SetHintText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableText_SetHintText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableText_SetIsPassword_Statics
	{
		struct EditableText_eventSetIsPassword_Parms
		{
			bool InbIsPassword;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InbIsPassword_MetaData[];
#endif
		static void NewProp_InbIsPassword_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InbIsPassword;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableText_SetIsPassword_Statics::NewProp_InbIsPassword_MetaData[] = {
		{ "DisplayName", "IsPassword" },
	};
#endif
	void Z_Construct_UFunction_UEditableText_SetIsPassword_Statics::NewProp_InbIsPassword_SetBit(void* Obj)
	{
		((EditableText_eventSetIsPassword_Parms*)Obj)->InbIsPassword = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditableText_SetIsPassword_Statics::NewProp_InbIsPassword = { "InbIsPassword", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditableText_eventSetIsPassword_Parms), &Z_Construct_UFunction_UEditableText_SetIsPassword_Statics::NewProp_InbIsPassword_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UEditableText_SetIsPassword_Statics::NewProp_InbIsPassword_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableText_SetIsPassword_Statics::NewProp_InbIsPassword_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableText_SetIsPassword_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableText_SetIsPassword_Statics::NewProp_InbIsPassword,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableText_SetIsPassword_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableText_SetIsPassword_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableText, nullptr, "SetIsPassword", nullptr, nullptr, sizeof(EditableText_eventSetIsPassword_Parms), Z_Construct_UFunction_UEditableText_SetIsPassword_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableText_SetIsPassword_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableText_SetIsPassword_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableText_SetIsPassword_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableText_SetIsPassword()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableText_SetIsPassword_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableText_SetIsReadOnly_Statics
	{
		struct EditableText_eventSetIsReadOnly_Parms
		{
			bool InbIsReadyOnly;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InbIsReadyOnly_MetaData[];
#endif
		static void NewProp_InbIsReadyOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InbIsReadyOnly;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableText_SetIsReadOnly_Statics::NewProp_InbIsReadyOnly_MetaData[] = {
		{ "DisplayName", "ReadyOnly" },
	};
#endif
	void Z_Construct_UFunction_UEditableText_SetIsReadOnly_Statics::NewProp_InbIsReadyOnly_SetBit(void* Obj)
	{
		((EditableText_eventSetIsReadOnly_Parms*)Obj)->InbIsReadyOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditableText_SetIsReadOnly_Statics::NewProp_InbIsReadyOnly = { "InbIsReadyOnly", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditableText_eventSetIsReadOnly_Parms), &Z_Construct_UFunction_UEditableText_SetIsReadOnly_Statics::NewProp_InbIsReadyOnly_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UEditableText_SetIsReadOnly_Statics::NewProp_InbIsReadyOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableText_SetIsReadOnly_Statics::NewProp_InbIsReadyOnly_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableText_SetIsReadOnly_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableText_SetIsReadOnly_Statics::NewProp_InbIsReadyOnly,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableText_SetIsReadOnly_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "DisplayName", "SetIsReadOnly (Editable Text)" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableText_SetIsReadOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableText, nullptr, "SetIsReadOnly", nullptr, nullptr, sizeof(EditableText_eventSetIsReadOnly_Parms), Z_Construct_UFunction_UEditableText_SetIsReadOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableText_SetIsReadOnly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableText_SetIsReadOnly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableText_SetIsReadOnly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableText_SetIsReadOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableText_SetIsReadOnly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableText_SetJustification_Statics
	{
		struct EditableText_eventSetJustification_Parms
		{
			TEnumAsByte<ETextJustify::Type> InJustification;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InJustification;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEditableText_SetJustification_Statics::NewProp_InJustification = { "InJustification", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableText_eventSetJustification_Parms, InJustification), Z_Construct_UEnum_Slate_ETextJustify, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableText_SetJustification_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableText_SetJustification_Statics::NewProp_InJustification,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableText_SetJustification_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableText_SetJustification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableText, nullptr, "SetJustification", nullptr, nullptr, sizeof(EditableText_eventSetJustification_Parms), Z_Construct_UFunction_UEditableText_SetJustification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableText_SetJustification_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableText_SetJustification_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableText_SetJustification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableText_SetJustification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableText_SetJustification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableText_SetText_Statics
	{
		struct EditableText_eventSetText_Parms
		{
			FText InText;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_InText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UEditableText_SetText_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableText_eventSetText_Parms, InText), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableText_SetText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableText_SetText_Statics::NewProp_InText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableText_SetText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/**\n\x09 * Directly sets the widget text.\n\x09 * Warning: This will wipe any binding created for the Text property!\n\x09 * @param InText The text to assign to the widget\n\x09 */" },
		{ "DisplayName", "SetText (Editable Text)" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
		{ "ToolTip", "Directly sets the widget text.\nWarning: This will wipe any binding created for the Text property!\n@param InText The text to assign to the widget" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableText_SetText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableText, nullptr, "SetText", nullptr, nullptr, sizeof(EditableText_eventSetText_Parms), Z_Construct_UFunction_UEditableText_SetText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableText_SetText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableText_SetText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableText_SetText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableText_SetText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableText_SetText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEditableText_NoRegister()
	{
		return UEditableText::StaticClass();
	}
	struct Z_Construct_UClass_UEditableText_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTextCommitted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTextCommitted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTextChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTextChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShapedTextOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShapedTextOptions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Justification_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Justification;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VirtualKeyboardDismissAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_VirtualKeyboardDismissAction;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VirtualKeyboardDismissAction_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VirtualKeyboardTrigger_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_VirtualKeyboardTrigger;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VirtualKeyboardTrigger_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VirtualKeyboardOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VirtualKeyboardOptions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyboardType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_KeyboardType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowContextMenu_MetaData[];
#endif
		static void NewProp_AllowContextMenu_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AllowContextMenu;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectAllTextOnCommit_MetaData[];
#endif
		static void NewProp_SelectAllTextOnCommit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SelectAllTextOnCommit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClearKeyboardFocusOnCommit_MetaData[];
#endif
		static void NewProp_ClearKeyboardFocusOnCommit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ClearKeyboardFocusOnCommit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RevertTextOnEscape_MetaData[];
#endif
		static void NewProp_RevertTextOnEscape_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RevertTextOnEscape;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectAllTextWhenFocused_MetaData[];
#endif
		static void NewProp_SelectAllTextWhenFocused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SelectAllTextWhenFocused;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsCaretMovedWhenGainFocus_MetaData[];
#endif
		static void NewProp_IsCaretMovedWhenGainFocus_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCaretMovedWhenGainFocus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumDesiredWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinimumDesiredWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsPassword_MetaData[];
#endif
		static void NewProp_IsPassword_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsPassword;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsReadOnly_MetaData[];
#endif
		static void NewProp_IsReadOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsReadOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorAndOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorAndOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Font;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CaretImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CaretImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundImageComposing_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BackgroundImageComposing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundImageSelected_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BackgroundImageSelected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Style_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Style;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WidgetStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HintTextDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_HintTextDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HintText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_HintText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_TextDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditableText_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEditableText_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEditableText_GetText, "GetText" }, // 1136062392
		{ &Z_Construct_UDelegateFunction_UEditableText_OnEditableTextChangedEvent__DelegateSignature, "OnEditableTextChangedEvent__DelegateSignature" }, // 2228551534
		{ &Z_Construct_UDelegateFunction_UEditableText_OnEditableTextCommittedEvent__DelegateSignature, "OnEditableTextCommittedEvent__DelegateSignature" }, // 837118927
		{ &Z_Construct_UFunction_UEditableText_SetHintText, "SetHintText" }, // 2461451739
		{ &Z_Construct_UFunction_UEditableText_SetIsPassword, "SetIsPassword" }, // 1642030299
		{ &Z_Construct_UFunction_UEditableText_SetIsReadOnly, "SetIsReadOnly" }, // 1698947784
		{ &Z_Construct_UFunction_UEditableText_SetJustification, "SetJustification" }, // 361167175
		{ &Z_Construct_UFunction_UEditableText_SetText, "SetText" }, // 1838247251
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableText_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Editable text box widget\n */" },
		{ "IncludePath", "Components/EditableText.h" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
		{ "ToolTip", "Editable text box widget" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableText_Statics::NewProp_OnTextCommitted_MetaData[] = {
		{ "Category", "Widget Event" },
		{ "Comment", "/** Called whenever the text is committed.  This happens when the user presses enter or the text box loses focus. */" },
		{ "DisplayName", "OnTextCommitted (Editable Text)" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
		{ "ToolTip", "Called whenever the text is committed.  This happens when the user presses enter or the text box loses focus." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEditableText_Statics::NewProp_OnTextCommitted = { "OnTextCommitted", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditableText, OnTextCommitted), Z_Construct_UDelegateFunction_UEditableText_OnEditableTextCommittedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEditableText_Statics::NewProp_OnTextCommitted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditableText_Statics::NewProp_OnTextCommitted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableText_Statics::NewProp_OnTextChanged_MetaData[] = {
		{ "Category", "Widget Event" },
		{ "Comment", "/** Called whenever the text is changed programmatically or interactively by the user */" },
		{ "DisplayName", "OnTextChanged (Editable Text)" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
		{ "ToolTip", "Called whenever the text is changed programmatically or interactively by the user" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEditableText_Statics::NewProp_OnTextChanged = { "OnTextChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditableText, OnTextChanged), Z_Construct_UDelegateFunction_UEditableText_OnEditableTextChangedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEditableText_Statics::NewProp_OnTextChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditableText_Statics::NewProp_OnTextChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableText_Statics::NewProp_ShapedTextOptions_MetaData[] = {
		{ "Category", "Localization" },
		{ "Comment", "/** Controls how the text within this widget should be shaped. */" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Controls how the text within this widget should be shaped." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditableText_Statics::NewProp_ShapedTextOptions = { "ShapedTextOptions", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditableText, ShapedTextOptions), Z_Construct_UScriptStruct_FShapedTextOptions, METADATA_PARAMS(Z_Construct_UClass_UEditableText_Statics::NewProp_ShapedTextOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditableText_Statics::NewProp_ShapedTextOptions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableText_Statics::NewProp_Justification_MetaData[] = {
		{ "BlueprintSetter", "SetJustification" },
		{ "Category", "Appearance" },
		{ "Comment", "/** How the text should be aligned with the margin. */" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
		{ "ToolTip", "How the text should be aligned with the margin." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEditableText_Statics::NewProp_Justification = { "Justification", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditableText, Justification), Z_Construct_UEnum_Slate_ETextJustify, METADATA_PARAMS(Z_Construct_UClass_UEditableText_Statics::NewProp_Justification_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditableText_Statics::NewProp_Justification_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableText_Statics::NewProp_VirtualKeyboardDismissAction_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** What action should be taken when the virtual keyboard is dismissed? */" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
		{ "ToolTip", "What action should be taken when the virtual keyboard is dismissed?" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEditableText_Statics::NewProp_VirtualKeyboardDismissAction = { "VirtualKeyboardDismissAction", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditableText, VirtualKeyboardDismissAction), Z_Construct_UEnum_Slate_EVirtualKeyboardDismissAction, METADATA_PARAMS(Z_Construct_UClass_UEditableText_Statics::NewProp_VirtualKeyboardDismissAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditableText_Statics::NewProp_VirtualKeyboardDismissAction_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEditableText_Statics::NewProp_VirtualKeyboardDismissAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableText_Statics::NewProp_VirtualKeyboardTrigger_MetaData[] = {
		{ "Category", "Behavior" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEditableText_Statics::NewProp_VirtualKeyboardTrigger = { "VirtualKeyboardTrigger", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditableText, VirtualKeyboardTrigger), Z_Construct_UEnum_Slate_EVirtualKeyboardTrigger, METADATA_PARAMS(Z_Construct_UClass_UEditableText_Statics::NewProp_VirtualKeyboardTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditableText_Statics::NewProp_VirtualKeyboardTrigger_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEditableText_Statics::NewProp_VirtualKeyboardTrigger_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableText_Statics::NewProp_VirtualKeyboardOptions_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Additional options for the virtual keyboard */" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
		{ "ToolTip", "Additional options for the virtual keyboard" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditableText_Statics::NewProp_VirtualKeyboardOptions = { "VirtualKeyboardOptions", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditableText, VirtualKeyboardOptions), Z_Construct_UScriptStruct_FVirtualKeyboardOptions, METADATA_PARAMS(Z_Construct_UClass_UEditableText_Statics::NewProp_VirtualKeyboardOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditableText_Statics::NewProp_VirtualKeyboardOptions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableText_Statics::NewProp_KeyboardType_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** If we're on a platform that requires a virtual keyboard, what kind of keyboard should this widget use? */" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
		{ "ToolTip", "If we're on a platform that requires a virtual keyboard, what kind of keyboard should this widget use?" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEditableText_Statics::NewProp_KeyboardType = { "KeyboardType", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditableText, KeyboardType), Z_Construct_UEnum_UMG_EVirtualKeyboardType, METADATA_PARAMS(Z_Construct_UClass_UEditableText_Statics::NewProp_KeyboardType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditableText_Statics::NewProp_KeyboardType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableText_Statics::NewProp_AllowContextMenu_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Whether the context menu can be opened */" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
		{ "ToolTip", "Whether the context menu can be opened" },
	};
#endif
	void Z_Construct_UClass_UEditableText_Statics::NewProp_AllowContextMenu_SetBit(void* Obj)
	{
		((UEditableText*)Obj)->AllowContextMenu = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditableText_Statics::NewProp_AllowContextMenu = { "AllowContextMenu", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEditableText), &Z_Construct_UClass_UEditableText_Statics::NewProp_AllowContextMenu_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditableText_Statics::NewProp_AllowContextMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditableText_Statics::NewProp_AllowContextMenu_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableText_Statics::NewProp_SelectAllTextOnCommit_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Whether to select all text when pressing enter to commit changes */" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
		{ "ToolTip", "Whether to select all text when pressing enter to commit changes" },
	};
#endif
	void Z_Construct_UClass_UEditableText_Statics::NewProp_SelectAllTextOnCommit_SetBit(void* Obj)
	{
		((UEditableText*)Obj)->SelectAllTextOnCommit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditableText_Statics::NewProp_SelectAllTextOnCommit = { "SelectAllTextOnCommit", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEditableText), &Z_Construct_UClass_UEditableText_Statics::NewProp_SelectAllTextOnCommit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditableText_Statics::NewProp_SelectAllTextOnCommit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditableText_Statics::NewProp_SelectAllTextOnCommit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableText_Statics::NewProp_ClearKeyboardFocusOnCommit_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Whether to clear keyboard focus when pressing enter to commit changes */" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
		{ "ToolTip", "Whether to clear keyboard focus when pressing enter to commit changes" },
	};
#endif
	void Z_Construct_UClass_UEditableText_Statics::NewProp_ClearKeyboardFocusOnCommit_SetBit(void* Obj)
	{
		((UEditableText*)Obj)->ClearKeyboardFocusOnCommit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditableText_Statics::NewProp_ClearKeyboardFocusOnCommit = { "ClearKeyboardFocusOnCommit", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEditableText), &Z_Construct_UClass_UEditableText_Statics::NewProp_ClearKeyboardFocusOnCommit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditableText_Statics::NewProp_ClearKeyboardFocusOnCommit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditableText_Statics::NewProp_ClearKeyboardFocusOnCommit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableText_Statics::NewProp_RevertTextOnEscape_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Whether to allow the user to back out of changes when they press the escape key */" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
		{ "ToolTip", "Whether to allow the user to back out of changes when they press the escape key" },
	};
#endif
	void Z_Construct_UClass_UEditableText_Statics::NewProp_RevertTextOnEscape_SetBit(void* Obj)
	{
		((UEditableText*)Obj)->RevertTextOnEscape = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditableText_Statics::NewProp_RevertTextOnEscape = { "RevertTextOnEscape", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEditableText), &Z_Construct_UClass_UEditableText_Statics::NewProp_RevertTextOnEscape_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditableText_Statics::NewProp_RevertTextOnEscape_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditableText_Statics::NewProp_RevertTextOnEscape_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableText_Statics::NewProp_SelectAllTextWhenFocused_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Whether to select all text when the user clicks to give focus on the widget */" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
		{ "ToolTip", "Whether to select all text when the user clicks to give focus on the widget" },
	};
#endif
	void Z_Construct_UClass_UEditableText_Statics::NewProp_SelectAllTextWhenFocused_SetBit(void* Obj)
	{
		((UEditableText*)Obj)->SelectAllTextWhenFocused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditableText_Statics::NewProp_SelectAllTextWhenFocused = { "SelectAllTextWhenFocused", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEditableText), &Z_Construct_UClass_UEditableText_Statics::NewProp_SelectAllTextWhenFocused_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditableText_Statics::NewProp_SelectAllTextWhenFocused_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditableText_Statics::NewProp_SelectAllTextWhenFocused_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableText_Statics::NewProp_IsCaretMovedWhenGainFocus_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Workaround as we lose focus when the auto completion closes. */" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
		{ "ToolTip", "Workaround as we lose focus when the auto completion closes." },
	};
#endif
	void Z_Construct_UClass_UEditableText_Statics::NewProp_IsCaretMovedWhenGainFocus_SetBit(void* Obj)
	{
		((UEditableText*)Obj)->IsCaretMovedWhenGainFocus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditableText_Statics::NewProp_IsCaretMovedWhenGainFocus = { "IsCaretMovedWhenGainFocus", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEditableText), &Z_Construct_UClass_UEditableText_Statics::NewProp_IsCaretMovedWhenGainFocus_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditableText_Statics::NewProp_IsCaretMovedWhenGainFocus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditableText_Statics::NewProp_IsCaretMovedWhenGainFocus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableText_Statics::NewProp_MinimumDesiredWidth_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Minimum width that a text block should be */" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
		{ "ToolTip", "Minimum width that a text block should be" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEditableText_Statics::NewProp_MinimumDesiredWidth = { "MinimumDesiredWidth", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditableText, MinimumDesiredWidth), METADATA_PARAMS(Z_Construct_UClass_UEditableText_Statics::NewProp_MinimumDesiredWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditableText_Statics::NewProp_MinimumDesiredWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableText_Statics::NewProp_IsPassword_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets whether this text box is for storing a password */" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
		{ "ToolTip", "Sets whether this text box is for storing a password" },
	};
#endif
	void Z_Construct_UClass_UEditableText_Statics::NewProp_IsPassword_SetBit(void* Obj)
	{
		((UEditableText*)Obj)->IsPassword = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditableText_Statics::NewProp_IsPassword = { "IsPassword", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEditableText), &Z_Construct_UClass_UEditableText_Statics::NewProp_IsPassword_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditableText_Statics::NewProp_IsPassword_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditableText_Statics::NewProp_IsPassword_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableText_Statics::NewProp_IsReadOnly_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets whether this text box can actually be modified interactively by the user */" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
		{ "ToolTip", "Sets whether this text box can actually be modified interactively by the user" },
	};
#endif
	void Z_Construct_UClass_UEditableText_Statics::NewProp_IsReadOnly_SetBit(void* Obj)
	{
		((UEditableText*)Obj)->IsReadOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditableText_Statics::NewProp_IsReadOnly = { "IsReadOnly", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEditableText), &Z_Construct_UClass_UEditableText_Statics::NewProp_IsReadOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditableText_Statics::NewProp_IsReadOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditableText_Statics::NewProp_IsReadOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableText_Statics::NewProp_ColorAndOpacity_MetaData[] = {
		{ "Comment", "/** Text color and opacity (overrides Style) */" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
		{ "ToolTip", "Text color and opacity (overrides Style)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditableText_Statics::NewProp_ColorAndOpacity = { "ColorAndOpacity", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditableText, ColorAndOpacity_DEPRECATED), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UClass_UEditableText_Statics::NewProp_ColorAndOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditableText_Statics::NewProp_ColorAndOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableText_Statics::NewProp_Font_MetaData[] = {
		{ "Comment", "/** Font color and opacity (overrides Style) */" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
		{ "ToolTip", "Font color and opacity (overrides Style)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditableText_Statics::NewProp_Font = { "Font", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditableText, Font_DEPRECATED), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(Z_Construct_UClass_UEditableText_Statics::NewProp_Font_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditableText_Statics::NewProp_Font_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableText_Statics::NewProp_CaretImage_MetaData[] = {
		{ "Comment", "/** Image brush used for the caret (overrides Style) */" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
		{ "ToolTip", "Image brush used for the caret (overrides Style)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditableText_Statics::NewProp_CaretImage = { "CaretImage", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditableText, CaretImage_DEPRECATED), Z_Construct_UClass_USlateBrushAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditableText_Statics::NewProp_CaretImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditableText_Statics::NewProp_CaretImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableText_Statics::NewProp_BackgroundImageComposing_MetaData[] = {
		{ "Comment", "/** Background image for the composing text (overrides Style) */" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
		{ "ToolTip", "Background image for the composing text (overrides Style)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditableText_Statics::NewProp_BackgroundImageComposing = { "BackgroundImageComposing", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditableText, BackgroundImageComposing_DEPRECATED), Z_Construct_UClass_USlateBrushAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditableText_Statics::NewProp_BackgroundImageComposing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditableText_Statics::NewProp_BackgroundImageComposing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableText_Statics::NewProp_BackgroundImageSelected_MetaData[] = {
		{ "Comment", "/** Background image for the selected text (overrides Style) */" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
		{ "ToolTip", "Background image for the selected text (overrides Style)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditableText_Statics::NewProp_BackgroundImageSelected = { "BackgroundImageSelected", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditableText, BackgroundImageSelected_DEPRECATED), Z_Construct_UClass_USlateBrushAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditableText_Statics::NewProp_BackgroundImageSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditableText_Statics::NewProp_BackgroundImageSelected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableText_Statics::NewProp_Style_MetaData[] = {
		{ "Comment", "/** Text style */" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
		{ "ToolTip", "Text style" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditableText_Statics::NewProp_Style = { "Style", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditableText, Style_DEPRECATED), Z_Construct_UClass_USlateWidgetStyleAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditableText_Statics::NewProp_Style_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditableText_Statics::NewProp_Style_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableText_Statics::NewProp_WidgetStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The style */" },
		{ "DisplayName", "Style" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The style" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditableText_Statics::NewProp_WidgetStyle = { "WidgetStyle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditableText, WidgetStyle), Z_Construct_UScriptStruct_FEditableTextStyle, METADATA_PARAMS(Z_Construct_UClass_UEditableText_Statics::NewProp_WidgetStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditableText_Statics::NewProp_WidgetStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableText_Statics::NewProp_HintTextDelegate_MetaData[] = {
		{ "Comment", "/** A bindable delegate to allow logic to drive the hint text of the widget */" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
		{ "ToolTip", "A bindable delegate to allow logic to drive the hint text of the widget" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UEditableText_Statics::NewProp_HintTextDelegate = { "HintTextDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditableText, HintTextDelegate), Z_Construct_UDelegateFunction_UWidget_GetText__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEditableText_Statics::NewProp_HintTextDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditableText_Statics::NewProp_HintTextDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableText_Statics::NewProp_HintText_MetaData[] = {
		{ "Category", "Content" },
		{ "Comment", "/** Hint text that appears when there is no text in the text box */" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
		{ "ToolTip", "Hint text that appears when there is no text in the text box" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UEditableText_Statics::NewProp_HintText = { "HintText", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditableText, HintText), METADATA_PARAMS(Z_Construct_UClass_UEditableText_Statics::NewProp_HintText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditableText_Statics::NewProp_HintText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableText_Statics::NewProp_TextDelegate_MetaData[] = {
		{ "Comment", "/** A bindable delegate to allow logic to drive the text of the widget */" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
		{ "ToolTip", "A bindable delegate to allow logic to drive the text of the widget" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UEditableText_Statics::NewProp_TextDelegate = { "TextDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditableText, TextDelegate), Z_Construct_UDelegateFunction_UWidget_GetText__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEditableText_Statics::NewProp_TextDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditableText_Statics::NewProp_TextDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableText_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "Content" },
		{ "Comment", "/** The text content for this editable text box widget */" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
		{ "ToolTip", "The text content for this editable text box widget" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UEditableText_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditableText, Text), METADATA_PARAMS(Z_Construct_UClass_UEditableText_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditableText_Statics::NewProp_Text_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditableText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableText_Statics::NewProp_OnTextCommitted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableText_Statics::NewProp_OnTextChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableText_Statics::NewProp_ShapedTextOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableText_Statics::NewProp_Justification,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableText_Statics::NewProp_VirtualKeyboardDismissAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableText_Statics::NewProp_VirtualKeyboardDismissAction_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableText_Statics::NewProp_VirtualKeyboardTrigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableText_Statics::NewProp_VirtualKeyboardTrigger_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableText_Statics::NewProp_VirtualKeyboardOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableText_Statics::NewProp_KeyboardType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableText_Statics::NewProp_AllowContextMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableText_Statics::NewProp_SelectAllTextOnCommit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableText_Statics::NewProp_ClearKeyboardFocusOnCommit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableText_Statics::NewProp_RevertTextOnEscape,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableText_Statics::NewProp_SelectAllTextWhenFocused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableText_Statics::NewProp_IsCaretMovedWhenGainFocus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableText_Statics::NewProp_MinimumDesiredWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableText_Statics::NewProp_IsPassword,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableText_Statics::NewProp_IsReadOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableText_Statics::NewProp_ColorAndOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableText_Statics::NewProp_Font,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableText_Statics::NewProp_CaretImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableText_Statics::NewProp_BackgroundImageComposing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableText_Statics::NewProp_BackgroundImageSelected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableText_Statics::NewProp_Style,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableText_Statics::NewProp_WidgetStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableText_Statics::NewProp_HintTextDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableText_Statics::NewProp_HintText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableText_Statics::NewProp_TextDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableText_Statics::NewProp_Text,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditableText_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditableText>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditableText_Statics::ClassParams = {
		&UEditableText::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEditableText_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEditableText_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEditableText_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditableText_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditableText()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditableText_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditableText, 2391027820);
	template<> UMG_API UClass* StaticClass<UEditableText>()
	{
		return UEditableText::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditableText(Z_Construct_UClass_UEditableText, &UEditableText::StaticClass, TEXT("/Script/UMG"), TEXT("UEditableText"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditableText);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
