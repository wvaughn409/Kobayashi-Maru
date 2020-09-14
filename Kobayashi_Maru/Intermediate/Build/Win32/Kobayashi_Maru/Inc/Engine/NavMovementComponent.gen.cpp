// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/GameFramework/NavMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavMovementComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UNavMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMovementComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMovementProperties();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavAgentProperties();
// End Cross Module References
	DEFINE_FUNCTION(UNavMovementComponent::execIsFlying)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsFlying();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNavMovementComponent::execIsSwimming)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSwimming();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNavMovementComponent::execIsMovingOnGround)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMovingOnGround();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNavMovementComponent::execIsFalling)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsFalling();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNavMovementComponent::execIsCrouching)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCrouching();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNavMovementComponent::execStopMovementKeepPathing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopMovementKeepPathing();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNavMovementComponent::execStopActiveMovement)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopActiveMovement();
		P_NATIVE_END;
	}
	void UNavMovementComponent::StaticRegisterNativesUNavMovementComponent()
	{
		UClass* Class = UNavMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsCrouching", &UNavMovementComponent::execIsCrouching },
			{ "IsFalling", &UNavMovementComponent::execIsFalling },
			{ "IsFlying", &UNavMovementComponent::execIsFlying },
			{ "IsMovingOnGround", &UNavMovementComponent::execIsMovingOnGround },
			{ "IsSwimming", &UNavMovementComponent::execIsSwimming },
			{ "StopActiveMovement", &UNavMovementComponent::execStopActiveMovement },
			{ "StopMovementKeepPathing", &UNavMovementComponent::execStopMovementKeepPathing },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNavMovementComponent_IsCrouching_Statics
	{
		struct NavMovementComponent_eventIsCrouching_Parms
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
	void Z_Construct_UFunction_UNavMovementComponent_IsCrouching_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NavMovementComponent_eventIsCrouching_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavMovementComponent_IsCrouching_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NavMovementComponent_eventIsCrouching_Parms), &Z_Construct_UFunction_UNavMovementComponent_IsCrouching_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavMovementComponent_IsCrouching_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavMovementComponent_IsCrouching_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavMovementComponent_IsCrouching_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|NavMovement" },
		{ "Comment", "/** Returns true if currently crouching */" },
		{ "ModuleRelativePath", "Classes/GameFramework/NavMovementComponent.h" },
		{ "ToolTip", "Returns true if currently crouching" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavMovementComponent_IsCrouching_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavMovementComponent, nullptr, "IsCrouching", nullptr, nullptr, sizeof(NavMovementComponent_eventIsCrouching_Parms), Z_Construct_UFunction_UNavMovementComponent_IsCrouching_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavMovementComponent_IsCrouching_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavMovementComponent_IsCrouching_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavMovementComponent_IsCrouching_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavMovementComponent_IsCrouching()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavMovementComponent_IsCrouching_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavMovementComponent_IsFalling_Statics
	{
		struct NavMovementComponent_eventIsFalling_Parms
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
	void Z_Construct_UFunction_UNavMovementComponent_IsFalling_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NavMovementComponent_eventIsFalling_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavMovementComponent_IsFalling_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NavMovementComponent_eventIsFalling_Parms), &Z_Construct_UFunction_UNavMovementComponent_IsFalling_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavMovementComponent_IsFalling_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavMovementComponent_IsFalling_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavMovementComponent_IsFalling_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|NavMovement" },
		{ "Comment", "/** Returns true if currently falling (not flying, in a non-fluid volume, and not on the ground) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/NavMovementComponent.h" },
		{ "ToolTip", "Returns true if currently falling (not flying, in a non-fluid volume, and not on the ground)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavMovementComponent_IsFalling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavMovementComponent, nullptr, "IsFalling", nullptr, nullptr, sizeof(NavMovementComponent_eventIsFalling_Parms), Z_Construct_UFunction_UNavMovementComponent_IsFalling_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavMovementComponent_IsFalling_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavMovementComponent_IsFalling_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavMovementComponent_IsFalling_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavMovementComponent_IsFalling()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavMovementComponent_IsFalling_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavMovementComponent_IsFlying_Statics
	{
		struct NavMovementComponent_eventIsFlying_Parms
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
	void Z_Construct_UFunction_UNavMovementComponent_IsFlying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NavMovementComponent_eventIsFlying_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavMovementComponent_IsFlying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NavMovementComponent_eventIsFlying_Parms), &Z_Construct_UFunction_UNavMovementComponent_IsFlying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavMovementComponent_IsFlying_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavMovementComponent_IsFlying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavMovementComponent_IsFlying_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|NavMovement" },
		{ "Comment", "/** Returns true if currently flying (moving through a non-fluid volume without resting on the ground) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/NavMovementComponent.h" },
		{ "ToolTip", "Returns true if currently flying (moving through a non-fluid volume without resting on the ground)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavMovementComponent_IsFlying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavMovementComponent, nullptr, "IsFlying", nullptr, nullptr, sizeof(NavMovementComponent_eventIsFlying_Parms), Z_Construct_UFunction_UNavMovementComponent_IsFlying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavMovementComponent_IsFlying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavMovementComponent_IsFlying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavMovementComponent_IsFlying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavMovementComponent_IsFlying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavMovementComponent_IsFlying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavMovementComponent_IsMovingOnGround_Statics
	{
		struct NavMovementComponent_eventIsMovingOnGround_Parms
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
	void Z_Construct_UFunction_UNavMovementComponent_IsMovingOnGround_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NavMovementComponent_eventIsMovingOnGround_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavMovementComponent_IsMovingOnGround_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NavMovementComponent_eventIsMovingOnGround_Parms), &Z_Construct_UFunction_UNavMovementComponent_IsMovingOnGround_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavMovementComponent_IsMovingOnGround_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavMovementComponent_IsMovingOnGround_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavMovementComponent_IsMovingOnGround_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|NavMovement" },
		{ "Comment", "/** Returns true if currently moving on the ground (e.g. walking or driving) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/NavMovementComponent.h" },
		{ "ToolTip", "Returns true if currently moving on the ground (e.g. walking or driving)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavMovementComponent_IsMovingOnGround_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavMovementComponent, nullptr, "IsMovingOnGround", nullptr, nullptr, sizeof(NavMovementComponent_eventIsMovingOnGround_Parms), Z_Construct_UFunction_UNavMovementComponent_IsMovingOnGround_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavMovementComponent_IsMovingOnGround_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavMovementComponent_IsMovingOnGround_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavMovementComponent_IsMovingOnGround_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavMovementComponent_IsMovingOnGround()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavMovementComponent_IsMovingOnGround_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavMovementComponent_IsSwimming_Statics
	{
		struct NavMovementComponent_eventIsSwimming_Parms
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
	void Z_Construct_UFunction_UNavMovementComponent_IsSwimming_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NavMovementComponent_eventIsSwimming_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavMovementComponent_IsSwimming_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NavMovementComponent_eventIsSwimming_Parms), &Z_Construct_UFunction_UNavMovementComponent_IsSwimming_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavMovementComponent_IsSwimming_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavMovementComponent_IsSwimming_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavMovementComponent_IsSwimming_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|NavMovement" },
		{ "Comment", "/** Returns true if currently swimming (moving through a fluid volume) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/NavMovementComponent.h" },
		{ "ToolTip", "Returns true if currently swimming (moving through a fluid volume)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavMovementComponent_IsSwimming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavMovementComponent, nullptr, "IsSwimming", nullptr, nullptr, sizeof(NavMovementComponent_eventIsSwimming_Parms), Z_Construct_UFunction_UNavMovementComponent_IsSwimming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavMovementComponent_IsSwimming_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavMovementComponent_IsSwimming_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavMovementComponent_IsSwimming_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavMovementComponent_IsSwimming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavMovementComponent_IsSwimming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavMovementComponent_StopActiveMovement_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavMovementComponent_StopActiveMovement_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|PawnMovement" },
		{ "Comment", "/** Stops applying further movement (usually zeros acceleration). */" },
		{ "ModuleRelativePath", "Classes/GameFramework/NavMovementComponent.h" },
		{ "ToolTip", "Stops applying further movement (usually zeros acceleration)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavMovementComponent_StopActiveMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavMovementComponent, nullptr, "StopActiveMovement", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavMovementComponent_StopActiveMovement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavMovementComponent_StopActiveMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavMovementComponent_StopActiveMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavMovementComponent_StopActiveMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavMovementComponent_StopMovementKeepPathing_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavMovementComponent_StopMovementKeepPathing_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Movement" },
		{ "Comment", "/** Stops movement immediately (reset velocity) but keeps following current path */" },
		{ "ModuleRelativePath", "Classes/GameFramework/NavMovementComponent.h" },
		{ "ToolTip", "Stops movement immediately (reset velocity) but keeps following current path" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavMovementComponent_StopMovementKeepPathing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavMovementComponent, nullptr, "StopMovementKeepPathing", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavMovementComponent_StopMovementKeepPathing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavMovementComponent_StopMovementKeepPathing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavMovementComponent_StopMovementKeepPathing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavMovementComponent_StopMovementKeepPathing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UNavMovementComponent_NoRegister()
	{
		return UNavMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UNavMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathFollowingComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PathFollowingComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementState_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MovementState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseFixedBrakingDistanceForPaths_MetaData[];
#endif
		static void NewProp_bUseFixedBrakingDistanceForPaths_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseFixedBrakingDistanceForPaths;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseAccelerationForPaths_MetaData[];
#endif
		static void NewProp_bUseAccelerationForPaths_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseAccelerationForPaths;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpdateNavAgentWithOwnersCollision_MetaData[];
#endif
		static void NewProp_bUpdateNavAgentWithOwnersCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateNavAgentWithOwnersCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FixedPathBrakingDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FixedPathBrakingDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavAgentProps_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NavAgentProps;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNavMovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNavMovementComponent_IsCrouching, "IsCrouching" }, // 3698552987
		{ &Z_Construct_UFunction_UNavMovementComponent_IsFalling, "IsFalling" }, // 4181644632
		{ &Z_Construct_UFunction_UNavMovementComponent_IsFlying, "IsFlying" }, // 2581267787
		{ &Z_Construct_UFunction_UNavMovementComponent_IsMovingOnGround, "IsMovingOnGround" }, // 2747596229
		{ &Z_Construct_UFunction_UNavMovementComponent_IsSwimming, "IsSwimming" }, // 2838600837
		{ &Z_Construct_UFunction_UNavMovementComponent_StopActiveMovement, "StopActiveMovement" }, // 3210450055
		{ &Z_Construct_UFunction_UNavMovementComponent_StopMovementKeepPathing, "StopMovementKeepPathing" }, // 2668398412
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * NavMovementComponent defines base functionality for MovementComponents that move any 'agent' that may be involved in AI pathfinding.\n */" },
		{ "IncludePath", "GameFramework/NavMovementComponent.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/NavMovementComponent.h" },
		{ "ToolTip", "NavMovementComponent defines base functionality for MovementComponents that move any 'agent' that may be involved in AI pathfinding." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_PathFollowingComp_MetaData[] = {
		{ "Comment", "/** object implementing IPathFollowingAgentInterface. Is private to control access to it.\n\x09 *\x09@see SetPathFollowingAgent, GetPathFollowingAgent */" },
		{ "ModuleRelativePath", "Classes/GameFramework/NavMovementComponent.h" },
		{ "ToolTip", "object implementing IPathFollowingAgentInterface. Is private to control access to it.\n    @see SetPathFollowingAgent, GetPathFollowingAgent" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_PathFollowingComp = { "PathFollowingComp", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNavMovementComponent, PathFollowingComp), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_PathFollowingComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_PathFollowingComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_MovementState_MetaData[] = {
		{ "Comment", "/** Expresses runtime state of character's movement. Put all temporal changes to movement properties here */" },
		{ "ModuleRelativePath", "Classes/GameFramework/NavMovementComponent.h" },
		{ "ToolTip", "Expresses runtime state of character's movement. Put all temporal changes to movement properties here" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_MovementState = { "MovementState", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNavMovementComponent, MovementState), Z_Construct_UScriptStruct_FMovementProperties, METADATA_PARAMS(Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_MovementState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_MovementState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_bUseFixedBrakingDistanceForPaths_MetaData[] = {
		{ "Category", "NavMovement" },
		{ "Comment", "/** If set, FixedPathBrakingDistance will be used for path following deceleration */" },
		{ "EditCondition", "bUseAccelerationForPaths" },
		{ "ModuleRelativePath", "Classes/GameFramework/NavMovementComponent.h" },
		{ "ToolTip", "If set, FixedPathBrakingDistance will be used for path following deceleration" },
	};
#endif
	void Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_bUseFixedBrakingDistanceForPaths_SetBit(void* Obj)
	{
		((UNavMovementComponent*)Obj)->bUseFixedBrakingDistanceForPaths = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_bUseFixedBrakingDistanceForPaths = { "bUseFixedBrakingDistanceForPaths", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNavMovementComponent), &Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_bUseFixedBrakingDistanceForPaths_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_bUseFixedBrakingDistanceForPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_bUseFixedBrakingDistanceForPaths_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_bUseAccelerationForPaths_MetaData[] = {
		{ "Category", "NavMovement" },
		{ "Comment", "/** If set, pathfollowing will control character movement via acceleration values. If false, it will set velocities directly. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/NavMovementComponent.h" },
		{ "ToolTip", "If set, pathfollowing will control character movement via acceleration values. If false, it will set velocities directly." },
	};
#endif
	void Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_bUseAccelerationForPaths_SetBit(void* Obj)
	{
		((UNavMovementComponent*)Obj)->bUseAccelerationForPaths = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_bUseAccelerationForPaths = { "bUseAccelerationForPaths", nullptr, (EPropertyFlags)0x0020080000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNavMovementComponent), &Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_bUseAccelerationForPaths_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_bUseAccelerationForPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_bUseAccelerationForPaths_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_bUpdateNavAgentWithOwnersCollision_MetaData[] = {
		{ "Category", "NavMovement" },
		{ "Comment", "/** If set to true NavAgentProps' radius and height will be updated with Owner's collision capsule size */" },
		{ "ModuleRelativePath", "Classes/GameFramework/NavMovementComponent.h" },
		{ "ToolTip", "If set to true NavAgentProps' radius and height will be updated with Owner's collision capsule size" },
	};
#endif
	void Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_bUpdateNavAgentWithOwnersCollision_SetBit(void* Obj)
	{
		((UNavMovementComponent*)Obj)->bUpdateNavAgentWithOwnersCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_bUpdateNavAgentWithOwnersCollision = { "bUpdateNavAgentWithOwnersCollision", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNavMovementComponent), &Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_bUpdateNavAgentWithOwnersCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_bUpdateNavAgentWithOwnersCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_bUpdateNavAgentWithOwnersCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_FixedPathBrakingDistance_MetaData[] = {
		{ "Category", "NavMovement" },
		{ "Comment", "/** Braking distance override used with acceleration driven path following (bUseAccelerationForPaths) */" },
		{ "EditCondition", "bUseFixedBrakingDistanceForPaths" },
		{ "ModuleRelativePath", "Classes/GameFramework/NavMovementComponent.h" },
		{ "ToolTip", "Braking distance override used with acceleration driven path following (bUseAccelerationForPaths)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_FixedPathBrakingDistance = { "FixedPathBrakingDistance", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNavMovementComponent, FixedPathBrakingDistance), METADATA_PARAMS(Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_FixedPathBrakingDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_FixedPathBrakingDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_NavAgentProps_MetaData[] = {
		{ "Category", "NavMovement" },
		{ "Comment", "/** Properties that define how the component can move. */" },
		{ "DisplayName", "Movement Capabilities" },
		{ "Keywords", "Nav Agent" },
		{ "ModuleRelativePath", "Classes/GameFramework/NavMovementComponent.h" },
		{ "ToolTip", "Properties that define how the component can move." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_NavAgentProps = { "NavAgentProps", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNavMovementComponent, NavAgentProps), Z_Construct_UScriptStruct_FNavAgentProperties, METADATA_PARAMS(Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_NavAgentProps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_NavAgentProps_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNavMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_PathFollowingComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_MovementState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_bUseFixedBrakingDistanceForPaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_bUseAccelerationForPaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_bUpdateNavAgentWithOwnersCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_FixedPathBrakingDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_NavAgentProps,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNavMovementComponent_Statics::ClassParams = {
		&UNavMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNavMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNavMovementComponent_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UNavMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNavMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNavMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNavMovementComponent, 385802150);
	template<> ENGINE_API UClass* StaticClass<UNavMovementComponent>()
	{
		return UNavMovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavMovementComponent(Z_Construct_UClass_UNavMovementComponent, &UNavMovementComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UNavMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
