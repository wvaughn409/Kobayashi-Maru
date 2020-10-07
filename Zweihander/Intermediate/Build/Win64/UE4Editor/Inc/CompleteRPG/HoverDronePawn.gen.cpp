// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CompleteRPG/Public/HoverDronePawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoverDronePawn() {}
// Cross Module References
	COMPLETERPG_API UClass* Z_Construct_UClass_AHoverDronePawn_NoRegister();
	COMPLETERPG_API UClass* Z_Construct_UClass_AHoverDronePawn();
	ENGINE_API UClass* Z_Construct_UClass_ADefaultPawn();
	UPackage* Z_Construct_UPackage__Script_CompleteRPG();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveVector_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AHoverDronePawn::execIsMaintainingConstantAltitude)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMaintainingConstantAltitude();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHoverDronePawn::execGetAltitude)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAltitude();
		P_NATIVE_END;
	}
	void AHoverDronePawn::StaticRegisterNativesAHoverDronePawn()
	{
		UClass* Class = AHoverDronePawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAltitude", &AHoverDronePawn::execGetAltitude },
			{ "IsMaintainingConstantAltitude", &AHoverDronePawn::execIsMaintainingConstantAltitude },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AHoverDronePawn_GetAltitude_Statics
	{
		struct HoverDronePawn_eventGetAltitude_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHoverDronePawn_GetAltitude_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoverDronePawn_eventGetAltitude_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHoverDronePawn_GetAltitude_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHoverDronePawn_GetAltitude_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHoverDronePawn_GetAltitude_Statics::Function_MetaDataParams[] = {
		{ "Category", "HoverDrone" },
		{ "Comment", "/** Returns drone's current height above the ground. */" },
		{ "ModuleRelativePath", "Public/HoverDronePawn.h" },
		{ "ToolTip", "Returns drone's current height above the ground." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHoverDronePawn_GetAltitude_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHoverDronePawn, nullptr, "GetAltitude", nullptr, nullptr, sizeof(HoverDronePawn_eventGetAltitude_Parms), Z_Construct_UFunction_AHoverDronePawn_GetAltitude_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHoverDronePawn_GetAltitude_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHoverDronePawn_GetAltitude_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHoverDronePawn_GetAltitude_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHoverDronePawn_GetAltitude()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHoverDronePawn_GetAltitude_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHoverDronePawn_IsMaintainingConstantAltitude_Statics
	{
		struct HoverDronePawn_eventIsMaintainingConstantAltitude_Parms
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
	void Z_Construct_UFunction_AHoverDronePawn_IsMaintainingConstantAltitude_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoverDronePawn_eventIsMaintainingConstantAltitude_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHoverDronePawn_IsMaintainingConstantAltitude_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoverDronePawn_eventIsMaintainingConstantAltitude_Parms), &Z_Construct_UFunction_AHoverDronePawn_IsMaintainingConstantAltitude_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHoverDronePawn_IsMaintainingConstantAltitude_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHoverDronePawn_IsMaintainingConstantAltitude_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHoverDronePawn_IsMaintainingConstantAltitude_Statics::Function_MetaDataParams[] = {
		{ "Category", "HoverDrone" },
		{ "Comment", "/** Returns true if this drone has auto-altitude on. */" },
		{ "ModuleRelativePath", "Public/HoverDronePawn.h" },
		{ "ToolTip", "Returns true if this drone has auto-altitude on." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHoverDronePawn_IsMaintainingConstantAltitude_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHoverDronePawn, nullptr, "IsMaintainingConstantAltitude", nullptr, nullptr, sizeof(HoverDronePawn_eventIsMaintainingConstantAltitude_Parms), Z_Construct_UFunction_AHoverDronePawn_IsMaintainingConstantAltitude_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHoverDronePawn_IsMaintainingConstantAltitude_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHoverDronePawn_IsMaintainingConstantAltitude_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHoverDronePawn_IsMaintainingConstantAltitude_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHoverDronePawn_IsMaintainingConstantAltitude()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHoverDronePawn_IsMaintainingConstantAltitude_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AHoverDronePawn_NoRegister()
	{
		return AHoverDronePawn::StaticClass();
	}
	struct Z_Construct_UClass_AHoverDronePawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoliageOverlapComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FoliageOverlapComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenFringeFOVCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ScreenFringeFOVCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraApertureFStop_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraApertureFStop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoFocusInterpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AutoFocusInterpSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoFocus_MetaData[];
#endif
		static void NewProp_bAutoFocus_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoFocus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinFOV_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinFOV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxFOV_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxFOV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FOVInterpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FOVInterpSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoomRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ZoomRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DroneTiltInterpSpeed_Decel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DroneTiltInterpSpeed_Decel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DroneTiltInterpSpeed_Accel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DroneTiltInterpSpeed_Accel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAccelToGravRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAccelToGravRatio;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHoverDronePawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADefaultPawn,
		(UObject* (*)())Z_Construct_UPackage__Script_CompleteRPG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AHoverDronePawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHoverDronePawn_GetAltitude, "GetAltitude" }, // 3974304159
		{ &Z_Construct_UFunction_AHoverDronePawn_IsMaintainingConstantAltitude, "IsMaintainingConstantAltitude" }, // 1713760282
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoverDronePawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "HoverDronePawn.h" },
		{ "ModuleRelativePath", "Public/HoverDronePawn.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_FoliageOverlapComponent_MetaData[] = {
		{ "Comment", "// for interpolating\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HoverDronePawn.h" },
		{ "ToolTip", "for interpolating" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_FoliageOverlapComponent = { "FoliageOverlapComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHoverDronePawn, FoliageOverlapComponent), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_FoliageOverlapComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_FoliageOverlapComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_ScreenFringeFOVCurve_MetaData[] = {
		{ "Category", "ScreenFringe" },
		{ "Comment", "/** Curve that controls screen fringe intensity as a function of fov. X is intensity, Y is saturation*/" },
		{ "ModuleRelativePath", "Public/HoverDronePawn.h" },
		{ "ToolTip", "Curve that controls screen fringe intensity as a function of fov. X is intensity, Y is saturation" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_ScreenFringeFOVCurve = { "ScreenFringeFOVCurve", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHoverDronePawn, ScreenFringeFOVCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_ScreenFringeFOVCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_ScreenFringeFOVCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_CameraApertureFStop_MetaData[] = {
		{ "Category", "AutoFocus" },
		{ "Comment", "/** When autofocus is on, 1/Fstop for the camera. */" },
		{ "ModuleRelativePath", "Public/HoverDronePawn.h" },
		{ "ToolTip", "When autofocus is on, 1/Fstop for the camera." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_CameraApertureFStop = { "CameraApertureFStop", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHoverDronePawn, CameraApertureFStop), METADATA_PARAMS(Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_CameraApertureFStop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_CameraApertureFStop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_AutoFocusInterpSpeed_MetaData[] = {
		{ "Category", "AutoFocus" },
		{ "Comment", "/** Controls how quickly the focal distance converges on the depth at the center of the screen. */" },
		{ "ModuleRelativePath", "Public/HoverDronePawn.h" },
		{ "ToolTip", "Controls how quickly the focal distance converges on the depth at the center of the screen." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_AutoFocusInterpSpeed = { "AutoFocusInterpSpeed", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHoverDronePawn, AutoFocusInterpSpeed), METADATA_PARAMS(Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_AutoFocusInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_AutoFocusInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_bAutoFocus_MetaData[] = {
		{ "Category", "AutoFocus" },
		{ "Comment", "/** True to turn on depth of field and auto focusing, false otherwise. */" },
		{ "ModuleRelativePath", "Public/HoverDronePawn.h" },
		{ "ToolTip", "True to turn on depth of field and auto focusing, false otherwise." },
	};
#endif
	void Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_bAutoFocus_SetBit(void* Obj)
	{
		((AHoverDronePawn*)Obj)->bAutoFocus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_bAutoFocus = { "bAutoFocus", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AHoverDronePawn), &Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_bAutoFocus_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_bAutoFocus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_bAutoFocus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_MinFOV_MetaData[] = {
		{ "Category", "HoverDrone" },
		{ "Comment", "/** Min FOV for the camera. */" },
		{ "ModuleRelativePath", "Public/HoverDronePawn.h" },
		{ "ToolTip", "Min FOV for the camera." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_MinFOV = { "MinFOV", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHoverDronePawn, MinFOV), METADATA_PARAMS(Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_MinFOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_MinFOV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_MaxFOV_MetaData[] = {
		{ "Category", "HoverDrone" },
		{ "Comment", "/** Max FOV for the camera. */" },
		{ "ModuleRelativePath", "Public/HoverDronePawn.h" },
		{ "ToolTip", "Max FOV for the camera." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_MaxFOV = { "MaxFOV", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHoverDronePawn, MaxFOV), METADATA_PARAMS(Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_MaxFOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_MaxFOV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_FOVInterpSpeed_MetaData[] = {
		{ "Category", "HoverDrone" },
		{ "Comment", "/** How fast to interpolate FOV (for smoothness). */" },
		{ "ModuleRelativePath", "Public/HoverDronePawn.h" },
		{ "ToolTip", "How fast to interpolate FOV (for smoothness)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_FOVInterpSpeed = { "FOVInterpSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHoverDronePawn, FOVInterpSpeed), METADATA_PARAMS(Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_FOVInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_FOVInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_ZoomRate_MetaData[] = {
		{ "Category", "HoverDrone" },
		{ "Comment", "/** How fast to zoom, in FOV degrees per sec. */" },
		{ "ModuleRelativePath", "Public/HoverDronePawn.h" },
		{ "ToolTip", "How fast to zoom, in FOV degrees per sec." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_ZoomRate = { "ZoomRate", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHoverDronePawn, ZoomRate), METADATA_PARAMS(Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_ZoomRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_ZoomRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_DroneTiltInterpSpeed_Decel_MetaData[] = {
		{ "Category", "HoverDrone" },
		{ "Comment", "/** How quickly/aggressively to interp back to neutral when decelerating */" },
		{ "ModuleRelativePath", "Public/HoverDronePawn.h" },
		{ "ToolTip", "How quickly/aggressively to interp back to neutral when decelerating" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_DroneTiltInterpSpeed_Decel = { "DroneTiltInterpSpeed_Decel", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHoverDronePawn, DroneTiltInterpSpeed_Decel), METADATA_PARAMS(Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_DroneTiltInterpSpeed_Decel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_DroneTiltInterpSpeed_Decel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_DroneTiltInterpSpeed_Accel_MetaData[] = {
		{ "Category", "HoverDrone" },
		{ "Comment", "/** How quickly/aggressively to interp into the tilted position. */" },
		{ "ModuleRelativePath", "Public/HoverDronePawn.h" },
		{ "ToolTip", "How quickly/aggressively to interp into the tilted position." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_DroneTiltInterpSpeed_Accel = { "DroneTiltInterpSpeed_Accel", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHoverDronePawn, DroneTiltInterpSpeed_Accel), METADATA_PARAMS(Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_DroneTiltInterpSpeed_Accel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_DroneTiltInterpSpeed_Accel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_MaxAccelToGravRatio_MetaData[] = {
		{ "Category", "HoverDrone" },
		{ "Comment", "/** Controls how far to tilt based on acceleration. Higher is more tilt. */" },
		{ "ModuleRelativePath", "Public/HoverDronePawn.h" },
		{ "ToolTip", "Controls how far to tilt based on acceleration. Higher is more tilt." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_MaxAccelToGravRatio = { "MaxAccelToGravRatio", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHoverDronePawn, MaxAccelToGravRatio), METADATA_PARAMS(Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_MaxAccelToGravRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_MaxAccelToGravRatio_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHoverDronePawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_FoliageOverlapComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_ScreenFringeFOVCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_CameraApertureFStop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_AutoFocusInterpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_bAutoFocus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_MinFOV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_MaxFOV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_FOVInterpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_ZoomRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_DroneTiltInterpSpeed_Decel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_DroneTiltInterpSpeed_Accel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_MaxAccelToGravRatio,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHoverDronePawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHoverDronePawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHoverDronePawn_Statics::ClassParams = {
		&AHoverDronePawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AHoverDronePawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AHoverDronePawn_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHoverDronePawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHoverDronePawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHoverDronePawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHoverDronePawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHoverDronePawn, 666489223);
	template<> COMPLETERPG_API UClass* StaticClass<AHoverDronePawn>()
	{
		return AHoverDronePawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHoverDronePawn(Z_Construct_UClass_AHoverDronePawn, &AHoverDronePawn::StaticClass, TEXT("/Script/CompleteRPG"), TEXT("AHoverDronePawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHoverDronePawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
