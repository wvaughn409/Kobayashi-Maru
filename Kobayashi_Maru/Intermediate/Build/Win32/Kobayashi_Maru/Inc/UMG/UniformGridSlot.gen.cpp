// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/UniformGridSlot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUniformGridSlot() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UUniformGridSlot_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUniformGridSlot();
	UMG_API UClass* Z_Construct_UClass_UPanelSlot();
	UPackage* Z_Construct_UPackage__Script_UMG();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EVerticalAlignment();
// End Cross Module References
	DEFINE_FUNCTION(UUniformGridSlot::execSetVerticalAlignment)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InVerticalAlignment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVerticalAlignment(EVerticalAlignment(Z_Param_InVerticalAlignment));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUniformGridSlot::execSetHorizontalAlignment)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InHorizontalAlignment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHorizontalAlignment(EHorizontalAlignment(Z_Param_InHorizontalAlignment));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUniformGridSlot::execSetColumn)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InColumn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetColumn(Z_Param_InColumn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUniformGridSlot::execSetRow)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRow(Z_Param_InRow);
		P_NATIVE_END;
	}
	void UUniformGridSlot::StaticRegisterNativesUUniformGridSlot()
	{
		UClass* Class = UUniformGridSlot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetColumn", &UUniformGridSlot::execSetColumn },
			{ "SetHorizontalAlignment", &UUniformGridSlot::execSetHorizontalAlignment },
			{ "SetRow", &UUniformGridSlot::execSetRow },
			{ "SetVerticalAlignment", &UUniformGridSlot::execSetVerticalAlignment },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUniformGridSlot_SetColumn_Statics
	{
		struct UniformGridSlot_eventSetColumn_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUniformGridSlot_SetColumn_Statics::NewProp_InColumn = { "InColumn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UniformGridSlot_eventSetColumn_Parms, InColumn), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUniformGridSlot_SetColumn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniformGridSlot_SetColumn_Statics::NewProp_InColumn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUniformGridSlot_SetColumn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Uniform Grid Slot" },
		{ "Comment", "/** Sets the column index of the slot, this determines what cell the slot is in the panel */" },
		{ "ModuleRelativePath", "Public/Components/UniformGridSlot.h" },
		{ "ToolTip", "Sets the column index of the slot, this determines what cell the slot is in the panel" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUniformGridSlot_SetColumn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUniformGridSlot, nullptr, "SetColumn", nullptr, nullptr, sizeof(UniformGridSlot_eventSetColumn_Parms), Z_Construct_UFunction_UUniformGridSlot_SetColumn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniformGridSlot_SetColumn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUniformGridSlot_SetColumn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniformGridSlot_SetColumn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUniformGridSlot_SetColumn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUniformGridSlot_SetColumn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUniformGridSlot_SetHorizontalAlignment_Statics
	{
		struct UniformGridSlot_eventSetHorizontalAlignment_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUniformGridSlot_SetHorizontalAlignment_Statics::NewProp_InHorizontalAlignment = { "InHorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UniformGridSlot_eventSetHorizontalAlignment_Parms, InHorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUniformGridSlot_SetHorizontalAlignment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniformGridSlot_SetHorizontalAlignment_Statics::NewProp_InHorizontalAlignment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUniformGridSlot_SetHorizontalAlignment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Uniform Grid Slot" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/UniformGridSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUniformGridSlot_SetHorizontalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUniformGridSlot, nullptr, "SetHorizontalAlignment", nullptr, nullptr, sizeof(UniformGridSlot_eventSetHorizontalAlignment_Parms), Z_Construct_UFunction_UUniformGridSlot_SetHorizontalAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniformGridSlot_SetHorizontalAlignment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUniformGridSlot_SetHorizontalAlignment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniformGridSlot_SetHorizontalAlignment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUniformGridSlot_SetHorizontalAlignment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUniformGridSlot_SetHorizontalAlignment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUniformGridSlot_SetRow_Statics
	{
		struct UniformGridSlot_eventSetRow_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUniformGridSlot_SetRow_Statics::NewProp_InRow = { "InRow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UniformGridSlot_eventSetRow_Parms, InRow), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUniformGridSlot_SetRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniformGridSlot_SetRow_Statics::NewProp_InRow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUniformGridSlot_SetRow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Uniform Grid Slot" },
		{ "Comment", "/** Sets the row index of the slot, this determines what cell the slot is in the panel */" },
		{ "ModuleRelativePath", "Public/Components/UniformGridSlot.h" },
		{ "ToolTip", "Sets the row index of the slot, this determines what cell the slot is in the panel" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUniformGridSlot_SetRow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUniformGridSlot, nullptr, "SetRow", nullptr, nullptr, sizeof(UniformGridSlot_eventSetRow_Parms), Z_Construct_UFunction_UUniformGridSlot_SetRow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniformGridSlot_SetRow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUniformGridSlot_SetRow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniformGridSlot_SetRow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUniformGridSlot_SetRow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUniformGridSlot_SetRow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUniformGridSlot_SetVerticalAlignment_Statics
	{
		struct UniformGridSlot_eventSetVerticalAlignment_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUniformGridSlot_SetVerticalAlignment_Statics::NewProp_InVerticalAlignment = { "InVerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UniformGridSlot_eventSetVerticalAlignment_Parms, InVerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUniformGridSlot_SetVerticalAlignment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniformGridSlot_SetVerticalAlignment_Statics::NewProp_InVerticalAlignment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUniformGridSlot_SetVerticalAlignment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Uniform Grid Slot" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/UniformGridSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUniformGridSlot_SetVerticalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUniformGridSlot, nullptr, "SetVerticalAlignment", nullptr, nullptr, sizeof(UniformGridSlot_eventSetVerticalAlignment_Parms), Z_Construct_UFunction_UUniformGridSlot_SetVerticalAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniformGridSlot_SetVerticalAlignment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUniformGridSlot_SetVerticalAlignment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniformGridSlot_SetVerticalAlignment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUniformGridSlot_SetVerticalAlignment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUniformGridSlot_SetVerticalAlignment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUniformGridSlot_NoRegister()
	{
		return UUniformGridSlot::StaticClass();
	}
	struct Z_Construct_UClass_UUniformGridSlot_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Column_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Column;
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUniformGridSlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPanelSlot,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUniformGridSlot_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUniformGridSlot_SetColumn, "SetColumn" }, // 619929682
		{ &Z_Construct_UFunction_UUniformGridSlot_SetHorizontalAlignment, "SetHorizontalAlignment" }, // 56272557
		{ &Z_Construct_UFunction_UUniformGridSlot_SetRow, "SetRow" }, // 3729185408
		{ &Z_Construct_UFunction_UUniformGridSlot_SetVerticalAlignment, "SetVerticalAlignment" }, // 2051555538
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUniformGridSlot_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A slot for UUniformGridPanel, these slots all share the same size as the largest slot\n * in the grid.\n */" },
		{ "IncludePath", "Components/UniformGridSlot.h" },
		{ "ModuleRelativePath", "Public/Components/UniformGridSlot.h" },
		{ "ToolTip", "A slot for UUniformGridPanel, these slots all share the same size as the largest slot\nin the grid." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUniformGridSlot_Statics::NewProp_Column_MetaData[] = {
		{ "Category", "Layout|Uniform Grid Slot" },
		{ "Comment", "/** The column index of the cell this slot is in */" },
		{ "ModuleRelativePath", "Public/Components/UniformGridSlot.h" },
		{ "ToolTip", "The column index of the cell this slot is in" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUniformGridSlot_Statics::NewProp_Column = { "Column", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUniformGridSlot, Column), METADATA_PARAMS(Z_Construct_UClass_UUniformGridSlot_Statics::NewProp_Column_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUniformGridSlot_Statics::NewProp_Column_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUniformGridSlot_Statics::NewProp_Row_MetaData[] = {
		{ "Category", "Layout|Uniform Grid Slot" },
		{ "Comment", "/** The row index of the cell this slot is in */" },
		{ "ModuleRelativePath", "Public/Components/UniformGridSlot.h" },
		{ "ToolTip", "The row index of the cell this slot is in" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUniformGridSlot_Statics::NewProp_Row = { "Row", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUniformGridSlot, Row), METADATA_PARAMS(Z_Construct_UClass_UUniformGridSlot_Statics::NewProp_Row_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUniformGridSlot_Statics::NewProp_Row_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUniformGridSlot_Statics::NewProp_VerticalAlignment_MetaData[] = {
		{ "Category", "Layout|Uniform Grid Slot" },
		{ "Comment", "/** The alignment of the object vertically. */" },
		{ "ModuleRelativePath", "Public/Components/UniformGridSlot.h" },
		{ "ToolTip", "The alignment of the object vertically." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUniformGridSlot_Statics::NewProp_VerticalAlignment = { "VerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUniformGridSlot, VerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(Z_Construct_UClass_UUniformGridSlot_Statics::NewProp_VerticalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUniformGridSlot_Statics::NewProp_VerticalAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUniformGridSlot_Statics::NewProp_HorizontalAlignment_MetaData[] = {
		{ "Category", "Layout|Uniform Grid Slot" },
		{ "Comment", "/** The alignment of the object horizontally. */" },
		{ "ModuleRelativePath", "Public/Components/UniformGridSlot.h" },
		{ "ToolTip", "The alignment of the object horizontally." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUniformGridSlot_Statics::NewProp_HorizontalAlignment = { "HorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUniformGridSlot, HorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(Z_Construct_UClass_UUniformGridSlot_Statics::NewProp_HorizontalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUniformGridSlot_Statics::NewProp_HorizontalAlignment_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUniformGridSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUniformGridSlot_Statics::NewProp_Column,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUniformGridSlot_Statics::NewProp_Row,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUniformGridSlot_Statics::NewProp_VerticalAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUniformGridSlot_Statics::NewProp_HorizontalAlignment,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUniformGridSlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUniformGridSlot>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUniformGridSlot_Statics::ClassParams = {
		&UUniformGridSlot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUniformGridSlot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUniformGridSlot_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUniformGridSlot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUniformGridSlot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUniformGridSlot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUniformGridSlot_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUniformGridSlot, 106202781);
	template<> UMG_API UClass* StaticClass<UUniformGridSlot>()
	{
		return UUniformGridSlot::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUniformGridSlot(Z_Construct_UClass_UUniformGridSlot, &UUniformGridSlot::StaticClass, TEXT("/Script/UMG"), TEXT("UUniformGridSlot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUniformGridSlot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
