// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCollectionEngine/Public/ChaosBlueprint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosBlueprint() {}
// Cross Module References
	GEOMETRYCOLLECTIONENGINE_API UFunction* Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosTrailingEvents__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GeometryCollectionEngine();
	GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosTrailingEventData();
	GEOMETRYCOLLECTIONENGINE_API UFunction* Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakingEvents__DelegateSignature();
	GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosBreakingEventData();
	GEOMETRYCOLLECTIONENGINE_API UFunction* Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCollisionEvents__DelegateSignature();
	GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosCollisionEventData();
	GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UChaosDestructionListener_NoRegister();
	GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UChaosDestructionListener();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_AChaosSolverActor_NoRegister();
	GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_AGeometryCollectionActor_NoRegister();
	GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings();
	GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings();
	GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings();
	GEOMETRYCOLLECTIONENGINE_API UEnum* Z_Construct_UEnum_GeometryCollectionEngine_EChaosBreakingSortMethod();
	GEOMETRYCOLLECTIONENGINE_API UEnum* Z_Construct_UEnum_GeometryCollectionEngine_EChaosCollisionSortMethod();
	GEOMETRYCOLLECTIONENGINE_API UEnum* Z_Construct_UEnum_GeometryCollectionEngine_EChaosTrailingSortMethod();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosTrailingEvents__DelegateSignature_Statics
	{
		struct _Script_GeometryCollectionEngine_eventOnChaosTrailingEvents_Parms
		{
			TArray<FChaosTrailingEventData> TrailingEvents;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrailingEvents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TrailingEvents;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrailingEvents_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosTrailingEvents__DelegateSignature_Statics::NewProp_TrailingEvents_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosTrailingEvents__DelegateSignature_Statics::NewProp_TrailingEvents = { "TrailingEvents", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_GeometryCollectionEngine_eventOnChaosTrailingEvents_Parms, TrailingEvents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosTrailingEvents__DelegateSignature_Statics::NewProp_TrailingEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosTrailingEvents__DelegateSignature_Statics::NewProp_TrailingEvents_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosTrailingEvents__DelegateSignature_Statics::NewProp_TrailingEvents_Inner = { "TrailingEvents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FChaosTrailingEventData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosTrailingEvents__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosTrailingEvents__DelegateSignature_Statics::NewProp_TrailingEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosTrailingEvents__DelegateSignature_Statics::NewProp_TrailingEvents_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosTrailingEvents__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n* Called when new trailing events are available for breaks. Trailing listening must be enabled to get callbacks on this delegate.\n*/" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Called when new trailing events are available for breaks. Trailing listening must be enabled to get callbacks on this delegate." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosTrailingEvents__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GeometryCollectionEngine, nullptr, "OnChaosTrailingEvents__DelegateSignature", nullptr, nullptr, sizeof(_Script_GeometryCollectionEngine_eventOnChaosTrailingEvents_Parms), Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosTrailingEvents__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosTrailingEvents__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosTrailingEvents__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosTrailingEvents__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosTrailingEvents__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosTrailingEvents__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakingEvents__DelegateSignature_Statics
	{
		struct _Script_GeometryCollectionEngine_eventOnChaosBreakingEvents_Parms
		{
			TArray<FChaosBreakingEventData> BreakingEvents;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BreakingEvents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BreakingEvents;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BreakingEvents_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakingEvents__DelegateSignature_Statics::NewProp_BreakingEvents_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakingEvents__DelegateSignature_Statics::NewProp_BreakingEvents = { "BreakingEvents", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_GeometryCollectionEngine_eventOnChaosBreakingEvents_Parms, BreakingEvents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakingEvents__DelegateSignature_Statics::NewProp_BreakingEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakingEvents__DelegateSignature_Statics::NewProp_BreakingEvents_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakingEvents__DelegateSignature_Statics::NewProp_BreakingEvents_Inner = { "BreakingEvents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FChaosBreakingEventData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakingEvents__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakingEvents__DelegateSignature_Statics::NewProp_BreakingEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakingEvents__DelegateSignature_Statics::NewProp_BreakingEvents_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakingEvents__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n* Called when new destruction events are available for breaks. Breaking listening must be enabled to get callbacks on this delegate.\n*/" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Called when new destruction events are available for breaks. Breaking listening must be enabled to get callbacks on this delegate." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakingEvents__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GeometryCollectionEngine, nullptr, "OnChaosBreakingEvents__DelegateSignature", nullptr, nullptr, sizeof(_Script_GeometryCollectionEngine_eventOnChaosBreakingEvents_Parms), Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakingEvents__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakingEvents__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakingEvents__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakingEvents__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakingEvents__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakingEvents__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCollisionEvents__DelegateSignature_Statics
	{
		struct _Script_GeometryCollectionEngine_eventOnChaosCollisionEvents_Parms
		{
			TArray<FChaosCollisionEventData> CollisionEvents;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionEvents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CollisionEvents;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CollisionEvents_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCollisionEvents__DelegateSignature_Statics::NewProp_CollisionEvents_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCollisionEvents__DelegateSignature_Statics::NewProp_CollisionEvents = { "CollisionEvents", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_GeometryCollectionEngine_eventOnChaosCollisionEvents_Parms, CollisionEvents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCollisionEvents__DelegateSignature_Statics::NewProp_CollisionEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCollisionEvents__DelegateSignature_Statics::NewProp_CollisionEvents_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCollisionEvents__DelegateSignature_Statics::NewProp_CollisionEvents_Inner = { "CollisionEvents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FChaosCollisionEventData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCollisionEvents__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCollisionEvents__DelegateSignature_Statics::NewProp_CollisionEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCollisionEvents__DelegateSignature_Statics::NewProp_CollisionEvents_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCollisionEvents__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n* Called when new destruction events are available for collisions. Collision listening must be enabled to get callbacks on this delegate.\n*/" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Called when new destruction events are available for collisions. Collision listening must be enabled to get callbacks on this delegate." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCollisionEvents__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GeometryCollectionEngine, nullptr, "OnChaosCollisionEvents__DelegateSignature", nullptr, nullptr, sizeof(_Script_GeometryCollectionEngine_eventOnChaosCollisionEvents_Parms), Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCollisionEvents__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCollisionEvents__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCollisionEvents__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCollisionEvents__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCollisionEvents__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCollisionEvents__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UChaosDestructionListener::execSortTrailingEvents)
	{
		P_GET_TARRAY_REF(FChaosTrailingEventData,Z_Param_Out_TrailingEvents);
		P_GET_ENUM(EChaosTrailingSortMethod,Z_Param_SortMethod);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SortTrailingEvents(Z_Param_Out_TrailingEvents,EChaosTrailingSortMethod(Z_Param_SortMethod));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosDestructionListener::execSortBreakingEvents)
	{
		P_GET_TARRAY_REF(FChaosBreakingEventData,Z_Param_Out_BreakingEvents);
		P_GET_ENUM(EChaosBreakingSortMethod,Z_Param_SortMethod);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SortBreakingEvents(Z_Param_Out_BreakingEvents,EChaosBreakingSortMethod(Z_Param_SortMethod));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosDestructionListener::execSortCollisionEvents)
	{
		P_GET_TARRAY_REF(FChaosCollisionEventData,Z_Param_Out_CollisionEvents);
		P_GET_ENUM(EChaosCollisionSortMethod,Z_Param_SortMethod);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SortCollisionEvents(Z_Param_Out_CollisionEvents,EChaosCollisionSortMethod(Z_Param_SortMethod));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosDestructionListener::execIsEventListening)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEventListening();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosDestructionListener::execSetTrailingEventEnabled)
	{
		P_GET_UBOOL(Z_Param_bIsEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTrailingEventEnabled(Z_Param_bIsEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosDestructionListener::execSetBreakingEventEnabled)
	{
		P_GET_UBOOL(Z_Param_bIsEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBreakingEventEnabled(Z_Param_bIsEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosDestructionListener::execSetCollisionEventEnabled)
	{
		P_GET_UBOOL(Z_Param_bIsEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCollisionEventEnabled(Z_Param_bIsEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosDestructionListener::execSetTrailingEventRequestSettings)
	{
		P_GET_STRUCT_REF(FChaosTrailingEventRequestSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTrailingEventRequestSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosDestructionListener::execSetBreakingEventRequestSettings)
	{
		P_GET_STRUCT_REF(FChaosBreakingEventRequestSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBreakingEventRequestSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosDestructionListener::execSetCollisionEventRequestSettings)
	{
		P_GET_STRUCT_REF(FChaosCollisionEventRequestSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCollisionEventRequestSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosDestructionListener::execRemoveGeometryCollectionActor)
	{
		P_GET_OBJECT(AGeometryCollectionActor,Z_Param_GeometryCollectionActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveGeometryCollectionActor(Z_Param_GeometryCollectionActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosDestructionListener::execAddGeometryCollectionActor)
	{
		P_GET_OBJECT(AGeometryCollectionActor,Z_Param_GeometryCollectionActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddGeometryCollectionActor(Z_Param_GeometryCollectionActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosDestructionListener::execRemoveChaosSolverActor)
	{
		P_GET_OBJECT(AChaosSolverActor,Z_Param_ChaosSolverActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveChaosSolverActor(Z_Param_ChaosSolverActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosDestructionListener::execAddChaosSolverActor)
	{
		P_GET_OBJECT(AChaosSolverActor,Z_Param_ChaosSolverActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddChaosSolverActor(Z_Param_ChaosSolverActor);
		P_NATIVE_END;
	}
	void UChaosDestructionListener::StaticRegisterNativesUChaosDestructionListener()
	{
		UClass* Class = UChaosDestructionListener::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddChaosSolverActor", &UChaosDestructionListener::execAddChaosSolverActor },
			{ "AddGeometryCollectionActor", &UChaosDestructionListener::execAddGeometryCollectionActor },
			{ "IsEventListening", &UChaosDestructionListener::execIsEventListening },
			{ "RemoveChaosSolverActor", &UChaosDestructionListener::execRemoveChaosSolverActor },
			{ "RemoveGeometryCollectionActor", &UChaosDestructionListener::execRemoveGeometryCollectionActor },
			{ "SetBreakingEventEnabled", &UChaosDestructionListener::execSetBreakingEventEnabled },
			{ "SetBreakingEventRequestSettings", &UChaosDestructionListener::execSetBreakingEventRequestSettings },
			{ "SetCollisionEventEnabled", &UChaosDestructionListener::execSetCollisionEventEnabled },
			{ "SetCollisionEventRequestSettings", &UChaosDestructionListener::execSetCollisionEventRequestSettings },
			{ "SetTrailingEventEnabled", &UChaosDestructionListener::execSetTrailingEventEnabled },
			{ "SetTrailingEventRequestSettings", &UChaosDestructionListener::execSetTrailingEventRequestSettings },
			{ "SortBreakingEvents", &UChaosDestructionListener::execSortBreakingEvents },
			{ "SortCollisionEvents", &UChaosDestructionListener::execSortCollisionEvents },
			{ "SortTrailingEvents", &UChaosDestructionListener::execSortTrailingEvents },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UChaosDestructionListener_AddChaosSolverActor_Statics
	{
		struct ChaosDestructionListener_eventAddChaosSolverActor_Parms
		{
			AChaosSolverActor* ChaosSolverActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChaosSolverActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UChaosDestructionListener_AddChaosSolverActor_Statics::NewProp_ChaosSolverActor = { "ChaosSolverActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChaosDestructionListener_eventAddChaosSolverActor_Parms, ChaosSolverActor), Z_Construct_UClass_AChaosSolverActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosDestructionListener_AddChaosSolverActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_AddChaosSolverActor_Statics::NewProp_ChaosSolverActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosDestructionListener_AddChaosSolverActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Destruction Listener" },
		{ "Comment", "// Dynamically adds a chaos solver to the listener\n" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Dynamically adds a chaos solver to the listener" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosDestructionListener_AddChaosSolverActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosDestructionListener, nullptr, "AddChaosSolverActor", nullptr, nullptr, sizeof(ChaosDestructionListener_eventAddChaosSolverActor_Parms), Z_Construct_UFunction_UChaosDestructionListener_AddChaosSolverActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_AddChaosSolverActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaosDestructionListener_AddChaosSolverActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_AddChaosSolverActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaosDestructionListener_AddChaosSolverActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChaosDestructionListener_AddChaosSolverActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosDestructionListener_AddGeometryCollectionActor_Statics
	{
		struct ChaosDestructionListener_eventAddGeometryCollectionActor_Parms
		{
			AGeometryCollectionActor* GeometryCollectionActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GeometryCollectionActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UChaosDestructionListener_AddGeometryCollectionActor_Statics::NewProp_GeometryCollectionActor = { "GeometryCollectionActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChaosDestructionListener_eventAddGeometryCollectionActor_Parms, GeometryCollectionActor), Z_Construct_UClass_AGeometryCollectionActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosDestructionListener_AddGeometryCollectionActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_AddGeometryCollectionActor_Statics::NewProp_GeometryCollectionActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosDestructionListener_AddGeometryCollectionActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Destruction Listener" },
		{ "Comment", "// Dynamically adds a chaos solver to the listener\n" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Dynamically adds a chaos solver to the listener" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosDestructionListener_AddGeometryCollectionActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosDestructionListener, nullptr, "AddGeometryCollectionActor", nullptr, nullptr, sizeof(ChaosDestructionListener_eventAddGeometryCollectionActor_Parms), Z_Construct_UFunction_UChaosDestructionListener_AddGeometryCollectionActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_AddGeometryCollectionActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaosDestructionListener_AddGeometryCollectionActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_AddGeometryCollectionActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaosDestructionListener_AddGeometryCollectionActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChaosDestructionListener_AddGeometryCollectionActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosDestructionListener_IsEventListening_Statics
	{
		struct ChaosDestructionListener_eventIsEventListening_Parms
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
	void Z_Construct_UFunction_UChaosDestructionListener_IsEventListening_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ChaosDestructionListener_eventIsEventListening_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChaosDestructionListener_IsEventListening_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ChaosDestructionListener_eventIsEventListening_Parms), &Z_Construct_UFunction_UChaosDestructionListener_IsEventListening_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosDestructionListener_IsEventListening_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_IsEventListening_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosDestructionListener_IsEventListening_Statics::Function_MetaDataParams[] = {
		{ "Category", "Destruction Listener" },
		{ "Comment", "// Returns if the destruction listener is listening to any events\n" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Returns if the destruction listener is listening to any events" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosDestructionListener_IsEventListening_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosDestructionListener, nullptr, "IsEventListening", nullptr, nullptr, sizeof(ChaosDestructionListener_eventIsEventListening_Parms), Z_Construct_UFunction_UChaosDestructionListener_IsEventListening_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_IsEventListening_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaosDestructionListener_IsEventListening_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_IsEventListening_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaosDestructionListener_IsEventListening()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChaosDestructionListener_IsEventListening_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosDestructionListener_RemoveChaosSolverActor_Statics
	{
		struct ChaosDestructionListener_eventRemoveChaosSolverActor_Parms
		{
			AChaosSolverActor* ChaosSolverActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChaosSolverActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UChaosDestructionListener_RemoveChaosSolverActor_Statics::NewProp_ChaosSolverActor = { "ChaosSolverActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChaosDestructionListener_eventRemoveChaosSolverActor_Parms, ChaosSolverActor), Z_Construct_UClass_AChaosSolverActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosDestructionListener_RemoveChaosSolverActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_RemoveChaosSolverActor_Statics::NewProp_ChaosSolverActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosDestructionListener_RemoveChaosSolverActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Destruction Listener" },
		{ "Comment", "// Dynamically removes a chaos solver from the listener\n" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Dynamically removes a chaos solver from the listener" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosDestructionListener_RemoveChaosSolverActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosDestructionListener, nullptr, "RemoveChaosSolverActor", nullptr, nullptr, sizeof(ChaosDestructionListener_eventRemoveChaosSolverActor_Parms), Z_Construct_UFunction_UChaosDestructionListener_RemoveChaosSolverActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_RemoveChaosSolverActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaosDestructionListener_RemoveChaosSolverActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_RemoveChaosSolverActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaosDestructionListener_RemoveChaosSolverActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChaosDestructionListener_RemoveChaosSolverActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosDestructionListener_RemoveGeometryCollectionActor_Statics
	{
		struct ChaosDestructionListener_eventRemoveGeometryCollectionActor_Parms
		{
			AGeometryCollectionActor* GeometryCollectionActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GeometryCollectionActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UChaosDestructionListener_RemoveGeometryCollectionActor_Statics::NewProp_GeometryCollectionActor = { "GeometryCollectionActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChaosDestructionListener_eventRemoveGeometryCollectionActor_Parms, GeometryCollectionActor), Z_Construct_UClass_AGeometryCollectionActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosDestructionListener_RemoveGeometryCollectionActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_RemoveGeometryCollectionActor_Statics::NewProp_GeometryCollectionActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosDestructionListener_RemoveGeometryCollectionActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Destruction Listener" },
		{ "Comment", "// Dynamically removes a chaos solver from the listener\n" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Dynamically removes a chaos solver from the listener" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosDestructionListener_RemoveGeometryCollectionActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosDestructionListener, nullptr, "RemoveGeometryCollectionActor", nullptr, nullptr, sizeof(ChaosDestructionListener_eventRemoveGeometryCollectionActor_Parms), Z_Construct_UFunction_UChaosDestructionListener_RemoveGeometryCollectionActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_RemoveGeometryCollectionActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaosDestructionListener_RemoveGeometryCollectionActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_RemoveGeometryCollectionActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaosDestructionListener_RemoveGeometryCollectionActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChaosDestructionListener_RemoveGeometryCollectionActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventEnabled_Statics
	{
		struct ChaosDestructionListener_eventSetBreakingEventEnabled_Parms
		{
			bool bIsEnabled;
		};
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventEnabled_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((ChaosDestructionListener_eventSetBreakingEventEnabled_Parms*)Obj)->bIsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventEnabled_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ChaosDestructionListener_eventSetBreakingEventEnabled_Parms), &Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventEnabled_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventEnabled_Statics::NewProp_bIsEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Destruction Listener" },
		{ "Comment", "// Enables or disables breaking event listening\n" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Enables or disables breaking event listening" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosDestructionListener, nullptr, "SetBreakingEventEnabled", nullptr, nullptr, sizeof(ChaosDestructionListener_eventSetBreakingEventEnabled_Parms), Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventRequestSettings_Statics
	{
		struct ChaosDestructionListener_eventSetBreakingEventRequestSettings_Parms
		{
			FChaosBreakingEventRequestSettings InSettings;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventRequestSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventRequestSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChaosDestructionListener_eventSetBreakingEventRequestSettings_Parms, InSettings), Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings, METADATA_PARAMS(Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventRequestSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventRequestSettings_Statics::NewProp_InSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventRequestSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventRequestSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventRequestSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Destruction Listener" },
		{ "Comment", "// Sets breaking event request settings dynamically\n" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Sets breaking event request settings dynamically" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventRequestSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosDestructionListener, nullptr, "SetBreakingEventRequestSettings", nullptr, nullptr, sizeof(ChaosDestructionListener_eventSetBreakingEventRequestSettings_Parms), Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventRequestSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventRequestSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventRequestSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventRequestSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventRequestSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventRequestSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventEnabled_Statics
	{
		struct ChaosDestructionListener_eventSetCollisionEventEnabled_Parms
		{
			bool bIsEnabled;
		};
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventEnabled_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((ChaosDestructionListener_eventSetCollisionEventEnabled_Parms*)Obj)->bIsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventEnabled_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ChaosDestructionListener_eventSetCollisionEventEnabled_Parms), &Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventEnabled_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventEnabled_Statics::NewProp_bIsEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Destruction Listener" },
		{ "Comment", "// Enables or disables collision event listening\n" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Enables or disables collision event listening" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosDestructionListener, nullptr, "SetCollisionEventEnabled", nullptr, nullptr, sizeof(ChaosDestructionListener_eventSetCollisionEventEnabled_Parms), Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventRequestSettings_Statics
	{
		struct ChaosDestructionListener_eventSetCollisionEventRequestSettings_Parms
		{
			FChaosCollisionEventRequestSettings InSettings;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventRequestSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventRequestSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChaosDestructionListener_eventSetCollisionEventRequestSettings_Parms, InSettings), Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings, METADATA_PARAMS(Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventRequestSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventRequestSettings_Statics::NewProp_InSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventRequestSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventRequestSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventRequestSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Destruction Listener" },
		{ "Comment", "// Sets collision event request settings dynamically\n" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Sets collision event request settings dynamically" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventRequestSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosDestructionListener, nullptr, "SetCollisionEventRequestSettings", nullptr, nullptr, sizeof(ChaosDestructionListener_eventSetCollisionEventRequestSettings_Parms), Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventRequestSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventRequestSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventRequestSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventRequestSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventRequestSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventRequestSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventEnabled_Statics
	{
		struct ChaosDestructionListener_eventSetTrailingEventEnabled_Parms
		{
			bool bIsEnabled;
		};
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventEnabled_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((ChaosDestructionListener_eventSetTrailingEventEnabled_Parms*)Obj)->bIsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventEnabled_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ChaosDestructionListener_eventSetTrailingEventEnabled_Parms), &Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventEnabled_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventEnabled_Statics::NewProp_bIsEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Destruction Listener" },
		{ "Comment", "// Enables or disables breaking event listening\n" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Enables or disables breaking event listening" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosDestructionListener, nullptr, "SetTrailingEventEnabled", nullptr, nullptr, sizeof(ChaosDestructionListener_eventSetTrailingEventEnabled_Parms), Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventRequestSettings_Statics
	{
		struct ChaosDestructionListener_eventSetTrailingEventRequestSettings_Parms
		{
			FChaosTrailingEventRequestSettings InSettings;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventRequestSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventRequestSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChaosDestructionListener_eventSetTrailingEventRequestSettings_Parms, InSettings), Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings, METADATA_PARAMS(Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventRequestSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventRequestSettings_Statics::NewProp_InSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventRequestSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventRequestSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventRequestSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Destruction Listener" },
		{ "Comment", "// Sets trailing event request settings dynamically\n" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Sets trailing event request settings dynamically" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventRequestSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosDestructionListener, nullptr, "SetTrailingEventRequestSettings", nullptr, nullptr, sizeof(ChaosDestructionListener_eventSetTrailingEventRequestSettings_Parms), Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventRequestSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventRequestSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventRequestSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventRequestSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventRequestSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventRequestSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosDestructionListener_SortBreakingEvents_Statics
	{
		struct ChaosDestructionListener_eventSortBreakingEvents_Parms
		{
			TArray<FChaosBreakingEventData> BreakingEvents;
			EChaosBreakingSortMethod SortMethod;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SortMethod;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SortMethod_Underlying;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BreakingEvents;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BreakingEvents_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UChaosDestructionListener_SortBreakingEvents_Statics::NewProp_SortMethod = { "SortMethod", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChaosDestructionListener_eventSortBreakingEvents_Parms, SortMethod), Z_Construct_UEnum_GeometryCollectionEngine_EChaosBreakingSortMethod, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UChaosDestructionListener_SortBreakingEvents_Statics::NewProp_SortMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UChaosDestructionListener_SortBreakingEvents_Statics::NewProp_BreakingEvents = { "BreakingEvents", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChaosDestructionListener_eventSortBreakingEvents_Parms, BreakingEvents), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosDestructionListener_SortBreakingEvents_Statics::NewProp_BreakingEvents_Inner = { "BreakingEvents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FChaosBreakingEventData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosDestructionListener_SortBreakingEvents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_SortBreakingEvents_Statics::NewProp_SortMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_SortBreakingEvents_Statics::NewProp_SortMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_SortBreakingEvents_Statics::NewProp_BreakingEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_SortBreakingEvents_Statics::NewProp_BreakingEvents_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosDestructionListener_SortBreakingEvents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Destruction Listener" },
		{ "Comment", "// Sorts breaking events according to the given sort method\x09\n" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Sorts breaking events according to the given sort method" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosDestructionListener_SortBreakingEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosDestructionListener, nullptr, "SortBreakingEvents", nullptr, nullptr, sizeof(ChaosDestructionListener_eventSortBreakingEvents_Parms), Z_Construct_UFunction_UChaosDestructionListener_SortBreakingEvents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SortBreakingEvents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaosDestructionListener_SortBreakingEvents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SortBreakingEvents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaosDestructionListener_SortBreakingEvents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChaosDestructionListener_SortBreakingEvents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosDestructionListener_SortCollisionEvents_Statics
	{
		struct ChaosDestructionListener_eventSortCollisionEvents_Parms
		{
			TArray<FChaosCollisionEventData> CollisionEvents;
			EChaosCollisionSortMethod SortMethod;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SortMethod;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SortMethod_Underlying;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CollisionEvents;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CollisionEvents_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UChaosDestructionListener_SortCollisionEvents_Statics::NewProp_SortMethod = { "SortMethod", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChaosDestructionListener_eventSortCollisionEvents_Parms, SortMethod), Z_Construct_UEnum_GeometryCollectionEngine_EChaosCollisionSortMethod, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UChaosDestructionListener_SortCollisionEvents_Statics::NewProp_SortMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UChaosDestructionListener_SortCollisionEvents_Statics::NewProp_CollisionEvents = { "CollisionEvents", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChaosDestructionListener_eventSortCollisionEvents_Parms, CollisionEvents), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosDestructionListener_SortCollisionEvents_Statics::NewProp_CollisionEvents_Inner = { "CollisionEvents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FChaosCollisionEventData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosDestructionListener_SortCollisionEvents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_SortCollisionEvents_Statics::NewProp_SortMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_SortCollisionEvents_Statics::NewProp_SortMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_SortCollisionEvents_Statics::NewProp_CollisionEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_SortCollisionEvents_Statics::NewProp_CollisionEvents_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosDestructionListener_SortCollisionEvents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Destruction Listener" },
		{ "Comment", "// Sorts collision events according to the given sort method\x09\n" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Sorts collision events according to the given sort method" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosDestructionListener_SortCollisionEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosDestructionListener, nullptr, "SortCollisionEvents", nullptr, nullptr, sizeof(ChaosDestructionListener_eventSortCollisionEvents_Parms), Z_Construct_UFunction_UChaosDestructionListener_SortCollisionEvents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SortCollisionEvents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaosDestructionListener_SortCollisionEvents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SortCollisionEvents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaosDestructionListener_SortCollisionEvents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChaosDestructionListener_SortCollisionEvents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosDestructionListener_SortTrailingEvents_Statics
	{
		struct ChaosDestructionListener_eventSortTrailingEvents_Parms
		{
			TArray<FChaosTrailingEventData> TrailingEvents;
			EChaosTrailingSortMethod SortMethod;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SortMethod;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SortMethod_Underlying;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TrailingEvents;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrailingEvents_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UChaosDestructionListener_SortTrailingEvents_Statics::NewProp_SortMethod = { "SortMethod", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChaosDestructionListener_eventSortTrailingEvents_Parms, SortMethod), Z_Construct_UEnum_GeometryCollectionEngine_EChaosTrailingSortMethod, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UChaosDestructionListener_SortTrailingEvents_Statics::NewProp_SortMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UChaosDestructionListener_SortTrailingEvents_Statics::NewProp_TrailingEvents = { "TrailingEvents", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChaosDestructionListener_eventSortTrailingEvents_Parms, TrailingEvents), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosDestructionListener_SortTrailingEvents_Statics::NewProp_TrailingEvents_Inner = { "TrailingEvents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FChaosTrailingEventData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosDestructionListener_SortTrailingEvents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_SortTrailingEvents_Statics::NewProp_SortMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_SortTrailingEvents_Statics::NewProp_SortMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_SortTrailingEvents_Statics::NewProp_TrailingEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_SortTrailingEvents_Statics::NewProp_TrailingEvents_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosDestructionListener_SortTrailingEvents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Destruction Listener" },
		{ "Comment", "// Sorts trailing events according to the given sort method\x09\n" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Sorts trailing events according to the given sort method" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosDestructionListener_SortTrailingEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosDestructionListener, nullptr, "SortTrailingEvents", nullptr, nullptr, sizeof(ChaosDestructionListener_eventSortTrailingEvents_Parms), Z_Construct_UFunction_UChaosDestructionListener_SortTrailingEvents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SortTrailingEvents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaosDestructionListener_SortTrailingEvents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SortTrailingEvents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaosDestructionListener_SortTrailingEvents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChaosDestructionListener_SortTrailingEvents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UChaosDestructionListener_NoRegister()
	{
		return UChaosDestructionListener::StaticClass();
	}
	struct Z_Construct_UClass_UChaosDestructionListener_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTrailingEvents_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTrailingEvents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnBreakingEvents_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBreakingEvents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCollisionEvents_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCollisionEvents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeometryCollectionActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_GeometryCollectionActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GeometryCollectionActors_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChaosSolverActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_ChaosSolverActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChaosSolverActors_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrailingEventRequestSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrailingEventRequestSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BreakingEventRequestSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BreakingEventRequestSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionEventRequestSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CollisionEventRequestSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsTrailingEventListeningEnabled_MetaData[];
#endif
		static void NewProp_bIsTrailingEventListeningEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsTrailingEventListeningEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsBreakingEventListeningEnabled_MetaData[];
#endif
		static void NewProp_bIsBreakingEventListeningEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsBreakingEventListeningEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsCollisionEventListeningEnabled_MetaData[];
#endif
		static void NewProp_bIsCollisionEventListeningEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCollisionEventListeningEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChaosDestructionListener_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UChaosDestructionListener_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UChaosDestructionListener_AddChaosSolverActor, "AddChaosSolverActor" }, // 928931658
		{ &Z_Construct_UFunction_UChaosDestructionListener_AddGeometryCollectionActor, "AddGeometryCollectionActor" }, // 198280545
		{ &Z_Construct_UFunction_UChaosDestructionListener_IsEventListening, "IsEventListening" }, // 4198623637
		{ &Z_Construct_UFunction_UChaosDestructionListener_RemoveChaosSolverActor, "RemoveChaosSolverActor" }, // 3134355586
		{ &Z_Construct_UFunction_UChaosDestructionListener_RemoveGeometryCollectionActor, "RemoveGeometryCollectionActor" }, // 288463801
		{ &Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventEnabled, "SetBreakingEventEnabled" }, // 4178254228
		{ &Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventRequestSettings, "SetBreakingEventRequestSettings" }, // 735368017
		{ &Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventEnabled, "SetCollisionEventEnabled" }, // 492654343
		{ &Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventRequestSettings, "SetCollisionEventRequestSettings" }, // 2905984734
		{ &Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventEnabled, "SetTrailingEventEnabled" }, // 2437046292
		{ &Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventRequestSettings, "SetTrailingEventRequestSettings" }, // 3289732547
		{ &Z_Construct_UFunction_UChaosDestructionListener_SortBreakingEvents, "SortBreakingEvents" }, // 28281604
		{ &Z_Construct_UFunction_UChaosDestructionListener_SortCollisionEvents, "SortCollisionEvents" }, // 2561802563
		{ &Z_Construct_UFunction_UChaosDestructionListener_SortTrailingEvents, "SortTrailingEvents" }, // 3865737147
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosDestructionListener_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Chaos Common" },
		{ "Comment", "/** Object allowing for retrieving Chaos Destruction data. */" },
		{ "HideCategories", "Object ActorComponent Physics Rendering Mobility LOD PhysicsVolume" },
		{ "IncludePath", "ChaosBlueprint.h" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Object allowing for retrieving Chaos Destruction data." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_OnTrailingEvents_MetaData[] = {
		{ "Comment", "/** Called when new trailing events are available. */" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Called when new trailing events are available." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_OnTrailingEvents = { "OnTrailingEvents", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosDestructionListener, OnTrailingEvents), Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosTrailingEvents__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_OnTrailingEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_OnTrailingEvents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_OnBreakingEvents_MetaData[] = {
		{ "Comment", "/** Called when new breaking events are available. */" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Called when new breaking events are available." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_OnBreakingEvents = { "OnBreakingEvents", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosDestructionListener, OnBreakingEvents), Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakingEvents__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_OnBreakingEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_OnBreakingEvents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_OnCollisionEvents_MetaData[] = {
		{ "Comment", "/** Called when new collision events are available. */" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Called when new collision events are available." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_OnCollisionEvents = { "OnCollisionEvents", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosDestructionListener, OnCollisionEvents), Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCollisionEvents__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_OnCollisionEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_OnCollisionEvents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_GeometryCollectionActors_MetaData[] = {
		{ "Category", "GeometryCollections" },
		{ "Comment", "// Which chaos solver actors we're using. If empty, this listener will fallback to the \"world\" solver.\n" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Which chaos solver actors we're using. If empty, this listener will fallback to the \"world\" solver." },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_GeometryCollectionActors = { "GeometryCollectionActors", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosDestructionListener, GeometryCollectionActors), METADATA_PARAMS(Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_GeometryCollectionActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_GeometryCollectionActors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_GeometryCollectionActors_ElementProp = { "GeometryCollectionActors", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AGeometryCollectionActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_ChaosSolverActors_MetaData[] = {
		{ "Category", "Solvers" },
		{ "Comment", "// Which chaos solver actors we're using. If empty, this listener will fallback to the \"world\" solver.\n" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Which chaos solver actors we're using. If empty, this listener will fallback to the \"world\" solver." },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_ChaosSolverActors = { "ChaosSolverActors", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosDestructionListener, ChaosSolverActors), METADATA_PARAMS(Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_ChaosSolverActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_ChaosSolverActors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_ChaosSolverActors_ElementProp = { "ChaosSolverActors", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AChaosSolverActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_TrailingEventRequestSettings_MetaData[] = {
		{ "Category", "Trailing Events" },
		{ "Comment", "// The settings to use for trailing event listening\n" },
		{ "EditCondition", "bIsTrailingEventListeningEnabled" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "The settings to use for trailing event listening" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_TrailingEventRequestSettings = { "TrailingEventRequestSettings", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosDestructionListener, TrailingEventRequestSettings), Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings, METADATA_PARAMS(Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_TrailingEventRequestSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_TrailingEventRequestSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_BreakingEventRequestSettings_MetaData[] = {
		{ "Category", "Breaking Events" },
		{ "Comment", "// The settings to use for breaking event listening\n" },
		{ "EditCondition", "bIsBreakingEventListeningEnabled" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "The settings to use for breaking event listening" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_BreakingEventRequestSettings = { "BreakingEventRequestSettings", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosDestructionListener, BreakingEventRequestSettings), Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings, METADATA_PARAMS(Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_BreakingEventRequestSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_BreakingEventRequestSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_CollisionEventRequestSettings_MetaData[] = {
		{ "Category", "Collision Events" },
		{ "Comment", "// The settings to use for collision event listening\n" },
		{ "EditCondition", "bIsCollisionEventListeningEnabled" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "The settings to use for collision event listening" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_CollisionEventRequestSettings = { "CollisionEventRequestSettings", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosDestructionListener, CollisionEventRequestSettings), Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings, METADATA_PARAMS(Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_CollisionEventRequestSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_CollisionEventRequestSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_bIsTrailingEventListeningEnabled_MetaData[] = {
		{ "Category", "Trailing Events" },
		{ "Comment", "// Whether or not trailing event listening is enabled\n" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Whether or not trailing event listening is enabled" },
	};
#endif
	void Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_bIsTrailingEventListeningEnabled_SetBit(void* Obj)
	{
		((UChaosDestructionListener*)Obj)->bIsTrailingEventListeningEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_bIsTrailingEventListeningEnabled = { "bIsTrailingEventListeningEnabled", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UChaosDestructionListener), &Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_bIsTrailingEventListeningEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_bIsTrailingEventListeningEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_bIsTrailingEventListeningEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_bIsBreakingEventListeningEnabled_MetaData[] = {
		{ "Category", "Breaking Events" },
		{ "Comment", "// Whether or not collision event listening is enabled\n" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Whether or not collision event listening is enabled" },
	};
#endif
	void Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_bIsBreakingEventListeningEnabled_SetBit(void* Obj)
	{
		((UChaosDestructionListener*)Obj)->bIsBreakingEventListeningEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_bIsBreakingEventListeningEnabled = { "bIsBreakingEventListeningEnabled", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UChaosDestructionListener), &Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_bIsBreakingEventListeningEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_bIsBreakingEventListeningEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_bIsBreakingEventListeningEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_bIsCollisionEventListeningEnabled_MetaData[] = {
		{ "Category", "Collision Events" },
		{ "Comment", "// Whether or not collision event listening is enabled\n" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Whether or not collision event listening is enabled" },
	};
#endif
	void Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_bIsCollisionEventListeningEnabled_SetBit(void* Obj)
	{
		((UChaosDestructionListener*)Obj)->bIsCollisionEventListeningEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_bIsCollisionEventListeningEnabled = { "bIsCollisionEventListeningEnabled", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UChaosDestructionListener), &Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_bIsCollisionEventListeningEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_bIsCollisionEventListeningEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_bIsCollisionEventListeningEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChaosDestructionListener_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_OnTrailingEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_OnBreakingEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_OnCollisionEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_GeometryCollectionActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_GeometryCollectionActors_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_ChaosSolverActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_ChaosSolverActors_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_TrailingEventRequestSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_BreakingEventRequestSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_CollisionEventRequestSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_bIsTrailingEventListeningEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_bIsBreakingEventListeningEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_bIsCollisionEventListeningEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChaosDestructionListener_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChaosDestructionListener>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UChaosDestructionListener_Statics::ClassParams = {
		&UChaosDestructionListener::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UChaosDestructionListener_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UChaosDestructionListener_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UChaosDestructionListener_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosDestructionListener_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChaosDestructionListener()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UChaosDestructionListener_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UChaosDestructionListener, 2740895718);
	template<> GEOMETRYCOLLECTIONENGINE_API UClass* StaticClass<UChaosDestructionListener>()
	{
		return UChaosDestructionListener::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UChaosDestructionListener(Z_Construct_UClass_UChaosDestructionListener, &UChaosDestructionListener::StaticClass, TEXT("/Script/GeometryCollectionEngine"), TEXT("UChaosDestructionListener"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChaosDestructionListener);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
