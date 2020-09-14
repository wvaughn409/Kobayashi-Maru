// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/RichTextBlock.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRichTextBlock() {}
// Cross Module References
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FRichTextStyleRow();
	UPackage* Z_Construct_UPackage__Script_UMG();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FTextBlockStyle();
	UMG_API UClass* Z_Construct_UClass_URichTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_URichTextBlock();
	UMG_API UClass* Z_Construct_UClass_UTextLayoutWidget();
	UMG_API UClass* Z_Construct_UClass_URichTextBlockDecorator_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References
class UScriptStruct* FRichTextStyleRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UMG_API uint32 Get_Z_Construct_UScriptStruct_FRichTextStyleRow_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRichTextStyleRow, Z_Construct_UPackage__Script_UMG(), TEXT("RichTextStyleRow"), sizeof(FRichTextStyleRow), Get_Z_Construct_UScriptStruct_FRichTextStyleRow_Hash());
	}
	return Singleton;
}
template<> UMG_API UScriptStruct* StaticStruct<FRichTextStyleRow>()
{
	return FRichTextStyleRow::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRichTextStyleRow(FRichTextStyleRow::StaticStruct, TEXT("/Script/UMG"), TEXT("RichTextStyleRow"), false, nullptr, nullptr);
static struct FScriptStruct_UMG_StaticRegisterNativesFRichTextStyleRow
{
	FScriptStruct_UMG_StaticRegisterNativesFRichTextStyleRow()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RichTextStyleRow")),new UScriptStruct::TCppStructOps<FRichTextStyleRow>);
	}
} ScriptStruct_UMG_StaticRegisterNativesFRichTextStyleRow;
	struct Z_Construct_UScriptStruct_FRichTextStyleRow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextStyle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRichTextStyleRow_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Simple struct for rich text styles */" },
		{ "ModuleRelativePath", "Public/Components/RichTextBlock.h" },
		{ "ToolTip", "Simple struct for rich text styles" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRichTextStyleRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRichTextStyleRow>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRichTextStyleRow_Statics::NewProp_TextStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/RichTextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRichTextStyleRow_Statics::NewProp_TextStyle = { "TextStyle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRichTextStyleRow, TextStyle), Z_Construct_UScriptStruct_FTextBlockStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FRichTextStyleRow_Statics::NewProp_TextStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRichTextStyleRow_Statics::NewProp_TextStyle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRichTextStyleRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRichTextStyleRow_Statics::NewProp_TextStyle,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRichTextStyleRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"RichTextStyleRow",
		sizeof(FRichTextStyleRow),
		alignof(FRichTextStyleRow),
		Z_Construct_UScriptStruct_FRichTextStyleRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRichTextStyleRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRichTextStyleRow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRichTextStyleRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRichTextStyleRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRichTextStyleRow_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UMG();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RichTextStyleRow"), sizeof(FRichTextStyleRow), Get_Z_Construct_UScriptStruct_FRichTextStyleRow_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRichTextStyleRow_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRichTextStyleRow_Hash() { return 3787592063U; }
	DEFINE_FUNCTION(URichTextBlock::execGetDecoratorByClass)
	{
		P_GET_OBJECT(UClass,Z_Param_DecoratorClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URichTextBlockDecorator**)Z_Param__Result=P_THIS->GetDecoratorByClass(Z_Param_DecoratorClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URichTextBlock::execSetTextStyleSet)
	{
		P_GET_OBJECT(UDataTable,Z_Param_NewTextStyleSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTextStyleSet(Z_Param_NewTextStyleSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URichTextBlock::execSetText)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetText(Z_Param_Out_InText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URichTextBlock::execGetText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URichTextBlock::execClearAllDefaultStyleOverrides)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearAllDefaultStyleOverrides();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URichTextBlock::execSetDefaultTextStyle)
	{
		P_GET_STRUCT_REF(FTextBlockStyle,Z_Param_Out_InDefaultTextStyle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefaultTextStyle(Z_Param_Out_InDefaultTextStyle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URichTextBlock::execSetAutoWrapText)
	{
		P_GET_UBOOL(Z_Param_InAutoTextWrap);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAutoWrapText(Z_Param_InAutoTextWrap);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URichTextBlock::execSetMinDesiredWidth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InMinDesiredWidth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMinDesiredWidth(Z_Param_InMinDesiredWidth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URichTextBlock::execSetDefaultStrikeBrush)
	{
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_InStrikeBrush);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefaultStrikeBrush(Z_Param_Out_InStrikeBrush);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URichTextBlock::execSetDefaultFont)
	{
		P_GET_STRUCT(FSlateFontInfo,Z_Param_InFontInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefaultFont(Z_Param_InFontInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URichTextBlock::execSetDefaultShadowOffset)
	{
		P_GET_STRUCT(FVector2D,Z_Param_InShadowOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefaultShadowOffset(Z_Param_InShadowOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URichTextBlock::execSetDefaultShadowColorAndOpacity)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_InShadowColorAndOpacity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefaultShadowColorAndOpacity(Z_Param_InShadowColorAndOpacity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URichTextBlock::execSetDefaultColorAndOpacity)
	{
		P_GET_STRUCT(FSlateColor,Z_Param_InColorAndOpacity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefaultColorAndOpacity(Z_Param_InColorAndOpacity);
		P_NATIVE_END;
	}
	void URichTextBlock::StaticRegisterNativesURichTextBlock()
	{
		UClass* Class = URichTextBlock::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearAllDefaultStyleOverrides", &URichTextBlock::execClearAllDefaultStyleOverrides },
			{ "GetDecoratorByClass", &URichTextBlock::execGetDecoratorByClass },
			{ "GetText", &URichTextBlock::execGetText },
			{ "SetAutoWrapText", &URichTextBlock::execSetAutoWrapText },
			{ "SetDefaultColorAndOpacity", &URichTextBlock::execSetDefaultColorAndOpacity },
			{ "SetDefaultFont", &URichTextBlock::execSetDefaultFont },
			{ "SetDefaultShadowColorAndOpacity", &URichTextBlock::execSetDefaultShadowColorAndOpacity },
			{ "SetDefaultShadowOffset", &URichTextBlock::execSetDefaultShadowOffset },
			{ "SetDefaultStrikeBrush", &URichTextBlock::execSetDefaultStrikeBrush },
			{ "SetDefaultTextStyle", &URichTextBlock::execSetDefaultTextStyle },
			{ "SetMinDesiredWidth", &URichTextBlock::execSetMinDesiredWidth },
			{ "SetText", &URichTextBlock::execSetText },
			{ "SetTextStyleSet", &URichTextBlock::execSetTextStyleSet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URichTextBlock_ClearAllDefaultStyleOverrides_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URichTextBlock_ClearAllDefaultStyleOverrides_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Remove all overrides made to the default text style and return to the style specified in the style set data table */" },
		{ "ModuleRelativePath", "Public/Components/RichTextBlock.h" },
		{ "ToolTip", "Remove all overrides made to the default text style and return to the style specified in the style set data table" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URichTextBlock_ClearAllDefaultStyleOverrides_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URichTextBlock, nullptr, "ClearAllDefaultStyleOverrides", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URichTextBlock_ClearAllDefaultStyleOverrides_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextBlock_ClearAllDefaultStyleOverrides_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URichTextBlock_ClearAllDefaultStyleOverrides()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URichTextBlock_ClearAllDefaultStyleOverrides_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URichTextBlock_GetDecoratorByClass_Statics
	{
		struct RichTextBlock_eventGetDecoratorByClass_Parms
		{
			TSubclassOf<URichTextBlockDecorator>  DecoratorClass;
			URichTextBlockDecorator* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DecoratorClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URichTextBlock_GetDecoratorByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RichTextBlock_eventGetDecoratorByClass_Parms, ReturnValue), Z_Construct_UClass_URichTextBlockDecorator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URichTextBlock_GetDecoratorByClass_Statics::NewProp_DecoratorClass = { "DecoratorClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RichTextBlock_eventGetDecoratorByClass_Parms, DecoratorClass), Z_Construct_UClass_URichTextBlockDecorator_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URichTextBlock_GetDecoratorByClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URichTextBlock_GetDecoratorByClass_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URichTextBlock_GetDecoratorByClass_Statics::NewProp_DecoratorClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URichTextBlock_GetDecoratorByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/RichTextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URichTextBlock_GetDecoratorByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URichTextBlock, nullptr, "GetDecoratorByClass", nullptr, nullptr, sizeof(RichTextBlock_eventGetDecoratorByClass_Parms), Z_Construct_UFunction_URichTextBlock_GetDecoratorByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextBlock_GetDecoratorByClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URichTextBlock_GetDecoratorByClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextBlock_GetDecoratorByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URichTextBlock_GetDecoratorByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URichTextBlock_GetDecoratorByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URichTextBlock_GetText_Statics
	{
		struct RichTextBlock_eventGetText_Parms
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
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_URichTextBlock_GetText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RichTextBlock_eventGetText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URichTextBlock_GetText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URichTextBlock_GetText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URichTextBlock_GetText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/**\n\x09 * Returns widgets text.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/RichTextBlock.h" },
		{ "ToolTip", "Returns widgets text." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URichTextBlock_GetText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URichTextBlock, nullptr, "GetText", nullptr, nullptr, sizeof(RichTextBlock_eventGetText_Parms), Z_Construct_UFunction_URichTextBlock_GetText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextBlock_GetText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URichTextBlock_GetText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextBlock_GetText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URichTextBlock_GetText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URichTextBlock_GetText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URichTextBlock_SetAutoWrapText_Statics
	{
		struct RichTextBlock_eventSetAutoWrapText_Parms
		{
			bool InAutoTextWrap;
		};
		static void NewProp_InAutoTextWrap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InAutoTextWrap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URichTextBlock_SetAutoWrapText_Statics::NewProp_InAutoTextWrap_SetBit(void* Obj)
	{
		((RichTextBlock_eventSetAutoWrapText_Parms*)Obj)->InAutoTextWrap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URichTextBlock_SetAutoWrapText_Statics::NewProp_InAutoTextWrap = { "InAutoTextWrap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RichTextBlock_eventSetAutoWrapText_Parms), &Z_Construct_UFunction_URichTextBlock_SetAutoWrapText_Statics::NewProp_InAutoTextWrap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URichTextBlock_SetAutoWrapText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URichTextBlock_SetAutoWrapText_Statics::NewProp_InAutoTextWrap,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URichTextBlock_SetAutoWrapText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * Set the auto wrap for this rich text block\n\x09 * @param InAutoTextWrap to turn wrap on or off\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/RichTextBlock.h" },
		{ "ToolTip", "Set the auto wrap for this rich text block\n@param InAutoTextWrap to turn wrap on or off" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URichTextBlock_SetAutoWrapText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URichTextBlock, nullptr, "SetAutoWrapText", nullptr, nullptr, sizeof(RichTextBlock_eventSetAutoWrapText_Parms), Z_Construct_UFunction_URichTextBlock_SetAutoWrapText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextBlock_SetAutoWrapText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URichTextBlock_SetAutoWrapText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextBlock_SetAutoWrapText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URichTextBlock_SetAutoWrapText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URichTextBlock_SetAutoWrapText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URichTextBlock_SetDefaultColorAndOpacity_Statics
	{
		struct RichTextBlock_eventSetDefaultColorAndOpacity_Parms
		{
			FSlateColor InColorAndOpacity;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InColorAndOpacity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URichTextBlock_SetDefaultColorAndOpacity_Statics::NewProp_InColorAndOpacity = { "InColorAndOpacity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RichTextBlock_eventSetDefaultColorAndOpacity_Parms, InColorAndOpacity), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URichTextBlock_SetDefaultColorAndOpacity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URichTextBlock_SetDefaultColorAndOpacity_Statics::NewProp_InColorAndOpacity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URichTextBlock_SetDefaultColorAndOpacity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**  \n\x09 * Sets the color and opacity of the default text in this rich text block\n\x09 * @param InColorAndOpacity\x09\x09The new text color and opacity\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/RichTextBlock.h" },
		{ "ToolTip", "Sets the color and opacity of the default text in this rich text block\n@param InColorAndOpacity             The new text color and opacity" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URichTextBlock_SetDefaultColorAndOpacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URichTextBlock, nullptr, "SetDefaultColorAndOpacity", nullptr, nullptr, sizeof(RichTextBlock_eventSetDefaultColorAndOpacity_Parms), Z_Construct_UFunction_URichTextBlock_SetDefaultColorAndOpacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextBlock_SetDefaultColorAndOpacity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URichTextBlock_SetDefaultColorAndOpacity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextBlock_SetDefaultColorAndOpacity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URichTextBlock_SetDefaultColorAndOpacity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URichTextBlock_SetDefaultColorAndOpacity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URichTextBlock_SetDefaultFont_Statics
	{
		struct RichTextBlock_eventSetDefaultFont_Parms
		{
			FSlateFontInfo InFontInfo;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InFontInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URichTextBlock_SetDefaultFont_Statics::NewProp_InFontInfo = { "InFontInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RichTextBlock_eventSetDefaultFont_Parms, InFontInfo), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URichTextBlock_SetDefaultFont_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URichTextBlock_SetDefaultFont_Statics::NewProp_InFontInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URichTextBlock_SetDefaultFont_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * Dynamically set the default font info for this rich text block\n\x09 * @param InFontInfo The new font info\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/RichTextBlock.h" },
		{ "ToolTip", "Dynamically set the default font info for this rich text block\n@param InFontInfo The new font info" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URichTextBlock_SetDefaultFont_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URichTextBlock, nullptr, "SetDefaultFont", nullptr, nullptr, sizeof(RichTextBlock_eventSetDefaultFont_Parms), Z_Construct_UFunction_URichTextBlock_SetDefaultFont_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextBlock_SetDefaultFont_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URichTextBlock_SetDefaultFont_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextBlock_SetDefaultFont_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URichTextBlock_SetDefaultFont()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URichTextBlock_SetDefaultFont_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URichTextBlock_SetDefaultShadowColorAndOpacity_Statics
	{
		struct RichTextBlock_eventSetDefaultShadowColorAndOpacity_Parms
		{
			FLinearColor InShadowColorAndOpacity;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InShadowColorAndOpacity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URichTextBlock_SetDefaultShadowColorAndOpacity_Statics::NewProp_InShadowColorAndOpacity = { "InShadowColorAndOpacity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RichTextBlock_eventSetDefaultShadowColorAndOpacity_Parms, InShadowColorAndOpacity), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URichTextBlock_SetDefaultShadowColorAndOpacity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URichTextBlock_SetDefaultShadowColorAndOpacity_Statics::NewProp_InShadowColorAndOpacity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URichTextBlock_SetDefaultShadowColorAndOpacity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**  \n\x09 * Sets the color and opacity of the default text drop shadow\n\x09 * Note: if opacity is zero no shadow will be drawn\n\x09 * @param InShadowColorAndOpacity\x09\x09The new drop shadow color and opacity\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/RichTextBlock.h" },
		{ "ToolTip", "Sets the color and opacity of the default text drop shadow\nNote: if opacity is zero no shadow will be drawn\n@param InShadowColorAndOpacity               The new drop shadow color and opacity" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URichTextBlock_SetDefaultShadowColorAndOpacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URichTextBlock, nullptr, "SetDefaultShadowColorAndOpacity", nullptr, nullptr, sizeof(RichTextBlock_eventSetDefaultShadowColorAndOpacity_Parms), Z_Construct_UFunction_URichTextBlock_SetDefaultShadowColorAndOpacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextBlock_SetDefaultShadowColorAndOpacity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URichTextBlock_SetDefaultShadowColorAndOpacity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextBlock_SetDefaultShadowColorAndOpacity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URichTextBlock_SetDefaultShadowColorAndOpacity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URichTextBlock_SetDefaultShadowColorAndOpacity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URichTextBlock_SetDefaultShadowOffset_Statics
	{
		struct RichTextBlock_eventSetDefaultShadowOffset_Parms
		{
			FVector2D InShadowOffset;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InShadowOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URichTextBlock_SetDefaultShadowOffset_Statics::NewProp_InShadowOffset = { "InShadowOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RichTextBlock_eventSetDefaultShadowOffset_Parms, InShadowOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URichTextBlock_SetDefaultShadowOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URichTextBlock_SetDefaultShadowOffset_Statics::NewProp_InShadowOffset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URichTextBlock_SetDefaultShadowOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**  \n\x09 * Sets the offset that the default text drop shadow should be drawn at\n\x09 * @param InShadowOffset\x09\x09The new offset\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/RichTextBlock.h" },
		{ "ToolTip", "Sets the offset that the default text drop shadow should be drawn at\n@param InShadowOffset                The new offset" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URichTextBlock_SetDefaultShadowOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URichTextBlock, nullptr, "SetDefaultShadowOffset", nullptr, nullptr, sizeof(RichTextBlock_eventSetDefaultShadowOffset_Parms), Z_Construct_UFunction_URichTextBlock_SetDefaultShadowOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextBlock_SetDefaultShadowOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URichTextBlock_SetDefaultShadowOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextBlock_SetDefaultShadowOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URichTextBlock_SetDefaultShadowOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URichTextBlock_SetDefaultShadowOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URichTextBlock_SetDefaultStrikeBrush_Statics
	{
		struct RichTextBlock_eventSetDefaultStrikeBrush_Parms
		{
			FSlateBrush InStrikeBrush;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InStrikeBrush;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URichTextBlock_SetDefaultStrikeBrush_Statics::NewProp_InStrikeBrush = { "InStrikeBrush", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RichTextBlock_eventSetDefaultStrikeBrush_Parms, InStrikeBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URichTextBlock_SetDefaultStrikeBrush_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URichTextBlock_SetDefaultStrikeBrush_Statics::NewProp_InStrikeBrush,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URichTextBlock_SetDefaultStrikeBrush_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * Dynamically set the default strike brush for this rich text block\n\x09 * @param InStrikeBrush The new brush to use to strike through text\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/RichTextBlock.h" },
		{ "ToolTip", "Dynamically set the default strike brush for this rich text block\n@param InStrikeBrush The new brush to use to strike through text" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URichTextBlock_SetDefaultStrikeBrush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URichTextBlock, nullptr, "SetDefaultStrikeBrush", nullptr, nullptr, sizeof(RichTextBlock_eventSetDefaultStrikeBrush_Parms), Z_Construct_UFunction_URichTextBlock_SetDefaultStrikeBrush_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextBlock_SetDefaultStrikeBrush_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URichTextBlock_SetDefaultStrikeBrush_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextBlock_SetDefaultStrikeBrush_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URichTextBlock_SetDefaultStrikeBrush()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URichTextBlock_SetDefaultStrikeBrush_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URichTextBlock_SetDefaultTextStyle_Statics
	{
		struct RichTextBlock_eventSetDefaultTextStyle_Parms
		{
			FTextBlockStyle InDefaultTextStyle;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InDefaultTextStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InDefaultTextStyle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URichTextBlock_SetDefaultTextStyle_Statics::NewProp_InDefaultTextStyle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URichTextBlock_SetDefaultTextStyle_Statics::NewProp_InDefaultTextStyle = { "InDefaultTextStyle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RichTextBlock_eventSetDefaultTextStyle_Parms, InDefaultTextStyle), Z_Construct_UScriptStruct_FTextBlockStyle, METADATA_PARAMS(Z_Construct_UFunction_URichTextBlock_SetDefaultTextStyle_Statics::NewProp_InDefaultTextStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextBlock_SetDefaultTextStyle_Statics::NewProp_InDefaultTextStyle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URichTextBlock_SetDefaultTextStyle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URichTextBlock_SetDefaultTextStyle_Statics::NewProp_InDefaultTextStyle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URichTextBlock_SetDefaultTextStyle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** \n\x09 * Wholesale override of the currently established default text style\n\x09 * @param InDefaultTextStyle The new text style to apply to all default (i.e. undecorated) text in the block\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/RichTextBlock.h" },
		{ "ToolTip", "Wholesale override of the currently established default text style\n@param InDefaultTextStyle The new text style to apply to all default (i.e. undecorated) text in the block" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URichTextBlock_SetDefaultTextStyle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URichTextBlock, nullptr, "SetDefaultTextStyle", nullptr, nullptr, sizeof(RichTextBlock_eventSetDefaultTextStyle_Parms), Z_Construct_UFunction_URichTextBlock_SetDefaultTextStyle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextBlock_SetDefaultTextStyle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URichTextBlock_SetDefaultTextStyle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextBlock_SetDefaultTextStyle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URichTextBlock_SetDefaultTextStyle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URichTextBlock_SetDefaultTextStyle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URichTextBlock_SetMinDesiredWidth_Statics
	{
		struct RichTextBlock_eventSetMinDesiredWidth_Parms
		{
			float InMinDesiredWidth;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InMinDesiredWidth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URichTextBlock_SetMinDesiredWidth_Statics::NewProp_InMinDesiredWidth = { "InMinDesiredWidth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RichTextBlock_eventSetMinDesiredWidth_Parms, InMinDesiredWidth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URichTextBlock_SetMinDesiredWidth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URichTextBlock_SetMinDesiredWidth_Statics::NewProp_InMinDesiredWidth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URichTextBlock_SetMinDesiredWidth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 *  Set the minimum desired width for this rich text block\n\x09 *  @param InMinDesiredWidth new minimum desired width\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/RichTextBlock.h" },
		{ "ToolTip", "Set the minimum desired width for this rich text block\n@param InMinDesiredWidth new minimum desired width" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URichTextBlock_SetMinDesiredWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URichTextBlock, nullptr, "SetMinDesiredWidth", nullptr, nullptr, sizeof(RichTextBlock_eventSetMinDesiredWidth_Parms), Z_Construct_UFunction_URichTextBlock_SetMinDesiredWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextBlock_SetMinDesiredWidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URichTextBlock_SetMinDesiredWidth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextBlock_SetMinDesiredWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URichTextBlock_SetMinDesiredWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URichTextBlock_SetMinDesiredWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URichTextBlock_SetText_Statics
	{
		struct RichTextBlock_eventSetText_Parms
		{
			FText InText;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_InText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URichTextBlock_SetText_Statics::NewProp_InText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_URichTextBlock_SetText_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RichTextBlock_eventSetText_Parms, InText), METADATA_PARAMS(Z_Construct_UFunction_URichTextBlock_SetText_Statics::NewProp_InText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextBlock_SetText_Statics::NewProp_InText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URichTextBlock_SetText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URichTextBlock_SetText_Statics::NewProp_InText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URichTextBlock_SetText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/**\n\x09 * Directly sets the widget text.\n\x09 * Warning: This will wipe any binding created for the Text property!\n\x09 * @param InText The text to assign to the widget\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/RichTextBlock.h" },
		{ "ToolTip", "Directly sets the widget text.\nWarning: This will wipe any binding created for the Text property!\n@param InText The text to assign to the widget" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URichTextBlock_SetText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URichTextBlock, nullptr, "SetText", nullptr, nullptr, sizeof(RichTextBlock_eventSetText_Parms), Z_Construct_UFunction_URichTextBlock_SetText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextBlock_SetText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URichTextBlock_SetText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextBlock_SetText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URichTextBlock_SetText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URichTextBlock_SetText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URichTextBlock_SetTextStyleSet_Statics
	{
		struct RichTextBlock_eventSetTextStyleSet_Parms
		{
			UDataTable* NewTextStyleSet;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewTextStyleSet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URichTextBlock_SetTextStyleSet_Statics::NewProp_NewTextStyleSet = { "NewTextStyleSet", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RichTextBlock_eventSetTextStyleSet_Parms, NewTextStyleSet), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URichTextBlock_SetTextStyleSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URichTextBlock_SetTextStyleSet_Statics::NewProp_NewTextStyleSet,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URichTextBlock_SetTextStyleSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/Components/RichTextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URichTextBlock_SetTextStyleSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URichTextBlock, nullptr, "SetTextStyleSet", nullptr, nullptr, sizeof(RichTextBlock_eventSetTextStyleSet_Parms), Z_Construct_UFunction_URichTextBlock_SetTextStyleSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextBlock_SetTextStyleSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URichTextBlock_SetTextStyleSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextBlock_SetTextStyleSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URichTextBlock_SetTextStyleSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URichTextBlock_SetTextStyleSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URichTextBlock_NoRegister()
	{
		return URichTextBlock::StaticClass();
	}
	struct Z_Construct_UClass_URichTextBlock_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceDecorators_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InstanceDecorators;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstanceDecorators_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDesiredWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinDesiredWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultTextStyleOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultTextStyleOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideDefaultStyle_MetaData[];
#endif
		static void NewProp_bOverrideDefaultStyle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideDefaultStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecoratorClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DecoratorClasses;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DecoratorClasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextStyleSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextStyleSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URichTextBlock_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTextLayoutWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URichTextBlock_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URichTextBlock_ClearAllDefaultStyleOverrides, "ClearAllDefaultStyleOverrides" }, // 506185793
		{ &Z_Construct_UFunction_URichTextBlock_GetDecoratorByClass, "GetDecoratorByClass" }, // 3174687749
		{ &Z_Construct_UFunction_URichTextBlock_GetText, "GetText" }, // 4227403769
		{ &Z_Construct_UFunction_URichTextBlock_SetAutoWrapText, "SetAutoWrapText" }, // 3784975907
		{ &Z_Construct_UFunction_URichTextBlock_SetDefaultColorAndOpacity, "SetDefaultColorAndOpacity" }, // 3323535973
		{ &Z_Construct_UFunction_URichTextBlock_SetDefaultFont, "SetDefaultFont" }, // 4211117292
		{ &Z_Construct_UFunction_URichTextBlock_SetDefaultShadowColorAndOpacity, "SetDefaultShadowColorAndOpacity" }, // 1605693901
		{ &Z_Construct_UFunction_URichTextBlock_SetDefaultShadowOffset, "SetDefaultShadowOffset" }, // 880401355
		{ &Z_Construct_UFunction_URichTextBlock_SetDefaultStrikeBrush, "SetDefaultStrikeBrush" }, // 1750699778
		{ &Z_Construct_UFunction_URichTextBlock_SetDefaultTextStyle, "SetDefaultTextStyle" }, // 558125986
		{ &Z_Construct_UFunction_URichTextBlock_SetMinDesiredWidth, "SetMinDesiredWidth" }, // 2895046588
		{ &Z_Construct_UFunction_URichTextBlock_SetText, "SetText" }, // 923535711
		{ &Z_Construct_UFunction_URichTextBlock_SetTextStyleSet, "SetTextStyleSet" }, // 1795110552
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URichTextBlock_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The rich text block\n *\n * * Fancy Text\n * * No Children\n */" },
		{ "IncludePath", "Components/RichTextBlock.h" },
		{ "ModuleRelativePath", "Public/Components/RichTextBlock.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "The rich text block\n\n* Fancy Text\n* No Children" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URichTextBlock_Statics::NewProp_InstanceDecorators_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/RichTextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URichTextBlock_Statics::NewProp_InstanceDecorators = { "InstanceDecorators", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URichTextBlock, InstanceDecorators), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URichTextBlock_Statics::NewProp_InstanceDecorators_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URichTextBlock_Statics::NewProp_InstanceDecorators_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URichTextBlock_Statics::NewProp_InstanceDecorators_Inner = { "InstanceDecorators", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_URichTextBlockDecorator_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URichTextBlock_Statics::NewProp_MinDesiredWidth_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The minimum desired size for the text */" },
		{ "ModuleRelativePath", "Public/Components/RichTextBlock.h" },
		{ "ToolTip", "The minimum desired size for the text" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URichTextBlock_Statics::NewProp_MinDesiredWidth = { "MinDesiredWidth", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URichTextBlock, MinDesiredWidth), METADATA_PARAMS(Z_Construct_UClass_URichTextBlock_Statics::NewProp_MinDesiredWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URichTextBlock_Statics::NewProp_MinDesiredWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URichTextBlock_Statics::NewProp_DefaultTextStyleOverride_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Text style to apply by default to text in this block */" },
		{ "EditCondition", "bOverrideDefaultStyle" },
		{ "ModuleRelativePath", "Public/Components/RichTextBlock.h" },
		{ "ToolTip", "Text style to apply by default to text in this block" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URichTextBlock_Statics::NewProp_DefaultTextStyleOverride = { "DefaultTextStyleOverride", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URichTextBlock, DefaultTextStyleOverride), Z_Construct_UScriptStruct_FTextBlockStyle, METADATA_PARAMS(Z_Construct_UClass_URichTextBlock_Statics::NewProp_DefaultTextStyleOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URichTextBlock_Statics::NewProp_DefaultTextStyleOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URichTextBlock_Statics::NewProp_bOverrideDefaultStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** True to specify the default text style for this rich text inline, overriding any default provided in the style set table */" },
		{ "ModuleRelativePath", "Public/Components/RichTextBlock.h" },
		{ "ToolTip", "True to specify the default text style for this rich text inline, overriding any default provided in the style set table" },
	};
#endif
	void Z_Construct_UClass_URichTextBlock_Statics::NewProp_bOverrideDefaultStyle_SetBit(void* Obj)
	{
		((URichTextBlock*)Obj)->bOverrideDefaultStyle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URichTextBlock_Statics::NewProp_bOverrideDefaultStyle = { "bOverrideDefaultStyle", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URichTextBlock), &Z_Construct_UClass_URichTextBlock_Statics::NewProp_bOverrideDefaultStyle_SetBit, METADATA_PARAMS(Z_Construct_UClass_URichTextBlock_Statics::NewProp_bOverrideDefaultStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URichTextBlock_Statics::NewProp_bOverrideDefaultStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URichTextBlock_Statics::NewProp_DecoratorClasses_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/RichTextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URichTextBlock_Statics::NewProp_DecoratorClasses = { "DecoratorClasses", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URichTextBlock, DecoratorClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URichTextBlock_Statics::NewProp_DecoratorClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URichTextBlock_Statics::NewProp_DecoratorClasses_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_URichTextBlock_Statics::NewProp_DecoratorClasses_Inner = { "DecoratorClasses", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_URichTextBlockDecorator_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URichTextBlock_Statics::NewProp_TextStyleSet_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/RichTextBlock.h" },
		{ "RowType", "RichTextStyleRow" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URichTextBlock_Statics::NewProp_TextStyleSet = { "TextStyleSet", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URichTextBlock, TextStyleSet), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URichTextBlock_Statics::NewProp_TextStyleSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URichTextBlock_Statics::NewProp_TextStyleSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URichTextBlock_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "Content" },
		{ "Comment", "/** The text to display */" },
		{ "ModuleRelativePath", "Public/Components/RichTextBlock.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "The text to display" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_URichTextBlock_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URichTextBlock, Text), METADATA_PARAMS(Z_Construct_UClass_URichTextBlock_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URichTextBlock_Statics::NewProp_Text_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URichTextBlock_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URichTextBlock_Statics::NewProp_InstanceDecorators,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URichTextBlock_Statics::NewProp_InstanceDecorators_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URichTextBlock_Statics::NewProp_MinDesiredWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URichTextBlock_Statics::NewProp_DefaultTextStyleOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URichTextBlock_Statics::NewProp_bOverrideDefaultStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URichTextBlock_Statics::NewProp_DecoratorClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URichTextBlock_Statics::NewProp_DecoratorClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URichTextBlock_Statics::NewProp_TextStyleSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URichTextBlock_Statics::NewProp_Text,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URichTextBlock_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URichTextBlock>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URichTextBlock_Statics::ClassParams = {
		&URichTextBlock::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URichTextBlock_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URichTextBlock_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URichTextBlock_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URichTextBlock_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URichTextBlock()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URichTextBlock_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URichTextBlock, 3198209153);
	template<> UMG_API UClass* StaticClass<URichTextBlock>()
	{
		return URichTextBlock::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URichTextBlock(Z_Construct_UClass_URichTextBlock, &URichTextBlock::StaticClass, TEXT("/Script/UMG"), TEXT("URichTextBlock"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URichTextBlock);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
