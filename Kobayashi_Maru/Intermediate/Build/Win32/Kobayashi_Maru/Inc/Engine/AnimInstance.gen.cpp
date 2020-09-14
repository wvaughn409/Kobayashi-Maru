// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/AnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimInstance() {}
// Cross Module References
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_PlayMontageAnimNotifyDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBranchingPointNotifyPayload();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnMontageBlendingOutStartedMCDelegate__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnAllMontageInstancesEndedMCDelegate__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnMontageEndedMCDelegate__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnMontageStartedMCDelegate__DelegateSignature();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMontagePlayReturnType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSlotEvaluationPose();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAdditiveAnimationType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FA2CSPose();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FA2Pose();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimCurveType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMarkerSyncAnimPosition();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETeleportType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERootMotionMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseSnapshot();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyEvent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyQueue();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Engine_PlayMontageAnimNotifyDelegate__DelegateSignature_Statics
	{
		struct _Script_Engine_eventPlayMontageAnimNotifyDelegate_Parms
		{
			FName NotifyName;
			FBranchingPointNotifyPayload BranchingPointPayload;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BranchingPointPayload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BranchingPointPayload;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NotifyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_PlayMontageAnimNotifyDelegate__DelegateSignature_Statics::NewProp_BranchingPointPayload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Engine_PlayMontageAnimNotifyDelegate__DelegateSignature_Statics::NewProp_BranchingPointPayload = { "BranchingPointPayload", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventPlayMontageAnimNotifyDelegate_Parms, BranchingPointPayload), Z_Construct_UScriptStruct_FBranchingPointNotifyPayload, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_PlayMontageAnimNotifyDelegate__DelegateSignature_Statics::NewProp_BranchingPointPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_PlayMontageAnimNotifyDelegate__DelegateSignature_Statics::NewProp_BranchingPointPayload_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_Engine_PlayMontageAnimNotifyDelegate__DelegateSignature_Statics::NewProp_NotifyName = { "NotifyName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventPlayMontageAnimNotifyDelegate_Parms, NotifyName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_PlayMontageAnimNotifyDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_PlayMontageAnimNotifyDelegate__DelegateSignature_Statics::NewProp_BranchingPointPayload,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_PlayMontageAnimNotifyDelegate__DelegateSignature_Statics::NewProp_NotifyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_PlayMontageAnimNotifyDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate called by 'PlayMontageNotify' and 'PlayMontageNotifyWindow' **/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Delegate called by 'PlayMontageNotify' and 'PlayMontageNotifyWindow' *" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_PlayMontageAnimNotifyDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "PlayMontageAnimNotifyDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_Engine_eventPlayMontageAnimNotifyDelegate_Parms), Z_Construct_UDelegateFunction_Engine_PlayMontageAnimNotifyDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_PlayMontageAnimNotifyDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_PlayMontageAnimNotifyDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_PlayMontageAnimNotifyDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_PlayMontageAnimNotifyDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Engine_PlayMontageAnimNotifyDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Engine_OnMontageBlendingOutStartedMCDelegate__DelegateSignature_Statics
	{
		struct _Script_Engine_eventOnMontageBlendingOutStartedMCDelegate_Parms
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
	void Z_Construct_UDelegateFunction_Engine_OnMontageBlendingOutStartedMCDelegate__DelegateSignature_Statics::NewProp_bInterrupted_SetBit(void* Obj)
	{
		((_Script_Engine_eventOnMontageBlendingOutStartedMCDelegate_Parms*)Obj)->bInterrupted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_Engine_OnMontageBlendingOutStartedMCDelegate__DelegateSignature_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_Engine_eventOnMontageBlendingOutStartedMCDelegate_Parms), &Z_Construct_UDelegateFunction_Engine_OnMontageBlendingOutStartedMCDelegate__DelegateSignature_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Engine_OnMontageBlendingOutStartedMCDelegate__DelegateSignature_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventOnMontageBlendingOutStartedMCDelegate_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnMontageBlendingOutStartedMCDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnMontageBlendingOutStartedMCDelegate__DelegateSignature_Statics::NewProp_bInterrupted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnMontageBlendingOutStartedMCDelegate__DelegateSignature_Statics::NewProp_Montage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnMontageBlendingOutStartedMCDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n* Delegate for when Montage started to blend out, whether interrupted or finished\n* DesiredWeight of this montage becomes 0.f, but this still contributes to the output pose\n*\n* bInterrupted = true if it was not property finished\n*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Delegate for when Montage started to blend out, whether interrupted or finished\nDesiredWeight of this montage becomes 0.f, but this still contributes to the output pose\n\nbInterrupted = true if it was not property finished" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnMontageBlendingOutStartedMCDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnMontageBlendingOutStartedMCDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_Engine_eventOnMontageBlendingOutStartedMCDelegate_Parms), Z_Construct_UDelegateFunction_Engine_OnMontageBlendingOutStartedMCDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnMontageBlendingOutStartedMCDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnMontageBlendingOutStartedMCDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnMontageBlendingOutStartedMCDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnMontageBlendingOutStartedMCDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnMontageBlendingOutStartedMCDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Engine_OnAllMontageInstancesEndedMCDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnAllMontageInstancesEndedMCDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate for when all montage instances have ended. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Delegate for when all montage instances have ended." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnAllMontageInstancesEndedMCDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnAllMontageInstancesEndedMCDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnAllMontageInstancesEndedMCDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnAllMontageInstancesEndedMCDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnAllMontageInstancesEndedMCDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnAllMontageInstancesEndedMCDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Engine_OnMontageEndedMCDelegate__DelegateSignature_Statics
	{
		struct _Script_Engine_eventOnMontageEndedMCDelegate_Parms
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
	void Z_Construct_UDelegateFunction_Engine_OnMontageEndedMCDelegate__DelegateSignature_Statics::NewProp_bInterrupted_SetBit(void* Obj)
	{
		((_Script_Engine_eventOnMontageEndedMCDelegate_Parms*)Obj)->bInterrupted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_Engine_OnMontageEndedMCDelegate__DelegateSignature_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_Engine_eventOnMontageEndedMCDelegate_Parms), &Z_Construct_UDelegateFunction_Engine_OnMontageEndedMCDelegate__DelegateSignature_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Engine_OnMontageEndedMCDelegate__DelegateSignature_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventOnMontageEndedMCDelegate_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnMontageEndedMCDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnMontageEndedMCDelegate__DelegateSignature_Statics::NewProp_bInterrupted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnMontageEndedMCDelegate__DelegateSignature_Statics::NewProp_Montage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnMontageEndedMCDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n* Delegate for when Montage is completed, whether interrupted or finished\n* Weight of this montage is 0.f, so it stops contributing to output pose\n*\n* bInterrupted = true if it was not property finished\n*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Delegate for when Montage is completed, whether interrupted or finished\nWeight of this montage is 0.f, so it stops contributing to output pose\n\nbInterrupted = true if it was not property finished" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnMontageEndedMCDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnMontageEndedMCDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_Engine_eventOnMontageEndedMCDelegate_Parms), Z_Construct_UDelegateFunction_Engine_OnMontageEndedMCDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnMontageEndedMCDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnMontageEndedMCDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnMontageEndedMCDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnMontageEndedMCDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnMontageEndedMCDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Engine_OnMontageStartedMCDelegate__DelegateSignature_Statics
	{
		struct _Script_Engine_eventOnMontageStartedMCDelegate_Parms
		{
			UAnimMontage* Montage;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Engine_OnMontageStartedMCDelegate__DelegateSignature_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventOnMontageStartedMCDelegate_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnMontageStartedMCDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnMontageStartedMCDelegate__DelegateSignature_Statics::NewProp_Montage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnMontageStartedMCDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n* Delegate for when Montage is started\n*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Delegate for when Montage is started" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnMontageStartedMCDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnMontageStartedMCDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_Engine_eventOnMontageStartedMCDelegate_Parms), Z_Construct_UDelegateFunction_Engine_OnMontageStartedMCDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnMontageStartedMCDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnMontageStartedMCDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnMontageStartedMCDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnMontageStartedMCDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnMontageStartedMCDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EMontagePlayReturnType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMontagePlayReturnType, Z_Construct_UPackage__Script_Engine(), TEXT("EMontagePlayReturnType"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EMontagePlayReturnType>()
	{
		return EMontagePlayReturnType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMontagePlayReturnType(EMontagePlayReturnType_StaticEnum, TEXT("/Script/Engine"), TEXT("EMontagePlayReturnType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EMontagePlayReturnType_Hash() { return 1427107603U; }
	UEnum* Z_Construct_UEnum_Engine_EMontagePlayReturnType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMontagePlayReturnType"), 0, Get_Z_Construct_UEnum_Engine_EMontagePlayReturnType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMontagePlayReturnType::MontageLength", (int64)EMontagePlayReturnType::MontageLength },
				{ "EMontagePlayReturnType::Duration", (int64)EMontagePlayReturnType::Duration },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Duration.Comment", "//Return value is the play duration of the montage (length / play rate, in seconds)\n" },
				{ "Duration.Name", "EMontagePlayReturnType::Duration" },
				{ "Duration.ToolTip", "Return value is the play duration of the montage (length / play rate, in seconds)" },
				{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
				{ "MontageLength.Comment", "//Return value is the length of the montage (in seconds)\n" },
				{ "MontageLength.Name", "EMontagePlayReturnType::MontageLength" },
				{ "MontageLength.ToolTip", "Return value is the length of the montage (in seconds)" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EMontagePlayReturnType",
				"EMontagePlayReturnType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FSlotEvaluationPose::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSlotEvaluationPose_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSlotEvaluationPose, Z_Construct_UPackage__Script_Engine(), TEXT("SlotEvaluationPose"), sizeof(FSlotEvaluationPose), Get_Z_Construct_UScriptStruct_FSlotEvaluationPose_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSlotEvaluationPose>()
{
	return FSlotEvaluationPose::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSlotEvaluationPose(FSlotEvaluationPose::StaticStruct, TEXT("/Script/Engine"), TEXT("SlotEvaluationPose"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSlotEvaluationPose
{
	FScriptStruct_Engine_StaticRegisterNativesFSlotEvaluationPose()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SlotEvaluationPose")),new UScriptStruct::TCppStructOps<FSlotEvaluationPose>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSlotEvaluationPose;
	struct Z_Construct_UScriptStruct_FSlotEvaluationPose_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditiveType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AdditiveType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlotEvaluationPose_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Helper struct for Slot node pose evaluation. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Helper struct for Slot node pose evaluation." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSlotEvaluationPose_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSlotEvaluationPose>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlotEvaluationPose_Statics::NewProp_Weight_MetaData[] = {
		{ "Comment", "/** Weight of pose */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Weight of pose" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSlotEvaluationPose_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSlotEvaluationPose, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FSlotEvaluationPose_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotEvaluationPose_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlotEvaluationPose_Statics::NewProp_AdditiveType_MetaData[] = {
		{ "Comment", "/** Type of additive for pose */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Type of additive for pose" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSlotEvaluationPose_Statics::NewProp_AdditiveType = { "AdditiveType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSlotEvaluationPose, AdditiveType), Z_Construct_UEnum_Engine_EAdditiveAnimationType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlotEvaluationPose_Statics::NewProp_AdditiveType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotEvaluationPose_Statics::NewProp_AdditiveType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSlotEvaluationPose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlotEvaluationPose_Statics::NewProp_Weight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlotEvaluationPose_Statics::NewProp_AdditiveType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSlotEvaluationPose_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SlotEvaluationPose",
		sizeof(FSlotEvaluationPose),
		alignof(FSlotEvaluationPose),
		Z_Construct_UScriptStruct_FSlotEvaluationPose_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotEvaluationPose_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSlotEvaluationPose_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotEvaluationPose_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSlotEvaluationPose()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSlotEvaluationPose_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SlotEvaluationPose"), sizeof(FSlotEvaluationPose), Get_Z_Construct_UScriptStruct_FSlotEvaluationPose_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSlotEvaluationPose_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSlotEvaluationPose_Hash() { return 3339735818U; }
class UScriptStruct* FA2CSPose::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FA2CSPose_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FA2CSPose, Z_Construct_UPackage__Script_Engine(), TEXT("A2CSPose"), sizeof(FA2CSPose), Get_Z_Construct_UScriptStruct_FA2CSPose_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FA2CSPose>()
{
	return FA2CSPose::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FA2CSPose(FA2CSPose::StaticStruct, TEXT("/Script/Engine"), TEXT("A2CSPose"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFA2CSPose
{
	FScriptStruct_Engine_StaticRegisterNativesFA2CSPose()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("A2CSPose")),new UScriptStruct::TCppStructOps<FA2CSPose>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFA2CSPose;
	struct Z_Construct_UScriptStruct_FA2CSPose_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentSpaceFlags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ComponentSpaceFlags;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ComponentSpaceFlags_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FA2CSPose_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Component space poses. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Component space poses." },
	};
#endif
	void* Z_Construct_UScriptStruct_FA2CSPose_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FA2CSPose>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FA2CSPose_Statics::NewProp_ComponentSpaceFlags_MetaData[] = {
		{ "Comment", "/** Once evaluated to be mesh space, this flag will be set. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Once evaluated to be mesh space, this flag will be set." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FA2CSPose_Statics::NewProp_ComponentSpaceFlags = { "ComponentSpaceFlags", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FA2CSPose, ComponentSpaceFlags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FA2CSPose_Statics::NewProp_ComponentSpaceFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FA2CSPose_Statics::NewProp_ComponentSpaceFlags_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FA2CSPose_Statics::NewProp_ComponentSpaceFlags_Inner = { "ComponentSpaceFlags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FA2CSPose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FA2CSPose_Statics::NewProp_ComponentSpaceFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FA2CSPose_Statics::NewProp_ComponentSpaceFlags_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FA2CSPose_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FA2Pose,
		&NewStructOps,
		"A2CSPose",
		sizeof(FA2CSPose),
		alignof(FA2CSPose),
		Z_Construct_UScriptStruct_FA2CSPose_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FA2CSPose_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FA2CSPose_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FA2CSPose_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FA2CSPose()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FA2CSPose_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("A2CSPose"), sizeof(FA2CSPose), Get_Z_Construct_UScriptStruct_FA2CSPose_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FA2CSPose_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FA2CSPose_Hash() { return 3052362081U; }
class UScriptStruct* FA2Pose::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FA2Pose_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FA2Pose, Z_Construct_UPackage__Script_Engine(), TEXT("A2Pose"), sizeof(FA2Pose), Get_Z_Construct_UScriptStruct_FA2Pose_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FA2Pose>()
{
	return FA2Pose::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FA2Pose(FA2Pose::StaticStruct, TEXT("/Script/Engine"), TEXT("A2Pose"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFA2Pose
{
	FScriptStruct_Engine_StaticRegisterNativesFA2Pose()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("A2Pose")),new UScriptStruct::TCppStructOps<FA2Pose>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFA2Pose;
	struct Z_Construct_UScriptStruct_FA2Pose_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bones_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Bones;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bones_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FA2Pose_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FA2Pose_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FA2Pose>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FA2Pose_Statics::NewProp_Bones_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FA2Pose_Statics::NewProp_Bones = { "Bones", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FA2Pose, Bones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FA2Pose_Statics::NewProp_Bones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FA2Pose_Statics::NewProp_Bones_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FA2Pose_Statics::NewProp_Bones_Inner = { "Bones", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FA2Pose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FA2Pose_Statics::NewProp_Bones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FA2Pose_Statics::NewProp_Bones_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FA2Pose_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"A2Pose",
		sizeof(FA2Pose),
		alignof(FA2Pose),
		Z_Construct_UScriptStruct_FA2Pose_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FA2Pose_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FA2Pose_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FA2Pose_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FA2Pose()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FA2Pose_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("A2Pose"), sizeof(FA2Pose), Get_Z_Construct_UScriptStruct_FA2Pose_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FA2Pose_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FA2Pose_Hash() { return 2330167981U; }
	DEFINE_FUNCTION(UAnimInstance::execResetDynamics)
	{
		P_GET_ENUM(ETeleportType,Z_Param_InTeleportType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetDynamics(ETeleportType(Z_Param_InTeleportType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execGetSyncGroupPosition)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InSyncGroupName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMarkerSyncAnimPosition*)Z_Param__Result=P_THIS->GetSyncGroupPosition(Z_Param_InSyncGroupName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execIsSyncGroupBetweenMarkers)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InSyncGroupName);
		P_GET_PROPERTY(FNameProperty,Z_Param_PreviousMarker);
		P_GET_PROPERTY(FNameProperty,Z_Param_NextMarker);
		P_GET_UBOOL(Z_Param_bRespectMarkerOrder);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSyncGroupBetweenMarkers(Z_Param_InSyncGroupName,Z_Param_PreviousMarker,Z_Param_NextMarker,Z_Param_bRespectMarkerOrder);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execHasMarkerBeenHitThisFrame)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SyncGroup);
		P_GET_PROPERTY(FNameProperty,Z_Param_MarkerName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasMarkerBeenHitThisFrame(Z_Param_SyncGroup,Z_Param_MarkerName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execGetTimeToClosestMarker)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SyncGroup);
		P_GET_PROPERTY(FNameProperty,Z_Param_MarkerName);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutMarkerTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetTimeToClosestMarker(Z_Param_SyncGroup,Z_Param_MarkerName,Z_Param_Out_OutMarkerTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execUnlockAIResources)
	{
		P_GET_UBOOL(Z_Param_bUnlockMovement);
		P_GET_UBOOL(Z_Param_UnlockAILogic);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnlockAIResources(Z_Param_bUnlockMovement,Z_Param_UnlockAILogic);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execLockAIResources)
	{
		P_GET_UBOOL(Z_Param_bLockMovement);
		P_GET_UBOOL(Z_Param_LockAILogic);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LockAIResources(Z_Param_bLockMovement,Z_Param_LockAILogic);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execCalculateDirection)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Velocity);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_BaseRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->CalculateDirection(Z_Param_Out_Velocity,Z_Param_Out_BaseRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execClearMorphTargets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearMorphTargets();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execSetMorphTarget)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_MorphTargetName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMorphTarget(Z_Param_MorphTargetName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execGetCurrentStateName)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MachineIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetCurrentStateName(Z_Param_MachineIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execGetAllCurveNames)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_OutNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllCurveNames(Z_Param_Out_OutNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execGetActiveCurveNames)
	{
		P_GET_ENUM(EAnimCurveType,Z_Param_CurveType);
		P_GET_TARRAY_REF(FName,Z_Param_Out_OutNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetActiveCurveNames(EAnimCurveType(Z_Param_CurveType),Z_Param_Out_OutNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execGetCurveValue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_CurveName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurveValue(Z_Param_CurveName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execGetRelevantAnimTimeFraction)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MachineIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_StateIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRelevantAnimTimeFraction(Z_Param_MachineIndex,Z_Param_StateIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execGetRelevantAnimTime)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MachineIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_StateIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRelevantAnimTime(Z_Param_MachineIndex,Z_Param_StateIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execGetRelevantAnimLength)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MachineIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_StateIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRelevantAnimLength(Z_Param_MachineIndex,Z_Param_StateIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execGetRelevantAnimTimeRemainingFraction)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MachineIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_StateIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRelevantAnimTimeRemainingFraction(Z_Param_MachineIndex,Z_Param_StateIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execGetRelevantAnimTimeRemaining)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MachineIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_StateIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRelevantAnimTimeRemaining(Z_Param_MachineIndex,Z_Param_StateIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execGetInstanceTransitionTimeElapsedFraction)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MachineIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_TransitionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetInstanceTransitionTimeElapsedFraction(Z_Param_MachineIndex,Z_Param_TransitionIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execGetInstanceTransitionTimeElapsed)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MachineIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_TransitionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetInstanceTransitionTimeElapsed(Z_Param_MachineIndex,Z_Param_TransitionIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execGetInstanceTransitionCrossfadeDuration)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MachineIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_TransitionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetInstanceTransitionCrossfadeDuration(Z_Param_MachineIndex,Z_Param_TransitionIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execGetInstanceCurrentStateElapsedTime)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MachineIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetInstanceCurrentStateElapsedTime(Z_Param_MachineIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execGetInstanceStateWeight)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MachineIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_StateIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetInstanceStateWeight(Z_Param_MachineIndex,Z_Param_StateIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execGetInstanceMachineWeight)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MachineIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetInstanceMachineWeight(Z_Param_MachineIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execGetInstanceAssetPlayerTimeFromEndFraction)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AssetPlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetInstanceAssetPlayerTimeFromEndFraction(Z_Param_AssetPlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execGetInstanceAssetPlayerTimeFromEnd)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AssetPlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetInstanceAssetPlayerTimeFromEnd(Z_Param_AssetPlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execGetInstanceAssetPlayerTimeFraction)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AssetPlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetInstanceAssetPlayerTimeFraction(Z_Param_AssetPlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execGetInstanceAssetPlayerTime)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AssetPlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetInstanceAssetPlayerTime(Z_Param_AssetPlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execGetInstanceAssetPlayerLength)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AssetPlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetInstanceAssetPlayerLength(Z_Param_AssetPlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execSetRootMotionMode)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRootMotionMode(ERootMotionMode::Type(Z_Param_Value));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execGetLinkedAnimLayerInstanceByClass)
	{
		P_GET_OBJECT(UClass,Z_Param_InClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimInstance**)Z_Param__Result=P_THIS->GetLinkedAnimLayerInstanceByClass(Z_Param_InClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execGetLinkedAnimLayerInstanceByGroup)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InGroup);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimInstance**)Z_Param__Result=P_THIS->GetLinkedAnimLayerInstanceByGroup(Z_Param_InGroup);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execUnlinkAnimClassLayers)
	{
		P_GET_OBJECT(UClass,Z_Param_InClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnlinkAnimClassLayers(Z_Param_InClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execLinkAnimClassLayers)
	{
		P_GET_OBJECT(UClass,Z_Param_InClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LinkAnimClassLayers(Z_Param_InClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execLinkAnimGraphByTag)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InTag);
		P_GET_OBJECT(UClass,Z_Param_InClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LinkAnimGraphByTag(Z_Param_InTag,Z_Param_InClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execGetLinkedAnimGraphInstancesByTag)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InTag);
		P_GET_TARRAY_REF(UAnimInstance*,Z_Param_Out_OutLinkedInstances);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetLinkedAnimGraphInstancesByTag(Z_Param_InTag,Z_Param_Out_OutLinkedInstances);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execGetLinkedAnimGraphInstanceByTag)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimInstance**)Z_Param__Result=P_THIS->GetLinkedAnimGraphInstanceByTag(Z_Param_InTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execGetCurrentActiveMontage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimMontage**)Z_Param__Result=P_THIS->GetCurrentActiveMontage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execIsAnyMontagePlaying)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAnyMontagePlaying();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execMontage_GetPlayRate)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->Montage_GetPlayRate(Z_Param_Montage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execMontage_GetBlendTime)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->Montage_GetBlendTime(Z_Param_Montage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execMontage_GetIsStopped)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Montage_GetIsStopped(Z_Param_Montage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execMontage_SetPosition)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Montage_SetPosition(Z_Param_Montage,Z_Param_NewPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execMontage_GetPosition)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->Montage_GetPosition(Z_Param_Montage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execMontage_GetCurrentSection)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->Montage_GetCurrentSection(Z_Param_Montage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execMontage_IsPlaying)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Montage_IsPlaying(Z_Param_Montage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execMontage_IsActive)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Montage_IsActive(Z_Param_Montage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execMontage_SetPlayRate)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewPlayRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Montage_SetPlayRate(Z_Param_Montage,Z_Param_NewPlayRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execMontage_SetNextSection)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SectionNameToChange);
		P_GET_PROPERTY(FNameProperty,Z_Param_NextSection);
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Montage_SetNextSection(Z_Param_SectionNameToChange,Z_Param_NextSection,Z_Param_Montage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execMontage_JumpToSectionsEnd)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SectionName);
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Montage_JumpToSectionsEnd(Z_Param_SectionName,Z_Param_Montage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execMontage_JumpToSection)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SectionName);
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Montage_JumpToSection(Z_Param_SectionName,Z_Param_Montage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execMontage_Resume)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Montage_Resume(Z_Param_Montage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execMontage_Pause)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Montage_Pause(Z_Param_Montage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execMontage_StopGroupByName)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InBlendOutTime);
		P_GET_PROPERTY(FNameProperty,Z_Param_GroupName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Montage_StopGroupByName(Z_Param_InBlendOutTime,Z_Param_GroupName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execMontage_Stop)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InBlendOutTime);
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Montage_Stop(Z_Param_InBlendOutTime,Z_Param_Montage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execMontage_Play)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_MontageToPlay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InPlayRate);
		P_GET_ENUM(EMontagePlayReturnType,Z_Param_ReturnValueType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InTimeToStartMontageAt);
		P_GET_UBOOL(Z_Param_bStopAllMontages);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->Montage_Play(Z_Param_MontageToPlay,Z_Param_InPlayRate,EMontagePlayReturnType(Z_Param_ReturnValueType),Z_Param_InTimeToStartMontageAt,Z_Param_bStopAllMontages);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execIsPlayingSlotAnimation)
	{
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_Asset);
		P_GET_PROPERTY(FNameProperty,Z_Param_SlotNodeName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlayingSlotAnimation(Z_Param_Asset,Z_Param_SlotNodeName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execStopSlotAnimation)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InBlendOutTime);
		P_GET_PROPERTY(FNameProperty,Z_Param_SlotNodeName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopSlotAnimation(Z_Param_InBlendOutTime,Z_Param_SlotNodeName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execPlaySlotAnimationAsDynamicMontage)
	{
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_Asset);
		P_GET_PROPERTY(FNameProperty,Z_Param_SlotNodeName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BlendInTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BlendOutTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InPlayRate);
		P_GET_PROPERTY(FIntProperty,Z_Param_LoopCount);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BlendOutTriggerTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InTimeToStartMontageAt);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimMontage**)Z_Param__Result=P_THIS->PlaySlotAnimationAsDynamicMontage(Z_Param_Asset,Z_Param_SlotNodeName,Z_Param_BlendInTime,Z_Param_BlendOutTime,Z_Param_InPlayRate,Z_Param_LoopCount,Z_Param_BlendOutTriggerTime,Z_Param_InTimeToStartMontageAt);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execPlaySlotAnimation)
	{
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_Asset);
		P_GET_PROPERTY(FNameProperty,Z_Param_SlotNodeName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BlendInTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BlendOutTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InPlayRate);
		P_GET_PROPERTY(FIntProperty,Z_Param_LoopCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->PlaySlotAnimation(Z_Param_Asset,Z_Param_SlotNodeName,Z_Param_BlendInTime,Z_Param_BlendOutTime,Z_Param_InPlayRate,Z_Param_LoopCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execGetOwningComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetOwningComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execGetOwningActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetOwningActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execSetPropagateNotifiesToLinkedInstances)
	{
		P_GET_UBOOL(Z_Param_bSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPropagateNotifiesToLinkedInstances(Z_Param_bSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execGetPropagateNotifiesToLinkedInstances)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPropagateNotifiesToLinkedInstances();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execSetReceiveNotifiesFromLinkedInstances)
	{
		P_GET_UBOOL(Z_Param_bSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetReceiveNotifiesFromLinkedInstances(Z_Param_bSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execGetReceiveNotifiesFromLinkedInstances)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetReceiveNotifiesFromLinkedInstances();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execSnapshotPose)
	{
		P_GET_STRUCT_REF(FPoseSnapshot,Z_Param_Out_Snapshot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SnapshotPose(Z_Param_Out_Snapshot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execSavePoseSnapshot)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SnapshotName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SavePoseSnapshot(Z_Param_SnapshotName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execTryGetPawnOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APawn**)Z_Param__Result=P_THIS->TryGetPawnOwner();
		P_NATIVE_END;
	}
	static FName NAME_UAnimInstance_BlueprintBeginPlay = FName(TEXT("BlueprintBeginPlay"));
	void UAnimInstance::BlueprintBeginPlay()
	{
		ProcessEvent(FindFunctionChecked(NAME_UAnimInstance_BlueprintBeginPlay),NULL);
	}
	static FName NAME_UAnimInstance_BlueprintInitializeAnimation = FName(TEXT("BlueprintInitializeAnimation"));
	void UAnimInstance::BlueprintInitializeAnimation()
	{
		ProcessEvent(FindFunctionChecked(NAME_UAnimInstance_BlueprintInitializeAnimation),NULL);
	}
	static FName NAME_UAnimInstance_BlueprintLinkedAnimationLayersInitialized = FName(TEXT("BlueprintLinkedAnimationLayersInitialized"));
	void UAnimInstance::BlueprintLinkedAnimationLayersInitialized()
	{
		ProcessEvent(FindFunctionChecked(NAME_UAnimInstance_BlueprintLinkedAnimationLayersInitialized),NULL);
	}
	static FName NAME_UAnimInstance_BlueprintPostEvaluateAnimation = FName(TEXT("BlueprintPostEvaluateAnimation"));
	void UAnimInstance::BlueprintPostEvaluateAnimation()
	{
		ProcessEvent(FindFunctionChecked(NAME_UAnimInstance_BlueprintPostEvaluateAnimation),NULL);
	}
	static FName NAME_UAnimInstance_BlueprintUpdateAnimation = FName(TEXT("BlueprintUpdateAnimation"));
	void UAnimInstance::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		AnimInstance_eventBlueprintUpdateAnimation_Parms Parms;
		Parms.DeltaTimeX=DeltaTimeX;
		ProcessEvent(FindFunctionChecked(NAME_UAnimInstance_BlueprintUpdateAnimation),&Parms);
	}
	void UAnimInstance::StaticRegisterNativesUAnimInstance()
	{
		UClass* Class = UAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalculateDirection", &UAnimInstance::execCalculateDirection },
			{ "ClearMorphTargets", &UAnimInstance::execClearMorphTargets },
			{ "GetActiveCurveNames", &UAnimInstance::execGetActiveCurveNames },
			{ "GetAllCurveNames", &UAnimInstance::execGetAllCurveNames },
			{ "GetCurrentActiveMontage", &UAnimInstance::execGetCurrentActiveMontage },
			{ "GetCurrentStateName", &UAnimInstance::execGetCurrentStateName },
			{ "GetCurveValue", &UAnimInstance::execGetCurveValue },
			{ "GetInstanceAssetPlayerLength", &UAnimInstance::execGetInstanceAssetPlayerLength },
			{ "GetInstanceAssetPlayerTime", &UAnimInstance::execGetInstanceAssetPlayerTime },
			{ "GetInstanceAssetPlayerTimeFraction", &UAnimInstance::execGetInstanceAssetPlayerTimeFraction },
			{ "GetInstanceAssetPlayerTimeFromEnd", &UAnimInstance::execGetInstanceAssetPlayerTimeFromEnd },
			{ "GetInstanceAssetPlayerTimeFromEndFraction", &UAnimInstance::execGetInstanceAssetPlayerTimeFromEndFraction },
			{ "GetInstanceCurrentStateElapsedTime", &UAnimInstance::execGetInstanceCurrentStateElapsedTime },
			{ "GetInstanceMachineWeight", &UAnimInstance::execGetInstanceMachineWeight },
			{ "GetInstanceStateWeight", &UAnimInstance::execGetInstanceStateWeight },
			{ "GetInstanceTransitionCrossfadeDuration", &UAnimInstance::execGetInstanceTransitionCrossfadeDuration },
			{ "GetInstanceTransitionTimeElapsed", &UAnimInstance::execGetInstanceTransitionTimeElapsed },
			{ "GetInstanceTransitionTimeElapsedFraction", &UAnimInstance::execGetInstanceTransitionTimeElapsedFraction },
			{ "GetLinkedAnimGraphInstanceByTag", &UAnimInstance::execGetLinkedAnimGraphInstanceByTag },
			{ "GetLinkedAnimGraphInstancesByTag", &UAnimInstance::execGetLinkedAnimGraphInstancesByTag },
			{ "GetLinkedAnimLayerInstanceByClass", &UAnimInstance::execGetLinkedAnimLayerInstanceByClass },
			{ "GetLinkedAnimLayerInstanceByGroup", &UAnimInstance::execGetLinkedAnimLayerInstanceByGroup },
			{ "GetOwningActor", &UAnimInstance::execGetOwningActor },
			{ "GetOwningComponent", &UAnimInstance::execGetOwningComponent },
			{ "GetPropagateNotifiesToLinkedInstances", &UAnimInstance::execGetPropagateNotifiesToLinkedInstances },
			{ "GetReceiveNotifiesFromLinkedInstances", &UAnimInstance::execGetReceiveNotifiesFromLinkedInstances },
			{ "GetRelevantAnimLength", &UAnimInstance::execGetRelevantAnimLength },
			{ "GetRelevantAnimTime", &UAnimInstance::execGetRelevantAnimTime },
			{ "GetRelevantAnimTimeFraction", &UAnimInstance::execGetRelevantAnimTimeFraction },
			{ "GetRelevantAnimTimeRemaining", &UAnimInstance::execGetRelevantAnimTimeRemaining },
			{ "GetRelevantAnimTimeRemainingFraction", &UAnimInstance::execGetRelevantAnimTimeRemainingFraction },
			{ "GetSyncGroupPosition", &UAnimInstance::execGetSyncGroupPosition },
			{ "GetTimeToClosestMarker", &UAnimInstance::execGetTimeToClosestMarker },
			{ "HasMarkerBeenHitThisFrame", &UAnimInstance::execHasMarkerBeenHitThisFrame },
			{ "IsAnyMontagePlaying", &UAnimInstance::execIsAnyMontagePlaying },
			{ "IsPlayingSlotAnimation", &UAnimInstance::execIsPlayingSlotAnimation },
			{ "IsSyncGroupBetweenMarkers", &UAnimInstance::execIsSyncGroupBetweenMarkers },
			{ "LinkAnimClassLayers", &UAnimInstance::execLinkAnimClassLayers },
			{ "LinkAnimGraphByTag", &UAnimInstance::execLinkAnimGraphByTag },
			{ "LockAIResources", &UAnimInstance::execLockAIResources },
			{ "Montage_GetBlendTime", &UAnimInstance::execMontage_GetBlendTime },
			{ "Montage_GetCurrentSection", &UAnimInstance::execMontage_GetCurrentSection },
			{ "Montage_GetIsStopped", &UAnimInstance::execMontage_GetIsStopped },
			{ "Montage_GetPlayRate", &UAnimInstance::execMontage_GetPlayRate },
			{ "Montage_GetPosition", &UAnimInstance::execMontage_GetPosition },
			{ "Montage_IsActive", &UAnimInstance::execMontage_IsActive },
			{ "Montage_IsPlaying", &UAnimInstance::execMontage_IsPlaying },
			{ "Montage_JumpToSection", &UAnimInstance::execMontage_JumpToSection },
			{ "Montage_JumpToSectionsEnd", &UAnimInstance::execMontage_JumpToSectionsEnd },
			{ "Montage_Pause", &UAnimInstance::execMontage_Pause },
			{ "Montage_Play", &UAnimInstance::execMontage_Play },
			{ "Montage_Resume", &UAnimInstance::execMontage_Resume },
			{ "Montage_SetNextSection", &UAnimInstance::execMontage_SetNextSection },
			{ "Montage_SetPlayRate", &UAnimInstance::execMontage_SetPlayRate },
			{ "Montage_SetPosition", &UAnimInstance::execMontage_SetPosition },
			{ "Montage_Stop", &UAnimInstance::execMontage_Stop },
			{ "Montage_StopGroupByName", &UAnimInstance::execMontage_StopGroupByName },
			{ "PlaySlotAnimation", &UAnimInstance::execPlaySlotAnimation },
			{ "PlaySlotAnimationAsDynamicMontage", &UAnimInstance::execPlaySlotAnimationAsDynamicMontage },
			{ "ResetDynamics", &UAnimInstance::execResetDynamics },
			{ "SavePoseSnapshot", &UAnimInstance::execSavePoseSnapshot },
			{ "SetMorphTarget", &UAnimInstance::execSetMorphTarget },
			{ "SetPropagateNotifiesToLinkedInstances", &UAnimInstance::execSetPropagateNotifiesToLinkedInstances },
			{ "SetReceiveNotifiesFromLinkedInstances", &UAnimInstance::execSetReceiveNotifiesFromLinkedInstances },
			{ "SetRootMotionMode", &UAnimInstance::execSetRootMotionMode },
			{ "SnapshotPose", &UAnimInstance::execSnapshotPose },
			{ "StopSlotAnimation", &UAnimInstance::execStopSlotAnimation },
			{ "TryGetPawnOwner", &UAnimInstance::execTryGetPawnOwner },
			{ "UnlinkAnimClassLayers", &UAnimInstance::execUnlinkAnimClassLayers },
			{ "UnlockAIResources", &UAnimInstance::execUnlockAIResources },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimInstance_BlueprintBeginPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_BlueprintBeginPlay_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Executed when begin play is called on the owning component */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Executed when begin play is called on the owning component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_BlueprintBeginPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "BlueprintBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_BlueprintBeginPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_BlueprintBeginPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_BlueprintBeginPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_BlueprintBeginPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_BlueprintInitializeAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_BlueprintInitializeAnimation_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Executed when the Animation is initialized */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Executed when the Animation is initialized" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_BlueprintInitializeAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "BlueprintInitializeAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_BlueprintInitializeAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_BlueprintInitializeAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_BlueprintInitializeAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_BlueprintInitializeAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_BlueprintLinkedAnimationLayersInitialized_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_BlueprintLinkedAnimationLayersInitialized_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Executed when the all Linked Animation Layers are initialized */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Executed when the all Linked Animation Layers are initialized" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_BlueprintLinkedAnimationLayersInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "BlueprintLinkedAnimationLayersInitialized", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_BlueprintLinkedAnimationLayersInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_BlueprintLinkedAnimationLayersInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_BlueprintLinkedAnimationLayersInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_BlueprintLinkedAnimationLayersInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_BlueprintPostEvaluateAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_BlueprintPostEvaluateAnimation_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Executed after the Animation is evaluated */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Executed after the Animation is evaluated" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_BlueprintPostEvaluateAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "BlueprintPostEvaluateAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_BlueprintPostEvaluateAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_BlueprintPostEvaluateAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_BlueprintPostEvaluateAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_BlueprintPostEvaluateAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_BlueprintUpdateAnimation_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTimeX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_BlueprintUpdateAnimation_Statics::NewProp_DeltaTimeX = { "DeltaTimeX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventBlueprintUpdateAnimation_Parms, DeltaTimeX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_BlueprintUpdateAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_BlueprintUpdateAnimation_Statics::NewProp_DeltaTimeX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_BlueprintUpdateAnimation_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Executed when the Animation is updated */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Executed when the Animation is updated" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_BlueprintUpdateAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "BlueprintUpdateAnimation", nullptr, nullptr, sizeof(AnimInstance_eventBlueprintUpdateAnimation_Parms), Z_Construct_UFunction_UAnimInstance_BlueprintUpdateAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_BlueprintUpdateAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_BlueprintUpdateAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_BlueprintUpdateAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_BlueprintUpdateAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_BlueprintUpdateAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_CalculateDirection_Statics
	{
		struct AnimInstance_eventCalculateDirection_Parms
		{
			FVector Velocity;
			FRotator BaseRotation;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BaseRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Velocity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_CalculateDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventCalculateDirection_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_CalculateDirection_Statics::NewProp_BaseRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimInstance_CalculateDirection_Statics::NewProp_BaseRotation = { "BaseRotation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventCalculateDirection_Parms, BaseRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_CalculateDirection_Statics::NewProp_BaseRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_CalculateDirection_Statics::NewProp_BaseRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_CalculateDirection_Statics::NewProp_Velocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimInstance_CalculateDirection_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventCalculateDirection_Parms, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_CalculateDirection_Statics::NewProp_Velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_CalculateDirection_Statics::NewProp_Velocity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_CalculateDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_CalculateDirection_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_CalculateDirection_Statics::NewProp_BaseRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_CalculateDirection_Statics::NewProp_Velocity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_CalculateDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** \n\x09 * Returns degree of the angle betwee velocity and Rotation forward vector\n\x09 * The range of return will be from [-180, 180], and this can be used to feed blendspace directional value\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Returns degree of the angle betwee velocity and Rotation forward vector\nThe range of return will be from [-180, 180], and this can be used to feed blendspace directional value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_CalculateDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "CalculateDirection", nullptr, nullptr, sizeof(AnimInstance_eventCalculateDirection_Parms), Z_Construct_UFunction_UAnimInstance_CalculateDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_CalculateDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_CalculateDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_CalculateDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_CalculateDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_CalculateDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_ClearMorphTargets_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_ClearMorphTargets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Clears the current morph targets. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Clears the current morph targets." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_ClearMorphTargets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "ClearMorphTargets", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_ClearMorphTargets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_ClearMorphTargets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_ClearMorphTargets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_ClearMorphTargets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_GetActiveCurveNames_Statics
	{
		struct AnimInstance_eventGetActiveCurveNames_Parms
		{
			EAnimCurveType CurveType;
			TArray<FName> OutNames;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OutNames_Inner;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurveType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurveType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimInstance_GetActiveCurveNames_Statics::NewProp_OutNames = { "OutNames", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventGetActiveCurveNames_Parms, OutNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimInstance_GetActiveCurveNames_Statics::NewProp_OutNames_Inner = { "OutNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnimInstance_GetActiveCurveNames_Statics::NewProp_CurveType = { "CurveType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventGetActiveCurveNames_Parms, CurveType), Z_Construct_UEnum_Engine_EAnimCurveType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimInstance_GetActiveCurveNames_Statics::NewProp_CurveType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_GetActiveCurveNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetActiveCurveNames_Statics::NewProp_OutNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetActiveCurveNames_Statics::NewProp_OutNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetActiveCurveNames_Statics::NewProp_CurveType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetActiveCurveNames_Statics::NewProp_CurveType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_GetActiveCurveNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** This returns last up-to-date list of active curve names */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "This returns last up-to-date list of active curve names" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_GetActiveCurveNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "GetActiveCurveNames", nullptr, nullptr, sizeof(AnimInstance_eventGetActiveCurveNames_Parms), Z_Construct_UFunction_UAnimInstance_GetActiveCurveNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetActiveCurveNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_GetActiveCurveNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetActiveCurveNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_GetActiveCurveNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_GetActiveCurveNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_GetAllCurveNames_Statics
	{
		struct AnimInstance_eventGetAllCurveNames_Parms
		{
			TArray<FName> OutNames;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OutNames_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimInstance_GetAllCurveNames_Statics::NewProp_OutNames = { "OutNames", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventGetAllCurveNames_Parms, OutNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimInstance_GetAllCurveNames_Statics::NewProp_OutNames_Inner = { "OutNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_GetAllCurveNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetAllCurveNames_Statics::NewProp_OutNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetAllCurveNames_Statics::NewProp_OutNames_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_GetAllCurveNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/* This returns all curve names */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "This returns all curve names" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_GetAllCurveNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "GetAllCurveNames", nullptr, nullptr, sizeof(AnimInstance_eventGetAllCurveNames_Parms), Z_Construct_UFunction_UAnimInstance_GetAllCurveNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetAllCurveNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_GetAllCurveNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetAllCurveNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_GetAllCurveNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_GetAllCurveNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_GetCurrentActiveMontage_Statics
	{
		struct AnimInstance_eventGetCurrentActiveMontage_Parms
		{
			UAnimMontage* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstance_GetCurrentActiveMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventGetCurrentActiveMontage_Parms, ReturnValue), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_GetCurrentActiveMontage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetCurrentActiveMontage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_GetCurrentActiveMontage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Montage" },
		{ "Comment", "/** Get a current Active Montage in this AnimInstance. \n\x09\x09Note that there might be multiple Active at the same time. This will only return the first active one it finds. **/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "NotBlueprintThreadSafe", "" },
		{ "ToolTip", "Get a current Active Montage in this AnimInstance.\n              Note that there might be multiple Active at the same time. This will only return the first active one it finds. *" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_GetCurrentActiveMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "GetCurrentActiveMontage", nullptr, nullptr, sizeof(AnimInstance_eventGetCurrentActiveMontage_Parms), Z_Construct_UFunction_UAnimInstance_GetCurrentActiveMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetCurrentActiveMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_GetCurrentActiveMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetCurrentActiveMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_GetCurrentActiveMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_GetCurrentActiveMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_GetCurrentStateName_Statics
	{
		struct AnimInstance_eventGetCurrentStateName_Parms
		{
			int32 MachineIndex;
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MachineIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimInstance_GetCurrentStateName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventGetCurrentStateName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimInstance_GetCurrentStateName_Statics::NewProp_MachineIndex = { "MachineIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventGetCurrentStateName_Parms, MachineIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_GetCurrentStateName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetCurrentStateName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetCurrentStateName_Statics::NewProp_MachineIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_GetCurrentStateName_Statics::Function_MetaDataParams[] = {
		{ "AnimGetter", "true" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Animation" },
		{ "Comment", "/** Returns the name of a currently active state in a state machine. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Returns the name of a currently active state in a state machine." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_GetCurrentStateName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "GetCurrentStateName", nullptr, nullptr, sizeof(AnimInstance_eventGetCurrentStateName_Parms), Z_Construct_UFunction_UAnimInstance_GetCurrentStateName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetCurrentStateName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_GetCurrentStateName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetCurrentStateName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_GetCurrentStateName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_GetCurrentStateName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_GetCurveValue_Statics
	{
		struct AnimInstance_eventGetCurveValue_Parms
		{
			FName CurveName;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CurveName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_GetCurveValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventGetCurveValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimInstance_GetCurveValue_Statics::NewProp_CurveName = { "CurveName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventGetCurveValue_Parms, CurveName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_GetCurveValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetCurveValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetCurveValue_Statics::NewProp_CurveName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_GetCurveValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Returns the value of a named curve. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Returns the value of a named curve." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_GetCurveValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "GetCurveValue", nullptr, nullptr, sizeof(AnimInstance_eventGetCurveValue_Parms), Z_Construct_UFunction_UAnimInstance_GetCurveValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetCurveValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_GetCurveValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetCurveValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_GetCurveValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_GetCurveValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerLength_Statics
	{
		struct AnimInstance_eventGetInstanceAssetPlayerLength_Parms
		{
			int32 AssetPlayerIndex;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AssetPlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventGetInstanceAssetPlayerLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerLength_Statics::NewProp_AssetPlayerIndex = { "AssetPlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventGetInstanceAssetPlayerLength_Parms, AssetPlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerLength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerLength_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerLength_Statics::NewProp_AssetPlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerLength_Statics::Function_MetaDataParams[] = {
		{ "AnimGetter", "true" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Asset Player" },
		{ "Comment", "/** Gets the length in seconds of the asset referenced in an asset player node */" },
		{ "DisplayName", "Length" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Gets the length in seconds of the asset referenced in an asset player node" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "GetInstanceAssetPlayerLength", nullptr, nullptr, sizeof(AnimInstance_eventGetInstanceAssetPlayerLength_Parms), Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTime_Statics
	{
		struct AnimInstance_eventGetInstanceAssetPlayerTime_Parms
		{
			int32 AssetPlayerIndex;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AssetPlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventGetInstanceAssetPlayerTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTime_Statics::NewProp_AssetPlayerIndex = { "AssetPlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventGetInstanceAssetPlayerTime_Parms, AssetPlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTime_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTime_Statics::NewProp_AssetPlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTime_Statics::Function_MetaDataParams[] = {
		{ "AnimGetter", "true" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Asset Player" },
		{ "Comment", "/** Get the current accumulated time in seconds for an asset player node */" },
		{ "DisplayName", "Current Time" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Get the current accumulated time in seconds for an asset player node" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "GetInstanceAssetPlayerTime", nullptr, nullptr, sizeof(AnimInstance_eventGetInstanceAssetPlayerTime_Parms), Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFraction_Statics
	{
		struct AnimInstance_eventGetInstanceAssetPlayerTimeFraction_Parms
		{
			int32 AssetPlayerIndex;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AssetPlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFraction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventGetInstanceAssetPlayerTimeFraction_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFraction_Statics::NewProp_AssetPlayerIndex = { "AssetPlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventGetInstanceAssetPlayerTimeFraction_Parms, AssetPlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFraction_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFraction_Statics::NewProp_AssetPlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFraction_Statics::Function_MetaDataParams[] = {
		{ "AnimGetter", "true" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Asset Player" },
		{ "Comment", "/** Get the current accumulated time as a fraction for an asset player node */" },
		{ "DisplayName", "Current Time (ratio)" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Get the current accumulated time as a fraction for an asset player node" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "GetInstanceAssetPlayerTimeFraction", nullptr, nullptr, sizeof(AnimInstance_eventGetInstanceAssetPlayerTimeFraction_Parms), Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFromEnd_Statics
	{
		struct AnimInstance_eventGetInstanceAssetPlayerTimeFromEnd_Parms
		{
			int32 AssetPlayerIndex;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AssetPlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFromEnd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventGetInstanceAssetPlayerTimeFromEnd_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFromEnd_Statics::NewProp_AssetPlayerIndex = { "AssetPlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventGetInstanceAssetPlayerTimeFromEnd_Parms, AssetPlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFromEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFromEnd_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFromEnd_Statics::NewProp_AssetPlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFromEnd_Statics::Function_MetaDataParams[] = {
		{ "AnimGetter", "true" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Asset Player" },
		{ "Comment", "/** Get the time in seconds from the end of an animation in an asset player node */" },
		{ "DisplayName", "Time Remaining" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Get the time in seconds from the end of an animation in an asset player node" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFromEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "GetInstanceAssetPlayerTimeFromEnd", nullptr, nullptr, sizeof(AnimInstance_eventGetInstanceAssetPlayerTimeFromEnd_Parms), Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFromEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFromEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFromEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFromEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFromEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFromEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFromEndFraction_Statics
	{
		struct AnimInstance_eventGetInstanceAssetPlayerTimeFromEndFraction_Parms
		{
			int32 AssetPlayerIndex;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AssetPlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFromEndFraction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventGetInstanceAssetPlayerTimeFromEndFraction_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFromEndFraction_Statics::NewProp_AssetPlayerIndex = { "AssetPlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventGetInstanceAssetPlayerTimeFromEndFraction_Parms, AssetPlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFromEndFraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFromEndFraction_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFromEndFraction_Statics::NewProp_AssetPlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFromEndFraction_Statics::Function_MetaDataParams[] = {
		{ "AnimGetter", "true" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Asset Player" },
		{ "Comment", "/** Get the time as a fraction of the asset length of an animation in an asset player node */" },
		{ "DisplayName", "Time Remaining (ratio)" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Get the time as a fraction of the asset length of an animation in an asset player node" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFromEndFraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "GetInstanceAssetPlayerTimeFromEndFraction", nullptr, nullptr, sizeof(AnimInstance_eventGetInstanceAssetPlayerTimeFromEndFraction_Parms), Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFromEndFraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFromEndFraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFromEndFraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFromEndFraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFromEndFraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFromEndFraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_GetInstanceCurrentStateElapsedTime_Statics
	{
		struct AnimInstance_eventGetInstanceCurrentStateElapsedTime_Parms
		{
			int32 MachineIndex;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MachineIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_GetInstanceCurrentStateElapsedTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventGetInstanceCurrentStateElapsedTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimInstance_GetInstanceCurrentStateElapsedTime_Statics::NewProp_MachineIndex = { "MachineIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventGetInstanceCurrentStateElapsedTime_Parms, MachineIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_GetInstanceCurrentStateElapsedTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetInstanceCurrentStateElapsedTime_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetInstanceCurrentStateElapsedTime_Statics::NewProp_MachineIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_GetInstanceCurrentStateElapsedTime_Statics::Function_MetaDataParams[] = {
		{ "AnimGetter", "true" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "States" },
		{ "Comment", "/** Get the current elapsed time of a state within the specified state machine */" },
		{ "DisplayName", "Current State Time" },
		{ "GetterContext", "Transition" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Get the current elapsed time of a state within the specified state machine" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_GetInstanceCurrentStateElapsedTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "GetInstanceCurrentStateElapsedTime", nullptr, nullptr, sizeof(AnimInstance_eventGetInstanceCurrentStateElapsedTime_Parms), Z_Construct_UFunction_UAnimInstance_GetInstanceCurrentStateElapsedTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetInstanceCurrentStateElapsedTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_GetInstanceCurrentStateElapsedTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetInstanceCurrentStateElapsedTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_GetInstanceCurrentStateElapsedTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_GetInstanceCurrentStateElapsedTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_GetInstanceMachineWeight_Statics
	{
		struct AnimInstance_eventGetInstanceMachineWeight_Parms
		{
			int32 MachineIndex;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MachineIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_GetInstanceMachineWeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventGetInstanceMachineWeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimInstance_GetInstanceMachineWeight_Statics::NewProp_MachineIndex = { "MachineIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventGetInstanceMachineWeight_Parms, MachineIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_GetInstanceMachineWeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetInstanceMachineWeight_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetInstanceMachineWeight_Statics::NewProp_MachineIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_GetInstanceMachineWeight_Statics::Function_MetaDataParams[] = {
		{ "AnimGetter", "true" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "States" },
		{ "Comment", "/** Get the blend weight of a specified state machine */" },
		{ "DisplayName", "Machine Weight" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Get the blend weight of a specified state machine" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_GetInstanceMachineWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "GetInstanceMachineWeight", nullptr, nullptr, sizeof(AnimInstance_eventGetInstanceMachineWeight_Parms), Z_Construct_UFunction_UAnimInstance_GetInstanceMachineWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetInstanceMachineWeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_GetInstanceMachineWeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetInstanceMachineWeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_GetInstanceMachineWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_GetInstanceMachineWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_GetInstanceStateWeight_Statics
	{
		struct AnimInstance_eventGetInstanceStateWeight_Parms
		{
			int32 MachineIndex;
			int32 StateIndex;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StateIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MachineIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_GetInstanceStateWeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventGetInstanceStateWeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimInstance_GetInstanceStateWeight_Statics::NewProp_StateIndex = { "StateIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventGetInstanceStateWeight_Parms, StateIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimInstance_GetInstanceStateWeight_Statics::NewProp_MachineIndex = { "MachineIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventGetInstanceStateWeight_Parms, MachineIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_GetInstanceStateWeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetInstanceStateWeight_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetInstanceStateWeight_Statics::NewProp_StateIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetInstanceStateWeight_Statics::NewProp_MachineIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_GetInstanceStateWeight_Statics::Function_MetaDataParams[] = {
		{ "AnimGetter", "true" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "States" },
		{ "Comment", "/** Get the blend weight of a specified state */" },
		{ "DisplayName", "State Weight" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Get the blend weight of a specified state" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_GetInstanceStateWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "GetInstanceStateWeight", nullptr, nullptr, sizeof(AnimInstance_eventGetInstanceStateWeight_Parms), Z_Construct_UFunction_UAnimInstance_GetInstanceStateWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetInstanceStateWeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_GetInstanceStateWeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetInstanceStateWeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_GetInstanceStateWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_GetInstanceStateWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionCrossfadeDuration_Statics
	{
		struct AnimInstance_eventGetInstanceTransitionCrossfadeDuration_Parms
		{
			int32 MachineIndex;
			int32 TransitionIndex;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TransitionIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MachineIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionCrossfadeDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventGetInstanceTransitionCrossfadeDuration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionCrossfadeDuration_Statics::NewProp_TransitionIndex = { "TransitionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventGetInstanceTransitionCrossfadeDuration_Parms, TransitionIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionCrossfadeDuration_Statics::NewProp_MachineIndex = { "MachineIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventGetInstanceTransitionCrossfadeDuration_Parms, MachineIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionCrossfadeDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionCrossfadeDuration_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionCrossfadeDuration_Statics::NewProp_TransitionIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionCrossfadeDuration_Statics::NewProp_MachineIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionCrossfadeDuration_Statics::Function_MetaDataParams[] = {
		{ "AnimGetter", "true" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Transitions" },
		{ "Comment", "/** Get the crossfade duration of a specified transition */" },
		{ "DisplayName", "Get Transition Crossfade Duration" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Get the crossfade duration of a specified transition" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionCrossfadeDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "GetInstanceTransitionCrossfadeDuration", nullptr, nullptr, sizeof(AnimInstance_eventGetInstanceTransitionCrossfadeDuration_Parms), Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionCrossfadeDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionCrossfadeDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionCrossfadeDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionCrossfadeDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionCrossfadeDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionCrossfadeDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsed_Statics
	{
		struct AnimInstance_eventGetInstanceTransitionTimeElapsed_Parms
		{
			int32 MachineIndex;
			int32 TransitionIndex;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TransitionIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MachineIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventGetInstanceTransitionTimeElapsed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsed_Statics::NewProp_TransitionIndex = { "TransitionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventGetInstanceTransitionTimeElapsed_Parms, TransitionIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsed_Statics::NewProp_MachineIndex = { "MachineIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventGetInstanceTransitionTimeElapsed_Parms, MachineIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsed_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsed_Statics::NewProp_TransitionIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsed_Statics::NewProp_MachineIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsed_Statics::Function_MetaDataParams[] = {
		{ "AnimGetter", "true" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Transitions" },
		{ "Comment", "/** Get the elapsed time in seconds of a specified transition */" },
		{ "DisplayName", "Get Transition Time Elapsed" },
		{ "GetterContext", "CustomBlend" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Get the elapsed time in seconds of a specified transition" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "GetInstanceTransitionTimeElapsed", nullptr, nullptr, sizeof(AnimInstance_eventGetInstanceTransitionTimeElapsed_Parms), Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsedFraction_Statics
	{
		struct AnimInstance_eventGetInstanceTransitionTimeElapsedFraction_Parms
		{
			int32 MachineIndex;
			int32 TransitionIndex;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TransitionIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MachineIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsedFraction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventGetInstanceTransitionTimeElapsedFraction_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsedFraction_Statics::NewProp_TransitionIndex = { "TransitionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventGetInstanceTransitionTimeElapsedFraction_Parms, TransitionIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsedFraction_Statics::NewProp_MachineIndex = { "MachineIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventGetInstanceTransitionTimeElapsedFraction_Parms, MachineIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsedFraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsedFraction_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsedFraction_Statics::NewProp_TransitionIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsedFraction_Statics::NewProp_MachineIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsedFraction_Statics::Function_MetaDataParams[] = {
		{ "AnimGetter", "true" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Transitions" },
		{ "Comment", "/** Get the elapsed time as a fraction of the crossfade duration of a specified transition */" },
		{ "DisplayName", "Get Transition Time Elapsed (ratio)" },
		{ "GetterContext", "CustomBlend" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Get the elapsed time as a fraction of the crossfade duration of a specified transition" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsedFraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "GetInstanceTransitionTimeElapsedFraction", nullptr, nullptr, sizeof(AnimInstance_eventGetInstanceTransitionTimeElapsedFraction_Parms), Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsedFraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsedFraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsedFraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsedFraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsedFraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsedFraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstanceByTag_Statics
	{
		struct AnimInstance_eventGetLinkedAnimGraphInstanceByTag_Parms
		{
			FName InTag;
			UAnimInstance* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstanceByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventGetLinkedAnimGraphInstanceByTag_Parms, ReturnValue), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstanceByTag_Statics::NewProp_InTag = { "InTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventGetLinkedAnimGraphInstanceByTag_Parms, InTag), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstanceByTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstanceByTag_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstanceByTag_Statics::NewProp_InTag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstanceByTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation Blueprint Linking" },
		{ "Comment", "/** Runs through all nodes, attempting to find the first linked instance by name/tag */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Runs through all nodes, attempting to find the first linked instance by name/tag" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstanceByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "GetLinkedAnimGraphInstanceByTag", nullptr, nullptr, sizeof(AnimInstance_eventGetLinkedAnimGraphInstanceByTag_Parms), Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstanceByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstanceByTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstanceByTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstanceByTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstanceByTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstanceByTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstancesByTag_Statics
	{
		struct AnimInstance_eventGetLinkedAnimGraphInstancesByTag_Parms
		{
			FName InTag;
			TArray<UAnimInstance*> OutLinkedInstances;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutLinkedInstances;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutLinkedInstances_Inner;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstancesByTag_Statics::NewProp_OutLinkedInstances = { "OutLinkedInstances", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventGetLinkedAnimGraphInstancesByTag_Parms, OutLinkedInstances), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstancesByTag_Statics::NewProp_OutLinkedInstances_Inner = { "OutLinkedInstances", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstancesByTag_Statics::NewProp_InTag = { "InTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventGetLinkedAnimGraphInstancesByTag_Parms, InTag), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstancesByTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstancesByTag_Statics::NewProp_OutLinkedInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstancesByTag_Statics::NewProp_OutLinkedInstances_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstancesByTag_Statics::NewProp_InTag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstancesByTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation Blueprint Linking" },
		{ "Comment", "/** Runs through all nodes, attempting to find all linked instances that match the name/tag */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Runs through all nodes, attempting to find all linked instances that match the name/tag" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstancesByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "GetLinkedAnimGraphInstancesByTag", nullptr, nullptr, sizeof(AnimInstance_eventGetLinkedAnimGraphInstancesByTag_Parms), Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstancesByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstancesByTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstancesByTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstancesByTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstancesByTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstancesByTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByClass_Statics
	{
		struct AnimInstance_eventGetLinkedAnimLayerInstanceByClass_Parms
		{
			TSubclassOf<UAnimInstance>  InClass;
			UAnimInstance* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventGetLinkedAnimLayerInstanceByClass_Parms, ReturnValue), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByClass_Statics::NewProp_InClass = { "InClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventGetLinkedAnimLayerInstanceByClass_Parms, InClass), Z_Construct_UClass_UAnimInstance_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByClass_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByClass_Statics::NewProp_InClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation Blueprint Linking" },
		{ "Comment", "/** Gets the first layer linked instance corresponding to the specified class */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Gets the first layer linked instance corresponding to the specified class" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "GetLinkedAnimLayerInstanceByClass", nullptr, nullptr, sizeof(AnimInstance_eventGetLinkedAnimLayerInstanceByClass_Parms), Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByGroup_Statics
	{
		struct AnimInstance_eventGetLinkedAnimLayerInstanceByGroup_Parms
		{
			FName InGroup;
			UAnimInstance* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InGroup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventGetLinkedAnimLayerInstanceByGroup_Parms, ReturnValue), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByGroup_Statics::NewProp_InGroup = { "InGroup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventGetLinkedAnimLayerInstanceByGroup_Parms, InGroup), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByGroup_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByGroup_Statics::NewProp_InGroup,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation Blueprint Linking" },
		{ "Comment", "/** Gets the layer linked instance corresponding to the specified group */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Gets the layer linked instance corresponding to the specified group" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "GetLinkedAnimLayerInstanceByGroup", nullptr, nullptr, sizeof(AnimInstance_eventGetLinkedAnimLayerInstanceByGroup_Parms), Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_GetOwningActor_Statics
	{
		struct AnimInstance_eventGetOwningActor_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstance_GetOwningActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventGetOwningActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_GetOwningActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetOwningActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_GetOwningActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Returns the owning actor of this AnimInstance */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "NotBlueprintThreadSafe", "" },
		{ "ToolTip", "Returns the owning actor of this AnimInstance" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_GetOwningActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "GetOwningActor", nullptr, nullptr, sizeof(AnimInstance_eventGetOwningActor_Parms), Z_Construct_UFunction_UAnimInstance_GetOwningActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetOwningActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_GetOwningActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetOwningActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_GetOwningActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_GetOwningActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_GetOwningComponent_Statics
	{
		struct AnimInstance_eventGetOwningComponent_Parms
		{
			USkeletalMeshComponent* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_GetOwningComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstance_GetOwningComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventGetOwningComponent_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_GetOwningComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetOwningComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_GetOwningComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetOwningComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_GetOwningComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "// Returns the skeletal mesh component that has created this AnimInstance\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "NotBlueprintThreadSafe", "" },
		{ "ToolTip", "Returns the skeletal mesh component that has created this AnimInstance" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_GetOwningComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "GetOwningComponent", nullptr, nullptr, sizeof(AnimInstance_eventGetOwningComponent_Parms), Z_Construct_UFunction_UAnimInstance_GetOwningComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetOwningComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_GetOwningComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetOwningComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_GetOwningComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_GetOwningComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_GetPropagateNotifiesToLinkedInstances_Statics
	{
		struct AnimInstance_eventGetPropagateNotifiesToLinkedInstances_Parms
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
	void Z_Construct_UFunction_UAnimInstance_GetPropagateNotifiesToLinkedInstances_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimInstance_eventGetPropagateNotifiesToLinkedInstances_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimInstance_GetPropagateNotifiesToLinkedInstances_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AnimInstance_eventGetPropagateNotifiesToLinkedInstances_Parms), &Z_Construct_UFunction_UAnimInstance_GetPropagateNotifiesToLinkedInstances_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_GetPropagateNotifiesToLinkedInstances_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetPropagateNotifiesToLinkedInstances_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_GetPropagateNotifiesToLinkedInstances_Statics::Function_MetaDataParams[] = {
		{ "Category", "Notifies" },
		{ "Comment", "/** Get whether to propagate notifies to any linked anim instances */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Get whether to propagate notifies to any linked anim instances" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_GetPropagateNotifiesToLinkedInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "GetPropagateNotifiesToLinkedInstances", nullptr, nullptr, sizeof(AnimInstance_eventGetPropagateNotifiesToLinkedInstances_Parms), Z_Construct_UFunction_UAnimInstance_GetPropagateNotifiesToLinkedInstances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetPropagateNotifiesToLinkedInstances_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_GetPropagateNotifiesToLinkedInstances_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetPropagateNotifiesToLinkedInstances_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_GetPropagateNotifiesToLinkedInstances()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_GetPropagateNotifiesToLinkedInstances_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_GetReceiveNotifiesFromLinkedInstances_Statics
	{
		struct AnimInstance_eventGetReceiveNotifiesFromLinkedInstances_Parms
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
	void Z_Construct_UFunction_UAnimInstance_GetReceiveNotifiesFromLinkedInstances_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimInstance_eventGetReceiveNotifiesFromLinkedInstances_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimInstance_GetReceiveNotifiesFromLinkedInstances_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AnimInstance_eventGetReceiveNotifiesFromLinkedInstances_Parms), &Z_Construct_UFunction_UAnimInstance_GetReceiveNotifiesFromLinkedInstances_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_GetReceiveNotifiesFromLinkedInstances_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetReceiveNotifiesFromLinkedInstances_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_GetReceiveNotifiesFromLinkedInstances_Statics::Function_MetaDataParams[] = {
		{ "Category", "Notifies" },
		{ "Comment", "/** Get whether to process notifies from any linked anim instances */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Get whether to process notifies from any linked anim instances" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_GetReceiveNotifiesFromLinkedInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "GetReceiveNotifiesFromLinkedInstances", nullptr, nullptr, sizeof(AnimInstance_eventGetReceiveNotifiesFromLinkedInstances_Parms), Z_Construct_UFunction_UAnimInstance_GetReceiveNotifiesFromLinkedInstances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetReceiveNotifiesFromLinkedInstances_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_GetReceiveNotifiesFromLinkedInstances_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetReceiveNotifiesFromLinkedInstances_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_GetReceiveNotifiesFromLinkedInstances()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_GetReceiveNotifiesFromLinkedInstances_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_GetRelevantAnimLength_Statics
	{
		struct AnimInstance_eventGetRelevantAnimLength_Parms
		{
			int32 MachineIndex;
			int32 StateIndex;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StateIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MachineIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_GetRelevantAnimLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventGetRelevantAnimLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimInstance_GetRelevantAnimLength_Statics::NewProp_StateIndex = { "StateIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventGetRelevantAnimLength_Parms, StateIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimInstance_GetRelevantAnimLength_Statics::NewProp_MachineIndex = { "MachineIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventGetRelevantAnimLength_Parms, MachineIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_GetRelevantAnimLength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetRelevantAnimLength_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetRelevantAnimLength_Statics::NewProp_StateIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetRelevantAnimLength_Statics::NewProp_MachineIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_GetRelevantAnimLength_Statics::Function_MetaDataParams[] = {
		{ "AnimGetter", "true" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Asset Player" },
		{ "Comment", "/** Get the length in seconds of the most relevant animation in the source state */" },
		{ "GetterContext", "Transition" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Get the length in seconds of the most relevant animation in the source state" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_GetRelevantAnimLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "GetRelevantAnimLength", nullptr, nullptr, sizeof(AnimInstance_eventGetRelevantAnimLength_Parms), Z_Construct_UFunction_UAnimInstance_GetRelevantAnimLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetRelevantAnimLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_GetRelevantAnimLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetRelevantAnimLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_GetRelevantAnimLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_GetRelevantAnimLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTime_Statics
	{
		struct AnimInstance_eventGetRelevantAnimTime_Parms
		{
			int32 MachineIndex;
			int32 StateIndex;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StateIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MachineIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventGetRelevantAnimTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTime_Statics::NewProp_StateIndex = { "StateIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventGetRelevantAnimTime_Parms, StateIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTime_Statics::NewProp_MachineIndex = { "MachineIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventGetRelevantAnimTime_Parms, MachineIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTime_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTime_Statics::NewProp_StateIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTime_Statics::NewProp_MachineIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTime_Statics::Function_MetaDataParams[] = {
		{ "AnimGetter", "true" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Asset Player" },
		{ "Comment", "/** Get the current accumulated time in seconds for the most relevant animation in the source state */" },
		{ "GetterContext", "Transition" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Get the current accumulated time in seconds for the most relevant animation in the source state" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "GetRelevantAnimTime", nullptr, nullptr, sizeof(AnimInstance_eventGetRelevantAnimTime_Parms), Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeFraction_Statics
	{
		struct AnimInstance_eventGetRelevantAnimTimeFraction_Parms
		{
			int32 MachineIndex;
			int32 StateIndex;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StateIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MachineIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeFraction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventGetRelevantAnimTimeFraction_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeFraction_Statics::NewProp_StateIndex = { "StateIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventGetRelevantAnimTimeFraction_Parms, StateIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeFraction_Statics::NewProp_MachineIndex = { "MachineIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventGetRelevantAnimTimeFraction_Parms, MachineIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeFraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeFraction_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeFraction_Statics::NewProp_StateIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeFraction_Statics::NewProp_MachineIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeFraction_Statics::Function_MetaDataParams[] = {
		{ "AnimGetter", "true" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Asset Player" },
		{ "Comment", "/** Get the current accumulated time as a fraction of the length of the most relevant animation in the source state */" },
		{ "GetterContext", "Transition" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Get the current accumulated time as a fraction of the length of the most relevant animation in the source state" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeFraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "GetRelevantAnimTimeFraction", nullptr, nullptr, sizeof(AnimInstance_eventGetRelevantAnimTimeFraction_Parms), Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeFraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeFraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeFraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeFraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeFraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeFraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemaining_Statics
	{
		struct AnimInstance_eventGetRelevantAnimTimeRemaining_Parms
		{
			int32 MachineIndex;
			int32 StateIndex;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StateIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MachineIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemaining_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventGetRelevantAnimTimeRemaining_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemaining_Statics::NewProp_StateIndex = { "StateIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventGetRelevantAnimTimeRemaining_Parms, StateIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemaining_Statics::NewProp_MachineIndex = { "MachineIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventGetRelevantAnimTimeRemaining_Parms, MachineIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemaining_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemaining_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemaining_Statics::NewProp_StateIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemaining_Statics::NewProp_MachineIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemaining_Statics::Function_MetaDataParams[] = {
		{ "AnimGetter", "true" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Asset Player" },
		{ "Comment", "/** Get the time remaining in seconds for the most relevant animation in the source state */" },
		{ "GetterContext", "Transition" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Get the time remaining in seconds for the most relevant animation in the source state" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemaining_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "GetRelevantAnimTimeRemaining", nullptr, nullptr, sizeof(AnimInstance_eventGetRelevantAnimTimeRemaining_Parms), Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemaining_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemaining_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemaining_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemaining_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemaining()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemaining_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemainingFraction_Statics
	{
		struct AnimInstance_eventGetRelevantAnimTimeRemainingFraction_Parms
		{
			int32 MachineIndex;
			int32 StateIndex;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StateIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MachineIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemainingFraction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventGetRelevantAnimTimeRemainingFraction_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemainingFraction_Statics::NewProp_StateIndex = { "StateIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventGetRelevantAnimTimeRemainingFraction_Parms, StateIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemainingFraction_Statics::NewProp_MachineIndex = { "MachineIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventGetRelevantAnimTimeRemainingFraction_Parms, MachineIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemainingFraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemainingFraction_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemainingFraction_Statics::NewProp_StateIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemainingFraction_Statics::NewProp_MachineIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemainingFraction_Statics::Function_MetaDataParams[] = {
		{ "AnimGetter", "true" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Asset Player" },
		{ "Comment", "/** Get the time remaining as a fraction of the duration for the most relevant animation in the source state */" },
		{ "GetterContext", "Transition" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Get the time remaining as a fraction of the duration for the most relevant animation in the source state" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemainingFraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "GetRelevantAnimTimeRemainingFraction", nullptr, nullptr, sizeof(AnimInstance_eventGetRelevantAnimTimeRemainingFraction_Parms), Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemainingFraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemainingFraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemainingFraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemainingFraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemainingFraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemainingFraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_GetSyncGroupPosition_Statics
	{
		struct AnimInstance_eventGetSyncGroupPosition_Parms
		{
			FName InSyncGroupName;
			FMarkerSyncAnimPosition ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InSyncGroupName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimInstance_GetSyncGroupPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventGetSyncGroupPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FMarkerSyncAnimPosition, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimInstance_GetSyncGroupPosition_Statics::NewProp_InSyncGroupName = { "InSyncGroupName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventGetSyncGroupPosition_Parms, InSyncGroupName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_GetSyncGroupPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetSyncGroupPosition_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetSyncGroupPosition_Statics::NewProp_InSyncGroupName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_GetSyncGroupPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "SyncGroup" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_GetSyncGroupPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "GetSyncGroupPosition", nullptr, nullptr, sizeof(AnimInstance_eventGetSyncGroupPosition_Parms), Z_Construct_UFunction_UAnimInstance_GetSyncGroupPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetSyncGroupPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_GetSyncGroupPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetSyncGroupPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_GetSyncGroupPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_GetSyncGroupPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_GetTimeToClosestMarker_Statics
	{
		struct AnimInstance_eventGetTimeToClosestMarker_Parms
		{
			FName SyncGroup;
			FName MarkerName;
			float OutMarkerTime;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutMarkerTime;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MarkerName;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SyncGroup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAnimInstance_GetTimeToClosestMarker_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimInstance_eventGetTimeToClosestMarker_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimInstance_GetTimeToClosestMarker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AnimInstance_eventGetTimeToClosestMarker_Parms), &Z_Construct_UFunction_UAnimInstance_GetTimeToClosestMarker_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_GetTimeToClosestMarker_Statics::NewProp_OutMarkerTime = { "OutMarkerTime", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventGetTimeToClosestMarker_Parms, OutMarkerTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimInstance_GetTimeToClosestMarker_Statics::NewProp_MarkerName = { "MarkerName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventGetTimeToClosestMarker_Parms, MarkerName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimInstance_GetTimeToClosestMarker_Statics::NewProp_SyncGroup = { "SyncGroup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventGetTimeToClosestMarker_Parms, SyncGroup), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_GetTimeToClosestMarker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetTimeToClosestMarker_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetTimeToClosestMarker_Statics::NewProp_OutMarkerTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetTimeToClosestMarker_Statics::NewProp_MarkerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetTimeToClosestMarker_Statics::NewProp_SyncGroup,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_GetTimeToClosestMarker_Statics::Function_MetaDataParams[] = {
		{ "Category", "SyncGroup" },
		{ "Comment", "//--- AI communication end ---//\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "--- AI communication end ---" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_GetTimeToClosestMarker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "GetTimeToClosestMarker", nullptr, nullptr, sizeof(AnimInstance_eventGetTimeToClosestMarker_Parms), Z_Construct_UFunction_UAnimInstance_GetTimeToClosestMarker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetTimeToClosestMarker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_GetTimeToClosestMarker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetTimeToClosestMarker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_GetTimeToClosestMarker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_GetTimeToClosestMarker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_HasMarkerBeenHitThisFrame_Statics
	{
		struct AnimInstance_eventHasMarkerBeenHitThisFrame_Parms
		{
			FName SyncGroup;
			FName MarkerName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MarkerName;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SyncGroup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAnimInstance_HasMarkerBeenHitThisFrame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimInstance_eventHasMarkerBeenHitThisFrame_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimInstance_HasMarkerBeenHitThisFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AnimInstance_eventHasMarkerBeenHitThisFrame_Parms), &Z_Construct_UFunction_UAnimInstance_HasMarkerBeenHitThisFrame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimInstance_HasMarkerBeenHitThisFrame_Statics::NewProp_MarkerName = { "MarkerName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventHasMarkerBeenHitThisFrame_Parms, MarkerName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimInstance_HasMarkerBeenHitThisFrame_Statics::NewProp_SyncGroup = { "SyncGroup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventHasMarkerBeenHitThisFrame_Parms, SyncGroup), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_HasMarkerBeenHitThisFrame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_HasMarkerBeenHitThisFrame_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_HasMarkerBeenHitThisFrame_Statics::NewProp_MarkerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_HasMarkerBeenHitThisFrame_Statics::NewProp_SyncGroup,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_HasMarkerBeenHitThisFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "SyncGroup" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_HasMarkerBeenHitThisFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "HasMarkerBeenHitThisFrame", nullptr, nullptr, sizeof(AnimInstance_eventHasMarkerBeenHitThisFrame_Parms), Z_Construct_UFunction_UAnimInstance_HasMarkerBeenHitThisFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_HasMarkerBeenHitThisFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_HasMarkerBeenHitThisFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_HasMarkerBeenHitThisFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_HasMarkerBeenHitThisFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_HasMarkerBeenHitThisFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_IsAnyMontagePlaying_Statics
	{
		struct AnimInstance_eventIsAnyMontagePlaying_Parms
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
	void Z_Construct_UFunction_UAnimInstance_IsAnyMontagePlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimInstance_eventIsAnyMontagePlaying_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimInstance_IsAnyMontagePlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AnimInstance_eventIsAnyMontagePlaying_Parms), &Z_Construct_UFunction_UAnimInstance_IsAnyMontagePlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_IsAnyMontagePlaying_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_IsAnyMontagePlaying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_IsAnyMontagePlaying_Statics::Function_MetaDataParams[] = {
		{ "Category", "Montage" },
		{ "Comment", "/** Returns true if any montage is playing currently. Doesn't mean it's active though, it could be blending out. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "NotBlueprintThreadSafe", "" },
		{ "ToolTip", "Returns true if any montage is playing currently. Doesn't mean it's active though, it could be blending out." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_IsAnyMontagePlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "IsAnyMontagePlaying", nullptr, nullptr, sizeof(AnimInstance_eventIsAnyMontagePlaying_Parms), Z_Construct_UFunction_UAnimInstance_IsAnyMontagePlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_IsAnyMontagePlaying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_IsAnyMontagePlaying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_IsAnyMontagePlaying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_IsAnyMontagePlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_IsAnyMontagePlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_IsPlayingSlotAnimation_Statics
	{
		struct AnimInstance_eventIsPlayingSlotAnimation_Parms
		{
			const UAnimSequenceBase* Asset;
			FName SlotNodeName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SlotNodeName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Asset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAnimInstance_IsPlayingSlotAnimation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimInstance_eventIsPlayingSlotAnimation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimInstance_IsPlayingSlotAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AnimInstance_eventIsPlayingSlotAnimation_Parms), &Z_Construct_UFunction_UAnimInstance_IsPlayingSlotAnimation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimInstance_IsPlayingSlotAnimation_Statics::NewProp_SlotNodeName = { "SlotNodeName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventIsPlayingSlotAnimation_Parms, SlotNodeName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_IsPlayingSlotAnimation_Statics::NewProp_Asset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstance_IsPlayingSlotAnimation_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventIsPlayingSlotAnimation_Parms, Asset), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_IsPlayingSlotAnimation_Statics::NewProp_Asset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_IsPlayingSlotAnimation_Statics::NewProp_Asset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_IsPlayingSlotAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_IsPlayingSlotAnimation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_IsPlayingSlotAnimation_Statics::NewProp_SlotNodeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_IsPlayingSlotAnimation_Statics::NewProp_Asset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_IsPlayingSlotAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Return true if it's playing the slot animation */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Return true if it's playing the slot animation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_IsPlayingSlotAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "IsPlayingSlotAnimation", nullptr, nullptr, sizeof(AnimInstance_eventIsPlayingSlotAnimation_Parms), Z_Construct_UFunction_UAnimInstance_IsPlayingSlotAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_IsPlayingSlotAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_IsPlayingSlotAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_IsPlayingSlotAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_IsPlayingSlotAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_IsPlayingSlotAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_IsSyncGroupBetweenMarkers_Statics
	{
		struct AnimInstance_eventIsSyncGroupBetweenMarkers_Parms
		{
			FName InSyncGroupName;
			FName PreviousMarker;
			FName NextMarker;
			bool bRespectMarkerOrder;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bRespectMarkerOrder_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRespectMarkerOrder;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NextMarker;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PreviousMarker;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InSyncGroupName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAnimInstance_IsSyncGroupBetweenMarkers_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimInstance_eventIsSyncGroupBetweenMarkers_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimInstance_IsSyncGroupBetweenMarkers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AnimInstance_eventIsSyncGroupBetweenMarkers_Parms), &Z_Construct_UFunction_UAnimInstance_IsSyncGroupBetweenMarkers_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAnimInstance_IsSyncGroupBetweenMarkers_Statics::NewProp_bRespectMarkerOrder_SetBit(void* Obj)
	{
		((AnimInstance_eventIsSyncGroupBetweenMarkers_Parms*)Obj)->bRespectMarkerOrder = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimInstance_IsSyncGroupBetweenMarkers_Statics::NewProp_bRespectMarkerOrder = { "bRespectMarkerOrder", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AnimInstance_eventIsSyncGroupBetweenMarkers_Parms), &Z_Construct_UFunction_UAnimInstance_IsSyncGroupBetweenMarkers_Statics::NewProp_bRespectMarkerOrder_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimInstance_IsSyncGroupBetweenMarkers_Statics::NewProp_NextMarker = { "NextMarker", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventIsSyncGroupBetweenMarkers_Parms, NextMarker), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimInstance_IsSyncGroupBetweenMarkers_Statics::NewProp_PreviousMarker = { "PreviousMarker", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventIsSyncGroupBetweenMarkers_Parms, PreviousMarker), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimInstance_IsSyncGroupBetweenMarkers_Statics::NewProp_InSyncGroupName = { "InSyncGroupName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventIsSyncGroupBetweenMarkers_Parms, InSyncGroupName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_IsSyncGroupBetweenMarkers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_IsSyncGroupBetweenMarkers_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_IsSyncGroupBetweenMarkers_Statics::NewProp_bRespectMarkerOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_IsSyncGroupBetweenMarkers_Statics::NewProp_NextMarker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_IsSyncGroupBetweenMarkers_Statics::NewProp_PreviousMarker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_IsSyncGroupBetweenMarkers_Statics::NewProp_InSyncGroupName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_IsSyncGroupBetweenMarkers_Statics::Function_MetaDataParams[] = {
		{ "Category", "SyncGroup" },
		{ "CPP_Default_bRespectMarkerOrder", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_IsSyncGroupBetweenMarkers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "IsSyncGroupBetweenMarkers", nullptr, nullptr, sizeof(AnimInstance_eventIsSyncGroupBetweenMarkers_Parms), Z_Construct_UFunction_UAnimInstance_IsSyncGroupBetweenMarkers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_IsSyncGroupBetweenMarkers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_IsSyncGroupBetweenMarkers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_IsSyncGroupBetweenMarkers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_IsSyncGroupBetweenMarkers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_IsSyncGroupBetweenMarkers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_LinkAnimClassLayers_Statics
	{
		struct AnimInstance_eventLinkAnimClassLayers_Parms
		{
			TSubclassOf<UAnimInstance>  InClass;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAnimInstance_LinkAnimClassLayers_Statics::NewProp_InClass = { "InClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventLinkAnimClassLayers_Parms, InClass), Z_Construct_UClass_UAnimInstance_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_LinkAnimClassLayers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_LinkAnimClassLayers_Statics::NewProp_InClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_LinkAnimClassLayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation Blueprint Linking" },
		{ "Comment", "/**\n\x09 * Runs through all layer nodes, attempting to find layer nodes that are implemented by the specified class, then sets up a linked instance of the class for each.\n\x09 * Allocates one linked instance to run each of the groups specified in the class, so state is shared. If a layer is not grouped (ie. NAME_None), then state is not shared\n\x09 * and a separate linked instance is allocated for each layer node.\n\x09 * If InClass is null, then all layers are reset to their defaults.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Runs through all layer nodes, attempting to find layer nodes that are implemented by the specified class, then sets up a linked instance of the class for each.\nAllocates one linked instance to run each of the groups specified in the class, so state is shared. If a layer is not grouped (ie. NAME_None), then state is not shared\nand a separate linked instance is allocated for each layer node.\nIf InClass is null, then all layers are reset to their defaults." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_LinkAnimClassLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "LinkAnimClassLayers", nullptr, nullptr, sizeof(AnimInstance_eventLinkAnimClassLayers_Parms), Z_Construct_UFunction_UAnimInstance_LinkAnimClassLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_LinkAnimClassLayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_LinkAnimClassLayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_LinkAnimClassLayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_LinkAnimClassLayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_LinkAnimClassLayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_LinkAnimGraphByTag_Statics
	{
		struct AnimInstance_eventLinkAnimGraphByTag_Parms
		{
			FName InTag;
			TSubclassOf<UAnimInstance>  InClass;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InClass;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAnimInstance_LinkAnimGraphByTag_Statics::NewProp_InClass = { "InClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventLinkAnimGraphByTag_Parms, InClass), Z_Construct_UClass_UAnimInstance_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimInstance_LinkAnimGraphByTag_Statics::NewProp_InTag = { "InTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventLinkAnimGraphByTag_Parms, InTag), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_LinkAnimGraphByTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_LinkAnimGraphByTag_Statics::NewProp_InClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_LinkAnimGraphByTag_Statics::NewProp_InTag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_LinkAnimGraphByTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation Blueprint Linking" },
		{ "Comment", "/** Runs through all nodes, attempting to find a linked instance by name/tag, then sets the class of each node if the tag matches */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Runs through all nodes, attempting to find a linked instance by name/tag, then sets the class of each node if the tag matches" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_LinkAnimGraphByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "LinkAnimGraphByTag", nullptr, nullptr, sizeof(AnimInstance_eventLinkAnimGraphByTag_Parms), Z_Construct_UFunction_UAnimInstance_LinkAnimGraphByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_LinkAnimGraphByTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_LinkAnimGraphByTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_LinkAnimGraphByTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_LinkAnimGraphByTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_LinkAnimGraphByTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_LockAIResources_Statics
	{
		struct AnimInstance_eventLockAIResources_Parms
		{
			bool bLockMovement;
			bool LockAILogic;
		};
		static void NewProp_LockAILogic_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LockAILogic;
		static void NewProp_bLockMovement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockMovement;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAnimInstance_LockAIResources_Statics::NewProp_LockAILogic_SetBit(void* Obj)
	{
		((AnimInstance_eventLockAIResources_Parms*)Obj)->LockAILogic = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimInstance_LockAIResources_Statics::NewProp_LockAILogic = { "LockAILogic", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AnimInstance_eventLockAIResources_Parms), &Z_Construct_UFunction_UAnimInstance_LockAIResources_Statics::NewProp_LockAILogic_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAnimInstance_LockAIResources_Statics::NewProp_bLockMovement_SetBit(void* Obj)
	{
		((AnimInstance_eventLockAIResources_Parms*)Obj)->bLockMovement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimInstance_LockAIResources_Statics::NewProp_bLockMovement = { "bLockMovement", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AnimInstance_eventLockAIResources_Parms), &Z_Construct_UFunction_UAnimInstance_LockAIResources_Statics::NewProp_bLockMovement_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_LockAIResources_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_LockAIResources_Statics::NewProp_LockAILogic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_LockAIResources_Statics::NewProp_bLockMovement,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_LockAIResources_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** locks indicated AI resources of animated pawn\n\x09 *\x09""DEPRECATED. Use LockAIResourcesWithAnimation instead */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use LockAIResourcesWithAnimation instead" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "locks indicated AI resources of animated pawn\n    DEPRECATED. Use LockAIResourcesWithAnimation instead" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_LockAIResources_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "LockAIResources", nullptr, nullptr, sizeof(AnimInstance_eventLockAIResources_Parms), Z_Construct_UFunction_UAnimInstance_LockAIResources_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_LockAIResources_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_LockAIResources_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_LockAIResources_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_LockAIResources()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_LockAIResources_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_Montage_GetBlendTime_Statics
	{
		struct AnimInstance_eventMontage_GetBlendTime_Parms
		{
			const UAnimMontage* Montage;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_GetBlendTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventMontage_GetBlendTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_GetBlendTime_Statics::NewProp_Montage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_GetBlendTime_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventMontage_GetBlendTime_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_GetBlendTime_Statics::NewProp_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_GetBlendTime_Statics::NewProp_Montage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_Montage_GetBlendTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_GetBlendTime_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_GetBlendTime_Statics::NewProp_Montage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_GetBlendTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Montage" },
		{ "Comment", "/** Get the current blend time of the Montage.\n\x09If Montage reference is NULL, it will return the current blend time on the first active Montage found. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "NotBlueprintThreadSafe", "" },
		{ "ToolTip", "Get the current blend time of the Montage.\n      If Montage reference is NULL, it will return the current blend time on the first active Montage found." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_Montage_GetBlendTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "Montage_GetBlendTime", nullptr, nullptr, sizeof(AnimInstance_eventMontage_GetBlendTime_Parms), Z_Construct_UFunction_UAnimInstance_Montage_GetBlendTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_GetBlendTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_GetBlendTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_GetBlendTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_Montage_GetBlendTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_Montage_GetBlendTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_Montage_GetCurrentSection_Statics
	{
		struct AnimInstance_eventMontage_GetCurrentSection_Parms
		{
			const UAnimMontage* Montage;
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimInstance_Montage_GetCurrentSection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventMontage_GetCurrentSection_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_GetCurrentSection_Statics::NewProp_Montage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_GetCurrentSection_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventMontage_GetCurrentSection_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_GetCurrentSection_Statics::NewProp_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_GetCurrentSection_Statics::NewProp_Montage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_Montage_GetCurrentSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_GetCurrentSection_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_GetCurrentSection_Statics::NewProp_Montage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_GetCurrentSection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Montage" },
		{ "Comment", "/** Returns the name of the current animation montage section. */" },
		{ "CPP_Default_Montage", "None" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "NotBlueprintThreadSafe", "" },
		{ "ToolTip", "Returns the name of the current animation montage section." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_Montage_GetCurrentSection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "Montage_GetCurrentSection", nullptr, nullptr, sizeof(AnimInstance_eventMontage_GetCurrentSection_Parms), Z_Construct_UFunction_UAnimInstance_Montage_GetCurrentSection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_GetCurrentSection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_GetCurrentSection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_GetCurrentSection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_Montage_GetCurrentSection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_Montage_GetCurrentSection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_Montage_GetIsStopped_Statics
	{
		struct AnimInstance_eventMontage_GetIsStopped_Parms
		{
			const UAnimMontage* Montage;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAnimInstance_Montage_GetIsStopped_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimInstance_eventMontage_GetIsStopped_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_GetIsStopped_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AnimInstance_eventMontage_GetIsStopped_Parms), &Z_Construct_UFunction_UAnimInstance_Montage_GetIsStopped_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_GetIsStopped_Statics::NewProp_Montage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_GetIsStopped_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventMontage_GetIsStopped_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_GetIsStopped_Statics::NewProp_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_GetIsStopped_Statics::NewProp_Montage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_Montage_GetIsStopped_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_GetIsStopped_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_GetIsStopped_Statics::NewProp_Montage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_GetIsStopped_Statics::Function_MetaDataParams[] = {
		{ "Category", "Montage" },
		{ "Comment", "/** return true if Montage is not currently active. (not valid or blending out) */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "NotBlueprintThreadSafe", "" },
		{ "ToolTip", "return true if Montage is not currently active. (not valid or blending out)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_Montage_GetIsStopped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "Montage_GetIsStopped", nullptr, nullptr, sizeof(AnimInstance_eventMontage_GetIsStopped_Parms), Z_Construct_UFunction_UAnimInstance_Montage_GetIsStopped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_GetIsStopped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_GetIsStopped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_GetIsStopped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_Montage_GetIsStopped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_Montage_GetIsStopped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_Montage_GetPlayRate_Statics
	{
		struct AnimInstance_eventMontage_GetPlayRate_Parms
		{
			const UAnimMontage* Montage;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_GetPlayRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventMontage_GetPlayRate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_GetPlayRate_Statics::NewProp_Montage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_GetPlayRate_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventMontage_GetPlayRate_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_GetPlayRate_Statics::NewProp_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_GetPlayRate_Statics::NewProp_Montage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_Montage_GetPlayRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_GetPlayRate_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_GetPlayRate_Statics::NewProp_Montage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_GetPlayRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Montage" },
		{ "Comment", "/** Get PlayRate for Montage.\n\x09If Montage reference is NULL, PlayRate for any Active Montage will be returned.\n\x09If Montage is not playing, 0 is returned. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "NotBlueprintThreadSafe", "" },
		{ "ToolTip", "Get PlayRate for Montage.\n      If Montage reference is NULL, PlayRate for any Active Montage will be returned.\n      If Montage is not playing, 0 is returned." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_Montage_GetPlayRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "Montage_GetPlayRate", nullptr, nullptr, sizeof(AnimInstance_eventMontage_GetPlayRate_Parms), Z_Construct_UFunction_UAnimInstance_Montage_GetPlayRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_GetPlayRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_GetPlayRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_GetPlayRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_Montage_GetPlayRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_Montage_GetPlayRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_Montage_GetPosition_Statics
	{
		struct AnimInstance_eventMontage_GetPosition_Parms
		{
			const UAnimMontage* Montage;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_GetPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventMontage_GetPosition_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_GetPosition_Statics::NewProp_Montage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_GetPosition_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventMontage_GetPosition_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_GetPosition_Statics::NewProp_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_GetPosition_Statics::NewProp_Montage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_Montage_GetPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_GetPosition_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_GetPosition_Statics::NewProp_Montage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_GetPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Montage" },
		{ "Comment", "/** Get Current Montage Position */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "NotBlueprintThreadSafe", "" },
		{ "ToolTip", "Get Current Montage Position" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_Montage_GetPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "Montage_GetPosition", nullptr, nullptr, sizeof(AnimInstance_eventMontage_GetPosition_Parms), Z_Construct_UFunction_UAnimInstance_Montage_GetPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_GetPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_GetPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_GetPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_Montage_GetPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_Montage_GetPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_Montage_IsActive_Statics
	{
		struct AnimInstance_eventMontage_IsActive_Parms
		{
			const UAnimMontage* Montage;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAnimInstance_Montage_IsActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimInstance_eventMontage_IsActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_IsActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AnimInstance_eventMontage_IsActive_Parms), &Z_Construct_UFunction_UAnimInstance_Montage_IsActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_IsActive_Statics::NewProp_Montage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_IsActive_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventMontage_IsActive_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_IsActive_Statics::NewProp_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_IsActive_Statics::NewProp_Montage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_Montage_IsActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_IsActive_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_IsActive_Statics::NewProp_Montage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_IsActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Montage" },
		{ "Comment", "/** Returns true if the animation montage is active. If the Montage reference is NULL, it will return true if any Montage is active. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "NotBlueprintThreadSafe", "" },
		{ "ToolTip", "Returns true if the animation montage is active. If the Montage reference is NULL, it will return true if any Montage is active." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_Montage_IsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "Montage_IsActive", nullptr, nullptr, sizeof(AnimInstance_eventMontage_IsActive_Parms), Z_Construct_UFunction_UAnimInstance_Montage_IsActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_IsActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_IsActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_IsActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_Montage_IsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_Montage_IsActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_Montage_IsPlaying_Statics
	{
		struct AnimInstance_eventMontage_IsPlaying_Parms
		{
			const UAnimMontage* Montage;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAnimInstance_Montage_IsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimInstance_eventMontage_IsPlaying_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_IsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AnimInstance_eventMontage_IsPlaying_Parms), &Z_Construct_UFunction_UAnimInstance_Montage_IsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_IsPlaying_Statics::NewProp_Montage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_IsPlaying_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventMontage_IsPlaying_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_IsPlaying_Statics::NewProp_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_IsPlaying_Statics::NewProp_Montage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_Montage_IsPlaying_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_IsPlaying_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_IsPlaying_Statics::NewProp_Montage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_IsPlaying_Statics::Function_MetaDataParams[] = {
		{ "Category", "Montage" },
		{ "Comment", "/** Returns true if the animation montage is currently active and playing. \n\x09If reference is NULL, it will return true is ANY montage is currently active and playing. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "NotBlueprintThreadSafe", "" },
		{ "ToolTip", "Returns true if the animation montage is currently active and playing.\n      If reference is NULL, it will return true is ANY montage is currently active and playing." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_Montage_IsPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "Montage_IsPlaying", nullptr, nullptr, sizeof(AnimInstance_eventMontage_IsPlaying_Parms), Z_Construct_UFunction_UAnimInstance_Montage_IsPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_IsPlaying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_IsPlaying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_IsPlaying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_Montage_IsPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_Montage_IsPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_Montage_JumpToSection_Statics
	{
		struct AnimInstance_eventMontage_JumpToSection_Parms
		{
			FName SectionName;
			const UAnimMontage* Montage;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SectionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_JumpToSection_Statics::NewProp_Montage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_JumpToSection_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventMontage_JumpToSection_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_JumpToSection_Statics::NewProp_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_JumpToSection_Statics::NewProp_Montage_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimInstance_Montage_JumpToSection_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventMontage_JumpToSection_Parms, SectionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_Montage_JumpToSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_JumpToSection_Statics::NewProp_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_JumpToSection_Statics::NewProp_SectionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_JumpToSection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Montage" },
		{ "Comment", "/** Makes a montage jump to a named section. If Montage reference is NULL, it will do that to all active montages. */" },
		{ "CPP_Default_Montage", "None" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Makes a montage jump to a named section. If Montage reference is NULL, it will do that to all active montages." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_Montage_JumpToSection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "Montage_JumpToSection", nullptr, nullptr, sizeof(AnimInstance_eventMontage_JumpToSection_Parms), Z_Construct_UFunction_UAnimInstance_Montage_JumpToSection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_JumpToSection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_JumpToSection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_JumpToSection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_Montage_JumpToSection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_Montage_JumpToSection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_Montage_JumpToSectionsEnd_Statics
	{
		struct AnimInstance_eventMontage_JumpToSectionsEnd_Parms
		{
			FName SectionName;
			const UAnimMontage* Montage;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SectionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_JumpToSectionsEnd_Statics::NewProp_Montage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_JumpToSectionsEnd_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventMontage_JumpToSectionsEnd_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_JumpToSectionsEnd_Statics::NewProp_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_JumpToSectionsEnd_Statics::NewProp_Montage_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimInstance_Montage_JumpToSectionsEnd_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventMontage_JumpToSectionsEnd_Parms, SectionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_Montage_JumpToSectionsEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_JumpToSectionsEnd_Statics::NewProp_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_JumpToSectionsEnd_Statics::NewProp_SectionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_JumpToSectionsEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Montage" },
		{ "Comment", "/** Makes a montage jump to the end of a named section. If Montage reference is NULL, it will do that to all active montages. */" },
		{ "CPP_Default_Montage", "None" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Makes a montage jump to the end of a named section. If Montage reference is NULL, it will do that to all active montages." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_Montage_JumpToSectionsEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "Montage_JumpToSectionsEnd", nullptr, nullptr, sizeof(AnimInstance_eventMontage_JumpToSectionsEnd_Parms), Z_Construct_UFunction_UAnimInstance_Montage_JumpToSectionsEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_JumpToSectionsEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_JumpToSectionsEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_JumpToSectionsEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_Montage_JumpToSectionsEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_Montage_JumpToSectionsEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_Montage_Pause_Statics
	{
		struct AnimInstance_eventMontage_Pause_Parms
		{
			const UAnimMontage* Montage;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_Pause_Statics::NewProp_Montage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_Pause_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventMontage_Pause_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_Pause_Statics::NewProp_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_Pause_Statics::NewProp_Montage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_Montage_Pause_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_Pause_Statics::NewProp_Montage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_Pause_Statics::Function_MetaDataParams[] = {
		{ "Category", "Montage" },
		{ "Comment", "/** Pauses the animation montage. If reference is NULL, it will pause ALL active montages. */" },
		{ "CPP_Default_Montage", "None" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Pauses the animation montage. If reference is NULL, it will pause ALL active montages." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_Montage_Pause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "Montage_Pause", nullptr, nullptr, sizeof(AnimInstance_eventMontage_Pause_Parms), Z_Construct_UFunction_UAnimInstance_Montage_Pause_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_Pause_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_Pause_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_Pause_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_Montage_Pause()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_Montage_Pause_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_Montage_Play_Statics
	{
		struct AnimInstance_eventMontage_Play_Parms
		{
			UAnimMontage* MontageToPlay;
			float InPlayRate;
			EMontagePlayReturnType ReturnValueType;
			float InTimeToStartMontageAt;
			bool bStopAllMontages;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static void NewProp_bStopAllMontages_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopAllMontages;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InTimeToStartMontageAt;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValueType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValueType_Underlying;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InPlayRate;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MontageToPlay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_Play_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventMontage_Play_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAnimInstance_Montage_Play_Statics::NewProp_bStopAllMontages_SetBit(void* Obj)
	{
		((AnimInstance_eventMontage_Play_Parms*)Obj)->bStopAllMontages = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_Play_Statics::NewProp_bStopAllMontages = { "bStopAllMontages", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AnimInstance_eventMontage_Play_Parms), &Z_Construct_UFunction_UAnimInstance_Montage_Play_Statics::NewProp_bStopAllMontages_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_Play_Statics::NewProp_InTimeToStartMontageAt = { "InTimeToStartMontageAt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventMontage_Play_Parms, InTimeToStartMontageAt), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_Play_Statics::NewProp_ReturnValueType = { "ReturnValueType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventMontage_Play_Parms, ReturnValueType), Z_Construct_UEnum_Engine_EMontagePlayReturnType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimInstance_Montage_Play_Statics::NewProp_ReturnValueType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_Play_Statics::NewProp_InPlayRate = { "InPlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventMontage_Play_Parms, InPlayRate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_Play_Statics::NewProp_MontageToPlay = { "MontageToPlay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventMontage_Play_Parms, MontageToPlay), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_Montage_Play_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_Play_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_Play_Statics::NewProp_bStopAllMontages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_Play_Statics::NewProp_InTimeToStartMontageAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_Play_Statics::NewProp_ReturnValueType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_Play_Statics::NewProp_ReturnValueType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_Play_Statics::NewProp_InPlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_Play_Statics::NewProp_MontageToPlay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_Play_Statics::Function_MetaDataParams[] = {
		{ "Category", "Montage" },
		{ "Comment", "/** Plays an animation montage. Returns the length of the animation montage in seconds. Returns 0.f if failed to play. */" },
		{ "CPP_Default_bStopAllMontages", "true" },
		{ "CPP_Default_InPlayRate", "1.000000" },
		{ "CPP_Default_InTimeToStartMontageAt", "0.000000" },
		{ "CPP_Default_ReturnValueType", "MontageLength" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Plays an animation montage. Returns the length of the animation montage in seconds. Returns 0.f if failed to play." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_Montage_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "Montage_Play", nullptr, nullptr, sizeof(AnimInstance_eventMontage_Play_Parms), Z_Construct_UFunction_UAnimInstance_Montage_Play_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_Play_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_Play_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_Play_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_Montage_Play()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_Montage_Play_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_Montage_Resume_Statics
	{
		struct AnimInstance_eventMontage_Resume_Parms
		{
			const UAnimMontage* Montage;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_Resume_Statics::NewProp_Montage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_Resume_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventMontage_Resume_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_Resume_Statics::NewProp_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_Resume_Statics::NewProp_Montage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_Montage_Resume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_Resume_Statics::NewProp_Montage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_Resume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Montage" },
		{ "Comment", "/** Resumes a paused animation montage. If reference is NULL, it will resume ALL active montages. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Resumes a paused animation montage. If reference is NULL, it will resume ALL active montages." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_Montage_Resume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "Montage_Resume", nullptr, nullptr, sizeof(AnimInstance_eventMontage_Resume_Parms), Z_Construct_UFunction_UAnimInstance_Montage_Resume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_Resume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_Resume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_Resume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_Montage_Resume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_Montage_Resume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_Montage_SetNextSection_Statics
	{
		struct AnimInstance_eventMontage_SetNextSection_Parms
		{
			FName SectionNameToChange;
			FName NextSection;
			const UAnimMontage* Montage;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NextSection;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SectionNameToChange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_SetNextSection_Statics::NewProp_Montage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_SetNextSection_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventMontage_SetNextSection_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_SetNextSection_Statics::NewProp_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_SetNextSection_Statics::NewProp_Montage_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimInstance_Montage_SetNextSection_Statics::NewProp_NextSection = { "NextSection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventMontage_SetNextSection_Parms, NextSection), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimInstance_Montage_SetNextSection_Statics::NewProp_SectionNameToChange = { "SectionNameToChange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventMontage_SetNextSection_Parms, SectionNameToChange), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_Montage_SetNextSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_SetNextSection_Statics::NewProp_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_SetNextSection_Statics::NewProp_NextSection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_SetNextSection_Statics::NewProp_SectionNameToChange,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_SetNextSection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Montage" },
		{ "Comment", "/** Relink new next section AFTER SectionNameToChange in run-time\n\x09 *\x09You can link section order the way you like in editor, but in run-time if you'd like to change it dynamically, \n\x09 *\x09use this function to relink the next section\n\x09 *\x09""For example, you can have Start->Loop->Loop->Loop.... but when you want it to end, you can relink\n\x09 *\x09next section of Loop to be End to finish the montage, in which case, it stops looping by Loop->End. \n\x09 \n\x09 * @param SectionNameToChange : This should be the name of the Montage Section after which you want to insert a new next section\n\x09 * @param NextSection\x09: new next section \n\x09 */" },
		{ "CPP_Default_Montage", "None" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Relink new next section AFTER SectionNameToChange in run-time\n    You can link section order the way you like in editor, but in run-time if you'd like to change it dynamically,\n    use this function to relink the next section\n    For example, you can have Start->Loop->Loop->Loop.... but when you want it to end, you can relink\n    next section of Loop to be End to finish the montage, in which case, it stops looping by Loop->End.\n\n@param SectionNameToChange : This should be the name of the Montage Section after which you want to insert a new next section\n@param NextSection   : new next section" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_Montage_SetNextSection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "Montage_SetNextSection", nullptr, nullptr, sizeof(AnimInstance_eventMontage_SetNextSection_Parms), Z_Construct_UFunction_UAnimInstance_Montage_SetNextSection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_SetNextSection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_SetNextSection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_SetNextSection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_Montage_SetNextSection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_Montage_SetNextSection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_Montage_SetPlayRate_Statics
	{
		struct AnimInstance_eventMontage_SetPlayRate_Parms
		{
			const UAnimMontage* Montage;
			float NewPlayRate;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewPlayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_SetPlayRate_Statics::NewProp_NewPlayRate = { "NewPlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventMontage_SetPlayRate_Parms, NewPlayRate), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_SetPlayRate_Statics::NewProp_Montage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_SetPlayRate_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventMontage_SetPlayRate_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_SetPlayRate_Statics::NewProp_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_SetPlayRate_Statics::NewProp_Montage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_Montage_SetPlayRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_SetPlayRate_Statics::NewProp_NewPlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_SetPlayRate_Statics::NewProp_Montage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_SetPlayRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Montage" },
		{ "Comment", "/** Change AnimMontage play rate. NewPlayRate = 1.0 is the default playback rate. */" },
		{ "CPP_Default_NewPlayRate", "1.000000" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Change AnimMontage play rate. NewPlayRate = 1.0 is the default playback rate." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_Montage_SetPlayRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "Montage_SetPlayRate", nullptr, nullptr, sizeof(AnimInstance_eventMontage_SetPlayRate_Parms), Z_Construct_UFunction_UAnimInstance_Montage_SetPlayRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_SetPlayRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_SetPlayRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_SetPlayRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_Montage_SetPlayRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_Montage_SetPlayRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_Montage_SetPosition_Statics
	{
		struct AnimInstance_eventMontage_SetPosition_Parms
		{
			const UAnimMontage* Montage;
			float NewPosition;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_SetPosition_Statics::NewProp_NewPosition = { "NewPosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventMontage_SetPosition_Parms, NewPosition), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_SetPosition_Statics::NewProp_Montage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_SetPosition_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventMontage_SetPosition_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_SetPosition_Statics::NewProp_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_SetPosition_Statics::NewProp_Montage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_Montage_SetPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_SetPosition_Statics::NewProp_NewPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_SetPosition_Statics::NewProp_Montage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_SetPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Montage" },
		{ "Comment", "/** Set position. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Set position." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_Montage_SetPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "Montage_SetPosition", nullptr, nullptr, sizeof(AnimInstance_eventMontage_SetPosition_Parms), Z_Construct_UFunction_UAnimInstance_Montage_SetPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_SetPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_SetPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_SetPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_Montage_SetPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_Montage_SetPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_Montage_Stop_Statics
	{
		struct AnimInstance_eventMontage_Stop_Parms
		{
			float InBlendOutTime;
			const UAnimMontage* Montage;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InBlendOutTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_Stop_Statics::NewProp_Montage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_Stop_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventMontage_Stop_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_Stop_Statics::NewProp_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_Stop_Statics::NewProp_Montage_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_Stop_Statics::NewProp_InBlendOutTime = { "InBlendOutTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventMontage_Stop_Parms, InBlendOutTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_Montage_Stop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_Stop_Statics::NewProp_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_Stop_Statics::NewProp_InBlendOutTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_Stop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Montage" },
		{ "Comment", "/** Stops the animation montage. If reference is NULL, it will stop ALL active montages. */" },
		{ "CPP_Default_Montage", "None" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Stops the animation montage. If reference is NULL, it will stop ALL active montages." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_Montage_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "Montage_Stop", nullptr, nullptr, sizeof(AnimInstance_eventMontage_Stop_Parms), Z_Construct_UFunction_UAnimInstance_Montage_Stop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_Stop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_Montage_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_Montage_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_Montage_StopGroupByName_Statics
	{
		struct AnimInstance_eventMontage_StopGroupByName_Parms
		{
			float InBlendOutTime;
			FName GroupName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_GroupName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InBlendOutTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimInstance_Montage_StopGroupByName_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventMontage_StopGroupByName_Parms, GroupName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_StopGroupByName_Statics::NewProp_InBlendOutTime = { "InBlendOutTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventMontage_StopGroupByName_Parms, InBlendOutTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_Montage_StopGroupByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_StopGroupByName_Statics::NewProp_GroupName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_StopGroupByName_Statics::NewProp_InBlendOutTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_StopGroupByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Montage" },
		{ "Comment", "/** Stops all active montages belonging to a group. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Stops all active montages belonging to a group." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_Montage_StopGroupByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "Montage_StopGroupByName", nullptr, nullptr, sizeof(AnimInstance_eventMontage_StopGroupByName_Parms), Z_Construct_UFunction_UAnimInstance_Montage_StopGroupByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_StopGroupByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_StopGroupByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_StopGroupByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_Montage_StopGroupByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_Montage_StopGroupByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_PlaySlotAnimation_Statics
	{
		struct AnimInstance_eventPlaySlotAnimation_Parms
		{
			UAnimSequenceBase* Asset;
			FName SlotNodeName;
			float BlendInTime;
			float BlendOutTime;
			float InPlayRate;
			int32 LoopCount;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LoopCount;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InPlayRate;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendOutTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendInTime;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SlotNodeName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Asset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_PlaySlotAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventPlaySlotAnimation_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimInstance_PlaySlotAnimation_Statics::NewProp_LoopCount = { "LoopCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventPlaySlotAnimation_Parms, LoopCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_PlaySlotAnimation_Statics::NewProp_InPlayRate = { "InPlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventPlaySlotAnimation_Parms, InPlayRate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_PlaySlotAnimation_Statics::NewProp_BlendOutTime = { "BlendOutTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventPlaySlotAnimation_Parms, BlendOutTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_PlaySlotAnimation_Statics::NewProp_BlendInTime = { "BlendInTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventPlaySlotAnimation_Parms, BlendInTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimInstance_PlaySlotAnimation_Statics::NewProp_SlotNodeName = { "SlotNodeName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventPlaySlotAnimation_Parms, SlotNodeName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstance_PlaySlotAnimation_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventPlaySlotAnimation_Parms, Asset), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_PlaySlotAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_PlaySlotAnimation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_PlaySlotAnimation_Statics::NewProp_LoopCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_PlaySlotAnimation_Statics::NewProp_InPlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_PlaySlotAnimation_Statics::NewProp_BlendOutTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_PlaySlotAnimation_Statics::NewProp_BlendInTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_PlaySlotAnimation_Statics::NewProp_SlotNodeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_PlaySlotAnimation_Statics::NewProp_Asset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_PlaySlotAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "CPP_Default_BlendInTime", "0.250000" },
		{ "CPP_Default_BlendOutTime", "0.250000" },
		{ "CPP_Default_InPlayRate", "1.000000" },
		{ "CPP_Default_LoopCount", "1" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_PlaySlotAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "PlaySlotAnimation", nullptr, nullptr, sizeof(AnimInstance_eventPlaySlotAnimation_Parms), Z_Construct_UFunction_UAnimInstance_PlaySlotAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_PlaySlotAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_PlaySlotAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_PlaySlotAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_PlaySlotAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_PlaySlotAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_Statics
	{
		struct AnimInstance_eventPlaySlotAnimationAsDynamicMontage_Parms
		{
			UAnimSequenceBase* Asset;
			FName SlotNodeName;
			float BlendInTime;
			float BlendOutTime;
			float InPlayRate;
			int32 LoopCount;
			float BlendOutTriggerTime;
			float InTimeToStartMontageAt;
			UAnimMontage* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InTimeToStartMontageAt;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendOutTriggerTime;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LoopCount;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InPlayRate;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendOutTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendInTime;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SlotNodeName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Asset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventPlaySlotAnimationAsDynamicMontage_Parms, ReturnValue), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_Statics::NewProp_InTimeToStartMontageAt = { "InTimeToStartMontageAt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventPlaySlotAnimationAsDynamicMontage_Parms, InTimeToStartMontageAt), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_Statics::NewProp_BlendOutTriggerTime = { "BlendOutTriggerTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventPlaySlotAnimationAsDynamicMontage_Parms, BlendOutTriggerTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_Statics::NewProp_LoopCount = { "LoopCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventPlaySlotAnimationAsDynamicMontage_Parms, LoopCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_Statics::NewProp_InPlayRate = { "InPlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventPlaySlotAnimationAsDynamicMontage_Parms, InPlayRate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_Statics::NewProp_BlendOutTime = { "BlendOutTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventPlaySlotAnimationAsDynamicMontage_Parms, BlendOutTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_Statics::NewProp_BlendInTime = { "BlendInTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventPlaySlotAnimationAsDynamicMontage_Parms, BlendInTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_Statics::NewProp_SlotNodeName = { "SlotNodeName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventPlaySlotAnimationAsDynamicMontage_Parms, SlotNodeName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventPlaySlotAnimationAsDynamicMontage_Parms, Asset), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_Statics::NewProp_InTimeToStartMontageAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_Statics::NewProp_BlendOutTriggerTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_Statics::NewProp_LoopCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_Statics::NewProp_InPlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_Statics::NewProp_BlendOutTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_Statics::NewProp_BlendInTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_Statics::NewProp_SlotNodeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_Statics::NewProp_Asset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Play normal animation asset on the slot node by creating a dynamic UAnimMontage. You can only play one asset (whether montage or animsequence) at a time per SlotGroup. */" },
		{ "CPP_Default_BlendInTime", "0.250000" },
		{ "CPP_Default_BlendOutTime", "0.250000" },
		{ "CPP_Default_BlendOutTriggerTime", "-1.000000" },
		{ "CPP_Default_InPlayRate", "1.000000" },
		{ "CPP_Default_InTimeToStartMontageAt", "0.000000" },
		{ "CPP_Default_LoopCount", "1" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Play normal animation asset on the slot node by creating a dynamic UAnimMontage. You can only play one asset (whether montage or animsequence) at a time per SlotGroup." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "PlaySlotAnimationAsDynamicMontage", nullptr, nullptr, sizeof(AnimInstance_eventPlaySlotAnimationAsDynamicMontage_Parms), Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_ResetDynamics_Statics
	{
		struct AnimInstance_eventResetDynamics_Parms
		{
			ETeleportType InTeleportType;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InTeleportType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InTeleportType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnimInstance_ResetDynamics_Statics::NewProp_InTeleportType = { "InTeleportType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventResetDynamics_Parms, InTeleportType), Z_Construct_UEnum_Engine_ETeleportType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimInstance_ResetDynamics_Statics::NewProp_InTeleportType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_ResetDynamics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_ResetDynamics_Statics::NewProp_InTeleportType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_ResetDynamics_Statics::NewProp_InTeleportType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_ResetDynamics_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Reset any dynamics running simulation-style updates (e.g. on teleport, time skip etc.) */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "NotBlueprintThreadSafe", "" },
		{ "ToolTip", "Reset any dynamics running simulation-style updates (e.g. on teleport, time skip etc.)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_ResetDynamics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "ResetDynamics", nullptr, nullptr, sizeof(AnimInstance_eventResetDynamics_Parms), Z_Construct_UFunction_UAnimInstance_ResetDynamics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_ResetDynamics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_ResetDynamics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_ResetDynamics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_ResetDynamics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_ResetDynamics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_SavePoseSnapshot_Statics
	{
		struct AnimInstance_eventSavePoseSnapshot_Parms
		{
			FName SnapshotName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SnapshotName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimInstance_SavePoseSnapshot_Statics::NewProp_SnapshotName = { "SnapshotName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventSavePoseSnapshot_Parms, SnapshotName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_SavePoseSnapshot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_SavePoseSnapshot_Statics::NewProp_SnapshotName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_SavePoseSnapshot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pose" },
		{ "Comment", "/** \n\x09 * Takes a snapshot of the current skeletal mesh component pose & saves it internally.\n\x09 * This snapshot can then be retrieved by name in the animation blueprint for blending. \n\x09 * The snapshot is taken at the current LOD, so if for example you took the snapshot at LOD1 and then used it at LOD0 any bones not in LOD1 will use the reference pose \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Takes a snapshot of the current skeletal mesh component pose & saves it internally.\nThis snapshot can then be retrieved by name in the animation blueprint for blending.\nThe snapshot is taken at the current LOD, so if for example you took the snapshot at LOD1 and then used it at LOD0 any bones not in LOD1 will use the reference pose" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_SavePoseSnapshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "SavePoseSnapshot", nullptr, nullptr, sizeof(AnimInstance_eventSavePoseSnapshot_Parms), Z_Construct_UFunction_UAnimInstance_SavePoseSnapshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_SavePoseSnapshot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_SavePoseSnapshot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_SavePoseSnapshot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_SavePoseSnapshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_SavePoseSnapshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_SetMorphTarget_Statics
	{
		struct AnimInstance_eventSetMorphTarget_Parms
		{
			FName MorphTargetName;
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MorphTargetName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_SetMorphTarget_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventSetMorphTarget_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimInstance_SetMorphTarget_Statics::NewProp_MorphTargetName = { "MorphTargetName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventSetMorphTarget_Parms, MorphTargetName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_SetMorphTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_SetMorphTarget_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_SetMorphTarget_Statics::NewProp_MorphTargetName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_SetMorphTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Sets a morph target to a certain weight. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Sets a morph target to a certain weight." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_SetMorphTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "SetMorphTarget", nullptr, nullptr, sizeof(AnimInstance_eventSetMorphTarget_Parms), Z_Construct_UFunction_UAnimInstance_SetMorphTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_SetMorphTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_SetMorphTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_SetMorphTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_SetMorphTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_SetMorphTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_SetPropagateNotifiesToLinkedInstances_Statics
	{
		struct AnimInstance_eventSetPropagateNotifiesToLinkedInstances_Parms
		{
			bool bSet;
		};
		static void NewProp_bSet_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAnimInstance_SetPropagateNotifiesToLinkedInstances_Statics::NewProp_bSet_SetBit(void* Obj)
	{
		((AnimInstance_eventSetPropagateNotifiesToLinkedInstances_Parms*)Obj)->bSet = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimInstance_SetPropagateNotifiesToLinkedInstances_Statics::NewProp_bSet = { "bSet", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AnimInstance_eventSetPropagateNotifiesToLinkedInstances_Parms), &Z_Construct_UFunction_UAnimInstance_SetPropagateNotifiesToLinkedInstances_Statics::NewProp_bSet_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_SetPropagateNotifiesToLinkedInstances_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_SetPropagateNotifiesToLinkedInstances_Statics::NewProp_bSet,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_SetPropagateNotifiesToLinkedInstances_Statics::Function_MetaDataParams[] = {
		{ "Category", "Notifies" },
		{ "Comment", "/** Set whether to propagate notifies to any linked anim instances */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Set whether to propagate notifies to any linked anim instances" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_SetPropagateNotifiesToLinkedInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "SetPropagateNotifiesToLinkedInstances", nullptr, nullptr, sizeof(AnimInstance_eventSetPropagateNotifiesToLinkedInstances_Parms), Z_Construct_UFunction_UAnimInstance_SetPropagateNotifiesToLinkedInstances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_SetPropagateNotifiesToLinkedInstances_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_SetPropagateNotifiesToLinkedInstances_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_SetPropagateNotifiesToLinkedInstances_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_SetPropagateNotifiesToLinkedInstances()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_SetPropagateNotifiesToLinkedInstances_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_SetReceiveNotifiesFromLinkedInstances_Statics
	{
		struct AnimInstance_eventSetReceiveNotifiesFromLinkedInstances_Parms
		{
			bool bSet;
		};
		static void NewProp_bSet_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAnimInstance_SetReceiveNotifiesFromLinkedInstances_Statics::NewProp_bSet_SetBit(void* Obj)
	{
		((AnimInstance_eventSetReceiveNotifiesFromLinkedInstances_Parms*)Obj)->bSet = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimInstance_SetReceiveNotifiesFromLinkedInstances_Statics::NewProp_bSet = { "bSet", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AnimInstance_eventSetReceiveNotifiesFromLinkedInstances_Parms), &Z_Construct_UFunction_UAnimInstance_SetReceiveNotifiesFromLinkedInstances_Statics::NewProp_bSet_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_SetReceiveNotifiesFromLinkedInstances_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_SetReceiveNotifiesFromLinkedInstances_Statics::NewProp_bSet,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_SetReceiveNotifiesFromLinkedInstances_Statics::Function_MetaDataParams[] = {
		{ "Category", "Notifies" },
		{ "Comment", "/** Set whether to process notifies from any linked anim instances */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Set whether to process notifies from any linked anim instances" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_SetReceiveNotifiesFromLinkedInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "SetReceiveNotifiesFromLinkedInstances", nullptr, nullptr, sizeof(AnimInstance_eventSetReceiveNotifiesFromLinkedInstances_Parms), Z_Construct_UFunction_UAnimInstance_SetReceiveNotifiesFromLinkedInstances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_SetReceiveNotifiesFromLinkedInstances_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_SetReceiveNotifiesFromLinkedInstances_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_SetReceiveNotifiesFromLinkedInstances_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_SetReceiveNotifiesFromLinkedInstances()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_SetReceiveNotifiesFromLinkedInstances_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_SetRootMotionMode_Statics
	{
		struct AnimInstance_eventSetRootMotionMode_Parms
		{
			TEnumAsByte<ERootMotionMode::Type> Value;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimInstance_SetRootMotionMode_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventSetRootMotionMode_Parms, Value), Z_Construct_UEnum_Engine_ERootMotionMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_SetRootMotionMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_SetRootMotionMode_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_SetRootMotionMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Set RootMotionMode */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Set RootMotionMode" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_SetRootMotionMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "SetRootMotionMode", nullptr, nullptr, sizeof(AnimInstance_eventSetRootMotionMode_Parms), Z_Construct_UFunction_UAnimInstance_SetRootMotionMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_SetRootMotionMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_SetRootMotionMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_SetRootMotionMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_SetRootMotionMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_SetRootMotionMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_SnapshotPose_Statics
	{
		struct AnimInstance_eventSnapshotPose_Parms
		{
			FPoseSnapshot Snapshot;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Snapshot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimInstance_SnapshotPose_Statics::NewProp_Snapshot = { "Snapshot", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventSnapshotPose_Parms, Snapshot), Z_Construct_UScriptStruct_FPoseSnapshot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_SnapshotPose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_SnapshotPose_Statics::NewProp_Snapshot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_SnapshotPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pose" },
		{ "Comment", "/**\n\x09 * Takes a snapshot of the current skeletal mesh component pose and saves it to the specified snapshot.\n\x09 * The snapshot is taken at the current LOD, so if for example you took the snapshot at LOD1 \n\x09 * and then used it at LOD0 any bones not in LOD1 will use the reference pose \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Takes a snapshot of the current skeletal mesh component pose and saves it to the specified snapshot.\nThe snapshot is taken at the current LOD, so if for example you took the snapshot at LOD1\nand then used it at LOD0 any bones not in LOD1 will use the reference pose" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_SnapshotPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "SnapshotPose", nullptr, nullptr, sizeof(AnimInstance_eventSnapshotPose_Parms), Z_Construct_UFunction_UAnimInstance_SnapshotPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_SnapshotPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_SnapshotPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_SnapshotPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_SnapshotPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_SnapshotPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_StopSlotAnimation_Statics
	{
		struct AnimInstance_eventStopSlotAnimation_Parms
		{
			float InBlendOutTime;
			FName SlotNodeName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SlotNodeName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InBlendOutTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimInstance_StopSlotAnimation_Statics::NewProp_SlotNodeName = { "SlotNodeName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventStopSlotAnimation_Parms, SlotNodeName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_StopSlotAnimation_Statics::NewProp_InBlendOutTime = { "InBlendOutTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventStopSlotAnimation_Parms, InBlendOutTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_StopSlotAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_StopSlotAnimation_Statics::NewProp_SlotNodeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_StopSlotAnimation_Statics::NewProp_InBlendOutTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_StopSlotAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Stops currently playing slot animation slot or all*/" },
		{ "CPP_Default_InBlendOutTime", "0.250000" },
		{ "CPP_Default_SlotNodeName", "None" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Stops currently playing slot animation slot or all" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_StopSlotAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "StopSlotAnimation", nullptr, nullptr, sizeof(AnimInstance_eventStopSlotAnimation_Parms), Z_Construct_UFunction_UAnimInstance_StopSlotAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_StopSlotAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_StopSlotAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_StopSlotAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_StopSlotAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_StopSlotAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_TryGetPawnOwner_Statics
	{
		struct AnimInstance_eventTryGetPawnOwner_Parms
		{
			APawn* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstance_TryGetPawnOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventTryGetPawnOwner_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_TryGetPawnOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_TryGetPawnOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_TryGetPawnOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "// kismet event functions\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "NotBlueprintThreadSafe", "" },
		{ "ToolTip", "kismet event functions" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_TryGetPawnOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "TryGetPawnOwner", nullptr, nullptr, sizeof(AnimInstance_eventTryGetPawnOwner_Parms), Z_Construct_UFunction_UAnimInstance_TryGetPawnOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_TryGetPawnOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_TryGetPawnOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_TryGetPawnOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_TryGetPawnOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_TryGetPawnOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_UnlinkAnimClassLayers_Statics
	{
		struct AnimInstance_eventUnlinkAnimClassLayers_Parms
		{
			TSubclassOf<UAnimInstance>  InClass;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAnimInstance_UnlinkAnimClassLayers_Statics::NewProp_InClass = { "InClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstance_eventUnlinkAnimClassLayers_Parms, InClass), Z_Construct_UClass_UAnimInstance_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_UnlinkAnimClassLayers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_UnlinkAnimClassLayers_Statics::NewProp_InClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_UnlinkAnimClassLayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation Blueprint Linking" },
		{ "Comment", "/**\n\x09 * Runs through all layer nodes, attempting to find layer nodes that are currently running the specified class, then resets each to its default value.\n\x09 * State sharing rules are as with SetLayerOverlay.\n\x09 * If InClass is null, does nothing.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Runs through all layer nodes, attempting to find layer nodes that are currently running the specified class, then resets each to its default value.\nState sharing rules are as with SetLayerOverlay.\nIf InClass is null, does nothing." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_UnlinkAnimClassLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "UnlinkAnimClassLayers", nullptr, nullptr, sizeof(AnimInstance_eventUnlinkAnimClassLayers_Parms), Z_Construct_UFunction_UAnimInstance_UnlinkAnimClassLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_UnlinkAnimClassLayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_UnlinkAnimClassLayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_UnlinkAnimClassLayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_UnlinkAnimClassLayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_UnlinkAnimClassLayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_UnlockAIResources_Statics
	{
		struct AnimInstance_eventUnlockAIResources_Parms
		{
			bool bUnlockMovement;
			bool UnlockAILogic;
		};
		static void NewProp_UnlockAILogic_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UnlockAILogic;
		static void NewProp_bUnlockMovement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUnlockMovement;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAnimInstance_UnlockAIResources_Statics::NewProp_UnlockAILogic_SetBit(void* Obj)
	{
		((AnimInstance_eventUnlockAIResources_Parms*)Obj)->UnlockAILogic = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimInstance_UnlockAIResources_Statics::NewProp_UnlockAILogic = { "UnlockAILogic", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AnimInstance_eventUnlockAIResources_Parms), &Z_Construct_UFunction_UAnimInstance_UnlockAIResources_Statics::NewProp_UnlockAILogic_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAnimInstance_UnlockAIResources_Statics::NewProp_bUnlockMovement_SetBit(void* Obj)
	{
		((AnimInstance_eventUnlockAIResources_Parms*)Obj)->bUnlockMovement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimInstance_UnlockAIResources_Statics::NewProp_bUnlockMovement = { "bUnlockMovement", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AnimInstance_eventUnlockAIResources_Parms), &Z_Construct_UFunction_UAnimInstance_UnlockAIResources_Statics::NewProp_bUnlockMovement_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_UnlockAIResources_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_UnlockAIResources_Statics::NewProp_UnlockAILogic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_UnlockAIResources_Statics::NewProp_bUnlockMovement,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_UnlockAIResources_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** unlocks indicated AI resources of animated pawn. Will unlock only animation-locked resources.\n\x09 *\x09""DEPRECATED. Use UnlockAIResourcesWithAnimation instead */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use UnlockAIResourcesWithAnimation instead" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "unlocks indicated AI resources of animated pawn. Will unlock only animation-locked resources.\n    DEPRECATED. Use UnlockAIResourcesWithAnimation instead" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_UnlockAIResources_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "UnlockAIResources", nullptr, nullptr, sizeof(AnimInstance_eventUnlockAIResources_Parms), Z_Construct_UFunction_UAnimInstance_UnlockAIResources_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_UnlockAIResources_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_UnlockAIResources_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_UnlockAIResources_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_UnlockAIResources()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_UnlockAIResources_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAnimInstance_NoRegister()
	{
		return UAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveAnimNotifyState_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActiveAnimNotifyState;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActiveAnimNotifyState_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotifyQueue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NotifyQueue;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostCompileValidationClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PostCompileValidationClassName;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAllMontageInstancesEnded_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAllMontageInstancesEnded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMontageEnded_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMontageEnded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMontageStarted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMontageStarted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMontageBlendingOut_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMontageBlendingOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bQueueMontageEvents_MetaData[];
#endif
		static void NewProp_bQueueMontageEvents_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bQueueMontageEvents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPropagateNotifiesToLinkedInstances_MetaData[];
#endif
		static void NewProp_bPropagateNotifiesToLinkedInstances_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPropagateNotifiesToLinkedInstances;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReceiveNotifiesFromLinkedInstances_MetaData[];
#endif
		static void NewProp_bReceiveNotifiesFromLinkedInstances_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReceiveNotifiesFromLinkedInstances;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsingCopyPoseFromMesh_MetaData[];
#endif
		static void NewProp_bUsingCopyPoseFromMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsingCopyPoseFromMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseMultiThreadedAnimationUpdate_MetaData[];
#endif
		static void NewProp_bUseMultiThreadedAnimationUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseMultiThreadedAnimationUpdate;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWarnAboutBlueprintUsage_MetaData[];
#endif
		static void NewProp_bWarnAboutBlueprintUsage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWarnAboutBlueprintUsage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanUseParallelUpdateAnimation_MetaData[];
#endif
		static void NewProp_bCanUseParallelUpdateAnimation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanUseParallelUpdateAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRunUpdatesInWorkerThreads_MetaData[];
#endif
		static void NewProp_bRunUpdatesInWorkerThreads_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRunUpdatesInWorkerThreads;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootMotionMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RootMotionMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentSkeleton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentSkeleton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimInstance_BlueprintBeginPlay, "BlueprintBeginPlay" }, // 87975761
		{ &Z_Construct_UFunction_UAnimInstance_BlueprintInitializeAnimation, "BlueprintInitializeAnimation" }, // 4145347494
		{ &Z_Construct_UFunction_UAnimInstance_BlueprintLinkedAnimationLayersInitialized, "BlueprintLinkedAnimationLayersInitialized" }, // 3960290813
		{ &Z_Construct_UFunction_UAnimInstance_BlueprintPostEvaluateAnimation, "BlueprintPostEvaluateAnimation" }, // 2992759258
		{ &Z_Construct_UFunction_UAnimInstance_BlueprintUpdateAnimation, "BlueprintUpdateAnimation" }, // 568177567
		{ &Z_Construct_UFunction_UAnimInstance_CalculateDirection, "CalculateDirection" }, // 535324893
		{ &Z_Construct_UFunction_UAnimInstance_ClearMorphTargets, "ClearMorphTargets" }, // 3221263997
		{ &Z_Construct_UFunction_UAnimInstance_GetActiveCurveNames, "GetActiveCurveNames" }, // 2178534129
		{ &Z_Construct_UFunction_UAnimInstance_GetAllCurveNames, "GetAllCurveNames" }, // 694203815
		{ &Z_Construct_UFunction_UAnimInstance_GetCurrentActiveMontage, "GetCurrentActiveMontage" }, // 1508954172
		{ &Z_Construct_UFunction_UAnimInstance_GetCurrentStateName, "GetCurrentStateName" }, // 871316710
		{ &Z_Construct_UFunction_UAnimInstance_GetCurveValue, "GetCurveValue" }, // 1683610347
		{ &Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerLength, "GetInstanceAssetPlayerLength" }, // 2525000308
		{ &Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTime, "GetInstanceAssetPlayerTime" }, // 110050578
		{ &Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFraction, "GetInstanceAssetPlayerTimeFraction" }, // 1284486997
		{ &Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFromEnd, "GetInstanceAssetPlayerTimeFromEnd" }, // 1695898200
		{ &Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFromEndFraction, "GetInstanceAssetPlayerTimeFromEndFraction" }, // 1005885904
		{ &Z_Construct_UFunction_UAnimInstance_GetInstanceCurrentStateElapsedTime, "GetInstanceCurrentStateElapsedTime" }, // 3348544663
		{ &Z_Construct_UFunction_UAnimInstance_GetInstanceMachineWeight, "GetInstanceMachineWeight" }, // 4183323222
		{ &Z_Construct_UFunction_UAnimInstance_GetInstanceStateWeight, "GetInstanceStateWeight" }, // 779565412
		{ &Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionCrossfadeDuration, "GetInstanceTransitionCrossfadeDuration" }, // 2141951265
		{ &Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsed, "GetInstanceTransitionTimeElapsed" }, // 1132954245
		{ &Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsedFraction, "GetInstanceTransitionTimeElapsedFraction" }, // 2667680199
		{ &Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstanceByTag, "GetLinkedAnimGraphInstanceByTag" }, // 4001049244
		{ &Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstancesByTag, "GetLinkedAnimGraphInstancesByTag" }, // 3365637471
		{ &Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByClass, "GetLinkedAnimLayerInstanceByClass" }, // 2721670442
		{ &Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByGroup, "GetLinkedAnimLayerInstanceByGroup" }, // 2915129829
		{ &Z_Construct_UFunction_UAnimInstance_GetOwningActor, "GetOwningActor" }, // 150751562
		{ &Z_Construct_UFunction_UAnimInstance_GetOwningComponent, "GetOwningComponent" }, // 1797079827
		{ &Z_Construct_UFunction_UAnimInstance_GetPropagateNotifiesToLinkedInstances, "GetPropagateNotifiesToLinkedInstances" }, // 1622520978
		{ &Z_Construct_UFunction_UAnimInstance_GetReceiveNotifiesFromLinkedInstances, "GetReceiveNotifiesFromLinkedInstances" }, // 4199471363
		{ &Z_Construct_UFunction_UAnimInstance_GetRelevantAnimLength, "GetRelevantAnimLength" }, // 3704019580
		{ &Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTime, "GetRelevantAnimTime" }, // 960173278
		{ &Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeFraction, "GetRelevantAnimTimeFraction" }, // 4109465698
		{ &Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemaining, "GetRelevantAnimTimeRemaining" }, // 4246197209
		{ &Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemainingFraction, "GetRelevantAnimTimeRemainingFraction" }, // 3764063862
		{ &Z_Construct_UFunction_UAnimInstance_GetSyncGroupPosition, "GetSyncGroupPosition" }, // 2310885535
		{ &Z_Construct_UFunction_UAnimInstance_GetTimeToClosestMarker, "GetTimeToClosestMarker" }, // 3603579427
		{ &Z_Construct_UFunction_UAnimInstance_HasMarkerBeenHitThisFrame, "HasMarkerBeenHitThisFrame" }, // 3491119113
		{ &Z_Construct_UFunction_UAnimInstance_IsAnyMontagePlaying, "IsAnyMontagePlaying" }, // 3216292851
		{ &Z_Construct_UFunction_UAnimInstance_IsPlayingSlotAnimation, "IsPlayingSlotAnimation" }, // 2879344463
		{ &Z_Construct_UFunction_UAnimInstance_IsSyncGroupBetweenMarkers, "IsSyncGroupBetweenMarkers" }, // 2896563746
		{ &Z_Construct_UFunction_UAnimInstance_LinkAnimClassLayers, "LinkAnimClassLayers" }, // 1184670669
		{ &Z_Construct_UFunction_UAnimInstance_LinkAnimGraphByTag, "LinkAnimGraphByTag" }, // 916802443
		{ &Z_Construct_UFunction_UAnimInstance_LockAIResources, "LockAIResources" }, // 2366927142
		{ &Z_Construct_UFunction_UAnimInstance_Montage_GetBlendTime, "Montage_GetBlendTime" }, // 323339821
		{ &Z_Construct_UFunction_UAnimInstance_Montage_GetCurrentSection, "Montage_GetCurrentSection" }, // 218788984
		{ &Z_Construct_UFunction_UAnimInstance_Montage_GetIsStopped, "Montage_GetIsStopped" }, // 868079230
		{ &Z_Construct_UFunction_UAnimInstance_Montage_GetPlayRate, "Montage_GetPlayRate" }, // 2058278582
		{ &Z_Construct_UFunction_UAnimInstance_Montage_GetPosition, "Montage_GetPosition" }, // 3540272695
		{ &Z_Construct_UFunction_UAnimInstance_Montage_IsActive, "Montage_IsActive" }, // 1019207832
		{ &Z_Construct_UFunction_UAnimInstance_Montage_IsPlaying, "Montage_IsPlaying" }, // 387505754
		{ &Z_Construct_UFunction_UAnimInstance_Montage_JumpToSection, "Montage_JumpToSection" }, // 3916190799
		{ &Z_Construct_UFunction_UAnimInstance_Montage_JumpToSectionsEnd, "Montage_JumpToSectionsEnd" }, // 2254896832
		{ &Z_Construct_UFunction_UAnimInstance_Montage_Pause, "Montage_Pause" }, // 1410982890
		{ &Z_Construct_UFunction_UAnimInstance_Montage_Play, "Montage_Play" }, // 1690155757
		{ &Z_Construct_UFunction_UAnimInstance_Montage_Resume, "Montage_Resume" }, // 2805905651
		{ &Z_Construct_UFunction_UAnimInstance_Montage_SetNextSection, "Montage_SetNextSection" }, // 2686379128
		{ &Z_Construct_UFunction_UAnimInstance_Montage_SetPlayRate, "Montage_SetPlayRate" }, // 3476171215
		{ &Z_Construct_UFunction_UAnimInstance_Montage_SetPosition, "Montage_SetPosition" }, // 3195301854
		{ &Z_Construct_UFunction_UAnimInstance_Montage_Stop, "Montage_Stop" }, // 3670974398
		{ &Z_Construct_UFunction_UAnimInstance_Montage_StopGroupByName, "Montage_StopGroupByName" }, // 2083429105
		{ &Z_Construct_UFunction_UAnimInstance_PlaySlotAnimation, "PlaySlotAnimation" }, // 3439718452
		{ &Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage, "PlaySlotAnimationAsDynamicMontage" }, // 1938838829
		{ &Z_Construct_UFunction_UAnimInstance_ResetDynamics, "ResetDynamics" }, // 1945705152
		{ &Z_Construct_UFunction_UAnimInstance_SavePoseSnapshot, "SavePoseSnapshot" }, // 3230353466
		{ &Z_Construct_UFunction_UAnimInstance_SetMorphTarget, "SetMorphTarget" }, // 2351539330
		{ &Z_Construct_UFunction_UAnimInstance_SetPropagateNotifiesToLinkedInstances, "SetPropagateNotifiesToLinkedInstances" }, // 1019963528
		{ &Z_Construct_UFunction_UAnimInstance_SetReceiveNotifiesFromLinkedInstances, "SetReceiveNotifiesFromLinkedInstances" }, // 4052540048
		{ &Z_Construct_UFunction_UAnimInstance_SetRootMotionMode, "SetRootMotionMode" }, // 2116934042
		{ &Z_Construct_UFunction_UAnimInstance_SnapshotPose, "SnapshotPose" }, // 1180806139
		{ &Z_Construct_UFunction_UAnimInstance_StopSlotAnimation, "StopSlotAnimation" }, // 640322111
		{ &Z_Construct_UFunction_UAnimInstance_TryGetPawnOwner, "TryGetPawnOwner" }, // 993341899
		{ &Z_Construct_UFunction_UAnimInstance_UnlinkAnimClassLayers, "UnlinkAnimClassLayers" }, // 4150374330
		{ &Z_Construct_UFunction_UAnimInstance_UnlockAIResources, "UnlockAIResources" }, // 4102394555
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "BlueprintType", "true" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animation/AnimInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimInstance_Statics::NewProp_ActiveAnimNotifyState_MetaData[] = {
		{ "Comment", "/** Currently Active AnimNotifyState, stored as a copy of the event as we need to\n\x09\x09""call NotifyEnd on the event after a deletion in the editor. After this the event\n\x09\x09is removed correctly. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Currently Active AnimNotifyState, stored as a copy of the event as we need to\n              call NotifyEnd on the event after a deletion in the editor. After this the event\n              is removed correctly." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimInstance_Statics::NewProp_ActiveAnimNotifyState = { "ActiveAnimNotifyState", nullptr, (EPropertyFlags)0x0010008000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimInstance, ActiveAnimNotifyState), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimInstance_Statics::NewProp_ActiveAnimNotifyState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstance_Statics::NewProp_ActiveAnimNotifyState_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimInstance_Statics::NewProp_ActiveAnimNotifyState_Inner = { "ActiveAnimNotifyState", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAnimNotifyEvent, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimInstance_Statics::NewProp_NotifyQueue_MetaData[] = {
		{ "Comment", "/** Animation Notifies that has been triggered in the latest tick **/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Animation Notifies that has been triggered in the latest tick *" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimInstance_Statics::NewProp_NotifyQueue = { "NotifyQueue", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimInstance, NotifyQueue), Z_Construct_UScriptStruct_FAnimNotifyQueue, METADATA_PARAMS(Z_Construct_UClass_UAnimInstance_Statics::NewProp_NotifyQueue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstance_Statics::NewProp_NotifyQueue_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimInstance_Statics::NewProp_PostCompileValidationClassName_MetaData[] = {
		{ "Comment", "/** Name of Class to do Post Compile Validation.\n\x09* See Class UAnimBlueprintPostCompileValidation. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Name of Class to do Post Compile Validation.\nSee Class UAnimBlueprintPostCompileValidation." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimInstance_Statics::NewProp_PostCompileValidationClassName = { "PostCompileValidationClassName", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimInstance, PostCompileValidationClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UAnimInstance_Statics::NewProp_PostCompileValidationClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstance_Statics::NewProp_PostCompileValidationClassName_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimInstance_Statics::NewProp_OnAllMontageInstancesEnded_MetaData[] = {
		{ "Comment", "/** Called when all Montage instances have ended. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Called when all Montage instances have ended." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAnimInstance_Statics::NewProp_OnAllMontageInstancesEnded = { "OnAllMontageInstancesEnded", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimInstance, OnAllMontageInstancesEnded), Z_Construct_UDelegateFunction_Engine_OnAllMontageInstancesEndedMCDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAnimInstance_Statics::NewProp_OnAllMontageInstancesEnded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstance_Statics::NewProp_OnAllMontageInstancesEnded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimInstance_Statics::NewProp_OnMontageEnded_MetaData[] = {
		{ "Comment", "/** Called when a montage has ended, whether interrupted or finished*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Called when a montage has ended, whether interrupted or finished" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAnimInstance_Statics::NewProp_OnMontageEnded = { "OnMontageEnded", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimInstance, OnMontageEnded), Z_Construct_UDelegateFunction_Engine_OnMontageEndedMCDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAnimInstance_Statics::NewProp_OnMontageEnded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstance_Statics::NewProp_OnMontageEnded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimInstance_Statics::NewProp_OnMontageStarted_MetaData[] = {
		{ "Comment", "/** Called when a montage has started */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Called when a montage has started" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAnimInstance_Statics::NewProp_OnMontageStarted = { "OnMontageStarted", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimInstance, OnMontageStarted), Z_Construct_UDelegateFunction_Engine_OnMontageStartedMCDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAnimInstance_Statics::NewProp_OnMontageStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstance_Statics::NewProp_OnMontageStarted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimInstance_Statics::NewProp_OnMontageBlendingOut_MetaData[] = {
		{ "Comment", "/** Called when a montage starts blending out, whether interrupted or finished */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Called when a montage starts blending out, whether interrupted or finished" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAnimInstance_Statics::NewProp_OnMontageBlendingOut = { "OnMontageBlendingOut", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimInstance, OnMontageBlendingOut), Z_Construct_UDelegateFunction_Engine_OnMontageBlendingOutStartedMCDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAnimInstance_Statics::NewProp_OnMontageBlendingOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstance_Statics::NewProp_OnMontageBlendingOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimInstance_Statics::NewProp_bQueueMontageEvents_MetaData[] = {
		{ "Comment", "/** True when Montages are being ticked, and Montage Events should be queued. \n\x09 * When Montage are being ticked, we queue AnimNotifies and Events. We trigger notifies first, then Montage events. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "True when Montages are being ticked, and Montage Events should be queued.\nWhen Montage are being ticked, we queue AnimNotifies and Events. We trigger notifies first, then Montage events." },
	};
#endif
	void Z_Construct_UClass_UAnimInstance_Statics::NewProp_bQueueMontageEvents_SetBit(void* Obj)
	{
		((UAnimInstance*)Obj)->bQueueMontageEvents = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimInstance_Statics::NewProp_bQueueMontageEvents = { "bQueueMontageEvents", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAnimInstance), &Z_Construct_UClass_UAnimInstance_Statics::NewProp_bQueueMontageEvents_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimInstance_Statics::NewProp_bQueueMontageEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstance_Statics::NewProp_bQueueMontageEvents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimInstance_Statics::NewProp_bPropagateNotifiesToLinkedInstances_MetaData[] = {
		{ "Category", "Notifies" },
		{ "Comment", "/** Whether to propagate notifies to any linked anim instances */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Whether to propagate notifies to any linked anim instances" },
	};
#endif
	void Z_Construct_UClass_UAnimInstance_Statics::NewProp_bPropagateNotifiesToLinkedInstances_SetBit(void* Obj)
	{
		((UAnimInstance*)Obj)->bPropagateNotifiesToLinkedInstances = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimInstance_Statics::NewProp_bPropagateNotifiesToLinkedInstances = { "bPropagateNotifiesToLinkedInstances", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAnimInstance), &Z_Construct_UClass_UAnimInstance_Statics::NewProp_bPropagateNotifiesToLinkedInstances_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimInstance_Statics::NewProp_bPropagateNotifiesToLinkedInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstance_Statics::NewProp_bPropagateNotifiesToLinkedInstances_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimInstance_Statics::NewProp_bReceiveNotifiesFromLinkedInstances_MetaData[] = {
		{ "Category", "Notifies" },
		{ "Comment", "/** Whether to process notifies from any linked anim instances */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Whether to process notifies from any linked anim instances" },
	};
#endif
	void Z_Construct_UClass_UAnimInstance_Statics::NewProp_bReceiveNotifiesFromLinkedInstances_SetBit(void* Obj)
	{
		((UAnimInstance*)Obj)->bReceiveNotifiesFromLinkedInstances = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimInstance_Statics::NewProp_bReceiveNotifiesFromLinkedInstances = { "bReceiveNotifiesFromLinkedInstances", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAnimInstance), &Z_Construct_UClass_UAnimInstance_Statics::NewProp_bReceiveNotifiesFromLinkedInstances_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimInstance_Statics::NewProp_bReceiveNotifiesFromLinkedInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstance_Statics::NewProp_bReceiveNotifiesFromLinkedInstances_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimInstance_Statics::NewProp_bUsingCopyPoseFromMesh_MetaData[] = {
		{ "BlueprintCompilerGeneratedDefaults", "" },
		{ "Comment", "/** If this AnimInstance has nodes using 'CopyPoseFromMesh' this will be true. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "If this AnimInstance has nodes using 'CopyPoseFromMesh' this will be true." },
	};
#endif
	void Z_Construct_UClass_UAnimInstance_Statics::NewProp_bUsingCopyPoseFromMesh_SetBit(void* Obj)
	{
		((UAnimInstance*)Obj)->bUsingCopyPoseFromMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimInstance_Statics::NewProp_bUsingCopyPoseFromMesh = { "bUsingCopyPoseFromMesh", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAnimInstance), &Z_Construct_UClass_UAnimInstance_Statics::NewProp_bUsingCopyPoseFromMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimInstance_Statics::NewProp_bUsingCopyPoseFromMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstance_Statics::NewProp_bUsingCopyPoseFromMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimInstance_Statics::NewProp_bUseMultiThreadedAnimationUpdate_MetaData[] = {
		{ "BlueprintCompilerGeneratedDefaults", "" },
		{ "Comment", "/**\n\x09 * Allows this anim instance to update its native update, blend tree, montages and asset players on\n\x09 * a worker thread. This flag is propagated from the UAnimBlueprint to this instance by the compiler.\n\x09 * The compiler will attempt to pick up any issues that may occur with threaded update.\n\x09 * For updates to run in multiple threads both this flag and the project setting \"Allow Multi Threaded \n\x09 * Animation Update\" should be set.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Allows this anim instance to update its native update, blend tree, montages and asset players on\na worker thread. This flag is propagated from the UAnimBlueprint to this instance by the compiler.\nThe compiler will attempt to pick up any issues that may occur with threaded update.\nFor updates to run in multiple threads both this flag and the project setting \"Allow Multi Threaded\nAnimation Update\" should be set." },
	};
#endif
	void Z_Construct_UClass_UAnimInstance_Statics::NewProp_bUseMultiThreadedAnimationUpdate_SetBit(void* Obj)
	{
		((UAnimInstance*)Obj)->bUseMultiThreadedAnimationUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimInstance_Statics::NewProp_bUseMultiThreadedAnimationUpdate = { "bUseMultiThreadedAnimationUpdate", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAnimInstance), &Z_Construct_UClass_UAnimInstance_Statics::NewProp_bUseMultiThreadedAnimationUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimInstance_Statics::NewProp_bUseMultiThreadedAnimationUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstance_Statics::NewProp_bUseMultiThreadedAnimationUpdate_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimInstance_Statics::NewProp_bWarnAboutBlueprintUsage_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UAnimInstance_Statics::NewProp_bWarnAboutBlueprintUsage_SetBit(void* Obj)
	{
		((UAnimInstance*)Obj)->bWarnAboutBlueprintUsage_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimInstance_Statics::NewProp_bWarnAboutBlueprintUsage = { "bWarnAboutBlueprintUsage", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAnimInstance), &Z_Construct_UClass_UAnimInstance_Statics::NewProp_bWarnAboutBlueprintUsage_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimInstance_Statics::NewProp_bWarnAboutBlueprintUsage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstance_Statics::NewProp_bWarnAboutBlueprintUsage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimInstance_Statics::NewProp_bCanUseParallelUpdateAnimation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UAnimInstance_Statics::NewProp_bCanUseParallelUpdateAnimation_SetBit(void* Obj)
	{
		((UAnimInstance*)Obj)->bCanUseParallelUpdateAnimation_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimInstance_Statics::NewProp_bCanUseParallelUpdateAnimation = { "bCanUseParallelUpdateAnimation", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAnimInstance), &Z_Construct_UClass_UAnimInstance_Statics::NewProp_bCanUseParallelUpdateAnimation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimInstance_Statics::NewProp_bCanUseParallelUpdateAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstance_Statics::NewProp_bCanUseParallelUpdateAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimInstance_Statics::NewProp_bRunUpdatesInWorkerThreads_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UAnimInstance_Statics::NewProp_bRunUpdatesInWorkerThreads_SetBit(void* Obj)
	{
		((UAnimInstance*)Obj)->bRunUpdatesInWorkerThreads_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimInstance_Statics::NewProp_bRunUpdatesInWorkerThreads = { "bRunUpdatesInWorkerThreads", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAnimInstance), &Z_Construct_UClass_UAnimInstance_Statics::NewProp_bRunUpdatesInWorkerThreads_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimInstance_Statics::NewProp_bRunUpdatesInWorkerThreads_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstance_Statics::NewProp_bRunUpdatesInWorkerThreads_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimInstance_Statics::NewProp_DeltaTime_MetaData[] = {
		{ "Comment", "/** DeltaTime **/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "DeltaTime *" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimInstance_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimInstance, DeltaTime_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UAnimInstance_Statics::NewProp_DeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstance_Statics::NewProp_DeltaTime_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimInstance_Statics::NewProp_RootMotionMode_MetaData[] = {
		{ "Category", "RootMotion" },
		{ "Comment", "// Sets where this blueprint pulls Root Motion from\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Sets where this blueprint pulls Root Motion from" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimInstance_Statics::NewProp_RootMotionMode = { "RootMotionMode", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimInstance, RootMotionMode), Z_Construct_UEnum_Engine_ERootMotionMode, METADATA_PARAMS(Z_Construct_UClass_UAnimInstance_Statics::NewProp_RootMotionMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstance_Statics::NewProp_RootMotionMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimInstance_Statics::NewProp_CurrentSkeleton_MetaData[] = {
		{ "Comment", "/** This is used to extract animation. If Mesh exists, this will be overwritten by Mesh->Skeleton */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "This is used to extract animation. If Mesh exists, this will be overwritten by Mesh->Skeleton" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimInstance_Statics::NewProp_CurrentSkeleton = { "CurrentSkeleton", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimInstance, CurrentSkeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimInstance_Statics::NewProp_CurrentSkeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstance_Statics::NewProp_CurrentSkeleton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimInstance_Statics::NewProp_ActiveAnimNotifyState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimInstance_Statics::NewProp_ActiveAnimNotifyState_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimInstance_Statics::NewProp_NotifyQueue,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimInstance_Statics::NewProp_PostCompileValidationClassName,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimInstance_Statics::NewProp_OnAllMontageInstancesEnded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimInstance_Statics::NewProp_OnMontageEnded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimInstance_Statics::NewProp_OnMontageStarted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimInstance_Statics::NewProp_OnMontageBlendingOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimInstance_Statics::NewProp_bQueueMontageEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimInstance_Statics::NewProp_bPropagateNotifiesToLinkedInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimInstance_Statics::NewProp_bReceiveNotifiesFromLinkedInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimInstance_Statics::NewProp_bUsingCopyPoseFromMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimInstance_Statics::NewProp_bUseMultiThreadedAnimationUpdate,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimInstance_Statics::NewProp_bWarnAboutBlueprintUsage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimInstance_Statics::NewProp_bCanUseParallelUpdateAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimInstance_Statics::NewProp_bRunUpdatesInWorkerThreads,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimInstance_Statics::NewProp_DeltaTime,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimInstance_Statics::NewProp_RootMotionMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimInstance_Statics::NewProp_CurrentSkeleton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimInstance_Statics::ClassParams = {
		&UAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimInstance, 2885387217);
	template<> ENGINE_API UClass* StaticClass<UAnimInstance>()
	{
		return UAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimInstance(Z_Construct_UClass_UAnimInstance, &UAnimInstance::StaticClass, TEXT("/Script/Engine"), TEXT("UAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimInstance);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimInstance)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
