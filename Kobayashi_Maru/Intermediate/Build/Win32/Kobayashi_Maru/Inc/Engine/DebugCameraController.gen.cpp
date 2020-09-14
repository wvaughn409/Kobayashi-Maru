// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/DebugCameraController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDebugCameraController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ADebugCameraController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ADebugCameraController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPlayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDrawFrustumComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ADebugCameraController::execSetPawnMovementSpeedScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewSpeedScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPawnMovementSpeedScale(Z_Param_NewSpeedScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADebugCameraController::execGetSelectedActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetSelectedActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADebugCameraController::execToggleDisplay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleDisplay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADebugCameraController::execShowDebugSelectedInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowDebugSelectedInfo();
		P_NATIVE_END;
	}
	static FName NAME_ADebugCameraController_ReceiveOnActivate = FName(TEXT("ReceiveOnActivate"));
	void ADebugCameraController::ReceiveOnActivate(APlayerController* OriginalPC)
	{
		DebugCameraController_eventReceiveOnActivate_Parms Parms;
		Parms.OriginalPC=OriginalPC;
		ProcessEvent(FindFunctionChecked(NAME_ADebugCameraController_ReceiveOnActivate),&Parms);
	}
	static FName NAME_ADebugCameraController_ReceiveOnActorSelected = FName(TEXT("ReceiveOnActorSelected"));
	void ADebugCameraController::ReceiveOnActorSelected(AActor* NewSelectedActor, FVector const& SelectHitLocation, FVector const& SelectHitNormal, FHitResult const& Hit)
	{
		DebugCameraController_eventReceiveOnActorSelected_Parms Parms;
		Parms.NewSelectedActor=NewSelectedActor;
		Parms.SelectHitLocation=SelectHitLocation;
		Parms.SelectHitNormal=SelectHitNormal;
		Parms.Hit=Hit;
		ProcessEvent(FindFunctionChecked(NAME_ADebugCameraController_ReceiveOnActorSelected),&Parms);
	}
	static FName NAME_ADebugCameraController_ReceiveOnDeactivate = FName(TEXT("ReceiveOnDeactivate"));
	void ADebugCameraController::ReceiveOnDeactivate(APlayerController* RestoredPC)
	{
		DebugCameraController_eventReceiveOnDeactivate_Parms Parms;
		Parms.RestoredPC=RestoredPC;
		ProcessEvent(FindFunctionChecked(NAME_ADebugCameraController_ReceiveOnDeactivate),&Parms);
	}
	void ADebugCameraController::StaticRegisterNativesADebugCameraController()
	{
		UClass* Class = ADebugCameraController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSelectedActor", &ADebugCameraController::execGetSelectedActor },
			{ "SetPawnMovementSpeedScale", &ADebugCameraController::execSetPawnMovementSpeedScale },
			{ "ShowDebugSelectedInfo", &ADebugCameraController::execShowDebugSelectedInfo },
			{ "ToggleDisplay", &ADebugCameraController::execToggleDisplay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADebugCameraController_GetSelectedActor_Statics
	{
		struct DebugCameraController_eventGetSelectedActor_Parms
		{
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADebugCameraController_GetSelectedActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DebugCameraController_eventGetSelectedActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADebugCameraController_GetSelectedActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADebugCameraController_GetSelectedActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADebugCameraController_GetSelectedActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug Camera" },
		{ "Comment", "/** Returns the currently selected actor, or null if it is invalid or not set */" },
		{ "ModuleRelativePath", "Classes/Engine/DebugCameraController.h" },
		{ "ToolTip", "Returns the currently selected actor, or null if it is invalid or not set" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADebugCameraController_GetSelectedActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADebugCameraController, nullptr, "GetSelectedActor", nullptr, nullptr, sizeof(DebugCameraController_eventGetSelectedActor_Parms), Z_Construct_UFunction_ADebugCameraController_GetSelectedActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADebugCameraController_GetSelectedActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADebugCameraController_GetSelectedActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADebugCameraController_GetSelectedActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADebugCameraController_GetSelectedActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADebugCameraController_GetSelectedActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADebugCameraController_ReceiveOnActivate_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OriginalPC;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADebugCameraController_ReceiveOnActivate_Statics::NewProp_OriginalPC = { "OriginalPC", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DebugCameraController_eventReceiveOnActivate_Parms, OriginalPC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADebugCameraController_ReceiveOnActivate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADebugCameraController_ReceiveOnActivate_Statics::NewProp_OriginalPC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADebugCameraController_ReceiveOnActivate_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** \n\x09* Function called on activation of debug camera controller.\n\x09* @param OriginalPC The active player controller before this debug camera controller was possessed by the player.\n\x09*/" },
		{ "DisplayName", "OnActivate" },
		{ "ModuleRelativePath", "Classes/Engine/DebugCameraController.h" },
		{ "ToolTip", "Function called on activation of debug camera controller.\n@param OriginalPC The active player controller before this debug camera controller was possessed by the player." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADebugCameraController_ReceiveOnActivate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADebugCameraController, nullptr, "ReceiveOnActivate", nullptr, nullptr, sizeof(DebugCameraController_eventReceiveOnActivate_Parms), Z_Construct_UFunction_ADebugCameraController_ReceiveOnActivate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADebugCameraController_ReceiveOnActivate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADebugCameraController_ReceiveOnActivate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADebugCameraController_ReceiveOnActivate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADebugCameraController_ReceiveOnActivate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADebugCameraController_ReceiveOnActivate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADebugCameraController_ReceiveOnActorSelected_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectHitNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SelectHitNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectHitLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SelectHitLocation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewSelectedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADebugCameraController_ReceiveOnActorSelected_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADebugCameraController_ReceiveOnActorSelected_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DebugCameraController_eventReceiveOnActorSelected_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ADebugCameraController_ReceiveOnActorSelected_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADebugCameraController_ReceiveOnActorSelected_Statics::NewProp_Hit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADebugCameraController_ReceiveOnActorSelected_Statics::NewProp_SelectHitNormal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADebugCameraController_ReceiveOnActorSelected_Statics::NewProp_SelectHitNormal = { "SelectHitNormal", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DebugCameraController_eventReceiveOnActorSelected_Parms, SelectHitNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ADebugCameraController_ReceiveOnActorSelected_Statics::NewProp_SelectHitNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADebugCameraController_ReceiveOnActorSelected_Statics::NewProp_SelectHitNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADebugCameraController_ReceiveOnActorSelected_Statics::NewProp_SelectHitLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADebugCameraController_ReceiveOnActorSelected_Statics::NewProp_SelectHitLocation = { "SelectHitLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DebugCameraController_eventReceiveOnActorSelected_Parms, SelectHitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ADebugCameraController_ReceiveOnActorSelected_Statics::NewProp_SelectHitLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADebugCameraController_ReceiveOnActorSelected_Statics::NewProp_SelectHitLocation_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADebugCameraController_ReceiveOnActorSelected_Statics::NewProp_NewSelectedActor = { "NewSelectedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DebugCameraController_eventReceiveOnActorSelected_Parms, NewSelectedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADebugCameraController_ReceiveOnActorSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADebugCameraController_ReceiveOnActorSelected_Statics::NewProp_Hit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADebugCameraController_ReceiveOnActorSelected_Statics::NewProp_SelectHitNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADebugCameraController_ReceiveOnActorSelected_Statics::NewProp_SelectHitLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADebugCameraController_ReceiveOnActorSelected_Statics::NewProp_NewSelectedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADebugCameraController_ReceiveOnActorSelected_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug Camera" },
		{ "Comment", "/**\n\x09 * Called when an actor has been selected with the primary key (e.g. left mouse button).\n\x09 *\n\x09 * The selection trace starts from the center of the debug camera's view.\n\x09 *\n\x09 * @param SelectHitLocation The exact world-space location where the selection trace hit the New Selected Actor.\n\x09 * @param SelectHitNormal The world-space surface normal of the New Selected Actor at the hit location.\n\x09 */" },
		{ "DisplayName", "OnActorSelected" },
		{ "ModuleRelativePath", "Classes/Engine/DebugCameraController.h" },
		{ "ToolTip", "Called when an actor has been selected with the primary key (e.g. left mouse button).\n\nThe selection trace starts from the center of the debug camera's view.\n\n@param SelectHitLocation The exact world-space location where the selection trace hit the New Selected Actor.\n@param SelectHitNormal The world-space surface normal of the New Selected Actor at the hit location." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADebugCameraController_ReceiveOnActorSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADebugCameraController, nullptr, "ReceiveOnActorSelected", nullptr, nullptr, sizeof(DebugCameraController_eventReceiveOnActorSelected_Parms), Z_Construct_UFunction_ADebugCameraController_ReceiveOnActorSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADebugCameraController_ReceiveOnActorSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C80800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADebugCameraController_ReceiveOnActorSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADebugCameraController_ReceiveOnActorSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADebugCameraController_ReceiveOnActorSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADebugCameraController_ReceiveOnActorSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADebugCameraController_ReceiveOnDeactivate_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RestoredPC;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADebugCameraController_ReceiveOnDeactivate_Statics::NewProp_RestoredPC = { "RestoredPC", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DebugCameraController_eventReceiveOnDeactivate_Parms, RestoredPC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADebugCameraController_ReceiveOnDeactivate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADebugCameraController_ReceiveOnDeactivate_Statics::NewProp_RestoredPC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADebugCameraController_ReceiveOnDeactivate_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** \n\x09* Function called on deactivation of debug camera controller.\n\x09* @param RestoredPC The Player Controller that the player input is being returned to.\n\x09*/" },
		{ "DisplayName", "OnDeactivate" },
		{ "ModuleRelativePath", "Classes/Engine/DebugCameraController.h" },
		{ "ToolTip", "Function called on deactivation of debug camera controller.\n@param RestoredPC The Player Controller that the player input is being returned to." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADebugCameraController_ReceiveOnDeactivate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADebugCameraController, nullptr, "ReceiveOnDeactivate", nullptr, nullptr, sizeof(DebugCameraController_eventReceiveOnDeactivate_Parms), Z_Construct_UFunction_ADebugCameraController_ReceiveOnDeactivate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADebugCameraController_ReceiveOnDeactivate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADebugCameraController_ReceiveOnDeactivate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADebugCameraController_ReceiveOnDeactivate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADebugCameraController_ReceiveOnDeactivate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADebugCameraController_ReceiveOnDeactivate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADebugCameraController_SetPawnMovementSpeedScale_Statics
	{
		struct DebugCameraController_eventSetPawnMovementSpeedScale_Parms
		{
			float NewSpeedScale;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewSpeedScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADebugCameraController_SetPawnMovementSpeedScale_Statics::NewProp_NewSpeedScale = { "NewSpeedScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DebugCameraController_eventSetPawnMovementSpeedScale_Parms, NewSpeedScale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADebugCameraController_SetPawnMovementSpeedScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADebugCameraController_SetPawnMovementSpeedScale_Statics::NewProp_NewSpeedScale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADebugCameraController_SetPawnMovementSpeedScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug Camera" },
		{ "Comment", "/** Sets the pawn movement speed scale. */" },
		{ "ModuleRelativePath", "Classes/Engine/DebugCameraController.h" },
		{ "ToolTip", "Sets the pawn movement speed scale." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADebugCameraController_SetPawnMovementSpeedScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADebugCameraController, nullptr, "SetPawnMovementSpeedScale", nullptr, nullptr, sizeof(DebugCameraController_eventSetPawnMovementSpeedScale_Parms), Z_Construct_UFunction_ADebugCameraController_SetPawnMovementSpeedScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADebugCameraController_SetPawnMovementSpeedScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADebugCameraController_SetPawnMovementSpeedScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADebugCameraController_SetPawnMovementSpeedScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADebugCameraController_SetPawnMovementSpeedScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADebugCameraController_SetPawnMovementSpeedScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADebugCameraController_ShowDebugSelectedInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADebugCameraController_ShowDebugSelectedInfo_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Sets whether to show information about the selected actor on the debug camera HUD.t */" },
		{ "ModuleRelativePath", "Classes/Engine/DebugCameraController.h" },
		{ "ToolTip", "Sets whether to show information about the selected actor on the debug camera HUD.t" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADebugCameraController_ShowDebugSelectedInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADebugCameraController, nullptr, "ShowDebugSelectedInfo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020600, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADebugCameraController_ShowDebugSelectedInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADebugCameraController_ShowDebugSelectedInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADebugCameraController_ShowDebugSelectedInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADebugCameraController_ShowDebugSelectedInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADebugCameraController_ToggleDisplay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADebugCameraController_ToggleDisplay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug Camera" },
		{ "Comment", "/** Toggles the display of debug info and input commands for the Debug Camera. */" },
		{ "ModuleRelativePath", "Classes/Engine/DebugCameraController.h" },
		{ "ToolTip", "Toggles the display of debug info and input commands for the Debug Camera." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADebugCameraController_ToggleDisplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADebugCameraController, nullptr, "ToggleDisplay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADebugCameraController_ToggleDisplay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADebugCameraController_ToggleDisplay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADebugCameraController_ToggleDisplay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADebugCameraController_ToggleDisplay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADebugCameraController_NoRegister()
	{
		return ADebugCameraController::StaticClass();
	}
	struct Z_Construct_UClass_ADebugCameraController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialDecel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InitialDecel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialAccel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InitialAccel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialMaxSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InitialMaxSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpeedScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginalPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OriginalPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginalControllerRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OriginalControllerRef;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedHitPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SelectedHitPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectedComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectedActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawFrustum_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DrawFrustum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLastDisplayEnabled_MetaData[];
#endif
		static void NewProp_bLastDisplayEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLastDisplayEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsBufferVisualizationInputSetup_MetaData[];
#endif
		static void NewProp_bIsBufferVisualizationInputSetup_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsBufferVisualizationInputSetup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableBufferVisualizationFullMode_MetaData[];
#endif
		static void NewProp_bEnableBufferVisualizationFullMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableBufferVisualizationFullMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableBufferVisualization_MetaData[];
#endif
		static void NewProp_bEnableBufferVisualization_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableBufferVisualization;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOrbitPivotUseCenter_MetaData[];
#endif
		static void NewProp_bOrbitPivotUseCenter_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOrbitPivotUseCenter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsOrbitingSelectedActor_MetaData[];
#endif
		static void NewProp_bIsOrbitingSelectedActor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsOrbitingSelectedActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsFrozenRendering_MetaData[];
#endif
		static void NewProp_bIsFrozenRendering_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFrozenRendering;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowSelectedInfo_MetaData[];
#endif
		static void NewProp_bShowSelectedInfo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowSelectedInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADebugCameraController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADebugCameraController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADebugCameraController_GetSelectedActor, "GetSelectedActor" }, // 1697798169
		{ &Z_Construct_UFunction_ADebugCameraController_ReceiveOnActivate, "ReceiveOnActivate" }, // 1503486444
		{ &Z_Construct_UFunction_ADebugCameraController_ReceiveOnActorSelected, "ReceiveOnActorSelected" }, // 1514916217
		{ &Z_Construct_UFunction_ADebugCameraController_ReceiveOnDeactivate, "ReceiveOnDeactivate" }, // 3626097782
		{ &Z_Construct_UFunction_ADebugCameraController_SetPawnMovementSpeedScale, "SetPawnMovementSpeedScale" }, // 2651748764
		{ &Z_Construct_UFunction_ADebugCameraController_ShowDebugSelectedInfo, "ShowDebugSelectedInfo" }, // 2651258042
		{ &Z_Construct_UFunction_ADebugCameraController_ToggleDisplay, "ToggleDisplay" }, // 1951668046
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADebugCameraController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Camera controller that allows you to fly around a level mostly unrestricted by normal movement rules.\n*\n* To turn it on, please press Alt+C or both (left and right) analogs on XBox pad,\n* or use the \"ToggleDebugCamera\" console command. Check the debug camera bindings\n* in DefaultPawn.cpp for the camera controls.\n*/" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Engine/DebugCameraController.h" },
		{ "ModuleRelativePath", "Classes/Engine/DebugCameraController.h" },
		{ "ToolTip", "Camera controller that allows you to fly around a level mostly unrestricted by normal movement rules.\n\nTo turn it on, please press Alt+C or both (left and right) analogs on XBox pad,\nor use the \"ToggleDebugCamera\" console command. Check the debug camera bindings\nin DefaultPawn.cpp for the camera controls." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADebugCameraController_Statics::NewProp_InitialDecel_MetaData[] = {
		{ "Category", "Debug Camera" },
		{ "Comment", "/** Initial deceleration of the spectator pawn when we start possession. */" },
		{ "ModuleRelativePath", "Classes/Engine/DebugCameraController.h" },
		{ "ToolTip", "Initial deceleration of the spectator pawn when we start possession." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADebugCameraController_Statics::NewProp_InitialDecel = { "InitialDecel", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADebugCameraController, InitialDecel), METADATA_PARAMS(Z_Construct_UClass_ADebugCameraController_Statics::NewProp_InitialDecel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADebugCameraController_Statics::NewProp_InitialDecel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADebugCameraController_Statics::NewProp_InitialAccel_MetaData[] = {
		{ "Category", "Debug Camera" },
		{ "Comment", "/** Initial acceleration of the spectator pawn when we start possession. */" },
		{ "ModuleRelativePath", "Classes/Engine/DebugCameraController.h" },
		{ "ToolTip", "Initial acceleration of the spectator pawn when we start possession." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADebugCameraController_Statics::NewProp_InitialAccel = { "InitialAccel", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADebugCameraController, InitialAccel), METADATA_PARAMS(Z_Construct_UClass_ADebugCameraController_Statics::NewProp_InitialAccel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADebugCameraController_Statics::NewProp_InitialAccel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADebugCameraController_Statics::NewProp_InitialMaxSpeed_MetaData[] = {
		{ "Category", "Debug Camera" },
		{ "Comment", "/** Initial max speed of the spectator pawn when we start possession. */" },
		{ "ModuleRelativePath", "Classes/Engine/DebugCameraController.h" },
		{ "ToolTip", "Initial max speed of the spectator pawn when we start possession." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADebugCameraController_Statics::NewProp_InitialMaxSpeed = { "InitialMaxSpeed", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADebugCameraController, InitialMaxSpeed), METADATA_PARAMS(Z_Construct_UClass_ADebugCameraController_Statics::NewProp_InitialMaxSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADebugCameraController_Statics::NewProp_InitialMaxSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADebugCameraController_Statics::NewProp_SpeedScale_MetaData[] = {
		{ "Category", "Debug Camera" },
		{ "Comment", "/** Allows control over the speed of the spectator pawn. This scales the speed based on the InitialMaxSpeed. Use Set Pawn Movement Speed Scale during runtime */" },
		{ "ModuleRelativePath", "Classes/Engine/DebugCameraController.h" },
		{ "ToolTip", "Allows control over the speed of the spectator pawn. This scales the speed based on the InitialMaxSpeed. Use Set Pawn Movement Speed Scale during runtime" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADebugCameraController_Statics::NewProp_SpeedScale = { "SpeedScale", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADebugCameraController, SpeedScale), METADATA_PARAMS(Z_Construct_UClass_ADebugCameraController_Statics::NewProp_SpeedScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADebugCameraController_Statics::NewProp_SpeedScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADebugCameraController_Statics::NewProp_OriginalPlayer_MetaData[] = {
		{ "Comment", "/** Player object that was active before this was spawned */" },
		{ "ModuleRelativePath", "Classes/Engine/DebugCameraController.h" },
		{ "ToolTip", "Player object that was active before this was spawned" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADebugCameraController_Statics::NewProp_OriginalPlayer = { "OriginalPlayer", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADebugCameraController, OriginalPlayer), Z_Construct_UClass_UPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADebugCameraController_Statics::NewProp_OriginalPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADebugCameraController_Statics::NewProp_OriginalPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADebugCameraController_Statics::NewProp_OriginalControllerRef_MetaData[] = {
		{ "Comment", "/** Controller that was active before this was spawned */" },
		{ "ModuleRelativePath", "Classes/Engine/DebugCameraController.h" },
		{ "ToolTip", "Controller that was active before this was spawned" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADebugCameraController_Statics::NewProp_OriginalControllerRef = { "OriginalControllerRef", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADebugCameraController, OriginalControllerRef), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADebugCameraController_Statics::NewProp_OriginalControllerRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADebugCameraController_Statics::NewProp_OriginalControllerRef_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADebugCameraController_Statics::NewProp_SelectedHitPoint_MetaData[] = {
		{ "Comment", "/** Selected hit point */" },
		{ "ModuleRelativePath", "Classes/Engine/DebugCameraController.h" },
		{ "ToolTip", "Selected hit point" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADebugCameraController_Statics::NewProp_SelectedHitPoint = { "SelectedHitPoint", nullptr, (EPropertyFlags)0x0010008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADebugCameraController, SelectedHitPoint), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_ADebugCameraController_Statics::NewProp_SelectedHitPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADebugCameraController_Statics::NewProp_SelectedHitPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADebugCameraController_Statics::NewProp_SelectedComponent_MetaData[] = {
		{ "Comment", "/** Currently selected component, may be invalid */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/DebugCameraController.h" },
		{ "ToolTip", "Currently selected component, may be invalid" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADebugCameraController_Statics::NewProp_SelectedComponent = { "SelectedComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADebugCameraController, SelectedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADebugCameraController_Statics::NewProp_SelectedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADebugCameraController_Statics::NewProp_SelectedComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADebugCameraController_Statics::NewProp_SelectedActor_MetaData[] = {
		{ "Comment", "/** Currently selected actor, may be invalid */" },
		{ "ModuleRelativePath", "Classes/Engine/DebugCameraController.h" },
		{ "ToolTip", "Currently selected actor, may be invalid" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADebugCameraController_Statics::NewProp_SelectedActor = { "SelectedActor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADebugCameraController, SelectedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADebugCameraController_Statics::NewProp_SelectedActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADebugCameraController_Statics::NewProp_SelectedActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADebugCameraController_Statics::NewProp_DrawFrustum_MetaData[] = {
		{ "Comment", "/** Visualizes the frustum of the camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/DebugCameraController.h" },
		{ "ToolTip", "Visualizes the frustum of the camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADebugCameraController_Statics::NewProp_DrawFrustum = { "DrawFrustum", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADebugCameraController, DrawFrustum), Z_Construct_UClass_UDrawFrustumComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADebugCameraController_Statics::NewProp_DrawFrustum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADebugCameraController_Statics::NewProp_DrawFrustum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADebugCameraController_Statics::NewProp_bLastDisplayEnabled_MetaData[] = {
		{ "Comment", "/** Last display enabled setting before toggling buffer visualization overview */" },
		{ "ModuleRelativePath", "Classes/Engine/DebugCameraController.h" },
		{ "ToolTip", "Last display enabled setting before toggling buffer visualization overview" },
	};
#endif
	void Z_Construct_UClass_ADebugCameraController_Statics::NewProp_bLastDisplayEnabled_SetBit(void* Obj)
	{
		((ADebugCameraController*)Obj)->bLastDisplayEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADebugCameraController_Statics::NewProp_bLastDisplayEnabled = { "bLastDisplayEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ADebugCameraController), &Z_Construct_UClass_ADebugCameraController_Statics::NewProp_bLastDisplayEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADebugCameraController_Statics::NewProp_bLastDisplayEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADebugCameraController_Statics::NewProp_bLastDisplayEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADebugCameraController_Statics::NewProp_bIsBufferVisualizationInputSetup_MetaData[] = {
		{ "Comment", "/** Whether GBuffer visualization overview inputs are set up  */" },
		{ "ModuleRelativePath", "Classes/Engine/DebugCameraController.h" },
		{ "ToolTip", "Whether GBuffer visualization overview inputs are set up" },
	};
#endif
	void Z_Construct_UClass_ADebugCameraController_Statics::NewProp_bIsBufferVisualizationInputSetup_SetBit(void* Obj)
	{
		((ADebugCameraController*)Obj)->bIsBufferVisualizationInputSetup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADebugCameraController_Statics::NewProp_bIsBufferVisualizationInputSetup = { "bIsBufferVisualizationInputSetup", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ADebugCameraController), &Z_Construct_UClass_ADebugCameraController_Statics::NewProp_bIsBufferVisualizationInputSetup_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADebugCameraController_Statics::NewProp_bIsBufferVisualizationInputSetup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADebugCameraController_Statics::NewProp_bIsBufferVisualizationInputSetup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADebugCameraController_Statics::NewProp_bEnableBufferVisualizationFullMode_MetaData[] = {
		{ "Comment", "/** Whether set view mode to display GBuffer visualization full */" },
		{ "ModuleRelativePath", "Classes/Engine/DebugCameraController.h" },
		{ "ToolTip", "Whether set view mode to display GBuffer visualization full" },
	};
#endif
	void Z_Construct_UClass_ADebugCameraController_Statics::NewProp_bEnableBufferVisualizationFullMode_SetBit(void* Obj)
	{
		((ADebugCameraController*)Obj)->bEnableBufferVisualizationFullMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADebugCameraController_Statics::NewProp_bEnableBufferVisualizationFullMode = { "bEnableBufferVisualizationFullMode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ADebugCameraController), &Z_Construct_UClass_ADebugCameraController_Statics::NewProp_bEnableBufferVisualizationFullMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADebugCameraController_Statics::NewProp_bEnableBufferVisualizationFullMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADebugCameraController_Statics::NewProp_bEnableBufferVisualizationFullMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADebugCameraController_Statics::NewProp_bEnableBufferVisualization_MetaData[] = {
		{ "Comment", "/** Whether set view mode to display GBuffer visualization overview */" },
		{ "ModuleRelativePath", "Classes/Engine/DebugCameraController.h" },
		{ "ToolTip", "Whether set view mode to display GBuffer visualization overview" },
	};
#endif
	void Z_Construct_UClass_ADebugCameraController_Statics::NewProp_bEnableBufferVisualization_SetBit(void* Obj)
	{
		((ADebugCameraController*)Obj)->bEnableBufferVisualization = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADebugCameraController_Statics::NewProp_bEnableBufferVisualization = { "bEnableBufferVisualization", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ADebugCameraController), &Z_Construct_UClass_ADebugCameraController_Statics::NewProp_bEnableBufferVisualization_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADebugCameraController_Statics::NewProp_bEnableBufferVisualization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADebugCameraController_Statics::NewProp_bEnableBufferVisualization_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADebugCameraController_Statics::NewProp_bOrbitPivotUseCenter_MetaData[] = {
		{ "Comment", "/** When orbiting, true if using actor center as pivot, false if using last selected hitpoint */" },
		{ "ModuleRelativePath", "Classes/Engine/DebugCameraController.h" },
		{ "ToolTip", "When orbiting, true if using actor center as pivot, false if using last selected hitpoint" },
	};
#endif
	void Z_Construct_UClass_ADebugCameraController_Statics::NewProp_bOrbitPivotUseCenter_SetBit(void* Obj)
	{
		((ADebugCameraController*)Obj)->bOrbitPivotUseCenter = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADebugCameraController_Statics::NewProp_bOrbitPivotUseCenter = { "bOrbitPivotUseCenter", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ADebugCameraController), &Z_Construct_UClass_ADebugCameraController_Statics::NewProp_bOrbitPivotUseCenter_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADebugCameraController_Statics::NewProp_bOrbitPivotUseCenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADebugCameraController_Statics::NewProp_bOrbitPivotUseCenter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADebugCameraController_Statics::NewProp_bIsOrbitingSelectedActor_MetaData[] = {
		{ "Comment", "/** Whether to orbit selected actor. */" },
		{ "ModuleRelativePath", "Classes/Engine/DebugCameraController.h" },
		{ "ToolTip", "Whether to orbit selected actor." },
	};
#endif
	void Z_Construct_UClass_ADebugCameraController_Statics::NewProp_bIsOrbitingSelectedActor_SetBit(void* Obj)
	{
		((ADebugCameraController*)Obj)->bIsOrbitingSelectedActor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADebugCameraController_Statics::NewProp_bIsOrbitingSelectedActor = { "bIsOrbitingSelectedActor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ADebugCameraController), &Z_Construct_UClass_ADebugCameraController_Statics::NewProp_bIsOrbitingSelectedActor_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADebugCameraController_Statics::NewProp_bIsOrbitingSelectedActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADebugCameraController_Statics::NewProp_bIsOrbitingSelectedActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADebugCameraController_Statics::NewProp_bIsFrozenRendering_MetaData[] = {
		{ "Comment", "/** Saves whether the FreezeRendering console command is active */" },
		{ "ModuleRelativePath", "Classes/Engine/DebugCameraController.h" },
		{ "ToolTip", "Saves whether the FreezeRendering console command is active" },
	};
#endif
	void Z_Construct_UClass_ADebugCameraController_Statics::NewProp_bIsFrozenRendering_SetBit(void* Obj)
	{
		((ADebugCameraController*)Obj)->bIsFrozenRendering = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADebugCameraController_Statics::NewProp_bIsFrozenRendering = { "bIsFrozenRendering", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ADebugCameraController), &Z_Construct_UClass_ADebugCameraController_Statics::NewProp_bIsFrozenRendering_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADebugCameraController_Statics::NewProp_bIsFrozenRendering_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADebugCameraController_Statics::NewProp_bIsFrozenRendering_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADebugCameraController_Statics::NewProp_bShowSelectedInfo_MetaData[] = {
		{ "Comment", "/** Whether to show information about the selected actor on the debug camera HUD. */" },
		{ "ModuleRelativePath", "Classes/Engine/DebugCameraController.h" },
		{ "ToolTip", "Whether to show information about the selected actor on the debug camera HUD." },
	};
#endif
	void Z_Construct_UClass_ADebugCameraController_Statics::NewProp_bShowSelectedInfo_SetBit(void* Obj)
	{
		((ADebugCameraController*)Obj)->bShowSelectedInfo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADebugCameraController_Statics::NewProp_bShowSelectedInfo = { "bShowSelectedInfo", nullptr, (EPropertyFlags)0x0010000000044000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ADebugCameraController), &Z_Construct_UClass_ADebugCameraController_Statics::NewProp_bShowSelectedInfo_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADebugCameraController_Statics::NewProp_bShowSelectedInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADebugCameraController_Statics::NewProp_bShowSelectedInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADebugCameraController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADebugCameraController_Statics::NewProp_InitialDecel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADebugCameraController_Statics::NewProp_InitialAccel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADebugCameraController_Statics::NewProp_InitialMaxSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADebugCameraController_Statics::NewProp_SpeedScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADebugCameraController_Statics::NewProp_OriginalPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADebugCameraController_Statics::NewProp_OriginalControllerRef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADebugCameraController_Statics::NewProp_SelectedHitPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADebugCameraController_Statics::NewProp_SelectedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADebugCameraController_Statics::NewProp_SelectedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADebugCameraController_Statics::NewProp_DrawFrustum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADebugCameraController_Statics::NewProp_bLastDisplayEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADebugCameraController_Statics::NewProp_bIsBufferVisualizationInputSetup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADebugCameraController_Statics::NewProp_bEnableBufferVisualizationFullMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADebugCameraController_Statics::NewProp_bEnableBufferVisualization,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADebugCameraController_Statics::NewProp_bOrbitPivotUseCenter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADebugCameraController_Statics::NewProp_bIsOrbitingSelectedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADebugCameraController_Statics::NewProp_bIsFrozenRendering,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADebugCameraController_Statics::NewProp_bShowSelectedInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADebugCameraController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADebugCameraController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADebugCameraController_Statics::ClassParams = {
		&ADebugCameraController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADebugCameraController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADebugCameraController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADebugCameraController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADebugCameraController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADebugCameraController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADebugCameraController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADebugCameraController, 679150914);
	template<> ENGINE_API UClass* StaticClass<ADebugCameraController>()
	{
		return ADebugCameraController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADebugCameraController(Z_Construct_UClass_ADebugCameraController, &ADebugCameraController::StaticClass, TEXT("/Script/Engine"), TEXT("ADebugCameraController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADebugCameraController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
