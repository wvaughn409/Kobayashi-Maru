// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Animation/WidgetAnimationPlayCallbackProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetAnimationPlayCallbackProxy() {}
// Cross Module References
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_WidgetAnimationResult__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimationPlayCallbackProxy_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimationPlayCallbackProxy();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UMG_API UEnum* Z_Construct_UEnum_UMG_EUMGSequencePlayMode();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUMGSequencePlayer_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UMG_WidgetAnimationResult__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMG_WidgetAnimationResult__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimationPlayCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMG_WidgetAnimationResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, nullptr, "WidgetAnimationResult__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMG_WidgetAnimationResult__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_WidgetAnimationResult__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMG_WidgetAnimationResult__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UMG_WidgetAnimationResult__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UWidgetAnimationPlayCallbackProxy::execCreatePlayAnimationTimeRangeProxyObject)
	{
		P_GET_OBJECT_REF(UUMGSequencePlayer,Z_Param_Out_Result);
		P_GET_OBJECT(UUserWidget,Z_Param_Widget);
		P_GET_OBJECT(UWidgetAnimation,Z_Param_InAnimation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartAtTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_EndAtTime);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumLoopsToPlay);
		P_GET_PROPERTY(FByteProperty,Z_Param_PlayMode);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PlaybackSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWidgetAnimationPlayCallbackProxy**)Z_Param__Result=UWidgetAnimationPlayCallbackProxy::CreatePlayAnimationTimeRangeProxyObject(Z_Param_Out_Result,Z_Param_Widget,Z_Param_InAnimation,Z_Param_StartAtTime,Z_Param_EndAtTime,Z_Param_NumLoopsToPlay,EUMGSequencePlayMode::Type(Z_Param_PlayMode),Z_Param_PlaybackSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetAnimationPlayCallbackProxy::execCreatePlayAnimationProxyObject)
	{
		P_GET_OBJECT_REF(UUMGSequencePlayer,Z_Param_Out_Result);
		P_GET_OBJECT(UUserWidget,Z_Param_Widget);
		P_GET_OBJECT(UWidgetAnimation,Z_Param_InAnimation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartAtTime);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumLoopsToPlay);
		P_GET_PROPERTY(FByteProperty,Z_Param_PlayMode);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PlaybackSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWidgetAnimationPlayCallbackProxy**)Z_Param__Result=UWidgetAnimationPlayCallbackProxy::CreatePlayAnimationProxyObject(Z_Param_Out_Result,Z_Param_Widget,Z_Param_InAnimation,Z_Param_StartAtTime,Z_Param_NumLoopsToPlay,EUMGSequencePlayMode::Type(Z_Param_PlayMode),Z_Param_PlaybackSpeed);
		P_NATIVE_END;
	}
	void UWidgetAnimationPlayCallbackProxy::StaticRegisterNativesUWidgetAnimationPlayCallbackProxy()
	{
		UClass* Class = UWidgetAnimationPlayCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreatePlayAnimationProxyObject", &UWidgetAnimationPlayCallbackProxy::execCreatePlayAnimationProxyObject },
			{ "CreatePlayAnimationTimeRangeProxyObject", &UWidgetAnimationPlayCallbackProxy::execCreatePlayAnimationTimeRangeProxyObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject_Statics
	{
		struct WidgetAnimationPlayCallbackProxy_eventCreatePlayAnimationProxyObject_Parms
		{
			UUMGSequencePlayer* Result;
			UUserWidget* Widget;
			UWidgetAnimation* InAnimation;
			float StartAtTime;
			int32 NumLoopsToPlay;
			TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode;
			float PlaybackSpeed;
			UWidgetAnimationPlayCallbackProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlaybackSpeed;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayMode;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumLoopsToPlay;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartAtTime;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetAnimationPlayCallbackProxy_eventCreatePlayAnimationProxyObject_Parms, ReturnValue), Z_Construct_UClass_UWidgetAnimationPlayCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject_Statics::NewProp_PlaybackSpeed = { "PlaybackSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetAnimationPlayCallbackProxy_eventCreatePlayAnimationProxyObject_Parms, PlaybackSpeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject_Statics::NewProp_PlayMode = { "PlayMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetAnimationPlayCallbackProxy_eventCreatePlayAnimationProxyObject_Parms, PlayMode), Z_Construct_UEnum_UMG_EUMGSequencePlayMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject_Statics::NewProp_NumLoopsToPlay = { "NumLoopsToPlay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetAnimationPlayCallbackProxy_eventCreatePlayAnimationProxyObject_Parms, NumLoopsToPlay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject_Statics::NewProp_StartAtTime = { "StartAtTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetAnimationPlayCallbackProxy_eventCreatePlayAnimationProxyObject_Parms, StartAtTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject_Statics::NewProp_InAnimation = { "InAnimation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetAnimationPlayCallbackProxy_eventCreatePlayAnimationProxyObject_Parms, InAnimation), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetAnimationPlayCallbackProxy_eventCreatePlayAnimationProxyObject_Parms, Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject_Statics::NewProp_Widget_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetAnimationPlayCallbackProxy_eventCreatePlayAnimationProxyObject_Parms, Result), Z_Construct_UClass_UUMGSequencePlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject_Statics::NewProp_PlaybackSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject_Statics::NewProp_PlayMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject_Statics::NewProp_NumLoopsToPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject_Statics::NewProp_StartAtTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject_Statics::NewProp_InAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject_Statics::NewProp_Widget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "User Interface|Animation" },
		{ "CPP_Default_NumLoopsToPlay", "1" },
		{ "CPP_Default_PlaybackSpeed", "1.000000" },
		{ "CPP_Default_PlayMode", "Forward" },
		{ "CPP_Default_StartAtTime", "0.000000" },
		{ "DisplayName", "Play Animation with Finished event" },
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimationPlayCallbackProxy.h" },
		{ "ShortToolTip", "Play Animation and trigger event on Finished" },
		{ "ToolTip", "Play Animation on widget and trigger Finish event when the animation is done." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetAnimationPlayCallbackProxy, nullptr, "CreatePlayAnimationProxyObject", nullptr, nullptr, sizeof(WidgetAnimationPlayCallbackProxy_eventCreatePlayAnimationProxyObject_Parms), Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Statics
	{
		struct WidgetAnimationPlayCallbackProxy_eventCreatePlayAnimationTimeRangeProxyObject_Parms
		{
			UUMGSequencePlayer* Result;
			UUserWidget* Widget;
			UWidgetAnimation* InAnimation;
			float StartAtTime;
			float EndAtTime;
			int32 NumLoopsToPlay;
			TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode;
			float PlaybackSpeed;
			UWidgetAnimationPlayCallbackProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlaybackSpeed;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayMode;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumLoopsToPlay;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EndAtTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartAtTime;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetAnimationPlayCallbackProxy_eventCreatePlayAnimationTimeRangeProxyObject_Parms, ReturnValue), Z_Construct_UClass_UWidgetAnimationPlayCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Statics::NewProp_PlaybackSpeed = { "PlaybackSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetAnimationPlayCallbackProxy_eventCreatePlayAnimationTimeRangeProxyObject_Parms, PlaybackSpeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Statics::NewProp_PlayMode = { "PlayMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetAnimationPlayCallbackProxy_eventCreatePlayAnimationTimeRangeProxyObject_Parms, PlayMode), Z_Construct_UEnum_UMG_EUMGSequencePlayMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Statics::NewProp_NumLoopsToPlay = { "NumLoopsToPlay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetAnimationPlayCallbackProxy_eventCreatePlayAnimationTimeRangeProxyObject_Parms, NumLoopsToPlay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Statics::NewProp_EndAtTime = { "EndAtTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetAnimationPlayCallbackProxy_eventCreatePlayAnimationTimeRangeProxyObject_Parms, EndAtTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Statics::NewProp_StartAtTime = { "StartAtTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetAnimationPlayCallbackProxy_eventCreatePlayAnimationTimeRangeProxyObject_Parms, StartAtTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Statics::NewProp_InAnimation = { "InAnimation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetAnimationPlayCallbackProxy_eventCreatePlayAnimationTimeRangeProxyObject_Parms, InAnimation), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetAnimationPlayCallbackProxy_eventCreatePlayAnimationTimeRangeProxyObject_Parms, Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Statics::NewProp_Widget_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetAnimationPlayCallbackProxy_eventCreatePlayAnimationTimeRangeProxyObject_Parms, Result), Z_Construct_UClass_UUMGSequencePlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Statics::NewProp_PlaybackSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Statics::NewProp_PlayMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Statics::NewProp_NumLoopsToPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Statics::NewProp_EndAtTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Statics::NewProp_StartAtTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Statics::NewProp_InAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Statics::NewProp_Widget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "User Interface|Animation" },
		{ "CPP_Default_EndAtTime", "0.000000" },
		{ "CPP_Default_NumLoopsToPlay", "1" },
		{ "CPP_Default_PlaybackSpeed", "1.000000" },
		{ "CPP_Default_PlayMode", "Forward" },
		{ "CPP_Default_StartAtTime", "0.000000" },
		{ "DisplayName", "Play Animation Time Range with Finished event" },
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimationPlayCallbackProxy.h" },
		{ "ShortToolTip", "Play Animation Time Range and trigger event on Finished" },
		{ "ToolTip", "Play Animation Time Range on widget and trigger Finish event when the animation is done." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetAnimationPlayCallbackProxy, nullptr, "CreatePlayAnimationTimeRangeProxyObject", nullptr, nullptr, sizeof(WidgetAnimationPlayCallbackProxy_eventCreatePlayAnimationTimeRangeProxyObject_Parms), Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWidgetAnimationPlayCallbackProxy_NoRegister()
	{
		return UWidgetAnimationPlayCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_UWidgetAnimationPlayCallbackProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Finished_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_Finished;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidgetAnimationPlayCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWidgetAnimationPlayCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject, "CreatePlayAnimationProxyObject" }, // 2143140629
		{ &Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject, "CreatePlayAnimationTimeRangeProxyObject" }, // 4292231280
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetAnimationPlayCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Animation/WidgetAnimationPlayCallbackProxy.h" },
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimationPlayCallbackProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetAnimationPlayCallbackProxy_Statics::NewProp_Finished_MetaData[] = {
		{ "Comment", "// Called when animation has been completed\n" },
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimationPlayCallbackProxy.h" },
		{ "ToolTip", "Called when animation has been completed" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWidgetAnimationPlayCallbackProxy_Statics::NewProp_Finished = { "Finished", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetAnimationPlayCallbackProxy, Finished), Z_Construct_UDelegateFunction_UMG_WidgetAnimationResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWidgetAnimationPlayCallbackProxy_Statics::NewProp_Finished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetAnimationPlayCallbackProxy_Statics::NewProp_Finished_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidgetAnimationPlayCallbackProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetAnimationPlayCallbackProxy_Statics::NewProp_Finished,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidgetAnimationPlayCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetAnimationPlayCallbackProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWidgetAnimationPlayCallbackProxy_Statics::ClassParams = {
		&UWidgetAnimationPlayCallbackProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWidgetAnimationPlayCallbackProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetAnimationPlayCallbackProxy_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWidgetAnimationPlayCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetAnimationPlayCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidgetAnimationPlayCallbackProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWidgetAnimationPlayCallbackProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWidgetAnimationPlayCallbackProxy, 1149963740);
	template<> UMG_API UClass* StaticClass<UWidgetAnimationPlayCallbackProxy>()
	{
		return UWidgetAnimationPlayCallbackProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWidgetAnimationPlayCallbackProxy(Z_Construct_UClass_UWidgetAnimationPlayCallbackProxy, &UWidgetAnimationPlayCallbackProxy::StaticClass, TEXT("/Script/UMG"), TEXT("UWidgetAnimationPlayCallbackProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetAnimationPlayCallbackProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
