// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/GridSlot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridSlot() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UGridSlot_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UGridSlot();
	UMG_API UClass* Z_Construct_UClass_UPanelSlot();
	UPackage* Z_Construct_UPackage__Script_UMG();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EVerticalAlignment();
// End Cross Module References
	DEFINE_FUNCTION(UGridSlot::execSetVerticalAlignment)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InVerticalAlignment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVerticalAlignment(EVerticalAlignment(Z_Param_InVerticalAlignment));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGridSlot::execSetHorizontalAlignment)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InHorizontalAlignment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHorizontalAlignment(EHorizontalAlignment(Z_Param_InHorizontalAlignment));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGridSlot::execSetNudge)
	{
		P_GET_STRUCT(FVector2D,Z_Param_InNudge);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNudge(Z_Param_InNudge);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGridSlot::execSetLayer)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InLayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLayer(Z_Param_InLayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGridSlot::execSetColumnSpan)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InColumnSpan);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetColumnSpan(Z_Param_InColumnSpan);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGridSlot::execSetColumn)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InColumn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetColumn(Z_Param_InColumn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGridSlot::execSetRowSpan)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InRowSpan);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRowSpan(Z_Param_InRowSpan);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGridSlot::execSetRow)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRow(Z_Param_InRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGridSlot::execSetPadding)
	{
		P_GET_STRUCT(FMargin,Z_Param_InPadding);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPadding(Z_Param_InPadding);
		P_NATIVE_END;
	}
	void UGridSlot::StaticRegisterNativesUGridSlot()
	{
		UClass* Class = UGridSlot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetColumn", &UGridSlot::execSetColumn },
			{ "SetColumnSpan", &UGridSlot::execSetColumnSpan },
			{ "SetHorizontalAlignment", &UGridSlot::execSetHorizontalAlignment },
			{ "SetLayer", &UGridSlot::execSetLayer },
			{ "SetNudge", &UGridSlot::execSetNudge },
			{ "SetPadding", &UGridSlot::execSetPadding },
			{ "SetRow", &UGridSlot::execSetRow },
			{ "SetRowSpan", &UGridSlot::execSetRowSpan },
			{ "SetVerticalAlignment", &UGridSlot::execSetVerticalAlignment },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGridSlot_SetColumn_Statics
	{
		struct GridSlot_eventSetColumn_Parms
		{
			int32 InColumn;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InColumn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridSlot_SetColumn_Statics::NewProp_InColumn = { "InColumn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridSlot_eventSetColumn_Parms, InColumn), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridSlot_SetColumn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridSlot_SetColumn_Statics::NewProp_InColumn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridSlot_SetColumn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Grid Slot" },
		{ "Comment", "/** Sets the column index of the slot, this determines what cell the slot is in the panel */" },
		{ "ModuleRelativePath", "Public/Components/GridSlot.h" },
		{ "ToolTip", "Sets the column index of the slot, this determines what cell the slot is in the panel" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridSlot_SetColumn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridSlot, nullptr, "SetColumn", nullptr, nullptr, sizeof(GridSlot_eventSetColumn_Parms), Z_Construct_UFunction_UGridSlot_SetColumn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridSlot_SetColumn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridSlot_SetColumn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridSlot_SetColumn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridSlot_SetColumn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGridSlot_SetColumn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridSlot_SetColumnSpan_Statics
	{
		struct GridSlot_eventSetColumnSpan_Parms
		{
			int32 InColumnSpan;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InColumnSpan;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridSlot_SetColumnSpan_Statics::NewProp_InColumnSpan = { "InColumnSpan", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridSlot_eventSetColumnSpan_Parms, InColumnSpan), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridSlot_SetColumnSpan_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridSlot_SetColumnSpan_Statics::NewProp_InColumnSpan,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridSlot_SetColumnSpan_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Grid Slot" },
		{ "Comment", "/** How many columns this slot spans over */" },
		{ "ModuleRelativePath", "Public/Components/GridSlot.h" },
		{ "ToolTip", "How many columns this slot spans over" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridSlot_SetColumnSpan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridSlot, nullptr, "SetColumnSpan", nullptr, nullptr, sizeof(GridSlot_eventSetColumnSpan_Parms), Z_Construct_UFunction_UGridSlot_SetColumnSpan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridSlot_SetColumnSpan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridSlot_SetColumnSpan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridSlot_SetColumnSpan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridSlot_SetColumnSpan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGridSlot_SetColumnSpan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridSlot_SetHorizontalAlignment_Statics
	{
		struct GridSlot_eventSetHorizontalAlignment_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGridSlot_SetHorizontalAlignment_Statics::NewProp_InHorizontalAlignment = { "InHorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridSlot_eventSetHorizontalAlignment_Parms, InHorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridSlot_SetHorizontalAlignment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridSlot_SetHorizontalAlignment_Statics::NewProp_InHorizontalAlignment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridSlot_SetHorizontalAlignment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Grid Slot" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/GridSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridSlot_SetHorizontalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridSlot, nullptr, "SetHorizontalAlignment", nullptr, nullptr, sizeof(GridSlot_eventSetHorizontalAlignment_Parms), Z_Construct_UFunction_UGridSlot_SetHorizontalAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridSlot_SetHorizontalAlignment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridSlot_SetHorizontalAlignment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridSlot_SetHorizontalAlignment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridSlot_SetHorizontalAlignment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGridSlot_SetHorizontalAlignment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridSlot_SetLayer_Statics
	{
		struct GridSlot_eventSetLayer_Parms
		{
			int32 InLayer;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InLayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridSlot_SetLayer_Statics::NewProp_InLayer = { "InLayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridSlot_eventSetLayer_Parms, InLayer), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridSlot_SetLayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridSlot_SetLayer_Statics::NewProp_InLayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridSlot_SetLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Grid Slot" },
		{ "Comment", "/** Sets positive values offset this cell to be hit-tested and drawn on top of others. */" },
		{ "ModuleRelativePath", "Public/Components/GridSlot.h" },
		{ "ToolTip", "Sets positive values offset this cell to be hit-tested and drawn on top of others." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridSlot_SetLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridSlot, nullptr, "SetLayer", nullptr, nullptr, sizeof(GridSlot_eventSetLayer_Parms), Z_Construct_UFunction_UGridSlot_SetLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridSlot_SetLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridSlot_SetLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridSlot_SetLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridSlot_SetLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGridSlot_SetLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridSlot_SetNudge_Statics
	{
		struct GridSlot_eventSetNudge_Parms
		{
			FVector2D InNudge;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InNudge;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridSlot_SetNudge_Statics::NewProp_InNudge = { "InNudge", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridSlot_eventSetNudge_Parms, InNudge), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridSlot_SetNudge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridSlot_SetNudge_Statics::NewProp_InNudge,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridSlot_SetNudge_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Grid Slot" },
		{ "Comment", "/** Sets the offset for this slot's content by some amount; positive values offset to lower right*/" },
		{ "ModuleRelativePath", "Public/Components/GridSlot.h" },
		{ "ToolTip", "Sets the offset for this slot's content by some amount; positive values offset to lower right" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridSlot_SetNudge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridSlot, nullptr, "SetNudge", nullptr, nullptr, sizeof(GridSlot_eventSetNudge_Parms), Z_Construct_UFunction_UGridSlot_SetNudge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridSlot_SetNudge_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridSlot_SetNudge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridSlot_SetNudge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridSlot_SetNudge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGridSlot_SetNudge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridSlot_SetPadding_Statics
	{
		struct GridSlot_eventSetPadding_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridSlot_SetPadding_Statics::NewProp_InPadding = { "InPadding", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridSlot_eventSetPadding_Parms, InPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridSlot_SetPadding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridSlot_SetPadding_Statics::NewProp_InPadding,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridSlot_SetPadding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Border Slot" },
		{ "ModuleRelativePath", "Public/Components/GridSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridSlot_SetPadding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridSlot, nullptr, "SetPadding", nullptr, nullptr, sizeof(GridSlot_eventSetPadding_Parms), Z_Construct_UFunction_UGridSlot_SetPadding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridSlot_SetPadding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridSlot_SetPadding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridSlot_SetPadding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridSlot_SetPadding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGridSlot_SetPadding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridSlot_SetRow_Statics
	{
		struct GridSlot_eventSetRow_Parms
		{
			int32 InRow;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InRow;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridSlot_SetRow_Statics::NewProp_InRow = { "InRow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridSlot_eventSetRow_Parms, InRow), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridSlot_SetRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridSlot_SetRow_Statics::NewProp_InRow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridSlot_SetRow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Grid Slot" },
		{ "Comment", "/** Sets the row index of the slot, this determines what cell the slot is in the panel */" },
		{ "ModuleRelativePath", "Public/Components/GridSlot.h" },
		{ "ToolTip", "Sets the row index of the slot, this determines what cell the slot is in the panel" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridSlot_SetRow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridSlot, nullptr, "SetRow", nullptr, nullptr, sizeof(GridSlot_eventSetRow_Parms), Z_Construct_UFunction_UGridSlot_SetRow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridSlot_SetRow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridSlot_SetRow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridSlot_SetRow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridSlot_SetRow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGridSlot_SetRow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridSlot_SetRowSpan_Statics
	{
		struct GridSlot_eventSetRowSpan_Parms
		{
			int32 InRowSpan;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InRowSpan;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridSlot_SetRowSpan_Statics::NewProp_InRowSpan = { "InRowSpan", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridSlot_eventSetRowSpan_Parms, InRowSpan), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridSlot_SetRowSpan_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridSlot_SetRowSpan_Statics::NewProp_InRowSpan,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridSlot_SetRowSpan_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Grid Slot" },
		{ "Comment", "/** How many rows this this slot spans over */" },
		{ "ModuleRelativePath", "Public/Components/GridSlot.h" },
		{ "ToolTip", "How many rows this this slot spans over" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridSlot_SetRowSpan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridSlot, nullptr, "SetRowSpan", nullptr, nullptr, sizeof(GridSlot_eventSetRowSpan_Parms), Z_Construct_UFunction_UGridSlot_SetRowSpan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridSlot_SetRowSpan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridSlot_SetRowSpan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridSlot_SetRowSpan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridSlot_SetRowSpan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGridSlot_SetRowSpan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridSlot_SetVerticalAlignment_Statics
	{
		struct GridSlot_eventSetVerticalAlignment_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGridSlot_SetVerticalAlignment_Statics::NewProp_InVerticalAlignment = { "InVerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridSlot_eventSetVerticalAlignment_Parms, InVerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridSlot_SetVerticalAlignment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridSlot_SetVerticalAlignment_Statics::NewProp_InVerticalAlignment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridSlot_SetVerticalAlignment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Grid Slot" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/GridSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridSlot_SetVerticalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridSlot, nullptr, "SetVerticalAlignment", nullptr, nullptr, sizeof(GridSlot_eventSetVerticalAlignment_Parms), Z_Construct_UFunction_UGridSlot_SetVerticalAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridSlot_SetVerticalAlignment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridSlot_SetVerticalAlignment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridSlot_SetVerticalAlignment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridSlot_SetVerticalAlignment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGridSlot_SetVerticalAlignment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGridSlot_NoRegister()
	{
		return UGridSlot::StaticClass();
	}
	struct Z_Construct_UClass_UGridSlot_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Nudge_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Nudge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Layer_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Layer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColumnSpan_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ColumnSpan;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Column_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Column;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RowSpan_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RowSpan;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Row_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Row;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VerticalAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HorizontalAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Padding;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGridSlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPanelSlot,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGridSlot_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGridSlot_SetColumn, "SetColumn" }, // 1524732534
		{ &Z_Construct_UFunction_UGridSlot_SetColumnSpan, "SetColumnSpan" }, // 1339815365
		{ &Z_Construct_UFunction_UGridSlot_SetHorizontalAlignment, "SetHorizontalAlignment" }, // 643282059
		{ &Z_Construct_UFunction_UGridSlot_SetLayer, "SetLayer" }, // 1892889143
		{ &Z_Construct_UFunction_UGridSlot_SetNudge, "SetNudge" }, // 3449452703
		{ &Z_Construct_UFunction_UGridSlot_SetPadding, "SetPadding" }, // 1712089235
		{ &Z_Construct_UFunction_UGridSlot_SetRow, "SetRow" }, // 3019764348
		{ &Z_Construct_UFunction_UGridSlot_SetRowSpan, "SetRowSpan" }, // 403189779
		{ &Z_Construct_UFunction_UGridSlot_SetVerticalAlignment, "SetVerticalAlignment" }, // 2383014582
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridSlot_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A slot for UGridPanel, these slots all share the same size as the largest slot\n * in the grid.\n */" },
		{ "IncludePath", "Components/GridSlot.h" },
		{ "ModuleRelativePath", "Public/Components/GridSlot.h" },
		{ "ToolTip", "A slot for UGridPanel, these slots all share the same size as the largest slot\nin the grid." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridSlot_Statics::NewProp_Nudge_MetaData[] = {
		{ "Category", "Layout|Grid Slot" },
		{ "Comment", "/** Offset this slot's content by some amount; positive values offset to lower right */" },
		{ "ModuleRelativePath", "Public/Components/GridSlot.h" },
		{ "ToolTip", "Offset this slot's content by some amount; positive values offset to lower right" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridSlot_Statics::NewProp_Nudge = { "Nudge", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridSlot, Nudge), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UGridSlot_Statics::NewProp_Nudge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridSlot_Statics::NewProp_Nudge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridSlot_Statics::NewProp_Layer_MetaData[] = {
		{ "Category", "Layout|Grid Slot" },
		{ "Comment", "/** Positive values offset this cell to be hit-tested and drawn on top of others. Default is 0; i.e. no offset. */" },
		{ "ModuleRelativePath", "Public/Components/GridSlot.h" },
		{ "ToolTip", "Positive values offset this cell to be hit-tested and drawn on top of others. Default is 0; i.e. no offset." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGridSlot_Statics::NewProp_Layer = { "Layer", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridSlot, Layer), METADATA_PARAMS(Z_Construct_UClass_UGridSlot_Statics::NewProp_Layer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridSlot_Statics::NewProp_Layer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridSlot_Statics::NewProp_ColumnSpan_MetaData[] = {
		{ "Category", "Layout|Grid Slot" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/GridSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGridSlot_Statics::NewProp_ColumnSpan = { "ColumnSpan", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridSlot, ColumnSpan), METADATA_PARAMS(Z_Construct_UClass_UGridSlot_Statics::NewProp_ColumnSpan_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridSlot_Statics::NewProp_ColumnSpan_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridSlot_Statics::NewProp_Column_MetaData[] = {
		{ "Category", "Layout|Grid Slot" },
		{ "Comment", "/** The column index of the cell this slot is in */" },
		{ "ModuleRelativePath", "Public/Components/GridSlot.h" },
		{ "ToolTip", "The column index of the cell this slot is in" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGridSlot_Statics::NewProp_Column = { "Column", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridSlot, Column), METADATA_PARAMS(Z_Construct_UClass_UGridSlot_Statics::NewProp_Column_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridSlot_Statics::NewProp_Column_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridSlot_Statics::NewProp_RowSpan_MetaData[] = {
		{ "Category", "Layout|Grid Slot" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/GridSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGridSlot_Statics::NewProp_RowSpan = { "RowSpan", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridSlot, RowSpan), METADATA_PARAMS(Z_Construct_UClass_UGridSlot_Statics::NewProp_RowSpan_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridSlot_Statics::NewProp_RowSpan_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridSlot_Statics::NewProp_Row_MetaData[] = {
		{ "Category", "Layout|Grid Slot" },
		{ "Comment", "/** The row index of the cell this slot is in */" },
		{ "ModuleRelativePath", "Public/Components/GridSlot.h" },
		{ "ToolTip", "The row index of the cell this slot is in" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGridSlot_Statics::NewProp_Row = { "Row", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridSlot, Row), METADATA_PARAMS(Z_Construct_UClass_UGridSlot_Statics::NewProp_Row_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridSlot_Statics::NewProp_Row_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridSlot_Statics::NewProp_VerticalAlignment_MetaData[] = {
		{ "Category", "Layout|Grid Slot" },
		{ "Comment", "/** The alignment of the object vertically. */" },
		{ "ModuleRelativePath", "Public/Components/GridSlot.h" },
		{ "ToolTip", "The alignment of the object vertically." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGridSlot_Statics::NewProp_VerticalAlignment = { "VerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridSlot, VerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(Z_Construct_UClass_UGridSlot_Statics::NewProp_VerticalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridSlot_Statics::NewProp_VerticalAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridSlot_Statics::NewProp_HorizontalAlignment_MetaData[] = {
		{ "Category", "Layout|Grid Slot" },
		{ "Comment", "/** The alignment of the object horizontally. */" },
		{ "ModuleRelativePath", "Public/Components/GridSlot.h" },
		{ "ToolTip", "The alignment of the object horizontally." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGridSlot_Statics::NewProp_HorizontalAlignment = { "HorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridSlot, HorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(Z_Construct_UClass_UGridSlot_Statics::NewProp_HorizontalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridSlot_Statics::NewProp_HorizontalAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridSlot_Statics::NewProp_Padding_MetaData[] = {
		{ "Category", "Layout|Grid Slot" },
		{ "Comment", "/** The padding area between the slot and the content it contains. */" },
		{ "ModuleRelativePath", "Public/Components/GridSlot.h" },
		{ "ToolTip", "The padding area between the slot and the content it contains." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridSlot_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridSlot, Padding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UGridSlot_Statics::NewProp_Padding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridSlot_Statics::NewProp_Padding_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGridSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridSlot_Statics::NewProp_Nudge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridSlot_Statics::NewProp_Layer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridSlot_Statics::NewProp_ColumnSpan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridSlot_Statics::NewProp_Column,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridSlot_Statics::NewProp_RowSpan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridSlot_Statics::NewProp_Row,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridSlot_Statics::NewProp_VerticalAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridSlot_Statics::NewProp_HorizontalAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridSlot_Statics::NewProp_Padding,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGridSlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridSlot>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGridSlot_Statics::ClassParams = {
		&UGridSlot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGridSlot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGridSlot_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGridSlot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGridSlot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGridSlot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGridSlot_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGridSlot, 3274549341);
	template<> UMG_API UClass* StaticClass<UGridSlot>()
	{
		return UGridSlot::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGridSlot(Z_Construct_UClass_UGridSlot, &UGridSlot::StaticClass, TEXT("/Script/UMG"), TEXT("UGridSlot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGridSlot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
