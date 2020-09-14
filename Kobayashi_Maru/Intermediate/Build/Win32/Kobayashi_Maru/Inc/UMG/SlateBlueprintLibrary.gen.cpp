// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Blueprint/SlateBlueprintLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlateBlueprintLibrary() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_USlateBlueprintLibrary_NoRegister();
	UMG_API UClass* Z_Construct_UClass_USlateBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_UMG();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometry();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
// End Cross Module References
	DEFINE_FUNCTION(USlateBlueprintLibrary::execScreenToViewport)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FVector2D,Z_Param_ScreenPosition);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_ViewportPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		USlateBlueprintLibrary::ScreenToViewport(Z_Param_WorldContextObject,Z_Param_ScreenPosition,Z_Param_Out_ViewportPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USlateBlueprintLibrary::execScreenToWidgetAbsolute)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FVector2D,Z_Param_ScreenPosition);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_AbsoluteCoordinate);
		P_GET_UBOOL(Z_Param_bIncludeWindowPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		USlateBlueprintLibrary::ScreenToWidgetAbsolute(Z_Param_WorldContextObject,Z_Param_ScreenPosition,Z_Param_Out_AbsoluteCoordinate,Z_Param_bIncludeWindowPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USlateBlueprintLibrary::execScreenToWidgetLocal)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FGeometry,Z_Param_Out_Geometry);
		P_GET_STRUCT(FVector2D,Z_Param_ScreenPosition);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_LocalCoordinate);
		P_GET_UBOOL(Z_Param_bIncludeWindowPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		USlateBlueprintLibrary::ScreenToWidgetLocal(Z_Param_WorldContextObject,Z_Param_Out_Geometry,Z_Param_ScreenPosition,Z_Param_Out_LocalCoordinate,Z_Param_bIncludeWindowPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USlateBlueprintLibrary::execAbsoluteToViewport)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FVector2D,Z_Param_AbsoluteDesktopCoordinate);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_PixelPosition);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_ViewportPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		USlateBlueprintLibrary::AbsoluteToViewport(Z_Param_WorldContextObject,Z_Param_AbsoluteDesktopCoordinate,Z_Param_Out_PixelPosition,Z_Param_Out_ViewportPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USlateBlueprintLibrary::execLocalToViewport)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FGeometry,Z_Param_Out_Geometry);
		P_GET_STRUCT(FVector2D,Z_Param_LocalCoordinate);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_PixelPosition);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_ViewportPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		USlateBlueprintLibrary::LocalToViewport(Z_Param_WorldContextObject,Z_Param_Out_Geometry,Z_Param_LocalCoordinate,Z_Param_Out_PixelPosition,Z_Param_Out_ViewportPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USlateBlueprintLibrary::execEqualEqual_SlateBrush)
	{
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_A);
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USlateBlueprintLibrary::EqualEqual_SlateBrush(Z_Param_Out_A,Z_Param_Out_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USlateBlueprintLibrary::execTransformVectorLocalToAbsolute)
	{
		P_GET_STRUCT_REF(FGeometry,Z_Param_Out_Geometry);
		P_GET_STRUCT(FVector2D,Z_Param_LocalVector);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=USlateBlueprintLibrary::TransformVectorLocalToAbsolute(Z_Param_Out_Geometry,Z_Param_LocalVector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USlateBlueprintLibrary::execTransformVectorAbsoluteToLocal)
	{
		P_GET_STRUCT_REF(FGeometry,Z_Param_Out_Geometry);
		P_GET_STRUCT(FVector2D,Z_Param_AbsoluteVector);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=USlateBlueprintLibrary::TransformVectorAbsoluteToLocal(Z_Param_Out_Geometry,Z_Param_AbsoluteVector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USlateBlueprintLibrary::execTransformScalarLocalToAbsolute)
	{
		P_GET_STRUCT_REF(FGeometry,Z_Param_Out_Geometry);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LocalScalar);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USlateBlueprintLibrary::TransformScalarLocalToAbsolute(Z_Param_Out_Geometry,Z_Param_LocalScalar);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USlateBlueprintLibrary::execTransformScalarAbsoluteToLocal)
	{
		P_GET_STRUCT_REF(FGeometry,Z_Param_Out_Geometry);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AbsoluteScalar);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USlateBlueprintLibrary::TransformScalarAbsoluteToLocal(Z_Param_Out_Geometry,Z_Param_AbsoluteScalar);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USlateBlueprintLibrary::execGetAbsoluteSize)
	{
		P_GET_STRUCT_REF(FGeometry,Z_Param_Out_Geometry);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=USlateBlueprintLibrary::GetAbsoluteSize(Z_Param_Out_Geometry);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USlateBlueprintLibrary::execGetLocalSize)
	{
		P_GET_STRUCT_REF(FGeometry,Z_Param_Out_Geometry);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=USlateBlueprintLibrary::GetLocalSize(Z_Param_Out_Geometry);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USlateBlueprintLibrary::execGetLocalTopLeft)
	{
		P_GET_STRUCT_REF(FGeometry,Z_Param_Out_Geometry);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=USlateBlueprintLibrary::GetLocalTopLeft(Z_Param_Out_Geometry);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USlateBlueprintLibrary::execLocalToAbsolute)
	{
		P_GET_STRUCT_REF(FGeometry,Z_Param_Out_Geometry);
		P_GET_STRUCT(FVector2D,Z_Param_LocalCoordinate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=USlateBlueprintLibrary::LocalToAbsolute(Z_Param_Out_Geometry,Z_Param_LocalCoordinate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USlateBlueprintLibrary::execAbsoluteToLocal)
	{
		P_GET_STRUCT_REF(FGeometry,Z_Param_Out_Geometry);
		P_GET_STRUCT(FVector2D,Z_Param_AbsoluteCoordinate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=USlateBlueprintLibrary::AbsoluteToLocal(Z_Param_Out_Geometry,Z_Param_AbsoluteCoordinate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USlateBlueprintLibrary::execIsUnderLocation)
	{
		P_GET_STRUCT_REF(FGeometry,Z_Param_Out_Geometry);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_AbsoluteCoordinate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USlateBlueprintLibrary::IsUnderLocation(Z_Param_Out_Geometry,Z_Param_Out_AbsoluteCoordinate);
		P_NATIVE_END;
	}
	void USlateBlueprintLibrary::StaticRegisterNativesUSlateBlueprintLibrary()
	{
		UClass* Class = USlateBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AbsoluteToLocal", &USlateBlueprintLibrary::execAbsoluteToLocal },
			{ "AbsoluteToViewport", &USlateBlueprintLibrary::execAbsoluteToViewport },
			{ "EqualEqual_SlateBrush", &USlateBlueprintLibrary::execEqualEqual_SlateBrush },
			{ "GetAbsoluteSize", &USlateBlueprintLibrary::execGetAbsoluteSize },
			{ "GetLocalSize", &USlateBlueprintLibrary::execGetLocalSize },
			{ "GetLocalTopLeft", &USlateBlueprintLibrary::execGetLocalTopLeft },
			{ "IsUnderLocation", &USlateBlueprintLibrary::execIsUnderLocation },
			{ "LocalToAbsolute", &USlateBlueprintLibrary::execLocalToAbsolute },
			{ "LocalToViewport", &USlateBlueprintLibrary::execLocalToViewport },
			{ "ScreenToViewport", &USlateBlueprintLibrary::execScreenToViewport },
			{ "ScreenToWidgetAbsolute", &USlateBlueprintLibrary::execScreenToWidgetAbsolute },
			{ "ScreenToWidgetLocal", &USlateBlueprintLibrary::execScreenToWidgetLocal },
			{ "TransformScalarAbsoluteToLocal", &USlateBlueprintLibrary::execTransformScalarAbsoluteToLocal },
			{ "TransformScalarLocalToAbsolute", &USlateBlueprintLibrary::execTransformScalarLocalToAbsolute },
			{ "TransformVectorAbsoluteToLocal", &USlateBlueprintLibrary::execTransformVectorAbsoluteToLocal },
			{ "TransformVectorLocalToAbsolute", &USlateBlueprintLibrary::execTransformVectorLocalToAbsolute },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToLocal_Statics
	{
		struct SlateBlueprintLibrary_eventAbsoluteToLocal_Parms
		{
			FGeometry Geometry;
			FVector2D AbsoluteCoordinate;
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AbsoluteCoordinate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Geometry_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Geometry;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToLocal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventAbsoluteToLocal_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToLocal_Statics::NewProp_AbsoluteCoordinate = { "AbsoluteCoordinate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventAbsoluteToLocal_Parms, AbsoluteCoordinate), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToLocal_Statics::NewProp_Geometry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToLocal_Statics::NewProp_Geometry = { "Geometry", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventAbsoluteToLocal_Parms, Geometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToLocal_Statics::NewProp_Geometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToLocal_Statics::NewProp_Geometry_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToLocal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToLocal_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToLocal_Statics::NewProp_AbsoluteCoordinate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToLocal_Statics::NewProp_Geometry,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToLocal_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface|Geometry" },
		{ "Comment", "/**\n\x09 * Absolute coordinates could be either desktop or window space depending on what space the root of the widget hierarchy is in.\n\x09 *\n\x09 * @return Transforms AbsoluteCoordinate into the local space of this Geometry.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/SlateBlueprintLibrary.h" },
		{ "ToolTip", "Absolute coordinates could be either desktop or window space depending on what space the root of the widget hierarchy is in.\n\n@return Transforms AbsoluteCoordinate into the local space of this Geometry." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToLocal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateBlueprintLibrary, nullptr, "AbsoluteToLocal", nullptr, nullptr, sizeof(SlateBlueprintLibrary_eventAbsoluteToLocal_Parms), Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToLocal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToLocal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToLocal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToLocal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToLocal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToLocal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToViewport_Statics
	{
		struct SlateBlueprintLibrary_eventAbsoluteToViewport_Parms
		{
			UObject* WorldContextObject;
			FVector2D AbsoluteDesktopCoordinate;
			FVector2D PixelPosition;
			FVector2D ViewportPosition;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ViewportPosition;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PixelPosition;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AbsoluteDesktopCoordinate;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToViewport_Statics::NewProp_ViewportPosition = { "ViewportPosition", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventAbsoluteToViewport_Parms, ViewportPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToViewport_Statics::NewProp_PixelPosition = { "PixelPosition", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventAbsoluteToViewport_Parms, PixelPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToViewport_Statics::NewProp_AbsoluteDesktopCoordinate = { "AbsoluteDesktopCoordinate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventAbsoluteToViewport_Parms, AbsoluteDesktopCoordinate), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToViewport_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventAbsoluteToViewport_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToViewport_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToViewport_Statics::NewProp_ViewportPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToViewport_Statics::NewProp_PixelPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToViewport_Statics::NewProp_AbsoluteDesktopCoordinate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToViewport_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToViewport_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface|Geometry" },
		{ "Comment", "/**\n\x09 * Translates absolute coordinate in desktop space of the geometry provided into local viewport coordinates.\n\x09 *\n\x09 * @param PixelPosition The position in the game's viewport, usable for line traces and\n\x09 * other uses where you need a coordinate in the space of viewport resolution units.\n\x09 * @param ViewportPosition The position in the space of other widgets in the viewport.  Like if you wanted\n\x09 * to add another widget to the viewport at the same position in viewport space as this location, this is\n\x09 * what you would use.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/SlateBlueprintLibrary.h" },
		{ "ToolTip", "Translates absolute coordinate in desktop space of the geometry provided into local viewport coordinates.\n\n@param PixelPosition The position in the game's viewport, usable for line traces and\nother uses where you need a coordinate in the space of viewport resolution units.\n@param ViewportPosition The position in the space of other widgets in the viewport.  Like if you wanted\nto add another widget to the viewport at the same position in viewport space as this location, this is\nwhat you would use." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToViewport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateBlueprintLibrary, nullptr, "AbsoluteToViewport", nullptr, nullptr, sizeof(SlateBlueprintLibrary_eventAbsoluteToViewport_Parms), Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToViewport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToViewport_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToViewport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToViewport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToViewport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToViewport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush_Statics
	{
		struct SlateBlueprintLibrary_eventEqualEqual_SlateBrush_Parms
		{
			FSlateBrush A;
			FSlateBrush B;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_B;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SlateBlueprintLibrary_eventEqualEqual_SlateBrush_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SlateBlueprintLibrary_eventEqualEqual_SlateBrush_Parms), &Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventEqualEqual_SlateBrush_Parms, B), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventEqualEqual_SlateBrush_Parms, A), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush_Statics::NewProp_A_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush_Statics::NewProp_A,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush_Statics::Function_MetaDataParams[] = {
		{ "Category", "SlateBrush" },
		{ "Comment", "/** Returns whether brushes A and B are identical. */" },
		{ "CompactNodeTitle", "==" },
		{ "DisplayName", "Equal (SlateBrush)" },
		{ "ModuleRelativePath", "Public/Blueprint/SlateBlueprintLibrary.h" },
		{ "ToolTip", "Returns whether brushes A and B are identical." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateBlueprintLibrary, nullptr, "EqualEqual_SlateBrush", nullptr, nullptr, sizeof(SlateBlueprintLibrary_eventEqualEqual_SlateBrush_Parms), Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USlateBlueprintLibrary_GetAbsoluteSize_Statics
	{
		struct SlateBlueprintLibrary_eventGetAbsoluteSize_Parms
		{
			FGeometry Geometry;
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Geometry_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Geometry;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_GetAbsoluteSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventGetAbsoluteSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateBlueprintLibrary_GetAbsoluteSize_Statics::NewProp_Geometry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_GetAbsoluteSize_Statics::NewProp_Geometry = { "Geometry", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventGetAbsoluteSize_Parms, Geometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(Z_Construct_UFunction_USlateBlueprintLibrary_GetAbsoluteSize_Statics::NewProp_Geometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_GetAbsoluteSize_Statics::NewProp_Geometry_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlateBlueprintLibrary_GetAbsoluteSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_GetAbsoluteSize_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_GetAbsoluteSize_Statics::NewProp_Geometry,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateBlueprintLibrary_GetAbsoluteSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface|Geometry" },
		{ "Comment", "/** Returns the size of the geometry in absolute space. */" },
		{ "ModuleRelativePath", "Public/Blueprint/SlateBlueprintLibrary.h" },
		{ "ToolTip", "Returns the size of the geometry in absolute space." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USlateBlueprintLibrary_GetAbsoluteSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateBlueprintLibrary, nullptr, "GetAbsoluteSize", nullptr, nullptr, sizeof(SlateBlueprintLibrary_eventGetAbsoluteSize_Parms), Z_Construct_UFunction_USlateBlueprintLibrary_GetAbsoluteSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_GetAbsoluteSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlateBlueprintLibrary_GetAbsoluteSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_GetAbsoluteSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlateBlueprintLibrary_GetAbsoluteSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USlateBlueprintLibrary_GetAbsoluteSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalSize_Statics
	{
		struct SlateBlueprintLibrary_eventGetLocalSize_Parms
		{
			FGeometry Geometry;
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Geometry_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Geometry;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventGetLocalSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalSize_Statics::NewProp_Geometry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalSize_Statics::NewProp_Geometry = { "Geometry", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventGetLocalSize_Parms, Geometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalSize_Statics::NewProp_Geometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalSize_Statics::NewProp_Geometry_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalSize_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalSize_Statics::NewProp_Geometry,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface|Geometry" },
		{ "Comment", "/** Returns the size of the geometry in local space. */" },
		{ "ModuleRelativePath", "Public/Blueprint/SlateBlueprintLibrary.h" },
		{ "ToolTip", "Returns the size of the geometry in local space." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateBlueprintLibrary, nullptr, "GetLocalSize", nullptr, nullptr, sizeof(SlateBlueprintLibrary_eventGetLocalSize_Parms), Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalTopLeft_Statics
	{
		struct SlateBlueprintLibrary_eventGetLocalTopLeft_Parms
		{
			FGeometry Geometry;
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Geometry_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Geometry;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalTopLeft_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventGetLocalTopLeft_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalTopLeft_Statics::NewProp_Geometry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalTopLeft_Statics::NewProp_Geometry = { "Geometry", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventGetLocalTopLeft_Parms, Geometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalTopLeft_Statics::NewProp_Geometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalTopLeft_Statics::NewProp_Geometry_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalTopLeft_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalTopLeft_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalTopLeft_Statics::NewProp_Geometry,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalTopLeft_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface|Geometry" },
		{ "Comment", "/** Returns the local top/left of the geometry in local space. */" },
		{ "ModuleRelativePath", "Public/Blueprint/SlateBlueprintLibrary.h" },
		{ "ToolTip", "Returns the local top/left of the geometry in local space." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalTopLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateBlueprintLibrary, nullptr, "GetLocalTopLeft", nullptr, nullptr, sizeof(SlateBlueprintLibrary_eventGetLocalTopLeft_Parms), Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalTopLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalTopLeft_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalTopLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalTopLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalTopLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalTopLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation_Statics
	{
		struct SlateBlueprintLibrary_eventIsUnderLocation_Parms
		{
			FGeometry Geometry;
			FVector2D AbsoluteCoordinate;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbsoluteCoordinate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AbsoluteCoordinate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Geometry_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Geometry;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SlateBlueprintLibrary_eventIsUnderLocation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SlateBlueprintLibrary_eventIsUnderLocation_Parms), &Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation_Statics::NewProp_AbsoluteCoordinate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation_Statics::NewProp_AbsoluteCoordinate = { "AbsoluteCoordinate", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventIsUnderLocation_Parms, AbsoluteCoordinate), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation_Statics::NewProp_AbsoluteCoordinate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation_Statics::NewProp_AbsoluteCoordinate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation_Statics::NewProp_Geometry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation_Statics::NewProp_Geometry = { "Geometry", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventIsUnderLocation_Parms, Geometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation_Statics::NewProp_Geometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation_Statics::NewProp_Geometry_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation_Statics::NewProp_AbsoluteCoordinate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation_Statics::NewProp_Geometry,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface|Geometry" },
		{ "Comment", "/**\n\x09 * Absolute coordinates could be either desktop or window space depending on what space the root of the widget hierarchy is in.\n\x09 *\n\x09 * @return true if the provided location in absolute coordinates is within the bounds of this geometry.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/SlateBlueprintLibrary.h" },
		{ "ToolTip", "Absolute coordinates could be either desktop or window space depending on what space the root of the widget hierarchy is in.\n\n@return true if the provided location in absolute coordinates is within the bounds of this geometry." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateBlueprintLibrary, nullptr, "IsUnderLocation", nullptr, nullptr, sizeof(SlateBlueprintLibrary_eventIsUnderLocation_Parms), Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USlateBlueprintLibrary_LocalToAbsolute_Statics
	{
		struct SlateBlueprintLibrary_eventLocalToAbsolute_Parms
		{
			FGeometry Geometry;
			FVector2D LocalCoordinate;
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalCoordinate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Geometry_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Geometry;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_LocalToAbsolute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventLocalToAbsolute_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_LocalToAbsolute_Statics::NewProp_LocalCoordinate = { "LocalCoordinate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventLocalToAbsolute_Parms, LocalCoordinate), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateBlueprintLibrary_LocalToAbsolute_Statics::NewProp_Geometry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_LocalToAbsolute_Statics::NewProp_Geometry = { "Geometry", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventLocalToAbsolute_Parms, Geometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(Z_Construct_UFunction_USlateBlueprintLibrary_LocalToAbsolute_Statics::NewProp_Geometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_LocalToAbsolute_Statics::NewProp_Geometry_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlateBlueprintLibrary_LocalToAbsolute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_LocalToAbsolute_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_LocalToAbsolute_Statics::NewProp_LocalCoordinate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_LocalToAbsolute_Statics::NewProp_Geometry,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateBlueprintLibrary_LocalToAbsolute_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface|Geometry" },
		{ "Comment", "/**\n\x09 * Translates local coordinates into absolute coordinates\n\x09 *\n\x09 * Absolute coordinates could be either desktop or window space depending on what space the root of the widget hierarchy is in.\n\x09 *\n\x09 * @return  Absolute coordinates\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/SlateBlueprintLibrary.h" },
		{ "ToolTip", "Translates local coordinates into absolute coordinates\n\nAbsolute coordinates could be either desktop or window space depending on what space the root of the widget hierarchy is in.\n\n@return  Absolute coordinates" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USlateBlueprintLibrary_LocalToAbsolute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateBlueprintLibrary, nullptr, "LocalToAbsolute", nullptr, nullptr, sizeof(SlateBlueprintLibrary_eventLocalToAbsolute_Parms), Z_Construct_UFunction_USlateBlueprintLibrary_LocalToAbsolute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_LocalToAbsolute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlateBlueprintLibrary_LocalToAbsolute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_LocalToAbsolute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlateBlueprintLibrary_LocalToAbsolute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USlateBlueprintLibrary_LocalToAbsolute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport_Statics
	{
		struct SlateBlueprintLibrary_eventLocalToViewport_Parms
		{
			UObject* WorldContextObject;
			FGeometry Geometry;
			FVector2D LocalCoordinate;
			FVector2D PixelPosition;
			FVector2D ViewportPosition;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ViewportPosition;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PixelPosition;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalCoordinate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Geometry_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Geometry;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport_Statics::NewProp_ViewportPosition = { "ViewportPosition", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventLocalToViewport_Parms, ViewportPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport_Statics::NewProp_PixelPosition = { "PixelPosition", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventLocalToViewport_Parms, PixelPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport_Statics::NewProp_LocalCoordinate = { "LocalCoordinate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventLocalToViewport_Parms, LocalCoordinate), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport_Statics::NewProp_Geometry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport_Statics::NewProp_Geometry = { "Geometry", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventLocalToViewport_Parms, Geometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport_Statics::NewProp_Geometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport_Statics::NewProp_Geometry_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventLocalToViewport_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport_Statics::NewProp_ViewportPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport_Statics::NewProp_PixelPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport_Statics::NewProp_LocalCoordinate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport_Statics::NewProp_Geometry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface|Geometry" },
		{ "Comment", "/**\n\x09 * Translates local coordinate of the geometry provided into local viewport coordinates.\n\x09 *\n\x09 * @param PixelPosition The position in the game's viewport, usable for line traces and \n\x09 * other uses where you need a coordinate in the space of viewport resolution units.\n\x09 * @param ViewportPosition The position in the space of other widgets in the viewport.  Like if you wanted\n\x09 * to add another widget to the viewport at the same position in viewport space as this location, this is\n\x09 * what you would use.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/SlateBlueprintLibrary.h" },
		{ "ToolTip", "Translates local coordinate of the geometry provided into local viewport coordinates.\n\n@param PixelPosition The position in the game's viewport, usable for line traces and\nother uses where you need a coordinate in the space of viewport resolution units.\n@param ViewportPosition The position in the space of other widgets in the viewport.  Like if you wanted\nto add another widget to the viewport at the same position in viewport space as this location, this is\nwhat you would use." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateBlueprintLibrary, nullptr, "LocalToViewport", nullptr, nullptr, sizeof(SlateBlueprintLibrary_eventLocalToViewport_Parms), Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToViewport_Statics
	{
		struct SlateBlueprintLibrary_eventScreenToViewport_Parms
		{
			UObject* WorldContextObject;
			FVector2D ScreenPosition;
			FVector2D ViewportPosition;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ViewportPosition;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScreenPosition;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToViewport_Statics::NewProp_ViewportPosition = { "ViewportPosition", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventScreenToViewport_Parms, ViewportPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToViewport_Statics::NewProp_ScreenPosition = { "ScreenPosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventScreenToViewport_Parms, ScreenPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToViewport_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventScreenToViewport_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToViewport_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToViewport_Statics::NewProp_ViewportPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToViewport_Statics::NewProp_ScreenPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToViewport_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToViewport_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface|Geometry" },
		{ "Comment", "/**\n\x09 * Translates a screen position in pixels into the local space of the viewport widget.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/SlateBlueprintLibrary.h" },
		{ "ToolTip", "Translates a screen position in pixels into the local space of the viewport widget." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToViewport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateBlueprintLibrary, nullptr, "ScreenToViewport", nullptr, nullptr, sizeof(SlateBlueprintLibrary_eventScreenToViewport_Parms), Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToViewport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToViewport_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToViewport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToViewport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToViewport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToViewport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute_Statics
	{
		struct SlateBlueprintLibrary_eventScreenToWidgetAbsolute_Parms
		{
			UObject* WorldContextObject;
			FVector2D ScreenPosition;
			FVector2D AbsoluteCoordinate;
			bool bIncludeWindowPosition;
		};
		static void NewProp_bIncludeWindowPosition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeWindowPosition;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AbsoluteCoordinate;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScreenPosition;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute_Statics::NewProp_bIncludeWindowPosition_SetBit(void* Obj)
	{
		((SlateBlueprintLibrary_eventScreenToWidgetAbsolute_Parms*)Obj)->bIncludeWindowPosition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute_Statics::NewProp_bIncludeWindowPosition = { "bIncludeWindowPosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SlateBlueprintLibrary_eventScreenToWidgetAbsolute_Parms), &Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute_Statics::NewProp_bIncludeWindowPosition_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute_Statics::NewProp_AbsoluteCoordinate = { "AbsoluteCoordinate", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventScreenToWidgetAbsolute_Parms, AbsoluteCoordinate), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute_Statics::NewProp_ScreenPosition = { "ScreenPosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventScreenToWidgetAbsolute_Parms, ScreenPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventScreenToWidgetAbsolute_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute_Statics::NewProp_bIncludeWindowPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute_Statics::NewProp_AbsoluteCoordinate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute_Statics::NewProp_ScreenPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface|Geometry" },
		{ "Comment", "/**\n\x09 * Translates a screen position in pixels into absolute application coordinates.\n\x09 * If bIncludeWindowPosition is true, then this method will also remove the game window's position (useful when in windowed mode).\n\x09 */" },
		{ "DisplayName", "ScreenToAbsolute" },
		{ "ModuleRelativePath", "Public/Blueprint/SlateBlueprintLibrary.h" },
		{ "ToolTip", "Translates a screen position in pixels into absolute application coordinates.\nIf bIncludeWindowPosition is true, then this method will also remove the game window's position (useful when in windowed mode)." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateBlueprintLibrary, nullptr, "ScreenToWidgetAbsolute", nullptr, nullptr, sizeof(SlateBlueprintLibrary_eventScreenToWidgetAbsolute_Parms), Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics
	{
		struct SlateBlueprintLibrary_eventScreenToWidgetLocal_Parms
		{
			UObject* WorldContextObject;
			FGeometry Geometry;
			FVector2D ScreenPosition;
			FVector2D LocalCoordinate;
			bool bIncludeWindowPosition;
		};
		static void NewProp_bIncludeWindowPosition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeWindowPosition;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalCoordinate;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScreenPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Geometry_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Geometry;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics::NewProp_bIncludeWindowPosition_SetBit(void* Obj)
	{
		((SlateBlueprintLibrary_eventScreenToWidgetLocal_Parms*)Obj)->bIncludeWindowPosition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics::NewProp_bIncludeWindowPosition = { "bIncludeWindowPosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SlateBlueprintLibrary_eventScreenToWidgetLocal_Parms), &Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics::NewProp_bIncludeWindowPosition_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics::NewProp_LocalCoordinate = { "LocalCoordinate", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventScreenToWidgetLocal_Parms, LocalCoordinate), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics::NewProp_ScreenPosition = { "ScreenPosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventScreenToWidgetLocal_Parms, ScreenPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics::NewProp_Geometry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics::NewProp_Geometry = { "Geometry", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventScreenToWidgetLocal_Parms, Geometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics::NewProp_Geometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics::NewProp_Geometry_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventScreenToWidgetLocal_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics::NewProp_bIncludeWindowPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics::NewProp_LocalCoordinate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics::NewProp_ScreenPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics::NewProp_Geometry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface|Geometry" },
		{ "Comment", "/**\n\x09 * Translates a screen position in pixels into the local space of a widget with the given geometry. \n\x09 * If bIncludeWindowPosition is true, then this method will also remove the game window's position (useful when in windowed mode).\n\x09 */" },
		{ "DisplayName", "ScreenToLocal" },
		{ "ModuleRelativePath", "Public/Blueprint/SlateBlueprintLibrary.h" },
		{ "ToolTip", "Translates a screen position in pixels into the local space of a widget with the given geometry.\nIf bIncludeWindowPosition is true, then this method will also remove the game window's position (useful when in windowed mode)." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateBlueprintLibrary, nullptr, "ScreenToWidgetLocal", nullptr, nullptr, sizeof(SlateBlueprintLibrary_eventScreenToWidgetLocal_Parms), Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarAbsoluteToLocal_Statics
	{
		struct SlateBlueprintLibrary_eventTransformScalarAbsoluteToLocal_Parms
		{
			FGeometry Geometry;
			float AbsoluteScalar;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AbsoluteScalar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Geometry_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Geometry;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarAbsoluteToLocal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventTransformScalarAbsoluteToLocal_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarAbsoluteToLocal_Statics::NewProp_AbsoluteScalar = { "AbsoluteScalar", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventTransformScalarAbsoluteToLocal_Parms, AbsoluteScalar), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarAbsoluteToLocal_Statics::NewProp_Geometry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarAbsoluteToLocal_Statics::NewProp_Geometry = { "Geometry", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventTransformScalarAbsoluteToLocal_Parms, Geometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarAbsoluteToLocal_Statics::NewProp_Geometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarAbsoluteToLocal_Statics::NewProp_Geometry_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarAbsoluteToLocal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarAbsoluteToLocal_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarAbsoluteToLocal_Statics::NewProp_AbsoluteScalar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarAbsoluteToLocal_Statics::NewProp_Geometry,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarAbsoluteToLocal_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface|Geometry" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Blueprint/SlateBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarAbsoluteToLocal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateBlueprintLibrary, nullptr, "TransformScalarAbsoluteToLocal", nullptr, nullptr, sizeof(SlateBlueprintLibrary_eventTransformScalarAbsoluteToLocal_Parms), Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarAbsoluteToLocal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarAbsoluteToLocal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarAbsoluteToLocal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarAbsoluteToLocal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarAbsoluteToLocal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarAbsoluteToLocal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarLocalToAbsolute_Statics
	{
		struct SlateBlueprintLibrary_eventTransformScalarLocalToAbsolute_Parms
		{
			FGeometry Geometry;
			float LocalScalar;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LocalScalar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Geometry_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Geometry;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarLocalToAbsolute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventTransformScalarLocalToAbsolute_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarLocalToAbsolute_Statics::NewProp_LocalScalar = { "LocalScalar", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventTransformScalarLocalToAbsolute_Parms, LocalScalar), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarLocalToAbsolute_Statics::NewProp_Geometry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarLocalToAbsolute_Statics::NewProp_Geometry = { "Geometry", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventTransformScalarLocalToAbsolute_Parms, Geometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarLocalToAbsolute_Statics::NewProp_Geometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarLocalToAbsolute_Statics::NewProp_Geometry_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarLocalToAbsolute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarLocalToAbsolute_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarLocalToAbsolute_Statics::NewProp_LocalScalar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarLocalToAbsolute_Statics::NewProp_Geometry,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarLocalToAbsolute_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface|Geometry" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Blueprint/SlateBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarLocalToAbsolute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateBlueprintLibrary, nullptr, "TransformScalarLocalToAbsolute", nullptr, nullptr, sizeof(SlateBlueprintLibrary_eventTransformScalarLocalToAbsolute_Parms), Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarLocalToAbsolute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarLocalToAbsolute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarLocalToAbsolute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarLocalToAbsolute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarLocalToAbsolute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarLocalToAbsolute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorAbsoluteToLocal_Statics
	{
		struct SlateBlueprintLibrary_eventTransformVectorAbsoluteToLocal_Parms
		{
			FGeometry Geometry;
			FVector2D AbsoluteVector;
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AbsoluteVector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Geometry_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Geometry;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorAbsoluteToLocal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventTransformVectorAbsoluteToLocal_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorAbsoluteToLocal_Statics::NewProp_AbsoluteVector = { "AbsoluteVector", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventTransformVectorAbsoluteToLocal_Parms, AbsoluteVector), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorAbsoluteToLocal_Statics::NewProp_Geometry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorAbsoluteToLocal_Statics::NewProp_Geometry = { "Geometry", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventTransformVectorAbsoluteToLocal_Parms, Geometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorAbsoluteToLocal_Statics::NewProp_Geometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorAbsoluteToLocal_Statics::NewProp_Geometry_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorAbsoluteToLocal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorAbsoluteToLocal_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorAbsoluteToLocal_Statics::NewProp_AbsoluteVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorAbsoluteToLocal_Statics::NewProp_Geometry,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorAbsoluteToLocal_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface|Geometry" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Blueprint/SlateBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorAbsoluteToLocal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateBlueprintLibrary, nullptr, "TransformVectorAbsoluteToLocal", nullptr, nullptr, sizeof(SlateBlueprintLibrary_eventTransformVectorAbsoluteToLocal_Parms), Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorAbsoluteToLocal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorAbsoluteToLocal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorAbsoluteToLocal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorAbsoluteToLocal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorAbsoluteToLocal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorAbsoluteToLocal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorLocalToAbsolute_Statics
	{
		struct SlateBlueprintLibrary_eventTransformVectorLocalToAbsolute_Parms
		{
			FGeometry Geometry;
			FVector2D LocalVector;
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalVector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Geometry_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Geometry;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorLocalToAbsolute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventTransformVectorLocalToAbsolute_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorLocalToAbsolute_Statics::NewProp_LocalVector = { "LocalVector", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventTransformVectorLocalToAbsolute_Parms, LocalVector), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorLocalToAbsolute_Statics::NewProp_Geometry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorLocalToAbsolute_Statics::NewProp_Geometry = { "Geometry", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventTransformVectorLocalToAbsolute_Parms, Geometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorLocalToAbsolute_Statics::NewProp_Geometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorLocalToAbsolute_Statics::NewProp_Geometry_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorLocalToAbsolute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorLocalToAbsolute_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorLocalToAbsolute_Statics::NewProp_LocalVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorLocalToAbsolute_Statics::NewProp_Geometry,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorLocalToAbsolute_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface|Geometry" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Blueprint/SlateBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorLocalToAbsolute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateBlueprintLibrary, nullptr, "TransformVectorLocalToAbsolute", nullptr, nullptr, sizeof(SlateBlueprintLibrary_eventTransformVectorLocalToAbsolute_Parms), Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorLocalToAbsolute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorLocalToAbsolute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorLocalToAbsolute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorLocalToAbsolute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorLocalToAbsolute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorLocalToAbsolute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USlateBlueprintLibrary_NoRegister()
	{
		return USlateBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USlateBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USlateBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USlateBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToLocal, "AbsoluteToLocal" }, // 3677073641
		{ &Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToViewport, "AbsoluteToViewport" }, // 3221949272
		{ &Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush, "EqualEqual_SlateBrush" }, // 4116343357
		{ &Z_Construct_UFunction_USlateBlueprintLibrary_GetAbsoluteSize, "GetAbsoluteSize" }, // 2500718086
		{ &Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalSize, "GetLocalSize" }, // 2148637978
		{ &Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalTopLeft, "GetLocalTopLeft" }, // 1612933897
		{ &Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation, "IsUnderLocation" }, // 2742760115
		{ &Z_Construct_UFunction_USlateBlueprintLibrary_LocalToAbsolute, "LocalToAbsolute" }, // 2186272431
		{ &Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport, "LocalToViewport" }, // 4049465312
		{ &Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToViewport, "ScreenToViewport" }, // 4148007411
		{ &Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute, "ScreenToWidgetAbsolute" }, // 3557404555
		{ &Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal, "ScreenToWidgetLocal" }, // 1160479617
		{ &Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarAbsoluteToLocal, "TransformScalarAbsoluteToLocal" }, // 4151433689
		{ &Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarLocalToAbsolute, "TransformScalarLocalToAbsolute" }, // 442142605
		{ &Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorAbsoluteToLocal, "TransformVectorAbsoluteToLocal" }, // 2733195696
		{ &Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorLocalToAbsolute, "TransformVectorLocalToAbsolute" }, // 3000185358
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlateBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Blueprint/SlateBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/Blueprint/SlateBlueprintLibrary.h" },
		{ "ScriptName", "SlateLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USlateBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlateBlueprintLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USlateBlueprintLibrary_Statics::ClassParams = {
		&USlateBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USlateBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USlateBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USlateBlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USlateBlueprintLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USlateBlueprintLibrary, 3835949185);
	template<> UMG_API UClass* StaticClass<USlateBlueprintLibrary>()
	{
		return USlateBlueprintLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USlateBlueprintLibrary(Z_Construct_UClass_USlateBlueprintLibrary, &USlateBlueprintLibrary::StaticClass, TEXT("/Script/UMG"), TEXT("USlateBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlateBlueprintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
