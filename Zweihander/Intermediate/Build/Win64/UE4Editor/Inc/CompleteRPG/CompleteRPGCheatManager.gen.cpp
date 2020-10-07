// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CompleteRPG/Public/CompleteRPGCheatManager.h"
#include "CompleteRPG/Public/CompleteRPGPC.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCompleteRPGCheatManager() {}
// Cross Module References
	COMPLETERPG_API UClass* Z_Construct_UClass_UCompleteRPGCheatManager_NoRegister();
	COMPLETERPG_API UClass* Z_Construct_UClass_UCompleteRPGCheatManager();
	ENGINE_API UClass* Z_Construct_UClass_UCheatManager();
	UPackage* Z_Construct_UPackage__Script_CompleteRPG();
// End Cross Module References
	DEFINE_FUNCTION(UCompleteRPGCheatManager::execDisableAttractLoop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableAttractLoop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCompleteRPGCheatManager::execPlayAttractLoop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayAttractLoop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCompleteRPGCheatManager::execEndKiteCine)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndKiteCine();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCompleteRPGCheatManager::execPlayKiteCine)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayKiteCine();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCompleteRPGCheatManager::execEndAttractCine)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndAttractCine();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCompleteRPGCheatManager::execPlayAttractCine)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayAttractCine();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCompleteRPGCheatManager::execFoliageNearMe)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FoliageNearMe(Z_Param_Radius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCompleteRPGCheatManager::execHoverDrone)
	{
		P_GET_UBOOL(Z_Param_bUseHoverDrone);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HoverDrone(Z_Param_bUseHoverDrone);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCompleteRPGCheatManager::execBM)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_BookMarkIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BM(Z_Param_BookMarkIndex);
		P_NATIVE_END;
	}
	void UCompleteRPGCheatManager::StaticRegisterNativesUCompleteRPGCheatManager()
	{
		UClass* Class = UCompleteRPGCheatManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BM", &UCompleteRPGCheatManager::execBM },
			{ "DisableAttractLoop", &UCompleteRPGCheatManager::execDisableAttractLoop },
			{ "EndAttractCine", &UCompleteRPGCheatManager::execEndAttractCine },
			{ "EndKiteCine", &UCompleteRPGCheatManager::execEndKiteCine },
			{ "FoliageNearMe", &UCompleteRPGCheatManager::execFoliageNearMe },
			{ "HoverDrone", &UCompleteRPGCheatManager::execHoverDrone },
			{ "PlayAttractCine", &UCompleteRPGCheatManager::execPlayAttractCine },
			{ "PlayAttractLoop", &UCompleteRPGCheatManager::execPlayAttractLoop },
			{ "PlayKiteCine", &UCompleteRPGCheatManager::execPlayKiteCine },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCompleteRPGCheatManager_BM_Statics
	{
		struct CompleteRPGCheatManager_eventBM_Parms
		{
			int32 BookMarkIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BookMarkIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCompleteRPGCheatManager_BM_Statics::NewProp_BookMarkIndex = { "BookMarkIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CompleteRPGCheatManager_eventBM_Parms, BookMarkIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompleteRPGCheatManager_BM_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompleteRPGCheatManager_BM_Statics::NewProp_BookMarkIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCompleteRPGCheatManager_BM_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Jump to editor bookmark with the given number. */" },
		{ "ModuleRelativePath", "Public/CompleteRPGCheatManager.h" },
		{ "ToolTip", "Jump to editor bookmark with the given number." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompleteRPGCheatManager_BM_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompleteRPGCheatManager, nullptr, "BM", nullptr, nullptr, sizeof(CompleteRPGCheatManager_eventBM_Parms), Z_Construct_UFunction_UCompleteRPGCheatManager_BM_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompleteRPGCheatManager_BM_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCompleteRPGCheatManager_BM_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompleteRPGCheatManager_BM_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCompleteRPGCheatManager_BM()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCompleteRPGCheatManager_BM_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCompleteRPGCheatManager_DisableAttractLoop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCompleteRPGCheatManager_DisableAttractLoop_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Useful during dev */" },
		{ "ModuleRelativePath", "Public/CompleteRPGCheatManager.h" },
		{ "ToolTip", "Useful during dev" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompleteRPGCheatManager_DisableAttractLoop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompleteRPGCheatManager, nullptr, "DisableAttractLoop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCompleteRPGCheatManager_DisableAttractLoop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompleteRPGCheatManager_DisableAttractLoop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCompleteRPGCheatManager_DisableAttractLoop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCompleteRPGCheatManager_DisableAttractLoop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCompleteRPGCheatManager_EndAttractCine_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCompleteRPGCheatManager_EndAttractCine_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CompleteRPGCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompleteRPGCheatManager_EndAttractCine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompleteRPGCheatManager, nullptr, "EndAttractCine", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCompleteRPGCheatManager_EndAttractCine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompleteRPGCheatManager_EndAttractCine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCompleteRPGCheatManager_EndAttractCine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCompleteRPGCheatManager_EndAttractCine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCompleteRPGCheatManager_EndKiteCine_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCompleteRPGCheatManager_EndKiteCine_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CompleteRPGCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompleteRPGCheatManager_EndKiteCine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompleteRPGCheatManager, nullptr, "EndKiteCine", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCompleteRPGCheatManager_EndKiteCine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompleteRPGCheatManager_EndKiteCine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCompleteRPGCheatManager_EndKiteCine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCompleteRPGCheatManager_EndKiteCine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCompleteRPGCheatManager_FoliageNearMe_Statics
	{
		struct CompleteRPGCheatManager_eventFoliageNearMe_Parms
		{
			float Radius;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCompleteRPGCheatManager_FoliageNearMe_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CompleteRPGCheatManager_eventFoliageNearMe_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompleteRPGCheatManager_FoliageNearMe_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompleteRPGCheatManager_FoliageNearMe_Statics::NewProp_Radius,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCompleteRPGCheatManager_FoliageNearMe_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** For debug use */" },
		{ "CPP_Default_Radius", "1000.000000" },
		{ "ModuleRelativePath", "Public/CompleteRPGCheatManager.h" },
		{ "ToolTip", "For debug use" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompleteRPGCheatManager_FoliageNearMe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompleteRPGCheatManager, nullptr, "FoliageNearMe", nullptr, nullptr, sizeof(CompleteRPGCheatManager_eventFoliageNearMe_Parms), Z_Construct_UFunction_UCompleteRPGCheatManager_FoliageNearMe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompleteRPGCheatManager_FoliageNearMe_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCompleteRPGCheatManager_FoliageNearMe_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompleteRPGCheatManager_FoliageNearMe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCompleteRPGCheatManager_FoliageNearMe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCompleteRPGCheatManager_FoliageNearMe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCompleteRPGCheatManager_HoverDrone_Statics
	{
		struct CompleteRPGCheatManager_eventHoverDrone_Parms
		{
			bool bUseHoverDrone;
		};
		static void NewProp_bUseHoverDrone_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseHoverDrone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCompleteRPGCheatManager_HoverDrone_Statics::NewProp_bUseHoverDrone_SetBit(void* Obj)
	{
		((CompleteRPGCheatManager_eventHoverDrone_Parms*)Obj)->bUseHoverDrone = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCompleteRPGCheatManager_HoverDrone_Statics::NewProp_bUseHoverDrone = { "bUseHoverDrone", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CompleteRPGCheatManager_eventHoverDrone_Parms), &Z_Construct_UFunction_UCompleteRPGCheatManager_HoverDrone_Statics::NewProp_bUseHoverDrone_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompleteRPGCheatManager_HoverDrone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompleteRPGCheatManager_HoverDrone_Statics::NewProp_bUseHoverDrone,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCompleteRPGCheatManager_HoverDrone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CompleteRPGCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompleteRPGCheatManager_HoverDrone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompleteRPGCheatManager, nullptr, "HoverDrone", nullptr, nullptr, sizeof(CompleteRPGCheatManager_eventHoverDrone_Parms), Z_Construct_UFunction_UCompleteRPGCheatManager_HoverDrone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompleteRPGCheatManager_HoverDrone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCompleteRPGCheatManager_HoverDrone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompleteRPGCheatManager_HoverDrone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCompleteRPGCheatManager_HoverDrone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCompleteRPGCheatManager_HoverDrone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCompleteRPGCheatManager_PlayAttractCine_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCompleteRPGCheatManager_PlayAttractCine_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CompleteRPGCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompleteRPGCheatManager_PlayAttractCine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompleteRPGCheatManager, nullptr, "PlayAttractCine", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCompleteRPGCheatManager_PlayAttractCine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompleteRPGCheatManager_PlayAttractCine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCompleteRPGCheatManager_PlayAttractCine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCompleteRPGCheatManager_PlayAttractCine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCompleteRPGCheatManager_PlayAttractLoop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCompleteRPGCheatManager_PlayAttractLoop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CompleteRPGCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompleteRPGCheatManager_PlayAttractLoop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompleteRPGCheatManager, nullptr, "PlayAttractLoop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCompleteRPGCheatManager_PlayAttractLoop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompleteRPGCheatManager_PlayAttractLoop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCompleteRPGCheatManager_PlayAttractLoop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCompleteRPGCheatManager_PlayAttractLoop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCompleteRPGCheatManager_PlayKiteCine_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCompleteRPGCheatManager_PlayKiteCine_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CompleteRPGCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompleteRPGCheatManager_PlayKiteCine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompleteRPGCheatManager, nullptr, "PlayKiteCine", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCompleteRPGCheatManager_PlayKiteCine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompleteRPGCheatManager_PlayKiteCine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCompleteRPGCheatManager_PlayKiteCine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCompleteRPGCheatManager_PlayKiteCine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCompleteRPGCheatManager_NoRegister()
	{
		return UCompleteRPGCheatManager::StaticClass();
	}
	struct Z_Construct_UClass_UCompleteRPGCheatManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCompleteRPGCheatManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCheatManager,
		(UObject* (*)())Z_Construct_UPackage__Script_CompleteRPG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCompleteRPGCheatManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCompleteRPGCheatManager_BM, "BM" }, // 3688676376
		{ &Z_Construct_UFunction_UCompleteRPGCheatManager_DisableAttractLoop, "DisableAttractLoop" }, // 278292184
		{ &Z_Construct_UFunction_UCompleteRPGCheatManager_EndAttractCine, "EndAttractCine" }, // 4028798639
		{ &Z_Construct_UFunction_UCompleteRPGCheatManager_EndKiteCine, "EndKiteCine" }, // 1877576731
		{ &Z_Construct_UFunction_UCompleteRPGCheatManager_FoliageNearMe, "FoliageNearMe" }, // 3081160438
		{ &Z_Construct_UFunction_UCompleteRPGCheatManager_HoverDrone, "HoverDrone" }, // 526164581
		{ &Z_Construct_UFunction_UCompleteRPGCheatManager_PlayAttractCine, "PlayAttractCine" }, // 2460365727
		{ &Z_Construct_UFunction_UCompleteRPGCheatManager_PlayAttractLoop, "PlayAttractLoop" }, // 1025133859
		{ &Z_Construct_UFunction_UCompleteRPGCheatManager_PlayKiteCine, "PlayKiteCine" }, // 1868318641
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompleteRPGCheatManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CompleteRPGCheatManager.h" },
		{ "ModuleRelativePath", "Public/CompleteRPGCheatManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCompleteRPGCheatManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCompleteRPGCheatManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCompleteRPGCheatManager_Statics::ClassParams = {
		&UCompleteRPGCheatManager::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCompleteRPGCheatManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCompleteRPGCheatManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCompleteRPGCheatManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCompleteRPGCheatManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCompleteRPGCheatManager, 1662090786);
	template<> COMPLETERPG_API UClass* StaticClass<UCompleteRPGCheatManager>()
	{
		return UCompleteRPGCheatManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCompleteRPGCheatManager(Z_Construct_UClass_UCompleteRPGCheatManager, &UCompleteRPGCheatManager::StaticClass, TEXT("/Script/CompleteRPG"), TEXT("UCompleteRPGCheatManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCompleteRPGCheatManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
