// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Blueprint/WidgetLayoutLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetLayoutLibrary() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UWidgetLayoutLibrary_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetLayoutLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_UMG();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometry();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UMG_API UClass* Z_Construct_UClass_UBorderSlot_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanelSlot_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UGridSlot_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UHorizontalBoxSlot_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UOverlaySlot_NoRegister();
	UMG_API UClass* Z_Construct_UClass_USafeZoneSlot_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UScaleBoxSlot_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UScrollBoxSlot_NoRegister();
	UMG_API UClass* Z_Construct_UClass_USizeBoxSlot_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUniformGridSlot_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UVerticalBoxSlot_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetSwitcherSlot_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWrapBoxSlot_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UWidgetLayoutLibrary::execRemoveAllWidgets)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UWidgetLayoutLibrary::RemoveAllWidgets(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetLayoutLibrary::execSlotAsWidgetSwitcherSlot)
	{
		P_GET_OBJECT(UWidget,Z_Param_Widget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWidgetSwitcherSlot**)Z_Param__Result=UWidgetLayoutLibrary::SlotAsWidgetSwitcherSlot(Z_Param_Widget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetLayoutLibrary::execSlotAsWrapBoxSlot)
	{
		P_GET_OBJECT(UWidget,Z_Param_Widget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWrapBoxSlot**)Z_Param__Result=UWidgetLayoutLibrary::SlotAsWrapBoxSlot(Z_Param_Widget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetLayoutLibrary::execSlotAsSizeBoxSlot)
	{
		P_GET_OBJECT(UWidget,Z_Param_Widget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USizeBoxSlot**)Z_Param__Result=UWidgetLayoutLibrary::SlotAsSizeBoxSlot(Z_Param_Widget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetLayoutLibrary::execSlotAsScaleBoxSlot)
	{
		P_GET_OBJECT(UWidget,Z_Param_Widget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UScaleBoxSlot**)Z_Param__Result=UWidgetLayoutLibrary::SlotAsScaleBoxSlot(Z_Param_Widget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetLayoutLibrary::execSlotAsSafeBoxSlot)
	{
		P_GET_OBJECT(UWidget,Z_Param_Widget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USafeZoneSlot**)Z_Param__Result=UWidgetLayoutLibrary::SlotAsSafeBoxSlot(Z_Param_Widget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetLayoutLibrary::execSlotAsScrollBoxSlot)
	{
		P_GET_OBJECT(UWidget,Z_Param_Widget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UScrollBoxSlot**)Z_Param__Result=UWidgetLayoutLibrary::SlotAsScrollBoxSlot(Z_Param_Widget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetLayoutLibrary::execSlotAsVerticalBoxSlot)
	{
		P_GET_OBJECT(UWidget,Z_Param_Widget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVerticalBoxSlot**)Z_Param__Result=UWidgetLayoutLibrary::SlotAsVerticalBoxSlot(Z_Param_Widget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetLayoutLibrary::execSlotAsUniformGridSlot)
	{
		P_GET_OBJECT(UWidget,Z_Param_Widget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUniformGridSlot**)Z_Param__Result=UWidgetLayoutLibrary::SlotAsUniformGridSlot(Z_Param_Widget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetLayoutLibrary::execSlotAsOverlaySlot)
	{
		P_GET_OBJECT(UWidget,Z_Param_Widget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOverlaySlot**)Z_Param__Result=UWidgetLayoutLibrary::SlotAsOverlaySlot(Z_Param_Widget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetLayoutLibrary::execSlotAsHorizontalBoxSlot)
	{
		P_GET_OBJECT(UWidget,Z_Param_Widget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UHorizontalBoxSlot**)Z_Param__Result=UWidgetLayoutLibrary::SlotAsHorizontalBoxSlot(Z_Param_Widget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetLayoutLibrary::execSlotAsGridSlot)
	{
		P_GET_OBJECT(UWidget,Z_Param_Widget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGridSlot**)Z_Param__Result=UWidgetLayoutLibrary::SlotAsGridSlot(Z_Param_Widget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetLayoutLibrary::execSlotAsCanvasSlot)
	{
		P_GET_OBJECT(UWidget,Z_Param_Widget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCanvasPanelSlot**)Z_Param__Result=UWidgetLayoutLibrary::SlotAsCanvasSlot(Z_Param_Widget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetLayoutLibrary::execSlotAsBorderSlot)
	{
		P_GET_OBJECT(UWidget,Z_Param_Widget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBorderSlot**)Z_Param__Result=UWidgetLayoutLibrary::SlotAsBorderSlot(Z_Param_Widget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetLayoutLibrary::execGetMousePositionScaledByDPI)
	{
		P_GET_OBJECT(APlayerController,Z_Param_Player);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_LocationX);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_LocationY);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UWidgetLayoutLibrary::GetMousePositionScaledByDPI(Z_Param_Player,Z_Param_Out_LocationX,Z_Param_Out_LocationY);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetLayoutLibrary::execGetMousePositionOnViewport)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=UWidgetLayoutLibrary::GetMousePositionOnViewport(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetLayoutLibrary::execGetMousePositionOnPlatform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=UWidgetLayoutLibrary::GetMousePositionOnPlatform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetLayoutLibrary::execGetPlayerScreenWidgetGeometry)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGeometry*)Z_Param__Result=UWidgetLayoutLibrary::GetPlayerScreenWidgetGeometry(Z_Param_PlayerController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetLayoutLibrary::execGetViewportWidgetGeometry)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGeometry*)Z_Param__Result=UWidgetLayoutLibrary::GetViewportWidgetGeometry(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetLayoutLibrary::execGetViewportSize)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=UWidgetLayoutLibrary::GetViewportSize(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetLayoutLibrary::execGetViewportScale)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UWidgetLayoutLibrary::GetViewportScale(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetLayoutLibrary::execProjectWorldLocationToWidgetPosition)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_STRUCT(FVector,Z_Param_WorldLocation);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_ScreenPosition);
		P_GET_UBOOL(Z_Param_bPlayerViewportRelative);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UWidgetLayoutLibrary::ProjectWorldLocationToWidgetPosition(Z_Param_PlayerController,Z_Param_WorldLocation,Z_Param_Out_ScreenPosition,Z_Param_bPlayerViewportRelative);
		P_NATIVE_END;
	}
	void UWidgetLayoutLibrary::StaticRegisterNativesUWidgetLayoutLibrary()
	{
		UClass* Class = UWidgetLayoutLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMousePositionOnPlatform", &UWidgetLayoutLibrary::execGetMousePositionOnPlatform },
			{ "GetMousePositionOnViewport", &UWidgetLayoutLibrary::execGetMousePositionOnViewport },
			{ "GetMousePositionScaledByDPI", &UWidgetLayoutLibrary::execGetMousePositionScaledByDPI },
			{ "GetPlayerScreenWidgetGeometry", &UWidgetLayoutLibrary::execGetPlayerScreenWidgetGeometry },
			{ "GetViewportScale", &UWidgetLayoutLibrary::execGetViewportScale },
			{ "GetViewportSize", &UWidgetLayoutLibrary::execGetViewportSize },
			{ "GetViewportWidgetGeometry", &UWidgetLayoutLibrary::execGetViewportWidgetGeometry },
			{ "ProjectWorldLocationToWidgetPosition", &UWidgetLayoutLibrary::execProjectWorldLocationToWidgetPosition },
			{ "RemoveAllWidgets", &UWidgetLayoutLibrary::execRemoveAllWidgets },
			{ "SlotAsBorderSlot", &UWidgetLayoutLibrary::execSlotAsBorderSlot },
			{ "SlotAsCanvasSlot", &UWidgetLayoutLibrary::execSlotAsCanvasSlot },
			{ "SlotAsGridSlot", &UWidgetLayoutLibrary::execSlotAsGridSlot },
			{ "SlotAsHorizontalBoxSlot", &UWidgetLayoutLibrary::execSlotAsHorizontalBoxSlot },
			{ "SlotAsOverlaySlot", &UWidgetLayoutLibrary::execSlotAsOverlaySlot },
			{ "SlotAsSafeBoxSlot", &UWidgetLayoutLibrary::execSlotAsSafeBoxSlot },
			{ "SlotAsScaleBoxSlot", &UWidgetLayoutLibrary::execSlotAsScaleBoxSlot },
			{ "SlotAsScrollBoxSlot", &UWidgetLayoutLibrary::execSlotAsScrollBoxSlot },
			{ "SlotAsSizeBoxSlot", &UWidgetLayoutLibrary::execSlotAsSizeBoxSlot },
			{ "SlotAsUniformGridSlot", &UWidgetLayoutLibrary::execSlotAsUniformGridSlot },
			{ "SlotAsVerticalBoxSlot", &UWidgetLayoutLibrary::execSlotAsVerticalBoxSlot },
			{ "SlotAsWidgetSwitcherSlot", &UWidgetLayoutLibrary::execSlotAsWidgetSwitcherSlot },
			{ "SlotAsWrapBoxSlot", &UWidgetLayoutLibrary::execSlotAsWrapBoxSlot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionOnPlatform_Statics
	{
		struct WidgetLayoutLibrary_eventGetMousePositionOnPlatform_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionOnPlatform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventGetMousePositionOnPlatform_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionOnPlatform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionOnPlatform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionOnPlatform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Viewport" },
		{ "Comment", "/**\n\x09 * Gets the platform's mouse cursor position.  This is the 'absolute' desktop location of the mouse.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetLayoutLibrary.h" },
		{ "ToolTip", "Gets the platform's mouse cursor position.  This is the 'absolute' desktop location of the mouse." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionOnPlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetLayoutLibrary, nullptr, "GetMousePositionOnPlatform", nullptr, nullptr, sizeof(WidgetLayoutLibrary_eventGetMousePositionOnPlatform_Parms), Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionOnPlatform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionOnPlatform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionOnPlatform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionOnPlatform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionOnPlatform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionOnPlatform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionOnViewport_Statics
	{
		struct WidgetLayoutLibrary_eventGetMousePositionOnViewport_Parms
		{
			UObject* WorldContextObject;
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionOnViewport_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventGetMousePositionOnViewport_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionOnViewport_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventGetMousePositionOnViewport_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionOnViewport_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionOnViewport_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionOnViewport_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionOnViewport_Statics::Function_MetaDataParams[] = {
		{ "Category", "Viewport" },
		{ "Comment", "/**\n\x09 * Gets the platform's mouse cursor position in the local space of the viewport widget.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetLayoutLibrary.h" },
		{ "ToolTip", "Gets the platform's mouse cursor position in the local space of the viewport widget." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionOnViewport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetLayoutLibrary, nullptr, "GetMousePositionOnViewport", nullptr, nullptr, sizeof(WidgetLayoutLibrary_eventGetMousePositionOnViewport_Parms), Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionOnViewport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionOnViewport_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionOnViewport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionOnViewport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionOnViewport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionOnViewport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionScaledByDPI_Statics
	{
		struct WidgetLayoutLibrary_eventGetMousePositionScaledByDPI_Parms
		{
			APlayerController* Player;
			float LocationX;
			float LocationY;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LocationY;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LocationX;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionScaledByDPI_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WidgetLayoutLibrary_eventGetMousePositionScaledByDPI_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionScaledByDPI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WidgetLayoutLibrary_eventGetMousePositionScaledByDPI_Parms), &Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionScaledByDPI_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionScaledByDPI_Statics::NewProp_LocationY = { "LocationY", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventGetMousePositionScaledByDPI_Parms, LocationY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionScaledByDPI_Statics::NewProp_LocationX = { "LocationX", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventGetMousePositionScaledByDPI_Parms, LocationX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionScaledByDPI_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventGetMousePositionScaledByDPI_Parms, Player), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionScaledByDPI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionScaledByDPI_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionScaledByDPI_Statics::NewProp_LocationY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionScaledByDPI_Statics::NewProp_LocationX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionScaledByDPI_Statics::NewProp_Player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionScaledByDPI_Statics::Function_MetaDataParams[] = {
		{ "Category", "Viewport" },
		{ "Comment", "/**\n\x09 * Gets the mouse position of the player controller, scaled by the DPI.  If you're trying to go from raw mouse screenspace coordinates\n\x09 * to fullscreen widget space, you'll need to transform the mouse into DPI Scaled space.  This function performs that scaling.\n\x09 *\n\x09 * MousePositionScaledByDPI = MousePosition * (1 / ViewportScale).\n\x09 *///UE_DEPRECATED(4.17, \"Use GetMousePositionOnViewport() instead.  Optionally and for more options, you can use GetViewportWidgetGeometry and GetPlayerScreenWidgetGeometry are newly introduced to give you the geometry of the viewport and the player screen for widgets to help convert between spaces.\")\n" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetLayoutLibrary.h" },
		{ "ToolTip", "Gets the mouse position of the player controller, scaled by the DPI.  If you're trying to go from raw mouse screenspace coordinates\nto fullscreen widget space, you'll need to transform the mouse into DPI Scaled space.  This function performs that scaling.\n\nMousePositionScaledByDPI = MousePosition * (1 / ViewportScale).\n        //UE_DEPRECATED(4.17, \"Use GetMousePositionOnViewport() instead.  Optionally and for more options, you can use GetViewportWidgetGeometry and GetPlayerScreenWidgetGeometry are newly introduced to give you the geometry of the viewport and the player screen for widgets to help convert between spaces.\")" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionScaledByDPI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetLayoutLibrary, nullptr, "GetMousePositionScaledByDPI", nullptr, nullptr, sizeof(WidgetLayoutLibrary_eventGetMousePositionScaledByDPI_Parms), Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionScaledByDPI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionScaledByDPI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionScaledByDPI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionScaledByDPI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionScaledByDPI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionScaledByDPI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetLayoutLibrary_GetPlayerScreenWidgetGeometry_Statics
	{
		struct WidgetLayoutLibrary_eventGetPlayerScreenWidgetGeometry_Parms
		{
			APlayerController* PlayerController;
			FGeometry ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_GetPlayerScreenWidgetGeometry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventGetPlayerScreenWidgetGeometry_Parms, ReturnValue), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_GetPlayerScreenWidgetGeometry_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventGetPlayerScreenWidgetGeometry_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetLayoutLibrary_GetPlayerScreenWidgetGeometry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_GetPlayerScreenWidgetGeometry_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_GetPlayerScreenWidgetGeometry_Statics::NewProp_PlayerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_GetPlayerScreenWidgetGeometry_Statics::Function_MetaDataParams[] = {
		{ "Category", "Viewport" },
		{ "Comment", "/**\n\x09 * Gets the geometry of the widget holding all widgets added to the \"Player Screen\". You\n\x09 * can use this geometry to convert between absolute and local space of widgets held on this\n\x09 * widget.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetLayoutLibrary.h" },
		{ "ToolTip", "Gets the geometry of the widget holding all widgets added to the \"Player Screen\". You\ncan use this geometry to convert between absolute and local space of widgets held on this\nwidget." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetLayoutLibrary_GetPlayerScreenWidgetGeometry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetLayoutLibrary, nullptr, "GetPlayerScreenWidgetGeometry", nullptr, nullptr, sizeof(WidgetLayoutLibrary_eventGetPlayerScreenWidgetGeometry_Parms), Z_Construct_UFunction_UWidgetLayoutLibrary_GetPlayerScreenWidgetGeometry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_GetPlayerScreenWidgetGeometry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_GetPlayerScreenWidgetGeometry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_GetPlayerScreenWidgetGeometry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_GetPlayerScreenWidgetGeometry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetLayoutLibrary_GetPlayerScreenWidgetGeometry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportScale_Statics
	{
		struct WidgetLayoutLibrary_eventGetViewportScale_Parms
		{
			UObject* WorldContextObject;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventGetViewportScale_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportScale_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventGetViewportScale_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportScale_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportScale_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Viewport" },
		{ "Comment", "/**\n\x09 * Gets the current DPI Scale being applied to the viewport and all the Widgets.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetLayoutLibrary.h" },
		{ "ToolTip", "Gets the current DPI Scale being applied to the viewport and all the Widgets." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetLayoutLibrary, nullptr, "GetViewportScale", nullptr, nullptr, sizeof(WidgetLayoutLibrary_eventGetViewportScale_Parms), Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportSize_Statics
	{
		struct WidgetLayoutLibrary_eventGetViewportSize_Parms
		{
			UObject* WorldContextObject;
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventGetViewportSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportSize_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventGetViewportSize_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportSize_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportSize_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Viewport" },
		{ "Comment", "/**\n\x09 * Gets the size of the game viewport.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetLayoutLibrary.h" },
		{ "ToolTip", "Gets the size of the game viewport." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetLayoutLibrary, nullptr, "GetViewportSize", nullptr, nullptr, sizeof(WidgetLayoutLibrary_eventGetViewportSize_Parms), Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportWidgetGeometry_Statics
	{
		struct WidgetLayoutLibrary_eventGetViewportWidgetGeometry_Parms
		{
			UObject* WorldContextObject;
			FGeometry ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportWidgetGeometry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventGetViewportWidgetGeometry_Parms, ReturnValue), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportWidgetGeometry_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventGetViewportWidgetGeometry_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportWidgetGeometry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportWidgetGeometry_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportWidgetGeometry_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportWidgetGeometry_Statics::Function_MetaDataParams[] = {
		{ "Category", "Viewport" },
		{ "Comment", "/**\n\x09 * Gets the geometry of the widget holding all widgets added to the \"Viewport\".  You\n\x09 * can use this geometry to convert between absolute and local space of widgets held on this\n\x09 * widget.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetLayoutLibrary.h" },
		{ "ToolTip", "Gets the geometry of the widget holding all widgets added to the \"Viewport\".  You\ncan use this geometry to convert between absolute and local space of widgets held on this\nwidget." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportWidgetGeometry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetLayoutLibrary, nullptr, "GetViewportWidgetGeometry", nullptr, nullptr, sizeof(WidgetLayoutLibrary_eventGetViewportWidgetGeometry_Parms), Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportWidgetGeometry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportWidgetGeometry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportWidgetGeometry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportWidgetGeometry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportWidgetGeometry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportWidgetGeometry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Statics
	{
		struct WidgetLayoutLibrary_eventProjectWorldLocationToWidgetPosition_Parms
		{
			APlayerController* PlayerController;
			FVector WorldLocation;
			FVector2D ScreenPosition;
			bool bPlayerViewportRelative;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bPlayerViewportRelative_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlayerViewportRelative;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScreenPosition;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WidgetLayoutLibrary_eventProjectWorldLocationToWidgetPosition_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WidgetLayoutLibrary_eventProjectWorldLocationToWidgetPosition_Parms), &Z_Construct_UFunction_UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Statics::NewProp_bPlayerViewportRelative_SetBit(void* Obj)
	{
		((WidgetLayoutLibrary_eventProjectWorldLocationToWidgetPosition_Parms*)Obj)->bPlayerViewportRelative = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Statics::NewProp_bPlayerViewportRelative = { "bPlayerViewportRelative", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WidgetLayoutLibrary_eventProjectWorldLocationToWidgetPosition_Parms), &Z_Construct_UFunction_UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Statics::NewProp_bPlayerViewportRelative_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Statics::NewProp_ScreenPosition = { "ScreenPosition", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventProjectWorldLocationToWidgetPosition_Parms, ScreenPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventProjectWorldLocationToWidgetPosition_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventProjectWorldLocationToWidgetPosition_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Statics::NewProp_bPlayerViewportRelative,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Statics::NewProp_ScreenPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Statics::NewProp_WorldLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Statics::NewProp_PlayerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Viewport" },
		{ "Comment", "/**\n\x09 * Gets the projected world to screen position for a player, then converts it into a widget\n\x09 * position, which takes into account any quality scaling.\n\x09 * @param PlayerController The player controller to project the position in the world to their screen.\n\x09 * @param WorldLocation The world location to project from.\n\x09 * @param ScreenPosition The position in the viewport with quality scale removed and DPI scale remove.\n\x09 * @param bPlayerViewportRelative Should this be relative to the player viewport subregion (useful when using player attached widgets in split screen or when aspect-ratio constrained)\n\x09 * @return true if the position projects onto the screen.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetLayoutLibrary.h" },
		{ "ToolTip", "Gets the projected world to screen position for a player, then converts it into a widget\nposition, which takes into account any quality scaling.\n@param PlayerController The player controller to project the position in the world to their screen.\n@param WorldLocation The world location to project from.\n@param ScreenPosition The position in the viewport with quality scale removed and DPI scale remove.\n@param bPlayerViewportRelative Should this be relative to the player viewport subregion (useful when using player attached widgets in split screen or when aspect-ratio constrained)\n@return true if the position projects onto the screen." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetLayoutLibrary, nullptr, "ProjectWorldLocationToWidgetPosition", nullptr, nullptr, sizeof(WidgetLayoutLibrary_eventProjectWorldLocationToWidgetPosition_Parms), Z_Construct_UFunction_UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetLayoutLibrary_RemoveAllWidgets_Statics
	{
		struct WidgetLayoutLibrary_eventRemoveAllWidgets_Parms
		{
			UObject* WorldContextObject;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_RemoveAllWidgets_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventRemoveAllWidgets_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetLayoutLibrary_RemoveAllWidgets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_RemoveAllWidgets_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_RemoveAllWidgets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Viewport" },
		{ "Comment", "/**\n\x09 * Removes all widgets from the viewport.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetLayoutLibrary.h" },
		{ "ToolTip", "Removes all widgets from the viewport." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetLayoutLibrary_RemoveAllWidgets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetLayoutLibrary, nullptr, "RemoveAllWidgets", nullptr, nullptr, sizeof(WidgetLayoutLibrary_eventRemoveAllWidgets_Parms), Z_Construct_UFunction_UWidgetLayoutLibrary_RemoveAllWidgets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_RemoveAllWidgets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_RemoveAllWidgets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_RemoveAllWidgets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_RemoveAllWidgets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetLayoutLibrary_RemoveAllWidgets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsBorderSlot_Statics
	{
		struct WidgetLayoutLibrary_eventSlotAsBorderSlot_Parms
		{
			UWidget* Widget;
			UBorderSlot* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsBorderSlot_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsBorderSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventSlotAsBorderSlot_Parms, ReturnValue), Z_Construct_UClass_UBorderSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsBorderSlot_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsBorderSlot_Statics::NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsBorderSlot_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsBorderSlot_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventSlotAsBorderSlot_Parms, Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsBorderSlot_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsBorderSlot_Statics::NewProp_Widget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsBorderSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsBorderSlot_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsBorderSlot_Statics::NewProp_Widget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsBorderSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Slot" },
		{ "Comment", "/**\n\x09* Gets the slot object on the child widget as a Border Slot, allowing you to manipulate layout information.\n\x09* @param Widget The child widget of a border panel.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetLayoutLibrary.h" },
		{ "ToolTip", "Gets the slot object on the child widget as a Border Slot, allowing you to manipulate layout information.\n@param Widget The child widget of a border panel." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsBorderSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetLayoutLibrary, nullptr, "SlotAsBorderSlot", nullptr, nullptr, sizeof(WidgetLayoutLibrary_eventSlotAsBorderSlot_Parms), Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsBorderSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsBorderSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsBorderSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsBorderSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsBorderSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsBorderSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsCanvasSlot_Statics
	{
		struct WidgetLayoutLibrary_eventSlotAsCanvasSlot_Parms
		{
			UWidget* Widget;
			UCanvasPanelSlot* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsCanvasSlot_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsCanvasSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventSlotAsCanvasSlot_Parms, ReturnValue), Z_Construct_UClass_UCanvasPanelSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsCanvasSlot_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsCanvasSlot_Statics::NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsCanvasSlot_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsCanvasSlot_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventSlotAsCanvasSlot_Parms, Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsCanvasSlot_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsCanvasSlot_Statics::NewProp_Widget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsCanvasSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsCanvasSlot_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsCanvasSlot_Statics::NewProp_Widget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsCanvasSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Slot" },
		{ "Comment", "/**\n\x09 * Gets the slot object on the child widget as a Canvas Slot, allowing you to manipulate layout information.\n\x09 * @param Widget The child widget of a canvas panel.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetLayoutLibrary.h" },
		{ "ToolTip", "Gets the slot object on the child widget as a Canvas Slot, allowing you to manipulate layout information.\n@param Widget The child widget of a canvas panel." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsCanvasSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetLayoutLibrary, nullptr, "SlotAsCanvasSlot", nullptr, nullptr, sizeof(WidgetLayoutLibrary_eventSlotAsCanvasSlot_Parms), Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsCanvasSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsCanvasSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsCanvasSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsCanvasSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsCanvasSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsCanvasSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsGridSlot_Statics
	{
		struct WidgetLayoutLibrary_eventSlotAsGridSlot_Parms
		{
			UWidget* Widget;
			UGridSlot* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsGridSlot_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsGridSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventSlotAsGridSlot_Parms, ReturnValue), Z_Construct_UClass_UGridSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsGridSlot_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsGridSlot_Statics::NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsGridSlot_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsGridSlot_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventSlotAsGridSlot_Parms, Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsGridSlot_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsGridSlot_Statics::NewProp_Widget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsGridSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsGridSlot_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsGridSlot_Statics::NewProp_Widget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsGridSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Slot" },
		{ "Comment", "/**\n\x09 * Gets the slot object on the child widget as a Grid Slot, allowing you to manipulate layout information.\n\x09 * @param Widget The child widget of a grid panel.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetLayoutLibrary.h" },
		{ "ToolTip", "Gets the slot object on the child widget as a Grid Slot, allowing you to manipulate layout information.\n@param Widget The child widget of a grid panel." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsGridSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetLayoutLibrary, nullptr, "SlotAsGridSlot", nullptr, nullptr, sizeof(WidgetLayoutLibrary_eventSlotAsGridSlot_Parms), Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsGridSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsGridSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsGridSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsGridSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsGridSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsGridSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot_Statics
	{
		struct WidgetLayoutLibrary_eventSlotAsHorizontalBoxSlot_Parms
		{
			UWidget* Widget;
			UHorizontalBoxSlot* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventSlotAsHorizontalBoxSlot_Parms, ReturnValue), Z_Construct_UClass_UHorizontalBoxSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot_Statics::NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventSlotAsHorizontalBoxSlot_Parms, Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot_Statics::NewProp_Widget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot_Statics::NewProp_Widget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Slot" },
		{ "Comment", "/**\n\x09 * Gets the slot object on the child widget as a Horizontal Box Slot, allowing you to manipulate its information.\n\x09 * @param Widget The child widget of a Horizontal Box.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetLayoutLibrary.h" },
		{ "ToolTip", "Gets the slot object on the child widget as a Horizontal Box Slot, allowing you to manipulate its information.\n@param Widget The child widget of a Horizontal Box." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetLayoutLibrary, nullptr, "SlotAsHorizontalBoxSlot", nullptr, nullptr, sizeof(WidgetLayoutLibrary_eventSlotAsHorizontalBoxSlot_Parms), Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsOverlaySlot_Statics
	{
		struct WidgetLayoutLibrary_eventSlotAsOverlaySlot_Parms
		{
			UWidget* Widget;
			UOverlaySlot* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsOverlaySlot_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsOverlaySlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventSlotAsOverlaySlot_Parms, ReturnValue), Z_Construct_UClass_UOverlaySlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsOverlaySlot_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsOverlaySlot_Statics::NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsOverlaySlot_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsOverlaySlot_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventSlotAsOverlaySlot_Parms, Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsOverlaySlot_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsOverlaySlot_Statics::NewProp_Widget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsOverlaySlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsOverlaySlot_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsOverlaySlot_Statics::NewProp_Widget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsOverlaySlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Slot" },
		{ "Comment", "/**\n\x09 * Gets the slot object on the child widget as a Overlay Slot, allowing you to manipulate layout information.\n\x09 * @param Widget The child widget of a overlay panel.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetLayoutLibrary.h" },
		{ "ToolTip", "Gets the slot object on the child widget as a Overlay Slot, allowing you to manipulate layout information.\n@param Widget The child widget of a overlay panel." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsOverlaySlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetLayoutLibrary, nullptr, "SlotAsOverlaySlot", nullptr, nullptr, sizeof(WidgetLayoutLibrary_eventSlotAsOverlaySlot_Parms), Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsOverlaySlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsOverlaySlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsOverlaySlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsOverlaySlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsOverlaySlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsOverlaySlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsSafeBoxSlot_Statics
	{
		struct WidgetLayoutLibrary_eventSlotAsSafeBoxSlot_Parms
		{
			UWidget* Widget;
			USafeZoneSlot* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsSafeBoxSlot_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsSafeBoxSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventSlotAsSafeBoxSlot_Parms, ReturnValue), Z_Construct_UClass_USafeZoneSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsSafeBoxSlot_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsSafeBoxSlot_Statics::NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsSafeBoxSlot_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsSafeBoxSlot_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventSlotAsSafeBoxSlot_Parms, Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsSafeBoxSlot_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsSafeBoxSlot_Statics::NewProp_Widget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsSafeBoxSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsSafeBoxSlot_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsSafeBoxSlot_Statics::NewProp_Widget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsSafeBoxSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Slot" },
		{ "Comment", "/**\n\x09 * Gets the slot object on the child widget as a Safe Box Slot, allowing you to manipulate its information.\n\x09 * @param Widget The child widget of a Safe Box.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetLayoutLibrary.h" },
		{ "ToolTip", "Gets the slot object on the child widget as a Safe Box Slot, allowing you to manipulate its information.\n@param Widget The child widget of a Safe Box." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsSafeBoxSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetLayoutLibrary, nullptr, "SlotAsSafeBoxSlot", nullptr, nullptr, sizeof(WidgetLayoutLibrary_eventSlotAsSafeBoxSlot_Parms), Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsSafeBoxSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsSafeBoxSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsSafeBoxSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsSafeBoxSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsSafeBoxSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsSafeBoxSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsScaleBoxSlot_Statics
	{
		struct WidgetLayoutLibrary_eventSlotAsScaleBoxSlot_Parms
		{
			UWidget* Widget;
			UScaleBoxSlot* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsScaleBoxSlot_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsScaleBoxSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventSlotAsScaleBoxSlot_Parms, ReturnValue), Z_Construct_UClass_UScaleBoxSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsScaleBoxSlot_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsScaleBoxSlot_Statics::NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsScaleBoxSlot_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsScaleBoxSlot_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventSlotAsScaleBoxSlot_Parms, Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsScaleBoxSlot_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsScaleBoxSlot_Statics::NewProp_Widget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsScaleBoxSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsScaleBoxSlot_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsScaleBoxSlot_Statics::NewProp_Widget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsScaleBoxSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Slot" },
		{ "Comment", "/**\n\x09 * Gets the slot object on the child widget as a Scale Box Slot, allowing you to manipulate its information.\n\x09 * @param Widget The child widget of a Scale Box.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetLayoutLibrary.h" },
		{ "ToolTip", "Gets the slot object on the child widget as a Scale Box Slot, allowing you to manipulate its information.\n@param Widget The child widget of a Scale Box." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsScaleBoxSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetLayoutLibrary, nullptr, "SlotAsScaleBoxSlot", nullptr, nullptr, sizeof(WidgetLayoutLibrary_eventSlotAsScaleBoxSlot_Parms), Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsScaleBoxSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsScaleBoxSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsScaleBoxSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsScaleBoxSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsScaleBoxSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsScaleBoxSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsScrollBoxSlot_Statics
	{
		struct WidgetLayoutLibrary_eventSlotAsScrollBoxSlot_Parms
		{
			UWidget* Widget;
			UScrollBoxSlot* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsScrollBoxSlot_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsScrollBoxSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventSlotAsScrollBoxSlot_Parms, ReturnValue), Z_Construct_UClass_UScrollBoxSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsScrollBoxSlot_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsScrollBoxSlot_Statics::NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsScrollBoxSlot_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsScrollBoxSlot_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventSlotAsScrollBoxSlot_Parms, Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsScrollBoxSlot_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsScrollBoxSlot_Statics::NewProp_Widget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsScrollBoxSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsScrollBoxSlot_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsScrollBoxSlot_Statics::NewProp_Widget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsScrollBoxSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Slot" },
		{ "Comment", "/**\n\x09* Gets the slot object on the child widget as a Scroll Box Slot, allowing you to manipulate its information.\n\x09* @param Widget The child widget of a Scroll Box.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetLayoutLibrary.h" },
		{ "ToolTip", "Gets the slot object on the child widget as a Scroll Box Slot, allowing you to manipulate its information.\n@param Widget The child widget of a Scroll Box." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsScrollBoxSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetLayoutLibrary, nullptr, "SlotAsScrollBoxSlot", nullptr, nullptr, sizeof(WidgetLayoutLibrary_eventSlotAsScrollBoxSlot_Parms), Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsScrollBoxSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsScrollBoxSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsScrollBoxSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsScrollBoxSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsScrollBoxSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsScrollBoxSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsSizeBoxSlot_Statics
	{
		struct WidgetLayoutLibrary_eventSlotAsSizeBoxSlot_Parms
		{
			UWidget* Widget;
			USizeBoxSlot* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsSizeBoxSlot_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsSizeBoxSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventSlotAsSizeBoxSlot_Parms, ReturnValue), Z_Construct_UClass_USizeBoxSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsSizeBoxSlot_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsSizeBoxSlot_Statics::NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsSizeBoxSlot_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsSizeBoxSlot_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventSlotAsSizeBoxSlot_Parms, Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsSizeBoxSlot_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsSizeBoxSlot_Statics::NewProp_Widget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsSizeBoxSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsSizeBoxSlot_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsSizeBoxSlot_Statics::NewProp_Widget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsSizeBoxSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Slot" },
		{ "Comment", "/**\n\x09 * Gets the slot object on the child widget as a Size Box Slot, allowing you to manipulate its information.\n\x09 * @param Widget The child widget of a Size Box.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetLayoutLibrary.h" },
		{ "ToolTip", "Gets the slot object on the child widget as a Size Box Slot, allowing you to manipulate its information.\n@param Widget The child widget of a Size Box." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsSizeBoxSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetLayoutLibrary, nullptr, "SlotAsSizeBoxSlot", nullptr, nullptr, sizeof(WidgetLayoutLibrary_eventSlotAsSizeBoxSlot_Parms), Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsSizeBoxSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsSizeBoxSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsSizeBoxSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsSizeBoxSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsSizeBoxSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsSizeBoxSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsUniformGridSlot_Statics
	{
		struct WidgetLayoutLibrary_eventSlotAsUniformGridSlot_Parms
		{
			UWidget* Widget;
			UUniformGridSlot* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsUniformGridSlot_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsUniformGridSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventSlotAsUniformGridSlot_Parms, ReturnValue), Z_Construct_UClass_UUniformGridSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsUniformGridSlot_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsUniformGridSlot_Statics::NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsUniformGridSlot_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsUniformGridSlot_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventSlotAsUniformGridSlot_Parms, Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsUniformGridSlot_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsUniformGridSlot_Statics::NewProp_Widget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsUniformGridSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsUniformGridSlot_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsUniformGridSlot_Statics::NewProp_Widget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsUniformGridSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Slot" },
		{ "Comment", "/**\n\x09 * Gets the slot object on the child widget as a Uniform Grid Slot, allowing you to manipulate layout information.\n\x09 * @param Widget The child widget of a uniform grid panel.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetLayoutLibrary.h" },
		{ "ToolTip", "Gets the slot object on the child widget as a Uniform Grid Slot, allowing you to manipulate layout information.\n@param Widget The child widget of a uniform grid panel." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsUniformGridSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetLayoutLibrary, nullptr, "SlotAsUniformGridSlot", nullptr, nullptr, sizeof(WidgetLayoutLibrary_eventSlotAsUniformGridSlot_Parms), Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsUniformGridSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsUniformGridSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsUniformGridSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsUniformGridSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsUniformGridSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsUniformGridSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsVerticalBoxSlot_Statics
	{
		struct WidgetLayoutLibrary_eventSlotAsVerticalBoxSlot_Parms
		{
			UWidget* Widget;
			UVerticalBoxSlot* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsVerticalBoxSlot_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsVerticalBoxSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventSlotAsVerticalBoxSlot_Parms, ReturnValue), Z_Construct_UClass_UVerticalBoxSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsVerticalBoxSlot_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsVerticalBoxSlot_Statics::NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsVerticalBoxSlot_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsVerticalBoxSlot_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventSlotAsVerticalBoxSlot_Parms, Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsVerticalBoxSlot_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsVerticalBoxSlot_Statics::NewProp_Widget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsVerticalBoxSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsVerticalBoxSlot_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsVerticalBoxSlot_Statics::NewProp_Widget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsVerticalBoxSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Slot" },
		{ "Comment", "/**\n\x09 * Gets the slot object on the child widget as a Vertical Box Slot, allowing you to manipulate its information.\n\x09 * @param Widget The child widget of a Vertical Box.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetLayoutLibrary.h" },
		{ "ToolTip", "Gets the slot object on the child widget as a Vertical Box Slot, allowing you to manipulate its information.\n@param Widget The child widget of a Vertical Box." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsVerticalBoxSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetLayoutLibrary, nullptr, "SlotAsVerticalBoxSlot", nullptr, nullptr, sizeof(WidgetLayoutLibrary_eventSlotAsVerticalBoxSlot_Parms), Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsVerticalBoxSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsVerticalBoxSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsVerticalBoxSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsVerticalBoxSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsVerticalBoxSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsVerticalBoxSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsWidgetSwitcherSlot_Statics
	{
		struct WidgetLayoutLibrary_eventSlotAsWidgetSwitcherSlot_Parms
		{
			UWidget* Widget;
			UWidgetSwitcherSlot* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsWidgetSwitcherSlot_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsWidgetSwitcherSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventSlotAsWidgetSwitcherSlot_Parms, ReturnValue), Z_Construct_UClass_UWidgetSwitcherSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsWidgetSwitcherSlot_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsWidgetSwitcherSlot_Statics::NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsWidgetSwitcherSlot_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsWidgetSwitcherSlot_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventSlotAsWidgetSwitcherSlot_Parms, Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsWidgetSwitcherSlot_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsWidgetSwitcherSlot_Statics::NewProp_Widget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsWidgetSwitcherSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsWidgetSwitcherSlot_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsWidgetSwitcherSlot_Statics::NewProp_Widget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsWidgetSwitcherSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Slot" },
		{ "Comment", "/**\n\x09 * Gets the slot object on the child widget as a Widget Switcher Slot, allowing you to manipulate its information.\n\x09 * @param Widget The child widget of a Widget Switcher Slot.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetLayoutLibrary.h" },
		{ "ToolTip", "Gets the slot object on the child widget as a Widget Switcher Slot, allowing you to manipulate its information.\n@param Widget The child widget of a Widget Switcher Slot." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsWidgetSwitcherSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetLayoutLibrary, nullptr, "SlotAsWidgetSwitcherSlot", nullptr, nullptr, sizeof(WidgetLayoutLibrary_eventSlotAsWidgetSwitcherSlot_Parms), Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsWidgetSwitcherSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsWidgetSwitcherSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsWidgetSwitcherSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsWidgetSwitcherSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsWidgetSwitcherSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsWidgetSwitcherSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsWrapBoxSlot_Statics
	{
		struct WidgetLayoutLibrary_eventSlotAsWrapBoxSlot_Parms
		{
			UWidget* Widget;
			UWrapBoxSlot* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsWrapBoxSlot_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsWrapBoxSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventSlotAsWrapBoxSlot_Parms, ReturnValue), Z_Construct_UClass_UWrapBoxSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsWrapBoxSlot_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsWrapBoxSlot_Statics::NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsWrapBoxSlot_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsWrapBoxSlot_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventSlotAsWrapBoxSlot_Parms, Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsWrapBoxSlot_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsWrapBoxSlot_Statics::NewProp_Widget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsWrapBoxSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsWrapBoxSlot_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsWrapBoxSlot_Statics::NewProp_Widget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsWrapBoxSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Slot" },
		{ "Comment", "/**\n\x09 * Gets the slot object on the child widget as a Wrap Box Slot, allowing you to manipulate its information.\n\x09 * @param Widget The child widget of a Wrap Box.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetLayoutLibrary.h" },
		{ "ToolTip", "Gets the slot object on the child widget as a Wrap Box Slot, allowing you to manipulate its information.\n@param Widget The child widget of a Wrap Box." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsWrapBoxSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetLayoutLibrary, nullptr, "SlotAsWrapBoxSlot", nullptr, nullptr, sizeof(WidgetLayoutLibrary_eventSlotAsWrapBoxSlot_Parms), Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsWrapBoxSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsWrapBoxSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsWrapBoxSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsWrapBoxSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsWrapBoxSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsWrapBoxSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWidgetLayoutLibrary_NoRegister()
	{
		return UWidgetLayoutLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UWidgetLayoutLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidgetLayoutLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWidgetLayoutLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionOnPlatform, "GetMousePositionOnPlatform" }, // 3861825686
		{ &Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionOnViewport, "GetMousePositionOnViewport" }, // 2572521993
		{ &Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionScaledByDPI, "GetMousePositionScaledByDPI" }, // 2293451479
		{ &Z_Construct_UFunction_UWidgetLayoutLibrary_GetPlayerScreenWidgetGeometry, "GetPlayerScreenWidgetGeometry" }, // 666600485
		{ &Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportScale, "GetViewportScale" }, // 1372193655
		{ &Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportSize, "GetViewportSize" }, // 938175894
		{ &Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportWidgetGeometry, "GetViewportWidgetGeometry" }, // 4002922936
		{ &Z_Construct_UFunction_UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition, "ProjectWorldLocationToWidgetPosition" }, // 38611321
		{ &Z_Construct_UFunction_UWidgetLayoutLibrary_RemoveAllWidgets, "RemoveAllWidgets" }, // 1132248113
		{ &Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsBorderSlot, "SlotAsBorderSlot" }, // 1517805773
		{ &Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsCanvasSlot, "SlotAsCanvasSlot" }, // 1213485709
		{ &Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsGridSlot, "SlotAsGridSlot" }, // 2412931264
		{ &Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot, "SlotAsHorizontalBoxSlot" }, // 1479405625
		{ &Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsOverlaySlot, "SlotAsOverlaySlot" }, // 3179279188
		{ &Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsSafeBoxSlot, "SlotAsSafeBoxSlot" }, // 4183675297
		{ &Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsScaleBoxSlot, "SlotAsScaleBoxSlot" }, // 2263848517
		{ &Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsScrollBoxSlot, "SlotAsScrollBoxSlot" }, // 350928970
		{ &Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsSizeBoxSlot, "SlotAsSizeBoxSlot" }, // 1537324016
		{ &Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsUniformGridSlot, "SlotAsUniformGridSlot" }, // 103341020
		{ &Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsVerticalBoxSlot, "SlotAsVerticalBoxSlot" }, // 3486917036
		{ &Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsWidgetSwitcherSlot, "SlotAsWidgetSwitcherSlot" }, // 3421290569
		{ &Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsWrapBoxSlot, "SlotAsWrapBoxSlot" }, // 1012052357
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetLayoutLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Blueprint/WidgetLayoutLibrary.h" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetLayoutLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidgetLayoutLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetLayoutLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWidgetLayoutLibrary_Statics::ClassParams = {
		&UWidgetLayoutLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWidgetLayoutLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetLayoutLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidgetLayoutLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWidgetLayoutLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWidgetLayoutLibrary, 2279665719);
	template<> UMG_API UClass* StaticClass<UWidgetLayoutLibrary>()
	{
		return UWidgetLayoutLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWidgetLayoutLibrary(Z_Construct_UClass_UWidgetLayoutLibrary, &UWidgetLayoutLibrary::StaticClass, TEXT("/Script/UMG"), TEXT("UWidgetLayoutLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetLayoutLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
