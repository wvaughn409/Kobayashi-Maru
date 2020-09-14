// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/CanvasPanelSlot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCanvasPanelSlot() {}
// Cross Module References
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FAnchorData();
	UPackage* Z_Construct_UPackage__Script_UMG();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FAnchors();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanelSlot_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanelSlot();
	UMG_API UClass* Z_Construct_UClass_UPanelSlot();
// End Cross Module References
class UScriptStruct* FAnchorData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UMG_API uint32 Get_Z_Construct_UScriptStruct_FAnchorData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnchorData, Z_Construct_UPackage__Script_UMG(), TEXT("AnchorData"), sizeof(FAnchorData), Get_Z_Construct_UScriptStruct_FAnchorData_Hash());
	}
	return Singleton;
}
template<> UMG_API UScriptStruct* StaticStruct<FAnchorData>()
{
	return FAnchorData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnchorData(FAnchorData::StaticStruct, TEXT("/Script/UMG"), TEXT("AnchorData"), false, nullptr, nullptr);
static struct FScriptStruct_UMG_StaticRegisterNativesFAnchorData
{
	FScriptStruct_UMG_StaticRegisterNativesFAnchorData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnchorData")),new UScriptStruct::TCppStructOps<FAnchorData>);
	}
} ScriptStruct_UMG_StaticRegisterNativesFAnchorData;
	struct Z_Construct_UScriptStruct_FAnchorData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Alignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Anchors_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Anchors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offsets_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offsets;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnchorData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnchorData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnchorData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnchorData_Statics::NewProp_Alignment_MetaData[] = {
		{ "Category", "AnchorData" },
		{ "Comment", "/**\n\x09 * Alignment is the pivot point of the widget.  Starting in the upper left at (0,0),\n\x09 * ending in the lower right at (1,1).  Moving the alignment point allows you to move\n\x09 * the origin of the widget.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "Alignment is the pivot point of the widget.  Starting in the upper left at (0,0),\nending in the lower right at (1,1).  Moving the alignment point allows you to move\nthe origin of the widget." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnchorData_Statics::NewProp_Alignment = { "Alignment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnchorData, Alignment), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnchorData_Statics::NewProp_Alignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnchorData_Statics::NewProp_Alignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnchorData_Statics::NewProp_Anchors_MetaData[] = {
		{ "Category", "AnchorData" },
		{ "Comment", "/** Anchors. */" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "Anchors." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnchorData_Statics::NewProp_Anchors = { "Anchors", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnchorData, Anchors), Z_Construct_UScriptStruct_FAnchors, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnchorData_Statics::NewProp_Anchors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnchorData_Statics::NewProp_Anchors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnchorData_Statics::NewProp_Offsets_MetaData[] = {
		{ "Category", "AnchorData" },
		{ "Comment", "/** Offset. */" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "Offset." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnchorData_Statics::NewProp_Offsets = { "Offsets", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnchorData, Offsets), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnchorData_Statics::NewProp_Offsets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnchorData_Statics::NewProp_Offsets_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnchorData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnchorData_Statics::NewProp_Alignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnchorData_Statics::NewProp_Anchors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnchorData_Statics::NewProp_Offsets,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnchorData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
		nullptr,
		&NewStructOps,
		"AnchorData",
		sizeof(FAnchorData),
		alignof(FAnchorData),
		Z_Construct_UScriptStruct_FAnchorData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnchorData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnchorData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnchorData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnchorData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnchorData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UMG();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnchorData"), sizeof(FAnchorData), Get_Z_Construct_UScriptStruct_FAnchorData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnchorData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnchorData_Hash() { return 1957755303U; }
	DEFINE_FUNCTION(UCanvasPanelSlot::execSetMaximum)
	{
		P_GET_STRUCT(FVector2D,Z_Param_InMaximumAnchors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaximum(Z_Param_InMaximumAnchors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCanvasPanelSlot::execSetMinimum)
	{
		P_GET_STRUCT(FVector2D,Z_Param_InMinimumAnchors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMinimum(Z_Param_InMinimumAnchors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCanvasPanelSlot::execGetZOrder)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetZOrder();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCanvasPanelSlot::execSetZOrder)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InZOrder);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetZOrder(Z_Param_InZOrder);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCanvasPanelSlot::execGetAutoSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAutoSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCanvasPanelSlot::execSetAutoSize)
	{
		P_GET_UBOOL(Z_Param_InbAutoSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAutoSize(Z_Param_InbAutoSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCanvasPanelSlot::execGetAlignment)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetAlignment();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCanvasPanelSlot::execSetAlignment)
	{
		P_GET_STRUCT(FVector2D,Z_Param_InAlignment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAlignment(Z_Param_InAlignment);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCanvasPanelSlot::execGetAnchors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAnchors*)Z_Param__Result=P_THIS->GetAnchors();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCanvasPanelSlot::execSetAnchors)
	{
		P_GET_STRUCT(FAnchors,Z_Param_InAnchors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAnchors(Z_Param_InAnchors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCanvasPanelSlot::execGetOffsets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMargin*)Z_Param__Result=P_THIS->GetOffsets();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCanvasPanelSlot::execSetOffsets)
	{
		P_GET_STRUCT(FMargin,Z_Param_InOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOffsets(Z_Param_InOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCanvasPanelSlot::execGetSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCanvasPanelSlot::execSetSize)
	{
		P_GET_STRUCT(FVector2D,Z_Param_InSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSize(Z_Param_InSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCanvasPanelSlot::execGetPosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetPosition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCanvasPanelSlot::execSetPosition)
	{
		P_GET_STRUCT(FVector2D,Z_Param_InPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPosition(Z_Param_InPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCanvasPanelSlot::execGetLayout)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAnchorData*)Z_Param__Result=P_THIS->GetLayout();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCanvasPanelSlot::execSetLayout)
	{
		P_GET_STRUCT_REF(FAnchorData,Z_Param_Out_InLayoutData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLayout(Z_Param_Out_InLayoutData);
		P_NATIVE_END;
	}
	void UCanvasPanelSlot::StaticRegisterNativesUCanvasPanelSlot()
	{
		UClass* Class = UCanvasPanelSlot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAlignment", &UCanvasPanelSlot::execGetAlignment },
			{ "GetAnchors", &UCanvasPanelSlot::execGetAnchors },
			{ "GetAutoSize", &UCanvasPanelSlot::execGetAutoSize },
			{ "GetLayout", &UCanvasPanelSlot::execGetLayout },
			{ "GetOffsets", &UCanvasPanelSlot::execGetOffsets },
			{ "GetPosition", &UCanvasPanelSlot::execGetPosition },
			{ "GetSize", &UCanvasPanelSlot::execGetSize },
			{ "GetZOrder", &UCanvasPanelSlot::execGetZOrder },
			{ "SetAlignment", &UCanvasPanelSlot::execSetAlignment },
			{ "SetAnchors", &UCanvasPanelSlot::execSetAnchors },
			{ "SetAutoSize", &UCanvasPanelSlot::execSetAutoSize },
			{ "SetLayout", &UCanvasPanelSlot::execSetLayout },
			{ "SetMaximum", &UCanvasPanelSlot::execSetMaximum },
			{ "SetMinimum", &UCanvasPanelSlot::execSetMinimum },
			{ "SetOffsets", &UCanvasPanelSlot::execSetOffsets },
			{ "SetPosition", &UCanvasPanelSlot::execSetPosition },
			{ "SetSize", &UCanvasPanelSlot::execSetSize },
			{ "SetZOrder", &UCanvasPanelSlot::execSetZOrder },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCanvasPanelSlot_GetAlignment_Statics
	{
		struct CanvasPanelSlot_eventGetAlignment_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvasPanelSlot_GetAlignment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CanvasPanelSlot_eventGetAlignment_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvasPanelSlot_GetAlignment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasPanelSlot_GetAlignment_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvasPanelSlot_GetAlignment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Canvas Slot" },
		{ "Comment", "/** Gets the alignment on the slot */" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "Gets the alignment on the slot" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvasPanelSlot_GetAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, nullptr, "GetAlignment", nullptr, nullptr, sizeof(CanvasPanelSlot_eventGetAlignment_Parms), Z_Construct_UFunction_UCanvasPanelSlot_GetAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_GetAlignment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCanvasPanelSlot_GetAlignment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_GetAlignment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCanvasPanelSlot_GetAlignment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCanvasPanelSlot_GetAlignment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCanvasPanelSlot_GetAnchors_Statics
	{
		struct CanvasPanelSlot_eventGetAnchors_Parms
		{
			FAnchors ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvasPanelSlot_GetAnchors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CanvasPanelSlot_eventGetAnchors_Parms, ReturnValue), Z_Construct_UScriptStruct_FAnchors, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvasPanelSlot_GetAnchors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasPanelSlot_GetAnchors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvasPanelSlot_GetAnchors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Canvas Slot" },
		{ "Comment", "/** Gets the anchors on the slot */" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "Gets the anchors on the slot" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvasPanelSlot_GetAnchors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, nullptr, "GetAnchors", nullptr, nullptr, sizeof(CanvasPanelSlot_eventGetAnchors_Parms), Z_Construct_UFunction_UCanvasPanelSlot_GetAnchors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_GetAnchors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCanvasPanelSlot_GetAnchors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_GetAnchors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCanvasPanelSlot_GetAnchors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCanvasPanelSlot_GetAnchors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCanvasPanelSlot_GetAutoSize_Statics
	{
		struct CanvasPanelSlot_eventGetAutoSize_Parms
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
	void Z_Construct_UFunction_UCanvasPanelSlot_GetAutoSize_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CanvasPanelSlot_eventGetAutoSize_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCanvasPanelSlot_GetAutoSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CanvasPanelSlot_eventGetAutoSize_Parms), &Z_Construct_UFunction_UCanvasPanelSlot_GetAutoSize_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvasPanelSlot_GetAutoSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasPanelSlot_GetAutoSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvasPanelSlot_GetAutoSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Canvas Slot" },
		{ "Comment", "/** Gets if the slot to be auto-sized */" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "Gets if the slot to be auto-sized" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvasPanelSlot_GetAutoSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, nullptr, "GetAutoSize", nullptr, nullptr, sizeof(CanvasPanelSlot_eventGetAutoSize_Parms), Z_Construct_UFunction_UCanvasPanelSlot_GetAutoSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_GetAutoSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCanvasPanelSlot_GetAutoSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_GetAutoSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCanvasPanelSlot_GetAutoSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCanvasPanelSlot_GetAutoSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCanvasPanelSlot_GetLayout_Statics
	{
		struct CanvasPanelSlot_eventGetLayout_Parms
		{
			FAnchorData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvasPanelSlot_GetLayout_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CanvasPanelSlot_eventGetLayout_Parms, ReturnValue), Z_Construct_UScriptStruct_FAnchorData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvasPanelSlot_GetLayout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasPanelSlot_GetLayout_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvasPanelSlot_GetLayout_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Canvas Slot" },
		{ "Comment", "/** Gets the layout data of the slot */" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "Gets the layout data of the slot" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvasPanelSlot_GetLayout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, nullptr, "GetLayout", nullptr, nullptr, sizeof(CanvasPanelSlot_eventGetLayout_Parms), Z_Construct_UFunction_UCanvasPanelSlot_GetLayout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_GetLayout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCanvasPanelSlot_GetLayout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_GetLayout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCanvasPanelSlot_GetLayout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCanvasPanelSlot_GetLayout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCanvasPanelSlot_GetOffsets_Statics
	{
		struct CanvasPanelSlot_eventGetOffsets_Parms
		{
			FMargin ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvasPanelSlot_GetOffsets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CanvasPanelSlot_eventGetOffsets_Parms, ReturnValue), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvasPanelSlot_GetOffsets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasPanelSlot_GetOffsets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvasPanelSlot_GetOffsets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Canvas Slot" },
		{ "Comment", "/** Gets the offset data of the slot, which could be position and size, or margins depending on the anchor points */" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "Gets the offset data of the slot, which could be position and size, or margins depending on the anchor points" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvasPanelSlot_GetOffsets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, nullptr, "GetOffsets", nullptr, nullptr, sizeof(CanvasPanelSlot_eventGetOffsets_Parms), Z_Construct_UFunction_UCanvasPanelSlot_GetOffsets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_GetOffsets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCanvasPanelSlot_GetOffsets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_GetOffsets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCanvasPanelSlot_GetOffsets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCanvasPanelSlot_GetOffsets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCanvasPanelSlot_GetPosition_Statics
	{
		struct CanvasPanelSlot_eventGetPosition_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvasPanelSlot_GetPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CanvasPanelSlot_eventGetPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvasPanelSlot_GetPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasPanelSlot_GetPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvasPanelSlot_GetPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Canvas Slot" },
		{ "Comment", "/** Gets the position of the slot */" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "Gets the position of the slot" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvasPanelSlot_GetPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, nullptr, "GetPosition", nullptr, nullptr, sizeof(CanvasPanelSlot_eventGetPosition_Parms), Z_Construct_UFunction_UCanvasPanelSlot_GetPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_GetPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCanvasPanelSlot_GetPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_GetPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCanvasPanelSlot_GetPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCanvasPanelSlot_GetPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCanvasPanelSlot_GetSize_Statics
	{
		struct CanvasPanelSlot_eventGetSize_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvasPanelSlot_GetSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CanvasPanelSlot_eventGetSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvasPanelSlot_GetSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasPanelSlot_GetSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvasPanelSlot_GetSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Canvas Slot" },
		{ "Comment", "/** Gets the size of the slot */" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "Gets the size of the slot" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvasPanelSlot_GetSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, nullptr, "GetSize", nullptr, nullptr, sizeof(CanvasPanelSlot_eventGetSize_Parms), Z_Construct_UFunction_UCanvasPanelSlot_GetSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_GetSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCanvasPanelSlot_GetSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_GetSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCanvasPanelSlot_GetSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCanvasPanelSlot_GetSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCanvasPanelSlot_GetZOrder_Statics
	{
		struct CanvasPanelSlot_eventGetZOrder_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCanvasPanelSlot_GetZOrder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CanvasPanelSlot_eventGetZOrder_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvasPanelSlot_GetZOrder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasPanelSlot_GetZOrder_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvasPanelSlot_GetZOrder_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Canvas Slot" },
		{ "Comment", "/** Gets the z-order on the slot */" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "Gets the z-order on the slot" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvasPanelSlot_GetZOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, nullptr, "GetZOrder", nullptr, nullptr, sizeof(CanvasPanelSlot_eventGetZOrder_Parms), Z_Construct_UFunction_UCanvasPanelSlot_GetZOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_GetZOrder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCanvasPanelSlot_GetZOrder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_GetZOrder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCanvasPanelSlot_GetZOrder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCanvasPanelSlot_GetZOrder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCanvasPanelSlot_SetAlignment_Statics
	{
		struct CanvasPanelSlot_eventSetAlignment_Parms
		{
			FVector2D InAlignment;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAlignment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvasPanelSlot_SetAlignment_Statics::NewProp_InAlignment = { "InAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CanvasPanelSlot_eventSetAlignment_Parms, InAlignment), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvasPanelSlot_SetAlignment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasPanelSlot_SetAlignment_Statics::NewProp_InAlignment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvasPanelSlot_SetAlignment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Canvas Slot" },
		{ "Comment", "/** Sets the alignment on the slot */" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "Sets the alignment on the slot" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvasPanelSlot_SetAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, nullptr, "SetAlignment", nullptr, nullptr, sizeof(CanvasPanelSlot_eventSetAlignment_Parms), Z_Construct_UFunction_UCanvasPanelSlot_SetAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetAlignment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCanvasPanelSlot_SetAlignment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetAlignment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCanvasPanelSlot_SetAlignment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCanvasPanelSlot_SetAlignment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCanvasPanelSlot_SetAnchors_Statics
	{
		struct CanvasPanelSlot_eventSetAnchors_Parms
		{
			FAnchors InAnchors;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAnchors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvasPanelSlot_SetAnchors_Statics::NewProp_InAnchors = { "InAnchors", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CanvasPanelSlot_eventSetAnchors_Parms, InAnchors), Z_Construct_UScriptStruct_FAnchors, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvasPanelSlot_SetAnchors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasPanelSlot_SetAnchors_Statics::NewProp_InAnchors,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvasPanelSlot_SetAnchors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Canvas Slot" },
		{ "Comment", "/** Sets the anchors on the slot */" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "Sets the anchors on the slot" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvasPanelSlot_SetAnchors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, nullptr, "SetAnchors", nullptr, nullptr, sizeof(CanvasPanelSlot_eventSetAnchors_Parms), Z_Construct_UFunction_UCanvasPanelSlot_SetAnchors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetAnchors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCanvasPanelSlot_SetAnchors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetAnchors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCanvasPanelSlot_SetAnchors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCanvasPanelSlot_SetAnchors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCanvasPanelSlot_SetAutoSize_Statics
	{
		struct CanvasPanelSlot_eventSetAutoSize_Parms
		{
			bool InbAutoSize;
		};
		static void NewProp_InbAutoSize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InbAutoSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCanvasPanelSlot_SetAutoSize_Statics::NewProp_InbAutoSize_SetBit(void* Obj)
	{
		((CanvasPanelSlot_eventSetAutoSize_Parms*)Obj)->InbAutoSize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCanvasPanelSlot_SetAutoSize_Statics::NewProp_InbAutoSize = { "InbAutoSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CanvasPanelSlot_eventSetAutoSize_Parms), &Z_Construct_UFunction_UCanvasPanelSlot_SetAutoSize_Statics::NewProp_InbAutoSize_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvasPanelSlot_SetAutoSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasPanelSlot_SetAutoSize_Statics::NewProp_InbAutoSize,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvasPanelSlot_SetAutoSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Canvas Slot" },
		{ "Comment", "/** Sets if the slot to be auto-sized */" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "Sets if the slot to be auto-sized" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvasPanelSlot_SetAutoSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, nullptr, "SetAutoSize", nullptr, nullptr, sizeof(CanvasPanelSlot_eventSetAutoSize_Parms), Z_Construct_UFunction_UCanvasPanelSlot_SetAutoSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetAutoSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCanvasPanelSlot_SetAutoSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetAutoSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCanvasPanelSlot_SetAutoSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCanvasPanelSlot_SetAutoSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCanvasPanelSlot_SetLayout_Statics
	{
		struct CanvasPanelSlot_eventSetLayout_Parms
		{
			FAnchorData InLayoutData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InLayoutData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InLayoutData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvasPanelSlot_SetLayout_Statics::NewProp_InLayoutData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvasPanelSlot_SetLayout_Statics::NewProp_InLayoutData = { "InLayoutData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CanvasPanelSlot_eventSetLayout_Parms, InLayoutData), Z_Construct_UScriptStruct_FAnchorData, METADATA_PARAMS(Z_Construct_UFunction_UCanvasPanelSlot_SetLayout_Statics::NewProp_InLayoutData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetLayout_Statics::NewProp_InLayoutData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvasPanelSlot_SetLayout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasPanelSlot_SetLayout_Statics::NewProp_InLayoutData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvasPanelSlot_SetLayout_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Canvas Slot" },
		{ "Comment", "/** Sets the layout data of the slot */" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "Sets the layout data of the slot" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvasPanelSlot_SetLayout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, nullptr, "SetLayout", nullptr, nullptr, sizeof(CanvasPanelSlot_eventSetLayout_Parms), Z_Construct_UFunction_UCanvasPanelSlot_SetLayout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetLayout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCanvasPanelSlot_SetLayout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetLayout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCanvasPanelSlot_SetLayout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCanvasPanelSlot_SetLayout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCanvasPanelSlot_SetMaximum_Statics
	{
		struct CanvasPanelSlot_eventSetMaximum_Parms
		{
			FVector2D InMaximumAnchors;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InMaximumAnchors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvasPanelSlot_SetMaximum_Statics::NewProp_InMaximumAnchors = { "InMaximumAnchors", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CanvasPanelSlot_eventSetMaximum_Parms, InMaximumAnchors), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvasPanelSlot_SetMaximum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasPanelSlot_SetMaximum_Statics::NewProp_InMaximumAnchors,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvasPanelSlot_SetMaximum_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Sets the anchors on the slot */" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "Sets the anchors on the slot" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvasPanelSlot_SetMaximum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, nullptr, "SetMaximum", nullptr, nullptr, sizeof(CanvasPanelSlot_eventSetMaximum_Parms), Z_Construct_UFunction_UCanvasPanelSlot_SetMaximum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetMaximum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCanvasPanelSlot_SetMaximum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetMaximum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCanvasPanelSlot_SetMaximum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCanvasPanelSlot_SetMaximum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCanvasPanelSlot_SetMinimum_Statics
	{
		struct CanvasPanelSlot_eventSetMinimum_Parms
		{
			FVector2D InMinimumAnchors;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InMinimumAnchors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvasPanelSlot_SetMinimum_Statics::NewProp_InMinimumAnchors = { "InMinimumAnchors", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CanvasPanelSlot_eventSetMinimum_Parms, InMinimumAnchors), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvasPanelSlot_SetMinimum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasPanelSlot_SetMinimum_Statics::NewProp_InMinimumAnchors,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvasPanelSlot_SetMinimum_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Sets the anchors on the slot */" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "Sets the anchors on the slot" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvasPanelSlot_SetMinimum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, nullptr, "SetMinimum", nullptr, nullptr, sizeof(CanvasPanelSlot_eventSetMinimum_Parms), Z_Construct_UFunction_UCanvasPanelSlot_SetMinimum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetMinimum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCanvasPanelSlot_SetMinimum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetMinimum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCanvasPanelSlot_SetMinimum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCanvasPanelSlot_SetMinimum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCanvasPanelSlot_SetOffsets_Statics
	{
		struct CanvasPanelSlot_eventSetOffsets_Parms
		{
			FMargin InOffset;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvasPanelSlot_SetOffsets_Statics::NewProp_InOffset = { "InOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CanvasPanelSlot_eventSetOffsets_Parms, InOffset), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvasPanelSlot_SetOffsets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasPanelSlot_SetOffsets_Statics::NewProp_InOffset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvasPanelSlot_SetOffsets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Canvas Slot" },
		{ "Comment", "/** Sets the offset data of the slot, which could be position and size, or margins depending on the anchor points */" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "Sets the offset data of the slot, which could be position and size, or margins depending on the anchor points" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvasPanelSlot_SetOffsets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, nullptr, "SetOffsets", nullptr, nullptr, sizeof(CanvasPanelSlot_eventSetOffsets_Parms), Z_Construct_UFunction_UCanvasPanelSlot_SetOffsets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetOffsets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCanvasPanelSlot_SetOffsets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetOffsets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCanvasPanelSlot_SetOffsets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCanvasPanelSlot_SetOffsets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCanvasPanelSlot_SetPosition_Statics
	{
		struct CanvasPanelSlot_eventSetPosition_Parms
		{
			FVector2D InPosition;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvasPanelSlot_SetPosition_Statics::NewProp_InPosition = { "InPosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CanvasPanelSlot_eventSetPosition_Parms, InPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvasPanelSlot_SetPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasPanelSlot_SetPosition_Statics::NewProp_InPosition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvasPanelSlot_SetPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Canvas Slot" },
		{ "Comment", "/** Sets the position of the slot */" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "Sets the position of the slot" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvasPanelSlot_SetPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, nullptr, "SetPosition", nullptr, nullptr, sizeof(CanvasPanelSlot_eventSetPosition_Parms), Z_Construct_UFunction_UCanvasPanelSlot_SetPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCanvasPanelSlot_SetPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCanvasPanelSlot_SetPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCanvasPanelSlot_SetPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCanvasPanelSlot_SetSize_Statics
	{
		struct CanvasPanelSlot_eventSetSize_Parms
		{
			FVector2D InSize;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvasPanelSlot_SetSize_Statics::NewProp_InSize = { "InSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CanvasPanelSlot_eventSetSize_Parms, InSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvasPanelSlot_SetSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasPanelSlot_SetSize_Statics::NewProp_InSize,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvasPanelSlot_SetSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Canvas Slot" },
		{ "Comment", "/** Sets the size of the slot */" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "Sets the size of the slot" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvasPanelSlot_SetSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, nullptr, "SetSize", nullptr, nullptr, sizeof(CanvasPanelSlot_eventSetSize_Parms), Z_Construct_UFunction_UCanvasPanelSlot_SetSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCanvasPanelSlot_SetSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCanvasPanelSlot_SetSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCanvasPanelSlot_SetSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCanvasPanelSlot_SetZOrder_Statics
	{
		struct CanvasPanelSlot_eventSetZOrder_Parms
		{
			int32 InZOrder;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InZOrder;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCanvasPanelSlot_SetZOrder_Statics::NewProp_InZOrder = { "InZOrder", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CanvasPanelSlot_eventSetZOrder_Parms, InZOrder), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvasPanelSlot_SetZOrder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasPanelSlot_SetZOrder_Statics::NewProp_InZOrder,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvasPanelSlot_SetZOrder_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Canvas Slot" },
		{ "Comment", "/** Sets the z-order on the slot */" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "Sets the z-order on the slot" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvasPanelSlot_SetZOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, nullptr, "SetZOrder", nullptr, nullptr, sizeof(CanvasPanelSlot_eventSetZOrder_Parms), Z_Construct_UFunction_UCanvasPanelSlot_SetZOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetZOrder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCanvasPanelSlot_SetZOrder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetZOrder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCanvasPanelSlot_SetZOrder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCanvasPanelSlot_SetZOrder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCanvasPanelSlot_NoRegister()
	{
		return UCanvasPanelSlot::StaticClass();
	}
	struct Z_Construct_UClass_UCanvasPanelSlot_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ZOrder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoSize_MetaData[];
#endif
		static void NewProp_bAutoSize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayoutData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LayoutData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCanvasPanelSlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPanelSlot,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCanvasPanelSlot_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCanvasPanelSlot_GetAlignment, "GetAlignment" }, // 458055009
		{ &Z_Construct_UFunction_UCanvasPanelSlot_GetAnchors, "GetAnchors" }, // 3596993900
		{ &Z_Construct_UFunction_UCanvasPanelSlot_GetAutoSize, "GetAutoSize" }, // 2184036559
		{ &Z_Construct_UFunction_UCanvasPanelSlot_GetLayout, "GetLayout" }, // 1550068565
		{ &Z_Construct_UFunction_UCanvasPanelSlot_GetOffsets, "GetOffsets" }, // 2249128215
		{ &Z_Construct_UFunction_UCanvasPanelSlot_GetPosition, "GetPosition" }, // 3306812336
		{ &Z_Construct_UFunction_UCanvasPanelSlot_GetSize, "GetSize" }, // 3005026176
		{ &Z_Construct_UFunction_UCanvasPanelSlot_GetZOrder, "GetZOrder" }, // 1386147220
		{ &Z_Construct_UFunction_UCanvasPanelSlot_SetAlignment, "SetAlignment" }, // 4223379540
		{ &Z_Construct_UFunction_UCanvasPanelSlot_SetAnchors, "SetAnchors" }, // 2171281332
		{ &Z_Construct_UFunction_UCanvasPanelSlot_SetAutoSize, "SetAutoSize" }, // 1634126097
		{ &Z_Construct_UFunction_UCanvasPanelSlot_SetLayout, "SetLayout" }, // 3413525718
		{ &Z_Construct_UFunction_UCanvasPanelSlot_SetMaximum, "SetMaximum" }, // 1277545662
		{ &Z_Construct_UFunction_UCanvasPanelSlot_SetMinimum, "SetMinimum" }, // 1644097983
		{ &Z_Construct_UFunction_UCanvasPanelSlot_SetOffsets, "SetOffsets" }, // 4262988842
		{ &Z_Construct_UFunction_UCanvasPanelSlot_SetPosition, "SetPosition" }, // 3085926553
		{ &Z_Construct_UFunction_UCanvasPanelSlot_SetSize, "SetSize" }, // 2740218758
		{ &Z_Construct_UFunction_UCanvasPanelSlot_SetZOrder, "SetZOrder" }, // 980766597
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCanvasPanelSlot_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Components/CanvasPanelSlot.h" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCanvasPanelSlot_Statics::NewProp_ZOrder_MetaData[] = {
		{ "Category", "Layout|Canvas Slot" },
		{ "Comment", "/** The order priority this widget is rendered in.  Higher values are rendered last (and so they will appear to be on top). */" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "The order priority this widget is rendered in.  Higher values are rendered last (and so they will appear to be on top)." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCanvasPanelSlot_Statics::NewProp_ZOrder = { "ZOrder", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCanvasPanelSlot, ZOrder), METADATA_PARAMS(Z_Construct_UClass_UCanvasPanelSlot_Statics::NewProp_ZOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCanvasPanelSlot_Statics::NewProp_ZOrder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCanvasPanelSlot_Statics::NewProp_bAutoSize_MetaData[] = {
		{ "Category", "Layout|Canvas Slot" },
		{ "Comment", "/** When AutoSize is true we use the widget's desired size */" },
		{ "DisplayName", "Size To Content" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "When AutoSize is true we use the widget's desired size" },
	};
#endif
	void Z_Construct_UClass_UCanvasPanelSlot_Statics::NewProp_bAutoSize_SetBit(void* Obj)
	{
		((UCanvasPanelSlot*)Obj)->bAutoSize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCanvasPanelSlot_Statics::NewProp_bAutoSize = { "bAutoSize", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCanvasPanelSlot), &Z_Construct_UClass_UCanvasPanelSlot_Statics::NewProp_bAutoSize_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCanvasPanelSlot_Statics::NewProp_bAutoSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCanvasPanelSlot_Statics::NewProp_bAutoSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCanvasPanelSlot_Statics::NewProp_LayoutData_MetaData[] = {
		{ "Category", "Layout|Canvas Slot" },
		{ "Comment", "/** The anchoring information for the slot */" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "The anchoring information for the slot" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCanvasPanelSlot_Statics::NewProp_LayoutData = { "LayoutData", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCanvasPanelSlot, LayoutData), Z_Construct_UScriptStruct_FAnchorData, METADATA_PARAMS(Z_Construct_UClass_UCanvasPanelSlot_Statics::NewProp_LayoutData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCanvasPanelSlot_Statics::NewProp_LayoutData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCanvasPanelSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCanvasPanelSlot_Statics::NewProp_ZOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCanvasPanelSlot_Statics::NewProp_bAutoSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCanvasPanelSlot_Statics::NewProp_LayoutData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCanvasPanelSlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCanvasPanelSlot>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCanvasPanelSlot_Statics::ClassParams = {
		&UCanvasPanelSlot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCanvasPanelSlot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCanvasPanelSlot_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCanvasPanelSlot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCanvasPanelSlot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCanvasPanelSlot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCanvasPanelSlot_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCanvasPanelSlot, 3238928438);
	template<> UMG_API UClass* StaticClass<UCanvasPanelSlot>()
	{
		return UCanvasPanelSlot::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCanvasPanelSlot(Z_Construct_UClass_UCanvasPanelSlot, &UCanvasPanelSlot::StaticClass, TEXT("/Script/UMG"), TEXT("UCanvasPanelSlot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCanvasPanelSlot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
