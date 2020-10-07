// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CompleteRPG/Public/CompleteRPGPC.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCompleteRPGPC() {}
// Cross Module References
	COMPLETERPG_API UFunction* Z_Construct_UDelegateFunction_CompleteRPG_ControlModeChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_CompleteRPG();
	COMPLETERPG_API UEnum* Z_Construct_UEnum_CompleteRPG_EGDCControlMode();
	COMPLETERPG_API UClass* Z_Construct_UClass_ACompleteRPGPC_NoRegister();
	COMPLETERPG_API UClass* Z_Construct_UClass_ACompleteRPGPC();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_CompleteRPG_ControlModeChanged__DelegateSignature_Statics
	{
		struct _Script_CompleteRPG_eventControlModeChanged_Parms
		{
			TEnumAsByte<EGDCControlMode::Type> ControlMode;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ControlMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_CompleteRPG_ControlModeChanged__DelegateSignature_Statics::NewProp_ControlMode = { "ControlMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_CompleteRPG_eventControlModeChanged_Parms, ControlMode), Z_Construct_UEnum_CompleteRPG_EGDCControlMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CompleteRPG_ControlModeChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CompleteRPG_ControlModeChanged__DelegateSignature_Statics::NewProp_ControlMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CompleteRPG_ControlModeChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CompleteRPGPC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CompleteRPG_ControlModeChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CompleteRPG, nullptr, "ControlModeChanged__DelegateSignature", nullptr, nullptr, sizeof(_Script_CompleteRPG_eventControlModeChanged_Parms), Z_Construct_UDelegateFunction_CompleteRPG_ControlModeChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CompleteRPG_ControlModeChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CompleteRPG_ControlModeChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CompleteRPG_ControlModeChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CompleteRPG_ControlModeChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_CompleteRPG_ControlModeChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ACompleteRPGPC::execGetPawnAltitude)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPawnAltitude();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACompleteRPGPC::execGetFoliageOverlapCapsule)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCapsuleComponent**)Z_Param__Result=P_THIS->GetFoliageOverlapCapsule();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACompleteRPGPC::execGetControlModeString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetControlModeString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACompleteRPGPC::execGetControlMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<EGDCControlMode::Type>*)Z_Param__Result=P_THIS->GetControlMode();
		P_NATIVE_END;
	}
	void ACompleteRPGPC::StaticRegisterNativesACompleteRPGPC()
	{
		UClass* Class = ACompleteRPGPC::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetControlMode", &ACompleteRPGPC::execGetControlMode },
			{ "GetControlModeString", &ACompleteRPGPC::execGetControlModeString },
			{ "GetFoliageOverlapCapsule", &ACompleteRPGPC::execGetFoliageOverlapCapsule },
			{ "GetPawnAltitude", &ACompleteRPGPC::execGetPawnAltitude },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACompleteRPGPC_GetControlMode_Statics
	{
		struct CompleteRPGPC_eventGetControlMode_Parms
		{
			TEnumAsByte<EGDCControlMode::Type> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACompleteRPGPC_GetControlMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CompleteRPGPC_eventGetControlMode_Parms, ReturnValue), Z_Construct_UEnum_CompleteRPG_EGDCControlMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACompleteRPGPC_GetControlMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompleteRPGPC_GetControlMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACompleteRPGPC_GetControlMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "CompleteRPGPC" },
		{ "Comment", "/** Returns the player's current control mode. */" },
		{ "ModuleRelativePath", "Public/CompleteRPGPC.h" },
		{ "ToolTip", "Returns the player's current control mode." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACompleteRPGPC_GetControlMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACompleteRPGPC, nullptr, "GetControlMode", nullptr, nullptr, sizeof(CompleteRPGPC_eventGetControlMode_Parms), Z_Construct_UFunction_ACompleteRPGPC_GetControlMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompleteRPGPC_GetControlMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACompleteRPGPC_GetControlMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompleteRPGPC_GetControlMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACompleteRPGPC_GetControlMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACompleteRPGPC_GetControlMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACompleteRPGPC_GetControlModeString_Statics
	{
		struct CompleteRPGPC_eventGetControlModeString_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ACompleteRPGPC_GetControlModeString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CompleteRPGPC_eventGetControlModeString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACompleteRPGPC_GetControlModeString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompleteRPGPC_GetControlModeString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACompleteRPGPC_GetControlModeString_Statics::Function_MetaDataParams[] = {
		{ "Category", "CompleteRPGPC" },
		{ "Comment", "/** Returns the name of the player's current control mode. */" },
		{ "ModuleRelativePath", "Public/CompleteRPGPC.h" },
		{ "ToolTip", "Returns the name of the player's current control mode." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACompleteRPGPC_GetControlModeString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACompleteRPGPC, nullptr, "GetControlModeString", nullptr, nullptr, sizeof(CompleteRPGPC_eventGetControlModeString_Parms), Z_Construct_UFunction_ACompleteRPGPC_GetControlModeString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompleteRPGPC_GetControlModeString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACompleteRPGPC_GetControlModeString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompleteRPGPC_GetControlModeString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACompleteRPGPC_GetControlModeString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACompleteRPGPC_GetControlModeString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACompleteRPGPC_GetFoliageOverlapCapsule_Statics
	{
		struct CompleteRPGPC_eventGetFoliageOverlapCapsule_Parms
		{
			UCapsuleComponent* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACompleteRPGPC_GetFoliageOverlapCapsule_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACompleteRPGPC_GetFoliageOverlapCapsule_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CompleteRPGPC_eventGetFoliageOverlapCapsule_Parms, ReturnValue), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACompleteRPGPC_GetFoliageOverlapCapsule_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompleteRPGPC_GetFoliageOverlapCapsule_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACompleteRPGPC_GetFoliageOverlapCapsule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompleteRPGPC_GetFoliageOverlapCapsule_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACompleteRPGPC_GetFoliageOverlapCapsule_Statics::Function_MetaDataParams[] = {
		{ "Category", "CompleteRPGPC" },
		{ "ModuleRelativePath", "Public/CompleteRPGPC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACompleteRPGPC_GetFoliageOverlapCapsule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACompleteRPGPC, nullptr, "GetFoliageOverlapCapsule", nullptr, nullptr, sizeof(CompleteRPGPC_eventGetFoliageOverlapCapsule_Parms), Z_Construct_UFunction_ACompleteRPGPC_GetFoliageOverlapCapsule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompleteRPGPC_GetFoliageOverlapCapsule_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACompleteRPGPC_GetFoliageOverlapCapsule_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompleteRPGPC_GetFoliageOverlapCapsule_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACompleteRPGPC_GetFoliageOverlapCapsule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACompleteRPGPC_GetFoliageOverlapCapsule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACompleteRPGPC_GetPawnAltitude_Statics
	{
		struct CompleteRPGPC_eventGetPawnAltitude_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACompleteRPGPC_GetPawnAltitude_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CompleteRPGPC_eventGetPawnAltitude_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACompleteRPGPC_GetPawnAltitude_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompleteRPGPC_GetPawnAltitude_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACompleteRPGPC_GetPawnAltitude_Statics::Function_MetaDataParams[] = {
		{ "Category", "CompleteRPGPC" },
		{ "ModuleRelativePath", "Public/CompleteRPGPC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACompleteRPGPC_GetPawnAltitude_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACompleteRPGPC, nullptr, "GetPawnAltitude", nullptr, nullptr, sizeof(CompleteRPGPC_eventGetPawnAltitude_Parms), Z_Construct_UFunction_ACompleteRPGPC_GetPawnAltitude_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompleteRPGPC_GetPawnAltitude_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACompleteRPGPC_GetPawnAltitude_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompleteRPGPC_GetPawnAltitude_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACompleteRPGPC_GetPawnAltitude()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACompleteRPGPC_GetPawnAltitude_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACompleteRPGPC_NoRegister()
	{
		return ACompleteRPGPC::StaticClass();
	}
	struct Z_Construct_UClass_ACompleteRPGPC_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpToBookmarkCameraHoldBlackTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JumpToBookmarkCameraHoldBlackTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpToBookmarkCameraFadeTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JumpToBookmarkCameraFadeTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlModePawnClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ControlModePawnClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnControlModeChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnControlModeChanged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACompleteRPGPC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_CompleteRPG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACompleteRPGPC_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACompleteRPGPC_GetControlMode, "GetControlMode" }, // 989219596
		{ &Z_Construct_UFunction_ACompleteRPGPC_GetControlModeString, "GetControlModeString" }, // 2019325187
		{ &Z_Construct_UFunction_ACompleteRPGPC_GetFoliageOverlapCapsule, "GetFoliageOverlapCapsule" }, // 906355994
		{ &Z_Construct_UFunction_ACompleteRPGPC_GetPawnAltitude, "GetPawnAltitude" }, // 619002012
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACompleteRPGPC_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CompleteRPGPC.h" },
		{ "ModuleRelativePath", "Public/CompleteRPGPC.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACompleteRPGPC_Statics::NewProp_JumpToBookmarkCameraHoldBlackTime_MetaData[] = {
		{ "Category", "Classes" },
		{ "Comment", "/** How long to hold at black (after fade down, before fade up) during a bookmark jump. */" },
		{ "ModuleRelativePath", "Public/CompleteRPGPC.h" },
		{ "ToolTip", "How long to hold at black (after fade down, before fade up) during a bookmark jump." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACompleteRPGPC_Statics::NewProp_JumpToBookmarkCameraHoldBlackTime = { "JumpToBookmarkCameraHoldBlackTime", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACompleteRPGPC, JumpToBookmarkCameraHoldBlackTime), METADATA_PARAMS(Z_Construct_UClass_ACompleteRPGPC_Statics::NewProp_JumpToBookmarkCameraHoldBlackTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACompleteRPGPC_Statics::NewProp_JumpToBookmarkCameraHoldBlackTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACompleteRPGPC_Statics::NewProp_JumpToBookmarkCameraFadeTime_MetaData[] = {
		{ "Category", "Classes" },
		{ "Comment", "/** How long the fade down/up should take on a bookmark jump */" },
		{ "ModuleRelativePath", "Public/CompleteRPGPC.h" },
		{ "ToolTip", "How long the fade down/up should take on a bookmark jump" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACompleteRPGPC_Statics::NewProp_JumpToBookmarkCameraFadeTime = { "JumpToBookmarkCameraFadeTime", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACompleteRPGPC, JumpToBookmarkCameraFadeTime), METADATA_PARAMS(Z_Construct_UClass_ACompleteRPGPC_Statics::NewProp_JumpToBookmarkCameraFadeTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACompleteRPGPC_Statics::NewProp_JumpToBookmarkCameraFadeTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACompleteRPGPC_Statics::NewProp_ControlModePawnClass_MetaData[] = {
		{ "ArraySizeEnum", "/Script/CompleteRPG.EGDCControlMode" },
		{ "Category", "Classes" },
		{ "Comment", "/** The pawn class used by players in each control mode. */" },
		{ "ModuleRelativePath", "Public/CompleteRPGPC.h" },
		{ "ToolTip", "The pawn class used by players in each control mode." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACompleteRPGPC_Statics::NewProp_ControlModePawnClass = { "ControlModePawnClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(ControlModePawnClass, ACompleteRPGPC), STRUCT_OFFSET(ACompleteRPGPC, ControlModePawnClass), Z_Construct_UClass_APawn_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACompleteRPGPC_Statics::NewProp_ControlModePawnClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACompleteRPGPC_Statics::NewProp_ControlModePawnClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACompleteRPGPC_Statics::NewProp_OnControlModeChanged_MetaData[] = {
		{ "Category", "CompleteRPGPC" },
		{ "ModuleRelativePath", "Public/CompleteRPGPC.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACompleteRPGPC_Statics::NewProp_OnControlModeChanged = { "OnControlModeChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACompleteRPGPC, OnControlModeChanged), Z_Construct_UDelegateFunction_CompleteRPG_ControlModeChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ACompleteRPGPC_Statics::NewProp_OnControlModeChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACompleteRPGPC_Statics::NewProp_OnControlModeChanged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACompleteRPGPC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompleteRPGPC_Statics::NewProp_JumpToBookmarkCameraHoldBlackTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompleteRPGPC_Statics::NewProp_JumpToBookmarkCameraFadeTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompleteRPGPC_Statics::NewProp_ControlModePawnClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompleteRPGPC_Statics::NewProp_OnControlModeChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACompleteRPGPC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACompleteRPGPC>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACompleteRPGPC_Statics::ClassParams = {
		&ACompleteRPGPC::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACompleteRPGPC_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACompleteRPGPC_Statics::PropPointers),
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACompleteRPGPC_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACompleteRPGPC_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACompleteRPGPC()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACompleteRPGPC_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACompleteRPGPC, 2627505246);
	template<> COMPLETERPG_API UClass* StaticClass<ACompleteRPGPC>()
	{
		return ACompleteRPGPC::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACompleteRPGPC(Z_Construct_UClass_ACompleteRPGPC, &ACompleteRPGPC::StaticClass, TEXT("/Script/CompleteRPG"), TEXT("ACompleteRPGPC"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACompleteRPGPC);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
