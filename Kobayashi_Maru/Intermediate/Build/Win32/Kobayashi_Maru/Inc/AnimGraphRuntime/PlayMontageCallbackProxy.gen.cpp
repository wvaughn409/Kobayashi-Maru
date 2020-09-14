// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphRuntime/Public/PlayMontageCallbackProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayMontageCallbackProxy() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UFunction* Z_Construct_UDelegateFunction_AnimGraphRuntime_OnMontagePlayDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_UPlayMontageCallbackProxy_NoRegister();
	ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_UPlayMontageCallbackProxy();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBranchingPointNotifyPayload();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AnimGraphRuntime_OnMontagePlayDelegate__DelegateSignature_Statics
	{
		struct _Script_AnimGraphRuntime_eventOnMontagePlayDelegate_Parms
		{
			FName NotifyName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NotifyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_AnimGraphRuntime_OnMontagePlayDelegate__DelegateSignature_Statics::NewProp_NotifyName = { "NotifyName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AnimGraphRuntime_eventOnMontagePlayDelegate_Parms, NotifyName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AnimGraphRuntime_OnMontagePlayDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AnimGraphRuntime_OnMontagePlayDelegate__DelegateSignature_Statics::NewProp_NotifyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AnimGraphRuntime_OnMontagePlayDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayMontageCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AnimGraphRuntime_OnMontagePlayDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime, nullptr, "OnMontagePlayDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_AnimGraphRuntime_eventOnMontagePlayDelegate_Parms), Z_Construct_UDelegateFunction_AnimGraphRuntime_OnMontagePlayDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AnimGraphRuntime_OnMontagePlayDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AnimGraphRuntime_OnMontagePlayDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AnimGraphRuntime_OnMontagePlayDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AnimGraphRuntime_OnMontagePlayDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AnimGraphRuntime_OnMontagePlayDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UPlayMontageCallbackProxy::execOnNotifyEndReceived)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_NotifyName);
		P_GET_STRUCT_REF(FBranchingPointNotifyPayload,Z_Param_Out_BranchingPointNotifyPayload);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNotifyEndReceived(Z_Param_NotifyName,Z_Param_Out_BranchingPointNotifyPayload);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayMontageCallbackProxy::execOnNotifyBeginReceived)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_NotifyName);
		P_GET_STRUCT_REF(FBranchingPointNotifyPayload,Z_Param_Out_BranchingPointNotifyPayload);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNotifyBeginReceived(Z_Param_NotifyName,Z_Param_Out_BranchingPointNotifyPayload);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayMontageCallbackProxy::execOnMontageEnded)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_GET_UBOOL(Z_Param_bInterrupted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMontageEnded(Z_Param_Montage,Z_Param_bInterrupted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayMontageCallbackProxy::execOnMontageBlendingOut)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_GET_UBOOL(Z_Param_bInterrupted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMontageBlendingOut(Z_Param_Montage,Z_Param_bInterrupted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayMontageCallbackProxy::execCreateProxyObjectForPlayMontage)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_InSkeletalMeshComponent);
		P_GET_OBJECT(UAnimMontage,Z_Param_MontageToPlay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PlayRate);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartingPosition);
		P_GET_PROPERTY(FNameProperty,Z_Param_StartingSection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlayMontageCallbackProxy**)Z_Param__Result=UPlayMontageCallbackProxy::CreateProxyObjectForPlayMontage(Z_Param_InSkeletalMeshComponent,Z_Param_MontageToPlay,Z_Param_PlayRate,Z_Param_StartingPosition,Z_Param_StartingSection);
		P_NATIVE_END;
	}
	void UPlayMontageCallbackProxy::StaticRegisterNativesUPlayMontageCallbackProxy()
	{
		UClass* Class = UPlayMontageCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateProxyObjectForPlayMontage", &UPlayMontageCallbackProxy::execCreateProxyObjectForPlayMontage },
			{ "OnMontageBlendingOut", &UPlayMontageCallbackProxy::execOnMontageBlendingOut },
			{ "OnMontageEnded", &UPlayMontageCallbackProxy::execOnMontageEnded },
			{ "OnNotifyBeginReceived", &UPlayMontageCallbackProxy::execOnNotifyBeginReceived },
			{ "OnNotifyEndReceived", &UPlayMontageCallbackProxy::execOnNotifyEndReceived },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics
	{
		struct PlayMontageCallbackProxy_eventCreateProxyObjectForPlayMontage_Parms
		{
			USkeletalMeshComponent* InSkeletalMeshComponent;
			UAnimMontage* MontageToPlay;
			float PlayRate;
			float StartingPosition;
			FName StartingSection;
			UPlayMontageCallbackProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StartingSection;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartingPosition;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MontageToPlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSkeletalMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSkeletalMeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayMontageCallbackProxy_eventCreateProxyObjectForPlayMontage_Parms, ReturnValue), Z_Construct_UClass_UPlayMontageCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_StartingSection = { "StartingSection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayMontageCallbackProxy_eventCreateProxyObjectForPlayMontage_Parms, StartingSection), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_StartingPosition = { "StartingPosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayMontageCallbackProxy_eventCreateProxyObjectForPlayMontage_Parms, StartingPosition), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayMontageCallbackProxy_eventCreateProxyObjectForPlayMontage_Parms, PlayRate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_MontageToPlay = { "MontageToPlay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayMontageCallbackProxy_eventCreateProxyObjectForPlayMontage_Parms, MontageToPlay), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_InSkeletalMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_InSkeletalMeshComponent = { "InSkeletalMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayMontageCallbackProxy_eventCreateProxyObjectForPlayMontage_Parms, InSkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_InSkeletalMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_InSkeletalMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_StartingSection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_StartingPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_PlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_MontageToPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_InSkeletalMeshComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Comment", "// Called to perform the query internally\n" },
		{ "CPP_Default_PlayRate", "1.000000" },
		{ "CPP_Default_StartingPosition", "0.000000" },
		{ "CPP_Default_StartingSection", "None" },
		{ "ModuleRelativePath", "Public/PlayMontageCallbackProxy.h" },
		{ "ToolTip", "Called to perform the query internally" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayMontageCallbackProxy, nullptr, "CreateProxyObjectForPlayMontage", nullptr, nullptr, sizeof(PlayMontageCallbackProxy_eventCreateProxyObjectForPlayMontage_Parms), Z_Construct_UFunction_UPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayMontageCallbackProxy_OnMontageBlendingOut_Statics
	{
		struct PlayMontageCallbackProxy_eventOnMontageBlendingOut_Parms
		{
			UAnimMontage* Montage;
			bool bInterrupted;
		};
		static void NewProp_bInterrupted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInterrupted;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPlayMontageCallbackProxy_OnMontageBlendingOut_Statics::NewProp_bInterrupted_SetBit(void* Obj)
	{
		((PlayMontageCallbackProxy_eventOnMontageBlendingOut_Parms*)Obj)->bInterrupted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayMontageCallbackProxy_OnMontageBlendingOut_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayMontageCallbackProxy_eventOnMontageBlendingOut_Parms), &Z_Construct_UFunction_UPlayMontageCallbackProxy_OnMontageBlendingOut_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayMontageCallbackProxy_OnMontageBlendingOut_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayMontageCallbackProxy_eventOnMontageBlendingOut_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayMontageCallbackProxy_OnMontageBlendingOut_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayMontageCallbackProxy_OnMontageBlendingOut_Statics::NewProp_bInterrupted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayMontageCallbackProxy_OnMontageBlendingOut_Statics::NewProp_Montage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayMontageCallbackProxy_OnMontageBlendingOut_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayMontageCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayMontageCallbackProxy_OnMontageBlendingOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayMontageCallbackProxy, nullptr, "OnMontageBlendingOut", nullptr, nullptr, sizeof(PlayMontageCallbackProxy_eventOnMontageBlendingOut_Parms), Z_Construct_UFunction_UPlayMontageCallbackProxy_OnMontageBlendingOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayMontageCallbackProxy_OnMontageBlendingOut_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayMontageCallbackProxy_OnMontageBlendingOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayMontageCallbackProxy_OnMontageBlendingOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayMontageCallbackProxy_OnMontageBlendingOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayMontageCallbackProxy_OnMontageBlendingOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayMontageCallbackProxy_OnMontageEnded_Statics
	{
		struct PlayMontageCallbackProxy_eventOnMontageEnded_Parms
		{
			UAnimMontage* Montage;
			bool bInterrupted;
		};
		static void NewProp_bInterrupted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInterrupted;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPlayMontageCallbackProxy_OnMontageEnded_Statics::NewProp_bInterrupted_SetBit(void* Obj)
	{
		((PlayMontageCallbackProxy_eventOnMontageEnded_Parms*)Obj)->bInterrupted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayMontageCallbackProxy_OnMontageEnded_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayMontageCallbackProxy_eventOnMontageEnded_Parms), &Z_Construct_UFunction_UPlayMontageCallbackProxy_OnMontageEnded_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayMontageCallbackProxy_OnMontageEnded_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayMontageCallbackProxy_eventOnMontageEnded_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayMontageCallbackProxy_OnMontageEnded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayMontageCallbackProxy_OnMontageEnded_Statics::NewProp_bInterrupted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayMontageCallbackProxy_OnMontageEnded_Statics::NewProp_Montage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayMontageCallbackProxy_OnMontageEnded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayMontageCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayMontageCallbackProxy_OnMontageEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayMontageCallbackProxy, nullptr, "OnMontageEnded", nullptr, nullptr, sizeof(PlayMontageCallbackProxy_eventOnMontageEnded_Parms), Z_Construct_UFunction_UPlayMontageCallbackProxy_OnMontageEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayMontageCallbackProxy_OnMontageEnded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayMontageCallbackProxy_OnMontageEnded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayMontageCallbackProxy_OnMontageEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayMontageCallbackProxy_OnMontageEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayMontageCallbackProxy_OnMontageEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayMontageCallbackProxy_OnNotifyBeginReceived_Statics
	{
		struct PlayMontageCallbackProxy_eventOnNotifyBeginReceived_Parms
		{
			FName NotifyName;
			FBranchingPointNotifyPayload BranchingPointNotifyPayload;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BranchingPointNotifyPayload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BranchingPointNotifyPayload;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NotifyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayMontageCallbackProxy_OnNotifyBeginReceived_Statics::NewProp_BranchingPointNotifyPayload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayMontageCallbackProxy_OnNotifyBeginReceived_Statics::NewProp_BranchingPointNotifyPayload = { "BranchingPointNotifyPayload", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayMontageCallbackProxy_eventOnNotifyBeginReceived_Parms, BranchingPointNotifyPayload), Z_Construct_UScriptStruct_FBranchingPointNotifyPayload, METADATA_PARAMS(Z_Construct_UFunction_UPlayMontageCallbackProxy_OnNotifyBeginReceived_Statics::NewProp_BranchingPointNotifyPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayMontageCallbackProxy_OnNotifyBeginReceived_Statics::NewProp_BranchingPointNotifyPayload_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPlayMontageCallbackProxy_OnNotifyBeginReceived_Statics::NewProp_NotifyName = { "NotifyName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayMontageCallbackProxy_eventOnNotifyBeginReceived_Parms, NotifyName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayMontageCallbackProxy_OnNotifyBeginReceived_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayMontageCallbackProxy_OnNotifyBeginReceived_Statics::NewProp_BranchingPointNotifyPayload,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayMontageCallbackProxy_OnNotifyBeginReceived_Statics::NewProp_NotifyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayMontageCallbackProxy_OnNotifyBeginReceived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayMontageCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayMontageCallbackProxy_OnNotifyBeginReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayMontageCallbackProxy, nullptr, "OnNotifyBeginReceived", nullptr, nullptr, sizeof(PlayMontageCallbackProxy_eventOnNotifyBeginReceived_Parms), Z_Construct_UFunction_UPlayMontageCallbackProxy_OnNotifyBeginReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayMontageCallbackProxy_OnNotifyBeginReceived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayMontageCallbackProxy_OnNotifyBeginReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayMontageCallbackProxy_OnNotifyBeginReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayMontageCallbackProxy_OnNotifyBeginReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayMontageCallbackProxy_OnNotifyBeginReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayMontageCallbackProxy_OnNotifyEndReceived_Statics
	{
		struct PlayMontageCallbackProxy_eventOnNotifyEndReceived_Parms
		{
			FName NotifyName;
			FBranchingPointNotifyPayload BranchingPointNotifyPayload;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BranchingPointNotifyPayload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BranchingPointNotifyPayload;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NotifyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayMontageCallbackProxy_OnNotifyEndReceived_Statics::NewProp_BranchingPointNotifyPayload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayMontageCallbackProxy_OnNotifyEndReceived_Statics::NewProp_BranchingPointNotifyPayload = { "BranchingPointNotifyPayload", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayMontageCallbackProxy_eventOnNotifyEndReceived_Parms, BranchingPointNotifyPayload), Z_Construct_UScriptStruct_FBranchingPointNotifyPayload, METADATA_PARAMS(Z_Construct_UFunction_UPlayMontageCallbackProxy_OnNotifyEndReceived_Statics::NewProp_BranchingPointNotifyPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayMontageCallbackProxy_OnNotifyEndReceived_Statics::NewProp_BranchingPointNotifyPayload_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPlayMontageCallbackProxy_OnNotifyEndReceived_Statics::NewProp_NotifyName = { "NotifyName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayMontageCallbackProxy_eventOnNotifyEndReceived_Parms, NotifyName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayMontageCallbackProxy_OnNotifyEndReceived_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayMontageCallbackProxy_OnNotifyEndReceived_Statics::NewProp_BranchingPointNotifyPayload,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayMontageCallbackProxy_OnNotifyEndReceived_Statics::NewProp_NotifyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayMontageCallbackProxy_OnNotifyEndReceived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayMontageCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayMontageCallbackProxy_OnNotifyEndReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayMontageCallbackProxy, nullptr, "OnNotifyEndReceived", nullptr, nullptr, sizeof(PlayMontageCallbackProxy_eventOnNotifyEndReceived_Parms), Z_Construct_UFunction_UPlayMontageCallbackProxy_OnNotifyEndReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayMontageCallbackProxy_OnNotifyEndReceived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayMontageCallbackProxy_OnNotifyEndReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayMontageCallbackProxy_OnNotifyEndReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayMontageCallbackProxy_OnNotifyEndReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayMontageCallbackProxy_OnNotifyEndReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlayMontageCallbackProxy_NoRegister()
	{
		return UPlayMontageCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_UPlayMontageCallbackProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnNotifyEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNotifyEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnNotifyBegin_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNotifyBegin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnInterrupted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInterrupted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnBlendOut_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBlendOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCompleted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCompleted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayMontageCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayMontageCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage, "CreateProxyObjectForPlayMontage" }, // 1385812159
		{ &Z_Construct_UFunction_UPlayMontageCallbackProxy_OnMontageBlendingOut, "OnMontageBlendingOut" }, // 789982674
		{ &Z_Construct_UFunction_UPlayMontageCallbackProxy_OnMontageEnded, "OnMontageEnded" }, // 1712557539
		{ &Z_Construct_UFunction_UPlayMontageCallbackProxy_OnNotifyBeginReceived, "OnNotifyBeginReceived" }, // 968852979
		{ &Z_Construct_UFunction_UPlayMontageCallbackProxy_OnNotifyEndReceived, "OnNotifyEndReceived" }, // 1419764083
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayMontageCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PlayMontageCallbackProxy.h" },
		{ "ModuleRelativePath", "Public/PlayMontageCallbackProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayMontageCallbackProxy_Statics::NewProp_OnNotifyEnd_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayMontageCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlayMontageCallbackProxy_Statics::NewProp_OnNotifyEnd = { "OnNotifyEnd", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayMontageCallbackProxy, OnNotifyEnd), Z_Construct_UDelegateFunction_AnimGraphRuntime_OnMontagePlayDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPlayMontageCallbackProxy_Statics::NewProp_OnNotifyEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayMontageCallbackProxy_Statics::NewProp_OnNotifyEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayMontageCallbackProxy_Statics::NewProp_OnNotifyBegin_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayMontageCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlayMontageCallbackProxy_Statics::NewProp_OnNotifyBegin = { "OnNotifyBegin", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayMontageCallbackProxy, OnNotifyBegin), Z_Construct_UDelegateFunction_AnimGraphRuntime_OnMontagePlayDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPlayMontageCallbackProxy_Statics::NewProp_OnNotifyBegin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayMontageCallbackProxy_Statics::NewProp_OnNotifyBegin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayMontageCallbackProxy_Statics::NewProp_OnInterrupted_MetaData[] = {
		{ "Comment", "// Called when Montage has been interrupted (or failed to play)\n" },
		{ "ModuleRelativePath", "Public/PlayMontageCallbackProxy.h" },
		{ "ToolTip", "Called when Montage has been interrupted (or failed to play)" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlayMontageCallbackProxy_Statics::NewProp_OnInterrupted = { "OnInterrupted", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayMontageCallbackProxy, OnInterrupted), Z_Construct_UDelegateFunction_AnimGraphRuntime_OnMontagePlayDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPlayMontageCallbackProxy_Statics::NewProp_OnInterrupted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayMontageCallbackProxy_Statics::NewProp_OnInterrupted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayMontageCallbackProxy_Statics::NewProp_OnBlendOut_MetaData[] = {
		{ "Comment", "// Called when Montage starts blending out and is not interrupted\n" },
		{ "ModuleRelativePath", "Public/PlayMontageCallbackProxy.h" },
		{ "ToolTip", "Called when Montage starts blending out and is not interrupted" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlayMontageCallbackProxy_Statics::NewProp_OnBlendOut = { "OnBlendOut", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayMontageCallbackProxy, OnBlendOut), Z_Construct_UDelegateFunction_AnimGraphRuntime_OnMontagePlayDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPlayMontageCallbackProxy_Statics::NewProp_OnBlendOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayMontageCallbackProxy_Statics::NewProp_OnBlendOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayMontageCallbackProxy_Statics::NewProp_OnCompleted_MetaData[] = {
		{ "Comment", "// Called when Montage finished playing and wasn't interrupted\n" },
		{ "ModuleRelativePath", "Public/PlayMontageCallbackProxy.h" },
		{ "ToolTip", "Called when Montage finished playing and wasn't interrupted" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlayMontageCallbackProxy_Statics::NewProp_OnCompleted = { "OnCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayMontageCallbackProxy, OnCompleted), Z_Construct_UDelegateFunction_AnimGraphRuntime_OnMontagePlayDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPlayMontageCallbackProxy_Statics::NewProp_OnCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayMontageCallbackProxy_Statics::NewProp_OnCompleted_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayMontageCallbackProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayMontageCallbackProxy_Statics::NewProp_OnNotifyEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayMontageCallbackProxy_Statics::NewProp_OnNotifyBegin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayMontageCallbackProxy_Statics::NewProp_OnInterrupted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayMontageCallbackProxy_Statics::NewProp_OnBlendOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayMontageCallbackProxy_Statics::NewProp_OnCompleted,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayMontageCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayMontageCallbackProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayMontageCallbackProxy_Statics::ClassParams = {
		&UPlayMontageCallbackProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlayMontageCallbackProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayMontageCallbackProxy_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayMontageCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayMontageCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayMontageCallbackProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayMontageCallbackProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayMontageCallbackProxy, 2169432793);
	template<> ANIMGRAPHRUNTIME_API UClass* StaticClass<UPlayMontageCallbackProxy>()
	{
		return UPlayMontageCallbackProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayMontageCallbackProxy(Z_Construct_UClass_UPlayMontageCallbackProxy, &UPlayMontageCallbackProxy::StaticClass, TEXT("/Script/AnimGraphRuntime"), TEXT("UPlayMontageCallbackProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayMontageCallbackProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
