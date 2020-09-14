// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCache/Classes/GeometryCacheComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCacheComponent() {}
// Cross Module References
	GEOMETRYCACHE_API UScriptStruct* Z_Construct_UScriptStruct_FTrackRenderData();
	UPackage* Z_Construct_UPackage__Script_GeometryCache();
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCacheComponent_NoRegister();
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCacheComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCache_NoRegister();
// End Cross Module References
class UScriptStruct* FTrackRenderData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GEOMETRYCACHE_API uint32 Get_Z_Construct_UScriptStruct_FTrackRenderData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTrackRenderData, Z_Construct_UPackage__Script_GeometryCache(), TEXT("TrackRenderData"), sizeof(FTrackRenderData), Get_Z_Construct_UScriptStruct_FTrackRenderData_Hash());
	}
	return Singleton;
}
template<> GEOMETRYCACHE_API UScriptStruct* StaticStruct<FTrackRenderData>()
{
	return FTrackRenderData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTrackRenderData(FTrackRenderData::StaticStruct, TEXT("/Script/GeometryCache"), TEXT("TrackRenderData"), false, nullptr, nullptr);
static struct FScriptStruct_GeometryCache_StaticRegisterNativesFTrackRenderData
{
	FScriptStruct_GeometryCache_StaticRegisterNativesFTrackRenderData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TrackRenderData")),new UScriptStruct::TCppStructOps<FTrackRenderData>);
	}
} ScriptStruct_GeometryCache_StaticRegisterNativesFTrackRenderData;
	struct Z_Construct_UScriptStruct_FTrackRenderData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackRenderData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Stores the RenderData for each individual track */" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
		{ "ToolTip", "Stores the RenderData for each individual track" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTrackRenderData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTrackRenderData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTrackRenderData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCache,
		nullptr,
		&NewStructOps,
		"TrackRenderData",
		sizeof(FTrackRenderData),
		alignof(FTrackRenderData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackRenderData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackRenderData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTrackRenderData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTrackRenderData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GeometryCache();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TrackRenderData"), sizeof(FTrackRenderData), Get_Z_Construct_UScriptStruct_FTrackRenderData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTrackRenderData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTrackRenderData_Hash() { return 1312793188U; }
	DEFINE_FUNCTION(UGeometryCacheComponent::execTickAtThisTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_GET_UBOOL(Z_Param_bInIsRunning);
		P_GET_UBOOL(Z_Param_bInBackwards);
		P_GET_UBOOL(Z_Param_bInIsLooping);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TickAtThisTime(Z_Param_Time,Z_Param_bInIsRunning,Z_Param_bInBackwards,Z_Param_bInIsLooping);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryCacheComponent::execGetNumberOfFrames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumberOfFrames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryCacheComponent::execGetDuration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDuration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryCacheComponent::execGetPlaybackDirection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPlaybackDirection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryCacheComponent::execGetAnimationTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAnimationTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryCacheComponent::execSetStartTimeOffset)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewStartTimeOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStartTimeOffset(Z_Param_NewStartTimeOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryCacheComponent::execGetStartTimeOffset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetStartTimeOffset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryCacheComponent::execSetGeometryCache)
	{
		P_GET_OBJECT(UGeometryCache,Z_Param_NewGeomCache);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetGeometryCache(Z_Param_NewGeomCache);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryCacheComponent::execSetPlaybackSpeed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewPlaybackSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlaybackSpeed(Z_Param_NewPlaybackSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryCacheComponent::execGetPlaybackSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPlaybackSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryCacheComponent::execSetLooping)
	{
		P_GET_UBOOL(Z_Param_bNewLooping);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLooping(Z_Param_bNewLooping);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryCacheComponent::execIsLooping)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLooping();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryCacheComponent::execIsPlayingReversed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlayingReversed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryCacheComponent::execIsPlaying)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlaying();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryCacheComponent::execStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Stop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryCacheComponent::execPause)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Pause();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryCacheComponent::execPlayReversedFromEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayReversedFromEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryCacheComponent::execPlayReversed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayReversed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryCacheComponent::execPlayFromStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayFromStart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryCacheComponent::execPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Play();
		P_NATIVE_END;
	}
	void UGeometryCacheComponent::StaticRegisterNativesUGeometryCacheComponent()
	{
		UClass* Class = UGeometryCacheComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAnimationTime", &UGeometryCacheComponent::execGetAnimationTime },
			{ "GetDuration", &UGeometryCacheComponent::execGetDuration },
			{ "GetNumberOfFrames", &UGeometryCacheComponent::execGetNumberOfFrames },
			{ "GetPlaybackDirection", &UGeometryCacheComponent::execGetPlaybackDirection },
			{ "GetPlaybackSpeed", &UGeometryCacheComponent::execGetPlaybackSpeed },
			{ "GetStartTimeOffset", &UGeometryCacheComponent::execGetStartTimeOffset },
			{ "IsLooping", &UGeometryCacheComponent::execIsLooping },
			{ "IsPlaying", &UGeometryCacheComponent::execIsPlaying },
			{ "IsPlayingReversed", &UGeometryCacheComponent::execIsPlayingReversed },
			{ "Pause", &UGeometryCacheComponent::execPause },
			{ "Play", &UGeometryCacheComponent::execPlay },
			{ "PlayFromStart", &UGeometryCacheComponent::execPlayFromStart },
			{ "PlayReversed", &UGeometryCacheComponent::execPlayReversed },
			{ "PlayReversedFromEnd", &UGeometryCacheComponent::execPlayReversedFromEnd },
			{ "SetGeometryCache", &UGeometryCacheComponent::execSetGeometryCache },
			{ "SetLooping", &UGeometryCacheComponent::execSetLooping },
			{ "SetPlaybackSpeed", &UGeometryCacheComponent::execSetPlaybackSpeed },
			{ "SetStartTimeOffset", &UGeometryCacheComponent::execSetStartTimeOffset },
			{ "Stop", &UGeometryCacheComponent::execStop },
			{ "TickAtThisTime", &UGeometryCacheComponent::execTickAtThisTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGeometryCacheComponent_GetAnimationTime_Statics
	{
		struct GeometryCacheComponent_eventGetAnimationTime_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryCacheComponent_GetAnimationTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeometryCacheComponent_eventGetAnimationTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCacheComponent_GetAnimationTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCacheComponent_GetAnimationTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCacheComponent_GetAnimationTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|GeometryCache" },
		{ "Comment", "/** Set the current animation time for GeometryCache. Includes the influence of elapsed time and SetStartTimeOffset */" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
		{ "ToolTip", "Set the current animation time for GeometryCache. Includes the influence of elapsed time and SetStartTimeOffset" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCacheComponent_GetAnimationTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCacheComponent, nullptr, "GetAnimationTime", nullptr, nullptr, sizeof(GeometryCacheComponent_eventGetAnimationTime_Parms), Z_Construct_UFunction_UGeometryCacheComponent_GetAnimationTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_GetAnimationTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCacheComponent_GetAnimationTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_GetAnimationTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_GetAnimationTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGeometryCacheComponent_GetAnimationTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryCacheComponent_GetDuration_Statics
	{
		struct GeometryCacheComponent_eventGetDuration_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryCacheComponent_GetDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeometryCacheComponent_eventGetDuration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCacheComponent_GetDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCacheComponent_GetDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCacheComponent_GetDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|GeometryCache" },
		{ "Comment", "/** Get the duration of the playback */" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
		{ "ToolTip", "Get the duration of the playback" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCacheComponent_GetDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCacheComponent, nullptr, "GetDuration", nullptr, nullptr, sizeof(GeometryCacheComponent_eventGetDuration_Parms), Z_Construct_UFunction_UGeometryCacheComponent_GetDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_GetDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCacheComponent_GetDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_GetDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_GetDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGeometryCacheComponent_GetDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryCacheComponent_GetNumberOfFrames_Statics
	{
		struct GeometryCacheComponent_eventGetNumberOfFrames_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryCacheComponent_GetNumberOfFrames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeometryCacheComponent_eventGetNumberOfFrames_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCacheComponent_GetNumberOfFrames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCacheComponent_GetNumberOfFrames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCacheComponent_GetNumberOfFrames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|GeometryCache" },
		{ "Comment", "/** Get the number of frames */" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
		{ "ToolTip", "Get the number of frames" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCacheComponent_GetNumberOfFrames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCacheComponent, nullptr, "GetNumberOfFrames", nullptr, nullptr, sizeof(GeometryCacheComponent_eventGetNumberOfFrames_Parms), Z_Construct_UFunction_UGeometryCacheComponent_GetNumberOfFrames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_GetNumberOfFrames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCacheComponent_GetNumberOfFrames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_GetNumberOfFrames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_GetNumberOfFrames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGeometryCacheComponent_GetNumberOfFrames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryCacheComponent_GetPlaybackDirection_Statics
	{
		struct GeometryCacheComponent_eventGetPlaybackDirection_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryCacheComponent_GetPlaybackDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeometryCacheComponent_eventGetPlaybackDirection_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCacheComponent_GetPlaybackDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCacheComponent_GetPlaybackDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCacheComponent_GetPlaybackDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|GeometryCache" },
		{ "Comment", "/** Set the current animation time for GeometryCache. Includes the influence of elapsed time and SetStartTimeOffset */" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
		{ "ToolTip", "Set the current animation time for GeometryCache. Includes the influence of elapsed time and SetStartTimeOffset" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCacheComponent_GetPlaybackDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCacheComponent, nullptr, "GetPlaybackDirection", nullptr, nullptr, sizeof(GeometryCacheComponent_eventGetPlaybackDirection_Parms), Z_Construct_UFunction_UGeometryCacheComponent_GetPlaybackDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_GetPlaybackDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCacheComponent_GetPlaybackDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_GetPlaybackDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_GetPlaybackDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGeometryCacheComponent_GetPlaybackDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryCacheComponent_GetPlaybackSpeed_Statics
	{
		struct GeometryCacheComponent_eventGetPlaybackSpeed_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryCacheComponent_GetPlaybackSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeometryCacheComponent_eventGetPlaybackSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCacheComponent_GetPlaybackSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCacheComponent_GetPlaybackSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCacheComponent_GetPlaybackSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|GeometryCache" },
		{ "Comment", "/** Get current playback speed for GeometryCache. */" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
		{ "ToolTip", "Get current playback speed for GeometryCache." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCacheComponent_GetPlaybackSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCacheComponent, nullptr, "GetPlaybackSpeed", nullptr, nullptr, sizeof(GeometryCacheComponent_eventGetPlaybackSpeed_Parms), Z_Construct_UFunction_UGeometryCacheComponent_GetPlaybackSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_GetPlaybackSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCacheComponent_GetPlaybackSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_GetPlaybackSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_GetPlaybackSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGeometryCacheComponent_GetPlaybackSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryCacheComponent_GetStartTimeOffset_Statics
	{
		struct GeometryCacheComponent_eventGetStartTimeOffset_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryCacheComponent_GetStartTimeOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeometryCacheComponent_eventGetStartTimeOffset_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCacheComponent_GetStartTimeOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCacheComponent_GetStartTimeOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCacheComponent_GetStartTimeOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|GeometryCache" },
		{ "Comment", "/** Get current start time offset for GeometryCache. */" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
		{ "ToolTip", "Get current start time offset for GeometryCache." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCacheComponent_GetStartTimeOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCacheComponent, nullptr, "GetStartTimeOffset", nullptr, nullptr, sizeof(GeometryCacheComponent_eventGetStartTimeOffset_Parms), Z_Construct_UFunction_UGeometryCacheComponent_GetStartTimeOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_GetStartTimeOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCacheComponent_GetStartTimeOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_GetStartTimeOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_GetStartTimeOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGeometryCacheComponent_GetStartTimeOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryCacheComponent_IsLooping_Statics
	{
		struct GeometryCacheComponent_eventIsLooping_Parms
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
	void Z_Construct_UFunction_UGeometryCacheComponent_IsLooping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GeometryCacheComponent_eventIsLooping_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryCacheComponent_IsLooping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GeometryCacheComponent_eventIsLooping_Parms), &Z_Construct_UFunction_UGeometryCacheComponent_IsLooping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCacheComponent_IsLooping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCacheComponent_IsLooping_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCacheComponent_IsLooping_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|GeometryCache" },
		{ "Comment", "/** Get whether this GeometryCache is looping or not. */" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
		{ "ToolTip", "Get whether this GeometryCache is looping or not." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCacheComponent_IsLooping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCacheComponent, nullptr, "IsLooping", nullptr, nullptr, sizeof(GeometryCacheComponent_eventIsLooping_Parms), Z_Construct_UFunction_UGeometryCacheComponent_IsLooping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_IsLooping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCacheComponent_IsLooping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_IsLooping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_IsLooping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGeometryCacheComponent_IsLooping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryCacheComponent_IsPlaying_Statics
	{
		struct GeometryCacheComponent_eventIsPlaying_Parms
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
	void Z_Construct_UFunction_UGeometryCacheComponent_IsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GeometryCacheComponent_eventIsPlaying_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryCacheComponent_IsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GeometryCacheComponent_eventIsPlaying_Parms), &Z_Construct_UFunction_UGeometryCacheComponent_IsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCacheComponent_IsPlaying_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCacheComponent_IsPlaying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCacheComponent_IsPlaying_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|GeometryCache" },
		{ "Comment", "/** Get whether this GeometryCache is playing or not. */" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
		{ "ToolTip", "Get whether this GeometryCache is playing or not." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCacheComponent_IsPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCacheComponent, nullptr, "IsPlaying", nullptr, nullptr, sizeof(GeometryCacheComponent_eventIsPlaying_Parms), Z_Construct_UFunction_UGeometryCacheComponent_IsPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_IsPlaying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCacheComponent_IsPlaying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_IsPlaying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_IsPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGeometryCacheComponent_IsPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryCacheComponent_IsPlayingReversed_Statics
	{
		struct GeometryCacheComponent_eventIsPlayingReversed_Parms
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
	void Z_Construct_UFunction_UGeometryCacheComponent_IsPlayingReversed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GeometryCacheComponent_eventIsPlayingReversed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryCacheComponent_IsPlayingReversed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GeometryCacheComponent_eventIsPlayingReversed_Parms), &Z_Construct_UFunction_UGeometryCacheComponent_IsPlayingReversed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCacheComponent_IsPlayingReversed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCacheComponent_IsPlayingReversed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCacheComponent_IsPlayingReversed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|GeometryCache" },
		{ "Comment", "/** Get whether this GeometryCache is playing in reverse or not. */" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
		{ "ToolTip", "Get whether this GeometryCache is playing in reverse or not." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCacheComponent_IsPlayingReversed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCacheComponent, nullptr, "IsPlayingReversed", nullptr, nullptr, sizeof(GeometryCacheComponent_eventIsPlayingReversed_Parms), Z_Construct_UFunction_UGeometryCacheComponent_IsPlayingReversed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_IsPlayingReversed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCacheComponent_IsPlayingReversed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_IsPlayingReversed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_IsPlayingReversed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGeometryCacheComponent_IsPlayingReversed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryCacheComponent_Pause_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCacheComponent_Pause_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|GeometryCache" },
		{ "Comment", "/** Pause playback of GeometryCache */" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
		{ "ToolTip", "Pause playback of GeometryCache" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCacheComponent_Pause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCacheComponent, nullptr, "Pause", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCacheComponent_Pause_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_Pause_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_Pause()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGeometryCacheComponent_Pause_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryCacheComponent_Play_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCacheComponent_Play_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|GeometryCache" },
		{ "Comment", "/** Start playback of GeometryCache */" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
		{ "ToolTip", "Start playback of GeometryCache" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCacheComponent_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCacheComponent, nullptr, "Play", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCacheComponent_Play_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_Play_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_Play()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGeometryCacheComponent_Play_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryCacheComponent_PlayFromStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCacheComponent_PlayFromStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|GeometryCache" },
		{ "Comment", "/** Start playback of GeometryCache from the start */" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
		{ "ToolTip", "Start playback of GeometryCache from the start" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCacheComponent_PlayFromStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCacheComponent, nullptr, "PlayFromStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCacheComponent_PlayFromStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_PlayFromStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_PlayFromStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGeometryCacheComponent_PlayFromStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryCacheComponent_PlayReversed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCacheComponent_PlayReversed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|GeometryCache" },
		{ "Comment", "/** Start playback of GeometryCache in reverse*/" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
		{ "ToolTip", "Start playback of GeometryCache in reverse" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCacheComponent_PlayReversed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCacheComponent, nullptr, "PlayReversed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCacheComponent_PlayReversed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_PlayReversed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_PlayReversed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGeometryCacheComponent_PlayReversed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryCacheComponent_PlayReversedFromEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCacheComponent_PlayReversedFromEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|GeometryCache" },
		{ "Comment", "/** Start playback of GeometryCache from the end and play in reverse */" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
		{ "ToolTip", "Start playback of GeometryCache from the end and play in reverse" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCacheComponent_PlayReversedFromEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCacheComponent, nullptr, "PlayReversedFromEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCacheComponent_PlayReversedFromEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_PlayReversedFromEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_PlayReversedFromEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGeometryCacheComponent_PlayReversedFromEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryCacheComponent_SetGeometryCache_Statics
	{
		struct GeometryCacheComponent_eventSetGeometryCache_Parms
		{
			UGeometryCache* NewGeomCache;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewGeomCache;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGeometryCacheComponent_SetGeometryCache_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GeometryCacheComponent_eventSetGeometryCache_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryCacheComponent_SetGeometryCache_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GeometryCacheComponent_eventSetGeometryCache_Parms), &Z_Construct_UFunction_UGeometryCacheComponent_SetGeometryCache_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryCacheComponent_SetGeometryCache_Statics::NewProp_NewGeomCache = { "NewGeomCache", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeometryCacheComponent_eventSetGeometryCache_Parms, NewGeomCache), Z_Construct_UClass_UGeometryCache_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCacheComponent_SetGeometryCache_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCacheComponent_SetGeometryCache_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCacheComponent_SetGeometryCache_Statics::NewProp_NewGeomCache,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCacheComponent_SetGeometryCache_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|GeometryCache" },
		{ "Comment", "/** Change the Geometry Cache used by this instance. */" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
		{ "ToolTip", "Change the Geometry Cache used by this instance." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCacheComponent_SetGeometryCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCacheComponent, nullptr, "SetGeometryCache", nullptr, nullptr, sizeof(GeometryCacheComponent_eventSetGeometryCache_Parms), Z_Construct_UFunction_UGeometryCacheComponent_SetGeometryCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_SetGeometryCache_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCacheComponent_SetGeometryCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_SetGeometryCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_SetGeometryCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGeometryCacheComponent_SetGeometryCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryCacheComponent_SetLooping_Statics
	{
		struct GeometryCacheComponent_eventSetLooping_Parms
		{
			bool bNewLooping;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNewLooping_MetaData[];
#endif
		static void NewProp_bNewLooping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewLooping;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCacheComponent_SetLooping_Statics::NewProp_bNewLooping_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UGeometryCacheComponent_SetLooping_Statics::NewProp_bNewLooping_SetBit(void* Obj)
	{
		((GeometryCacheComponent_eventSetLooping_Parms*)Obj)->bNewLooping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryCacheComponent_SetLooping_Statics::NewProp_bNewLooping = { "bNewLooping", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GeometryCacheComponent_eventSetLooping_Parms), &Z_Construct_UFunction_UGeometryCacheComponent_SetLooping_Statics::NewProp_bNewLooping_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCacheComponent_SetLooping_Statics::NewProp_bNewLooping_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_SetLooping_Statics::NewProp_bNewLooping_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCacheComponent_SetLooping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCacheComponent_SetLooping_Statics::NewProp_bNewLooping,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCacheComponent_SetLooping_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|GeometryCache" },
		{ "Comment", "/** Set whether this GeometryCache is looping or not. */" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
		{ "ToolTip", "Set whether this GeometryCache is looping or not." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCacheComponent_SetLooping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCacheComponent, nullptr, "SetLooping", nullptr, nullptr, sizeof(GeometryCacheComponent_eventSetLooping_Parms), Z_Construct_UFunction_UGeometryCacheComponent_SetLooping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_SetLooping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCacheComponent_SetLooping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_SetLooping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_SetLooping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGeometryCacheComponent_SetLooping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryCacheComponent_SetPlaybackSpeed_Statics
	{
		struct GeometryCacheComponent_eventSetPlaybackSpeed_Parms
		{
			float NewPlaybackSpeed;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewPlaybackSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewPlaybackSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCacheComponent_SetPlaybackSpeed_Statics::NewProp_NewPlaybackSpeed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryCacheComponent_SetPlaybackSpeed_Statics::NewProp_NewPlaybackSpeed = { "NewPlaybackSpeed", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeometryCacheComponent_eventSetPlaybackSpeed_Parms, NewPlaybackSpeed), METADATA_PARAMS(Z_Construct_UFunction_UGeometryCacheComponent_SetPlaybackSpeed_Statics::NewProp_NewPlaybackSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_SetPlaybackSpeed_Statics::NewProp_NewPlaybackSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCacheComponent_SetPlaybackSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCacheComponent_SetPlaybackSpeed_Statics::NewProp_NewPlaybackSpeed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCacheComponent_SetPlaybackSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|GeometryCache" },
		{ "Comment", "/** Set new playback speed for GeometryCache. */" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
		{ "ToolTip", "Set new playback speed for GeometryCache." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCacheComponent_SetPlaybackSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCacheComponent, nullptr, "SetPlaybackSpeed", nullptr, nullptr, sizeof(GeometryCacheComponent_eventSetPlaybackSpeed_Parms), Z_Construct_UFunction_UGeometryCacheComponent_SetPlaybackSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_SetPlaybackSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCacheComponent_SetPlaybackSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_SetPlaybackSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_SetPlaybackSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGeometryCacheComponent_SetPlaybackSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryCacheComponent_SetStartTimeOffset_Statics
	{
		struct GeometryCacheComponent_eventSetStartTimeOffset_Parms
		{
			float NewStartTimeOffset;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewStartTimeOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewStartTimeOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCacheComponent_SetStartTimeOffset_Statics::NewProp_NewStartTimeOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryCacheComponent_SetStartTimeOffset_Statics::NewProp_NewStartTimeOffset = { "NewStartTimeOffset", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeometryCacheComponent_eventSetStartTimeOffset_Parms, NewStartTimeOffset), METADATA_PARAMS(Z_Construct_UFunction_UGeometryCacheComponent_SetStartTimeOffset_Statics::NewProp_NewStartTimeOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_SetStartTimeOffset_Statics::NewProp_NewStartTimeOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCacheComponent_SetStartTimeOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCacheComponent_SetStartTimeOffset_Statics::NewProp_NewStartTimeOffset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCacheComponent_SetStartTimeOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|GeometryCache" },
		{ "Comment", "/** Set current start time offset for GeometryCache. */" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
		{ "ToolTip", "Set current start time offset for GeometryCache." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCacheComponent_SetStartTimeOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCacheComponent, nullptr, "SetStartTimeOffset", nullptr, nullptr, sizeof(GeometryCacheComponent_eventSetStartTimeOffset_Parms), Z_Construct_UFunction_UGeometryCacheComponent_SetStartTimeOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_SetStartTimeOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCacheComponent_SetStartTimeOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_SetStartTimeOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_SetStartTimeOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGeometryCacheComponent_SetStartTimeOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryCacheComponent_Stop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCacheComponent_Stop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|GeometryCache" },
		{ "Comment", "/** Stop playback of GeometryCache */" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
		{ "ToolTip", "Stop playback of GeometryCache" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCacheComponent_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCacheComponent, nullptr, "Stop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCacheComponent_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGeometryCacheComponent_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryCacheComponent_TickAtThisTime_Statics
	{
		struct GeometryCacheComponent_eventTickAtThisTime_Parms
		{
			float Time;
			bool bInIsRunning;
			bool bInBackwards;
			bool bInIsLooping;
		};
		static void NewProp_bInIsLooping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsLooping;
		static void NewProp_bInBackwards_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInBackwards;
		static void NewProp_bInIsRunning_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsRunning;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGeometryCacheComponent_TickAtThisTime_Statics::NewProp_bInIsLooping_SetBit(void* Obj)
	{
		((GeometryCacheComponent_eventTickAtThisTime_Parms*)Obj)->bInIsLooping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryCacheComponent_TickAtThisTime_Statics::NewProp_bInIsLooping = { "bInIsLooping", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GeometryCacheComponent_eventTickAtThisTime_Parms), &Z_Construct_UFunction_UGeometryCacheComponent_TickAtThisTime_Statics::NewProp_bInIsLooping_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryCacheComponent_TickAtThisTime_Statics::NewProp_bInBackwards_SetBit(void* Obj)
	{
		((GeometryCacheComponent_eventTickAtThisTime_Parms*)Obj)->bInBackwards = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryCacheComponent_TickAtThisTime_Statics::NewProp_bInBackwards = { "bInBackwards", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GeometryCacheComponent_eventTickAtThisTime_Parms), &Z_Construct_UFunction_UGeometryCacheComponent_TickAtThisTime_Statics::NewProp_bInBackwards_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryCacheComponent_TickAtThisTime_Statics::NewProp_bInIsRunning_SetBit(void* Obj)
	{
		((GeometryCacheComponent_eventTickAtThisTime_Parms*)Obj)->bInIsRunning = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryCacheComponent_TickAtThisTime_Statics::NewProp_bInIsRunning = { "bInIsRunning", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GeometryCacheComponent_eventTickAtThisTime_Parms), &Z_Construct_UFunction_UGeometryCacheComponent_TickAtThisTime_Statics::NewProp_bInIsRunning_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCacheComponent_TickAtThisTime_Statics::NewProp_Time_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryCacheComponent_TickAtThisTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeometryCacheComponent_eventTickAtThisTime_Parms, Time), METADATA_PARAMS(Z_Construct_UFunction_UGeometryCacheComponent_TickAtThisTime_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_TickAtThisTime_Statics::NewProp_Time_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCacheComponent_TickAtThisTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCacheComponent_TickAtThisTime_Statics::NewProp_bInIsLooping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCacheComponent_TickAtThisTime_Statics::NewProp_bInBackwards,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCacheComponent_TickAtThisTime_Statics::NewProp_bInIsRunning,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCacheComponent_TickAtThisTime_Statics::NewProp_Time,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCacheComponent_TickAtThisTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|GeometryCache" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCacheComponent_TickAtThisTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCacheComponent, nullptr, "TickAtThisTime", nullptr, nullptr, sizeof(GeometryCacheComponent_eventTickAtThisTime_Parms), Z_Construct_UFunction_UGeometryCacheComponent_TickAtThisTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_TickAtThisTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCacheComponent_TickAtThisTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_TickAtThisTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_TickAtThisTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGeometryCacheComponent_TickAtThisTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGeometryCacheComponent_NoRegister()
	{
		return UGeometryCacheComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryCacheComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bManualTick_MetaData[];
#endif
		static void NewProp_bManualTick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bManualTick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElapsedTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ElapsedTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumTracks_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumTracks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaybackSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlaybackSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTimeOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTimeOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[];
#endif
		static void NewProp_bLooping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLooping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRunning_MetaData[];
#endif
		static void NewProp_bRunning_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRunning;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeometryCache_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GeometryCache;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryCacheComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCache,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGeometryCacheComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGeometryCacheComponent_GetAnimationTime, "GetAnimationTime" }, // 8657751
		{ &Z_Construct_UFunction_UGeometryCacheComponent_GetDuration, "GetDuration" }, // 3934451980
		{ &Z_Construct_UFunction_UGeometryCacheComponent_GetNumberOfFrames, "GetNumberOfFrames" }, // 4124979474
		{ &Z_Construct_UFunction_UGeometryCacheComponent_GetPlaybackDirection, "GetPlaybackDirection" }, // 2579229658
		{ &Z_Construct_UFunction_UGeometryCacheComponent_GetPlaybackSpeed, "GetPlaybackSpeed" }, // 2307854185
		{ &Z_Construct_UFunction_UGeometryCacheComponent_GetStartTimeOffset, "GetStartTimeOffset" }, // 740658463
		{ &Z_Construct_UFunction_UGeometryCacheComponent_IsLooping, "IsLooping" }, // 1139325816
		{ &Z_Construct_UFunction_UGeometryCacheComponent_IsPlaying, "IsPlaying" }, // 77895499
		{ &Z_Construct_UFunction_UGeometryCacheComponent_IsPlayingReversed, "IsPlayingReversed" }, // 1842377365
		{ &Z_Construct_UFunction_UGeometryCacheComponent_Pause, "Pause" }, // 1037949265
		{ &Z_Construct_UFunction_UGeometryCacheComponent_Play, "Play" }, // 2683724663
		{ &Z_Construct_UFunction_UGeometryCacheComponent_PlayFromStart, "PlayFromStart" }, // 1556106863
		{ &Z_Construct_UFunction_UGeometryCacheComponent_PlayReversed, "PlayReversed" }, // 1468590373
		{ &Z_Construct_UFunction_UGeometryCacheComponent_PlayReversedFromEnd, "PlayReversedFromEnd" }, // 2904918226
		{ &Z_Construct_UFunction_UGeometryCacheComponent_SetGeometryCache, "SetGeometryCache" }, // 662410058
		{ &Z_Construct_UFunction_UGeometryCacheComponent_SetLooping, "SetLooping" }, // 2752866437
		{ &Z_Construct_UFunction_UGeometryCacheComponent_SetPlaybackSpeed, "SetPlaybackSpeed" }, // 3048258995
		{ &Z_Construct_UFunction_UGeometryCacheComponent_SetStartTimeOffset, "SetStartTimeOffset" }, // 1078615620
		{ &Z_Construct_UFunction_UGeometryCacheComponent_Stop, "Stop" }, // 2563057792
		{ &Z_Construct_UFunction_UGeometryCacheComponent_TickAtThisTime, "TickAtThisTime" }, // 1562441346
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCacheComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering Common Experimental" },
		{ "Comment", "/** GeometryCacheComponent, encapsulates a GeometryCache asset instance and implements functionality for rendering/and playback of GeometryCaches */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "HideCategories", "Object LOD Mobility Trigger" },
		{ "IncludePath", "GeometryCacheComponent.h" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
		{ "ToolTip", "GeometryCacheComponent, encapsulates a GeometryCache asset instance and implements functionality for rendering/and playback of GeometryCaches" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_bManualTick_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
	};
#endif
	void Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_bManualTick_SetBit(void* Obj)
	{
		((UGeometryCacheComponent*)Obj)->bManualTick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_bManualTick = { "bManualTick", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGeometryCacheComponent), &Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_bManualTick_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_bManualTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_bManualTick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "Comment", "/** Duration of the animation (maximum time) */" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
		{ "ToolTip", "Duration of the animation (maximum time)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCacheComponent, Duration), METADATA_PARAMS(Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_ElapsedTime_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_ElapsedTime = { "ElapsedTime", nullptr, (EPropertyFlags)0x0020080000022001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCacheComponent, ElapsedTime), METADATA_PARAMS(Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_ElapsedTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_ElapsedTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_NumTracks_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_NumTracks = { "NumTracks", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCacheComponent, NumTracks), METADATA_PARAMS(Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_NumTracks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_NumTracks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_PlaybackSpeed_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "ClampMax", "512.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
		{ "UIMax", "4.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_PlaybackSpeed = { "PlaybackSpeed", nullptr, (EPropertyFlags)0x0020080200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCacheComponent, PlaybackSpeed), METADATA_PARAMS(Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_PlaybackSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_PlaybackSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_StartTimeOffset_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "ClampMax", "14400.0" },
		{ "ClampMin", "-14400.0" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
		{ "UIMax", "14400.0" },
		{ "UIMin", "-14400.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_StartTimeOffset = { "StartTimeOffset", nullptr, (EPropertyFlags)0x0020080200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCacheComponent, StartTimeOffset), METADATA_PARAMS(Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_StartTimeOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_StartTimeOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_bLooping_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
	};
#endif
	void Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_bLooping_SetBit(void* Obj)
	{
		((UGeometryCacheComponent*)Obj)->bLooping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0020080200000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGeometryCacheComponent), &Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_bLooping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_bLooping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_bRunning_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
	};
#endif
	void Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_bRunning_SetBit(void* Obj)
	{
		((UGeometryCacheComponent*)Obj)->bRunning = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_bRunning = { "bRunning", nullptr, (EPropertyFlags)0x0020080200000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGeometryCacheComponent), &Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_bRunning_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_bRunning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_bRunning_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_GeometryCache_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "Comment", "/** Geometry Cache instance referenced by the component */" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
		{ "ToolTip", "Geometry Cache instance referenced by the component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_GeometryCache = { "GeometryCache", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCacheComponent, GeometryCache), Z_Construct_UClass_UGeometryCache_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_GeometryCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_GeometryCache_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGeometryCacheComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_bManualTick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_ElapsedTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_NumTracks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_PlaybackSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_StartTimeOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_bLooping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_bRunning,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_GeometryCache,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryCacheComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryCacheComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGeometryCacheComponent_Statics::ClassParams = {
		&UGeometryCacheComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGeometryCacheComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGeometryCacheComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeometryCacheComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGeometryCacheComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGeometryCacheComponent, 4062759715);
	template<> GEOMETRYCACHE_API UClass* StaticClass<UGeometryCacheComponent>()
	{
		return UGeometryCacheComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGeometryCacheComponent(Z_Construct_UClass_UGeometryCacheComponent, &UGeometryCacheComponent::StaticClass, TEXT("/Script/GeometryCache"), TEXT("UGeometryCacheComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryCacheComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
