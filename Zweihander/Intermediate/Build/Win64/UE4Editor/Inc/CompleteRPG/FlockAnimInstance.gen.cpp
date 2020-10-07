// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CompleteRPG/Public/FlockAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlockAnimInstance() {}
// Cross Module References
	COMPLETERPG_API UClass* Z_Construct_UClass_UFlockAnimInstance_NoRegister();
	COMPLETERPG_API UClass* Z_Construct_UClass_UFlockAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_CompleteRPG();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	DEFINE_FUNCTION(UFlockAnimInstance::execGetRunAnimationSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRunAnimationSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFlockAnimInstance::execGetWalkAnimationSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetWalkAnimationSpeed();
		P_NATIVE_END;
	}
	void UFlockAnimInstance::StaticRegisterNativesUFlockAnimInstance()
	{
		UClass* Class = UFlockAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRunAnimationSpeed", &UFlockAnimInstance::execGetRunAnimationSpeed },
			{ "GetWalkAnimationSpeed", &UFlockAnimInstance::execGetWalkAnimationSpeed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFlockAnimInstance_GetRunAnimationSpeed_Statics
	{
		struct FlockAnimInstance_eventGetRunAnimationSpeed_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlockAnimInstance_GetRunAnimationSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlockAnimInstance_eventGetRunAnimationSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlockAnimInstance_GetRunAnimationSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlockAnimInstance_GetRunAnimationSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlockAnimInstance_GetRunAnimationSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Transitions" },
		{ "ModuleRelativePath", "Public/FlockAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlockAnimInstance_GetRunAnimationSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlockAnimInstance, nullptr, "GetRunAnimationSpeed", nullptr, nullptr, sizeof(FlockAnimInstance_eventGetRunAnimationSpeed_Parms), Z_Construct_UFunction_UFlockAnimInstance_GetRunAnimationSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlockAnimInstance_GetRunAnimationSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlockAnimInstance_GetRunAnimationSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlockAnimInstance_GetRunAnimationSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlockAnimInstance_GetRunAnimationSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlockAnimInstance_GetRunAnimationSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlockAnimInstance_GetWalkAnimationSpeed_Statics
	{
		struct FlockAnimInstance_eventGetWalkAnimationSpeed_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlockAnimInstance_GetWalkAnimationSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlockAnimInstance_eventGetWalkAnimationSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlockAnimInstance_GetWalkAnimationSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlockAnimInstance_GetWalkAnimationSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlockAnimInstance_GetWalkAnimationSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Transitions" },
		{ "ModuleRelativePath", "Public/FlockAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlockAnimInstance_GetWalkAnimationSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlockAnimInstance, nullptr, "GetWalkAnimationSpeed", nullptr, nullptr, sizeof(FlockAnimInstance_eventGetWalkAnimationSpeed_Parms), Z_Construct_UFunction_UFlockAnimInstance_GetWalkAnimationSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlockAnimInstance_GetWalkAnimationSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlockAnimInstance_GetWalkAnimationSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlockAnimInstance_GetWalkAnimationSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlockAnimInstance_GetWalkAnimationSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlockAnimInstance_GetWalkAnimationSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFlockAnimInstance_NoRegister()
	{
		return UFlockAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UFlockAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunStartIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RunStartIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TurnAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpeedMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WalkSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WalkSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RunSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransitionDelayTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TransitionDelayTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bolt90Threshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Bolt90Threshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TwitchWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TwitchWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TwitchTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TwitchTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetTwitchWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetTwitchWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InclineRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InclineRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestedSpeedSmoothed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RequestedSpeedSmoothed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnRateSmoothed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TurnRateSmoothed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestedSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RequestedSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnDeltaSmoothed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TurnDeltaSmoothed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bolt180Threshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Bolt180Threshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpDownAim_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UpDownAim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftRightAim_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeftRightAim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPlayerNearby_MetaData[];
#endif
		static void NewProp_bPlayerNearby_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlayerNearby;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TurnThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnDelta_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TurnDelta;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RunThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInAir_MetaData[];
#endif
		static void NewProp_bIsInAir_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInAir;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsMoving_MetaData[];
#endif
		static void NewProp_bIsMoving_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMoving;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlockAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_CompleteRPG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFlockAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFlockAnimInstance_GetRunAnimationSpeed, "GetRunAnimationSpeed" }, // 1162759847
		{ &Z_Construct_UFunction_UFlockAnimInstance_GetWalkAnimationSpeed, "GetWalkAnimationSpeed" }, // 3667091492
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlockAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** One agent in a crowd */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "FlockAnimInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FlockAnimInstance.h" },
		{ "ToolTip", "One agent in a crowd" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_RunStartIndex_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/FlockAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_RunStartIndex = { "RunStartIndex", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlockAnimInstance, RunStartIndex), METADATA_PARAMS(Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_RunStartIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_RunStartIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_TurnAmount_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/FlockAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_TurnAmount = { "TurnAmount", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlockAnimInstance, TurnAmount), METADATA_PARAMS(Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_TurnAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_TurnAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_SpeedMultiplier_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/FlockAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_SpeedMultiplier = { "SpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlockAnimInstance, SpeedMultiplier), METADATA_PARAMS(Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_SpeedMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_SpeedMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_WalkSpeed_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/FlockAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_WalkSpeed = { "WalkSpeed", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlockAnimInstance, WalkSpeed), METADATA_PARAMS(Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_WalkSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_WalkSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_RunSpeed_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/FlockAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_RunSpeed = { "RunSpeed", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlockAnimInstance, RunSpeed), METADATA_PARAMS(Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_RunSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_RunSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_TransitionDelayTimer_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/FlockAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_TransitionDelayTimer = { "TransitionDelayTimer", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlockAnimInstance, TransitionDelayTimer), METADATA_PARAMS(Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_TransitionDelayTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_TransitionDelayTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_Bolt90Threshold_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/FlockAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_Bolt90Threshold = { "Bolt90Threshold", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlockAnimInstance, Bolt90Threshold), METADATA_PARAMS(Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_Bolt90Threshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_Bolt90Threshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_TwitchWeight_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/FlockAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_TwitchWeight = { "TwitchWeight", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlockAnimInstance, TwitchWeight), METADATA_PARAMS(Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_TwitchWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_TwitchWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_TwitchTimer_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/FlockAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_TwitchTimer = { "TwitchTimer", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlockAnimInstance, TwitchTimer), METADATA_PARAMS(Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_TwitchTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_TwitchTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_TargetTwitchWeight_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/FlockAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_TargetTwitchWeight = { "TargetTwitchWeight", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlockAnimInstance, TargetTwitchWeight), METADATA_PARAMS(Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_TargetTwitchWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_TargetTwitchWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_InclineRotation_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/FlockAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_InclineRotation = { "InclineRotation", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlockAnimInstance, InclineRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_InclineRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_InclineRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_RequestedSpeedSmoothed_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/FlockAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_RequestedSpeedSmoothed = { "RequestedSpeedSmoothed", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlockAnimInstance, RequestedSpeedSmoothed), METADATA_PARAMS(Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_RequestedSpeedSmoothed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_RequestedSpeedSmoothed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_TurnRateSmoothed_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/FlockAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_TurnRateSmoothed = { "TurnRateSmoothed", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlockAnimInstance, TurnRateSmoothed), METADATA_PARAMS(Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_TurnRateSmoothed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_TurnRateSmoothed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_RequestedSpeed_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/FlockAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_RequestedSpeed = { "RequestedSpeed", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlockAnimInstance, RequestedSpeed), METADATA_PARAMS(Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_RequestedSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_RequestedSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_TurnDeltaSmoothed_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/FlockAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_TurnDeltaSmoothed = { "TurnDeltaSmoothed", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlockAnimInstance, TurnDeltaSmoothed), METADATA_PARAMS(Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_TurnDeltaSmoothed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_TurnDeltaSmoothed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_Bolt180Threshold_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/FlockAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_Bolt180Threshold = { "Bolt180Threshold", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlockAnimInstance, Bolt180Threshold), METADATA_PARAMS(Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_Bolt180Threshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_Bolt180Threshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_UpDownAim_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/FlockAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_UpDownAim = { "UpDownAim", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlockAnimInstance, UpDownAim), METADATA_PARAMS(Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_UpDownAim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_UpDownAim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_LeftRightAim_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/FlockAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_LeftRightAim = { "LeftRightAim", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlockAnimInstance, LeftRightAim), METADATA_PARAMS(Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_LeftRightAim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_LeftRightAim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_bPlayerNearby_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/FlockAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_bPlayerNearby_SetBit(void* Obj)
	{
		((UFlockAnimInstance*)Obj)->bPlayerNearby = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_bPlayerNearby = { "bPlayerNearby", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFlockAnimInstance), &Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_bPlayerNearby_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_bPlayerNearby_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_bPlayerNearby_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_TurnThreshold_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/FlockAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_TurnThreshold = { "TurnThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlockAnimInstance, TurnThreshold), METADATA_PARAMS(Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_TurnThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_TurnThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_TurnDelta_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/FlockAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_TurnDelta = { "TurnDelta", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlockAnimInstance, TurnDelta), METADATA_PARAMS(Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_TurnDelta_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_TurnDelta_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_MaxSpeed_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/FlockAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlockAnimInstance, MaxSpeed), METADATA_PARAMS(Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_MaxSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_MaxSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_RunThreshold_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/FlockAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_RunThreshold = { "RunThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlockAnimInstance, RunThreshold), METADATA_PARAMS(Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_RunThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_RunThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/FlockAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlockAnimInstance, Speed), METADATA_PARAMS(Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_bIsInAir_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/FlockAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_bIsInAir_SetBit(void* Obj)
	{
		((UFlockAnimInstance*)Obj)->bIsInAir = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_bIsInAir = { "bIsInAir", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFlockAnimInstance), &Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_bIsInAir_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_bIsInAir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_bIsInAir_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_bIsMoving_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/FlockAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_bIsMoving_SetBit(void* Obj)
	{
		((UFlockAnimInstance*)Obj)->bIsMoving = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_bIsMoving = { "bIsMoving", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFlockAnimInstance), &Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_bIsMoving_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_bIsMoving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_bIsMoving_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlockAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_RunStartIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_TurnAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_SpeedMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_WalkSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_RunSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_TransitionDelayTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_Bolt90Threshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_TwitchWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_TwitchTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_TargetTwitchWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_InclineRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_RequestedSpeedSmoothed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_TurnRateSmoothed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_RequestedSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_TurnDeltaSmoothed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_Bolt180Threshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_UpDownAim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_LeftRightAim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_bPlayerNearby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_TurnThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_TurnDelta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_MaxSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_RunThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_bIsInAir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlockAnimInstance_Statics::NewProp_bIsMoving,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlockAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlockAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFlockAnimInstance_Statics::ClassParams = {
		&UFlockAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFlockAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFlockAnimInstance_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UFlockAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFlockAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlockAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFlockAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFlockAnimInstance, 1665176534);
	template<> COMPLETERPG_API UClass* StaticClass<UFlockAnimInstance>()
	{
		return UFlockAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFlockAnimInstance(Z_Construct_UClass_UFlockAnimInstance, &UFlockAnimInstance::StaticClass, TEXT("/Script/CompleteRPG"), TEXT("UFlockAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlockAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
