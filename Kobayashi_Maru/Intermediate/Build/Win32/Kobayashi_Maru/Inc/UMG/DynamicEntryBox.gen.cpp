// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/DynamicEntryBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDynamicEntryBox() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UDynamicEntryBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UDynamicEntryBox();
	UMG_API UClass* Z_Construct_UClass_UDynamicEntryBoxBase();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	DEFINE_FUNCTION(UDynamicEntryBox::execBP_CreateEntryOfClass)
	{
		P_GET_OBJECT(UClass,Z_Param_EntryClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUserWidget**)Z_Param__Result=P_THIS->BP_CreateEntryOfClass(Z_Param_EntryClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDynamicEntryBox::execBP_CreateEntry)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUserWidget**)Z_Param__Result=P_THIS->BP_CreateEntry();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDynamicEntryBox::execRemoveEntry)
	{
		P_GET_OBJECT(UUserWidget,Z_Param_EntryWidget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveEntry(Z_Param_EntryWidget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDynamicEntryBox::execReset)
	{
		P_GET_UBOOL(Z_Param_bDeleteWidgets);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reset(Z_Param_bDeleteWidgets);
		P_NATIVE_END;
	}
	void UDynamicEntryBox::StaticRegisterNativesUDynamicEntryBox()
	{
		UClass* Class = UDynamicEntryBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BP_CreateEntry", &UDynamicEntryBox::execBP_CreateEntry },
			{ "BP_CreateEntryOfClass", &UDynamicEntryBox::execBP_CreateEntryOfClass },
			{ "RemoveEntry", &UDynamicEntryBox::execRemoveEntry },
			{ "Reset", &UDynamicEntryBox::execReset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntry_Statics
	{
		struct DynamicEntryBox_eventBP_CreateEntry_Parms
		{
			UUserWidget* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntry_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DynamicEntryBox_eventBP_CreateEntry_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntry_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntry_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntry_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntry_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DynamicEntryBox" },
		{ "Comment", "/** Creates and establishes a new dynamic entry in the box */" },
		{ "DisplayName", "Create Entry" },
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBox.h" },
		{ "ToolTip", "Creates and establishes a new dynamic entry in the box" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicEntryBox, nullptr, "BP_CreateEntry", nullptr, nullptr, sizeof(DynamicEntryBox_eventBP_CreateEntry_Parms), Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntryOfClass_Statics
	{
		struct DynamicEntryBox_eventBP_CreateEntryOfClass_Parms
		{
			TSubclassOf<UUserWidget>  EntryClass;
			UUserWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EntryClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntryOfClass_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntryOfClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DynamicEntryBox_eventBP_CreateEntryOfClass_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntryOfClass_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntryOfClass_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntryOfClass_Statics::NewProp_EntryClass = { "EntryClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DynamicEntryBox_eventBP_CreateEntryOfClass_Parms, EntryClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntryOfClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntryOfClass_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntryOfClass_Statics::NewProp_EntryClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntryOfClass_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DynamicEntryBox" },
		{ "Comment", "/** Creates and establishes a new dynamic entry in the box using the specified class instead of the default. */" },
		{ "DeterminesOutputType", "EntryClass" },
		{ "DisplayName", "Create Entry of Class" },
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBox.h" },
		{ "ToolTip", "Creates and establishes a new dynamic entry in the box using the specified class instead of the default." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntryOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicEntryBox, nullptr, "BP_CreateEntryOfClass", nullptr, nullptr, sizeof(DynamicEntryBox_eventBP_CreateEntryOfClass_Parms), Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntryOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntryOfClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntryOfClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntryOfClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntryOfClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntryOfClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDynamicEntryBox_RemoveEntry_Statics
	{
		struct DynamicEntryBox_eventRemoveEntry_Parms
		{
			UUserWidget* EntryWidget;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntryWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EntryWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicEntryBox_RemoveEntry_Statics::NewProp_EntryWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDynamicEntryBox_RemoveEntry_Statics::NewProp_EntryWidget = { "EntryWidget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DynamicEntryBox_eventRemoveEntry_Parms, EntryWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDynamicEntryBox_RemoveEntry_Statics::NewProp_EntryWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBox_RemoveEntry_Statics::NewProp_EntryWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynamicEntryBox_RemoveEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicEntryBox_RemoveEntry_Statics::NewProp_EntryWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicEntryBox_RemoveEntry_Statics::Function_MetaDataParams[] = {
		{ "Category", "DynamicEntryBox" },
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicEntryBox_RemoveEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicEntryBox, nullptr, "RemoveEntry", nullptr, nullptr, sizeof(DynamicEntryBox_eventRemoveEntry_Parms), Z_Construct_UFunction_UDynamicEntryBox_RemoveEntry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBox_RemoveEntry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDynamicEntryBox_RemoveEntry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBox_RemoveEntry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDynamicEntryBox_RemoveEntry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDynamicEntryBox_RemoveEntry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDynamicEntryBox_Reset_Statics
	{
		struct DynamicEntryBox_eventReset_Parms
		{
			bool bDeleteWidgets;
		};
		static void NewProp_bDeleteWidgets_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDeleteWidgets;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDynamicEntryBox_Reset_Statics::NewProp_bDeleteWidgets_SetBit(void* Obj)
	{
		((DynamicEntryBox_eventReset_Parms*)Obj)->bDeleteWidgets = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDynamicEntryBox_Reset_Statics::NewProp_bDeleteWidgets = { "bDeleteWidgets", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DynamicEntryBox_eventReset_Parms), &Z_Construct_UFunction_UDynamicEntryBox_Reset_Statics::NewProp_bDeleteWidgets_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynamicEntryBox_Reset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicEntryBox_Reset_Statics::NewProp_bDeleteWidgets,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicEntryBox_Reset_Statics::Function_MetaDataParams[] = {
		{ "Category", "DynamicEntryBox" },
		{ "Comment", "/** Clear out the box entries, optionally deleting the underlying Slate widgets entirely as well. */" },
		{ "CPP_Default_bDeleteWidgets", "false" },
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBox.h" },
		{ "ToolTip", "Clear out the box entries, optionally deleting the underlying Slate widgets entirely as well." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicEntryBox_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicEntryBox, nullptr, "Reset", nullptr, nullptr, sizeof(DynamicEntryBox_eventReset_Parms), Z_Construct_UFunction_UDynamicEntryBox_Reset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBox_Reset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDynamicEntryBox_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBox_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDynamicEntryBox_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDynamicEntryBox_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDynamicEntryBox_NoRegister()
	{
		return UDynamicEntryBox::StaticClass();
	}
	struct Z_Construct_UClass_UDynamicEntryBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntryWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EntryWidgetClass;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumDesignerPreviewEntries_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumDesignerPreviewEntries;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDynamicEntryBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDynamicEntryBoxBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDynamicEntryBox_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntry, "BP_CreateEntry" }, // 4088825164
		{ &Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntryOfClass, "BP_CreateEntryOfClass" }, // 2407584758
		{ &Z_Construct_UFunction_UDynamicEntryBox_RemoveEntry, "RemoveEntry" }, // 2687521109
		{ &Z_Construct_UFunction_UDynamicEntryBox_Reset, "Reset" }, // 3514491640
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicEntryBox_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A special box panel that auto-generates its entries at both design-time and runtime.\n * Useful for cases where you can have a varying number of entries, but it isn't worth the effort or conceptual overhead to set up a list/tile view.\n * Note that entries here are *not* virtualized as they are in the list views, so generally this should be avoided if you intend to scroll through lots of items.\n *\n * No children can be manually added in the designer - all are auto-generated based on the given entry class.\n */" },
		{ "IncludePath", "Components/DynamicEntryBox.h" },
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBox.h" },
		{ "ToolTip", "A special box panel that auto-generates its entries at both design-time and runtime.\nUseful for cases where you can have a varying number of entries, but it isn't worth the effort or conceptual overhead to set up a list/tile view.\nNote that entries here are *not* virtualized as they are in the list views, so generally this should be avoided if you intend to scroll through lots of items.\n\nNo children can be manually added in the designer - all are auto-generated based on the given entry class." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicEntryBox_Statics::NewProp_EntryWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EntryLayout" },
		{ "Comment", "/**\n\x09 * The class of widget to create entries of.\n\x09 * If natively binding this widget, use the EntryClass UPROPERTY metadata to specify the desired entry widget base class.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBox.h" },
		{ "ToolTip", "The class of widget to create entries of.\nIf natively binding this widget, use the EntryClass UPROPERTY metadata to specify the desired entry widget base class." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDynamicEntryBox_Statics::NewProp_EntryWidgetClass = { "EntryWidgetClass", nullptr, (EPropertyFlags)0x0044000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDynamicEntryBox, EntryWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UDynamicEntryBox_Statics::NewProp_EntryWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicEntryBox_Statics::NewProp_EntryWidgetClass_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicEntryBox_Statics::NewProp_NumDesignerPreviewEntries_MetaData[] = {
		{ "Category", "DynamicEntryBox" },
		{ "ClampMax", "20" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBox.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDynamicEntryBox_Statics::NewProp_NumDesignerPreviewEntries = { "NumDesignerPreviewEntries", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDynamicEntryBox, NumDesignerPreviewEntries), METADATA_PARAMS(Z_Construct_UClass_UDynamicEntryBox_Statics::NewProp_NumDesignerPreviewEntries_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicEntryBox_Statics::NewProp_NumDesignerPreviewEntries_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDynamicEntryBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicEntryBox_Statics::NewProp_EntryWidgetClass,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicEntryBox_Statics::NewProp_NumDesignerPreviewEntries,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDynamicEntryBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDynamicEntryBox>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDynamicEntryBox_Statics::ClassParams = {
		&UDynamicEntryBox::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDynamicEntryBox_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicEntryBox_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDynamicEntryBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicEntryBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDynamicEntryBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDynamicEntryBox_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDynamicEntryBox, 2471124152);
	template<> UMG_API UClass* StaticClass<UDynamicEntryBox>()
	{
		return UDynamicEntryBox::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDynamicEntryBox(Z_Construct_UClass_UDynamicEntryBox, &UDynamicEntryBox::StaticClass, TEXT("/Script/UMG"), TEXT("UDynamicEntryBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDynamicEntryBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
