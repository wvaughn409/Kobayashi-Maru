// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/GameFramework/Actor.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActor() {}
// Cross Module References
	ENGINE_API UFunction* Z_Construct_USparseDelegateFunction_Engine_ActorEndPlaySignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEndPlayReason();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UFunction* Z_Construct_USparseDelegateFunction_Engine_ActorDestroyedSignature__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_USparseDelegateFunction_Engine_ActorEndTouchOverSignature__DelegateSignature();
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_ETouchIndex();
	ENGINE_API UFunction* Z_Construct_USparseDelegateFunction_Engine_ActorBeginTouchOverSignature__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchEndSignature__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchBeginSignature__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_USparseDelegateFunction_Engine_ActorOnReleasedSignature__DelegateSignature();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	ENGINE_API UFunction* Z_Construct_USparseDelegateFunction_Engine_ActorOnClickedSignature__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_USparseDelegateFunction_Engine_ActorEndCursorOverSignature__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_USparseDelegateFunction_Engine_ActorBeginCursorOverSignature__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_USparseDelegateFunction_Engine_ActorHitSignature__DelegateSignature();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UFunction* Z_Construct_USparseDelegateFunction_Engine_ActorEndOverlapSignature__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_USparseDelegateFunction_Engine_ActorBeginOverlapSignature__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_USparseDelegateFunction_Engine_TakeRadialDamageSignature__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	ENGINE_API UFunction* Z_Construct_USparseDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UFunction* Z_Construct_USparseDelegateFunction_Engine_TakeAnyDamageSignature__DelegateSignature();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EActorUpdateOverlapsMethod();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENetRole();
	ENGINE_API UClass* Z_Construct_UClass_UChildActorComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAttachLocation();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAttachmentRule();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDetachmentRule();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENetDormancy();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETickingGroup();
	ENGINE_API UClass* Z_Construct_UClass_AMatineeActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInputComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAutoReceiveInput();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESpawnActorCollisionHandlingMethod();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRepAttachment();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRepMovement();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorTickFunction();
// End Cross Module References
	struct Z_Construct_USparseDelegateFunction_Engine_ActorEndPlaySignature__DelegateSignature_Statics
	{
		struct _Script_Engine_eventActorEndPlaySignature_Parms
		{
			AActor* Actor;
			TEnumAsByte<EEndPlayReason::Type> EndPlayReason;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EndPlayReason;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_USparseDelegateFunction_Engine_ActorEndPlaySignature__DelegateSignature_Statics::NewProp_EndPlayReason = { "EndPlayReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventActorEndPlaySignature_Parms, EndPlayReason), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_Engine_ActorEndPlaySignature__DelegateSignature_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventActorEndPlaySignature_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_Engine_ActorEndPlaySignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_ActorEndPlaySignature__DelegateSignature_Statics::NewProp_EndPlayReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_ActorEndPlaySignature__DelegateSignature_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_USparseDelegateFunction_Engine_ActorEndPlaySignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_Engine_ActorEndPlaySignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "ActorEndPlaySignature__DelegateSignature", "Actor", "OnEndPlay", sizeof(_Script_Engine_eventActorEndPlaySignature_Parms), Z_Construct_USparseDelegateFunction_Engine_ActorEndPlaySignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorEndPlaySignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_USparseDelegateFunction_Engine_ActorEndPlaySignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorEndPlaySignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_USparseDelegateFunction_Engine_ActorEndPlaySignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_USparseDelegateFunction_Engine_ActorEndPlaySignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_USparseDelegateFunction_Engine_ActorDestroyedSignature__DelegateSignature_Statics
	{
		struct _Script_Engine_eventActorDestroyedSignature_Parms
		{
			AActor* DestroyedActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestroyedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_Engine_ActorDestroyedSignature__DelegateSignature_Statics::NewProp_DestroyedActor = { "DestroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventActorDestroyedSignature_Parms, DestroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_Engine_ActorDestroyedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_ActorDestroyedSignature__DelegateSignature_Statics::NewProp_DestroyedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_USparseDelegateFunction_Engine_ActorDestroyedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_Engine_ActorDestroyedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "ActorDestroyedSignature__DelegateSignature", "Actor", "OnDestroyed", sizeof(_Script_Engine_eventActorDestroyedSignature_Parms), Z_Construct_USparseDelegateFunction_Engine_ActorDestroyedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorDestroyedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_USparseDelegateFunction_Engine_ActorDestroyedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorDestroyedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_USparseDelegateFunction_Engine_ActorDestroyedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_USparseDelegateFunction_Engine_ActorDestroyedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_USparseDelegateFunction_Engine_ActorEndTouchOverSignature__DelegateSignature_Statics
	{
		struct _Script_Engine_eventActorEndTouchOverSignature_Parms
		{
			TEnumAsByte<ETouchIndex::Type> FingerIndex;
			AActor* TouchedActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TouchedActor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FingerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_Engine_ActorEndTouchOverSignature__DelegateSignature_Statics::NewProp_TouchedActor = { "TouchedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventActorEndTouchOverSignature_Parms, TouchedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_USparseDelegateFunction_Engine_ActorEndTouchOverSignature__DelegateSignature_Statics::NewProp_FingerIndex = { "FingerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventActorEndTouchOverSignature_Parms, FingerIndex), Z_Construct_UEnum_InputCore_ETouchIndex, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_Engine_ActorEndTouchOverSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_ActorEndTouchOverSignature__DelegateSignature_Statics::NewProp_TouchedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_ActorEndTouchOverSignature__DelegateSignature_Statics::NewProp_FingerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_USparseDelegateFunction_Engine_ActorEndTouchOverSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_Engine_ActorEndTouchOverSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "ActorEndTouchOverSignature__DelegateSignature", "Actor", "OnInputTouchLeave", sizeof(_Script_Engine_eventActorEndTouchOverSignature_Parms), Z_Construct_USparseDelegateFunction_Engine_ActorEndTouchOverSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorEndTouchOverSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_USparseDelegateFunction_Engine_ActorEndTouchOverSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorEndTouchOverSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_USparseDelegateFunction_Engine_ActorEndTouchOverSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_USparseDelegateFunction_Engine_ActorEndTouchOverSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_USparseDelegateFunction_Engine_ActorBeginTouchOverSignature__DelegateSignature_Statics
	{
		struct _Script_Engine_eventActorBeginTouchOverSignature_Parms
		{
			TEnumAsByte<ETouchIndex::Type> FingerIndex;
			AActor* TouchedActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TouchedActor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FingerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_Engine_ActorBeginTouchOverSignature__DelegateSignature_Statics::NewProp_TouchedActor = { "TouchedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventActorBeginTouchOverSignature_Parms, TouchedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_USparseDelegateFunction_Engine_ActorBeginTouchOverSignature__DelegateSignature_Statics::NewProp_FingerIndex = { "FingerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventActorBeginTouchOverSignature_Parms, FingerIndex), Z_Construct_UEnum_InputCore_ETouchIndex, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_Engine_ActorBeginTouchOverSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_ActorBeginTouchOverSignature__DelegateSignature_Statics::NewProp_TouchedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_ActorBeginTouchOverSignature__DelegateSignature_Statics::NewProp_FingerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_USparseDelegateFunction_Engine_ActorBeginTouchOverSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_Engine_ActorBeginTouchOverSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "ActorBeginTouchOverSignature__DelegateSignature", "Actor", "OnInputTouchEnter", sizeof(_Script_Engine_eventActorBeginTouchOverSignature_Parms), Z_Construct_USparseDelegateFunction_Engine_ActorBeginTouchOverSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorBeginTouchOverSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_USparseDelegateFunction_Engine_ActorBeginTouchOverSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorBeginTouchOverSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_USparseDelegateFunction_Engine_ActorBeginTouchOverSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_USparseDelegateFunction_Engine_ActorBeginTouchOverSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchEndSignature__DelegateSignature_Statics
	{
		struct _Script_Engine_eventActorOnInputTouchEndSignature_Parms
		{
			TEnumAsByte<ETouchIndex::Type> FingerIndex;
			AActor* TouchedActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TouchedActor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FingerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchEndSignature__DelegateSignature_Statics::NewProp_TouchedActor = { "TouchedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventActorOnInputTouchEndSignature_Parms, TouchedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchEndSignature__DelegateSignature_Statics::NewProp_FingerIndex = { "FingerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventActorOnInputTouchEndSignature_Parms, FingerIndex), Z_Construct_UEnum_InputCore_ETouchIndex, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchEndSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchEndSignature__DelegateSignature_Statics::NewProp_TouchedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchEndSignature__DelegateSignature_Statics::NewProp_FingerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchEndSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchEndSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "ActorOnInputTouchEndSignature__DelegateSignature", "Actor", "OnInputTouchEnd", sizeof(_Script_Engine_eventActorOnInputTouchEndSignature_Parms), Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchEndSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchEndSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchEndSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchEndSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchEndSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchEndSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchBeginSignature__DelegateSignature_Statics
	{
		struct _Script_Engine_eventActorOnInputTouchBeginSignature_Parms
		{
			TEnumAsByte<ETouchIndex::Type> FingerIndex;
			AActor* TouchedActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TouchedActor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FingerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchBeginSignature__DelegateSignature_Statics::NewProp_TouchedActor = { "TouchedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventActorOnInputTouchBeginSignature_Parms, TouchedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchBeginSignature__DelegateSignature_Statics::NewProp_FingerIndex = { "FingerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventActorOnInputTouchBeginSignature_Parms, FingerIndex), Z_Construct_UEnum_InputCore_ETouchIndex, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchBeginSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchBeginSignature__DelegateSignature_Statics::NewProp_TouchedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchBeginSignature__DelegateSignature_Statics::NewProp_FingerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchBeginSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchBeginSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "ActorOnInputTouchBeginSignature__DelegateSignature", "Actor", "OnInputTouchBegin", sizeof(_Script_Engine_eventActorOnInputTouchBeginSignature_Parms), Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchBeginSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchBeginSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchBeginSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchBeginSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchBeginSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchBeginSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_USparseDelegateFunction_Engine_ActorOnReleasedSignature__DelegateSignature_Statics
	{
		struct _Script_Engine_eventActorOnReleasedSignature_Parms
		{
			AActor* TouchedActor;
			FKey ButtonReleased;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonReleased;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TouchedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_USparseDelegateFunction_Engine_ActorOnReleasedSignature__DelegateSignature_Statics::NewProp_ButtonReleased = { "ButtonReleased", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventActorOnReleasedSignature_Parms, ButtonReleased), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_Engine_ActorOnReleasedSignature__DelegateSignature_Statics::NewProp_TouchedActor = { "TouchedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventActorOnReleasedSignature_Parms, TouchedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_Engine_ActorOnReleasedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_ActorOnReleasedSignature__DelegateSignature_Statics::NewProp_ButtonReleased,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_ActorOnReleasedSignature__DelegateSignature_Statics::NewProp_TouchedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_USparseDelegateFunction_Engine_ActorOnReleasedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_Engine_ActorOnReleasedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "ActorOnReleasedSignature__DelegateSignature", "Actor", "OnReleased", sizeof(_Script_Engine_eventActorOnReleasedSignature_Parms), Z_Construct_USparseDelegateFunction_Engine_ActorOnReleasedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorOnReleasedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_USparseDelegateFunction_Engine_ActorOnReleasedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorOnReleasedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_USparseDelegateFunction_Engine_ActorOnReleasedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_USparseDelegateFunction_Engine_ActorOnReleasedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_USparseDelegateFunction_Engine_ActorOnClickedSignature__DelegateSignature_Statics
	{
		struct _Script_Engine_eventActorOnClickedSignature_Parms
		{
			AActor* TouchedActor;
			FKey ButtonPressed;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonPressed;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TouchedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_USparseDelegateFunction_Engine_ActorOnClickedSignature__DelegateSignature_Statics::NewProp_ButtonPressed = { "ButtonPressed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventActorOnClickedSignature_Parms, ButtonPressed), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_Engine_ActorOnClickedSignature__DelegateSignature_Statics::NewProp_TouchedActor = { "TouchedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventActorOnClickedSignature_Parms, TouchedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_Engine_ActorOnClickedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_ActorOnClickedSignature__DelegateSignature_Statics::NewProp_ButtonPressed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_ActorOnClickedSignature__DelegateSignature_Statics::NewProp_TouchedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_USparseDelegateFunction_Engine_ActorOnClickedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_Engine_ActorOnClickedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "ActorOnClickedSignature__DelegateSignature", "Actor", "OnClicked", sizeof(_Script_Engine_eventActorOnClickedSignature_Parms), Z_Construct_USparseDelegateFunction_Engine_ActorOnClickedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorOnClickedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_USparseDelegateFunction_Engine_ActorOnClickedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorOnClickedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_USparseDelegateFunction_Engine_ActorOnClickedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_USparseDelegateFunction_Engine_ActorOnClickedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_USparseDelegateFunction_Engine_ActorEndCursorOverSignature__DelegateSignature_Statics
	{
		struct _Script_Engine_eventActorEndCursorOverSignature_Parms
		{
			AActor* TouchedActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TouchedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_Engine_ActorEndCursorOverSignature__DelegateSignature_Statics::NewProp_TouchedActor = { "TouchedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventActorEndCursorOverSignature_Parms, TouchedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_Engine_ActorEndCursorOverSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_ActorEndCursorOverSignature__DelegateSignature_Statics::NewProp_TouchedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_USparseDelegateFunction_Engine_ActorEndCursorOverSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_Engine_ActorEndCursorOverSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "ActorEndCursorOverSignature__DelegateSignature", "Actor", "OnEndCursorOver", sizeof(_Script_Engine_eventActorEndCursorOverSignature_Parms), Z_Construct_USparseDelegateFunction_Engine_ActorEndCursorOverSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorEndCursorOverSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_USparseDelegateFunction_Engine_ActorEndCursorOverSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorEndCursorOverSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_USparseDelegateFunction_Engine_ActorEndCursorOverSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_USparseDelegateFunction_Engine_ActorEndCursorOverSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_USparseDelegateFunction_Engine_ActorBeginCursorOverSignature__DelegateSignature_Statics
	{
		struct _Script_Engine_eventActorBeginCursorOverSignature_Parms
		{
			AActor* TouchedActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TouchedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_Engine_ActorBeginCursorOverSignature__DelegateSignature_Statics::NewProp_TouchedActor = { "TouchedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventActorBeginCursorOverSignature_Parms, TouchedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_Engine_ActorBeginCursorOverSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_ActorBeginCursorOverSignature__DelegateSignature_Statics::NewProp_TouchedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_USparseDelegateFunction_Engine_ActorBeginCursorOverSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_Engine_ActorBeginCursorOverSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "ActorBeginCursorOverSignature__DelegateSignature", "Actor", "OnBeginCursorOver", sizeof(_Script_Engine_eventActorBeginCursorOverSignature_Parms), Z_Construct_USparseDelegateFunction_Engine_ActorBeginCursorOverSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorBeginCursorOverSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_USparseDelegateFunction_Engine_ActorBeginCursorOverSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorBeginCursorOverSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_USparseDelegateFunction_Engine_ActorBeginCursorOverSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_USparseDelegateFunction_Engine_ActorBeginCursorOverSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_USparseDelegateFunction_Engine_ActorHitSignature__DelegateSignature_Statics
	{
		struct _Script_Engine_eventActorHitSignature_Parms
		{
			AActor* SelfActor;
			AActor* OtherActor;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelfActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_USparseDelegateFunction_Engine_ActorHitSignature__DelegateSignature_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_USparseDelegateFunction_Engine_ActorHitSignature__DelegateSignature_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventActorHitSignature_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_USparseDelegateFunction_Engine_ActorHitSignature__DelegateSignature_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorHitSignature__DelegateSignature_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_USparseDelegateFunction_Engine_ActorHitSignature__DelegateSignature_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventActorHitSignature_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_Engine_ActorHitSignature__DelegateSignature_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventActorHitSignature_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_Engine_ActorHitSignature__DelegateSignature_Statics::NewProp_SelfActor = { "SelfActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventActorHitSignature_Parms, SelfActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_Engine_ActorHitSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_ActorHitSignature__DelegateSignature_Statics::NewProp_Hit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_ActorHitSignature__DelegateSignature_Statics::NewProp_NormalImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_ActorHitSignature__DelegateSignature_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_ActorHitSignature__DelegateSignature_Statics::NewProp_SelfActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_USparseDelegateFunction_Engine_ActorHitSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_Engine_ActorHitSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "ActorHitSignature__DelegateSignature", "Actor", "OnActorHit", sizeof(_Script_Engine_eventActorHitSignature_Parms), Z_Construct_USparseDelegateFunction_Engine_ActorHitSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorHitSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_USparseDelegateFunction_Engine_ActorHitSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorHitSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_USparseDelegateFunction_Engine_ActorHitSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_USparseDelegateFunction_Engine_ActorHitSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_USparseDelegateFunction_Engine_ActorEndOverlapSignature__DelegateSignature_Statics
	{
		struct _Script_Engine_eventActorEndOverlapSignature_Parms
		{
			AActor* OverlappedActor;
			AActor* OtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_Engine_ActorEndOverlapSignature__DelegateSignature_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventActorEndOverlapSignature_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_Engine_ActorEndOverlapSignature__DelegateSignature_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventActorEndOverlapSignature_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_Engine_ActorEndOverlapSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_ActorEndOverlapSignature__DelegateSignature_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_ActorEndOverlapSignature__DelegateSignature_Statics::NewProp_OverlappedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_USparseDelegateFunction_Engine_ActorEndOverlapSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_Engine_ActorEndOverlapSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "ActorEndOverlapSignature__DelegateSignature", "Actor", "OnActorEndOverlap", sizeof(_Script_Engine_eventActorEndOverlapSignature_Parms), Z_Construct_USparseDelegateFunction_Engine_ActorEndOverlapSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorEndOverlapSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_USparseDelegateFunction_Engine_ActorEndOverlapSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorEndOverlapSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_USparseDelegateFunction_Engine_ActorEndOverlapSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_USparseDelegateFunction_Engine_ActorEndOverlapSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_USparseDelegateFunction_Engine_ActorBeginOverlapSignature__DelegateSignature_Statics
	{
		struct _Script_Engine_eventActorBeginOverlapSignature_Parms
		{
			AActor* OverlappedActor;
			AActor* OtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_Engine_ActorBeginOverlapSignature__DelegateSignature_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventActorBeginOverlapSignature_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_Engine_ActorBeginOverlapSignature__DelegateSignature_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventActorBeginOverlapSignature_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_Engine_ActorBeginOverlapSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_ActorBeginOverlapSignature__DelegateSignature_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_ActorBeginOverlapSignature__DelegateSignature_Statics::NewProp_OverlappedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_USparseDelegateFunction_Engine_ActorBeginOverlapSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_Engine_ActorBeginOverlapSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "ActorBeginOverlapSignature__DelegateSignature", "Actor", "OnActorBeginOverlap", sizeof(_Script_Engine_eventActorBeginOverlapSignature_Parms), Z_Construct_USparseDelegateFunction_Engine_ActorBeginOverlapSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorBeginOverlapSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_USparseDelegateFunction_Engine_ActorBeginOverlapSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorBeginOverlapSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_USparseDelegateFunction_Engine_ActorBeginOverlapSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_USparseDelegateFunction_Engine_ActorBeginOverlapSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_USparseDelegateFunction_Engine_TakeRadialDamageSignature__DelegateSignature_Statics
	{
		struct _Script_Engine_eventTakeRadialDamageSignature_Parms
		{
			AActor* DamagedActor;
			float Damage;
			const UDamageType* DamageType;
			FVector Origin;
			FHitResult HitInfo;
			AController* InstigatedBy;
			AActor* DamageCauser;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitInfo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Origin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_Engine_TakeRadialDamageSignature__DelegateSignature_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventTakeRadialDamageSignature_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_Engine_TakeRadialDamageSignature__DelegateSignature_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventTakeRadialDamageSignature_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_USparseDelegateFunction_Engine_TakeRadialDamageSignature__DelegateSignature_Statics::NewProp_HitInfo = { "HitInfo", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventTakeRadialDamageSignature_Parms, HitInfo), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_USparseDelegateFunction_Engine_TakeRadialDamageSignature__DelegateSignature_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventTakeRadialDamageSignature_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_USparseDelegateFunction_Engine_TakeRadialDamageSignature__DelegateSignature_Statics::NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_Engine_TakeRadialDamageSignature__DelegateSignature_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventTakeRadialDamageSignature_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_USparseDelegateFunction_Engine_TakeRadialDamageSignature__DelegateSignature_Statics::NewProp_DamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_TakeRadialDamageSignature__DelegateSignature_Statics::NewProp_DamageType_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_USparseDelegateFunction_Engine_TakeRadialDamageSignature__DelegateSignature_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventTakeRadialDamageSignature_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_Engine_TakeRadialDamageSignature__DelegateSignature_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventTakeRadialDamageSignature_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_Engine_TakeRadialDamageSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_TakeRadialDamageSignature__DelegateSignature_Statics::NewProp_DamageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_TakeRadialDamageSignature__DelegateSignature_Statics::NewProp_InstigatedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_TakeRadialDamageSignature__DelegateSignature_Statics::NewProp_HitInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_TakeRadialDamageSignature__DelegateSignature_Statics::NewProp_Origin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_TakeRadialDamageSignature__DelegateSignature_Statics::NewProp_DamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_TakeRadialDamageSignature__DelegateSignature_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_TakeRadialDamageSignature__DelegateSignature_Statics::NewProp_DamagedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_USparseDelegateFunction_Engine_TakeRadialDamageSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_Engine_TakeRadialDamageSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "TakeRadialDamageSignature__DelegateSignature", "Actor", "OnTakeRadialDamage", sizeof(_Script_Engine_eventTakeRadialDamageSignature_Parms), Z_Construct_USparseDelegateFunction_Engine_TakeRadialDamageSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_TakeRadialDamageSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_USparseDelegateFunction_Engine_TakeRadialDamageSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_TakeRadialDamageSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_USparseDelegateFunction_Engine_TakeRadialDamageSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_USparseDelegateFunction_Engine_TakeRadialDamageSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_USparseDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature_Statics
	{
		struct _Script_Engine_eventTakePointDamageSignature_Parms
		{
			AActor* DamagedActor;
			float Damage;
			AController* InstigatedBy;
			FVector HitLocation;
			UPrimitiveComponent* FHitComponent;
			FName BoneName;
			FVector ShotFromDirection;
			const UDamageType* DamageType;
			AActor* DamageCauser;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShotFromDirection;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FHitComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FHitComponent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitLocation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventTakePointDamageSignature_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_USparseDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature_Statics::NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventTakePointDamageSignature_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_USparseDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature_Statics::NewProp_DamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature_Statics::NewProp_DamageType_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_USparseDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature_Statics::NewProp_ShotFromDirection = { "ShotFromDirection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventTakePointDamageSignature_Parms, ShotFromDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_USparseDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventTakePointDamageSignature_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_USparseDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature_Statics::NewProp_FHitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature_Statics::NewProp_FHitComponent = { "FHitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventTakePointDamageSignature_Parms, FHitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_USparseDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature_Statics::NewProp_FHitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature_Statics::NewProp_FHitComponent_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_USparseDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventTakePointDamageSignature_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventTakePointDamageSignature_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_USparseDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventTakePointDamageSignature_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventTakePointDamageSignature_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature_Statics::NewProp_DamageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature_Statics::NewProp_DamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature_Statics::NewProp_ShotFromDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature_Statics::NewProp_BoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature_Statics::NewProp_FHitComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature_Statics::NewProp_HitLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature_Statics::NewProp_InstigatedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature_Statics::NewProp_DamagedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_USparseDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "TakePointDamageSignature__DelegateSignature", "Actor", "OnTakePointDamage", sizeof(_Script_Engine_eventTakePointDamageSignature_Parms), Z_Construct_USparseDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_USparseDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_USparseDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_USparseDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_USparseDelegateFunction_Engine_TakeAnyDamageSignature__DelegateSignature_Statics
	{
		struct _Script_Engine_eventTakeAnyDamageSignature_Parms
		{
			AActor* DamagedActor;
			float Damage;
			const UDamageType* DamageType;
			AController* InstigatedBy;
			AActor* DamageCauser;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_Engine_TakeAnyDamageSignature__DelegateSignature_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventTakeAnyDamageSignature_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_Engine_TakeAnyDamageSignature__DelegateSignature_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventTakeAnyDamageSignature_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_USparseDelegateFunction_Engine_TakeAnyDamageSignature__DelegateSignature_Statics::NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_Engine_TakeAnyDamageSignature__DelegateSignature_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventTakeAnyDamageSignature_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_USparseDelegateFunction_Engine_TakeAnyDamageSignature__DelegateSignature_Statics::NewProp_DamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_TakeAnyDamageSignature__DelegateSignature_Statics::NewProp_DamageType_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_USparseDelegateFunction_Engine_TakeAnyDamageSignature__DelegateSignature_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventTakeAnyDamageSignature_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_Engine_TakeAnyDamageSignature__DelegateSignature_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventTakeAnyDamageSignature_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_Engine_TakeAnyDamageSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_TakeAnyDamageSignature__DelegateSignature_Statics::NewProp_DamageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_TakeAnyDamageSignature__DelegateSignature_Statics::NewProp_InstigatedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_TakeAnyDamageSignature__DelegateSignature_Statics::NewProp_DamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_TakeAnyDamageSignature__DelegateSignature_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_TakeAnyDamageSignature__DelegateSignature_Statics::NewProp_DamagedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_USparseDelegateFunction_Engine_TakeAnyDamageSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Delegate signatures\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Delegate signatures" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_Engine_TakeAnyDamageSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "TakeAnyDamageSignature__DelegateSignature", "Actor", "OnTakeAnyDamage", sizeof(_Script_Engine_eventTakeAnyDamageSignature_Parms), Z_Construct_USparseDelegateFunction_Engine_TakeAnyDamageSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_TakeAnyDamageSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_USparseDelegateFunction_Engine_TakeAnyDamageSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_TakeAnyDamageSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_USparseDelegateFunction_Engine_TakeAnyDamageSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_USparseDelegateFunction_Engine_TakeAnyDamageSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EActorUpdateOverlapsMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EActorUpdateOverlapsMethod, Z_Construct_UPackage__Script_Engine(), TEXT("EActorUpdateOverlapsMethod"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EActorUpdateOverlapsMethod>()
	{
		return EActorUpdateOverlapsMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EActorUpdateOverlapsMethod(EActorUpdateOverlapsMethod_StaticEnum, TEXT("/Script/Engine"), TEXT("EActorUpdateOverlapsMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EActorUpdateOverlapsMethod_Hash() { return 3465113802U; }
	UEnum* Z_Construct_UEnum_Engine_EActorUpdateOverlapsMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EActorUpdateOverlapsMethod"), 0, Get_Z_Construct_UEnum_Engine_EActorUpdateOverlapsMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EActorUpdateOverlapsMethod::UseConfigDefault", (int64)EActorUpdateOverlapsMethod::UseConfigDefault },
				{ "EActorUpdateOverlapsMethod::AlwaysUpdate", (int64)EActorUpdateOverlapsMethod::AlwaysUpdate },
				{ "EActorUpdateOverlapsMethod::OnlyUpdateMovable", (int64)EActorUpdateOverlapsMethod::OnlyUpdateMovable },
				{ "EActorUpdateOverlapsMethod::NeverUpdate", (int64)EActorUpdateOverlapsMethod::NeverUpdate },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AlwaysUpdate.Comment", "// Use the default value specified by the native class or config value.\n" },
				{ "AlwaysUpdate.Name", "EActorUpdateOverlapsMethod::AlwaysUpdate" },
				{ "AlwaysUpdate.ToolTip", "Use the default value specified by the native class or config value." },
				{ "BlueprintType", "true" },
				{ "Comment", "/** Chooses a method for actors to update overlap state (objects it is touching) on initialization, currently only used during level streaming. */" },
				{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
				{ "NeverUpdate.Comment", "// Only update if root component has Movable mobility.\n" },
				{ "NeverUpdate.Name", "EActorUpdateOverlapsMethod::NeverUpdate" },
				{ "NeverUpdate.ToolTip", "Only update if root component has Movable mobility." },
				{ "OnlyUpdateMovable.Comment", "// Always update overlap state on initialization.\n" },
				{ "OnlyUpdateMovable.Name", "EActorUpdateOverlapsMethod::OnlyUpdateMovable" },
				{ "OnlyUpdateMovable.ToolTip", "Always update overlap state on initialization." },
				{ "ToolTip", "Chooses a method for actors to update overlap state (objects it is touching) on initialization, currently only used during level streaming." },
				{ "UseConfigDefault.Name", "EActorUpdateOverlapsMethod::UseConfigDefault" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EActorUpdateOverlapsMethod",
				"EActorUpdateOverlapsMethod",
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
	DEFINE_FUNCTION(AActor::execMakeNoise)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Loudness);
		P_GET_OBJECT(APawn,Z_Param_NoiseInstigator);
		P_GET_STRUCT(FVector,Z_Param_NoiseLocation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxRange);
		P_GET_PROPERTY(FNameProperty,Z_Param_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MakeNoise(Z_Param_Loudness,Z_Param_NoiseInstigator,Z_Param_NoiseLocation,Z_Param_MaxRange,Z_Param_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execGetComponentsByInterface)
	{
		P_GET_OBJECT(UClass,Z_Param_Interface);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UActorComponent*>*)Z_Param__Result=P_THIS->GetComponentsByInterface(Z_Param_Interface);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execGetComponentsByTag)
	{
		P_GET_OBJECT(UClass,Z_Param_ComponentClass);
		P_GET_PROPERTY(FNameProperty,Z_Param_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UActorComponent*>*)Z_Param__Result=P_THIS->GetComponentsByTag(Z_Param_ComponentClass,Z_Param_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execK2_GetComponentsByClass)
	{
		P_GET_OBJECT(UClass,Z_Param_ComponentClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UActorComponent*>*)Z_Param__Result=P_THIS->K2_GetComponentsByClass(Z_Param_ComponentClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execGetComponentByClass)
	{
		P_GET_OBJECT(UClass,Z_Param_ComponentClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UActorComponent**)Z_Param__Result=P_THIS->GetComponentByClass(Z_Param_ComponentClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execGetActorEyesViewPoint)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutLocation);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetActorEyesViewPoint(Z_Param_Out_OutLocation,Z_Param_Out_OutRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execPrestreamTextures)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Seconds);
		P_GET_UBOOL(Z_Param_bEnableStreaming);
		P_GET_PROPERTY(FIntProperty,Z_Param_CinematicTextureGroups);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrestreamTextures(Z_Param_Seconds,Z_Param_bEnableStreaming,Z_Param_CinematicTextureGroups);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execForceNetUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ForceNetUpdate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execWasRecentlyRendered)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Tolerance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->WasRecentlyRendered(Z_Param_Tolerance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execSetTickGroup)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_NewTickGroup);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTickGroup(ETickingGroup(Z_Param_NewTickGroup));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execGetAttachedActors)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors);
		P_GET_UBOOL(Z_Param_bResetArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAttachedActors(Z_Param_Out_OutActors,Z_Param_bResetArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execGetAttachParentSocketName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetAttachParentSocketName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execGetAttachParentActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetAttachParentActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execK2_TeleportTo)
	{
		P_GET_STRUCT(FVector,Z_Param_DestLocation);
		P_GET_STRUCT(FRotator,Z_Param_DestRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->K2_TeleportTo(Z_Param_DestLocation,Z_Param_DestRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execGetParentActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetParentActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execGetParentComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UChildActorComponent**)Z_Param__Result=P_THIS->GetParentComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execGetAllChildActors)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ChildActors);
		P_GET_UBOOL(Z_Param_bIncludeDescendants);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllChildActors(Z_Param_Out_ChildActors,Z_Param_bIncludeDescendants);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execIsChildActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsChildActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execFlushNetDormancy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FlushNetDormancy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execSetNetDormancy)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_NewDormancy);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNetDormancy(ENetDormancy(Z_Param_NewDormancy));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execIsOverlappingActor)
	{
		P_GET_OBJECT(AActor,Z_Param_Other);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsOverlappingActor(Z_Param_Other);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execGetOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetOwner();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execSetOwner)
	{
		P_GET_OBJECT(AActor,Z_Param_NewOwner);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOwner(Z_Param_NewOwner);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execOnRep_ReplicatedMovement)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ReplicatedMovement();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execGetActorTickInterval)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetActorTickInterval();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execSetActorTickInterval)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TickInterval);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActorTickInterval(Z_Param_TickInterval);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execIsActorTickEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActorTickEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execSetActorTickEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActorTickEnabled(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execGetLifeSpan)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetLifeSpan();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execSetLifeSpan)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InLifespan);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLifeSpan(Z_Param_InLifespan);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execGetOverlappingComponents)
	{
		P_GET_TARRAY_REF(UPrimitiveComponent*,Z_Param_Out_OverlappingComponents);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetOverlappingComponents(Z_Param_Out_OverlappingComponents);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execGetOverlappingActors)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OverlappingActors);
		P_GET_OBJECT(UClass,Z_Param_ClassFilter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetOverlappingActors(Z_Param_Out_OverlappingActors,Z_Param_ClassFilter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execIsActorBeingDestroyed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActorBeingDestroyed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execGetGameTimeSinceCreation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetGameTimeSinceCreation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execMakeMIDForMaterial)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_Parent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->MakeMIDForMaterial(Z_Param_Parent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execSetTickableWhenPaused)
	{
		P_GET_UBOOL(Z_Param_bTickableWhenPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTickableWhenPaused(Z_Param_bTickableWhenPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execGetTickableWhenPaused)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetTickableWhenPaused();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execRemoveTickPrerequisiteComponent)
	{
		P_GET_OBJECT(UActorComponent,Z_Param_PrerequisiteComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveTickPrerequisiteComponent(Z_Param_PrerequisiteComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execRemoveTickPrerequisiteActor)
	{
		P_GET_OBJECT(AActor,Z_Param_PrerequisiteActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveTickPrerequisiteActor(Z_Param_PrerequisiteActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execAddTickPrerequisiteComponent)
	{
		P_GET_OBJECT(UActorComponent,Z_Param_PrerequisiteComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddTickPrerequisiteComponent(Z_Param_PrerequisiteComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execAddTickPrerequisiteActor)
	{
		P_GET_OBJECT(AActor,Z_Param_PrerequisiteActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddTickPrerequisiteActor(Z_Param_PrerequisiteActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execGetActorTimeDilation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetActorTimeDilation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execActorHasTag)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ActorHasTag(Z_Param_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execK2_DetachFromActor)
	{
		P_GET_ENUM(EDetachmentRule,Z_Param_LocationRule);
		P_GET_ENUM(EDetachmentRule,Z_Param_RotationRule);
		P_GET_ENUM(EDetachmentRule,Z_Param_ScaleRule);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_DetachFromActor(EDetachmentRule(Z_Param_LocationRule),EDetachmentRule(Z_Param_RotationRule),EDetachmentRule(Z_Param_ScaleRule));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execDetachRootComponentFromParent)
	{
		P_GET_UBOOL(Z_Param_bMaintainWorldPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DetachRootComponentFromParent(Z_Param_bMaintainWorldPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execSnapRootComponentTo)
	{
		P_GET_OBJECT(AActor,Z_Param_InParentActor);
		P_GET_PROPERTY(FNameProperty,Z_Param_InSocketName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SnapRootComponentTo(Z_Param_InParentActor,Z_Param_InSocketName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execK2_AttachToActor)
	{
		P_GET_OBJECT(AActor,Z_Param_ParentActor);
		P_GET_PROPERTY(FNameProperty,Z_Param_SocketName);
		P_GET_ENUM(EAttachmentRule,Z_Param_LocationRule);
		P_GET_ENUM(EAttachmentRule,Z_Param_RotationRule);
		P_GET_ENUM(EAttachmentRule,Z_Param_ScaleRule);
		P_GET_UBOOL(Z_Param_bWeldSimulatedBodies);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_AttachToActor(Z_Param_ParentActor,Z_Param_SocketName,EAttachmentRule(Z_Param_LocationRule),EAttachmentRule(Z_Param_RotationRule),EAttachmentRule(Z_Param_ScaleRule),Z_Param_bWeldSimulatedBodies);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execK2_AttachRootComponentToActor)
	{
		P_GET_OBJECT(AActor,Z_Param_InParentActor);
		P_GET_PROPERTY(FNameProperty,Z_Param_InSocketName);
		P_GET_PROPERTY(FByteProperty,Z_Param_AttachLocationType);
		P_GET_UBOOL(Z_Param_bWeldSimulatedBodies);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_AttachRootComponentToActor(Z_Param_InParentActor,Z_Param_InSocketName,EAttachLocation::Type(Z_Param_AttachLocationType),Z_Param_bWeldSimulatedBodies);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execK2_AttachToComponent)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_Parent);
		P_GET_PROPERTY(FNameProperty,Z_Param_SocketName);
		P_GET_ENUM(EAttachmentRule,Z_Param_LocationRule);
		P_GET_ENUM(EAttachmentRule,Z_Param_RotationRule);
		P_GET_ENUM(EAttachmentRule,Z_Param_ScaleRule);
		P_GET_UBOOL(Z_Param_bWeldSimulatedBodies);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_AttachToComponent(Z_Param_Parent,Z_Param_SocketName,EAttachmentRule(Z_Param_LocationRule),EAttachmentRule(Z_Param_RotationRule),EAttachmentRule(Z_Param_ScaleRule),Z_Param_bWeldSimulatedBodies);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execK2_AttachRootComponentTo)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_InParent);
		P_GET_PROPERTY(FNameProperty,Z_Param_InSocketName);
		P_GET_PROPERTY(FByteProperty,Z_Param_AttachLocationType);
		P_GET_UBOOL(Z_Param_bWeldSimulatedBodies);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_AttachRootComponentTo(Z_Param_InParent,Z_Param_InSocketName,EAttachLocation::Type(Z_Param_AttachLocationType),Z_Param_bWeldSimulatedBodies);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execK2_DestroyComponent)
	{
		P_GET_OBJECT(UActorComponent,Z_Param_Component);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_DestroyComponent(Z_Param_Component);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execAddComponent)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_TemplateName);
		P_GET_UBOOL(Z_Param_bManualAttachment);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_RelativeTransform);
		P_GET_OBJECT(UObject,Z_Param_ComponentTemplateContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UActorComponent**)Z_Param__Result=P_THIS->AddComponent(Z_Param_TemplateName,Z_Param_bManualAttachment,Z_Param_Out_RelativeTransform,Z_Param_ComponentTemplateContext);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execHasAuthority)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAuthority();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execK2_DestroyActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_DestroyActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execGetActorEnableCollision)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetActorEnableCollision();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execSetActorEnableCollision)
	{
		P_GET_UBOOL(Z_Param_bNewActorEnableCollision);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActorEnableCollision(Z_Param_bNewActorEnableCollision);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execSetActorHiddenInGame)
	{
		P_GET_UBOOL(Z_Param_bNewHidden);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActorHiddenInGame(Z_Param_bNewHidden);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execGetActorRelativeScale3D)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetActorRelativeScale3D();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execSetActorRelativeScale3D)
	{
		P_GET_STRUCT(FVector,Z_Param_NewRelativeScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActorRelativeScale3D(Z_Param_NewRelativeScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execK2_SetActorRelativeTransform)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_NewRelativeTransform);
		P_GET_UBOOL(Z_Param_bSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult);
		P_GET_UBOOL(Z_Param_bTeleport);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_SetActorRelativeTransform(Z_Param_Out_NewRelativeTransform,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execK2_SetActorRelativeRotation)
	{
		P_GET_STRUCT(FRotator,Z_Param_NewRelativeRotation);
		P_GET_UBOOL(Z_Param_bSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult);
		P_GET_UBOOL(Z_Param_bTeleport);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_SetActorRelativeRotation(Z_Param_NewRelativeRotation,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execK2_SetActorRelativeLocation)
	{
		P_GET_STRUCT(FVector,Z_Param_NewRelativeLocation);
		P_GET_UBOOL(Z_Param_bSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult);
		P_GET_UBOOL(Z_Param_bTeleport);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_SetActorRelativeLocation(Z_Param_NewRelativeLocation,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execK2_AddActorLocalTransform)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_NewTransform);
		P_GET_UBOOL(Z_Param_bSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult);
		P_GET_UBOOL(Z_Param_bTeleport);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_AddActorLocalTransform(Z_Param_Out_NewTransform,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execK2_AddActorLocalRotation)
	{
		P_GET_STRUCT(FRotator,Z_Param_DeltaRotation);
		P_GET_UBOOL(Z_Param_bSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult);
		P_GET_UBOOL(Z_Param_bTeleport);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_AddActorLocalRotation(Z_Param_DeltaRotation,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execK2_AddActorLocalOffset)
	{
		P_GET_STRUCT(FVector,Z_Param_DeltaLocation);
		P_GET_UBOOL(Z_Param_bSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult);
		P_GET_UBOOL(Z_Param_bTeleport);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_AddActorLocalOffset(Z_Param_DeltaLocation,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execK2_SetActorTransform)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_NewTransform);
		P_GET_UBOOL(Z_Param_bSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult);
		P_GET_UBOOL(Z_Param_bTeleport);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->K2_SetActorTransform(Z_Param_Out_NewTransform,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execK2_AddActorWorldTransform)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_DeltaTransform);
		P_GET_UBOOL(Z_Param_bSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult);
		P_GET_UBOOL(Z_Param_bTeleport);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_AddActorWorldTransform(Z_Param_Out_DeltaTransform,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execK2_AddActorWorldRotation)
	{
		P_GET_STRUCT(FRotator,Z_Param_DeltaRotation);
		P_GET_UBOOL(Z_Param_bSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult);
		P_GET_UBOOL(Z_Param_bTeleport);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_AddActorWorldRotation(Z_Param_DeltaRotation,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execK2_AddActorWorldOffset)
	{
		P_GET_STRUCT(FVector,Z_Param_DeltaLocation);
		P_GET_UBOOL(Z_Param_bSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult);
		P_GET_UBOOL(Z_Param_bTeleport);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_AddActorWorldOffset(Z_Param_DeltaLocation,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execGetHorizontalDotProductTo)
	{
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHorizontalDotProductTo(Z_Param_OtherActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execGetDotProductTo)
	{
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDotProductTo(Z_Param_OtherActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execGetVerticalDistanceTo)
	{
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetVerticalDistanceTo(Z_Param_OtherActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execGetHorizontalDistanceTo)
	{
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHorizontalDistanceTo(Z_Param_OtherActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execGetSquaredDistanceTo)
	{
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSquaredDistanceTo(Z_Param_OtherActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execGetDistanceTo)
	{
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDistanceTo(Z_Param_OtherActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execGetActorScale3D)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetActorScale3D();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execSetActorScale3D)
	{
		P_GET_STRUCT(FVector,Z_Param_NewScale3D);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActorScale3D(Z_Param_NewScale3D);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execK2_SetActorLocationAndRotation)
	{
		P_GET_STRUCT(FVector,Z_Param_NewLocation);
		P_GET_STRUCT(FRotator,Z_Param_NewRotation);
		P_GET_UBOOL(Z_Param_bSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult);
		P_GET_UBOOL(Z_Param_bTeleport);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->K2_SetActorLocationAndRotation(Z_Param_NewLocation,Z_Param_NewRotation,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execK2_SetActorRotation)
	{
		P_GET_STRUCT(FRotator,Z_Param_NewRotation);
		P_GET_UBOOL(Z_Param_bTeleportPhysics);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->K2_SetActorRotation(Z_Param_NewRotation,Z_Param_bTeleportPhysics);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execGetVelocity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetVelocity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execK2_GetRootComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USceneComponent**)Z_Param__Result=P_THIS->K2_GetRootComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execGetActorBounds)
	{
		P_GET_UBOOL(Z_Param_bOnlyCollidingComponents);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_BoxExtent);
		P_GET_UBOOL(Z_Param_bIncludeFromChildActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetActorBounds(Z_Param_bOnlyCollidingComponents,Z_Param_Out_Origin,Z_Param_Out_BoxExtent,Z_Param_bIncludeFromChildActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execGetActorRightVector)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetActorRightVector();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execGetActorUpVector)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetActorUpVector();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execGetActorForwardVector)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetActorForwardVector();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execK2_GetActorRotation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->K2_GetActorRotation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execK2_SetActorLocation)
	{
		P_GET_STRUCT(FVector,Z_Param_NewLocation);
		P_GET_UBOOL(Z_Param_bSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult);
		P_GET_UBOOL(Z_Param_bTeleport);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->K2_SetActorLocation(Z_Param_NewLocation,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execK2_GetActorLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->K2_GetActorLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execGetTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execGetInstigatorController)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AController**)Z_Param__Result=P_THIS->GetInstigatorController();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execGetInstigator)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APawn**)Z_Param__Result=P_THIS->GetInstigator();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execGetInputVectorAxisValue)
	{
		P_GET_STRUCT(FKey,Z_Param_InputAxisKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetInputVectorAxisValue(Z_Param_InputAxisKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execGetInputAxisKeyValue)
	{
		P_GET_STRUCT(FKey,Z_Param_InputAxisKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetInputAxisKeyValue(Z_Param_InputAxisKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execGetInputAxisValue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InputAxisName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetInputAxisValue(Z_Param_InputAxisName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execDisableInput)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableInput(Z_Param_PlayerController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execEnableInput)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableInput(Z_Param_PlayerController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execOnRep_Instigator)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Instigator();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execOnRep_AttachmentReplication)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_AttachmentReplication();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execGetRemoteRole)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<ENetRole>*)Z_Param__Result=P_THIS->GetRemoteRole();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execGetLocalRole)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<ENetRole>*)Z_Param__Result=P_THIS->GetLocalRole();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execSetReplicateMovement)
	{
		P_GET_UBOOL(Z_Param_bInReplicateMovement);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetReplicateMovement(Z_Param_bInReplicateMovement);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execSetReplicates)
	{
		P_GET_UBOOL(Z_Param_bInReplicates);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetReplicates(Z_Param_bInReplicates);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execOnRep_Owner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Owner();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execSetAutoDestroyWhenFinished)
	{
		P_GET_UBOOL(Z_Param_bVal);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAutoDestroyWhenFinished(Z_Param_bVal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execTearOff)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TearOff();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execOnRep_ReplicateMovement)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ReplicateMovement();
		P_NATIVE_END;
	}
#if WITH_EDITOR
	DEFINE_FUNCTION(AActor::execSetFolderPath)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_NewFolderPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFolderPath(Z_Param_Out_NewFolderPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execGetFolderPath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetFolderPath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execSetActorLabel)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NewActorLabel);
		P_GET_UBOOL(Z_Param_bMarkDirty);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActorLabel(Z_Param_NewActorLabel,Z_Param_bMarkDirty);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execGetActorLabel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetActorLabel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execIsSelectable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSelectable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execIsEditable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEditable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execIsTemporarilyHiddenInEditor)
	{
		P_GET_UBOOL(Z_Param_bIncludeParent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTemporarilyHiddenInEditor(Z_Param_bIncludeParent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execSetIsTemporarilyHiddenInEditor)
	{
		P_GET_UBOOL(Z_Param_bIsHidden);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsTemporarilyHiddenInEditor(Z_Param_bIsHidden);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execIsHiddenEd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsHiddenEd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActor::execIsHiddenEdAtStartup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsHiddenEdAtStartup();
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	static FName NAME_AActor_K2_OnBecomeViewTarget = FName(TEXT("K2_OnBecomeViewTarget"));
	void AActor::K2_OnBecomeViewTarget(APlayerController* PC)
	{
		Actor_eventK2_OnBecomeViewTarget_Parms Parms;
		Parms.PC=PC;
		ProcessEvent(FindFunctionChecked(NAME_AActor_K2_OnBecomeViewTarget),&Parms);
	}
	static FName NAME_AActor_K2_OnEndViewTarget = FName(TEXT("K2_OnEndViewTarget"));
	void AActor::K2_OnEndViewTarget(APlayerController* PC)
	{
		Actor_eventK2_OnEndViewTarget_Parms Parms;
		Parms.PC=PC;
		ProcessEvent(FindFunctionChecked(NAME_AActor_K2_OnEndViewTarget),&Parms);
	}
	static FName NAME_AActor_K2_OnReset = FName(TEXT("K2_OnReset"));
	void AActor::K2_OnReset()
	{
		ProcessEvent(FindFunctionChecked(NAME_AActor_K2_OnReset),NULL);
	}
	static FName NAME_AActor_ReceiveActorBeginCursorOver = FName(TEXT("ReceiveActorBeginCursorOver"));
	void AActor::ReceiveActorBeginCursorOver()
	{
		ProcessEvent(FindFunctionChecked(NAME_AActor_ReceiveActorBeginCursorOver),NULL);
	}
	static FName NAME_AActor_ReceiveActorBeginOverlap = FName(TEXT("ReceiveActorBeginOverlap"));
	void AActor::ReceiveActorBeginOverlap(AActor* OtherActor)
	{
		Actor_eventReceiveActorBeginOverlap_Parms Parms;
		Parms.OtherActor=OtherActor;
		ProcessEvent(FindFunctionChecked(NAME_AActor_ReceiveActorBeginOverlap),&Parms);
	}
	static FName NAME_AActor_ReceiveActorEndCursorOver = FName(TEXT("ReceiveActorEndCursorOver"));
	void AActor::ReceiveActorEndCursorOver()
	{
		ProcessEvent(FindFunctionChecked(NAME_AActor_ReceiveActorEndCursorOver),NULL);
	}
	static FName NAME_AActor_ReceiveActorEndOverlap = FName(TEXT("ReceiveActorEndOverlap"));
	void AActor::ReceiveActorEndOverlap(AActor* OtherActor)
	{
		Actor_eventReceiveActorEndOverlap_Parms Parms;
		Parms.OtherActor=OtherActor;
		ProcessEvent(FindFunctionChecked(NAME_AActor_ReceiveActorEndOverlap),&Parms);
	}
	static FName NAME_AActor_ReceiveActorOnClicked = FName(TEXT("ReceiveActorOnClicked"));
	void AActor::ReceiveActorOnClicked(FKey ButtonPressed)
	{
		Actor_eventReceiveActorOnClicked_Parms Parms;
		Parms.ButtonPressed=ButtonPressed;
		ProcessEvent(FindFunctionChecked(NAME_AActor_ReceiveActorOnClicked),&Parms);
	}
	static FName NAME_AActor_ReceiveActorOnInputTouchBegin = FName(TEXT("ReceiveActorOnInputTouchBegin"));
	void AActor::ReceiveActorOnInputTouchBegin(const ETouchIndex::Type FingerIndex)
	{
		Actor_eventReceiveActorOnInputTouchBegin_Parms Parms;
		Parms.FingerIndex=FingerIndex;
		ProcessEvent(FindFunctionChecked(NAME_AActor_ReceiveActorOnInputTouchBegin),&Parms);
	}
	static FName NAME_AActor_ReceiveActorOnInputTouchEnd = FName(TEXT("ReceiveActorOnInputTouchEnd"));
	void AActor::ReceiveActorOnInputTouchEnd(const ETouchIndex::Type FingerIndex)
	{
		Actor_eventReceiveActorOnInputTouchEnd_Parms Parms;
		Parms.FingerIndex=FingerIndex;
		ProcessEvent(FindFunctionChecked(NAME_AActor_ReceiveActorOnInputTouchEnd),&Parms);
	}
	static FName NAME_AActor_ReceiveActorOnInputTouchEnter = FName(TEXT("ReceiveActorOnInputTouchEnter"));
	void AActor::ReceiveActorOnInputTouchEnter(const ETouchIndex::Type FingerIndex)
	{
		Actor_eventReceiveActorOnInputTouchEnter_Parms Parms;
		Parms.FingerIndex=FingerIndex;
		ProcessEvent(FindFunctionChecked(NAME_AActor_ReceiveActorOnInputTouchEnter),&Parms);
	}
	static FName NAME_AActor_ReceiveActorOnInputTouchLeave = FName(TEXT("ReceiveActorOnInputTouchLeave"));
	void AActor::ReceiveActorOnInputTouchLeave(const ETouchIndex::Type FingerIndex)
	{
		Actor_eventReceiveActorOnInputTouchLeave_Parms Parms;
		Parms.FingerIndex=FingerIndex;
		ProcessEvent(FindFunctionChecked(NAME_AActor_ReceiveActorOnInputTouchLeave),&Parms);
	}
	static FName NAME_AActor_ReceiveActorOnReleased = FName(TEXT("ReceiveActorOnReleased"));
	void AActor::ReceiveActorOnReleased(FKey ButtonReleased)
	{
		Actor_eventReceiveActorOnReleased_Parms Parms;
		Parms.ButtonReleased=ButtonReleased;
		ProcessEvent(FindFunctionChecked(NAME_AActor_ReceiveActorOnReleased),&Parms);
	}
	static FName NAME_AActor_ReceiveAnyDamage = FName(TEXT("ReceiveAnyDamage"));
	void AActor::ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser)
	{
		Actor_eventReceiveAnyDamage_Parms Parms;
		Parms.Damage=Damage;
		Parms.DamageType=DamageType;
		Parms.InstigatedBy=InstigatedBy;
		Parms.DamageCauser=DamageCauser;
		ProcessEvent(FindFunctionChecked(NAME_AActor_ReceiveAnyDamage),&Parms);
	}
	static FName NAME_AActor_ReceiveBeginPlay = FName(TEXT("ReceiveBeginPlay"));
	void AActor::ReceiveBeginPlay()
	{
		ProcessEvent(FindFunctionChecked(NAME_AActor_ReceiveBeginPlay),NULL);
	}
	static FName NAME_AActor_ReceiveDestroyed = FName(TEXT("ReceiveDestroyed"));
	void AActor::ReceiveDestroyed()
	{
		ProcessEvent(FindFunctionChecked(NAME_AActor_ReceiveDestroyed),NULL);
	}
	static FName NAME_AActor_ReceiveEndPlay = FName(TEXT("ReceiveEndPlay"));
	void AActor::ReceiveEndPlay(EEndPlayReason::Type EndPlayReason)
	{
		Actor_eventReceiveEndPlay_Parms Parms;
		Parms.EndPlayReason=EndPlayReason;
		ProcessEvent(FindFunctionChecked(NAME_AActor_ReceiveEndPlay),&Parms);
	}
	static FName NAME_AActor_ReceiveHit = FName(TEXT("ReceiveHit"));
	void AActor::ReceiveHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, FHitResult const& Hit)
	{
		Actor_eventReceiveHit_Parms Parms;
		Parms.MyComp=MyComp;
		Parms.Other=Other;
		Parms.OtherComp=OtherComp;
		Parms.bSelfMoved=bSelfMoved ? true : false;
		Parms.HitLocation=HitLocation;
		Parms.HitNormal=HitNormal;
		Parms.NormalImpulse=NormalImpulse;
		Parms.Hit=Hit;
		ProcessEvent(FindFunctionChecked(NAME_AActor_ReceiveHit),&Parms);
	}
	static FName NAME_AActor_ReceivePointDamage = FName(TEXT("ReceivePointDamage"));
	void AActor::ReceivePointDamage(float Damage, const UDamageType* DamageType, FVector HitLocation, FVector HitNormal, UPrimitiveComponent* HitComponent, FName BoneName, FVector ShotFromDirection, AController* InstigatedBy, AActor* DamageCauser, FHitResult const& HitInfo)
	{
		Actor_eventReceivePointDamage_Parms Parms;
		Parms.Damage=Damage;
		Parms.DamageType=DamageType;
		Parms.HitLocation=HitLocation;
		Parms.HitNormal=HitNormal;
		Parms.HitComponent=HitComponent;
		Parms.BoneName=BoneName;
		Parms.ShotFromDirection=ShotFromDirection;
		Parms.InstigatedBy=InstigatedBy;
		Parms.DamageCauser=DamageCauser;
		Parms.HitInfo=HitInfo;
		ProcessEvent(FindFunctionChecked(NAME_AActor_ReceivePointDamage),&Parms);
	}
	static FName NAME_AActor_ReceiveRadialDamage = FName(TEXT("ReceiveRadialDamage"));
	void AActor::ReceiveRadialDamage(float DamageReceived, const UDamageType* DamageType, FVector Origin, FHitResult const& HitInfo, AController* InstigatedBy, AActor* DamageCauser)
	{
		Actor_eventReceiveRadialDamage_Parms Parms;
		Parms.DamageReceived=DamageReceived;
		Parms.DamageType=DamageType;
		Parms.Origin=Origin;
		Parms.HitInfo=HitInfo;
		Parms.InstigatedBy=InstigatedBy;
		Parms.DamageCauser=DamageCauser;
		ProcessEvent(FindFunctionChecked(NAME_AActor_ReceiveRadialDamage),&Parms);
	}
	static FName NAME_AActor_ReceiveTick = FName(TEXT("ReceiveTick"));
	void AActor::ReceiveTick(float DeltaSeconds)
	{
		Actor_eventReceiveTick_Parms Parms;
		Parms.DeltaSeconds=DeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_AActor_ReceiveTick),&Parms);
	}
	static FName NAME_AActor_UserConstructionScript = FName(TEXT("UserConstructionScript"));
	void AActor::UserConstructionScript()
	{
		ProcessEvent(FindFunctionChecked(NAME_AActor_UserConstructionScript),NULL);
	}
	void AActor::StaticRegisterNativesAActor()
	{
		UClass* Class = AActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActorHasTag", &AActor::execActorHasTag },
			{ "AddComponent", &AActor::execAddComponent },
			{ "AddTickPrerequisiteActor", &AActor::execAddTickPrerequisiteActor },
			{ "AddTickPrerequisiteComponent", &AActor::execAddTickPrerequisiteComponent },
			{ "DetachRootComponentFromParent", &AActor::execDetachRootComponentFromParent },
			{ "DisableInput", &AActor::execDisableInput },
			{ "EnableInput", &AActor::execEnableInput },
			{ "FlushNetDormancy", &AActor::execFlushNetDormancy },
			{ "ForceNetUpdate", &AActor::execForceNetUpdate },
			{ "GetActorBounds", &AActor::execGetActorBounds },
			{ "GetActorEnableCollision", &AActor::execGetActorEnableCollision },
			{ "GetActorEyesViewPoint", &AActor::execGetActorEyesViewPoint },
			{ "GetActorForwardVector", &AActor::execGetActorForwardVector },
#if WITH_EDITOR
			{ "GetActorLabel", &AActor::execGetActorLabel },
#endif // WITH_EDITOR
			{ "GetActorRelativeScale3D", &AActor::execGetActorRelativeScale3D },
			{ "GetActorRightVector", &AActor::execGetActorRightVector },
			{ "GetActorScale3D", &AActor::execGetActorScale3D },
			{ "GetActorTickInterval", &AActor::execGetActorTickInterval },
			{ "GetActorTimeDilation", &AActor::execGetActorTimeDilation },
			{ "GetActorUpVector", &AActor::execGetActorUpVector },
			{ "GetAllChildActors", &AActor::execGetAllChildActors },
			{ "GetAttachedActors", &AActor::execGetAttachedActors },
			{ "GetAttachParentActor", &AActor::execGetAttachParentActor },
			{ "GetAttachParentSocketName", &AActor::execGetAttachParentSocketName },
			{ "GetComponentByClass", &AActor::execGetComponentByClass },
			{ "GetComponentsByInterface", &AActor::execGetComponentsByInterface },
			{ "GetComponentsByTag", &AActor::execGetComponentsByTag },
			{ "GetDistanceTo", &AActor::execGetDistanceTo },
			{ "GetDotProductTo", &AActor::execGetDotProductTo },
#if WITH_EDITOR
			{ "GetFolderPath", &AActor::execGetFolderPath },
#endif // WITH_EDITOR
			{ "GetGameTimeSinceCreation", &AActor::execGetGameTimeSinceCreation },
			{ "GetHorizontalDistanceTo", &AActor::execGetHorizontalDistanceTo },
			{ "GetHorizontalDotProductTo", &AActor::execGetHorizontalDotProductTo },
			{ "GetInputAxisKeyValue", &AActor::execGetInputAxisKeyValue },
			{ "GetInputAxisValue", &AActor::execGetInputAxisValue },
			{ "GetInputVectorAxisValue", &AActor::execGetInputVectorAxisValue },
			{ "GetInstigator", &AActor::execGetInstigator },
			{ "GetInstigatorController", &AActor::execGetInstigatorController },
			{ "GetLifeSpan", &AActor::execGetLifeSpan },
			{ "GetLocalRole", &AActor::execGetLocalRole },
			{ "GetOverlappingActors", &AActor::execGetOverlappingActors },
			{ "GetOverlappingComponents", &AActor::execGetOverlappingComponents },
			{ "GetOwner", &AActor::execGetOwner },
			{ "GetParentActor", &AActor::execGetParentActor },
			{ "GetParentComponent", &AActor::execGetParentComponent },
			{ "GetRemoteRole", &AActor::execGetRemoteRole },
			{ "GetSquaredDistanceTo", &AActor::execGetSquaredDistanceTo },
			{ "GetTickableWhenPaused", &AActor::execGetTickableWhenPaused },
			{ "GetTransform", &AActor::execGetTransform },
			{ "GetVelocity", &AActor::execGetVelocity },
			{ "GetVerticalDistanceTo", &AActor::execGetVerticalDistanceTo },
			{ "HasAuthority", &AActor::execHasAuthority },
			{ "IsActorBeingDestroyed", &AActor::execIsActorBeingDestroyed },
			{ "IsActorTickEnabled", &AActor::execIsActorTickEnabled },
			{ "IsChildActor", &AActor::execIsChildActor },
#if WITH_EDITOR
			{ "IsEditable", &AActor::execIsEditable },
			{ "IsHiddenEd", &AActor::execIsHiddenEd },
			{ "IsHiddenEdAtStartup", &AActor::execIsHiddenEdAtStartup },
#endif // WITH_EDITOR
			{ "IsOverlappingActor", &AActor::execIsOverlappingActor },
#if WITH_EDITOR
			{ "IsSelectable", &AActor::execIsSelectable },
			{ "IsTemporarilyHiddenInEditor", &AActor::execIsTemporarilyHiddenInEditor },
#endif // WITH_EDITOR
			{ "K2_AddActorLocalOffset", &AActor::execK2_AddActorLocalOffset },
			{ "K2_AddActorLocalRotation", &AActor::execK2_AddActorLocalRotation },
			{ "K2_AddActorLocalTransform", &AActor::execK2_AddActorLocalTransform },
			{ "K2_AddActorWorldOffset", &AActor::execK2_AddActorWorldOffset },
			{ "K2_AddActorWorldRotation", &AActor::execK2_AddActorWorldRotation },
			{ "K2_AddActorWorldTransform", &AActor::execK2_AddActorWorldTransform },
			{ "K2_AttachRootComponentTo", &AActor::execK2_AttachRootComponentTo },
			{ "K2_AttachRootComponentToActor", &AActor::execK2_AttachRootComponentToActor },
			{ "K2_AttachToActor", &AActor::execK2_AttachToActor },
			{ "K2_AttachToComponent", &AActor::execK2_AttachToComponent },
			{ "K2_DestroyActor", &AActor::execK2_DestroyActor },
			{ "K2_DestroyComponent", &AActor::execK2_DestroyComponent },
			{ "K2_DetachFromActor", &AActor::execK2_DetachFromActor },
			{ "K2_GetActorLocation", &AActor::execK2_GetActorLocation },
			{ "K2_GetActorRotation", &AActor::execK2_GetActorRotation },
			{ "K2_GetComponentsByClass", &AActor::execK2_GetComponentsByClass },
			{ "K2_GetRootComponent", &AActor::execK2_GetRootComponent },
			{ "K2_SetActorLocation", &AActor::execK2_SetActorLocation },
			{ "K2_SetActorLocationAndRotation", &AActor::execK2_SetActorLocationAndRotation },
			{ "K2_SetActorRelativeLocation", &AActor::execK2_SetActorRelativeLocation },
			{ "K2_SetActorRelativeRotation", &AActor::execK2_SetActorRelativeRotation },
			{ "K2_SetActorRelativeTransform", &AActor::execK2_SetActorRelativeTransform },
			{ "K2_SetActorRotation", &AActor::execK2_SetActorRotation },
			{ "K2_SetActorTransform", &AActor::execK2_SetActorTransform },
			{ "K2_TeleportTo", &AActor::execK2_TeleportTo },
			{ "MakeMIDForMaterial", &AActor::execMakeMIDForMaterial },
			{ "MakeNoise", &AActor::execMakeNoise },
			{ "OnRep_AttachmentReplication", &AActor::execOnRep_AttachmentReplication },
			{ "OnRep_Instigator", &AActor::execOnRep_Instigator },
			{ "OnRep_Owner", &AActor::execOnRep_Owner },
			{ "OnRep_ReplicatedMovement", &AActor::execOnRep_ReplicatedMovement },
			{ "OnRep_ReplicateMovement", &AActor::execOnRep_ReplicateMovement },
			{ "PrestreamTextures", &AActor::execPrestreamTextures },
			{ "RemoveTickPrerequisiteActor", &AActor::execRemoveTickPrerequisiteActor },
			{ "RemoveTickPrerequisiteComponent", &AActor::execRemoveTickPrerequisiteComponent },
			{ "SetActorEnableCollision", &AActor::execSetActorEnableCollision },
			{ "SetActorHiddenInGame", &AActor::execSetActorHiddenInGame },
#if WITH_EDITOR
			{ "SetActorLabel", &AActor::execSetActorLabel },
#endif // WITH_EDITOR
			{ "SetActorRelativeScale3D", &AActor::execSetActorRelativeScale3D },
			{ "SetActorScale3D", &AActor::execSetActorScale3D },
			{ "SetActorTickEnabled", &AActor::execSetActorTickEnabled },
			{ "SetActorTickInterval", &AActor::execSetActorTickInterval },
			{ "SetAutoDestroyWhenFinished", &AActor::execSetAutoDestroyWhenFinished },
#if WITH_EDITOR
			{ "SetFolderPath", &AActor::execSetFolderPath },
			{ "SetIsTemporarilyHiddenInEditor", &AActor::execSetIsTemporarilyHiddenInEditor },
#endif // WITH_EDITOR
			{ "SetLifeSpan", &AActor::execSetLifeSpan },
			{ "SetNetDormancy", &AActor::execSetNetDormancy },
			{ "SetOwner", &AActor::execSetOwner },
			{ "SetReplicateMovement", &AActor::execSetReplicateMovement },
			{ "SetReplicates", &AActor::execSetReplicates },
			{ "SetTickableWhenPaused", &AActor::execSetTickableWhenPaused },
			{ "SetTickGroup", &AActor::execSetTickGroup },
			{ "SnapRootComponentTo", &AActor::execSnapRootComponentTo },
			{ "TearOff", &AActor::execTearOff },
			{ "WasRecentlyRendered", &AActor::execWasRecentlyRendered },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AActor_ActorHasTag_Statics
	{
		struct Actor_eventActorHasTag_Parms
		{
			FName Tag;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AActor_ActorHasTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Actor_eventActorHasTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_ActorHasTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Actor_eventActorHasTag_Parms), &Z_Construct_UFunction_AActor_ActorHasTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AActor_ActorHasTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventActorHasTag_Parms, Tag), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_ActorHasTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ActorHasTag_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ActorHasTag_Statics::NewProp_Tag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_ActorHasTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities" },
		{ "Comment", "/** See if this actor's Tags array contains the supplied name tag */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "See if this actor's Tags array contains the supplied name tag" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_ActorHasTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "ActorHasTag", nullptr, nullptr, sizeof(Actor_eventActorHasTag_Parms), Z_Construct_UFunction_AActor_ActorHasTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ActorHasTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_ActorHasTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ActorHasTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_ActorHasTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_ActorHasTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_AddComponent_Statics
	{
		struct Actor_eventAddComponent_Parms
		{
			FName TemplateName;
			bool bManualAttachment;
			FTransform RelativeTransform;
			const UObject* ComponentTemplateContext;
			UActorComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentTemplateContext_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ComponentTemplateContext;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelativeTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeTransform;
		static void NewProp_bManualAttachment_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bManualAttachment;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TemplateName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_AddComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_AddComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventAddComponent_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AActor_AddComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_AddComponent_Statics::NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_AddComponent_Statics::NewProp_ComponentTemplateContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_AddComponent_Statics::NewProp_ComponentTemplateContext = { "ComponentTemplateContext", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventAddComponent_Parms, ComponentTemplateContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AActor_AddComponent_Statics::NewProp_ComponentTemplateContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_AddComponent_Statics::NewProp_ComponentTemplateContext_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_AddComponent_Statics::NewProp_RelativeTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_AddComponent_Statics::NewProp_RelativeTransform = { "RelativeTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventAddComponent_Parms, RelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_AActor_AddComponent_Statics::NewProp_RelativeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_AddComponent_Statics::NewProp_RelativeTransform_MetaData)) };
	void Z_Construct_UFunction_AActor_AddComponent_Statics::NewProp_bManualAttachment_SetBit(void* Obj)
	{
		((Actor_eventAddComponent_Parms*)Obj)->bManualAttachment = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_AddComponent_Statics::NewProp_bManualAttachment = { "bManualAttachment", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Actor_eventAddComponent_Parms), &Z_Construct_UFunction_AActor_AddComponent_Statics::NewProp_bManualAttachment_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AActor_AddComponent_Statics::NewProp_TemplateName = { "TemplateName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventAddComponent_Parms, TemplateName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_AddComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_AddComponent_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_AddComponent_Statics::NewProp_ComponentTemplateContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_AddComponent_Statics::NewProp_RelativeTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_AddComponent_Statics::NewProp_bManualAttachment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_AddComponent_Statics::NewProp_TemplateName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_AddComponent_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Comment", "/** \n\x09 * Creates a new component and assigns ownership to the Actor this is \n\x09 * called for. Automatic attachment causes the first component created to \n\x09 * become the root, and all subsequent components to be attached under that \n\x09 * root. When bManualAttachment is set, automatic attachment is \n\x09 * skipped and it is up to the user to attach the resulting component (or \n\x09 * set it up as the root) themselves.\n\x09 *\n\x09 * @see UK2Node_AddComponent\x09""DO NOT CALL MANUALLY - BLUEPRINT INTERNAL USE ONLY (for Add Component nodes)\n\x09 *\n\x09 * @param TemplateName\x09\x09\x09\x09\x09The name of the Component Template to use.\n\x09 * @param bManualAttachment\x09\x09\x09\x09Whether manual or automatic attachment is to be used\n\x09 * @param RelativeTransform\x09\x09\x09\x09The relative transform between the new component and its attach parent (automatic only)\n\x09 * @param ComponentTemplateContext\x09\x09Optional UBlueprintGeneratedClass reference to use to find the template in. If null (or not a BPGC), component is sought in this Actor's class\n\x09 */" },
		{ "DefaultToSelf", "ComponentTemplateContext" },
		{ "InternalUseParam", "ComponentTemplateContext" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ScriptNoExport", "" },
		{ "ToolTip", "Creates a new component and assigns ownership to the Actor this is\ncalled for. Automatic attachment causes the first component created to\nbecome the root, and all subsequent components to be attached under that\nroot. When bManualAttachment is set, automatic attachment is\nskipped and it is up to the user to attach the resulting component (or\nset it up as the root) themselves.\n\n@see UK2Node_AddComponent    DO NOT CALL MANUALLY - BLUEPRINT INTERNAL USE ONLY (for Add Component nodes)\n\n@param TemplateName                                  The name of the Component Template to use.\n@param bManualAttachment                             Whether manual or automatic attachment is to be used\n@param RelativeTransform                             The relative transform between the new component and its attach parent (automatic only)\n@param ComponentTemplateContext              Optional UBlueprintGeneratedClass reference to use to find the template in. If null (or not a BPGC), component is sought in this Actor's class" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_AddComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "AddComponent", nullptr, nullptr, sizeof(Actor_eventAddComponent_Parms), Z_Construct_UFunction_AActor_AddComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_AddComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_AddComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_AddComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_AddComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_AddComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_AddTickPrerequisiteActor_Statics
	{
		struct Actor_eventAddTickPrerequisiteActor_Parms
		{
			AActor* PrerequisiteActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PrerequisiteActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_AddTickPrerequisiteActor_Statics::NewProp_PrerequisiteActor = { "PrerequisiteActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventAddTickPrerequisiteActor_Parms, PrerequisiteActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_AddTickPrerequisiteActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_AddTickPrerequisiteActor_Statics::NewProp_PrerequisiteActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_AddTickPrerequisiteActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities" },
		{ "Comment", "/** Make this actor tick after PrerequisiteActor. This only applies to this actor's tick function; dependencies for owned components must be set up separately if desired. */" },
		{ "Keywords", "dependency" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Make this actor tick after PrerequisiteActor. This only applies to this actor's tick function; dependencies for owned components must be set up separately if desired." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_AddTickPrerequisiteActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "AddTickPrerequisiteActor", nullptr, nullptr, sizeof(Actor_eventAddTickPrerequisiteActor_Parms), Z_Construct_UFunction_AActor_AddTickPrerequisiteActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_AddTickPrerequisiteActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_AddTickPrerequisiteActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_AddTickPrerequisiteActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_AddTickPrerequisiteActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_AddTickPrerequisiteActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_AddTickPrerequisiteComponent_Statics
	{
		struct Actor_eventAddTickPrerequisiteComponent_Parms
		{
			UActorComponent* PrerequisiteComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrerequisiteComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PrerequisiteComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_AddTickPrerequisiteComponent_Statics::NewProp_PrerequisiteComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_AddTickPrerequisiteComponent_Statics::NewProp_PrerequisiteComponent = { "PrerequisiteComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventAddTickPrerequisiteComponent_Parms, PrerequisiteComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AActor_AddTickPrerequisiteComponent_Statics::NewProp_PrerequisiteComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_AddTickPrerequisiteComponent_Statics::NewProp_PrerequisiteComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_AddTickPrerequisiteComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_AddTickPrerequisiteComponent_Statics::NewProp_PrerequisiteComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_AddTickPrerequisiteComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities" },
		{ "Comment", "/** Make this actor tick after PrerequisiteComponent. This only applies to this actor's tick function; dependencies for owned components must be set up separately if desired. */" },
		{ "Keywords", "dependency" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Make this actor tick after PrerequisiteComponent. This only applies to this actor's tick function; dependencies for owned components must be set up separately if desired." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_AddTickPrerequisiteComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "AddTickPrerequisiteComponent", nullptr, nullptr, sizeof(Actor_eventAddTickPrerequisiteComponent_Parms), Z_Construct_UFunction_AActor_AddTickPrerequisiteComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_AddTickPrerequisiteComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_AddTickPrerequisiteComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_AddTickPrerequisiteComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_AddTickPrerequisiteComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_AddTickPrerequisiteComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_DetachRootComponentFromParent_Statics
	{
		struct Actor_eventDetachRootComponentFromParent_Parms
		{
			bool bMaintainWorldPosition;
		};
		static void NewProp_bMaintainWorldPosition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMaintainWorldPosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AActor_DetachRootComponentFromParent_Statics::NewProp_bMaintainWorldPosition_SetBit(void* Obj)
	{
		((Actor_eventDetachRootComponentFromParent_Parms*)Obj)->bMaintainWorldPosition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_DetachRootComponentFromParent_Statics::NewProp_bMaintainWorldPosition = { "bMaintainWorldPosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Actor_eventDetachRootComponentFromParent_Parms), &Z_Construct_UFunction_AActor_DetachRootComponentFromParent_Statics::NewProp_bMaintainWorldPosition_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_DetachRootComponentFromParent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_DetachRootComponentFromParent_Statics::NewProp_bMaintainWorldPosition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_DetachRootComponentFromParent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Transformation" },
		{ "CPP_Default_bMaintainWorldPosition", "true" },
		{ "DisplayName", "DetachActorFromActor (Deprecated)" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ScriptNoExport", "" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_DetachRootComponentFromParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "DetachRootComponentFromParent", nullptr, nullptr, sizeof(Actor_eventDetachRootComponentFromParent_Parms), Z_Construct_UFunction_AActor_DetachRootComponentFromParent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_DetachRootComponentFromParent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_DetachRootComponentFromParent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_DetachRootComponentFromParent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_DetachRootComponentFromParent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_DetachRootComponentFromParent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_DisableInput_Statics
	{
		struct Actor_eventDisableInput_Parms
		{
			APlayerController* PlayerController;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_DisableInput_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventDisableInput_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_DisableInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_DisableInput_Statics::NewProp_PlayerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_DisableInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "Comment", "/** \n\x09 * Removes this actor from the stack of input being handled by a PlayerController.\n\x09 * @param PlayerController The PlayerController whose input events we no longer want to receive. If null, this actor will stop receiving input from all PlayerControllers.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Removes this actor from the stack of input being handled by a PlayerController.\n@param PlayerController The PlayerController whose input events we no longer want to receive. If null, this actor will stop receiving input from all PlayerControllers." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_DisableInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "DisableInput", nullptr, nullptr, sizeof(Actor_eventDisableInput_Parms), Z_Construct_UFunction_AActor_DisableInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_DisableInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_DisableInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_DisableInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_DisableInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_DisableInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_EnableInput_Statics
	{
		struct Actor_eventEnableInput_Parms
		{
			APlayerController* PlayerController;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_EnableInput_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventEnableInput_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_EnableInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_EnableInput_Statics::NewProp_PlayerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_EnableInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "Comment", "/** \n\x09 * Pushes this actor on to the stack of input being handled by a PlayerController.\n\x09 * @param PlayerController The PlayerController whose input events we want to receive.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Pushes this actor on to the stack of input being handled by a PlayerController.\n@param PlayerController The PlayerController whose input events we want to receive." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_EnableInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "EnableInput", nullptr, nullptr, sizeof(Actor_eventEnableInput_Parms), Z_Construct_UFunction_AActor_EnableInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_EnableInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_EnableInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_EnableInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_EnableInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_EnableInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_FlushNetDormancy_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_FlushNetDormancy_Statics::Function_MetaDataParams[] = {
		{ "Category", "Networking" },
		{ "Comment", "/** Forces dormant actor to replicate but doesn't change NetDormancy state (i.e., they will go dormant again if left dormant) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Forces dormant actor to replicate but doesn't change NetDormancy state (i.e., they will go dormant again if left dormant)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_FlushNetDormancy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "FlushNetDormancy", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_FlushNetDormancy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_FlushNetDormancy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_FlushNetDormancy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_FlushNetDormancy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_ForceNetUpdate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_ForceNetUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Networking" },
		{ "Comment", "/** Force actor to be updated to clients/demo net drivers */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Force actor to be updated to clients/demo net drivers" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_ForceNetUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "ForceNetUpdate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_ForceNetUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ForceNetUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_ForceNetUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_ForceNetUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_GetActorBounds_Statics
	{
		struct Actor_eventGetActorBounds_Parms
		{
			bool bOnlyCollidingComponents;
			FVector Origin;
			FVector BoxExtent;
			bool bIncludeFromChildActors;
		};
		static void NewProp_bIncludeFromChildActors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeFromChildActors;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoxExtent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Origin;
		static void NewProp_bOnlyCollidingComponents_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnlyCollidingComponents;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AActor_GetActorBounds_Statics::NewProp_bIncludeFromChildActors_SetBit(void* Obj)
	{
		((Actor_eventGetActorBounds_Parms*)Obj)->bIncludeFromChildActors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_GetActorBounds_Statics::NewProp_bIncludeFromChildActors = { "bIncludeFromChildActors", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Actor_eventGetActorBounds_Parms), &Z_Construct_UFunction_AActor_GetActorBounds_Statics::NewProp_bIncludeFromChildActors_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_GetActorBounds_Statics::NewProp_BoxExtent = { "BoxExtent", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventGetActorBounds_Parms, BoxExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_GetActorBounds_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventGetActorBounds_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AActor_GetActorBounds_Statics::NewProp_bOnlyCollidingComponents_SetBit(void* Obj)
	{
		((Actor_eventGetActorBounds_Parms*)Obj)->bOnlyCollidingComponents = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_GetActorBounds_Statics::NewProp_bOnlyCollidingComponents = { "bOnlyCollidingComponents", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Actor_eventGetActorBounds_Parms), &Z_Construct_UFunction_AActor_GetActorBounds_Statics::NewProp_bOnlyCollidingComponents_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetActorBounds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetActorBounds_Statics::NewProp_bIncludeFromChildActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetActorBounds_Statics::NewProp_BoxExtent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetActorBounds_Statics::NewProp_Origin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetActorBounds_Statics::NewProp_bOnlyCollidingComponents,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_GetActorBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\n\x09 * Returns the bounding box of all components that make up this Actor (excluding ChildActorComponents).\n\x09 * @param\x09""bOnlyCollidingComponents\x09If true, will only return the bounding box for components with collision enabled.\n\x09 * @param\x09Origin\x09\x09\x09\x09\x09\x09Set to the center of the actor in world space\n\x09 * @param\x09""BoxExtent\x09\x09\x09\x09\x09Set to half the actor's size in 3d space\n\x09 * @param\x09""bIncludeFromChildActors\x09\x09If true then recurse in to ChildActor components \n\x09 */" },
		{ "CPP_Default_bIncludeFromChildActors", "false" },
		{ "DisplayName", "GetActorBounds" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Returns the bounding box of all components that make up this Actor (excluding ChildActorComponents).\n@param       bOnlyCollidingComponents        If true, will only return the bounding box for components with collision enabled.\n@param       Origin                                          Set to the center of the actor in world space\n@param       BoxExtent                                       Set to half the actor's size in 3d space\n@param       bIncludeFromChildActors         If true then recurse in to ChildActor components" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetActorBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetActorBounds", nullptr, nullptr, sizeof(Actor_eventGetActorBounds_Parms), Z_Construct_UFunction_AActor_GetActorBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetActorBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_GetActorBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetActorBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_GetActorBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_GetActorBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_GetActorEnableCollision_Statics
	{
		struct Actor_eventGetActorEnableCollision_Parms
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
	void Z_Construct_UFunction_AActor_GetActorEnableCollision_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Actor_eventGetActorEnableCollision_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_GetActorEnableCollision_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Actor_eventGetActorEnableCollision_Parms), &Z_Construct_UFunction_AActor_GetActorEnableCollision_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetActorEnableCollision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetActorEnableCollision_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_GetActorEnableCollision_Statics::Function_MetaDataParams[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** Get current state of collision for the whole actor */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Get current state of collision for the whole actor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetActorEnableCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetActorEnableCollision", nullptr, nullptr, sizeof(Actor_eventGetActorEnableCollision_Parms), Z_Construct_UFunction_AActor_GetActorEnableCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetActorEnableCollision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_GetActorEnableCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetActorEnableCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_GetActorEnableCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_GetActorEnableCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_GetActorEyesViewPoint_Statics
	{
		struct Actor_eventGetActorEyesViewPoint_Parms
		{
			FVector OutLocation;
			FRotator OutRotation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutRotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_GetActorEyesViewPoint_Statics::NewProp_OutRotation = { "OutRotation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventGetActorEyesViewPoint_Parms, OutRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_GetActorEyesViewPoint_Statics::NewProp_OutLocation = { "OutLocation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventGetActorEyesViewPoint_Parms, OutLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetActorEyesViewPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetActorEyesViewPoint_Statics::NewProp_OutRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetActorEyesViewPoint_Statics::NewProp_OutLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_GetActorEyesViewPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Actor" },
		{ "Comment", "/**\n\x09 * Returns the point of view of the actor.\n\x09 * Note that this doesn't mean the camera, but the 'eyes' of the actor.\n\x09 * For example, for a Pawn, this would define the eye height location,\n\x09 * and view rotation (which is different from the pawn rotation which has a zeroed pitch component).\n\x09 * A camera first person view will typically use this view point. Most traces (weapon, AI) will be done from this view point.\n\x09 *\n\x09 * @param\x09OutLocation - location of view point\n\x09 * @param\x09OutRotation - view rotation of actor.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Returns the point of view of the actor.\nNote that this doesn't mean the camera, but the 'eyes' of the actor.\nFor example, for a Pawn, this would define the eye height location,\nand view rotation (which is different from the pawn rotation which has a zeroed pitch component).\nA camera first person view will typically use this view point. Most traces (weapon, AI) will be done from this view point.\n\n@param       OutLocation - location of view point\n@param       OutRotation - view rotation of actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetActorEyesViewPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetActorEyesViewPoint", nullptr, nullptr, sizeof(Actor_eventGetActorEyesViewPoint_Parms), Z_Construct_UFunction_AActor_GetActorEyesViewPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetActorEyesViewPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_GetActorEyesViewPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetActorEyesViewPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_GetActorEyesViewPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_GetActorEyesViewPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_GetActorForwardVector_Statics
	{
		struct Actor_eventGetActorForwardVector_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_GetActorForwardVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventGetActorForwardVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetActorForwardVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetActorForwardVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_GetActorForwardVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Transformation" },
		{ "Comment", "/** Get the forward (X) vector (length 1.0) from this Actor, in world space.  */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Get the forward (X) vector (length 1.0) from this Actor, in world space." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetActorForwardVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetActorForwardVector", nullptr, nullptr, sizeof(Actor_eventGetActorForwardVector_Parms), Z_Construct_UFunction_AActor_GetActorForwardVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetActorForwardVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_GetActorForwardVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetActorForwardVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_GetActorForwardVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_GetActorForwardVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_AActor_GetActorLabel_Statics
	{
		struct Actor_eventGetActorLabel_Parms
		{
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_GetActorLabel_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AActor_GetActorLabel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventGetActorLabel_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_AActor_GetActorLabel_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetActorLabel_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetActorLabel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetActorLabel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_GetActorLabel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Actor Editing" },
		{ "Comment", "/** Returns this actor's current label.  Actor labels are only available in development builds. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Returns this actor's current label.  Actor labels are only available in development builds." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetActorLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetActorLabel", nullptr, nullptr, sizeof(Actor_eventGetActorLabel_Parms), Z_Construct_UFunction_AActor_GetActorLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetActorLabel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x74020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_GetActorLabel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetActorLabel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_GetActorLabel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_GetActorLabel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_AActor_GetActorRelativeScale3D_Statics
	{
		struct Actor_eventGetActorRelativeScale3D_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_GetActorRelativeScale3D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventGetActorRelativeScale3D_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetActorRelativeScale3D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetActorRelativeScale3D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_GetActorRelativeScale3D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Orientation" },
		{ "Comment", "/** Return the actor's relative scale 3d */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Return the actor's relative scale 3d" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetActorRelativeScale3D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetActorRelativeScale3D", nullptr, nullptr, sizeof(Actor_eventGetActorRelativeScale3D_Parms), Z_Construct_UFunction_AActor_GetActorRelativeScale3D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetActorRelativeScale3D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_GetActorRelativeScale3D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetActorRelativeScale3D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_GetActorRelativeScale3D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_GetActorRelativeScale3D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_GetActorRightVector_Statics
	{
		struct Actor_eventGetActorRightVector_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_GetActorRightVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventGetActorRightVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetActorRightVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetActorRightVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_GetActorRightVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Transformation" },
		{ "Comment", "/** Get the right (Y) vector (length 1.0) from this Actor, in world space.  */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Get the right (Y) vector (length 1.0) from this Actor, in world space." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetActorRightVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetActorRightVector", nullptr, nullptr, sizeof(Actor_eventGetActorRightVector_Parms), Z_Construct_UFunction_AActor_GetActorRightVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetActorRightVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_GetActorRightVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetActorRightVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_GetActorRightVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_GetActorRightVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_GetActorScale3D_Statics
	{
		struct Actor_eventGetActorScale3D_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_GetActorScale3D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventGetActorScale3D_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetActorScale3D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetActorScale3D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_GetActorScale3D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Orientation" },
		{ "Comment", "/** Returns the Actor's world-space scale. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Returns the Actor's world-space scale." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetActorScale3D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetActorScale3D", nullptr, nullptr, sizeof(Actor_eventGetActorScale3D_Parms), Z_Construct_UFunction_AActor_GetActorScale3D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetActorScale3D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_GetActorScale3D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetActorScale3D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_GetActorScale3D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_GetActorScale3D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_GetActorTickInterval_Statics
	{
		struct Actor_eventGetActorTickInterval_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AActor_GetActorTickInterval_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventGetActorTickInterval_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetActorTickInterval_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetActorTickInterval_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_GetActorTickInterval_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities" },
		{ "Comment", "/**  Returns the tick interval of this actor's primary tick function */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Returns the tick interval of this actor's primary tick function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetActorTickInterval_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetActorTickInterval", nullptr, nullptr, sizeof(Actor_eventGetActorTickInterval_Parms), Z_Construct_UFunction_AActor_GetActorTickInterval_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetActorTickInterval_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_GetActorTickInterval_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetActorTickInterval_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_GetActorTickInterval()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_GetActorTickInterval_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_GetActorTimeDilation_Statics
	{
		struct Actor_eventGetActorTimeDilation_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AActor_GetActorTimeDilation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventGetActorTimeDilation_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetActorTimeDilation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetActorTimeDilation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_GetActorTimeDilation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Time" },
		{ "Comment", "/** \n\x09 * Get ActorTimeDilation - this can be used for input control or speed control for slomo.\n\x09 * We don't want to scale input globally because input can be used for UI, which do not care for TimeDilation.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Get ActorTimeDilation - this can be used for input control or speed control for slomo.\nWe don't want to scale input globally because input can be used for UI, which do not care for TimeDilation." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetActorTimeDilation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetActorTimeDilation", nullptr, nullptr, sizeof(Actor_eventGetActorTimeDilation_Parms), Z_Construct_UFunction_AActor_GetActorTimeDilation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetActorTimeDilation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_GetActorTimeDilation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetActorTimeDilation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_GetActorTimeDilation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_GetActorTimeDilation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_GetActorUpVector_Statics
	{
		struct Actor_eventGetActorUpVector_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_GetActorUpVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventGetActorUpVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetActorUpVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetActorUpVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_GetActorUpVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Transformation" },
		{ "Comment", "/** Get the up (Z) vector (length 1.0) from this Actor, in world space.  */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Get the up (Z) vector (length 1.0) from this Actor, in world space." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetActorUpVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetActorUpVector", nullptr, nullptr, sizeof(Actor_eventGetActorUpVector_Parms), Z_Construct_UFunction_AActor_GetActorUpVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetActorUpVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_GetActorUpVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetActorUpVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_GetActorUpVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_GetActorUpVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_GetAllChildActors_Statics
	{
		struct Actor_eventGetAllChildActors_Parms
		{
			TArray<AActor*> ChildActors;
			bool bIncludeDescendants;
		};
		static void NewProp_bIncludeDescendants_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeDescendants;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChildActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChildActors_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AActor_GetAllChildActors_Statics::NewProp_bIncludeDescendants_SetBit(void* Obj)
	{
		((Actor_eventGetAllChildActors_Parms*)Obj)->bIncludeDescendants = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_GetAllChildActors_Statics::NewProp_bIncludeDescendants = { "bIncludeDescendants", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Actor_eventGetAllChildActors_Parms), &Z_Construct_UFunction_AActor_GetAllChildActors_Statics::NewProp_bIncludeDescendants_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AActor_GetAllChildActors_Statics::NewProp_ChildActors = { "ChildActors", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventGetAllChildActors_Parms, ChildActors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_GetAllChildActors_Statics::NewProp_ChildActors_Inner = { "ChildActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetAllChildActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetAllChildActors_Statics::NewProp_bIncludeDescendants,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetAllChildActors_Statics::NewProp_ChildActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetAllChildActors_Statics::NewProp_ChildActors_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_GetAllChildActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** \n\x09 * Returns a list of all actors spawned by our Child Actor Components, including children of children. \n\x09 * This does not return the contents of the Children array\n\x09 */" },
		{ "CPP_Default_bIncludeDescendants", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Returns a list of all actors spawned by our Child Actor Components, including children of children.\nThis does not return the contents of the Children array" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetAllChildActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetAllChildActors", nullptr, nullptr, sizeof(Actor_eventGetAllChildActors_Parms), Z_Construct_UFunction_AActor_GetAllChildActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetAllChildActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_GetAllChildActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetAllChildActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_GetAllChildActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_GetAllChildActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_GetAttachedActors_Statics
	{
		struct Actor_eventGetAttachedActors_Parms
		{
			TArray<AActor*> OutActors;
			bool bResetArray;
		};
		static void NewProp_bResetArray_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bResetArray;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutActors_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AActor_GetAttachedActors_Statics::NewProp_bResetArray_SetBit(void* Obj)
	{
		((Actor_eventGetAttachedActors_Parms*)Obj)->bResetArray = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_GetAttachedActors_Statics::NewProp_bResetArray = { "bResetArray", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Actor_eventGetAttachedActors_Parms), &Z_Construct_UFunction_AActor_GetAttachedActors_Statics::NewProp_bResetArray_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AActor_GetAttachedActors_Statics::NewProp_OutActors = { "OutActors", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventGetAttachedActors_Parms, OutActors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_GetAttachedActors_Statics::NewProp_OutActors_Inner = { "OutActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetAttachedActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetAttachedActors_Statics::NewProp_bResetArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetAttachedActors_Statics::NewProp_OutActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetAttachedActors_Statics::NewProp_OutActors_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_GetAttachedActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities" },
		{ "Comment", "/** Find all Actors which are attached directly to a component in this actor */" },
		{ "CPP_Default_bResetArray", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Find all Actors which are attached directly to a component in this actor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetAttachedActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetAttachedActors", nullptr, nullptr, sizeof(Actor_eventGetAttachedActors_Parms), Z_Construct_UFunction_AActor_GetAttachedActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetAttachedActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_GetAttachedActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetAttachedActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_GetAttachedActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_GetAttachedActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_GetAttachParentActor_Statics
	{
		struct Actor_eventGetAttachParentActor_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_GetAttachParentActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventGetAttachParentActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetAttachParentActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetAttachParentActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_GetAttachParentActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities" },
		{ "Comment", "/** Walk up the attachment chain from RootComponent until we encounter a different actor, and return it. If we are not attached to a component in a different actor, returns nullptr */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Walk up the attachment chain from RootComponent until we encounter a different actor, and return it. If we are not attached to a component in a different actor, returns nullptr" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetAttachParentActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetAttachParentActor", nullptr, nullptr, sizeof(Actor_eventGetAttachParentActor_Parms), Z_Construct_UFunction_AActor_GetAttachParentActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetAttachParentActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_GetAttachParentActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetAttachParentActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_GetAttachParentActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_GetAttachParentActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_GetAttachParentSocketName_Statics
	{
		struct Actor_eventGetAttachParentSocketName_Parms
		{
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AActor_GetAttachParentSocketName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventGetAttachParentSocketName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetAttachParentSocketName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetAttachParentSocketName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_GetAttachParentSocketName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities" },
		{ "Comment", "/** Walk up the attachment chain from RootComponent until we encounter a different actor, and return the socket name in the component. If we are not attached to a component in a different actor, returns NAME_None */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Walk up the attachment chain from RootComponent until we encounter a different actor, and return the socket name in the component. If we are not attached to a component in a different actor, returns NAME_None" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetAttachParentSocketName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetAttachParentSocketName", nullptr, nullptr, sizeof(Actor_eventGetAttachParentSocketName_Parms), Z_Construct_UFunction_AActor_GetAttachParentSocketName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetAttachParentSocketName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_GetAttachParentSocketName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetAttachParentSocketName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_GetAttachParentSocketName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_GetAttachParentSocketName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_GetComponentByClass_Statics
	{
		struct Actor_eventGetComponentByClass_Parms
		{
			TSubclassOf<UActorComponent>  ComponentClass;
			UActorComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ComponentClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_GetComponentByClass_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_GetComponentByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventGetComponentByClass_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AActor_GetComponentByClass_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetComponentByClass_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AActor_GetComponentByClass_Statics::NewProp_ComponentClass = { "ComponentClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventGetComponentByClass_Parms, ComponentClass), Z_Construct_UClass_UActorComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetComponentByClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetComponentByClass_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetComponentByClass_Statics::NewProp_ComponentClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_GetComponentByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** Searches components array and returns first encountered component of the specified class */" },
		{ "ComponentClass", "ActorComponent" },
		{ "DeterminesOutputType", "ComponentClass" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Searches components array and returns first encountered component of the specified class" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetComponentByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetComponentByClass", nullptr, nullptr, sizeof(Actor_eventGetComponentByClass_Parms), Z_Construct_UFunction_AActor_GetComponentByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetComponentByClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_GetComponentByClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetComponentByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_GetComponentByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_GetComponentByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_GetComponentsByInterface_Statics
	{
		struct Actor_eventGetComponentsByInterface_Parms
		{
			TSubclassOf<UInterface>  Interface;
			TArray<UActorComponent*> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Interface;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_GetComponentsByInterface_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AActor_GetComponentsByInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventGetComponentsByInterface_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AActor_GetComponentsByInterface_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetComponentsByInterface_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_GetComponentsByInterface_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AActor_GetComponentsByInterface_Statics::NewProp_Interface = { "Interface", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventGetComponentsByInterface_Parms, Interface), Z_Construct_UClass_UInterface, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetComponentsByInterface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetComponentsByInterface_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetComponentsByInterface_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetComponentsByInterface_Statics::NewProp_Interface,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_GetComponentsByInterface_Statics::Function_MetaDataParams[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** Gets all the components that implements the given interface. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Gets all the components that implements the given interface." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetComponentsByInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetComponentsByInterface", nullptr, nullptr, sizeof(Actor_eventGetComponentsByInterface_Parms), Z_Construct_UFunction_AActor_GetComponentsByInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetComponentsByInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_GetComponentsByInterface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetComponentsByInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_GetComponentsByInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_GetComponentsByInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_GetComponentsByTag_Statics
	{
		struct Actor_eventGetComponentsByTag_Parms
		{
			TSubclassOf<UActorComponent>  ComponentClass;
			FName Tag;
			TArray<UActorComponent*> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tag;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ComponentClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_GetComponentsByTag_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AActor_GetComponentsByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventGetComponentsByTag_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AActor_GetComponentsByTag_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetComponentsByTag_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_GetComponentsByTag_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AActor_GetComponentsByTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventGetComponentsByTag_Parms, Tag), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AActor_GetComponentsByTag_Statics::NewProp_ComponentClass = { "ComponentClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventGetComponentsByTag_Parms, ComponentClass), Z_Construct_UClass_UActorComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetComponentsByTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetComponentsByTag_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetComponentsByTag_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetComponentsByTag_Statics::NewProp_Tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetComponentsByTag_Statics::NewProp_ComponentClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_GetComponentsByTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** Gets all the components that inherit from the given class with a given tag. */" },
		{ "ComponentClass", "ActorComponent" },
		{ "DeterminesOutputType", "ComponentClass" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Gets all the components that inherit from the given class with a given tag." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetComponentsByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetComponentsByTag", nullptr, nullptr, sizeof(Actor_eventGetComponentsByTag_Parms), Z_Construct_UFunction_AActor_GetComponentsByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetComponentsByTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_GetComponentsByTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetComponentsByTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_GetComponentsByTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_GetComponentsByTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_GetDistanceTo_Statics
	{
		struct Actor_eventGetDistanceTo_Parms
		{
			const AActor* OtherActor;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AActor_GetDistanceTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventGetDistanceTo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_GetDistanceTo_Statics::NewProp_OtherActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_GetDistanceTo_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventGetDistanceTo_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AActor_GetDistanceTo_Statics::NewProp_OtherActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetDistanceTo_Statics::NewProp_OtherActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetDistanceTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetDistanceTo_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetDistanceTo_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_GetDistanceTo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Transformation" },
		{ "Comment", "/** Returns the distance from this Actor to OtherActor. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Returns the distance from this Actor to OtherActor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetDistanceTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetDistanceTo", nullptr, nullptr, sizeof(Actor_eventGetDistanceTo_Parms), Z_Construct_UFunction_AActor_GetDistanceTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetDistanceTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_GetDistanceTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetDistanceTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_GetDistanceTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_GetDistanceTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_GetDotProductTo_Statics
	{
		struct Actor_eventGetDotProductTo_Parms
		{
			const AActor* OtherActor;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AActor_GetDotProductTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventGetDotProductTo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_GetDotProductTo_Statics::NewProp_OtherActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_GetDotProductTo_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventGetDotProductTo_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AActor_GetDotProductTo_Statics::NewProp_OtherActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetDotProductTo_Statics::NewProp_OtherActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetDotProductTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetDotProductTo_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetDotProductTo_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_GetDotProductTo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Transformation" },
		{ "Comment", "/** Returns the dot product from this Actor to OtherActor. Returns -2.0 on failure. Returns 0.0 for coincidental actors. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Returns the dot product from this Actor to OtherActor. Returns -2.0 on failure. Returns 0.0 for coincidental actors." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetDotProductTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetDotProductTo", nullptr, nullptr, sizeof(Actor_eventGetDotProductTo_Parms), Z_Construct_UFunction_AActor_GetDotProductTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetDotProductTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_GetDotProductTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetDotProductTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_GetDotProductTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_GetDotProductTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_AActor_GetFolderPath_Statics
	{
		struct Actor_eventGetFolderPath_Parms
		{
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_GetFolderPath_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AActor_GetFolderPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventGetFolderPath_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_AActor_GetFolderPath_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetFolderPath_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetFolderPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetFolderPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_GetFolderPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Actor Editing" },
		{ "Comment", "/** Returns this actor's folder path. Actor folder paths are only available in development builds. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Returns this actor's folder path. Actor folder paths are only available in development builds." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetFolderPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetFolderPath", nullptr, nullptr, sizeof(Actor_eventGetFolderPath_Parms), Z_Construct_UFunction_AActor_GetFolderPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetFolderPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x74020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_GetFolderPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetFolderPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_GetFolderPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_GetFolderPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_AActor_GetGameTimeSinceCreation_Statics
	{
		struct Actor_eventGetGameTimeSinceCreation_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AActor_GetGameTimeSinceCreation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventGetGameTimeSinceCreation_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetGameTimeSinceCreation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetGameTimeSinceCreation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_GetGameTimeSinceCreation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** The number of seconds (in game time) since this Actor was created, relative to Get Game Time In Seconds. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "The number of seconds (in game time) since this Actor was created, relative to Get Game Time In Seconds." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetGameTimeSinceCreation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetGameTimeSinceCreation", nullptr, nullptr, sizeof(Actor_eventGetGameTimeSinceCreation_Parms), Z_Construct_UFunction_AActor_GetGameTimeSinceCreation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetGameTimeSinceCreation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_GetGameTimeSinceCreation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetGameTimeSinceCreation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_GetGameTimeSinceCreation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_GetGameTimeSinceCreation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_GetHorizontalDistanceTo_Statics
	{
		struct Actor_eventGetHorizontalDistanceTo_Parms
		{
			const AActor* OtherActor;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AActor_GetHorizontalDistanceTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventGetHorizontalDistanceTo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_GetHorizontalDistanceTo_Statics::NewProp_OtherActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_GetHorizontalDistanceTo_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventGetHorizontalDistanceTo_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AActor_GetHorizontalDistanceTo_Statics::NewProp_OtherActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetHorizontalDistanceTo_Statics::NewProp_OtherActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetHorizontalDistanceTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetHorizontalDistanceTo_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetHorizontalDistanceTo_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_GetHorizontalDistanceTo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Transformation" },
		{ "Comment", "/** Returns the distance from this Actor to OtherActor, ignoring Z. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Returns the distance from this Actor to OtherActor, ignoring Z." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetHorizontalDistanceTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetHorizontalDistanceTo", nullptr, nullptr, sizeof(Actor_eventGetHorizontalDistanceTo_Parms), Z_Construct_UFunction_AActor_GetHorizontalDistanceTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetHorizontalDistanceTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_GetHorizontalDistanceTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetHorizontalDistanceTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_GetHorizontalDistanceTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_GetHorizontalDistanceTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_GetHorizontalDotProductTo_Statics
	{
		struct Actor_eventGetHorizontalDotProductTo_Parms
		{
			const AActor* OtherActor;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AActor_GetHorizontalDotProductTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventGetHorizontalDotProductTo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_GetHorizontalDotProductTo_Statics::NewProp_OtherActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_GetHorizontalDotProductTo_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventGetHorizontalDotProductTo_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AActor_GetHorizontalDotProductTo_Statics::NewProp_OtherActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetHorizontalDotProductTo_Statics::NewProp_OtherActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetHorizontalDotProductTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetHorizontalDotProductTo_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetHorizontalDotProductTo_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_GetHorizontalDotProductTo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Transformation" },
		{ "Comment", "/** Returns the dot product from this Actor to OtherActor, ignoring Z. Returns -2.0 on failure. Returns 0.0 for coincidental actors. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Returns the dot product from this Actor to OtherActor, ignoring Z. Returns -2.0 on failure. Returns 0.0 for coincidental actors." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetHorizontalDotProductTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetHorizontalDotProductTo", nullptr, nullptr, sizeof(Actor_eventGetHorizontalDotProductTo_Parms), Z_Construct_UFunction_AActor_GetHorizontalDotProductTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetHorizontalDotProductTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_GetHorizontalDotProductTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetHorizontalDotProductTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_GetHorizontalDotProductTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_GetHorizontalDotProductTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_GetInputAxisKeyValue_Statics
	{
		struct Actor_eventGetInputAxisKeyValue_Parms
		{
			FKey InputAxisKey;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputAxisKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputAxisKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AActor_GetInputAxisKeyValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventGetInputAxisKeyValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_GetInputAxisKeyValue_Statics::NewProp_InputAxisKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_GetInputAxisKeyValue_Statics::NewProp_InputAxisKey = { "InputAxisKey", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventGetInputAxisKeyValue_Parms, InputAxisKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UFunction_AActor_GetInputAxisKeyValue_Statics::NewProp_InputAxisKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetInputAxisKeyValue_Statics::NewProp_InputAxisKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetInputAxisKeyValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetInputAxisKeyValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetInputAxisKeyValue_Statics::NewProp_InputAxisKey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_GetInputAxisKeyValue_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Comment", "/** Gets the value of the input axis key if input is enabled for this actor. */" },
		{ "HidePin", "InputAxisKey" },
		{ "HideSelfPin", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Gets the value of the input axis key if input is enabled for this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetInputAxisKeyValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetInputAxisKeyValue", nullptr, nullptr, sizeof(Actor_eventGetInputAxisKeyValue_Parms), Z_Construct_UFunction_AActor_GetInputAxisKeyValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetInputAxisKeyValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_GetInputAxisKeyValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetInputAxisKeyValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_GetInputAxisKeyValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_GetInputAxisKeyValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_GetInputAxisValue_Statics
	{
		struct Actor_eventGetInputAxisValue_Parms
		{
			FName InputAxisName;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputAxisName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InputAxisName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AActor_GetInputAxisValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventGetInputAxisValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_GetInputAxisValue_Statics::NewProp_InputAxisName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AActor_GetInputAxisValue_Statics::NewProp_InputAxisName = { "InputAxisName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventGetInputAxisValue_Parms, InputAxisName), METADATA_PARAMS(Z_Construct_UFunction_AActor_GetInputAxisValue_Statics::NewProp_InputAxisName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetInputAxisValue_Statics::NewProp_InputAxisName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetInputAxisValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetInputAxisValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetInputAxisValue_Statics::NewProp_InputAxisName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_GetInputAxisValue_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Comment", "/** Gets the value of the input axis if input is enabled for this actor. */" },
		{ "HidePin", "InputAxisName" },
		{ "HideSelfPin", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Gets the value of the input axis if input is enabled for this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetInputAxisValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetInputAxisValue", nullptr, nullptr, sizeof(Actor_eventGetInputAxisValue_Parms), Z_Construct_UFunction_AActor_GetInputAxisValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetInputAxisValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_GetInputAxisValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetInputAxisValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_GetInputAxisValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_GetInputAxisValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_GetInputVectorAxisValue_Statics
	{
		struct Actor_eventGetInputVectorAxisValue_Parms
		{
			FKey InputAxisKey;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputAxisKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputAxisKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_GetInputVectorAxisValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventGetInputVectorAxisValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_GetInputVectorAxisValue_Statics::NewProp_InputAxisKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_GetInputVectorAxisValue_Statics::NewProp_InputAxisKey = { "InputAxisKey", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventGetInputVectorAxisValue_Parms, InputAxisKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UFunction_AActor_GetInputVectorAxisValue_Statics::NewProp_InputAxisKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetInputVectorAxisValue_Statics::NewProp_InputAxisKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetInputVectorAxisValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetInputVectorAxisValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetInputVectorAxisValue_Statics::NewProp_InputAxisKey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_GetInputVectorAxisValue_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Comment", "/** Gets the value of the input axis key if input is enabled for this actor. */" },
		{ "HidePin", "InputAxisKey" },
		{ "HideSelfPin", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Gets the value of the input axis key if input is enabled for this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetInputVectorAxisValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetInputVectorAxisValue", nullptr, nullptr, sizeof(Actor_eventGetInputVectorAxisValue_Parms), Z_Construct_UFunction_AActor_GetInputVectorAxisValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetInputVectorAxisValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_GetInputVectorAxisValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetInputVectorAxisValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_GetInputVectorAxisValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_GetInputVectorAxisValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_GetInstigator_Statics
	{
		struct Actor_eventGetInstigator_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_GetInstigator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventGetInstigator_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetInstigator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetInstigator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_GetInstigator_Statics::Function_MetaDataParams[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "Game" },
		{ "Comment", "/** Returns the instigator for this actor, or nullptr if there is none. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Returns the instigator for this actor, or nullptr if there is none." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetInstigator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetInstigator", nullptr, nullptr, sizeof(Actor_eventGetInstigator_Parms), Z_Construct_UFunction_AActor_GetInstigator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetInstigator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_GetInstigator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetInstigator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_GetInstigator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_GetInstigator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_GetInstigatorController_Statics
	{
		struct Actor_eventGetInstigatorController_Parms
		{
			AController* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_GetInstigatorController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventGetInstigatorController_Parms, ReturnValue), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetInstigatorController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetInstigatorController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_GetInstigatorController_Statics::Function_MetaDataParams[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "Game" },
		{ "Comment", "/** Returns the instigator's controller for this actor, or nullptr if there is none. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Returns the instigator's controller for this actor, or nullptr if there is none." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetInstigatorController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetInstigatorController", nullptr, nullptr, sizeof(Actor_eventGetInstigatorController_Parms), Z_Construct_UFunction_AActor_GetInstigatorController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetInstigatorController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_GetInstigatorController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetInstigatorController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_GetInstigatorController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_GetInstigatorController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_GetLifeSpan_Statics
	{
		struct Actor_eventGetLifeSpan_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AActor_GetLifeSpan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventGetLifeSpan_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetLifeSpan_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetLifeSpan_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_GetLifeSpan_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities" },
		{ "Comment", "/** Get the remaining lifespan of this actor. If zero is returned the actor lives forever. */" },
		{ "Keywords", "delete destroy" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Get the remaining lifespan of this actor. If zero is returned the actor lives forever." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetLifeSpan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetLifeSpan", nullptr, nullptr, sizeof(Actor_eventGetLifeSpan_Parms), Z_Construct_UFunction_AActor_GetLifeSpan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetLifeSpan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_GetLifeSpan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetLifeSpan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_GetLifeSpan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_GetLifeSpan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_GetLocalRole_Statics
	{
		struct Actor_eventGetLocalRole_Parms
		{
			TEnumAsByte<ENetRole> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AActor_GetLocalRole_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventGetLocalRole_Parms, ReturnValue), Z_Construct_UEnum_Engine_ENetRole, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetLocalRole_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetLocalRole_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_GetLocalRole_Statics::Function_MetaDataParams[] = {
		{ "Category", "Replication" },
		{ "Comment", "/** Returns how much control the local machine has over this actor. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Returns how much control the local machine has over this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetLocalRole_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetLocalRole", nullptr, nullptr, sizeof(Actor_eventGetLocalRole_Parms), Z_Construct_UFunction_AActor_GetLocalRole_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetLocalRole_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_GetLocalRole_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetLocalRole_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_GetLocalRole()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_GetLocalRole_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_GetOverlappingActors_Statics
	{
		struct Actor_eventGetOverlappingActors_Parms
		{
			TArray<AActor*> OverlappingActors;
			TSubclassOf<AActor>  ClassFilter;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ClassFilter;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OverlappingActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappingActors_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AActor_GetOverlappingActors_Statics::NewProp_ClassFilter = { "ClassFilter", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventGetOverlappingActors_Parms, ClassFilter), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AActor_GetOverlappingActors_Statics::NewProp_OverlappingActors = { "OverlappingActors", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventGetOverlappingActors_Parms, OverlappingActors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_GetOverlappingActors_Statics::NewProp_OverlappingActors_Inner = { "OverlappingActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetOverlappingActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetOverlappingActors_Statics::NewProp_ClassFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetOverlappingActors_Statics::NewProp_OverlappingActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetOverlappingActors_Statics::NewProp_OverlappingActors_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_GetOverlappingActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** \n\x09 * Returns list of actors this actor is overlapping (any component overlapping any component). Does not return itself.\n\x09 * @param OverlappingActors\x09\x09[out] Returned list of overlapping actors\n\x09 * @param ClassFilter\x09\x09\x09[optional] If set, only returns actors of this class or subclasses\n\x09 */" },
		{ "CPP_Default_ClassFilter", "None" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Returns list of actors this actor is overlapping (any component overlapping any component). Does not return itself.\n@param OverlappingActors             [out] Returned list of overlapping actors\n@param ClassFilter                   [optional] If set, only returns actors of this class or subclasses" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetOverlappingActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetOverlappingActors", nullptr, nullptr, sizeof(Actor_eventGetOverlappingActors_Parms), Z_Construct_UFunction_AActor_GetOverlappingActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetOverlappingActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_GetOverlappingActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetOverlappingActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_GetOverlappingActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_GetOverlappingActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_GetOverlappingComponents_Statics
	{
		struct Actor_eventGetOverlappingComponents_Parms
		{
			TArray<UPrimitiveComponent*> OverlappingComponents;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappingComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OverlappingComponents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappingComponents_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_GetOverlappingComponents_Statics::NewProp_OverlappingComponents_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AActor_GetOverlappingComponents_Statics::NewProp_OverlappingComponents = { "OverlappingComponents", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventGetOverlappingComponents_Parms, OverlappingComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AActor_GetOverlappingComponents_Statics::NewProp_OverlappingComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetOverlappingComponents_Statics::NewProp_OverlappingComponents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_GetOverlappingComponents_Statics::NewProp_OverlappingComponents_Inner = { "OverlappingComponents", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetOverlappingComponents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetOverlappingComponents_Statics::NewProp_OverlappingComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetOverlappingComponents_Statics::NewProp_OverlappingComponents_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_GetOverlappingComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** Returns list of components this actor is overlapping. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Returns list of components this actor is overlapping." },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetOverlappingComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetOverlappingComponents", nullptr, nullptr, sizeof(Actor_eventGetOverlappingComponents_Parms), Z_Construct_UFunction_AActor_GetOverlappingComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetOverlappingComponents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_GetOverlappingComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetOverlappingComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_GetOverlappingComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_GetOverlappingComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_GetOwner_Statics
	{
		struct Actor_eventGetOwner_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_GetOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventGetOwner_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_GetOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** Get the owner of this Actor, used primarily for network replication. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Get the owner of this Actor, used primarily for network replication." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetOwner", nullptr, nullptr, sizeof(Actor_eventGetOwner_Parms), Z_Construct_UFunction_AActor_GetOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_GetOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_GetOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_GetOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_GetParentActor_Statics
	{
		struct Actor_eventGetParentActor_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_GetParentActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventGetParentActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetParentActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetParentActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_GetParentActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** If this Actor was created by a Child Actor Component returns the Actor that owns that Child Actor Component  */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "If this Actor was created by a Child Actor Component returns the Actor that owns that Child Actor Component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetParentActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetParentActor", nullptr, nullptr, sizeof(Actor_eventGetParentActor_Parms), Z_Construct_UFunction_AActor_GetParentActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetParentActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_GetParentActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetParentActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_GetParentActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_GetParentActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_GetParentComponent_Statics
	{
		struct Actor_eventGetParentComponent_Parms
		{
			UChildActorComponent* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_GetParentComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_GetParentComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventGetParentComponent_Parms, ReturnValue), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AActor_GetParentComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetParentComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetParentComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetParentComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_GetParentComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** If this Actor was created by a Child Actor Component returns that Child Actor Component  */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "If this Actor was created by a Child Actor Component returns that Child Actor Component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetParentComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetParentComponent", nullptr, nullptr, sizeof(Actor_eventGetParentComponent_Parms), Z_Construct_UFunction_AActor_GetParentComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetParentComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_GetParentComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetParentComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_GetParentComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_GetParentComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_GetRemoteRole_Statics
	{
		struct Actor_eventGetRemoteRole_Parms
		{
			TEnumAsByte<ENetRole> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AActor_GetRemoteRole_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventGetRemoteRole_Parms, ReturnValue), Z_Construct_UEnum_Engine_ENetRole, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetRemoteRole_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetRemoteRole_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_GetRemoteRole_Statics::Function_MetaDataParams[] = {
		{ "Category", "Replication" },
		{ "Comment", "/** Returns how much control the remote machine has over this actor. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Returns how much control the remote machine has over this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetRemoteRole_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetRemoteRole", nullptr, nullptr, sizeof(Actor_eventGetRemoteRole_Parms), Z_Construct_UFunction_AActor_GetRemoteRole_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetRemoteRole_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_GetRemoteRole_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetRemoteRole_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_GetRemoteRole()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_GetRemoteRole_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_GetSquaredDistanceTo_Statics
	{
		struct Actor_eventGetSquaredDistanceTo_Parms
		{
			const AActor* OtherActor;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AActor_GetSquaredDistanceTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventGetSquaredDistanceTo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_GetSquaredDistanceTo_Statics::NewProp_OtherActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_GetSquaredDistanceTo_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventGetSquaredDistanceTo_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AActor_GetSquaredDistanceTo_Statics::NewProp_OtherActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetSquaredDistanceTo_Statics::NewProp_OtherActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetSquaredDistanceTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetSquaredDistanceTo_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetSquaredDistanceTo_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_GetSquaredDistanceTo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Transformation" },
		{ "Comment", "/** Returns the squared distance from this Actor to OtherActor. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Returns the squared distance from this Actor to OtherActor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetSquaredDistanceTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetSquaredDistanceTo", nullptr, nullptr, sizeof(Actor_eventGetSquaredDistanceTo_Parms), Z_Construct_UFunction_AActor_GetSquaredDistanceTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetSquaredDistanceTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_GetSquaredDistanceTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetSquaredDistanceTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_GetSquaredDistanceTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_GetSquaredDistanceTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_GetTickableWhenPaused_Statics
	{
		struct Actor_eventGetTickableWhenPaused_Parms
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
	void Z_Construct_UFunction_AActor_GetTickableWhenPaused_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Actor_eventGetTickableWhenPaused_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_GetTickableWhenPaused_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Actor_eventGetTickableWhenPaused_Parms), &Z_Construct_UFunction_AActor_GetTickableWhenPaused_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetTickableWhenPaused_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetTickableWhenPaused_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_GetTickableWhenPaused_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities" },
		{ "Comment", "/** Gets whether this actor can tick when paused. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Gets whether this actor can tick when paused." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetTickableWhenPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetTickableWhenPaused", nullptr, nullptr, sizeof(Actor_eventGetTickableWhenPaused_Parms), Z_Construct_UFunction_AActor_GetTickableWhenPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetTickableWhenPaused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_GetTickableWhenPaused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetTickableWhenPaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_GetTickableWhenPaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_GetTickableWhenPaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_GetTransform_Statics
	{
		struct Actor_eventGetTransform_Parms
		{
			FTransform ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_GetTransform_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_GetTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventGetTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_AActor_GetTransform_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetTransform_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_GetTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Transformation" },
		{ "Comment", "/**\n\x09 * Get the actor-to-world transform.\n\x09 * @return The transform that transforms from actor space to world space.\n\x09 */" },
		{ "DisplayName", "GetActorTransform" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ScriptName", "GetActorTransform" },
		{ "ToolTip", "Get the actor-to-world transform.\n@return The transform that transforms from actor space to world space." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetTransform", nullptr, nullptr, sizeof(Actor_eventGetTransform_Parms), Z_Construct_UFunction_AActor_GetTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_GetTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_GetTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_GetTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_GetVelocity_Statics
	{
		struct Actor_eventGetVelocity_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_GetVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventGetVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetVelocity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetVelocity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_GetVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Transformation" },
		{ "Comment", "/** Returns velocity (in cm/s (Unreal Units/second) of the rootcomponent if it is either using physics or has an associated MovementComponent */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Returns velocity (in cm/s (Unreal Units/second) of the rootcomponent if it is either using physics or has an associated MovementComponent" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetVelocity", nullptr, nullptr, sizeof(Actor_eventGetVelocity_Parms), Z_Construct_UFunction_AActor_GetVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_GetVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_GetVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_GetVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_GetVerticalDistanceTo_Statics
	{
		struct Actor_eventGetVerticalDistanceTo_Parms
		{
			const AActor* OtherActor;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AActor_GetVerticalDistanceTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventGetVerticalDistanceTo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_GetVerticalDistanceTo_Statics::NewProp_OtherActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_GetVerticalDistanceTo_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventGetVerticalDistanceTo_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AActor_GetVerticalDistanceTo_Statics::NewProp_OtherActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetVerticalDistanceTo_Statics::NewProp_OtherActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetVerticalDistanceTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetVerticalDistanceTo_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetVerticalDistanceTo_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_GetVerticalDistanceTo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Transformation" },
		{ "Comment", "/** Returns the distance from this Actor to OtherActor, ignoring XY. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Returns the distance from this Actor to OtherActor, ignoring XY." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetVerticalDistanceTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetVerticalDistanceTo", nullptr, nullptr, sizeof(Actor_eventGetVerticalDistanceTo_Parms), Z_Construct_UFunction_AActor_GetVerticalDistanceTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetVerticalDistanceTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_GetVerticalDistanceTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetVerticalDistanceTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_GetVerticalDistanceTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_GetVerticalDistanceTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_HasAuthority_Statics
	{
		struct Actor_eventHasAuthority_Parms
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
	void Z_Construct_UFunction_AActor_HasAuthority_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Actor_eventHasAuthority_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_HasAuthority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Actor_eventHasAuthority_Parms), &Z_Construct_UFunction_AActor_HasAuthority_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_HasAuthority_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_HasAuthority_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_HasAuthority_Statics::Function_MetaDataParams[] = {
		{ "Category", "Networking" },
		{ "Comment", "/** Returns whether this actor has network authority */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Returns whether this actor has network authority" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_HasAuthority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "HasAuthority", nullptr, nullptr, sizeof(Actor_eventHasAuthority_Parms), Z_Construct_UFunction_AActor_HasAuthority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_HasAuthority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_HasAuthority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_HasAuthority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_HasAuthority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_HasAuthority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_IsActorBeingDestroyed_Statics
	{
		struct Actor_eventIsActorBeingDestroyed_Parms
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
	void Z_Construct_UFunction_AActor_IsActorBeingDestroyed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Actor_eventIsActorBeingDestroyed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_IsActorBeingDestroyed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Actor_eventIsActorBeingDestroyed_Parms), &Z_Construct_UFunction_AActor_IsActorBeingDestroyed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_IsActorBeingDestroyed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_IsActorBeingDestroyed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_IsActorBeingDestroyed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Returns true if this actor is currently being destroyed, some gameplay events may be unsafe */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Returns true if this actor is currently being destroyed, some gameplay events may be unsafe" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_IsActorBeingDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "IsActorBeingDestroyed", nullptr, nullptr, sizeof(Actor_eventIsActorBeingDestroyed_Parms), Z_Construct_UFunction_AActor_IsActorBeingDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_IsActorBeingDestroyed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_IsActorBeingDestroyed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_IsActorBeingDestroyed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_IsActorBeingDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_IsActorBeingDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_IsActorTickEnabled_Statics
	{
		struct Actor_eventIsActorTickEnabled_Parms
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
	void Z_Construct_UFunction_AActor_IsActorTickEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Actor_eventIsActorTickEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_IsActorTickEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Actor_eventIsActorTickEnabled_Parms), &Z_Construct_UFunction_AActor_IsActorTickEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_IsActorTickEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_IsActorTickEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_IsActorTickEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities" },
		{ "Comment", "/**  Returns whether this actor has tick enabled or not\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Returns whether this actor has tick enabled or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_IsActorTickEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "IsActorTickEnabled", nullptr, nullptr, sizeof(Actor_eventIsActorTickEnabled_Parms), Z_Construct_UFunction_AActor_IsActorTickEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_IsActorTickEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_IsActorTickEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_IsActorTickEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_IsActorTickEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_IsActorTickEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_IsChildActor_Statics
	{
		struct Actor_eventIsChildActor_Parms
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
	void Z_Construct_UFunction_AActor_IsChildActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Actor_eventIsChildActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_IsChildActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Actor_eventIsChildActor_Parms), &Z_Construct_UFunction_AActor_IsChildActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_IsChildActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_IsChildActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_IsChildActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** Returns whether this Actor was spawned by a child actor component */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Returns whether this Actor was spawned by a child actor component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_IsChildActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "IsChildActor", nullptr, nullptr, sizeof(Actor_eventIsChildActor_Parms), Z_Construct_UFunction_AActor_IsChildActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_IsChildActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_IsChildActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_IsChildActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_IsChildActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_IsChildActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_AActor_IsEditable_Statics
	{
		struct Actor_eventIsEditable_Parms
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
	void Z_Construct_UFunction_AActor_IsEditable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Actor_eventIsEditable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_IsEditable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Actor_eventIsEditable_Parms), &Z_Construct_UFunction_AActor_IsEditable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_IsEditable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_IsEditable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_IsEditable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Actor Editing" },
		{ "Comment", "/** Returns true if this actor is allowed to be displayed, selected and manipulated by the editor. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Returns true if this actor is allowed to be displayed, selected and manipulated by the editor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_IsEditable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "IsEditable", nullptr, nullptr, sizeof(Actor_eventIsEditable_Parms), Z_Construct_UFunction_AActor_IsEditable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_IsEditable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x74020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_IsEditable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_IsEditable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_IsEditable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_IsEditable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_AActor_IsHiddenEd_Statics
	{
		struct Actor_eventIsHiddenEd_Parms
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
	void Z_Construct_UFunction_AActor_IsHiddenEd_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Actor_eventIsHiddenEd_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_IsHiddenEd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Actor_eventIsHiddenEd_Parms), &Z_Construct_UFunction_AActor_IsHiddenEd_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_IsHiddenEd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_IsHiddenEd_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_IsHiddenEd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Actor Editing" },
		{ "Comment", "/** Returns true if this actor is hidden in the editor viewports, also checking temporary flags. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Returns true if this actor is hidden in the editor viewports, also checking temporary flags." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_IsHiddenEd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "IsHiddenEd", nullptr, nullptr, sizeof(Actor_eventIsHiddenEd_Parms), Z_Construct_UFunction_AActor_IsHiddenEd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_IsHiddenEd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x74020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_IsHiddenEd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_IsHiddenEd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_IsHiddenEd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_IsHiddenEd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_AActor_IsHiddenEdAtStartup_Statics
	{
		struct Actor_eventIsHiddenEdAtStartup_Parms
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
	void Z_Construct_UFunction_AActor_IsHiddenEdAtStartup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Actor_eventIsHiddenEdAtStartup_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_IsHiddenEdAtStartup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Actor_eventIsHiddenEdAtStartup_Parms), &Z_Construct_UFunction_AActor_IsHiddenEdAtStartup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_IsHiddenEdAtStartup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_IsHiddenEdAtStartup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_IsHiddenEdAtStartup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Actor Editing" },
		{ "Comment", "/** Returns true if the actor is hidden upon editor startup/by default, false if it is not */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Returns true if the actor is hidden upon editor startup/by default, false if it is not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_IsHiddenEdAtStartup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "IsHiddenEdAtStartup", nullptr, nullptr, sizeof(Actor_eventIsHiddenEdAtStartup_Parms), Z_Construct_UFunction_AActor_IsHiddenEdAtStartup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_IsHiddenEdAtStartup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x74020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_IsHiddenEdAtStartup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_IsHiddenEdAtStartup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_IsHiddenEdAtStartup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_IsHiddenEdAtStartup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_AActor_IsOverlappingActor_Statics
	{
		struct Actor_eventIsOverlappingActor_Parms
		{
			const AActor* Other;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Other_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Other;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AActor_IsOverlappingActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Actor_eventIsOverlappingActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_IsOverlappingActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Actor_eventIsOverlappingActor_Parms), &Z_Construct_UFunction_AActor_IsOverlappingActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_IsOverlappingActor_Statics::NewProp_Other_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_IsOverlappingActor_Statics::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventIsOverlappingActor_Parms, Other), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AActor_IsOverlappingActor_Statics::NewProp_Other_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_IsOverlappingActor_Statics::NewProp_Other_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_IsOverlappingActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_IsOverlappingActor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_IsOverlappingActor_Statics::NewProp_Other,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_IsOverlappingActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** \n\x09 * Check whether any component of this Actor is overlapping any component of another Actor.\n\x09 * @param Other The other Actor to test against\n\x09 * @return Whether any component of this Actor is overlapping any component of another Actor.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Check whether any component of this Actor is overlapping any component of another Actor.\n@param Other The other Actor to test against\n@return Whether any component of this Actor is overlapping any component of another Actor." },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_IsOverlappingActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "IsOverlappingActor", nullptr, nullptr, sizeof(Actor_eventIsOverlappingActor_Parms), Z_Construct_UFunction_AActor_IsOverlappingActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_IsOverlappingActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_IsOverlappingActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_IsOverlappingActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_IsOverlappingActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_IsOverlappingActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_AActor_IsSelectable_Statics
	{
		struct Actor_eventIsSelectable_Parms
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
	void Z_Construct_UFunction_AActor_IsSelectable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Actor_eventIsSelectable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_IsSelectable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Actor_eventIsSelectable_Parms), &Z_Construct_UFunction_AActor_IsSelectable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_IsSelectable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_IsSelectable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_IsSelectable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Actor Editing" },
		{ "Comment", "/** Returns true if this actor can EVER be selected in a level in the editor.  Can be overridden by specific actors to make them unselectable. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Returns true if this actor can EVER be selected in a level in the editor.  Can be overridden by specific actors to make them unselectable." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_IsSelectable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "IsSelectable", nullptr, nullptr, sizeof(Actor_eventIsSelectable_Parms), Z_Construct_UFunction_AActor_IsSelectable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_IsSelectable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x74020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_IsSelectable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_IsSelectable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_IsSelectable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_IsSelectable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_AActor_IsTemporarilyHiddenInEditor_Statics
	{
		struct Actor_eventIsTemporarilyHiddenInEditor_Parms
		{
			bool bIncludeParent;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bIncludeParent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeParent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AActor_IsTemporarilyHiddenInEditor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Actor_eventIsTemporarilyHiddenInEditor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_IsTemporarilyHiddenInEditor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Actor_eventIsTemporarilyHiddenInEditor_Parms), &Z_Construct_UFunction_AActor_IsTemporarilyHiddenInEditor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AActor_IsTemporarilyHiddenInEditor_Statics::NewProp_bIncludeParent_SetBit(void* Obj)
	{
		((Actor_eventIsTemporarilyHiddenInEditor_Parms*)Obj)->bIncludeParent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_IsTemporarilyHiddenInEditor_Statics::NewProp_bIncludeParent = { "bIncludeParent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Actor_eventIsTemporarilyHiddenInEditor_Parms), &Z_Construct_UFunction_AActor_IsTemporarilyHiddenInEditor_Statics::NewProp_bIncludeParent_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_IsTemporarilyHiddenInEditor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_IsTemporarilyHiddenInEditor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_IsTemporarilyHiddenInEditor_Statics::NewProp_bIncludeParent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_IsTemporarilyHiddenInEditor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Actor Editing" },
		{ "Comment", "/**\n\x09 * Returns whether or not this actor was explicitly hidden in the editor for the duration of the current editor session\n\x09 * @param bIncludeParent - Whether to recurse up child actor hierarchy or not\n\x09 */" },
		{ "CPP_Default_bIncludeParent", "false" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Returns whether or not this actor was explicitly hidden in the editor for the duration of the current editor session\n@param bIncludeParent - Whether to recurse up child actor hierarchy or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_IsTemporarilyHiddenInEditor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "IsTemporarilyHiddenInEditor", nullptr, nullptr, sizeof(Actor_eventIsTemporarilyHiddenInEditor_Parms), Z_Construct_UFunction_AActor_IsTemporarilyHiddenInEditor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_IsTemporarilyHiddenInEditor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x74020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_IsTemporarilyHiddenInEditor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_IsTemporarilyHiddenInEditor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_IsTemporarilyHiddenInEditor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_IsTemporarilyHiddenInEditor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_AActor_K2_AddActorLocalOffset_Statics
	{
		struct Actor_eventK2_AddActorLocalOffset_Parms
		{
			FVector DeltaLocation;
			bool bSweep;
			FHitResult SweepHitResult;
			bool bTeleport;
		};
		static void NewProp_bTeleport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTeleport;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepHitResult;
		static void NewProp_bSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSweep;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DeltaLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AActor_K2_AddActorLocalOffset_Statics::NewProp_bTeleport_SetBit(void* Obj)
	{
		((Actor_eventK2_AddActorLocalOffset_Parms*)Obj)->bTeleport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_AddActorLocalOffset_Statics::NewProp_bTeleport = { "bTeleport", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Actor_eventK2_AddActorLocalOffset_Parms), &Z_Construct_UFunction_AActor_K2_AddActorLocalOffset_Statics::NewProp_bTeleport_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_K2_AddActorLocalOffset_Statics::NewProp_SweepHitResult = { "SweepHitResult", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventK2_AddActorLocalOffset_Parms, SweepHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AActor_K2_AddActorLocalOffset_Statics::NewProp_bSweep_SetBit(void* Obj)
	{
		((Actor_eventK2_AddActorLocalOffset_Parms*)Obj)->bSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_AddActorLocalOffset_Statics::NewProp_bSweep = { "bSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Actor_eventK2_AddActorLocalOffset_Parms), &Z_Construct_UFunction_AActor_K2_AddActorLocalOffset_Statics::NewProp_bSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_K2_AddActorLocalOffset_Statics::NewProp_DeltaLocation = { "DeltaLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventK2_AddActorLocalOffset_Parms, DeltaLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_K2_AddActorLocalOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AddActorLocalOffset_Statics::NewProp_bTeleport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AddActorLocalOffset_Statics::NewProp_SweepHitResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AddActorLocalOffset_Statics::NewProp_bSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AddActorLocalOffset_Statics::NewProp_DeltaLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_K2_AddActorLocalOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Transformation" },
		{ "Comment", "/** \n\x09 * Adds a delta to the location of this component in its local reference frame.\n\x09 * @param DelatLocation\x09\x09The change in location in local space.\n\x09 * @param bSweep\x09\x09\x09Whether we sweep to the destination location, triggering overlaps along the way and stopping short of the target if blocked by something.\n\x09 *\x09\x09\x09\x09\x09\x09\x09Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.\n\x09 * @param bTeleport\x09\x09\x09Whether we teleport the physics state (if physics collision is enabled for this object).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If CCD is on and not teleporting, this will affect objects along the entire swept volume.\n\x09 */" },
		{ "DisplayName", "AddActorLocalOffset" },
		{ "Keywords", "location position" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ScriptName", "AddActorLocalOffset" },
		{ "ToolTip", "Adds a delta to the location of this component in its local reference frame.\n@param DelatLocation         The change in location in local space.\n@param bSweep                        Whether we sweep to the destination location, triggering overlaps along the way and stopping short of the target if blocked by something.\n                                                     Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.\n@param bTeleport                     Whether we teleport the physics state (if physics collision is enabled for this object).\n                                                     If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n                                                     If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n                                                     If CCD is on and not teleporting, this will affect objects along the entire swept volume." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_K2_AddActorLocalOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "K2_AddActorLocalOffset", nullptr, nullptr, sizeof(Actor_eventK2_AddActorLocalOffset_Parms), Z_Construct_UFunction_AActor_K2_AddActorLocalOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_AddActorLocalOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_K2_AddActorLocalOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_AddActorLocalOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_K2_AddActorLocalOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_K2_AddActorLocalOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_K2_AddActorLocalRotation_Statics
	{
		struct Actor_eventK2_AddActorLocalRotation_Parms
		{
			FRotator DeltaRotation;
			bool bSweep;
			FHitResult SweepHitResult;
			bool bTeleport;
		};
		static void NewProp_bTeleport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTeleport;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepHitResult;
		static void NewProp_bSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSweep;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DeltaRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AActor_K2_AddActorLocalRotation_Statics::NewProp_bTeleport_SetBit(void* Obj)
	{
		((Actor_eventK2_AddActorLocalRotation_Parms*)Obj)->bTeleport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_AddActorLocalRotation_Statics::NewProp_bTeleport = { "bTeleport", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Actor_eventK2_AddActorLocalRotation_Parms), &Z_Construct_UFunction_AActor_K2_AddActorLocalRotation_Statics::NewProp_bTeleport_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_K2_AddActorLocalRotation_Statics::NewProp_SweepHitResult = { "SweepHitResult", nullptr, (EPropertyFlags)0x0010048000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventK2_AddActorLocalRotation_Parms, SweepHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AActor_K2_AddActorLocalRotation_Statics::NewProp_bSweep_SetBit(void* Obj)
	{
		((Actor_eventK2_AddActorLocalRotation_Parms*)Obj)->bSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_AddActorLocalRotation_Statics::NewProp_bSweep = { "bSweep", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Actor_eventK2_AddActorLocalRotation_Parms), &Z_Construct_UFunction_AActor_K2_AddActorLocalRotation_Statics::NewProp_bSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_K2_AddActorLocalRotation_Statics::NewProp_DeltaRotation = { "DeltaRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventK2_AddActorLocalRotation_Parms, DeltaRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_K2_AddActorLocalRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AddActorLocalRotation_Statics::NewProp_bTeleport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AddActorLocalRotation_Statics::NewProp_SweepHitResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AddActorLocalRotation_Statics::NewProp_bSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AddActorLocalRotation_Statics::NewProp_DeltaRotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_K2_AddActorLocalRotation_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bSweep,SweepHitResult,bTeleport" },
		{ "Category", "Utilities|Transformation" },
		{ "Comment", "/**\n\x09 * Adds a delta to the rotation of this component in its local reference frame\n\x09 * @param DeltaRotation\x09\x09The change in rotation in local space.\n\x09 * @param bSweep\x09\x09\x09Whether we sweep to the destination location, triggering overlaps along the way and stopping short of the target if blocked by something.\n\x09 *\x09\x09\x09\x09\x09\x09\x09Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.\n\x09 * @param bTeleport\x09\x09\x09Whether we teleport the physics state (if physics collision is enabled for this object).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If CCD is on and not teleporting, this will affect objects along the entire swept volume.\n\x09 */" },
		{ "DisplayName", "AddActorLocalRotation" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ScriptName", "AddActorLocalRotation" },
		{ "ToolTip", "Adds a delta to the rotation of this component in its local reference frame\n@param DeltaRotation         The change in rotation in local space.\n@param bSweep                        Whether we sweep to the destination location, triggering overlaps along the way and stopping short of the target if blocked by something.\n                                                     Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.\n@param bTeleport                     Whether we teleport the physics state (if physics collision is enabled for this object).\n                                                     If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n                                                     If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n                                                     If CCD is on and not teleporting, this will affect objects along the entire swept volume." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_K2_AddActorLocalRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "K2_AddActorLocalRotation", nullptr, nullptr, sizeof(Actor_eventK2_AddActorLocalRotation_Parms), Z_Construct_UFunction_AActor_K2_AddActorLocalRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_AddActorLocalRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_K2_AddActorLocalRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_AddActorLocalRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_K2_AddActorLocalRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_K2_AddActorLocalRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_K2_AddActorLocalTransform_Statics
	{
		struct Actor_eventK2_AddActorLocalTransform_Parms
		{
			FTransform NewTransform;
			bool bSweep;
			FHitResult SweepHitResult;
			bool bTeleport;
		};
		static void NewProp_bTeleport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTeleport;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepHitResult;
		static void NewProp_bSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AActor_K2_AddActorLocalTransform_Statics::NewProp_bTeleport_SetBit(void* Obj)
	{
		((Actor_eventK2_AddActorLocalTransform_Parms*)Obj)->bTeleport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_AddActorLocalTransform_Statics::NewProp_bTeleport = { "bTeleport", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Actor_eventK2_AddActorLocalTransform_Parms), &Z_Construct_UFunction_AActor_K2_AddActorLocalTransform_Statics::NewProp_bTeleport_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_K2_AddActorLocalTransform_Statics::NewProp_SweepHitResult = { "SweepHitResult", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventK2_AddActorLocalTransform_Parms, SweepHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AActor_K2_AddActorLocalTransform_Statics::NewProp_bSweep_SetBit(void* Obj)
	{
		((Actor_eventK2_AddActorLocalTransform_Parms*)Obj)->bSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_AddActorLocalTransform_Statics::NewProp_bSweep = { "bSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Actor_eventK2_AddActorLocalTransform_Parms), &Z_Construct_UFunction_AActor_K2_AddActorLocalTransform_Statics::NewProp_bSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_K2_AddActorLocalTransform_Statics::NewProp_NewTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_K2_AddActorLocalTransform_Statics::NewProp_NewTransform = { "NewTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventK2_AddActorLocalTransform_Parms, NewTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_AActor_K2_AddActorLocalTransform_Statics::NewProp_NewTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_AddActorLocalTransform_Statics::NewProp_NewTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_K2_AddActorLocalTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AddActorLocalTransform_Statics::NewProp_bTeleport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AddActorLocalTransform_Statics::NewProp_SweepHitResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AddActorLocalTransform_Statics::NewProp_bSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AddActorLocalTransform_Statics::NewProp_NewTransform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_K2_AddActorLocalTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Transformation" },
		{ "Comment", "/**\n\x09 * Adds a delta to the transform of this component in its local reference frame\n\x09 * @param NewTransform\x09\x09The change in transform in local space.\n\x09 * @param bSweep\x09\x09\x09Whether we sweep to the destination location, triggering overlaps along the way and stopping short of the target if blocked by something.\n\x09 *\x09\x09\x09\x09\x09\x09\x09Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.\n\x09 * @param bTeleport\x09\x09\x09Whether we teleport the physics state (if physics collision is enabled for this object).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If CCD is on and not teleporting, this will affect objects along the entire swept volume.\n\x09 */" },
		{ "DisplayName", "AddActorLocalTransform" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ScriptName", "AddActorLocalTransform" },
		{ "ToolTip", "Adds a delta to the transform of this component in its local reference frame\n@param NewTransform          The change in transform in local space.\n@param bSweep                        Whether we sweep to the destination location, triggering overlaps along the way and stopping short of the target if blocked by something.\n                                                     Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.\n@param bTeleport                     Whether we teleport the physics state (if physics collision is enabled for this object).\n                                                     If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n                                                     If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n                                                     If CCD is on and not teleporting, this will affect objects along the entire swept volume." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_K2_AddActorLocalTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "K2_AddActorLocalTransform", nullptr, nullptr, sizeof(Actor_eventK2_AddActorLocalTransform_Parms), Z_Construct_UFunction_AActor_K2_AddActorLocalTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_AddActorLocalTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_K2_AddActorLocalTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_AddActorLocalTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_K2_AddActorLocalTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_K2_AddActorLocalTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_K2_AddActorWorldOffset_Statics
	{
		struct Actor_eventK2_AddActorWorldOffset_Parms
		{
			FVector DeltaLocation;
			bool bSweep;
			FHitResult SweepHitResult;
			bool bTeleport;
		};
		static void NewProp_bTeleport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTeleport;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepHitResult;
		static void NewProp_bSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSweep;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DeltaLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AActor_K2_AddActorWorldOffset_Statics::NewProp_bTeleport_SetBit(void* Obj)
	{
		((Actor_eventK2_AddActorWorldOffset_Parms*)Obj)->bTeleport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_AddActorWorldOffset_Statics::NewProp_bTeleport = { "bTeleport", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Actor_eventK2_AddActorWorldOffset_Parms), &Z_Construct_UFunction_AActor_K2_AddActorWorldOffset_Statics::NewProp_bTeleport_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_K2_AddActorWorldOffset_Statics::NewProp_SweepHitResult = { "SweepHitResult", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventK2_AddActorWorldOffset_Parms, SweepHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AActor_K2_AddActorWorldOffset_Statics::NewProp_bSweep_SetBit(void* Obj)
	{
		((Actor_eventK2_AddActorWorldOffset_Parms*)Obj)->bSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_AddActorWorldOffset_Statics::NewProp_bSweep = { "bSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Actor_eventK2_AddActorWorldOffset_Parms), &Z_Construct_UFunction_AActor_K2_AddActorWorldOffset_Statics::NewProp_bSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_K2_AddActorWorldOffset_Statics::NewProp_DeltaLocation = { "DeltaLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventK2_AddActorWorldOffset_Parms, DeltaLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_K2_AddActorWorldOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AddActorWorldOffset_Statics::NewProp_bTeleport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AddActorWorldOffset_Statics::NewProp_SweepHitResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AddActorWorldOffset_Statics::NewProp_bSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AddActorWorldOffset_Statics::NewProp_DeltaLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_K2_AddActorWorldOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Transformation" },
		{ "Comment", "/**\n\x09 * Adds a delta to the location of this actor in world space.\n\x09 * \n\x09 * @param DeltaLocation\x09\x09The change in location.\n\x09 * @param bSweep\x09\x09\x09Whether we sweep to the destination location, triggering overlaps along the way and stopping short of the target if blocked by something.\n\x09 *\x09\x09\x09\x09\x09\x09\x09Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.\n\x09 * @param bTeleport\x09\x09\x09Whether we teleport the physics state (if physics collision is enabled for this object).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If CCD is on and not teleporting, this will affect objects along the entire swept volume.\n\x09 * @param SweepHitResult\x09The hit result from the move if swept.\n\x09 */" },
		{ "DisplayName", "AddActorWorldOffset" },
		{ "Keywords", "location position" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ScriptName", "AddActorWorldOffset" },
		{ "ToolTip", "Adds a delta to the location of this actor in world space.\n\n@param DeltaLocation         The change in location.\n@param bSweep                        Whether we sweep to the destination location, triggering overlaps along the way and stopping short of the target if blocked by something.\n                                                     Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.\n@param bTeleport                     Whether we teleport the physics state (if physics collision is enabled for this object).\n                                                     If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n                                                     If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n                                                     If CCD is on and not teleporting, this will affect objects along the entire swept volume.\n@param SweepHitResult        The hit result from the move if swept." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_K2_AddActorWorldOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "K2_AddActorWorldOffset", nullptr, nullptr, sizeof(Actor_eventK2_AddActorWorldOffset_Parms), Z_Construct_UFunction_AActor_K2_AddActorWorldOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_AddActorWorldOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_K2_AddActorWorldOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_AddActorWorldOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_K2_AddActorWorldOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_K2_AddActorWorldOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_K2_AddActorWorldRotation_Statics
	{
		struct Actor_eventK2_AddActorWorldRotation_Parms
		{
			FRotator DeltaRotation;
			bool bSweep;
			FHitResult SweepHitResult;
			bool bTeleport;
		};
		static void NewProp_bTeleport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTeleport;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepHitResult;
		static void NewProp_bSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSweep;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DeltaRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AActor_K2_AddActorWorldRotation_Statics::NewProp_bTeleport_SetBit(void* Obj)
	{
		((Actor_eventK2_AddActorWorldRotation_Parms*)Obj)->bTeleport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_AddActorWorldRotation_Statics::NewProp_bTeleport = { "bTeleport", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Actor_eventK2_AddActorWorldRotation_Parms), &Z_Construct_UFunction_AActor_K2_AddActorWorldRotation_Statics::NewProp_bTeleport_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_K2_AddActorWorldRotation_Statics::NewProp_SweepHitResult = { "SweepHitResult", nullptr, (EPropertyFlags)0x0010048000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventK2_AddActorWorldRotation_Parms, SweepHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AActor_K2_AddActorWorldRotation_Statics::NewProp_bSweep_SetBit(void* Obj)
	{
		((Actor_eventK2_AddActorWorldRotation_Parms*)Obj)->bSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_AddActorWorldRotation_Statics::NewProp_bSweep = { "bSweep", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Actor_eventK2_AddActorWorldRotation_Parms), &Z_Construct_UFunction_AActor_K2_AddActorWorldRotation_Statics::NewProp_bSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_K2_AddActorWorldRotation_Statics::NewProp_DeltaRotation = { "DeltaRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventK2_AddActorWorldRotation_Parms, DeltaRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_K2_AddActorWorldRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AddActorWorldRotation_Statics::NewProp_bTeleport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AddActorWorldRotation_Statics::NewProp_SweepHitResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AddActorWorldRotation_Statics::NewProp_bSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AddActorWorldRotation_Statics::NewProp_DeltaRotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_K2_AddActorWorldRotation_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bSweep,SweepHitResult,bTeleport" },
		{ "Category", "Utilities|Transformation" },
		{ "Comment", "/**\n\x09 * Adds a delta to the rotation of this actor in world space.\n\x09 * \n\x09 * @param DeltaRotation\x09\x09The change in rotation.\n\x09 * @param bSweep\x09\x09\x09Whether to sweep to the target rotation (not currently supported for rotation).\n\x09 * @param bTeleport\x09\x09\x09Whether we teleport the physics state (if physics collision is enabled for this object).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If CCD is on and not teleporting, this will affect objects along the entire swept volume.\n\x09 * @param SweepHitResult\x09The hit result from the move if swept.\n\x09 */" },
		{ "DisplayName", "AddActorWorldRotation" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ScriptName", "AddActorWorldRotation" },
		{ "ToolTip", "Adds a delta to the rotation of this actor in world space.\n\n@param DeltaRotation         The change in rotation.\n@param bSweep                        Whether to sweep to the target rotation (not currently supported for rotation).\n@param bTeleport                     Whether we teleport the physics state (if physics collision is enabled for this object).\n                                                     If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n                                                     If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n                                                     If CCD is on and not teleporting, this will affect objects along the entire swept volume.\n@param SweepHitResult        The hit result from the move if swept." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_K2_AddActorWorldRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "K2_AddActorWorldRotation", nullptr, nullptr, sizeof(Actor_eventK2_AddActorWorldRotation_Parms), Z_Construct_UFunction_AActor_K2_AddActorWorldRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_AddActorWorldRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_K2_AddActorWorldRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_AddActorWorldRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_K2_AddActorWorldRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_K2_AddActorWorldRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_K2_AddActorWorldTransform_Statics
	{
		struct Actor_eventK2_AddActorWorldTransform_Parms
		{
			FTransform DeltaTransform;
			bool bSweep;
			FHitResult SweepHitResult;
			bool bTeleport;
		};
		static void NewProp_bTeleport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTeleport;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepHitResult;
		static void NewProp_bSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeltaTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DeltaTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AActor_K2_AddActorWorldTransform_Statics::NewProp_bTeleport_SetBit(void* Obj)
	{
		((Actor_eventK2_AddActorWorldTransform_Parms*)Obj)->bTeleport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_AddActorWorldTransform_Statics::NewProp_bTeleport = { "bTeleport", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Actor_eventK2_AddActorWorldTransform_Parms), &Z_Construct_UFunction_AActor_K2_AddActorWorldTransform_Statics::NewProp_bTeleport_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_K2_AddActorWorldTransform_Statics::NewProp_SweepHitResult = { "SweepHitResult", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventK2_AddActorWorldTransform_Parms, SweepHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AActor_K2_AddActorWorldTransform_Statics::NewProp_bSweep_SetBit(void* Obj)
	{
		((Actor_eventK2_AddActorWorldTransform_Parms*)Obj)->bSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_AddActorWorldTransform_Statics::NewProp_bSweep = { "bSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Actor_eventK2_AddActorWorldTransform_Parms), &Z_Construct_UFunction_AActor_K2_AddActorWorldTransform_Statics::NewProp_bSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_K2_AddActorWorldTransform_Statics::NewProp_DeltaTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_K2_AddActorWorldTransform_Statics::NewProp_DeltaTransform = { "DeltaTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventK2_AddActorWorldTransform_Parms, DeltaTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_AActor_K2_AddActorWorldTransform_Statics::NewProp_DeltaTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_AddActorWorldTransform_Statics::NewProp_DeltaTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_K2_AddActorWorldTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AddActorWorldTransform_Statics::NewProp_bTeleport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AddActorWorldTransform_Statics::NewProp_SweepHitResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AddActorWorldTransform_Statics::NewProp_bSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AddActorWorldTransform_Statics::NewProp_DeltaTransform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_K2_AddActorWorldTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Transformation" },
		{ "Comment", "/** Adds a delta to the transform of this actor in world space. Scale is unchanged. */" },
		{ "DisplayName", "AddActorWorldTransform" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ScriptName", "AddActorWorldTransform" },
		{ "ToolTip", "Adds a delta to the transform of this actor in world space. Scale is unchanged." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_K2_AddActorWorldTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "K2_AddActorWorldTransform", nullptr, nullptr, sizeof(Actor_eventK2_AddActorWorldTransform_Parms), Z_Construct_UFunction_AActor_K2_AddActorWorldTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_AddActorWorldTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_K2_AddActorWorldTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_AddActorWorldTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_K2_AddActorWorldTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_K2_AddActorWorldTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_K2_AttachRootComponentTo_Statics
	{
		struct Actor_eventK2_AttachRootComponentTo_Parms
		{
			USceneComponent* InParent;
			FName InSocketName;
			TEnumAsByte<EAttachLocation::Type> AttachLocationType;
			bool bWeldSimulatedBodies;
		};
		static void NewProp_bWeldSimulatedBodies_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWeldSimulatedBodies;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttachLocationType;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InParent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InParent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AActor_K2_AttachRootComponentTo_Statics::NewProp_bWeldSimulatedBodies_SetBit(void* Obj)
	{
		((Actor_eventK2_AttachRootComponentTo_Parms*)Obj)->bWeldSimulatedBodies = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_AttachRootComponentTo_Statics::NewProp_bWeldSimulatedBodies = { "bWeldSimulatedBodies", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Actor_eventK2_AttachRootComponentTo_Parms), &Z_Construct_UFunction_AActor_K2_AttachRootComponentTo_Statics::NewProp_bWeldSimulatedBodies_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AActor_K2_AttachRootComponentTo_Statics::NewProp_AttachLocationType = { "AttachLocationType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventK2_AttachRootComponentTo_Parms, AttachLocationType), Z_Construct_UEnum_Engine_EAttachLocation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AActor_K2_AttachRootComponentTo_Statics::NewProp_InSocketName = { "InSocketName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventK2_AttachRootComponentTo_Parms, InSocketName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_K2_AttachRootComponentTo_Statics::NewProp_InParent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_K2_AttachRootComponentTo_Statics::NewProp_InParent = { "InParent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventK2_AttachRootComponentTo_Parms, InParent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AActor_K2_AttachRootComponentTo_Statics::NewProp_InParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_AttachRootComponentTo_Statics::NewProp_InParent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_K2_AttachRootComponentTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AttachRootComponentTo_Statics::NewProp_bWeldSimulatedBodies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AttachRootComponentTo_Statics::NewProp_AttachLocationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AttachRootComponentTo_Statics::NewProp_InSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AttachRootComponentTo_Statics::NewProp_InParent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_K2_AttachRootComponentTo_Statics::Function_MetaDataParams[] = {
		{ "AttachLocationType", "KeepRelativeOffset" },
		{ "Category", "Utilities|Transformation" },
		{ "CPP_Default_AttachLocationType", "KeepRelativeOffset" },
		{ "CPP_Default_bWeldSimulatedBodies", "true" },
		{ "CPP_Default_InSocketName", "None" },
		{ "DisplayName", "AttachRootComponentTo (Deprecated)" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ScriptNoExport", "" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_K2_AttachRootComponentTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "K2_AttachRootComponentTo", nullptr, nullptr, sizeof(Actor_eventK2_AttachRootComponentTo_Parms), Z_Construct_UFunction_AActor_K2_AttachRootComponentTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_AttachRootComponentTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_K2_AttachRootComponentTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_AttachRootComponentTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_K2_AttachRootComponentTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_K2_AttachRootComponentTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_K2_AttachRootComponentToActor_Statics
	{
		struct Actor_eventK2_AttachRootComponentToActor_Parms
		{
			AActor* InParentActor;
			FName InSocketName;
			TEnumAsByte<EAttachLocation::Type> AttachLocationType;
			bool bWeldSimulatedBodies;
		};
		static void NewProp_bWeldSimulatedBodies_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWeldSimulatedBodies;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttachLocationType;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InSocketName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InParentActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AActor_K2_AttachRootComponentToActor_Statics::NewProp_bWeldSimulatedBodies_SetBit(void* Obj)
	{
		((Actor_eventK2_AttachRootComponentToActor_Parms*)Obj)->bWeldSimulatedBodies = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_AttachRootComponentToActor_Statics::NewProp_bWeldSimulatedBodies = { "bWeldSimulatedBodies", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Actor_eventK2_AttachRootComponentToActor_Parms), &Z_Construct_UFunction_AActor_K2_AttachRootComponentToActor_Statics::NewProp_bWeldSimulatedBodies_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AActor_K2_AttachRootComponentToActor_Statics::NewProp_AttachLocationType = { "AttachLocationType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventK2_AttachRootComponentToActor_Parms, AttachLocationType), Z_Construct_UEnum_Engine_EAttachLocation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AActor_K2_AttachRootComponentToActor_Statics::NewProp_InSocketName = { "InSocketName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventK2_AttachRootComponentToActor_Parms, InSocketName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_K2_AttachRootComponentToActor_Statics::NewProp_InParentActor = { "InParentActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventK2_AttachRootComponentToActor_Parms, InParentActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_K2_AttachRootComponentToActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AttachRootComponentToActor_Statics::NewProp_bWeldSimulatedBodies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AttachRootComponentToActor_Statics::NewProp_AttachLocationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AttachRootComponentToActor_Statics::NewProp_InSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AttachRootComponentToActor_Statics::NewProp_InParentActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_K2_AttachRootComponentToActor_Statics::Function_MetaDataParams[] = {
		{ "AttachLocationType", "KeepRelativeOffset" },
		{ "Category", "Utilities|Transformation" },
		{ "CPP_Default_AttachLocationType", "KeepRelativeOffset" },
		{ "CPP_Default_bWeldSimulatedBodies", "true" },
		{ "CPP_Default_InSocketName", "None" },
		{ "DisplayName", "AttachRootComponentToActor (Deprecated)" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ScriptNoExport", "" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_K2_AttachRootComponentToActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "K2_AttachRootComponentToActor", nullptr, nullptr, sizeof(Actor_eventK2_AttachRootComponentToActor_Parms), Z_Construct_UFunction_AActor_K2_AttachRootComponentToActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_AttachRootComponentToActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_K2_AttachRootComponentToActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_AttachRootComponentToActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_K2_AttachRootComponentToActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_K2_AttachRootComponentToActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_K2_AttachToActor_Statics
	{
		struct Actor_eventK2_AttachToActor_Parms
		{
			AActor* ParentActor;
			FName SocketName;
			EAttachmentRule LocationRule;
			EAttachmentRule RotationRule;
			EAttachmentRule ScaleRule;
			bool bWeldSimulatedBodies;
		};
		static void NewProp_bWeldSimulatedBodies_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWeldSimulatedBodies;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ScaleRule;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ScaleRule_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RotationRule;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RotationRule_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LocationRule;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LocationRule_Underlying;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SocketName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AActor_K2_AttachToActor_Statics::NewProp_bWeldSimulatedBodies_SetBit(void* Obj)
	{
		((Actor_eventK2_AttachToActor_Parms*)Obj)->bWeldSimulatedBodies = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_AttachToActor_Statics::NewProp_bWeldSimulatedBodies = { "bWeldSimulatedBodies", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Actor_eventK2_AttachToActor_Parms), &Z_Construct_UFunction_AActor_K2_AttachToActor_Statics::NewProp_bWeldSimulatedBodies_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AActor_K2_AttachToActor_Statics::NewProp_ScaleRule = { "ScaleRule", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventK2_AttachToActor_Parms, ScaleRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AActor_K2_AttachToActor_Statics::NewProp_ScaleRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AActor_K2_AttachToActor_Statics::NewProp_RotationRule = { "RotationRule", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventK2_AttachToActor_Parms, RotationRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AActor_K2_AttachToActor_Statics::NewProp_RotationRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AActor_K2_AttachToActor_Statics::NewProp_LocationRule = { "LocationRule", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventK2_AttachToActor_Parms, LocationRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AActor_K2_AttachToActor_Statics::NewProp_LocationRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AActor_K2_AttachToActor_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventK2_AttachToActor_Parms, SocketName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_K2_AttachToActor_Statics::NewProp_ParentActor = { "ParentActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventK2_AttachToActor_Parms, ParentActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_K2_AttachToActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AttachToActor_Statics::NewProp_bWeldSimulatedBodies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AttachToActor_Statics::NewProp_ScaleRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AttachToActor_Statics::NewProp_ScaleRule_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AttachToActor_Statics::NewProp_RotationRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AttachToActor_Statics::NewProp_RotationRule_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AttachToActor_Statics::NewProp_LocationRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AttachToActor_Statics::NewProp_LocationRule_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AttachToActor_Statics::NewProp_SocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AttachToActor_Statics::NewProp_ParentActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_K2_AttachToActor_Statics::Function_MetaDataParams[] = {
		{ "bWeldSimulatedBodies", "TRUE" },
		{ "Category", "Utilities|Transformation" },
		{ "Comment", "/**\n\x09 * Attaches the RootComponent of this Actor to the supplied actor, optionally at a named socket.\n\x09 * @param ParentActor\x09\x09\x09\x09""Actor to attach this actor's RootComponent to\n\x09 * @param SocketName\x09\x09\x09\x09Socket name to attach to, if any\n\x09 * @param LocationRule\x09\x09\x09\x09How to handle translation when attaching.\n\x09 * @param RotationRule\x09\x09\x09\x09How to handle rotation when attaching.\n\x09 * @param ScaleRule\x09\x09\x09\x09\x09How to handle scale when attaching.\n\x09 * @param bWeldSimulatedBodies\x09\x09Whether to weld together simulated physics bodies.\n\x09 */" },
		{ "DisplayName", "AttachActorToActor" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ScriptName", "AttachToActor" },
		{ "ToolTip", "Attaches the RootComponent of this Actor to the supplied actor, optionally at a named socket.\n@param ParentActor                           Actor to attach this actor's RootComponent to\n@param SocketName                            Socket name to attach to, if any\n@param LocationRule                          How to handle translation when attaching.\n@param RotationRule                          How to handle rotation when attaching.\n@param ScaleRule                                     How to handle scale when attaching.\n@param bWeldSimulatedBodies          Whether to weld together simulated physics bodies." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_K2_AttachToActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "K2_AttachToActor", nullptr, nullptr, sizeof(Actor_eventK2_AttachToActor_Parms), Z_Construct_UFunction_AActor_K2_AttachToActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_AttachToActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_K2_AttachToActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_AttachToActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_K2_AttachToActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_K2_AttachToActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_K2_AttachToComponent_Statics
	{
		struct Actor_eventK2_AttachToComponent_Parms
		{
			USceneComponent* Parent;
			FName SocketName;
			EAttachmentRule LocationRule;
			EAttachmentRule RotationRule;
			EAttachmentRule ScaleRule;
			bool bWeldSimulatedBodies;
		};
		static void NewProp_bWeldSimulatedBodies_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWeldSimulatedBodies;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ScaleRule;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ScaleRule_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RotationRule;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RotationRule_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LocationRule;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LocationRule_Underlying;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Parent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AActor_K2_AttachToComponent_Statics::NewProp_bWeldSimulatedBodies_SetBit(void* Obj)
	{
		((Actor_eventK2_AttachToComponent_Parms*)Obj)->bWeldSimulatedBodies = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_AttachToComponent_Statics::NewProp_bWeldSimulatedBodies = { "bWeldSimulatedBodies", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Actor_eventK2_AttachToComponent_Parms), &Z_Construct_UFunction_AActor_K2_AttachToComponent_Statics::NewProp_bWeldSimulatedBodies_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AActor_K2_AttachToComponent_Statics::NewProp_ScaleRule = { "ScaleRule", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventK2_AttachToComponent_Parms, ScaleRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AActor_K2_AttachToComponent_Statics::NewProp_ScaleRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AActor_K2_AttachToComponent_Statics::NewProp_RotationRule = { "RotationRule", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventK2_AttachToComponent_Parms, RotationRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AActor_K2_AttachToComponent_Statics::NewProp_RotationRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AActor_K2_AttachToComponent_Statics::NewProp_LocationRule = { "LocationRule", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventK2_AttachToComponent_Parms, LocationRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AActor_K2_AttachToComponent_Statics::NewProp_LocationRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AActor_K2_AttachToComponent_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventK2_AttachToComponent_Parms, SocketName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_K2_AttachToComponent_Statics::NewProp_Parent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_K2_AttachToComponent_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventK2_AttachToComponent_Parms, Parent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AActor_K2_AttachToComponent_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_AttachToComponent_Statics::NewProp_Parent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_K2_AttachToComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AttachToComponent_Statics::NewProp_bWeldSimulatedBodies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AttachToComponent_Statics::NewProp_ScaleRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AttachToComponent_Statics::NewProp_ScaleRule_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AttachToComponent_Statics::NewProp_RotationRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AttachToComponent_Statics::NewProp_RotationRule_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AttachToComponent_Statics::NewProp_LocationRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AttachToComponent_Statics::NewProp_LocationRule_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AttachToComponent_Statics::NewProp_SocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AttachToComponent_Statics::NewProp_Parent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_K2_AttachToComponent_Statics::Function_MetaDataParams[] = {
		{ "bWeldSimulatedBodies", "TRUE" },
		{ "Category", "Utilities|Transformation" },
		{ "Comment", "/**\n\x09 * Attaches the RootComponent of this Actor to the supplied component, optionally at a named socket. It is not valid to call this on components that are not Registered.\n\x09 * @param Parent\x09\x09\x09\x09\x09Parent to attach to.\n\x09 * @param SocketName\x09\x09\x09\x09Optional socket to attach to on the parent.\n\x09 * @param LocationRule\x09\x09\x09\x09How to handle translation when attaching.\n\x09 * @param RotationRule\x09\x09\x09\x09How to handle rotation when attaching.\n\x09 * @param ScaleRule\x09\x09\x09\x09\x09How to handle scale when attaching.\n\x09 * @param bWeldSimulatedBodies\x09\x09Whether to weld together simulated physics bodies.\n\x09 */" },
		{ "DisplayName", "AttachActorToComponent" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ScriptName", "AttachToComponent" },
		{ "ToolTip", "Attaches the RootComponent of this Actor to the supplied component, optionally at a named socket. It is not valid to call this on components that are not Registered.\n@param Parent                                        Parent to attach to.\n@param SocketName                            Optional socket to attach to on the parent.\n@param LocationRule                          How to handle translation when attaching.\n@param RotationRule                          How to handle rotation when attaching.\n@param ScaleRule                                     How to handle scale when attaching.\n@param bWeldSimulatedBodies          Whether to weld together simulated physics bodies." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_K2_AttachToComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "K2_AttachToComponent", nullptr, nullptr, sizeof(Actor_eventK2_AttachToComponent_Parms), Z_Construct_UFunction_AActor_K2_AttachToComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_AttachToComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_K2_AttachToComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_AttachToComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_K2_AttachToComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_K2_AttachToComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_K2_DestroyActor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_K2_DestroyActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities" },
		{ "Comment", "/** Destroy the actor */" },
		{ "DisplayName", "DestroyActor" },
		{ "Keywords", "Delete" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ScriptName", "DestroyActor" },
		{ "ToolTip", "Destroy the actor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_K2_DestroyActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "K2_DestroyActor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_K2_DestroyActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_DestroyActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_K2_DestroyActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_K2_DestroyActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_K2_DestroyComponent_Statics
	{
		struct Actor_eventK2_DestroyComponent_Parms
		{
			UActorComponent* Component;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_K2_DestroyComponent_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_K2_DestroyComponent_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventK2_DestroyComponent_Parms, Component), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AActor_K2_DestroyComponent_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_DestroyComponent_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_K2_DestroyComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_DestroyComponent_Statics::NewProp_Component,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_K2_DestroyComponent_Statics::Function_MetaDataParams[] = {
		{ "BlueprintProtected", "true" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use Component.DestroyComponent instead" },
		{ "DisplayName", "DestroyComponent" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ScriptName", "DestroyComponent" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_K2_DestroyComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "K2_DestroyComponent", nullptr, nullptr, sizeof(Actor_eventK2_DestroyComponent_Parms), Z_Construct_UFunction_AActor_K2_DestroyComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_DestroyComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_K2_DestroyComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_DestroyComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_K2_DestroyComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_K2_DestroyComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_K2_DetachFromActor_Statics
	{
		struct Actor_eventK2_DetachFromActor_Parms
		{
			EDetachmentRule LocationRule;
			EDetachmentRule RotationRule;
			EDetachmentRule ScaleRule;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ScaleRule;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ScaleRule_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RotationRule;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RotationRule_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LocationRule;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LocationRule_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AActor_K2_DetachFromActor_Statics::NewProp_ScaleRule = { "ScaleRule", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventK2_DetachFromActor_Parms, ScaleRule), Z_Construct_UEnum_Engine_EDetachmentRule, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AActor_K2_DetachFromActor_Statics::NewProp_ScaleRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AActor_K2_DetachFromActor_Statics::NewProp_RotationRule = { "RotationRule", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventK2_DetachFromActor_Parms, RotationRule), Z_Construct_UEnum_Engine_EDetachmentRule, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AActor_K2_DetachFromActor_Statics::NewProp_RotationRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AActor_K2_DetachFromActor_Statics::NewProp_LocationRule = { "LocationRule", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventK2_DetachFromActor_Parms, LocationRule), Z_Construct_UEnum_Engine_EDetachmentRule, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AActor_K2_DetachFromActor_Statics::NewProp_LocationRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_K2_DetachFromActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_DetachFromActor_Statics::NewProp_ScaleRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_DetachFromActor_Statics::NewProp_ScaleRule_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_DetachFromActor_Statics::NewProp_RotationRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_DetachFromActor_Statics::NewProp_RotationRule_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_DetachFromActor_Statics::NewProp_LocationRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_DetachFromActor_Statics::NewProp_LocationRule_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_K2_DetachFromActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Transformation" },
		{ "Comment", "/** \n\x09 * Detaches the RootComponent of this Actor from any SceneComponent it is currently attached to. \n\x09 * @param  LocationRule\x09\x09\x09\x09How to handle translation when detaching.\n\x09 * @param  RotationRule\x09\x09\x09\x09How to handle rotation when detaching.\n\x09 * @param  ScaleRule\x09\x09\x09\x09How to handle scale when detaching.\n\x09 */" },
		{ "CPP_Default_LocationRule", "KeepRelative" },
		{ "CPP_Default_RotationRule", "KeepRelative" },
		{ "CPP_Default_ScaleRule", "KeepRelative" },
		{ "DisplayName", "DetachFromActor" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ScriptName", "DetachFromActor" },
		{ "ToolTip", "Detaches the RootComponent of this Actor from any SceneComponent it is currently attached to.\n@param  LocationRule                         How to handle translation when detaching.\n@param  RotationRule                         How to handle rotation when detaching.\n@param  ScaleRule                            How to handle scale when detaching." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_K2_DetachFromActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "K2_DetachFromActor", nullptr, nullptr, sizeof(Actor_eventK2_DetachFromActor_Parms), Z_Construct_UFunction_AActor_K2_DetachFromActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_DetachFromActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_K2_DetachFromActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_DetachFromActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_K2_DetachFromActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_K2_DetachFromActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_K2_GetActorLocation_Statics
	{
		struct Actor_eventK2_GetActorLocation_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_K2_GetActorLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventK2_GetActorLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_K2_GetActorLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_GetActorLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_K2_GetActorLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Transformation" },
		{ "Comment", "/** Returns the location of the RootComponent of this Actor */" },
		{ "DisplayName", "GetActorLocation" },
		{ "Keywords", "position" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ScriptName", "GetActorLocation" },
		{ "ToolTip", "Returns the location of the RootComponent of this Actor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_K2_GetActorLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "K2_GetActorLocation", nullptr, nullptr, sizeof(Actor_eventK2_GetActorLocation_Parms), Z_Construct_UFunction_AActor_K2_GetActorLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_GetActorLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_K2_GetActorLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_GetActorLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_K2_GetActorLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_K2_GetActorLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_K2_GetActorRotation_Statics
	{
		struct Actor_eventK2_GetActorRotation_Parms
		{
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_K2_GetActorRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventK2_GetActorRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_K2_GetActorRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_GetActorRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_K2_GetActorRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Transformation" },
		{ "Comment", "/** Returns rotation of the RootComponent of this Actor. */" },
		{ "DisplayName", "GetActorRotation" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ScriptName", "GetActorRotation" },
		{ "ToolTip", "Returns rotation of the RootComponent of this Actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_K2_GetActorRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "K2_GetActorRotation", nullptr, nullptr, sizeof(Actor_eventK2_GetActorRotation_Parms), Z_Construct_UFunction_AActor_K2_GetActorRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_GetActorRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_K2_GetActorRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_GetActorRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_K2_GetActorRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_K2_GetActorRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_K2_GetComponentsByClass_Statics
	{
		struct Actor_eventK2_GetComponentsByClass_Parms
		{
			TSubclassOf<UActorComponent>  ComponentClass;
			TArray<UActorComponent*> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ComponentClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_K2_GetComponentsByClass_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AActor_K2_GetComponentsByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventK2_GetComponentsByClass_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AActor_K2_GetComponentsByClass_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_GetComponentsByClass_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_K2_GetComponentsByClass_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AActor_K2_GetComponentsByClass_Statics::NewProp_ComponentClass = { "ComponentClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventK2_GetComponentsByClass_Parms, ComponentClass), Z_Construct_UClass_UActorComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_K2_GetComponentsByClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_GetComponentsByClass_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_GetComponentsByClass_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_GetComponentsByClass_Statics::NewProp_ComponentClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_K2_GetComponentsByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Actor" },
		{ "Comment", "/**\n\x09 * Gets all the components that inherit from the given class.\n\x09 * Currently returns an array of UActorComponent which must be cast to the correct type.\n\x09 * This intended to only be used by blueprints. Use GetComponents() in C++.\n\x09 */" },
		{ "ComponentClass", "ActorComponent" },
		{ "DeterminesOutputType", "ComponentClass" },
		{ "DisplayName", "GetComponentsByClass" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ScriptName", "GetComponentsByClass" },
		{ "ToolTip", "Gets all the components that inherit from the given class.\nCurrently returns an array of UActorComponent which must be cast to the correct type.\nThis intended to only be used by blueprints. Use GetComponents() in C++." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_K2_GetComponentsByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "K2_GetComponentsByClass", nullptr, nullptr, sizeof(Actor_eventK2_GetComponentsByClass_Parms), Z_Construct_UFunction_AActor_K2_GetComponentsByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_GetComponentsByClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_K2_GetComponentsByClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_GetComponentsByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_K2_GetComponentsByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_K2_GetComponentsByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_K2_GetRootComponent_Statics
	{
		struct Actor_eventK2_GetRootComponent_Parms
		{
			USceneComponent* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_K2_GetRootComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_K2_GetRootComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventK2_GetRootComponent_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AActor_K2_GetRootComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_GetRootComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_K2_GetRootComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_GetRootComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_K2_GetRootComponent_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Comment", "/** Returns the RootComponent of this Actor */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Returns the RootComponent of this Actor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_K2_GetRootComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "K2_GetRootComponent", nullptr, nullptr, sizeof(Actor_eventK2_GetRootComponent_Parms), Z_Construct_UFunction_AActor_K2_GetRootComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_GetRootComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_K2_GetRootComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_GetRootComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_K2_GetRootComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_K2_GetRootComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_K2_OnBecomeViewTarget_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PC;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_K2_OnBecomeViewTarget_Statics::NewProp_PC = { "PC", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventK2_OnBecomeViewTarget_Parms, PC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_K2_OnBecomeViewTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_OnBecomeViewTarget_Statics::NewProp_PC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_K2_OnBecomeViewTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** Event called when this Actor becomes the view target for the given PlayerController. */" },
		{ "DisplayName", "OnBecomeViewTarget" },
		{ "Keywords", "Activate Camera" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ScriptName", "OnBecomeViewTarget" },
		{ "ToolTip", "Event called when this Actor becomes the view target for the given PlayerController." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_K2_OnBecomeViewTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "K2_OnBecomeViewTarget", nullptr, nullptr, sizeof(Actor_eventK2_OnBecomeViewTarget_Parms), Z_Construct_UFunction_AActor_K2_OnBecomeViewTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_OnBecomeViewTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_K2_OnBecomeViewTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_OnBecomeViewTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_K2_OnBecomeViewTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_K2_OnBecomeViewTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_K2_OnEndViewTarget_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PC;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_K2_OnEndViewTarget_Statics::NewProp_PC = { "PC", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventK2_OnEndViewTarget_Parms, PC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_K2_OnEndViewTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_OnEndViewTarget_Statics::NewProp_PC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_K2_OnEndViewTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** Event called when this Actor is no longer the view target for the given PlayerController. */" },
		{ "DisplayName", "OnEndViewTarget" },
		{ "Keywords", "Deactivate Camera" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ScriptName", "OnEndViewTarget" },
		{ "ToolTip", "Event called when this Actor is no longer the view target for the given PlayerController." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_K2_OnEndViewTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "K2_OnEndViewTarget", nullptr, nullptr, sizeof(Actor_eventK2_OnEndViewTarget_Parms), Z_Construct_UFunction_AActor_K2_OnEndViewTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_OnEndViewTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_K2_OnEndViewTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_OnEndViewTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_K2_OnEndViewTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_K2_OnEndViewTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_K2_OnReset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_K2_OnReset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** Event called when this Actor is reset to its initial state - used when restarting level without reloading. */" },
		{ "DisplayName", "OnReset" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ScriptName", "OnReset" },
		{ "ToolTip", "Event called when this Actor is reset to its initial state - used when restarting level without reloading." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_K2_OnReset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "K2_OnReset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_K2_OnReset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_OnReset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_K2_OnReset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_K2_OnReset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_K2_SetActorLocation_Statics
	{
		struct Actor_eventK2_SetActorLocation_Parms
		{
			FVector NewLocation;
			bool bSweep;
			FHitResult SweepHitResult;
			bool bTeleport;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bTeleport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTeleport;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepHitResult;
		static void NewProp_bSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSweep;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AActor_K2_SetActorLocation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Actor_eventK2_SetActorLocation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_SetActorLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Actor_eventK2_SetActorLocation_Parms), &Z_Construct_UFunction_AActor_K2_SetActorLocation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AActor_K2_SetActorLocation_Statics::NewProp_bTeleport_SetBit(void* Obj)
	{
		((Actor_eventK2_SetActorLocation_Parms*)Obj)->bTeleport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_SetActorLocation_Statics::NewProp_bTeleport = { "bTeleport", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Actor_eventK2_SetActorLocation_Parms), &Z_Construct_UFunction_AActor_K2_SetActorLocation_Statics::NewProp_bTeleport_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_K2_SetActorLocation_Statics::NewProp_SweepHitResult = { "SweepHitResult", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventK2_SetActorLocation_Parms, SweepHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AActor_K2_SetActorLocation_Statics::NewProp_bSweep_SetBit(void* Obj)
	{
		((Actor_eventK2_SetActorLocation_Parms*)Obj)->bSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_SetActorLocation_Statics::NewProp_bSweep = { "bSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Actor_eventK2_SetActorLocation_Parms), &Z_Construct_UFunction_AActor_K2_SetActorLocation_Statics::NewProp_bSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_K2_SetActorLocation_Statics::NewProp_NewLocation = { "NewLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventK2_SetActorLocation_Parms, NewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_K2_SetActorLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_SetActorLocation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_SetActorLocation_Statics::NewProp_bTeleport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_SetActorLocation_Statics::NewProp_SweepHitResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_SetActorLocation_Statics::NewProp_bSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_SetActorLocation_Statics::NewProp_NewLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_K2_SetActorLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Transformation" },
		{ "Comment", "/** \n\x09 * Move the Actor to the specified location.\n\x09 * @param NewLocation\x09The new location to move the Actor to.\n\x09 * @param bSweep\x09\x09Whether we sweep to the destination location, triggering overlaps along the way and stopping short of the target if blocked by something.\n\x09 *\x09\x09\x09\x09\x09\x09Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.\n\x09 * @param bTeleport\x09\x09Whether we teleport the physics state (if physics collision is enabled for this object).\n\x09 *\x09\x09\x09\x09\x09\x09If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n\x09 *\x09\x09\x09\x09\x09\x09If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n\x09 *\x09\x09\x09\x09\x09\x09If CCD is on and not teleporting, this will affect objects along the entire swept volume.\n\x09 * @param SweepHitResult\x09The hit result from the move if swept.\n\x09 * @return\x09Whether the location was successfully set (if not swept), or whether movement occurred at all (if swept).\n\x09 */" },
		{ "DisplayName", "SetActorLocation" },
		{ "Keywords", "position" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ScriptName", "SetActorLocation" },
		{ "ToolTip", "Move the Actor to the specified location.\n@param NewLocation   The new location to move the Actor to.\n@param bSweep                Whether we sweep to the destination location, triggering overlaps along the way and stopping short of the target if blocked by something.\n                                             Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.\n@param bTeleport             Whether we teleport the physics state (if physics collision is enabled for this object).\n                                             If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n                                             If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n                                             If CCD is on and not teleporting, this will affect objects along the entire swept volume.\n@param SweepHitResult        The hit result from the move if swept.\n@return      Whether the location was successfully set (if not swept), or whether movement occurred at all (if swept)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_K2_SetActorLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "K2_SetActorLocation", nullptr, nullptr, sizeof(Actor_eventK2_SetActorLocation_Parms), Z_Construct_UFunction_AActor_K2_SetActorLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_SetActorLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_K2_SetActorLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_SetActorLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_K2_SetActorLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_K2_SetActorLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_K2_SetActorLocationAndRotation_Statics
	{
		struct Actor_eventK2_SetActorLocationAndRotation_Parms
		{
			FVector NewLocation;
			FRotator NewRotation;
			bool bSweep;
			FHitResult SweepHitResult;
			bool bTeleport;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bTeleport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTeleport;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepHitResult;
		static void NewProp_bSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSweep;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewRotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AActor_K2_SetActorLocationAndRotation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Actor_eventK2_SetActorLocationAndRotation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_SetActorLocationAndRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Actor_eventK2_SetActorLocationAndRotation_Parms), &Z_Construct_UFunction_AActor_K2_SetActorLocationAndRotation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AActor_K2_SetActorLocationAndRotation_Statics::NewProp_bTeleport_SetBit(void* Obj)
	{
		((Actor_eventK2_SetActorLocationAndRotation_Parms*)Obj)->bTeleport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_SetActorLocationAndRotation_Statics::NewProp_bTeleport = { "bTeleport", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Actor_eventK2_SetActorLocationAndRotation_Parms), &Z_Construct_UFunction_AActor_K2_SetActorLocationAndRotation_Statics::NewProp_bTeleport_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_K2_SetActorLocationAndRotation_Statics::NewProp_SweepHitResult = { "SweepHitResult", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventK2_SetActorLocationAndRotation_Parms, SweepHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AActor_K2_SetActorLocationAndRotation_Statics::NewProp_bSweep_SetBit(void* Obj)
	{
		((Actor_eventK2_SetActorLocationAndRotation_Parms*)Obj)->bSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_SetActorLocationAndRotation_Statics::NewProp_bSweep = { "bSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Actor_eventK2_SetActorLocationAndRotation_Parms), &Z_Construct_UFunction_AActor_K2_SetActorLocationAndRotation_Statics::NewProp_bSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_K2_SetActorLocationAndRotation_Statics::NewProp_NewRotation = { "NewRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventK2_SetActorLocationAndRotation_Parms, NewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_K2_SetActorLocationAndRotation_Statics::NewProp_NewLocation = { "NewLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventK2_SetActorLocationAndRotation_Parms, NewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_K2_SetActorLocationAndRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_SetActorLocationAndRotation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_SetActorLocationAndRotation_Statics::NewProp_bTeleport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_SetActorLocationAndRotation_Statics::NewProp_SweepHitResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_SetActorLocationAndRotation_Statics::NewProp_bSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_SetActorLocationAndRotation_Statics::NewProp_NewRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_SetActorLocationAndRotation_Statics::NewProp_NewLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_K2_SetActorLocationAndRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Transformation" },
		{ "Comment", "/** \n\x09 * Move the actor instantly to the specified location and rotation.\n\x09 * \n\x09 * @param NewLocation\x09\x09The new location to teleport the Actor to.\n\x09 * @param NewRotation\x09\x09The new rotation for the Actor.\n\x09 * @param bSweep\x09\x09\x09Whether we sweep to the destination location, triggering overlaps along the way and stopping short of the target if blocked by something.\n\x09 *\x09\x09\x09\x09\x09\x09\x09Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.\n\x09 * @param bTeleport\x09\x09\x09Whether we teleport the physics state (if physics collision is enabled for this object).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If CCD is on and not teleporting, this will affect objects along the entire swept volume.\n\x09 * @param SweepHitResult\x09The hit result from the move if swept.\n\x09 * @return\x09Whether the rotation was successfully set.\n\x09 */" },
		{ "DisplayName", "SetActorLocationAndRotation" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ScriptName", "SetActorLocationAndRotation" },
		{ "ToolTip", "Move the actor instantly to the specified location and rotation.\n\n@param NewLocation           The new location to teleport the Actor to.\n@param NewRotation           The new rotation for the Actor.\n@param bSweep                        Whether we sweep to the destination location, triggering overlaps along the way and stopping short of the target if blocked by something.\n                                                     Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.\n@param bTeleport                     Whether we teleport the physics state (if physics collision is enabled for this object).\n                                                     If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n                                                     If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n                                                     If CCD is on and not teleporting, this will affect objects along the entire swept volume.\n@param SweepHitResult        The hit result from the move if swept.\n@return      Whether the rotation was successfully set." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_K2_SetActorLocationAndRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "K2_SetActorLocationAndRotation", nullptr, nullptr, sizeof(Actor_eventK2_SetActorLocationAndRotation_Parms), Z_Construct_UFunction_AActor_K2_SetActorLocationAndRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_SetActorLocationAndRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_K2_SetActorLocationAndRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_SetActorLocationAndRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_K2_SetActorLocationAndRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_K2_SetActorLocationAndRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_K2_SetActorRelativeLocation_Statics
	{
		struct Actor_eventK2_SetActorRelativeLocation_Parms
		{
			FVector NewRelativeLocation;
			bool bSweep;
			FHitResult SweepHitResult;
			bool bTeleport;
		};
		static void NewProp_bTeleport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTeleport;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepHitResult;
		static void NewProp_bSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSweep;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewRelativeLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AActor_K2_SetActorRelativeLocation_Statics::NewProp_bTeleport_SetBit(void* Obj)
	{
		((Actor_eventK2_SetActorRelativeLocation_Parms*)Obj)->bTeleport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_SetActorRelativeLocation_Statics::NewProp_bTeleport = { "bTeleport", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Actor_eventK2_SetActorRelativeLocation_Parms), &Z_Construct_UFunction_AActor_K2_SetActorRelativeLocation_Statics::NewProp_bTeleport_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_K2_SetActorRelativeLocation_Statics::NewProp_SweepHitResult = { "SweepHitResult", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventK2_SetActorRelativeLocation_Parms, SweepHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AActor_K2_SetActorRelativeLocation_Statics::NewProp_bSweep_SetBit(void* Obj)
	{
		((Actor_eventK2_SetActorRelativeLocation_Parms*)Obj)->bSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_SetActorRelativeLocation_Statics::NewProp_bSweep = { "bSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Actor_eventK2_SetActorRelativeLocation_Parms), &Z_Construct_UFunction_AActor_K2_SetActorRelativeLocation_Statics::NewProp_bSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_K2_SetActorRelativeLocation_Statics::NewProp_NewRelativeLocation = { "NewRelativeLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventK2_SetActorRelativeLocation_Parms, NewRelativeLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_K2_SetActorRelativeLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_SetActorRelativeLocation_Statics::NewProp_bTeleport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_SetActorRelativeLocation_Statics::NewProp_SweepHitResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_SetActorRelativeLocation_Statics::NewProp_bSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_SetActorRelativeLocation_Statics::NewProp_NewRelativeLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_K2_SetActorRelativeLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Transformation" },
		{ "Comment", "/**\n\x09 * Set the actor's RootComponent to the specified relative location.\n\x09 * @param NewRelativeLocation\x09New relative location of the actor's root component\n\x09 * @param bSweep\x09\x09\x09\x09Whether we sweep to the destination location, triggering overlaps along the way and stopping short of the target if blocked by something.\n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.\n\x09 * @param bTeleport\x09\x09\x09\x09Whether we teleport the physics state (if physics collision is enabled for this object).\n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09If CCD is on and not teleporting, this will affect objects along the entire swept volume.\n\x09 */" },
		{ "DisplayName", "SetActorRelativeLocation" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ScriptName", "SetActorRelativeLocation" },
		{ "ToolTip", "Set the actor's RootComponent to the specified relative location.\n@param NewRelativeLocation   New relative location of the actor's root component\n@param bSweep                                Whether we sweep to the destination location, triggering overlaps along the way and stopping short of the target if blocked by something.\n                                                             Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.\n@param bTeleport                             Whether we teleport the physics state (if physics collision is enabled for this object).\n                                                             If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n                                                             If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n                                                             If CCD is on and not teleporting, this will affect objects along the entire swept volume." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_K2_SetActorRelativeLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "K2_SetActorRelativeLocation", nullptr, nullptr, sizeof(Actor_eventK2_SetActorRelativeLocation_Parms), Z_Construct_UFunction_AActor_K2_SetActorRelativeLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_SetActorRelativeLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_K2_SetActorRelativeLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_SetActorRelativeLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_K2_SetActorRelativeLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_K2_SetActorRelativeLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_K2_SetActorRelativeRotation_Statics
	{
		struct Actor_eventK2_SetActorRelativeRotation_Parms
		{
			FRotator NewRelativeRotation;
			bool bSweep;
			FHitResult SweepHitResult;
			bool bTeleport;
		};
		static void NewProp_bTeleport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTeleport;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepHitResult;
		static void NewProp_bSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSweep;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewRelativeRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AActor_K2_SetActorRelativeRotation_Statics::NewProp_bTeleport_SetBit(void* Obj)
	{
		((Actor_eventK2_SetActorRelativeRotation_Parms*)Obj)->bTeleport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_SetActorRelativeRotation_Statics::NewProp_bTeleport = { "bTeleport", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Actor_eventK2_SetActorRelativeRotation_Parms), &Z_Construct_UFunction_AActor_K2_SetActorRelativeRotation_Statics::NewProp_bTeleport_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_K2_SetActorRelativeRotation_Statics::NewProp_SweepHitResult = { "SweepHitResult", nullptr, (EPropertyFlags)0x0010048000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventK2_SetActorRelativeRotation_Parms, SweepHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AActor_K2_SetActorRelativeRotation_Statics::NewProp_bSweep_SetBit(void* Obj)
	{
		((Actor_eventK2_SetActorRelativeRotation_Parms*)Obj)->bSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_SetActorRelativeRotation_Statics::NewProp_bSweep = { "bSweep", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Actor_eventK2_SetActorRelativeRotation_Parms), &Z_Construct_UFunction_AActor_K2_SetActorRelativeRotation_Statics::NewProp_bSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_K2_SetActorRelativeRotation_Statics::NewProp_NewRelativeRotation = { "NewRelativeRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventK2_SetActorRelativeRotation_Parms, NewRelativeRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_K2_SetActorRelativeRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_SetActorRelativeRotation_Statics::NewProp_bTeleport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_SetActorRelativeRotation_Statics::NewProp_SweepHitResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_SetActorRelativeRotation_Statics::NewProp_bSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_SetActorRelativeRotation_Statics::NewProp_NewRelativeRotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_K2_SetActorRelativeRotation_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bSweep,SweepHitResult,bTeleport" },
		{ "Category", "Utilities|Transformation" },
		{ "Comment", "/**\n\x09 * Set the actor's RootComponent to the specified relative rotation\n\x09 * @param NewRelativeRotation\x09New relative rotation of the actor's root component\n\x09 * @param bSweep\x09\x09\x09\x09Whether we sweep to the destination location, triggering overlaps along the way and stopping short of the target if blocked by something.\n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.\n\x09 * @param bTeleport\x09\x09\x09\x09Whether we teleport the physics state (if physics collision is enabled for this object).\n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09If CCD is on and not teleporting, this will affect objects along the entire swept volume.\n\x09 */" },
		{ "DisplayName", "SetActorRelativeRotation" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ScriptName", "SetActorRelativeRotation" },
		{ "ToolTip", "Set the actor's RootComponent to the specified relative rotation\n@param NewRelativeRotation   New relative rotation of the actor's root component\n@param bSweep                                Whether we sweep to the destination location, triggering overlaps along the way and stopping short of the target if blocked by something.\n                                                             Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.\n@param bTeleport                             Whether we teleport the physics state (if physics collision is enabled for this object).\n                                                             If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n                                                             If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n                                                             If CCD is on and not teleporting, this will affect objects along the entire swept volume." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_K2_SetActorRelativeRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "K2_SetActorRelativeRotation", nullptr, nullptr, sizeof(Actor_eventK2_SetActorRelativeRotation_Parms), Z_Construct_UFunction_AActor_K2_SetActorRelativeRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_SetActorRelativeRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_K2_SetActorRelativeRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_SetActorRelativeRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_K2_SetActorRelativeRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_K2_SetActorRelativeRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_K2_SetActorRelativeTransform_Statics
	{
		struct Actor_eventK2_SetActorRelativeTransform_Parms
		{
			FTransform NewRelativeTransform;
			bool bSweep;
			FHitResult SweepHitResult;
			bool bTeleport;
		};
		static void NewProp_bTeleport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTeleport;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepHitResult;
		static void NewProp_bSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewRelativeTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewRelativeTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AActor_K2_SetActorRelativeTransform_Statics::NewProp_bTeleport_SetBit(void* Obj)
	{
		((Actor_eventK2_SetActorRelativeTransform_Parms*)Obj)->bTeleport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_SetActorRelativeTransform_Statics::NewProp_bTeleport = { "bTeleport", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Actor_eventK2_SetActorRelativeTransform_Parms), &Z_Construct_UFunction_AActor_K2_SetActorRelativeTransform_Statics::NewProp_bTeleport_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_K2_SetActorRelativeTransform_Statics::NewProp_SweepHitResult = { "SweepHitResult", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventK2_SetActorRelativeTransform_Parms, SweepHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AActor_K2_SetActorRelativeTransform_Statics::NewProp_bSweep_SetBit(void* Obj)
	{
		((Actor_eventK2_SetActorRelativeTransform_Parms*)Obj)->bSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_SetActorRelativeTransform_Statics::NewProp_bSweep = { "bSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Actor_eventK2_SetActorRelativeTransform_Parms), &Z_Construct_UFunction_AActor_K2_SetActorRelativeTransform_Statics::NewProp_bSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_K2_SetActorRelativeTransform_Statics::NewProp_NewRelativeTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_K2_SetActorRelativeTransform_Statics::NewProp_NewRelativeTransform = { "NewRelativeTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventK2_SetActorRelativeTransform_Parms, NewRelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_AActor_K2_SetActorRelativeTransform_Statics::NewProp_NewRelativeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_SetActorRelativeTransform_Statics::NewProp_NewRelativeTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_K2_SetActorRelativeTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_SetActorRelativeTransform_Statics::NewProp_bTeleport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_SetActorRelativeTransform_Statics::NewProp_SweepHitResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_SetActorRelativeTransform_Statics::NewProp_bSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_SetActorRelativeTransform_Statics::NewProp_NewRelativeTransform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_K2_SetActorRelativeTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Transformation" },
		{ "Comment", "/**\n\x09 * Set the actor's RootComponent to the specified relative transform\n\x09 * @param NewRelativeTransform\x09\x09New relative transform of the actor's root component\n\x09 * @param bSweep\x09\x09\x09Whether we sweep to the destination location, triggering overlaps along the way and stopping short of the target if blocked by something.\n\x09 *\x09\x09\x09\x09\x09\x09\x09Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.\n\x09 * @param bTeleport\x09\x09\x09Whether we teleport the physics state (if physics collision is enabled for this object).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If CCD is on and not teleporting, this will affect objects along the entire swept volume.\n\x09 */" },
		{ "DisplayName", "SetActorRelativeTransform" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ScriptName", "SetActorRelativeTransform" },
		{ "ToolTip", "Set the actor's RootComponent to the specified relative transform\n@param NewRelativeTransform          New relative transform of the actor's root component\n@param bSweep                        Whether we sweep to the destination location, triggering overlaps along the way and stopping short of the target if blocked by something.\n                                                     Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.\n@param bTeleport                     Whether we teleport the physics state (if physics collision is enabled for this object).\n                                                     If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n                                                     If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n                                                     If CCD is on and not teleporting, this will affect objects along the entire swept volume." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_K2_SetActorRelativeTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "K2_SetActorRelativeTransform", nullptr, nullptr, sizeof(Actor_eventK2_SetActorRelativeTransform_Parms), Z_Construct_UFunction_AActor_K2_SetActorRelativeTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_SetActorRelativeTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_K2_SetActorRelativeTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_SetActorRelativeTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_K2_SetActorRelativeTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_K2_SetActorRelativeTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_K2_SetActorRotation_Statics
	{
		struct Actor_eventK2_SetActorRotation_Parms
		{
			FRotator NewRotation;
			bool bTeleportPhysics;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bTeleportPhysics_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTeleportPhysics;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AActor_K2_SetActorRotation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Actor_eventK2_SetActorRotation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_SetActorRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Actor_eventK2_SetActorRotation_Parms), &Z_Construct_UFunction_AActor_K2_SetActorRotation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AActor_K2_SetActorRotation_Statics::NewProp_bTeleportPhysics_SetBit(void* Obj)
	{
		((Actor_eventK2_SetActorRotation_Parms*)Obj)->bTeleportPhysics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_SetActorRotation_Statics::NewProp_bTeleportPhysics = { "bTeleportPhysics", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Actor_eventK2_SetActorRotation_Parms), &Z_Construct_UFunction_AActor_K2_SetActorRotation_Statics::NewProp_bTeleportPhysics_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_K2_SetActorRotation_Statics::NewProp_NewRotation = { "NewRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventK2_SetActorRotation_Parms, NewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_K2_SetActorRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_SetActorRotation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_SetActorRotation_Statics::NewProp_bTeleportPhysics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_SetActorRotation_Statics::NewProp_NewRotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_K2_SetActorRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Transformation" },
		{ "Comment", "/** \n\x09 * Set the Actor's rotation instantly to the specified rotation.\n\x09 * \n\x09 * @param\x09NewRotation\x09The new rotation for the Actor.\n\x09 * @param\x09""bTeleportPhysics Whether we teleport the physics state (if physics collision is enabled for this object).\n\x09 *\x09\x09\x09If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n\x09 *\x09\x09\x09If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n\x09 * @return\x09Whether the rotation was successfully set.\n\x09 */" },
		{ "DisplayName", "SetActorRotation" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ScriptName", "SetActorRotation" },
		{ "ToolTip", "Set the Actor's rotation instantly to the specified rotation.\n\n@param       NewRotation     The new rotation for the Actor.\n@param       bTeleportPhysics Whether we teleport the physics state (if physics collision is enabled for this object).\n                     If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n                     If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n@return      Whether the rotation was successfully set." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_K2_SetActorRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "K2_SetActorRotation", nullptr, nullptr, sizeof(Actor_eventK2_SetActorRotation_Parms), Z_Construct_UFunction_AActor_K2_SetActorRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_SetActorRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_K2_SetActorRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_SetActorRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_K2_SetActorRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_K2_SetActorRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_K2_SetActorTransform_Statics
	{
		struct Actor_eventK2_SetActorTransform_Parms
		{
			FTransform NewTransform;
			bool bSweep;
			FHitResult SweepHitResult;
			bool bTeleport;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bTeleport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTeleport;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepHitResult;
		static void NewProp_bSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AActor_K2_SetActorTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Actor_eventK2_SetActorTransform_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_SetActorTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Actor_eventK2_SetActorTransform_Parms), &Z_Construct_UFunction_AActor_K2_SetActorTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AActor_K2_SetActorTransform_Statics::NewProp_bTeleport_SetBit(void* Obj)
	{
		((Actor_eventK2_SetActorTransform_Parms*)Obj)->bTeleport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_SetActorTransform_Statics::NewProp_bTeleport = { "bTeleport", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Actor_eventK2_SetActorTransform_Parms), &Z_Construct_UFunction_AActor_K2_SetActorTransform_Statics::NewProp_bTeleport_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_K2_SetActorTransform_Statics::NewProp_SweepHitResult = { "SweepHitResult", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventK2_SetActorTransform_Parms, SweepHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AActor_K2_SetActorTransform_Statics::NewProp_bSweep_SetBit(void* Obj)
	{
		((Actor_eventK2_SetActorTransform_Parms*)Obj)->bSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_SetActorTransform_Statics::NewProp_bSweep = { "bSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Actor_eventK2_SetActorTransform_Parms), &Z_Construct_UFunction_AActor_K2_SetActorTransform_Statics::NewProp_bSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_K2_SetActorTransform_Statics::NewProp_NewTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_K2_SetActorTransform_Statics::NewProp_NewTransform = { "NewTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventK2_SetActorTransform_Parms, NewTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_AActor_K2_SetActorTransform_Statics::NewProp_NewTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_SetActorTransform_Statics::NewProp_NewTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_K2_SetActorTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_SetActorTransform_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_SetActorTransform_Statics::NewProp_bTeleport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_SetActorTransform_Statics::NewProp_SweepHitResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_SetActorTransform_Statics::NewProp_bSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_SetActorTransform_Statics::NewProp_NewTransform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_K2_SetActorTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Transformation" },
		{ "Comment", "/** \n\x09 * Set the Actors transform to the specified one.\n\x09 * @param NewTransform\x09\x09The new transform.\n\x09 * @param bSweep\x09\x09\x09Whether we sweep to the destination location, triggering overlaps along the way and stopping short of the target if blocked by something.\n\x09 *\x09\x09\x09\x09\x09\x09\x09Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.\n\x09 * @param bTeleport\x09\x09\x09Whether we teleport the physics state (if physics collision is enabled for this object).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If CCD is on and not teleporting, this will affect objects along the entire swept volume.\n\x09 */" },
		{ "DisplayName", "SetActorTransform" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ScriptName", "SetActorTransform" },
		{ "ToolTip", "Set the Actors transform to the specified one.\n@param NewTransform          The new transform.\n@param bSweep                        Whether we sweep to the destination location, triggering overlaps along the way and stopping short of the target if blocked by something.\n                                                     Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.\n@param bTeleport                     Whether we teleport the physics state (if physics collision is enabled for this object).\n                                                     If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n                                                     If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n                                                     If CCD is on and not teleporting, this will affect objects along the entire swept volume." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_K2_SetActorTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "K2_SetActorTransform", nullptr, nullptr, sizeof(Actor_eventK2_SetActorTransform_Parms), Z_Construct_UFunction_AActor_K2_SetActorTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_SetActorTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_K2_SetActorTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_SetActorTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_K2_SetActorTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_K2_SetActorTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_K2_TeleportTo_Statics
	{
		struct Actor_eventK2_TeleportTo_Parms
		{
			FVector DestLocation;
			FRotator DestRotation;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DestRotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DestLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AActor_K2_TeleportTo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Actor_eventK2_TeleportTo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_TeleportTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Actor_eventK2_TeleportTo_Parms), &Z_Construct_UFunction_AActor_K2_TeleportTo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_K2_TeleportTo_Statics::NewProp_DestRotation = { "DestRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventK2_TeleportTo_Parms, DestRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_K2_TeleportTo_Statics::NewProp_DestLocation = { "DestLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventK2_TeleportTo_Parms, DestLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_K2_TeleportTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_TeleportTo_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_TeleportTo_Statics::NewProp_DestRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_TeleportTo_Statics::NewProp_DestLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_K2_TeleportTo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Transformation" },
		{ "Comment", "/**\n\x09 * Teleport this actor to a new location. If the actor doesn't fit exactly at the location specified, tries to slightly move it out of walls and such.\n\x09 *\n\x09 * @param DestLocation The target destination point\n\x09 * @param DestRotation The target rotation at the destination\n\x09 * @return true if the actor has been successfully moved, or false if it couldn't fit.\n\x09 */" },
		{ "DisplayName", "Teleport" },
		{ "Keywords", "Move Position" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ScriptName", "Teleport" },
		{ "ToolTip", "Teleport this actor to a new location. If the actor doesn't fit exactly at the location specified, tries to slightly move it out of walls and such.\n\n@param DestLocation The target destination point\n@param DestRotation The target rotation at the destination\n@return true if the actor has been successfully moved, or false if it couldn't fit." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_K2_TeleportTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "K2_TeleportTo", nullptr, nullptr, sizeof(Actor_eventK2_TeleportTo_Parms), Z_Construct_UFunction_AActor_K2_TeleportTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_TeleportTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_K2_TeleportTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_TeleportTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_K2_TeleportTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_K2_TeleportTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_MakeMIDForMaterial_Statics
	{
		struct Actor_eventMakeMIDForMaterial_Parms
		{
			UMaterialInterface* Parent;
			UMaterialInstanceDynamic* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Parent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_MakeMIDForMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventMakeMIDForMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_MakeMIDForMaterial_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventMakeMIDForMaterial_Parms, Parent), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_MakeMIDForMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_MakeMIDForMaterial_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_MakeMIDForMaterial_Statics::NewProp_Parent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_MakeMIDForMaterial_Statics::Function_MetaDataParams[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "Rendering|Material" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use PrimitiveComponent.CreateAndSetMaterialInstanceDynamic instead." },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_MakeMIDForMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "MakeMIDForMaterial", nullptr, nullptr, sizeof(Actor_eventMakeMIDForMaterial_Parms), Z_Construct_UFunction_AActor_MakeMIDForMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_MakeMIDForMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_MakeMIDForMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_MakeMIDForMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_MakeMIDForMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_MakeMIDForMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_MakeNoise_Statics
	{
		struct Actor_eventMakeNoise_Parms
		{
			float Loudness;
			APawn* NoiseInstigator;
			FVector NoiseLocation;
			float MaxRange;
			FName Tag;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tag;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxRange;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NoiseLocation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NoiseInstigator;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Loudness;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AActor_MakeNoise_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventMakeNoise_Parms, Tag), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AActor_MakeNoise_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventMakeNoise_Parms, MaxRange), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_MakeNoise_Statics::NewProp_NoiseLocation = { "NoiseLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventMakeNoise_Parms, NoiseLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_MakeNoise_Statics::NewProp_NoiseInstigator = { "NoiseInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventMakeNoise_Parms, NoiseInstigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AActor_MakeNoise_Statics::NewProp_Loudness = { "Loudness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventMakeNoise_Parms, Loudness), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_MakeNoise_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_MakeNoise_Statics::NewProp_Tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_MakeNoise_Statics::NewProp_MaxRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_MakeNoise_Statics::NewProp_NoiseLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_MakeNoise_Statics::NewProp_NoiseInstigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_MakeNoise_Statics::NewProp_Loudness,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_MakeNoise_Statics::Function_MetaDataParams[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "AI" },
		{ "Comment", "/**\n\x09 * Trigger a noise caused by a given Pawn, at a given location.\n\x09 * Note that the NoiseInstigator Pawn MUST have a PawnNoiseEmitterComponent for the noise to be detected by a PawnSensingComponent.\n\x09 * Senders of MakeNoise should have an Instigator if they are not pawns, or pass a NoiseInstigator.\n\x09 *\n\x09 * @param Loudness The relative loudness of this noise. Usual range is 0 (no noise) to 1 (full volume). If MaxRange is used, this scales the max range, otherwise it affects the hearing range specified by the sensor.\n\x09 * @param NoiseInstigator Pawn responsible for this noise.  Uses the actor's Instigator if NoiseInstigator is null\n\x09 * @param NoiseLocation Position of noise source.  If zero vector, use the actor's location.\n\x09 * @param MaxRange Max range at which the sound may be heard. A value of 0 indicates no max range (though perception may have its own range). Loudness scales the range. (Note: not supported for legacy PawnSensingComponent, only for AIPerception)\n\x09 * @param Tag Identifier for the noise.\n\x09 */" },
		{ "CPP_Default_Loudness", "1.000000" },
		{ "CPP_Default_MaxRange", "0.000000" },
		{ "CPP_Default_NoiseInstigator", "None" },
		{ "CPP_Default_NoiseLocation", "" },
		{ "CPP_Default_Tag", "None" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Trigger a noise caused by a given Pawn, at a given location.\nNote that the NoiseInstigator Pawn MUST have a PawnNoiseEmitterComponent for the noise to be detected by a PawnSensingComponent.\nSenders of MakeNoise should have an Instigator if they are not pawns, or pass a NoiseInstigator.\n\n@param Loudness The relative loudness of this noise. Usual range is 0 (no noise) to 1 (full volume). If MaxRange is used, this scales the max range, otherwise it affects the hearing range specified by the sensor.\n@param NoiseInstigator Pawn responsible for this noise.  Uses the actor's Instigator if NoiseInstigator is null\n@param NoiseLocation Position of noise source.  If zero vector, use the actor's location.\n@param MaxRange Max range at which the sound may be heard. A value of 0 indicates no max range (though perception may have its own range). Loudness scales the range. (Note: not supported for legacy PawnSensingComponent, only for AIPerception)\n@param Tag Identifier for the noise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_MakeNoise_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "MakeNoise", nullptr, nullptr, sizeof(Actor_eventMakeNoise_Parms), Z_Construct_UFunction_AActor_MakeNoise_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_MakeNoise_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_MakeNoise_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_MakeNoise_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_MakeNoise()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_MakeNoise_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_OnRep_AttachmentReplication_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_OnRep_AttachmentReplication_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Called on client when updated AttachmentReplication value is received for this actor. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Called on client when updated AttachmentReplication value is received for this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_OnRep_AttachmentReplication_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "OnRep_AttachmentReplication", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_OnRep_AttachmentReplication_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_OnRep_AttachmentReplication_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_OnRep_AttachmentReplication()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_OnRep_AttachmentReplication_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_OnRep_Instigator_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_OnRep_Instigator_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Called on clients when Instigator is replicated. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Called on clients when Instigator is replicated." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_OnRep_Instigator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "OnRep_Instigator", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_OnRep_Instigator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_OnRep_Instigator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_OnRep_Instigator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_OnRep_Instigator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_OnRep_Owner_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_OnRep_Owner_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Called when owner changes, does nothing by default but can be overridden */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Called when owner changes, does nothing by default but can be overridden" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_OnRep_Owner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "OnRep_Owner", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_OnRep_Owner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_OnRep_Owner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_OnRep_Owner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_OnRep_Owner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_OnRep_ReplicatedMovement_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_OnRep_ReplicatedMovement_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** ReplicatedMovement struct replication event */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "ReplicatedMovement struct replication event" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_OnRep_ReplicatedMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "OnRep_ReplicatedMovement", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_OnRep_ReplicatedMovement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_OnRep_ReplicatedMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_OnRep_ReplicatedMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_OnRep_ReplicatedMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_OnRep_ReplicateMovement_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_OnRep_ReplicateMovement_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Called on client when updated bReplicateMovement value is received for this actor. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Called on client when updated bReplicateMovement value is received for this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_OnRep_ReplicateMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "OnRep_ReplicateMovement", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_OnRep_ReplicateMovement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_OnRep_ReplicateMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_OnRep_ReplicateMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_OnRep_ReplicateMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_PrestreamTextures_Statics
	{
		struct Actor_eventPrestreamTextures_Parms
		{
			float Seconds;
			bool bEnableStreaming;
			int32 CinematicTextureGroups;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CinematicTextureGroups;
		static void NewProp_bEnableStreaming_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableStreaming;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Seconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AActor_PrestreamTextures_Statics::NewProp_CinematicTextureGroups = { "CinematicTextureGroups", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventPrestreamTextures_Parms, CinematicTextureGroups), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AActor_PrestreamTextures_Statics::NewProp_bEnableStreaming_SetBit(void* Obj)
	{
		((Actor_eventPrestreamTextures_Parms*)Obj)->bEnableStreaming = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_PrestreamTextures_Statics::NewProp_bEnableStreaming = { "bEnableStreaming", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Actor_eventPrestreamTextures_Parms), &Z_Construct_UFunction_AActor_PrestreamTextures_Statics::NewProp_bEnableStreaming_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AActor_PrestreamTextures_Statics::NewProp_Seconds = { "Seconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventPrestreamTextures_Parms, Seconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_PrestreamTextures_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_PrestreamTextures_Statics::NewProp_CinematicTextureGroups,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_PrestreamTextures_Statics::NewProp_bEnableStreaming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_PrestreamTextures_Statics::NewProp_Seconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_PrestreamTextures_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09 * Calls PrestreamTextures() for all the actor's meshcomponents.\n\x09 * @param Seconds - Number of seconds to force all mip-levels to be resident\n\x09 * @param bEnableStreaming\x09- Whether to start (true) or stop (false) streaming\n\x09 * @param CinematicTextureGroups - Bitfield indicating which texture groups that use extra high-resolution mips\n\x09 */" },
		{ "CPP_Default_CinematicTextureGroups", "0" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Calls PrestreamTextures() for all the actor's meshcomponents.\n@param Seconds - Number of seconds to force all mip-levels to be resident\n@param bEnableStreaming      - Whether to start (true) or stop (false) streaming\n@param CinematicTextureGroups - Bitfield indicating which texture groups that use extra high-resolution mips" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_PrestreamTextures_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "PrestreamTextures", nullptr, nullptr, sizeof(Actor_eventPrestreamTextures_Parms), Z_Construct_UFunction_AActor_PrestreamTextures_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_PrestreamTextures_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_PrestreamTextures_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_PrestreamTextures_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_PrestreamTextures()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_PrestreamTextures_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_ReceiveActorBeginCursorOver_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_ReceiveActorBeginCursorOver_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mouse Input" },
		{ "Comment", "/** Event when this actor has the mouse moved over it with the clickable interface. */" },
		{ "DisplayName", "ActorBeginCursorOver" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Event when this actor has the mouse moved over it with the clickable interface." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_ReceiveActorBeginCursorOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "ReceiveActorBeginCursorOver", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_ReceiveActorBeginCursorOver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveActorBeginCursorOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_ReceiveActorBeginCursorOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_ReceiveActorBeginCursorOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_ReceiveActorBeginOverlap_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_ReceiveActorBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventReceiveActorBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_ReceiveActorBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceiveActorBeginOverlap_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_ReceiveActorBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** \n\x09 *\x09""Event when this actor overlaps another actor, for example a player walking into a trigger.\n\x09 *\x09""For events when objects have a blocking collision, for example a player hitting a wall, see 'Hit' events.\n\x09 *\x09@note Components on both this and the other Actor must have bGenerateOverlapEvents set to true to generate overlap events.\n\x09 */" },
		{ "DisplayName", "ActorBeginOverlap" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Event when this actor overlaps another actor, for example a player walking into a trigger.\nFor events when objects have a blocking collision, for example a player hitting a wall, see 'Hit' events.\n@note Components on both this and the other Actor must have bGenerateOverlapEvents set to true to generate overlap events." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_ReceiveActorBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "ReceiveActorBeginOverlap", nullptr, nullptr, sizeof(Actor_eventReceiveActorBeginOverlap_Parms), Z_Construct_UFunction_AActor_ReceiveActorBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveActorBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_ReceiveActorBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveActorBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_ReceiveActorBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_ReceiveActorBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_ReceiveActorEndCursorOver_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_ReceiveActorEndCursorOver_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mouse Input" },
		{ "Comment", "/** Event when this actor has the mouse moved off of it with the clickable interface. */" },
		{ "DisplayName", "ActorEndCursorOver" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Event when this actor has the mouse moved off of it with the clickable interface." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_ReceiveActorEndCursorOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "ReceiveActorEndCursorOver", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_ReceiveActorEndCursorOver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveActorEndCursorOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_ReceiveActorEndCursorOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_ReceiveActorEndCursorOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_ReceiveActorEndOverlap_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_ReceiveActorEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventReceiveActorEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_ReceiveActorEndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceiveActorEndOverlap_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_ReceiveActorEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** \n\x09 *\x09""Event when an actor no longer overlaps another actor, and they have separated. \n\x09 *\x09@note Components on both this and the other Actor must have bGenerateOverlapEvents set to true to generate overlap events.\n\x09 */" },
		{ "DisplayName", "ActorEndOverlap" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Event when an actor no longer overlaps another actor, and they have separated.\n@note Components on both this and the other Actor must have bGenerateOverlapEvents set to true to generate overlap events." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_ReceiveActorEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "ReceiveActorEndOverlap", nullptr, nullptr, sizeof(Actor_eventReceiveActorEndOverlap_Parms), Z_Construct_UFunction_AActor_ReceiveActorEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveActorEndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_ReceiveActorEndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveActorEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_ReceiveActorEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_ReceiveActorEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_ReceiveActorOnClicked_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonPressed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_ReceiveActorOnClicked_Statics::NewProp_ButtonPressed = { "ButtonPressed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventReceiveActorOnClicked_Parms, ButtonPressed), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_ReceiveActorOnClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceiveActorOnClicked_Statics::NewProp_ButtonPressed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_ReceiveActorOnClicked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mouse Input" },
		{ "Comment", "/** Event when this actor is clicked by the mouse when using the clickable interface. */" },
		{ "DisplayName", "ActorOnClicked" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Event when this actor is clicked by the mouse when using the clickable interface." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_ReceiveActorOnClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "ReceiveActorOnClicked", nullptr, nullptr, sizeof(Actor_eventReceiveActorOnClicked_Parms), Z_Construct_UFunction_AActor_ReceiveActorOnClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveActorOnClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_ReceiveActorOnClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveActorOnClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_ReceiveActorOnClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_ReceiveActorOnClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchBegin_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FingerIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FingerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchBegin_Statics::NewProp_FingerIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchBegin_Statics::NewProp_FingerIndex = { "FingerIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventReceiveActorOnInputTouchBegin_Parms, FingerIndex), Z_Construct_UEnum_InputCore_ETouchIndex, METADATA_PARAMS(Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchBegin_Statics::NewProp_FingerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchBegin_Statics::NewProp_FingerIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchBegin_Statics::NewProp_FingerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchBegin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Touch Input" },
		{ "Comment", "/** Event when this actor is touched when click events are enabled. */" },
		{ "DisplayName", "BeginInputTouch" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Event when this actor is touched when click events are enabled." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "ReceiveActorOnInputTouchBegin", nullptr, nullptr, sizeof(Actor_eventReceiveActorOnInputTouchBegin_Parms), Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FingerIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FingerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchEnd_Statics::NewProp_FingerIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchEnd_Statics::NewProp_FingerIndex = { "FingerIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventReceiveActorOnInputTouchEnd_Parms, FingerIndex), Z_Construct_UEnum_InputCore_ETouchIndex, METADATA_PARAMS(Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchEnd_Statics::NewProp_FingerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchEnd_Statics::NewProp_FingerIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchEnd_Statics::NewProp_FingerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Touch Input" },
		{ "Comment", "/** Event when this actor is under the finger when untouched when click events are enabled. */" },
		{ "DisplayName", "EndInputTouch" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Event when this actor is under the finger when untouched when click events are enabled." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "ReceiveActorOnInputTouchEnd", nullptr, nullptr, sizeof(Actor_eventReceiveActorOnInputTouchEnd_Parms), Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchEnter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FingerIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FingerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchEnter_Statics::NewProp_FingerIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchEnter_Statics::NewProp_FingerIndex = { "FingerIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventReceiveActorOnInputTouchEnter_Parms, FingerIndex), Z_Construct_UEnum_InputCore_ETouchIndex, METADATA_PARAMS(Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchEnter_Statics::NewProp_FingerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchEnter_Statics::NewProp_FingerIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchEnter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchEnter_Statics::NewProp_FingerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchEnter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Touch Input" },
		{ "Comment", "/** Event when this actor has a finger moved over it with the clickable interface. */" },
		{ "DisplayName", "TouchEnter" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Event when this actor has a finger moved over it with the clickable interface." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "ReceiveActorOnInputTouchEnter", nullptr, nullptr, sizeof(Actor_eventReceiveActorOnInputTouchEnter_Parms), Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchEnter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchEnter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchEnter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchEnter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchEnter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchEnter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchLeave_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FingerIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FingerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchLeave_Statics::NewProp_FingerIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchLeave_Statics::NewProp_FingerIndex = { "FingerIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventReceiveActorOnInputTouchLeave_Parms, FingerIndex), Z_Construct_UEnum_InputCore_ETouchIndex, METADATA_PARAMS(Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchLeave_Statics::NewProp_FingerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchLeave_Statics::NewProp_FingerIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchLeave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchLeave_Statics::NewProp_FingerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchLeave_Statics::Function_MetaDataParams[] = {
		{ "Category", "Touch Input" },
		{ "Comment", "/** Event when this actor has a finger moved off of it with the clickable interface. */" },
		{ "DisplayName", "TouchLeave" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Event when this actor has a finger moved off of it with the clickable interface." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchLeave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "ReceiveActorOnInputTouchLeave", nullptr, nullptr, sizeof(Actor_eventReceiveActorOnInputTouchLeave_Parms), Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchLeave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchLeave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchLeave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchLeave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchLeave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchLeave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_ReceiveActorOnReleased_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonReleased;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_ReceiveActorOnReleased_Statics::NewProp_ButtonReleased = { "ButtonReleased", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventReceiveActorOnReleased_Parms, ButtonReleased), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_ReceiveActorOnReleased_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceiveActorOnReleased_Statics::NewProp_ButtonReleased,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_ReceiveActorOnReleased_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mouse Input" },
		{ "Comment", "/** Event when this actor is under the mouse when left mouse button is released while using the clickable interface. */" },
		{ "DisplayName", "ActorOnReleased" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Event when this actor is under the mouse when left mouse button is released while using the clickable interface." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_ReceiveActorOnReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "ReceiveActorOnReleased", nullptr, nullptr, sizeof(Actor_eventReceiveActorOnReleased_Parms), Z_Construct_UFunction_AActor_ReceiveActorOnReleased_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveActorOnReleased_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_ReceiveActorOnReleased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveActorOnReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_ReceiveActorOnReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_ReceiveActorOnReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_ReceiveAnyDamage_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_ReceiveAnyDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventReceiveAnyDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_ReceiveAnyDamage_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventReceiveAnyDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_ReceiveAnyDamage_Statics::NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_ReceiveAnyDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventReceiveAnyDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AActor_ReceiveAnyDamage_Statics::NewProp_DamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveAnyDamage_Statics::NewProp_DamageType_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AActor_ReceiveAnyDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventReceiveAnyDamage_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_ReceiveAnyDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceiveAnyDamage_Statics::NewProp_DamageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceiveAnyDamage_Statics::NewProp_InstigatedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceiveAnyDamage_Statics::NewProp_DamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceiveAnyDamage_Statics::NewProp_Damage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_ReceiveAnyDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Damage" },
		{ "Comment", "/** Event when this actor takes ANY damage */" },
		{ "DisplayName", "AnyDamage" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Event when this actor takes ANY damage" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_ReceiveAnyDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "ReceiveAnyDamage", nullptr, nullptr, sizeof(Actor_eventReceiveAnyDamage_Parms), Z_Construct_UFunction_AActor_ReceiveAnyDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveAnyDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020804, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_ReceiveAnyDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveAnyDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_ReceiveAnyDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_ReceiveAnyDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_ReceiveBeginPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_ReceiveBeginPlay_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when play begins for this actor. */" },
		{ "DisplayName", "BeginPlay" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Event when play begins for this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_ReceiveBeginPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "ReceiveBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_ReceiveBeginPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveBeginPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_ReceiveBeginPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_ReceiveBeginPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_ReceiveDestroyed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_ReceiveDestroyed_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Called when the actor has been explicitly destroyed. */" },
		{ "DisplayName", "Destroyed" },
		{ "Keywords", "delete" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Called when the actor has been explicitly destroyed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_ReceiveDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "ReceiveDestroyed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_ReceiveDestroyed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveDestroyed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_ReceiveDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_ReceiveDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_ReceiveEndPlay_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EndPlayReason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AActor_ReceiveEndPlay_Statics::NewProp_EndPlayReason = { "EndPlayReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventReceiveEndPlay_Parms, EndPlayReason), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_ReceiveEndPlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceiveEndPlay_Statics::NewProp_EndPlayReason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_ReceiveEndPlay_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event to notify blueprints this actor is being deleted or removed from a level. */" },
		{ "DisplayName", "End Play" },
		{ "Keywords", "delete" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Event to notify blueprints this actor is being deleted or removed from a level." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_ReceiveEndPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "ReceiveEndPlay", nullptr, nullptr, sizeof(Actor_eventReceiveEndPlay_Parms), Z_Construct_UFunction_AActor_ReceiveEndPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveEndPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_ReceiveEndPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveEndPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_ReceiveEndPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_ReceiveEndPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_ReceiveHit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitNormal;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitLocation;
		static void NewProp_bSelfMoved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSelfMoved;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Other;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_ReceiveHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_ReceiveHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventReceiveHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AActor_ReceiveHit_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveHit_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_ReceiveHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventReceiveHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_ReceiveHit_Statics::NewProp_HitNormal = { "HitNormal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventReceiveHit_Parms, HitNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_ReceiveHit_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventReceiveHit_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AActor_ReceiveHit_Statics::NewProp_bSelfMoved_SetBit(void* Obj)
	{
		((Actor_eventReceiveHit_Parms*)Obj)->bSelfMoved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_ReceiveHit_Statics::NewProp_bSelfMoved = { "bSelfMoved", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Actor_eventReceiveHit_Parms), &Z_Construct_UFunction_AActor_ReceiveHit_Statics::NewProp_bSelfMoved_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_ReceiveHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_ReceiveHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventReceiveHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AActor_ReceiveHit_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveHit_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_ReceiveHit_Statics::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventReceiveHit_Parms, Other), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_ReceiveHit_Statics::NewProp_MyComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_ReceiveHit_Statics::NewProp_MyComp = { "MyComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventReceiveHit_Parms, MyComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AActor_ReceiveHit_Statics::NewProp_MyComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveHit_Statics::NewProp_MyComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_ReceiveHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceiveHit_Statics::NewProp_Hit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceiveHit_Statics::NewProp_NormalImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceiveHit_Statics::NewProp_HitNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceiveHit_Statics::NewProp_HitLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceiveHit_Statics::NewProp_bSelfMoved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceiveHit_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceiveHit_Statics::NewProp_Other,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceiveHit_Statics::NewProp_MyComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_ReceiveHit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** \n\x09 * Event when this actor bumps into a blocking object, or blocks another actor that bumps into it.\n\x09 * This could happen due to things like Character movement, using Set Location with 'sweep' enabled, or physics simulation.\n\x09 * For events when objects overlap (e.g. walking into a trigger) see the 'Overlap' event.\n\x09 *\n\x09 * @note For collisions during physics simulation to generate hit events, 'Simulation Generates Hit Events' must be enabled.\n\x09 * @note When receiving a hit from another object's movement (bSelfMoved is false), the directions of 'Hit.Normal' and 'Hit.ImpactNormal'\n\x09 * will be adjusted to indicate force from the other object against this object.\n\x09 * @note NormalImpulse will be filled in for physics-simulating bodies, but will be zero for swept-component blocking collisions.\n\x09 */" },
		{ "DisplayName", "Hit" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Event when this actor bumps into a blocking object, or blocks another actor that bumps into it.\nThis could happen due to things like Character movement, using Set Location with 'sweep' enabled, or physics simulation.\nFor events when objects overlap (e.g. walking into a trigger) see the 'Overlap' event.\n\n@note For collisions during physics simulation to generate hit events, 'Simulation Generates Hit Events' must be enabled.\n@note When receiving a hit from another object's movement (bSelfMoved is false), the directions of 'Hit.Normal' and 'Hit.ImpactNormal'\nwill be adjusted to indicate force from the other object against this object.\n@note NormalImpulse will be filled in for physics-simulating bodies, but will be zero for swept-component blocking collisions." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_ReceiveHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "ReceiveHit", nullptr, nullptr, sizeof(Actor_eventReceiveHit_Parms), Z_Construct_UFunction_AActor_ReceiveHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_ReceiveHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_ReceiveHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_ReceiveHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_ReceivePointDamage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShotFromDirection;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitNormal;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_ReceivePointDamage_Statics::NewProp_HitInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_ReceivePointDamage_Statics::NewProp_HitInfo = { "HitInfo", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventReceivePointDamage_Parms, HitInfo), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AActor_ReceivePointDamage_Statics::NewProp_HitInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceivePointDamage_Statics::NewProp_HitInfo_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_ReceivePointDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventReceivePointDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_ReceivePointDamage_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventReceivePointDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_ReceivePointDamage_Statics::NewProp_ShotFromDirection = { "ShotFromDirection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventReceivePointDamage_Parms, ShotFromDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AActor_ReceivePointDamage_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventReceivePointDamage_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_ReceivePointDamage_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_ReceivePointDamage_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventReceivePointDamage_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AActor_ReceivePointDamage_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceivePointDamage_Statics::NewProp_HitComponent_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_ReceivePointDamage_Statics::NewProp_HitNormal = { "HitNormal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventReceivePointDamage_Parms, HitNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_ReceivePointDamage_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventReceivePointDamage_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_ReceivePointDamage_Statics::NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_ReceivePointDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventReceivePointDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AActor_ReceivePointDamage_Statics::NewProp_DamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceivePointDamage_Statics::NewProp_DamageType_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AActor_ReceivePointDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventReceivePointDamage_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_ReceivePointDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceivePointDamage_Statics::NewProp_HitInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceivePointDamage_Statics::NewProp_DamageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceivePointDamage_Statics::NewProp_InstigatedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceivePointDamage_Statics::NewProp_ShotFromDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceivePointDamage_Statics::NewProp_BoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceivePointDamage_Statics::NewProp_HitComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceivePointDamage_Statics::NewProp_HitNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceivePointDamage_Statics::NewProp_HitLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceivePointDamage_Statics::NewProp_DamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceivePointDamage_Statics::NewProp_Damage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_ReceivePointDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Damage" },
		{ "Comment", "/** Event when this actor takes POINT damage */" },
		{ "DisplayName", "PointDamage" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Event when this actor takes POINT damage" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_ReceivePointDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "ReceivePointDamage", nullptr, nullptr, sizeof(Actor_eventReceivePointDamage_Parms), Z_Construct_UFunction_AActor_ReceivePointDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceivePointDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20804, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_ReceivePointDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceivePointDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_ReceivePointDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_ReceivePointDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_ReceiveRadialDamage_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitInfo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Origin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageReceived;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_ReceiveRadialDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventReceiveRadialDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_ReceiveRadialDamage_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventReceiveRadialDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_ReceiveRadialDamage_Statics::NewProp_HitInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_ReceiveRadialDamage_Statics::NewProp_HitInfo = { "HitInfo", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventReceiveRadialDamage_Parms, HitInfo), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AActor_ReceiveRadialDamage_Statics::NewProp_HitInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveRadialDamage_Statics::NewProp_HitInfo_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_ReceiveRadialDamage_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventReceiveRadialDamage_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_ReceiveRadialDamage_Statics::NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_ReceiveRadialDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventReceiveRadialDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AActor_ReceiveRadialDamage_Statics::NewProp_DamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveRadialDamage_Statics::NewProp_DamageType_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AActor_ReceiveRadialDamage_Statics::NewProp_DamageReceived = { "DamageReceived", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventReceiveRadialDamage_Parms, DamageReceived), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_ReceiveRadialDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceiveRadialDamage_Statics::NewProp_DamageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceiveRadialDamage_Statics::NewProp_InstigatedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceiveRadialDamage_Statics::NewProp_HitInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceiveRadialDamage_Statics::NewProp_Origin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceiveRadialDamage_Statics::NewProp_DamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceiveRadialDamage_Statics::NewProp_DamageReceived,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_ReceiveRadialDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Damage" },
		{ "Comment", "/** Event when this actor takes RADIAL damage */" },
		{ "DisplayName", "RadialDamage" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Event when this actor takes RADIAL damage" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_ReceiveRadialDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "ReceiveRadialDamage", nullptr, nullptr, sizeof(Actor_eventReceiveRadialDamage_Parms), Z_Construct_UFunction_AActor_ReceiveRadialDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveRadialDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20804, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_ReceiveRadialDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveRadialDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_ReceiveRadialDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_ReceiveRadialDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_ReceiveTick_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AActor_ReceiveTick_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventReceiveTick_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_ReceiveTick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceiveTick_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_ReceiveTick_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event called every frame, if ticking is enabled */" },
		{ "DisplayName", "Tick" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Event called every frame, if ticking is enabled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_ReceiveTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "ReceiveTick", nullptr, nullptr, sizeof(Actor_eventReceiveTick_Parms), Z_Construct_UFunction_AActor_ReceiveTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_ReceiveTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_ReceiveTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_ReceiveTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_RemoveTickPrerequisiteActor_Statics
	{
		struct Actor_eventRemoveTickPrerequisiteActor_Parms
		{
			AActor* PrerequisiteActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PrerequisiteActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_RemoveTickPrerequisiteActor_Statics::NewProp_PrerequisiteActor = { "PrerequisiteActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventRemoveTickPrerequisiteActor_Parms, PrerequisiteActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_RemoveTickPrerequisiteActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_RemoveTickPrerequisiteActor_Statics::NewProp_PrerequisiteActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_RemoveTickPrerequisiteActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities" },
		{ "Comment", "/** Remove tick dependency on PrerequisiteActor. */" },
		{ "Keywords", "dependency" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Remove tick dependency on PrerequisiteActor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_RemoveTickPrerequisiteActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "RemoveTickPrerequisiteActor", nullptr, nullptr, sizeof(Actor_eventRemoveTickPrerequisiteActor_Parms), Z_Construct_UFunction_AActor_RemoveTickPrerequisiteActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_RemoveTickPrerequisiteActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_RemoveTickPrerequisiteActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_RemoveTickPrerequisiteActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_RemoveTickPrerequisiteActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_RemoveTickPrerequisiteActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_RemoveTickPrerequisiteComponent_Statics
	{
		struct Actor_eventRemoveTickPrerequisiteComponent_Parms
		{
			UActorComponent* PrerequisiteComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrerequisiteComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PrerequisiteComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_RemoveTickPrerequisiteComponent_Statics::NewProp_PrerequisiteComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_RemoveTickPrerequisiteComponent_Statics::NewProp_PrerequisiteComponent = { "PrerequisiteComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventRemoveTickPrerequisiteComponent_Parms, PrerequisiteComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AActor_RemoveTickPrerequisiteComponent_Statics::NewProp_PrerequisiteComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_RemoveTickPrerequisiteComponent_Statics::NewProp_PrerequisiteComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_RemoveTickPrerequisiteComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_RemoveTickPrerequisiteComponent_Statics::NewProp_PrerequisiteComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_RemoveTickPrerequisiteComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities" },
		{ "Comment", "/** Remove tick dependency on PrerequisiteComponent. */" },
		{ "Keywords", "dependency" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Remove tick dependency on PrerequisiteComponent." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_RemoveTickPrerequisiteComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "RemoveTickPrerequisiteComponent", nullptr, nullptr, sizeof(Actor_eventRemoveTickPrerequisiteComponent_Parms), Z_Construct_UFunction_AActor_RemoveTickPrerequisiteComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_RemoveTickPrerequisiteComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_RemoveTickPrerequisiteComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_RemoveTickPrerequisiteComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_RemoveTickPrerequisiteComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_RemoveTickPrerequisiteComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_SetActorEnableCollision_Statics
	{
		struct Actor_eventSetActorEnableCollision_Parms
		{
			bool bNewActorEnableCollision;
		};
		static void NewProp_bNewActorEnableCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewActorEnableCollision;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AActor_SetActorEnableCollision_Statics::NewProp_bNewActorEnableCollision_SetBit(void* Obj)
	{
		((Actor_eventSetActorEnableCollision_Parms*)Obj)->bNewActorEnableCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_SetActorEnableCollision_Statics::NewProp_bNewActorEnableCollision = { "bNewActorEnableCollision", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Actor_eventSetActorEnableCollision_Parms), &Z_Construct_UFunction_AActor_SetActorEnableCollision_Statics::NewProp_bNewActorEnableCollision_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_SetActorEnableCollision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_SetActorEnableCollision_Statics::NewProp_bNewActorEnableCollision,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_SetActorEnableCollision_Statics::Function_MetaDataParams[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** Allows enabling/disabling collision for the whole actor */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Allows enabling/disabling collision for the whole actor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_SetActorEnableCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "SetActorEnableCollision", nullptr, nullptr, sizeof(Actor_eventSetActorEnableCollision_Parms), Z_Construct_UFunction_AActor_SetActorEnableCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetActorEnableCollision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_SetActorEnableCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetActorEnableCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_SetActorEnableCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_SetActorEnableCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_SetActorHiddenInGame_Statics
	{
		struct Actor_eventSetActorHiddenInGame_Parms
		{
			bool bNewHidden;
		};
		static void NewProp_bNewHidden_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewHidden;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AActor_SetActorHiddenInGame_Statics::NewProp_bNewHidden_SetBit(void* Obj)
	{
		((Actor_eventSetActorHiddenInGame_Parms*)Obj)->bNewHidden = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_SetActorHiddenInGame_Statics::NewProp_bNewHidden = { "bNewHidden", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Actor_eventSetActorHiddenInGame_Parms), &Z_Construct_UFunction_AActor_SetActorHiddenInGame_Statics::NewProp_bNewHidden_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_SetActorHiddenInGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_SetActorHiddenInGame_Statics::NewProp_bNewHidden,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_SetActorHiddenInGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09 *\x09Sets the actor to be hidden in the game\n\x09 *\x09@param\x09""bNewHidden\x09Whether or not to hide the actor and all its components\n\x09 */" },
		{ "DisplayName", "Set Actor Hidden In Game" },
		{ "Keywords", "Visible Hidden Show Hide" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Sets the actor to be hidden in the game\n@param  bNewHidden      Whether or not to hide the actor and all its components" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_SetActorHiddenInGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "SetActorHiddenInGame", nullptr, nullptr, sizeof(Actor_eventSetActorHiddenInGame_Parms), Z_Construct_UFunction_AActor_SetActorHiddenInGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetActorHiddenInGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_SetActorHiddenInGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetActorHiddenInGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_SetActorHiddenInGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_SetActorHiddenInGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_AActor_SetActorLabel_Statics
	{
		struct Actor_eventSetActorLabel_Parms
		{
			FString NewActorLabel;
			bool bMarkDirty;
		};
		static void NewProp_bMarkDirty_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMarkDirty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewActorLabel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewActorLabel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AActor_SetActorLabel_Statics::NewProp_bMarkDirty_SetBit(void* Obj)
	{
		((Actor_eventSetActorLabel_Parms*)Obj)->bMarkDirty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_SetActorLabel_Statics::NewProp_bMarkDirty = { "bMarkDirty", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Actor_eventSetActorLabel_Parms), &Z_Construct_UFunction_AActor_SetActorLabel_Statics::NewProp_bMarkDirty_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_SetActorLabel_Statics::NewProp_NewActorLabel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AActor_SetActorLabel_Statics::NewProp_NewActorLabel = { "NewActorLabel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventSetActorLabel_Parms, NewActorLabel), METADATA_PARAMS(Z_Construct_UFunction_AActor_SetActorLabel_Statics::NewProp_NewActorLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetActorLabel_Statics::NewProp_NewActorLabel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_SetActorLabel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_SetActorLabel_Statics::NewProp_bMarkDirty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_SetActorLabel_Statics::NewProp_NewActorLabel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_SetActorLabel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Actor Editing" },
		{ "Comment", "/**\n\x09 * Assigns a new label to this actor.  Actor labels are only available in development builds.\n\x09 * @param\x09NewActorLabel\x09The new label string to assign to the actor.  If empty, the actor will have a default label.\n\x09 * @param\x09""bMarkDirty\x09\x09If true the actor's package will be marked dirty for saving.  Otherwise it will not be.  You should pass false for this parameter if dirtying is not allowed (like during loads)\n\x09 */" },
		{ "CPP_Default_bMarkDirty", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Assigns a new label to this actor.  Actor labels are only available in development builds.\n@param       NewActorLabel   The new label string to assign to the actor.  If empty, the actor will have a default label.\n@param       bMarkDirty              If true the actor's package will be marked dirty for saving.  Otherwise it will not be.  You should pass false for this parameter if dirtying is not allowed (like during loads)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_SetActorLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "SetActorLabel", nullptr, nullptr, sizeof(Actor_eventSetActorLabel_Parms), Z_Construct_UFunction_AActor_SetActorLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetActorLabel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_SetActorLabel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetActorLabel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_SetActorLabel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_SetActorLabel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_AActor_SetActorRelativeScale3D_Statics
	{
		struct Actor_eventSetActorRelativeScale3D_Parms
		{
			FVector NewRelativeScale;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewRelativeScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_SetActorRelativeScale3D_Statics::NewProp_NewRelativeScale = { "NewRelativeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventSetActorRelativeScale3D_Parms, NewRelativeScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_SetActorRelativeScale3D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_SetActorRelativeScale3D_Statics::NewProp_NewRelativeScale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_SetActorRelativeScale3D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Transformation" },
		{ "Comment", "/**\n\x09 * Set the actor's RootComponent to the specified relative scale 3d\n\x09 * @param NewRelativeScale\x09New scale to set the actor's RootComponent to\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Set the actor's RootComponent to the specified relative scale 3d\n@param NewRelativeScale      New scale to set the actor's RootComponent to" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_SetActorRelativeScale3D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "SetActorRelativeScale3D", nullptr, nullptr, sizeof(Actor_eventSetActorRelativeScale3D_Parms), Z_Construct_UFunction_AActor_SetActorRelativeScale3D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetActorRelativeScale3D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_SetActorRelativeScale3D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetActorRelativeScale3D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_SetActorRelativeScale3D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_SetActorRelativeScale3D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_SetActorScale3D_Statics
	{
		struct Actor_eventSetActorScale3D_Parms
		{
			FVector NewScale3D;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewScale3D;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_SetActorScale3D_Statics::NewProp_NewScale3D = { "NewScale3D", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventSetActorScale3D_Parms, NewScale3D), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_SetActorScale3D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_SetActorScale3D_Statics::NewProp_NewScale3D,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_SetActorScale3D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Transformation" },
		{ "Comment", "/** Set the Actor's world-space scale. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Set the Actor's world-space scale." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_SetActorScale3D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "SetActorScale3D", nullptr, nullptr, sizeof(Actor_eventSetActorScale3D_Parms), Z_Construct_UFunction_AActor_SetActorScale3D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetActorScale3D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_SetActorScale3D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetActorScale3D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_SetActorScale3D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_SetActorScale3D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_SetActorTickEnabled_Statics
	{
		struct Actor_eventSetActorTickEnabled_Parms
		{
			bool bEnabled;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AActor_SetActorTickEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((Actor_eventSetActorTickEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_SetActorTickEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Actor_eventSetActorTickEnabled_Parms), &Z_Construct_UFunction_AActor_SetActorTickEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_SetActorTickEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_SetActorTickEnabled_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_SetActorTickEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities" },
		{ "Comment", "/** \n\x09 * Set this actor's tick functions to be enabled or disabled. Only has an effect if the function is registered\n\x09 * This only modifies the tick function on actor itself\n\x09 * @param\x09""bEnabled\x09Whether it should be enabled or not\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Set this actor's tick functions to be enabled or disabled. Only has an effect if the function is registered\nThis only modifies the tick function on actor itself\n@param       bEnabled        Whether it should be enabled or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_SetActorTickEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "SetActorTickEnabled", nullptr, nullptr, sizeof(Actor_eventSetActorTickEnabled_Parms), Z_Construct_UFunction_AActor_SetActorTickEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetActorTickEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_SetActorTickEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetActorTickEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_SetActorTickEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_SetActorTickEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_SetActorTickInterval_Statics
	{
		struct Actor_eventSetActorTickInterval_Parms
		{
			float TickInterval;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TickInterval;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AActor_SetActorTickInterval_Statics::NewProp_TickInterval = { "TickInterval", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventSetActorTickInterval_Parms, TickInterval), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_SetActorTickInterval_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_SetActorTickInterval_Statics::NewProp_TickInterval,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_SetActorTickInterval_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities" },
		{ "Comment", "/** \n\x09 * Sets the tick interval of this actor's primary tick function. Will not enable a disabled tick function. Takes effect on next tick. \n\x09 * @param TickInterval\x09The rate at which this actor should be ticking\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Sets the tick interval of this actor's primary tick function. Will not enable a disabled tick function. Takes effect on next tick.\n@param TickInterval  The rate at which this actor should be ticking" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_SetActorTickInterval_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "SetActorTickInterval", nullptr, nullptr, sizeof(Actor_eventSetActorTickInterval_Parms), Z_Construct_UFunction_AActor_SetActorTickInterval_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetActorTickInterval_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_SetActorTickInterval_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetActorTickInterval_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_SetActorTickInterval()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_SetActorTickInterval_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_SetAutoDestroyWhenFinished_Statics
	{
		struct Actor_eventSetAutoDestroyWhenFinished_Parms
		{
			bool bVal;
		};
		static void NewProp_bVal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AActor_SetAutoDestroyWhenFinished_Statics::NewProp_bVal_SetBit(void* Obj)
	{
		((Actor_eventSetAutoDestroyWhenFinished_Parms*)Obj)->bVal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_SetAutoDestroyWhenFinished_Statics::NewProp_bVal = { "bVal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Actor_eventSetAutoDestroyWhenFinished_Parms), &Z_Construct_UFunction_AActor_SetAutoDestroyWhenFinished_Statics::NewProp_bVal_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_SetAutoDestroyWhenFinished_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_SetAutoDestroyWhenFinished_Statics::NewProp_bVal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_SetAutoDestroyWhenFinished_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_SetAutoDestroyWhenFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "SetAutoDestroyWhenFinished", nullptr, nullptr, sizeof(Actor_eventSetAutoDestroyWhenFinished_Parms), Z_Construct_UFunction_AActor_SetAutoDestroyWhenFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetAutoDestroyWhenFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_SetAutoDestroyWhenFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetAutoDestroyWhenFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_SetAutoDestroyWhenFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_SetAutoDestroyWhenFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_AActor_SetFolderPath_Statics
	{
		struct Actor_eventSetFolderPath_Parms
		{
			FName NewFolderPath;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewFolderPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NewFolderPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_SetFolderPath_Statics::NewProp_NewFolderPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AActor_SetFolderPath_Statics::NewProp_NewFolderPath = { "NewFolderPath", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventSetFolderPath_Parms, NewFolderPath), METADATA_PARAMS(Z_Construct_UFunction_AActor_SetFolderPath_Statics::NewProp_NewFolderPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetFolderPath_Statics::NewProp_NewFolderPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_SetFolderPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_SetFolderPath_Statics::NewProp_NewFolderPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_SetFolderPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Actor Editing" },
		{ "Comment", "/**\n\x09 * Assigns a new folder to this actor. Actor folder paths are only available in development builds.\n\x09 * @param\x09NewFolderPath\x09\x09The new folder to assign to the actor.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Assigns a new folder to this actor. Actor folder paths are only available in development builds.\n@param       NewFolderPath           The new folder to assign to the actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_SetFolderPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "SetFolderPath", nullptr, nullptr, sizeof(Actor_eventSetFolderPath_Parms), Z_Construct_UFunction_AActor_SetFolderPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetFolderPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_SetFolderPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetFolderPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_SetFolderPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_SetFolderPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_AActor_SetIsTemporarilyHiddenInEditor_Statics
	{
		struct Actor_eventSetIsTemporarilyHiddenInEditor_Parms
		{
			bool bIsHidden;
		};
		static void NewProp_bIsHidden_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsHidden;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AActor_SetIsTemporarilyHiddenInEditor_Statics::NewProp_bIsHidden_SetBit(void* Obj)
	{
		((Actor_eventSetIsTemporarilyHiddenInEditor_Parms*)Obj)->bIsHidden = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_SetIsTemporarilyHiddenInEditor_Statics::NewProp_bIsHidden = { "bIsHidden", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Actor_eventSetIsTemporarilyHiddenInEditor_Parms), &Z_Construct_UFunction_AActor_SetIsTemporarilyHiddenInEditor_Statics::NewProp_bIsHidden_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_SetIsTemporarilyHiddenInEditor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_SetIsTemporarilyHiddenInEditor_Statics::NewProp_bIsHidden,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_SetIsTemporarilyHiddenInEditor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Actor Editing" },
		{ "Comment", "/**\n\x09 * Explicitly sets whether or not this actor is hidden in the editor for the duration of the current editor session\n\x09 * @param bIsHidden\x09True if the actor is hidden\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Explicitly sets whether or not this actor is hidden in the editor for the duration of the current editor session\n@param bIsHidden     True if the actor is hidden" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_SetIsTemporarilyHiddenInEditor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "SetIsTemporarilyHiddenInEditor", nullptr, nullptr, sizeof(Actor_eventSetIsTemporarilyHiddenInEditor_Parms), Z_Construct_UFunction_AActor_SetIsTemporarilyHiddenInEditor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetIsTemporarilyHiddenInEditor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_SetIsTemporarilyHiddenInEditor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetIsTemporarilyHiddenInEditor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_SetIsTemporarilyHiddenInEditor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_SetIsTemporarilyHiddenInEditor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_AActor_SetLifeSpan_Statics
	{
		struct Actor_eventSetLifeSpan_Parms
		{
			float InLifespan;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InLifespan;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AActor_SetLifeSpan_Statics::NewProp_InLifespan = { "InLifespan", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventSetLifeSpan_Parms, InLifespan), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_SetLifeSpan_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_SetLifeSpan_Statics::NewProp_InLifespan,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_SetLifeSpan_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities" },
		{ "Comment", "/** Set the lifespan of this actor. When it expires the object will be destroyed. If requested lifespan is 0, the timer is cleared and the actor will not be destroyed. */" },
		{ "Keywords", "delete destroy" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Set the lifespan of this actor. When it expires the object will be destroyed. If requested lifespan is 0, the timer is cleared and the actor will not be destroyed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_SetLifeSpan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "SetLifeSpan", nullptr, nullptr, sizeof(Actor_eventSetLifeSpan_Parms), Z_Construct_UFunction_AActor_SetLifeSpan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetLifeSpan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_SetLifeSpan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetLifeSpan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_SetLifeSpan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_SetLifeSpan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_SetNetDormancy_Statics
	{
		struct Actor_eventSetNetDormancy_Parms
		{
			TEnumAsByte<ENetDormancy> NewDormancy;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewDormancy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AActor_SetNetDormancy_Statics::NewProp_NewDormancy = { "NewDormancy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventSetNetDormancy_Parms, NewDormancy), Z_Construct_UEnum_Engine_ENetDormancy, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_SetNetDormancy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_SetNetDormancy_Statics::NewProp_NewDormancy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_SetNetDormancy_Statics::Function_MetaDataParams[] = {
		{ "Category", "Networking" },
		{ "Comment", "/** Puts actor in dormant networking state */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Puts actor in dormant networking state" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_SetNetDormancy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "SetNetDormancy", nullptr, nullptr, sizeof(Actor_eventSetNetDormancy_Parms), Z_Construct_UFunction_AActor_SetNetDormancy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetNetDormancy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_SetNetDormancy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetNetDormancy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_SetNetDormancy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_SetNetDormancy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_SetOwner_Statics
	{
		struct Actor_eventSetOwner_Parms
		{
			AActor* NewOwner;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_SetOwner_Statics::NewProp_NewOwner = { "NewOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventSetOwner_Parms, NewOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_SetOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_SetOwner_Statics::NewProp_NewOwner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_SetOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** \n\x09 * Set the owner of this Actor, used primarily for network replication. \n\x09 * @param NewOwner\x09The Actor who takes over ownership of this Actor\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Set the owner of this Actor, used primarily for network replication.\n@param NewOwner      The Actor who takes over ownership of this Actor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_SetOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "SetOwner", nullptr, nullptr, sizeof(Actor_eventSetOwner_Parms), Z_Construct_UFunction_AActor_SetOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_SetOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_SetOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_SetOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_SetReplicateMovement_Statics
	{
		struct Actor_eventSetReplicateMovement_Parms
		{
			bool bInReplicateMovement;
		};
		static void NewProp_bInReplicateMovement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInReplicateMovement;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AActor_SetReplicateMovement_Statics::NewProp_bInReplicateMovement_SetBit(void* Obj)
	{
		((Actor_eventSetReplicateMovement_Parms*)Obj)->bInReplicateMovement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_SetReplicateMovement_Statics::NewProp_bInReplicateMovement = { "bInReplicateMovement", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Actor_eventSetReplicateMovement_Parms), &Z_Construct_UFunction_AActor_SetReplicateMovement_Statics::NewProp_bInReplicateMovement_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_SetReplicateMovement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_SetReplicateMovement_Statics::NewProp_bInReplicateMovement,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_SetReplicateMovement_Statics::Function_MetaDataParams[] = {
		{ "Category", "Replication" },
		{ "Comment", "/**\n\x09 * Set whether this actor's movement replicates to network clients.\n\x09 * @param bInReplicateMovement Whether this Actor's movement replicates to clients.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Set whether this actor's movement replicates to network clients.\n@param bInReplicateMovement Whether this Actor's movement replicates to clients." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_SetReplicateMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "SetReplicateMovement", nullptr, nullptr, sizeof(Actor_eventSetReplicateMovement_Parms), Z_Construct_UFunction_AActor_SetReplicateMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetReplicateMovement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_SetReplicateMovement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetReplicateMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_SetReplicateMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_SetReplicateMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_SetReplicates_Statics
	{
		struct Actor_eventSetReplicates_Parms
		{
			bool bInReplicates;
		};
		static void NewProp_bInReplicates_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInReplicates;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AActor_SetReplicates_Statics::NewProp_bInReplicates_SetBit(void* Obj)
	{
		((Actor_eventSetReplicates_Parms*)Obj)->bInReplicates = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_SetReplicates_Statics::NewProp_bInReplicates = { "bInReplicates", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Actor_eventSetReplicates_Parms), &Z_Construct_UFunction_AActor_SetReplicates_Statics::NewProp_bInReplicates_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_SetReplicates_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_SetReplicates_Statics::NewProp_bInReplicates,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_SetReplicates_Statics::Function_MetaDataParams[] = {
		{ "Category", "Replication" },
		{ "Comment", "/**\n\x09 * Set whether this actor replicates to network clients. When this actor is spawned on the server it will be sent to clients as well.\n\x09 * Properties flagged for replication will update on clients if they change on the server.\n\x09 * Internally changes the RemoteRole property and handles the cases where the actor needs to be added to the network actor list.\n\x09 * @param bInReplicates Whether this Actor replicates to network clients.\n\x09 * @see https://docs.unrealengine.com/latest/INT/Gameplay/Networking/Replication/\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Set whether this actor replicates to network clients. When this actor is spawned on the server it will be sent to clients as well.\nProperties flagged for replication will update on clients if they change on the server.\nInternally changes the RemoteRole property and handles the cases where the actor needs to be added to the network actor list.\n@param bInReplicates Whether this Actor replicates to network clients.\n@see https://docs.unrealengine.com/latest/INT/Gameplay/Networking/Replication/" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_SetReplicates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "SetReplicates", nullptr, nullptr, sizeof(Actor_eventSetReplicates_Parms), Z_Construct_UFunction_AActor_SetReplicates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetReplicates_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_SetReplicates_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetReplicates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_SetReplicates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_SetReplicates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_SetTickableWhenPaused_Statics
	{
		struct Actor_eventSetTickableWhenPaused_Parms
		{
			bool bTickableWhenPaused;
		};
		static void NewProp_bTickableWhenPaused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTickableWhenPaused;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AActor_SetTickableWhenPaused_Statics::NewProp_bTickableWhenPaused_SetBit(void* Obj)
	{
		((Actor_eventSetTickableWhenPaused_Parms*)Obj)->bTickableWhenPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_SetTickableWhenPaused_Statics::NewProp_bTickableWhenPaused = { "bTickableWhenPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Actor_eventSetTickableWhenPaused_Parms), &Z_Construct_UFunction_AActor_SetTickableWhenPaused_Statics::NewProp_bTickableWhenPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_SetTickableWhenPaused_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_SetTickableWhenPaused_Statics::NewProp_bTickableWhenPaused,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_SetTickableWhenPaused_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities" },
		{ "Comment", "/** Sets whether this actor can tick when paused. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Sets whether this actor can tick when paused." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_SetTickableWhenPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "SetTickableWhenPaused", nullptr, nullptr, sizeof(Actor_eventSetTickableWhenPaused_Parms), Z_Construct_UFunction_AActor_SetTickableWhenPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetTickableWhenPaused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_SetTickableWhenPaused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetTickableWhenPaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_SetTickableWhenPaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_SetTickableWhenPaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_SetTickGroup_Statics
	{
		struct Actor_eventSetTickGroup_Parms
		{
			TEnumAsByte<ETickingGroup> NewTickGroup;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewTickGroup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AActor_SetTickGroup_Statics::NewProp_NewTickGroup = { "NewTickGroup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventSetTickGroup_Parms, NewTickGroup), Z_Construct_UEnum_Engine_ETickingGroup, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_SetTickGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_SetTickGroup_Statics::NewProp_NewTickGroup,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_SetTickGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities" },
		{ "Comment", "/**\n\x09 * Sets the ticking group for this actor.\n\x09 * @param NewTickGroup the new value to assign\n\x09 */" },
		{ "Keywords", "dependency" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Sets the ticking group for this actor.\n@param NewTickGroup the new value to assign" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_SetTickGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "SetTickGroup", nullptr, nullptr, sizeof(Actor_eventSetTickGroup_Parms), Z_Construct_UFunction_AActor_SetTickGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetTickGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_SetTickGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetTickGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_SetTickGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_SetTickGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_SnapRootComponentTo_Statics
	{
		struct Actor_eventSnapRootComponentTo_Parms
		{
			AActor* InParentActor;
			FName InSocketName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InSocketName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InParentActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AActor_SnapRootComponentTo_Statics::NewProp_InSocketName = { "InSocketName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventSnapRootComponentTo_Parms, InSocketName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_SnapRootComponentTo_Statics::NewProp_InParentActor = { "InParentActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventSnapRootComponentTo_Parms, InParentActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_SnapRootComponentTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_SnapRootComponentTo_Statics::NewProp_InSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_SnapRootComponentTo_Statics::NewProp_InParentActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_SnapRootComponentTo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Transformation" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use AttachRootComponentTo with EAttachLocation::SnapToTarget option instead" },
		{ "DisplayName", "SnapActorTo" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ScriptNoExport", "" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_SnapRootComponentTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "SnapRootComponentTo", nullptr, nullptr, sizeof(Actor_eventSnapRootComponentTo_Parms), Z_Construct_UFunction_AActor_SnapRootComponentTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SnapRootComponentTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_SnapRootComponentTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SnapRootComponentTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_SnapRootComponentTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_SnapRootComponentTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_TearOff_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_TearOff_Statics::Function_MetaDataParams[] = {
		{ "Category", "Replication" },
		{ "Comment", "/** Networking - Server - TearOff this actor to stop replication to clients. Will set bTearOff to true. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Networking - Server - TearOff this actor to stop replication to clients. Will set bTearOff to true." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_TearOff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "TearOff", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_TearOff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_TearOff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_TearOff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_TearOff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_UserConstructionScript_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_UserConstructionScript_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Comment", "/**\n\x09 * Construction script, the place to spawn components and do other setup.\n\x09 * @note Name used in CreateBlueprint function\n\x09 */" },
		{ "DisplayName", "Construction Script" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Construction script, the place to spawn components and do other setup.\n@note Name used in CreateBlueprint function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_UserConstructionScript_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "UserConstructionScript", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_UserConstructionScript_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_UserConstructionScript_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_UserConstructionScript()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_UserConstructionScript_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActor_WasRecentlyRendered_Statics
	{
		struct Actor_eventWasRecentlyRendered_Parms
		{
			float Tolerance;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Tolerance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AActor_WasRecentlyRendered_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Actor_eventWasRecentlyRendered_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_WasRecentlyRendered_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Actor_eventWasRecentlyRendered_Parms), &Z_Construct_UFunction_AActor_WasRecentlyRendered_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AActor_WasRecentlyRendered_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Actor_eventWasRecentlyRendered_Parms, Tolerance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_WasRecentlyRendered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_WasRecentlyRendered_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_WasRecentlyRendered_Statics::NewProp_Tolerance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_WasRecentlyRendered_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09 * Returns true if this actor has been rendered \"recently\", with a tolerance in seconds to define what \"recent\" means. \n\x09 * e.g.: If a tolerance of 0.1 is used, this function will return true only if the actor was rendered in the last 0.1 seconds of game time. \n\x09 *\n\x09 * @param Tolerance  How many seconds ago the actor last render time can be and still count as having been \"recently\" rendered.\n\x09 * @return Whether this actor was recently rendered.\n\x09 */" },
		{ "CPP_Default_Tolerance", "0.200000" },
		{ "DisplayName", "WasActorRecentlyRendered" },
		{ "Keywords", "scene visible" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Returns true if this actor has been rendered \"recently\", with a tolerance in seconds to define what \"recent\" means.\ne.g.: If a tolerance of 0.1 is used, this function will return true only if the actor was rendered in the last 0.1 seconds of game time.\n\n@param Tolerance  How many seconds ago the actor last render time can be and still count as having been \"recently\" rendered.\n@return Whether this actor was recently rendered." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_WasRecentlyRendered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "WasRecentlyRendered", nullptr, nullptr, sizeof(Actor_eventWasRecentlyRendered_Parms), Z_Construct_UFunction_AActor_WasRecentlyRendered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_WasRecentlyRendered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_WasRecentlyRendered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_WasRecentlyRendered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_WasRecentlyRendered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_WasRecentlyRendered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AActor_NoRegister()
	{
		return AActor::StaticClass();
	}
	struct Z_Construct_UClass_AActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlueprintCreatedComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BlueprintCreatedComponents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlueprintCreatedComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InstanceComponents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceComponents_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstanceComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnEndPlay_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEndPlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDestroyed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDestroyed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnActorHit_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActorHit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnInputTouchLeave_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInputTouchLeave;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnInputTouchEnter_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInputTouchEnter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnInputTouchEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInputTouchEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnInputTouchBegin_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInputTouchBegin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnReleased_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReleased;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnClicked_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnClicked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnEndCursorOver_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEndCursorOver;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnBeginCursorOver_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBeginCursorOver;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnActorEndOverlap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActorEndOverlap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnActorBeginOverlap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActorBeginOverlap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTakeRadialDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTakeRadialDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTakePointDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTakePointDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTakeAnyDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTakeAnyDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tags;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tags_Inner;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHiddenEdTemporary_MetaData[];
#endif
		static void NewProp_bHiddenEdTemporary_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHiddenEdTemporary;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOptimizeBPComponentData_MetaData[];
#endif
		static void NewProp_bOptimizeBPComponentData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOptimizeBPComponentData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bListedInSceneOutliner_MetaData[];
#endif
		static void NewProp_bListedInSceneOutliner_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bListedInSceneOutliner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEditable_MetaData[];
#endif
		static void NewProp_bEditable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEditable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bActorLabelEditable_MetaData[];
#endif
		static void NewProp_bActorLabelEditable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActorLabelEditable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockLocation_MetaData[];
#endif
		static void NewProp_bLockLocation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHiddenEdLevel_MetaData[];
#endif
		static void NewProp_bHiddenEdLevel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHiddenEdLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHiddenEdLayer_MetaData[];
#endif
		static void NewProp_bHiddenEdLayer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHiddenEdLayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsEditorPreviewActor_MetaData[];
#endif
		static void NewProp_bIsEditorPreviewActor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEditorPreviewActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHiddenEd_MetaData[];
#endif
		static void NewProp_bHiddenEd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHiddenEd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FolderPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FolderPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorLabel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ActorLabel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HiddenEditorViews_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt64PropertyParams NewProp_HiddenEditorViews;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpriteScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpriteScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GroupActor;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_ParentComponent;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentComponentActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_ParentComponentActor;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Layers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Layers;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Layers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControllingMatineeActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ControllingMatineeActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControllingMatineeActors_Inner;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PivotOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PivotOffset;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RootComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Children_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Children;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Children_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instigator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetPriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NetPriority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinNetUpdateFrequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinNetUpdateFrequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetUpdateFrequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NetUpdateFrequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NetTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetCullDistanceSquared_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NetCullDistanceSquared;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InputComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputPriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InputPriority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoReceiveInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AutoReceiveInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnCollisionHandlingMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SpawnCollisionHandlingMethod;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SpawnCollisionHandlingMethod_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetDormancy_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NetDormancy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Role_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Role;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetDriverName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NetDriverName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachmentReplication_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttachmentReplication;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTimeDilation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CustomTimeDilation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialLifeSpan_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InitialLifeSpan;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicatedMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReplicatedMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoteRole_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RemoteRole;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultUpdateOverlapsMethodDuringLevelStreaming_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DefaultUpdateOverlapsMethodDuringLevelStreaming;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultUpdateOverlapsMethodDuringLevelStreaming_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateOverlapsMethodDuringLevelStreaming_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_UpdateOverlapsMethodDuringLevelStreaming;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_UpdateOverlapsMethodDuringLevelStreaming_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bActorIsBeingDestroyed_MetaData[];
#endif
		static void NewProp_bActorIsBeingDestroyed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActorIsBeingDestroyed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bActorEnableCollision_MetaData[];
#endif
		static void NewProp_bActorEnableCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActorEnableCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowReceiveTickEventOnDedicatedServer_MetaData[];
#endif
		static void NewProp_bAllowReceiveTickEventOnDedicatedServer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowReceiveTickEventOnDedicatedServer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanBeInCluster_MetaData[];
#endif
		static void NewProp_bCanBeInCluster_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanBeInCluster;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReplicates_MetaData[];
#endif
		static void NewProp_bReplicates_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReplicates;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bActorSeamlessTraveled_MetaData[];
#endif
		static void NewProp_bActorSeamlessTraveled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActorSeamlessTraveled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsEditorOnlyActor_MetaData[];
#endif
		static void NewProp_bIsEditorOnlyActor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEditorOnlyActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableAutoLODGeneration_MetaData[];
#endif
		static void NewProp_bEnableAutoLODGeneration_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableAutoLODGeneration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoresOriginShifting_MetaData[];
#endif
		static void NewProp_bIgnoresOriginShifting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoresOriginShifting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateOverlapEventsDuringLevelStreaming_MetaData[];
#endif
		static void NewProp_bGenerateOverlapEventsDuringLevelStreaming_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateOverlapEventsDuringLevelStreaming;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFindCameraComponentWhenViewTarget_MetaData[];
#endif
		static void NewProp_bFindCameraComponentWhenViewTarget_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFindCameraComponentWhenViewTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCollideWhenPlacing_MetaData[];
#endif
		static void NewProp_bCollideWhenPlacing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCollideWhenPlacing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBlockInput_MetaData[];
#endif
		static void NewProp_bBlockInput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBlockInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanBeDamaged_MetaData[];
#endif
		static void NewProp_bCanBeDamaged_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanBeDamaged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoDestroyWhenFinished_MetaData[];
#endif
		static void NewProp_bAutoDestroyWhenFinished_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroyWhenFinished;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowTickBeforeBeginPlay_MetaData[];
#endif
		static void NewProp_bAllowTickBeforeBeginPlay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowTickBeforeBeginPlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReplayRewindable_MetaData[];
#endif
		static void NewProp_bReplayRewindable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReplayRewindable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRelevantForLevelBounds_MetaData[];
#endif
		static void NewProp_bRelevantForLevelBounds_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRelevantForLevelBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRelevantForNetworkReplays_MetaData[];
#endif
		static void NewProp_bRelevantForNetworkReplays_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRelevantForNetworkReplays;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNetUseOwnerRelevancy_MetaData[];
#endif
		static void NewProp_bNetUseOwnerRelevancy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNetUseOwnerRelevancy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNetLoadOnClient_MetaData[];
#endif
		static void NewProp_bNetLoadOnClient_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNetLoadOnClient;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExchangedRoles_MetaData[];
#endif
		static void NewProp_bExchangedRoles_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExchangedRoles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTearOff_MetaData[];
#endif
		static void NewProp_bTearOff_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTearOff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHidden_MetaData[];
#endif
		static void NewProp_bHidden_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHidden;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReplicateMovement_MetaData[];
#endif
		static void NewProp_bReplicateMovement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReplicateMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlwaysRelevant_MetaData[];
#endif
		static void NewProp_bAlwaysRelevant_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlwaysRelevant;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOnlyRelevantToOwner_MetaData[];
#endif
		static void NewProp_bOnlyRelevantToOwner_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnlyRelevantToOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNetStartup_MetaData[];
#endif
		static void NewProp_bNetStartup_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNetStartup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNetTemporary_MetaData[];
#endif
		static void NewProp_bNetTemporary_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNetTemporary;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryActorTick_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrimaryActorTick;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AActor_ActorHasTag, "ActorHasTag" }, // 3062916083
		{ &Z_Construct_UFunction_AActor_AddComponent, "AddComponent" }, // 720895843
		{ &Z_Construct_UFunction_AActor_AddTickPrerequisiteActor, "AddTickPrerequisiteActor" }, // 2888530617
		{ &Z_Construct_UFunction_AActor_AddTickPrerequisiteComponent, "AddTickPrerequisiteComponent" }, // 2197217085
		{ &Z_Construct_UFunction_AActor_DetachRootComponentFromParent, "DetachRootComponentFromParent" }, // 2718896322
		{ &Z_Construct_UFunction_AActor_DisableInput, "DisableInput" }, // 4085517871
		{ &Z_Construct_UFunction_AActor_EnableInput, "EnableInput" }, // 923351713
		{ &Z_Construct_UFunction_AActor_FlushNetDormancy, "FlushNetDormancy" }, // 3143022898
		{ &Z_Construct_UFunction_AActor_ForceNetUpdate, "ForceNetUpdate" }, // 3285099932
		{ &Z_Construct_UFunction_AActor_GetActorBounds, "GetActorBounds" }, // 1055641706
		{ &Z_Construct_UFunction_AActor_GetActorEnableCollision, "GetActorEnableCollision" }, // 1114570305
		{ &Z_Construct_UFunction_AActor_GetActorEyesViewPoint, "GetActorEyesViewPoint" }, // 2539809109
		{ &Z_Construct_UFunction_AActor_GetActorForwardVector, "GetActorForwardVector" }, // 941756053
#if WITH_EDITOR
		{ &Z_Construct_UFunction_AActor_GetActorLabel, "GetActorLabel" }, // 3869646669
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_AActor_GetActorRelativeScale3D, "GetActorRelativeScale3D" }, // 1786442426
		{ &Z_Construct_UFunction_AActor_GetActorRightVector, "GetActorRightVector" }, // 3844230270
		{ &Z_Construct_UFunction_AActor_GetActorScale3D, "GetActorScale3D" }, // 2149435064
		{ &Z_Construct_UFunction_AActor_GetActorTickInterval, "GetActorTickInterval" }, // 2203472980
		{ &Z_Construct_UFunction_AActor_GetActorTimeDilation, "GetActorTimeDilation" }, // 1933280641
		{ &Z_Construct_UFunction_AActor_GetActorUpVector, "GetActorUpVector" }, // 2563816801
		{ &Z_Construct_UFunction_AActor_GetAllChildActors, "GetAllChildActors" }, // 1487149181
		{ &Z_Construct_UFunction_AActor_GetAttachedActors, "GetAttachedActors" }, // 1035119757
		{ &Z_Construct_UFunction_AActor_GetAttachParentActor, "GetAttachParentActor" }, // 2963128236
		{ &Z_Construct_UFunction_AActor_GetAttachParentSocketName, "GetAttachParentSocketName" }, // 3154436278
		{ &Z_Construct_UFunction_AActor_GetComponentByClass, "GetComponentByClass" }, // 3155276558
		{ &Z_Construct_UFunction_AActor_GetComponentsByInterface, "GetComponentsByInterface" }, // 205075064
		{ &Z_Construct_UFunction_AActor_GetComponentsByTag, "GetComponentsByTag" }, // 566097608
		{ &Z_Construct_UFunction_AActor_GetDistanceTo, "GetDistanceTo" }, // 1060604559
		{ &Z_Construct_UFunction_AActor_GetDotProductTo, "GetDotProductTo" }, // 553101221
#if WITH_EDITOR
		{ &Z_Construct_UFunction_AActor_GetFolderPath, "GetFolderPath" }, // 270856146
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_AActor_GetGameTimeSinceCreation, "GetGameTimeSinceCreation" }, // 3507492047
		{ &Z_Construct_UFunction_AActor_GetHorizontalDistanceTo, "GetHorizontalDistanceTo" }, // 1732027964
		{ &Z_Construct_UFunction_AActor_GetHorizontalDotProductTo, "GetHorizontalDotProductTo" }, // 3263351030
		{ &Z_Construct_UFunction_AActor_GetInputAxisKeyValue, "GetInputAxisKeyValue" }, // 3586440189
		{ &Z_Construct_UFunction_AActor_GetInputAxisValue, "GetInputAxisValue" }, // 222714780
		{ &Z_Construct_UFunction_AActor_GetInputVectorAxisValue, "GetInputVectorAxisValue" }, // 2313513484
		{ &Z_Construct_UFunction_AActor_GetInstigator, "GetInstigator" }, // 2671795588
		{ &Z_Construct_UFunction_AActor_GetInstigatorController, "GetInstigatorController" }, // 50947172
		{ &Z_Construct_UFunction_AActor_GetLifeSpan, "GetLifeSpan" }, // 2093474959
		{ &Z_Construct_UFunction_AActor_GetLocalRole, "GetLocalRole" }, // 3843807371
		{ &Z_Construct_UFunction_AActor_GetOverlappingActors, "GetOverlappingActors" }, // 2466016687
		{ &Z_Construct_UFunction_AActor_GetOverlappingComponents, "GetOverlappingComponents" }, // 4194192110
		{ &Z_Construct_UFunction_AActor_GetOwner, "GetOwner" }, // 3102090809
		{ &Z_Construct_UFunction_AActor_GetParentActor, "GetParentActor" }, // 2108096170
		{ &Z_Construct_UFunction_AActor_GetParentComponent, "GetParentComponent" }, // 1030673831
		{ &Z_Construct_UFunction_AActor_GetRemoteRole, "GetRemoteRole" }, // 2427759236
		{ &Z_Construct_UFunction_AActor_GetSquaredDistanceTo, "GetSquaredDistanceTo" }, // 2016429672
		{ &Z_Construct_UFunction_AActor_GetTickableWhenPaused, "GetTickableWhenPaused" }, // 2056204893
		{ &Z_Construct_UFunction_AActor_GetTransform, "GetTransform" }, // 3253653019
		{ &Z_Construct_UFunction_AActor_GetVelocity, "GetVelocity" }, // 3410330007
		{ &Z_Construct_UFunction_AActor_GetVerticalDistanceTo, "GetVerticalDistanceTo" }, // 3606749442
		{ &Z_Construct_UFunction_AActor_HasAuthority, "HasAuthority" }, // 1847952781
		{ &Z_Construct_UFunction_AActor_IsActorBeingDestroyed, "IsActorBeingDestroyed" }, // 2186294290
		{ &Z_Construct_UFunction_AActor_IsActorTickEnabled, "IsActorTickEnabled" }, // 3449730650
		{ &Z_Construct_UFunction_AActor_IsChildActor, "IsChildActor" }, // 1431167439
#if WITH_EDITOR
		{ &Z_Construct_UFunction_AActor_IsEditable, "IsEditable" }, // 2735136224
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_AActor_IsHiddenEd, "IsHiddenEd" }, // 3742501650
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_AActor_IsHiddenEdAtStartup, "IsHiddenEdAtStartup" }, // 545379864
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_AActor_IsOverlappingActor, "IsOverlappingActor" }, // 2065183001
#if WITH_EDITOR
		{ &Z_Construct_UFunction_AActor_IsSelectable, "IsSelectable" }, // 2000508443
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_AActor_IsTemporarilyHiddenInEditor, "IsTemporarilyHiddenInEditor" }, // 3751384478
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_AActor_K2_AddActorLocalOffset, "K2_AddActorLocalOffset" }, // 1202703341
		{ &Z_Construct_UFunction_AActor_K2_AddActorLocalRotation, "K2_AddActorLocalRotation" }, // 2579972392
		{ &Z_Construct_UFunction_AActor_K2_AddActorLocalTransform, "K2_AddActorLocalTransform" }, // 2241129813
		{ &Z_Construct_UFunction_AActor_K2_AddActorWorldOffset, "K2_AddActorWorldOffset" }, // 305065332
		{ &Z_Construct_UFunction_AActor_K2_AddActorWorldRotation, "K2_AddActorWorldRotation" }, // 1548411585
		{ &Z_Construct_UFunction_AActor_K2_AddActorWorldTransform, "K2_AddActorWorldTransform" }, // 1167623910
		{ &Z_Construct_UFunction_AActor_K2_AttachRootComponentTo, "K2_AttachRootComponentTo" }, // 973887967
		{ &Z_Construct_UFunction_AActor_K2_AttachRootComponentToActor, "K2_AttachRootComponentToActor" }, // 4075094466
		{ &Z_Construct_UFunction_AActor_K2_AttachToActor, "K2_AttachToActor" }, // 3721086290
		{ &Z_Construct_UFunction_AActor_K2_AttachToComponent, "K2_AttachToComponent" }, // 50999007
		{ &Z_Construct_UFunction_AActor_K2_DestroyActor, "K2_DestroyActor" }, // 2280271781
		{ &Z_Construct_UFunction_AActor_K2_DestroyComponent, "K2_DestroyComponent" }, // 499151239
		{ &Z_Construct_UFunction_AActor_K2_DetachFromActor, "K2_DetachFromActor" }, // 350270383
		{ &Z_Construct_UFunction_AActor_K2_GetActorLocation, "K2_GetActorLocation" }, // 235335283
		{ &Z_Construct_UFunction_AActor_K2_GetActorRotation, "K2_GetActorRotation" }, // 679188494
		{ &Z_Construct_UFunction_AActor_K2_GetComponentsByClass, "K2_GetComponentsByClass" }, // 1687600135
		{ &Z_Construct_UFunction_AActor_K2_GetRootComponent, "K2_GetRootComponent" }, // 2017486986
		{ &Z_Construct_UFunction_AActor_K2_OnBecomeViewTarget, "K2_OnBecomeViewTarget" }, // 3386110427
		{ &Z_Construct_UFunction_AActor_K2_OnEndViewTarget, "K2_OnEndViewTarget" }, // 734056756
		{ &Z_Construct_UFunction_AActor_K2_OnReset, "K2_OnReset" }, // 2102334319
		{ &Z_Construct_UFunction_AActor_K2_SetActorLocation, "K2_SetActorLocation" }, // 3596825818
		{ &Z_Construct_UFunction_AActor_K2_SetActorLocationAndRotation, "K2_SetActorLocationAndRotation" }, // 3535842264
		{ &Z_Construct_UFunction_AActor_K2_SetActorRelativeLocation, "K2_SetActorRelativeLocation" }, // 3867906004
		{ &Z_Construct_UFunction_AActor_K2_SetActorRelativeRotation, "K2_SetActorRelativeRotation" }, // 288752948
		{ &Z_Construct_UFunction_AActor_K2_SetActorRelativeTransform, "K2_SetActorRelativeTransform" }, // 502665805
		{ &Z_Construct_UFunction_AActor_K2_SetActorRotation, "K2_SetActorRotation" }, // 4086832737
		{ &Z_Construct_UFunction_AActor_K2_SetActorTransform, "K2_SetActorTransform" }, // 339324368
		{ &Z_Construct_UFunction_AActor_K2_TeleportTo, "K2_TeleportTo" }, // 672017023
		{ &Z_Construct_UFunction_AActor_MakeMIDForMaterial, "MakeMIDForMaterial" }, // 2688989894
		{ &Z_Construct_UFunction_AActor_MakeNoise, "MakeNoise" }, // 2884528947
		{ &Z_Construct_UFunction_AActor_OnRep_AttachmentReplication, "OnRep_AttachmentReplication" }, // 2884324323
		{ &Z_Construct_UFunction_AActor_OnRep_Instigator, "OnRep_Instigator" }, // 589971595
		{ &Z_Construct_UFunction_AActor_OnRep_Owner, "OnRep_Owner" }, // 2381187948
		{ &Z_Construct_UFunction_AActor_OnRep_ReplicatedMovement, "OnRep_ReplicatedMovement" }, // 2244656914
		{ &Z_Construct_UFunction_AActor_OnRep_ReplicateMovement, "OnRep_ReplicateMovement" }, // 145120689
		{ &Z_Construct_UFunction_AActor_PrestreamTextures, "PrestreamTextures" }, // 2269502341
		{ &Z_Construct_UFunction_AActor_ReceiveActorBeginCursorOver, "ReceiveActorBeginCursorOver" }, // 3062388161
		{ &Z_Construct_UFunction_AActor_ReceiveActorBeginOverlap, "ReceiveActorBeginOverlap" }, // 1066644481
		{ &Z_Construct_UFunction_AActor_ReceiveActorEndCursorOver, "ReceiveActorEndCursorOver" }, // 1351505038
		{ &Z_Construct_UFunction_AActor_ReceiveActorEndOverlap, "ReceiveActorEndOverlap" }, // 3711080305
		{ &Z_Construct_UFunction_AActor_ReceiveActorOnClicked, "ReceiveActorOnClicked" }, // 1735774942
		{ &Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchBegin, "ReceiveActorOnInputTouchBegin" }, // 1187770383
		{ &Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchEnd, "ReceiveActorOnInputTouchEnd" }, // 1535139641
		{ &Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchEnter, "ReceiveActorOnInputTouchEnter" }, // 234936741
		{ &Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchLeave, "ReceiveActorOnInputTouchLeave" }, // 4117971802
		{ &Z_Construct_UFunction_AActor_ReceiveActorOnReleased, "ReceiveActorOnReleased" }, // 957986058
		{ &Z_Construct_UFunction_AActor_ReceiveAnyDamage, "ReceiveAnyDamage" }, // 3230009665
		{ &Z_Construct_UFunction_AActor_ReceiveBeginPlay, "ReceiveBeginPlay" }, // 1980322659
		{ &Z_Construct_UFunction_AActor_ReceiveDestroyed, "ReceiveDestroyed" }, // 3164805839
		{ &Z_Construct_UFunction_AActor_ReceiveEndPlay, "ReceiveEndPlay" }, // 1307424623
		{ &Z_Construct_UFunction_AActor_ReceiveHit, "ReceiveHit" }, // 2131600957
		{ &Z_Construct_UFunction_AActor_ReceivePointDamage, "ReceivePointDamage" }, // 402174037
		{ &Z_Construct_UFunction_AActor_ReceiveRadialDamage, "ReceiveRadialDamage" }, // 2706257667
		{ &Z_Construct_UFunction_AActor_ReceiveTick, "ReceiveTick" }, // 4024462552
		{ &Z_Construct_UFunction_AActor_RemoveTickPrerequisiteActor, "RemoveTickPrerequisiteActor" }, // 1312556017
		{ &Z_Construct_UFunction_AActor_RemoveTickPrerequisiteComponent, "RemoveTickPrerequisiteComponent" }, // 288839544
		{ &Z_Construct_UFunction_AActor_SetActorEnableCollision, "SetActorEnableCollision" }, // 3658428227
		{ &Z_Construct_UFunction_AActor_SetActorHiddenInGame, "SetActorHiddenInGame" }, // 3254967631
#if WITH_EDITOR
		{ &Z_Construct_UFunction_AActor_SetActorLabel, "SetActorLabel" }, // 85674521
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_AActor_SetActorRelativeScale3D, "SetActorRelativeScale3D" }, // 120768436
		{ &Z_Construct_UFunction_AActor_SetActorScale3D, "SetActorScale3D" }, // 4137451149
		{ &Z_Construct_UFunction_AActor_SetActorTickEnabled, "SetActorTickEnabled" }, // 3873436101
		{ &Z_Construct_UFunction_AActor_SetActorTickInterval, "SetActorTickInterval" }, // 2891764372
		{ &Z_Construct_UFunction_AActor_SetAutoDestroyWhenFinished, "SetAutoDestroyWhenFinished" }, // 2453354328
#if WITH_EDITOR
		{ &Z_Construct_UFunction_AActor_SetFolderPath, "SetFolderPath" }, // 1501605233
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_AActor_SetIsTemporarilyHiddenInEditor, "SetIsTemporarilyHiddenInEditor" }, // 2214107362
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_AActor_SetLifeSpan, "SetLifeSpan" }, // 3225116875
		{ &Z_Construct_UFunction_AActor_SetNetDormancy, "SetNetDormancy" }, // 2906669781
		{ &Z_Construct_UFunction_AActor_SetOwner, "SetOwner" }, // 2816931683
		{ &Z_Construct_UFunction_AActor_SetReplicateMovement, "SetReplicateMovement" }, // 1721993606
		{ &Z_Construct_UFunction_AActor_SetReplicates, "SetReplicates" }, // 640122106
		{ &Z_Construct_UFunction_AActor_SetTickableWhenPaused, "SetTickableWhenPaused" }, // 1036801845
		{ &Z_Construct_UFunction_AActor_SetTickGroup, "SetTickGroup" }, // 708255976
		{ &Z_Construct_UFunction_AActor_SnapRootComponentTo, "SnapRootComponentTo" }, // 340101396
		{ &Z_Construct_UFunction_AActor_TearOff, "TearOff" }, // 1648207735
		{ &Z_Construct_UFunction_AActor_UserConstructionScript, "UserConstructionScript" }, // 3638056723
		{ &Z_Construct_UFunction_AActor_WasRecentlyRendered, "WasRecentlyRendered" }, // 1093364555
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Actor is the base class for an Object that can be placed or spawned in a level.\n * Actors may contain a collection of ActorComponents, which can be used to control how actors move, how they are rendered, etc.\n * The other main function of an Actor is the replication of properties and function calls across the network during play.\n * \n * \n * Actor initialization has multiple steps, here's the order of important virtual functions that get called:\n * - UObject::PostLoad: For actors statically placed in a level, the normal UObject PostLoad gets called both in the editor and during gameplay.\n *                      This is not called for newly spawned actors.\n * - UActorComponent::OnComponentCreated: When an actor is spawned in the editor or during gameplay, this gets called for any native components.\n *                                        For blueprint-created components, this gets called during construction for that component.\n *                                        This is not called for components loaded from a level.\n * - AActor::PreRegisterAllComponents: For statically placed actors and spawned actors that have native root components, this gets called now.\n *                                     For blueprint actors without a native root component, these registration functions get called later during construction.\n * - UActorComponent::RegisterComponent: All components are registered in editor and at runtime, this creates their physical/visual representation.\n *                                       These calls may be distributed over multiple frames, but are always after PreRegisterAllComponents.\n *                                       This may also get called later on after an UnregisterComponent call removes it from the world.\n * - AActor::PostRegisterAllComponents: Called for all actors both in the editor and in gameplay, this is the last function that is called in all cases.\n * - AActor::PostActorCreated: When an actor is created in the editor or during gameplay, this gets called right before construction.\n *                             This is not called for components loaded from a level.\n * - AActor::UserConstructionScript: Called for blueprints that implement a construction script.\n * - AActor::OnConstruction: Called at the end of ExecuteConstruction, which calls the blueprint construction script.\n *                           This is called after all blueprint-created components are fully created and registered.\n *                           This is only called during gameplay for spawned actors, and may get rerun in the editor when changing blueprints.\n * - AActor::PreInitializeComponents: Called before InitializeComponent is called on the actor's components.\n *                                    This is only called during gameplay and in certain editor preview windows.\n * - UActorComponent::Activate: This will be called only if the component has bAutoActivate set.\n *                              It will also got called later on if a component is manually activated.\n * - UActorComponent::InitializeComponent: This will be called only if the component has bWantsInitializeComponentSet.\n *                                         This only happens once per gameplay session.\n * - AActor::PostInitializeComponents: Called after the actor's components have been initialized, only during gameplay and some editor previews.\n * - AActor::BeginPlay: Called when the level starts ticking, only during actual gameplay.\n *                      This normally happens right after PostInitializeComponents but can be delayed for networked or child actors.\n *\n * @see https://docs.unrealengine.com/latest/INT/Programming/UnrealArchitecture/Actors/\n * @see https://docs.unrealengine.com/en-us/Programming/UnrealArchitecture/Actors/ActorLifecycle\n * @see UActorComponent\n */" },
		{ "IncludePath", "GameFramework/Actor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShortTooltip", "An Actor is an object that can be placed or spawned in the world." },
		{ "ToolTip", "Actor is the base class for an Object that can be placed or spawned in a level.\nActors may contain a collection of ActorComponents, which can be used to control how actors move, how they are rendered, etc.\nThe other main function of an Actor is the replication of properties and function calls across the network during play.\n\n\nActor initialization has multiple steps, here's the order of important virtual functions that get called:\n- UObject::PostLoad: For actors statically placed in a level, the normal UObject PostLoad gets called both in the editor and during gameplay.\n                     This is not called for newly spawned actors.\n- UActorComponent::OnComponentCreated: When an actor is spawned in the editor or during gameplay, this gets called for any native components.\n                                       For blueprint-created components, this gets called during construction for that component.\n                                       This is not called for components loaded from a level.\n- AActor::PreRegisterAllComponents: For statically placed actors and spawned actors that have native root components, this gets called now.\n                                    For blueprint actors without a native root component, these registration functions get called later during construction.\n- UActorComponent::RegisterComponent: All components are registered in editor and at runtime, this creates their physical/visual representation.\n                                      These calls may be distributed over multiple frames, but are always after PreRegisterAllComponents.\n                                      This may also get called later on after an UnregisterComponent call removes it from the world.\n- AActor::PostRegisterAllComponents: Called for all actors both in the editor and in gameplay, this is the last function that is called in all cases.\n- AActor::PostActorCreated: When an actor is created in the editor or during gameplay, this gets called right before construction.\n                            This is not called for components loaded from a level.\n- AActor::UserConstructionScript: Called for blueprints that implement a construction script.\n- AActor::OnConstruction: Called at the end of ExecuteConstruction, which calls the blueprint construction script.\n                          This is called after all blueprint-created components are fully created and registered.\n                          This is only called during gameplay for spawned actors, and may get rerun in the editor when changing blueprints.\n- AActor::PreInitializeComponents: Called before InitializeComponent is called on the actor's components.\n                                   This is only called during gameplay and in certain editor preview windows.\n- UActorComponent::Activate: This will be called only if the component has bAutoActivate set.\n                             It will also got called later on if a component is manually activated.\n- UActorComponent::InitializeComponent: This will be called only if the component has bWantsInitializeComponentSet.\n                                        This only happens once per gameplay session.\n- AActor::PostInitializeComponents: Called after the actor's components have been initialized, only during gameplay and some editor previews.\n- AActor::BeginPlay: Called when the level starts ticking, only during actual gameplay.\n                     This normally happens right after PostInitializeComponents but can be delayed for networked or child actors.\n\n@see https://docs.unrealengine.com/latest/INT/Programming/UnrealArchitecture/Actors/\n@see https://docs.unrealengine.com/en-us/Programming/UnrealArchitecture/Actors/ActorLifecycle\n@see UActorComponent" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_BlueprintCreatedComponents_MetaData[] = {
		{ "Comment", "/** Array of ActorComponents that are created by blueprints and serialized per-instance. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Array of ActorComponents that are created by blueprints and serialized per-instance." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_BlueprintCreatedComponents = { "BlueprintCreatedComponents", nullptr, (EPropertyFlags)0x0010408400000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActor, BlueprintCreatedComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_BlueprintCreatedComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_BlueprintCreatedComponents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_BlueprintCreatedComponents_Inner = { "BlueprintCreatedComponents", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_InstanceComponents_MetaData[] = {
		{ "Comment", "/** Array of ActorComponents that have been added by the user on a per-instance basis. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Array of ActorComponents that have been added by the user on a per-instance basis." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_InstanceComponents = { "InstanceComponents", nullptr, (EPropertyFlags)0x0040008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActor, InstanceComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_InstanceComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_InstanceComponents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_InstanceComponents_Inner_MetaData[] = {
		{ "Comment", "/** Array of ActorComponents that have been added by the user on a per-instance basis. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Array of ActorComponents that have been added by the user on a per-instance basis." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_InstanceComponents_Inner = { "InstanceComponents", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_InstanceComponents_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_InstanceComponents_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_OnEndPlay_MetaData[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Event triggered when the actor is being deleted or removed from a level. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Event triggered when the actor is being deleted or removed from a level." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AActor_Statics::NewProp_OnEndPlay = { "OnEndPlay", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActor, OnEndPlay), Z_Construct_USparseDelegateFunction_Engine_ActorEndPlaySignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_OnEndPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_OnEndPlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_OnDestroyed_MetaData[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Event triggered when the actor has been explicitly destroyed. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Event triggered when the actor has been explicitly destroyed." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AActor_Statics::NewProp_OnDestroyed = { "OnDestroyed", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActor, OnDestroyed), Z_Construct_USparseDelegateFunction_Engine_ActorDestroyedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_OnDestroyed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_OnDestroyed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_OnActorHit_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** \n\x09 *\x09""Called when this Actor hits (or is hit by) something solid. This could happen due to things like Character movement, using Set Location with 'sweep' enabled, or physics simulation.\n\x09 *\x09""For events when objects overlap (e.g. walking into a trigger) see the 'Overlap' event.\n\x09 *\x09@note For collisions during physics simulation to generate hit events, 'Simulation Generates Hit Events' must be enabled.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Called when this Actor hits (or is hit by) something solid. This could happen due to things like Character movement, using Set Location with 'sweep' enabled, or physics simulation.\nFor events when objects overlap (e.g. walking into a trigger) see the 'Overlap' event.\n@note For collisions during physics simulation to generate hit events, 'Simulation Generates Hit Events' must be enabled." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AActor_Statics::NewProp_OnActorHit = { "OnActorHit", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActor, OnActorHit), Z_Construct_USparseDelegateFunction_Engine_ActorHitSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_OnActorHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_OnActorHit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_OnInputTouchLeave_MetaData[] = {
		{ "Category", "Input|Touch Input" },
		{ "Comment", "/** Called when a finger is moved off this actor when touch over events are enabled in the player controller. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Called when a finger is moved off this actor when touch over events are enabled in the player controller." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AActor_Statics::NewProp_OnInputTouchLeave = { "OnInputTouchLeave", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActor, OnInputTouchLeave), Z_Construct_USparseDelegateFunction_Engine_ActorEndTouchOverSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_OnInputTouchLeave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_OnInputTouchLeave_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_OnInputTouchEnter_MetaData[] = {
		{ "Category", "Input|Touch Input" },
		{ "Comment", "/** Called when a finger is moved over this actor when touch over events are enabled in the player controller. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Called when a finger is moved over this actor when touch over events are enabled in the player controller." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AActor_Statics::NewProp_OnInputTouchEnter = { "OnInputTouchEnter", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActor, OnInputTouchEnter), Z_Construct_USparseDelegateFunction_Engine_ActorBeginTouchOverSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_OnInputTouchEnter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_OnInputTouchEnter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_OnInputTouchEnd_MetaData[] = {
		{ "Category", "Input|Touch Input" },
		{ "Comment", "/** Called when a touch input is received over this component when touch events are enabled in the player controller. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Called when a touch input is received over this component when touch events are enabled in the player controller." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AActor_Statics::NewProp_OnInputTouchEnd = { "OnInputTouchEnd", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActor, OnInputTouchEnd), Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchEndSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_OnInputTouchEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_OnInputTouchEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_OnInputTouchBegin_MetaData[] = {
		{ "Category", "Input|Touch Input" },
		{ "Comment", "/** Called when a touch input is received over this actor when touch events are enabled in the player controller. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Called when a touch input is received over this actor when touch events are enabled in the player controller." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AActor_Statics::NewProp_OnInputTouchBegin = { "OnInputTouchBegin", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActor, OnInputTouchBegin), Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchBeginSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_OnInputTouchBegin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_OnInputTouchBegin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_OnReleased_MetaData[] = {
		{ "Category", "Input|Mouse Input" },
		{ "Comment", "/** Called when the left mouse button is released while the mouse is over this actor and click events are enabled in the player controller. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Called when the left mouse button is released while the mouse is over this actor and click events are enabled in the player controller." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AActor_Statics::NewProp_OnReleased = { "OnReleased", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActor, OnReleased), Z_Construct_USparseDelegateFunction_Engine_ActorOnReleasedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_OnReleased_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_OnReleased_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_OnClicked_MetaData[] = {
		{ "Category", "Input|Mouse Input" },
		{ "Comment", "/** Called when the left mouse button is clicked while the mouse is over this actor and click events are enabled in the player controller. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Called when the left mouse button is clicked while the mouse is over this actor and click events are enabled in the player controller." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AActor_Statics::NewProp_OnClicked = { "OnClicked", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActor, OnClicked), Z_Construct_USparseDelegateFunction_Engine_ActorOnClickedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_OnClicked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_OnClicked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_OnEndCursorOver_MetaData[] = {
		{ "Category", "Input|Mouse Input" },
		{ "Comment", "/** Called when the mouse cursor is moved off this actor if mouse over events are enabled in the player controller. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Called when the mouse cursor is moved off this actor if mouse over events are enabled in the player controller." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AActor_Statics::NewProp_OnEndCursorOver = { "OnEndCursorOver", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActor, OnEndCursorOver), Z_Construct_USparseDelegateFunction_Engine_ActorEndCursorOverSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_OnEndCursorOver_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_OnEndCursorOver_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_OnBeginCursorOver_MetaData[] = {
		{ "Category", "Input|Mouse Input" },
		{ "Comment", "/** Called when the mouse cursor is moved over this actor if mouse over events are enabled in the player controller. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Called when the mouse cursor is moved over this actor if mouse over events are enabled in the player controller." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AActor_Statics::NewProp_OnBeginCursorOver = { "OnBeginCursorOver", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActor, OnBeginCursorOver), Z_Construct_USparseDelegateFunction_Engine_ActorBeginCursorOverSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_OnBeginCursorOver_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_OnBeginCursorOver_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_OnActorEndOverlap_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** \n\x09 * Called when another actor stops overlapping this actor. \n\x09 * @note Components on both this and the other Actor must have bGenerateOverlapEvents set to true to generate overlap events.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Called when another actor stops overlapping this actor.\n@note Components on both this and the other Actor must have bGenerateOverlapEvents set to true to generate overlap events." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AActor_Statics::NewProp_OnActorEndOverlap = { "OnActorEndOverlap", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActor, OnActorEndOverlap), Z_Construct_USparseDelegateFunction_Engine_ActorEndOverlapSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_OnActorEndOverlap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_OnActorEndOverlap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_OnActorBeginOverlap_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** \n\x09 * Called when another actor begins to overlap this actor, for example a player walking into a trigger.\n\x09 * For events when objects have a blocking collision, for example a player hitting a wall, see 'Hit' events.\n\x09 * @note Components on both this and the other Actor must have bGenerateOverlapEvents set to true to generate overlap events.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Called when another actor begins to overlap this actor, for example a player walking into a trigger.\nFor events when objects have a blocking collision, for example a player hitting a wall, see 'Hit' events.\n@note Components on both this and the other Actor must have bGenerateOverlapEvents set to true to generate overlap events." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AActor_Statics::NewProp_OnActorBeginOverlap = { "OnActorBeginOverlap", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActor, OnActorBeginOverlap), Z_Construct_USparseDelegateFunction_Engine_ActorBeginOverlapSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_OnActorBeginOverlap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_OnActorBeginOverlap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_OnTakeRadialDamage_MetaData[] = {
		{ "Category", "Game|Damage" },
		{ "Comment", "/** Called when the actor is damaged by radial damage. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Called when the actor is damaged by radial damage." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AActor_Statics::NewProp_OnTakeRadialDamage = { "OnTakeRadialDamage", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActor, OnTakeRadialDamage), Z_Construct_USparseDelegateFunction_Engine_TakeRadialDamageSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_OnTakeRadialDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_OnTakeRadialDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_OnTakePointDamage_MetaData[] = {
		{ "Category", "Game|Damage" },
		{ "Comment", "/** Called when the actor is damaged by point damage. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Called when the actor is damaged by point damage." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AActor_Statics::NewProp_OnTakePointDamage = { "OnTakePointDamage", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActor, OnTakePointDamage), Z_Construct_USparseDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_OnTakePointDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_OnTakePointDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_OnTakeAnyDamage_MetaData[] = {
		{ "Category", "Game|Damage" },
		{ "Comment", "/** Called when the actor is damaged in any way. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Called when the actor is damaged in any way." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AActor_Statics::NewProp_OnTakeAnyDamage = { "OnTakeAnyDamage", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActor, OnTakeAnyDamage), Z_Construct_USparseDelegateFunction_Engine_TakeAnyDamageSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_OnTakeAnyDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_OnTakeAnyDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_Tags_MetaData[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** Array of tags that can be used for grouping and categorizing. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Array of tags that can be used for grouping and categorizing." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActor, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_Tags_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AActor_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_bHiddenEdTemporary_MetaData[] = {
		{ "Comment", "/** Whether this actor is temporarily hidden within the editor; used for show/hide/etc functionality w/o dirtying the actor. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Whether this actor is temporarily hidden within the editor; used for show/hide/etc functionality w/o dirtying the actor." },
	};
#endif
	void Z_Construct_UClass_AActor_Statics::NewProp_bHiddenEdTemporary_SetBit(void* Obj)
	{
		((AActor*)Obj)->bHiddenEdTemporary = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bHiddenEdTemporary = { "bHiddenEdTemporary", nullptr, (EPropertyFlags)0x0040000800002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bHiddenEdTemporary_SetBit, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_bHiddenEdTemporary_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_bHiddenEdTemporary_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_bOptimizeBPComponentData_MetaData[] = {
		{ "Category", "Cooking" },
		{ "Comment", "/** Whether to cook additional data to speed up spawn events at runtime for any Blueprint classes based on this Actor. This option may slightly increase memory usage in a cooked build. */" },
		{ "DisplayName", "Generate Optimized Blueprint Component Data" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Whether to cook additional data to speed up spawn events at runtime for any Blueprint classes based on this Actor. This option may slightly increase memory usage in a cooked build." },
	};
#endif
	void Z_Construct_UClass_AActor_Statics::NewProp_bOptimizeBPComponentData_SetBit(void* Obj)
	{
		((AActor*)Obj)->bOptimizeBPComponentData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bOptimizeBPComponentData = { "bOptimizeBPComponentData", nullptr, (EPropertyFlags)0x00200c0800010001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bOptimizeBPComponentData_SetBit, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_bOptimizeBPComponentData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_bOptimizeBPComponentData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_bListedInSceneOutliner_MetaData[] = {
		{ "Comment", "/** Whether this actor should be listed in the scene outliner. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Whether this actor should be listed in the scene outliner." },
	};
#endif
	void Z_Construct_UClass_AActor_Statics::NewProp_bListedInSceneOutliner_SetBit(void* Obj)
	{
		((AActor*)Obj)->bListedInSceneOutliner = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bListedInSceneOutliner = { "bListedInSceneOutliner", nullptr, (EPropertyFlags)0x0020080800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bListedInSceneOutliner_SetBit, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_bListedInSceneOutliner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_bListedInSceneOutliner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_bEditable_MetaData[] = {
		{ "Comment", "/** Whether the actor can be manipulated by editor operations. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Whether the actor can be manipulated by editor operations." },
	};
#endif
	void Z_Construct_UClass_AActor_Statics::NewProp_bEditable_SetBit(void* Obj)
	{
		((AActor*)Obj)->bEditable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bEditable = { "bEditable", nullptr, (EPropertyFlags)0x0020080800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bEditable_SetBit, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_bEditable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_bEditable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_bActorLabelEditable_MetaData[] = {
		{ "Comment", "/** Is the actor label editable by the user? */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Is the actor label editable by the user?" },
	};
#endif
	void Z_Construct_UClass_AActor_Statics::NewProp_bActorLabelEditable_SetBit(void* Obj)
	{
		((AActor*)Obj)->bActorLabelEditable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bActorLabelEditable = { "bActorLabelEditable", nullptr, (EPropertyFlags)0x0020080800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bActorLabelEditable_SetBit, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_bActorLabelEditable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_bActorLabelEditable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_bLockLocation_MetaData[] = {
		{ "Comment", "/** If true, prevents the actor from being moved in the editor viewport. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "If true, prevents the actor from being moved in the editor viewport." },
	};
#endif
	void Z_Construct_UClass_AActor_Statics::NewProp_bLockLocation_SetBit(void* Obj)
	{
		((AActor*)Obj)->bLockLocation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bLockLocation = { "bLockLocation", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bLockLocation_SetBit, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_bLockLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_bLockLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_bHiddenEdLevel_MetaData[] = {
		{ "Comment", "/** Whether this actor is hidden by the level browser. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Whether this actor is hidden by the level browser." },
	};
#endif
	void Z_Construct_UClass_AActor_Statics::NewProp_bHiddenEdLevel_SetBit(void* Obj)
	{
		((AActor*)Obj)->bHiddenEdLevel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bHiddenEdLevel = { "bHiddenEdLevel", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bHiddenEdLevel_SetBit, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_bHiddenEdLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_bHiddenEdLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_bHiddenEdLayer_MetaData[] = {
		{ "Comment", "/** Whether this actor is hidden by the layer browser. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Whether this actor is hidden by the layer browser." },
	};
#endif
	void Z_Construct_UClass_AActor_Statics::NewProp_bHiddenEdLayer_SetBit(void* Obj)
	{
		((AActor*)Obj)->bHiddenEdLayer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bHiddenEdLayer = { "bHiddenEdLayer", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bHiddenEdLayer_SetBit, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_bHiddenEdLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_bHiddenEdLayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_bIsEditorPreviewActor_MetaData[] = {
		{ "Comment", "/** True if this actor is the preview actor dragged out of the content browser */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "True if this actor is the preview actor dragged out of the content browser" },
	};
#endif
	void Z_Construct_UClass_AActor_Statics::NewProp_bIsEditorPreviewActor_SetBit(void* Obj)
	{
		((AActor*)Obj)->bIsEditorPreviewActor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bIsEditorPreviewActor = { "bIsEditorPreviewActor", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bIsEditorPreviewActor_SetBit, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_bIsEditorPreviewActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_bIsEditorPreviewActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_bHiddenEd_MetaData[] = {
		{ "Comment", "/** Whether this actor is hidden within the editor viewport. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Whether this actor is hidden within the editor viewport." },
	};
#endif
	void Z_Construct_UClass_AActor_Statics::NewProp_bHiddenEd_SetBit(void* Obj)
	{
		((AActor*)Obj)->bHiddenEd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bHiddenEd = { "bHiddenEd", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bHiddenEd_SetBit, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_bHiddenEd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_bHiddenEd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_FolderPath_MetaData[] = {
		{ "Comment", "/** The folder path of this actor in the world (empty=root, / separated)*/" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "The folder path of this actor in the world (empty=root, / separated)" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AActor_Statics::NewProp_FolderPath = { "FolderPath", nullptr, (EPropertyFlags)0x0040000800000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActor, FolderPath), METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_FolderPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_FolderPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_ActorLabel_MetaData[] = {
		{ "Comment", "/**\n\x09 * The friendly name for this actor, displayed in the editor.  You should always use AActor::GetActorLabel() to access the actual label to display,\n\x09 * and call AActor::SetActorLabel() or FActorLabelUtilities::SetActorLabelUnique() to change the label.  Never set the label directly.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "The friendly name for this actor, displayed in the editor.  You should always use AActor::GetActorLabel() to access the actual label to display,\nand call AActor::SetActorLabel() or FActorLabelUtilities::SetActorLabelUnique() to change the label.  Never set the label directly." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_ActorLabel = { "ActorLabel", nullptr, (EPropertyFlags)0x0040000800000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActor, ActorLabel), METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_ActorLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_ActorLabel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_HiddenEditorViews_MetaData[] = {
		{ "Comment", "/** Bitflag to represent which views this actor is hidden in, via per-view layer visibility. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Bitflag to represent which views this actor is hidden in, via per-view layer visibility." },
	};
#endif
	const UE4CodeGen_Private::FFInt64PropertyParams Z_Construct_UClass_AActor_Statics::NewProp_HiddenEditorViews = { "HiddenEditorViews", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActor, HiddenEditorViews), METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_HiddenEditorViews_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_HiddenEditorViews_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_SpriteScale_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** The scale to apply to any billboard components in editor builds (happens in any WITH_EDITOR build, including non-cooked games). */" },
		{ "DisplayName", "Editor Billboard Scale" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "The scale to apply to any billboard components in editor builds (happens in any WITH_EDITOR build, including non-cooked games)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_SpriteScale = { "SpriteScale", nullptr, (EPropertyFlags)0x0010000800000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActor, SpriteScale), METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_SpriteScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_SpriteScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_GroupActor_MetaData[] = {
		{ "Comment", "/** The editor-only group this actor is a part of. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "The editor-only group this actor is a part of." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_GroupActor = { "GroupActor", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActor, GroupActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_GroupActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_GroupActor_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_ParentComponent_MetaData[] = {
		{ "Comment", "/** The UChildActorComponent that owns this Actor. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "The UChildActorComponent that owns this Actor." },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_ParentComponent = { "ParentComponent", nullptr, (EPropertyFlags)0x0044000000080008, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActor, ParentComponent), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_ParentComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_ParentComponent_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_ParentComponentActor_MetaData[] = {
		{ "Comment", "/** @deprecated Use ParentComponent instead */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "@deprecated Use ParentComponent instead" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_ParentComponentActor = { "ParentComponentActor", nullptr, (EPropertyFlags)0x0044000820000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActor, ParentComponentActor_DEPRECATED), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_ParentComponentActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_ParentComponentActor_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_Layers_MetaData[] = {
		{ "Comment", "/** Layers the actor belongs to.  This is outside of the editoronly data to allow hiding of LD-specified layers at runtime for profiling. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Layers the actor belongs to.  This is outside of the editoronly data to allow hiding of LD-specified layers at runtime for profiling." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_Layers = { "Layers", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActor, Layers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_Layers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_Layers_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AActor_Statics::NewProp_Layers_Inner = { "Layers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_ControllingMatineeActors_MetaData[] = {
		{ "Comment", "/** The matinee actors that control this actor. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "The matinee actors that control this actor." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_ControllingMatineeActors = { "ControllingMatineeActors", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActor, ControllingMatineeActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_ControllingMatineeActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_ControllingMatineeActors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_ControllingMatineeActors_Inner = { "ControllingMatineeActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AMatineeActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_PivotOffset_MetaData[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** Local space pivot offset for the actor, only used in the editor */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Local space pivot offset for the actor, only used in the editor" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_PivotOffset = { "PivotOffset", nullptr, (EPropertyFlags)0x00200c0800000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActor, PivotOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_PivotOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_PivotOffset_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_RootComponent_MetaData[] = {
		{ "BlueprintGetter", "K2_GetRootComponent" },
		{ "Category", "Utilities|Transformation" },
		{ "Comment", "/** The component that defines the transform (location, rotation, scale) of this Actor in the world, all other components must be attached to this one somehow */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "The component that defines the transform (location, rotation, scale) of this Actor in the world, all other components must be attached to this one somehow" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_RootComponent = { "RootComponent", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActor, RootComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_RootComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_RootComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_Children_MetaData[] = {
		{ "Comment", "/** Array of all Actors whose Owner is this actor, these are not necessarily spawned by UChildActorComponent */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Array of all Actors whose Owner is this actor, these are not necessarily spawned by UChildActorComponent" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_Children = { "Children", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActor, Children), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_Children_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_Children_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_Children_Inner = { "Children", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_Instigator_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Actor" },
		{ "Comment", "/** Pawn responsible for damage and other gameplay events caused by this actor. */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Pawn responsible for damage and other gameplay events caused by this actor." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_Instigator = { "Instigator", "OnRep_Instigator", (EPropertyFlags)0x0041000100000024, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActor, Instigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_Instigator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_Instigator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_NetPriority_MetaData[] = {
		{ "Category", "Replication" },
		{ "Comment", "/** Priority for this actor when checking for replication in a low bandwidth or saturated situation, higher priority means it is more likely to replicate */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Priority for this actor when checking for replication in a low bandwidth or saturated situation, higher priority means it is more likely to replicate" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_NetPriority = { "NetPriority", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActor, NetPriority), METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_NetPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_NetPriority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_MinNetUpdateFrequency_MetaData[] = {
		{ "Category", "Replication" },
		{ "Comment", "/** Used to determine what rate to throttle down to when replicated properties are changing infrequently */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Used to determine what rate to throttle down to when replicated properties are changing infrequently" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_MinNetUpdateFrequency = { "MinNetUpdateFrequency", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActor, MinNetUpdateFrequency), METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_MinNetUpdateFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_MinNetUpdateFrequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_NetUpdateFrequency_MetaData[] = {
		{ "Category", "Replication" },
		{ "Comment", "/** How often (per second) this actor will be considered for replication, used to determine NetUpdateTime */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "How often (per second) this actor will be considered for replication, used to determine NetUpdateTime" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_NetUpdateFrequency = { "NetUpdateFrequency", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActor, NetUpdateFrequency), METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_NetUpdateFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_NetUpdateFrequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_NetTag_MetaData[] = {
		{ "Comment", "/** Internal - used by UNetDriver */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Internal - used by UNetDriver" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_NetTag = { "NetTag", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActor, NetTag), METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_NetTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_NetTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_NetCullDistanceSquared_MetaData[] = {
		{ "Category", "Replication" },
		{ "Comment", "/** Square of the max distance from the client's viewpoint that this actor is relevant and will be replicated. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Square of the max distance from the client's viewpoint that this actor is relevant and will be replicated." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_NetCullDistanceSquared = { "NetCullDistanceSquared", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActor, NetCullDistanceSquared), METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_NetCullDistanceSquared_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_NetCullDistanceSquared_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_InputComponent_MetaData[] = {
		{ "Comment", "/** Component that handles input for this actor, if input is enabled. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Component that handles input for this actor, if input is enabled." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_InputComponent = { "InputComponent", nullptr, (EPropertyFlags)0x0010000000280008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActor, InputComponent), Z_Construct_UClass_UInputComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_InputComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_InputComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_InputPriority_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** The priority of this input component when pushed in to the stack. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "The priority of this input component when pushed in to the stack." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_InputPriority = { "InputPriority", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActor, InputPriority), METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_InputPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_InputPriority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_AutoReceiveInput_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Automatically registers this actor to receive input from a player. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Automatically registers this actor to receive input from a player." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AActor_Statics::NewProp_AutoReceiveInput = { "AutoReceiveInput", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActor, AutoReceiveInput), Z_Construct_UEnum_Engine_EAutoReceiveInput, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_AutoReceiveInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_AutoReceiveInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_SpawnCollisionHandlingMethod_MetaData[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** Controls how to handle spawning this actor in a situation where it's colliding with something else. \"Default\" means AlwaysSpawn here. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Controls how to handle spawning this actor in a situation where it's colliding with something else. \"Default\" means AlwaysSpawn here." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_SpawnCollisionHandlingMethod = { "SpawnCollisionHandlingMethod", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActor, SpawnCollisionHandlingMethod), Z_Construct_UEnum_Engine_ESpawnActorCollisionHandlingMethod, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_SpawnCollisionHandlingMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_SpawnCollisionHandlingMethod_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AActor_Statics::NewProp_SpawnCollisionHandlingMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_NetDormancy_MetaData[] = {
		{ "Category", "Replication" },
		{ "Comment", "/** Dormancy setting for actor to take itself off of the replication list without being destroyed on clients. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Dormancy setting for actor to take itself off of the replication list without being destroyed on clients." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AActor_Statics::NewProp_NetDormancy = { "NetDormancy", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActor, NetDormancy), Z_Construct_UEnum_Engine_ENetDormancy, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_NetDormancy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_NetDormancy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_Role_MetaData[] = {
		{ "Comment", "/** Describes how much control the local machine has over the actor. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Describes how much control the local machine has over the actor." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AActor_Statics::NewProp_Role = { "Role", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActor, Role), Z_Construct_UEnum_Engine_ENetRole, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_Role_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_Role_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_NetDriverName_MetaData[] = {
		{ "Comment", "/** Used to specify the net driver to replicate on (NAME_None || NAME_GameNetDriver is the default net driver) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Used to specify the net driver to replicate on (NAME_None || NAME_GameNetDriver is the default net driver)" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AActor_Statics::NewProp_NetDriverName = { "NetDriverName", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActor, NetDriverName), METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_NetDriverName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_NetDriverName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_Owner_MetaData[] = {
		{ "Comment", "/**\n\x09 * Owner of this Actor, used primarily for replication (bNetUseOwnerRelevancy & bOnlyRelevantToOwner) and visibility (PrimitiveComponent bOwnerNoSee and bOnlyOwnerSee)\n\x09 * @see SetOwner(), GetOwner()\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Owner of this Actor, used primarily for replication (bNetUseOwnerRelevancy & bOnlyRelevantToOwner) and visibility (PrimitiveComponent bOwnerNoSee and bOnlyOwnerSee)\n@see SetOwner(), GetOwner()" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_Owner = { "Owner", "OnRep_Owner", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActor, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_Owner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_AttachmentReplication_MetaData[] = {
		{ "Comment", "/**\n\x09 * Used for replicating attachment of this actor's RootComponent to another actor.\n\x09 * This is filled in via GatherCurrentMovement() when the RootComponent has an AttachParent.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Used for replicating attachment of this actor's RootComponent to another actor.\nThis is filled in via GatherCurrentMovement() when the RootComponent has an AttachParent." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_AttachmentReplication = { "AttachmentReplication", "OnRep_AttachmentReplication", (EPropertyFlags)0x0040008100002020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActor, AttachmentReplication), Z_Construct_UScriptStruct_FRepAttachment, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_AttachmentReplication_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_AttachmentReplication_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_CustomTimeDilation_MetaData[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** Allow each actor to run at a different time speed. The DeltaTime for a frame is multiplied by the global TimeDilation (in WorldSettings) and this CustomTimeDilation for this actor's tick.  */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Allow each actor to run at a different time speed. The DeltaTime for a frame is multiplied by the global TimeDilation (in WorldSettings) and this CustomTimeDilation for this actor's tick." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_CustomTimeDilation = { "CustomTimeDilation", nullptr, (EPropertyFlags)0x0010040000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActor, CustomTimeDilation), METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_CustomTimeDilation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_CustomTimeDilation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_InitialLifeSpan_MetaData[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** How long this Actor lives before dying, 0=forever. Note this is the INITIAL value and should not be modified once play has begun. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "How long this Actor lives before dying, 0=forever. Note this is the INITIAL value and should not be modified once play has begun." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_InitialLifeSpan = { "InitialLifeSpan", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActor, InitialLifeSpan), METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_InitialLifeSpan_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_InitialLifeSpan_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_ReplicatedMovement_MetaData[] = {
		{ "Category", "Replication" },
		{ "Comment", "/** Used for replication of our RootComponent's position and velocity */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Used for replication of our RootComponent's position and velocity" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_ReplicatedMovement = { "ReplicatedMovement", "OnRep_ReplicatedMovement", (EPropertyFlags)0x0040040100010021, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActor, ReplicatedMovement), Z_Construct_UScriptStruct_FRepMovement, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_ReplicatedMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_ReplicatedMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_RemoteRole_MetaData[] = {
		{ "Comment", "/** Describes how much control the remote machine has over the actor. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Describes how much control the remote machine has over the actor." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AActor_Statics::NewProp_RemoteRole = { "RemoteRole", nullptr, (EPropertyFlags)0x0040000000002020, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActor, RemoteRole), Z_Construct_UEnum_Engine_ENetRole, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_RemoteRole_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_RemoteRole_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_DefaultUpdateOverlapsMethodDuringLevelStreaming_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\n\x09 * Default value taken from config file for this class when 'UseConfigDefault' is chosen for\n\x09 * 'UpdateOverlapsMethodDuringLevelStreaming'. This allows a default to be chosen per class in the matching config.\n\x09 * For example, for Actor it could be specified in DefaultEngine.ini as:\n\x09 * \n\x09 * [/Script/Engine.Actor]\n\x09 * DefaultUpdateOverlapsMethodDuringLevelStreaming = OnlyUpdateMovable\n\x09 *\n\x09 * Another subclass could set their default to something different, such as:\n\x09 *\n\x09 * [/Script/Engine.BlockingVolume]\n\x09 * DefaultUpdateOverlapsMethodDuringLevelStreaming = NeverUpdate\n\x09 * \n\x09 * @see UpdateOverlapsMethodDuringLevelStreaming\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Default value taken from config file for this class when 'UseConfigDefault' is chosen for\n'UpdateOverlapsMethodDuringLevelStreaming'. This allows a default to be chosen per class in the matching config.\nFor example, for Actor it could be specified in DefaultEngine.ini as:\n\n[/Script/Engine.Actor]\nDefaultUpdateOverlapsMethodDuringLevelStreaming = OnlyUpdateMovable\n\nAnother subclass could set their default to something different, such as:\n\n[/Script/Engine.BlockingVolume]\nDefaultUpdateOverlapsMethodDuringLevelStreaming = NeverUpdate\n\n@see UpdateOverlapsMethodDuringLevelStreaming" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_DefaultUpdateOverlapsMethodDuringLevelStreaming = { "DefaultUpdateOverlapsMethodDuringLevelStreaming", nullptr, (EPropertyFlags)0x0040000000024001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActor, DefaultUpdateOverlapsMethodDuringLevelStreaming), Z_Construct_UEnum_Engine_EActorUpdateOverlapsMethod, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_DefaultUpdateOverlapsMethodDuringLevelStreaming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_DefaultUpdateOverlapsMethodDuringLevelStreaming_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AActor_Statics::NewProp_DefaultUpdateOverlapsMethodDuringLevelStreaming_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_UpdateOverlapsMethodDuringLevelStreaming_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\n\x09 * Condition for calling UpdateOverlaps() to initialize overlap state when loaded in during level streaming.\n\x09 * If set to 'UseConfigDefault', the default specified in ini (displayed in 'DefaultUpdateOverlapsMethodDuringLevelStreaming') will be used.\n\x09 * If overlaps are not initialized, this actor and attached components will not have an initial state of what objects are touching it,\n\x09 * and overlap events may only come in once one of those objects update overlaps themselves (for example when moving).\n\x09 * However if an object touching it *does* initialize state, both objects will know about their touching state with each other.\n\x09 * This can be a potentially large performance savings during level loading and streaming, and is safe if the object and others initially\n\x09 * overlapping it do not need the overlap state because they will not trigger overlap notifications.\n\x09 * \n\x09 * Note that if 'bGenerateOverlapEventsDuringLevelStreaming' is true, overlaps are always updated in this case, but that flag\n\x09 * determines whether the Begin/End overlap events are triggered.\n\x09 * \n\x09 * @see bGenerateOverlapEventsDuringLevelStreaming, DefaultUpdateOverlapsMethodDuringLevelStreaming, GetUpdateOverlapsMethodDuringLevelStreaming()\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Condition for calling UpdateOverlaps() to initialize overlap state when loaded in during level streaming.\nIf set to 'UseConfigDefault', the default specified in ini (displayed in 'DefaultUpdateOverlapsMethodDuringLevelStreaming') will be used.\nIf overlaps are not initialized, this actor and attached components will not have an initial state of what objects are touching it,\nand overlap events may only come in once one of those objects update overlaps themselves (for example when moving).\nHowever if an object touching it *does* initialize state, both objects will know about their touching state with each other.\nThis can be a potentially large performance savings during level loading and streaming, and is safe if the object and others initially\noverlapping it do not need the overlap state because they will not trigger overlap notifications.\n\nNote that if 'bGenerateOverlapEventsDuringLevelStreaming' is true, overlaps are always updated in this case, but that flag\ndetermines whether the Begin/End overlap events are triggered.\n\n@see bGenerateOverlapEventsDuringLevelStreaming, DefaultUpdateOverlapsMethodDuringLevelStreaming, GetUpdateOverlapsMethodDuringLevelStreaming()" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_UpdateOverlapsMethodDuringLevelStreaming = { "UpdateOverlapsMethodDuringLevelStreaming", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActor, UpdateOverlapsMethodDuringLevelStreaming), Z_Construct_UEnum_Engine_EActorUpdateOverlapsMethod, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_UpdateOverlapsMethodDuringLevelStreaming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_UpdateOverlapsMethodDuringLevelStreaming_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AActor_Statics::NewProp_UpdateOverlapsMethodDuringLevelStreaming_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_bActorIsBeingDestroyed_MetaData[] = {
		{ "Comment", "/** Set when actor is about to be deleted. Needs to be a FProperty so it is included in transactions. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Set when actor is about to be deleted. Needs to be a FProperty so it is included in transactions." },
	};
#endif
	void Z_Construct_UClass_AActor_Statics::NewProp_bActorIsBeingDestroyed_SetBit(void* Obj)
	{
		((AActor*)Obj)->bActorIsBeingDestroyed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bActorIsBeingDestroyed = { "bActorIsBeingDestroyed", nullptr, (EPropertyFlags)0x0040000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bActorIsBeingDestroyed_SetBit, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_bActorIsBeingDestroyed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_bActorIsBeingDestroyed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_bActorEnableCollision_MetaData[] = {
		{ "Comment", "/**\n\x09 * Enables any collision on this actor.\n\x09 * @see SetActorEnableCollision(), GetActorEnableCollision()\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Enables any collision on this actor.\n@see SetActorEnableCollision(), GetActorEnableCollision()" },
	};
#endif
	void Z_Construct_UClass_AActor_Statics::NewProp_bActorEnableCollision_SetBit(void* Obj)
	{
		((AActor*)Obj)->bActorEnableCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bActorEnableCollision = { "bActorEnableCollision", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bActorEnableCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_bActorEnableCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_bActorEnableCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_bAllowReceiveTickEventOnDedicatedServer_MetaData[] = {
		{ "Comment", "/**\n\x09 * If false, the Blueprint ReceiveTick() event will be disabled on dedicated servers.\n\x09 * @see AllowReceiveTickEventOnDedicatedServer()\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "If false, the Blueprint ReceiveTick() event will be disabled on dedicated servers.\n@see AllowReceiveTickEventOnDedicatedServer()" },
	};
#endif
	void Z_Construct_UClass_AActor_Statics::NewProp_bAllowReceiveTickEventOnDedicatedServer_SetBit(void* Obj)
	{
		((AActor*)Obj)->bAllowReceiveTickEventOnDedicatedServer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bAllowReceiveTickEventOnDedicatedServer = { "bAllowReceiveTickEventOnDedicatedServer", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bAllowReceiveTickEventOnDedicatedServer_SetBit, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_bAllowReceiveTickEventOnDedicatedServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_bAllowReceiveTickEventOnDedicatedServer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_bCanBeInCluster_MetaData[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** If true, this actor can be put inside of a GC Cluster to improve Garbage Collection performance */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "If true, this actor can be put inside of a GC Cluster to improve Garbage Collection performance" },
	};
#endif
	void Z_Construct_UClass_AActor_Statics::NewProp_bCanBeInCluster_SetBit(void* Obj)
	{
		((AActor*)Obj)->bCanBeInCluster = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bCanBeInCluster = { "bCanBeInCluster", nullptr, (EPropertyFlags)0x00200c0000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bCanBeInCluster_SetBit, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_bCanBeInCluster_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_bCanBeInCluster_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_bReplicates_MetaData[] = {
		{ "Category", "Replication" },
		{ "Comment", "/**\n\x09 * If true, this actor will replicate to remote machines\n\x09 * @see SetReplicates()\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "If true, this actor will replicate to remote machines\n@see SetReplicates()" },
	};
#endif
	void Z_Construct_UClass_AActor_Statics::NewProp_bReplicates_SetBit(void* Obj)
	{
		((AActor*)Obj)->bReplicates = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bReplicates = { "bReplicates", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bReplicates_SetBit, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_bReplicates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_bReplicates_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_bActorSeamlessTraveled_MetaData[] = {
		{ "Comment", "/** Indicates the actor was pulled through a seamless travel.  */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Indicates the actor was pulled through a seamless travel." },
	};
#endif
	void Z_Construct_UClass_AActor_Statics::NewProp_bActorSeamlessTraveled_SetBit(void* Obj)
	{
		((AActor*)Obj)->bActorSeamlessTraveled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bActorSeamlessTraveled = { "bActorSeamlessTraveled", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bActorSeamlessTraveled_SetBit, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_bActorSeamlessTraveled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_bActorSeamlessTraveled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_bIsEditorOnlyActor_MetaData[] = {
		{ "Category", "Cooking" },
		{ "Comment", "/** Whether this actor is editor-only. Use with care, as if this actor is referenced by anything else that reference will be NULL in cooked builds */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Whether this actor is editor-only. Use with care, as if this actor is referenced by anything else that reference will be NULL in cooked builds" },
	};
#endif
	void Z_Construct_UClass_AActor_Statics::NewProp_bIsEditorOnlyActor_SetBit(void* Obj)
	{
		((AActor*)Obj)->bIsEditorOnlyActor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bIsEditorOnlyActor = { "bIsEditorOnlyActor", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bIsEditorOnlyActor_SetBit, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_bIsEditorOnlyActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_bIsEditorOnlyActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_bEnableAutoLODGeneration_MetaData[] = {
		{ "Category", "LOD" },
		{ "Comment", "/** If true, and if World setting has bEnableHierarchicalLOD equal to true, then it will generate LODActor from groups of clustered Actor */" },
		{ "DisplayName", "Include Actor for HLOD Mesh generation" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "If true, and if World setting has bEnableHierarchicalLOD equal to true, then it will generate LODActor from groups of clustered Actor" },
	};
#endif
	void Z_Construct_UClass_AActor_Statics::NewProp_bEnableAutoLODGeneration_SetBit(void* Obj)
	{
		((AActor*)Obj)->bEnableAutoLODGeneration = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bEnableAutoLODGeneration = { "bEnableAutoLODGeneration", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bEnableAutoLODGeneration_SetBit, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_bEnableAutoLODGeneration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_bEnableAutoLODGeneration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_bIgnoresOriginShifting_MetaData[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** Whether this actor should not be affected by world origin shifting. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Whether this actor should not be affected by world origin shifting." },
	};
#endif
	void Z_Construct_UClass_AActor_Statics::NewProp_bIgnoresOriginShifting_SetBit(void* Obj)
	{
		((AActor*)Obj)->bIgnoresOriginShifting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bIgnoresOriginShifting = { "bIgnoresOriginShifting", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bIgnoresOriginShifting_SetBit, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_bIgnoresOriginShifting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_bIgnoresOriginShifting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_bGenerateOverlapEventsDuringLevelStreaming_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\n\x09 * If true, this actor will generate overlap Begin/End events when spawned as part of level streaming, which includes initial level load.\n\x09 * You might enable this is in the case where a streaming level loads around an actor and you want Begin/End overlap events to trigger.\n\x09 * @see UpdateOverlapsMethodDuringLevelStreaming\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "If true, this actor will generate overlap Begin/End events when spawned as part of level streaming, which includes initial level load.\nYou might enable this is in the case where a streaming level loads around an actor and you want Begin/End overlap events to trigger.\n@see UpdateOverlapsMethodDuringLevelStreaming" },
	};
#endif
	void Z_Construct_UClass_AActor_Statics::NewProp_bGenerateOverlapEventsDuringLevelStreaming_SetBit(void* Obj)
	{
		((AActor*)Obj)->bGenerateOverlapEventsDuringLevelStreaming = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bGenerateOverlapEventsDuringLevelStreaming = { "bGenerateOverlapEventsDuringLevelStreaming", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bGenerateOverlapEventsDuringLevelStreaming_SetBit, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_bGenerateOverlapEventsDuringLevelStreaming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_bGenerateOverlapEventsDuringLevelStreaming_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_bFindCameraComponentWhenViewTarget_MetaData[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** If true, this actor should search for an owned camera component to view through when used as a view target. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "If true, this actor should search for an owned camera component to view through when used as a view target." },
	};
#endif
	void Z_Construct_UClass_AActor_Statics::NewProp_bFindCameraComponentWhenViewTarget_SetBit(void* Obj)
	{
		((AActor*)Obj)->bFindCameraComponentWhenViewTarget = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bFindCameraComponentWhenViewTarget = { "bFindCameraComponentWhenViewTarget", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bFindCameraComponentWhenViewTarget_SetBit, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_bFindCameraComponentWhenViewTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_bFindCameraComponentWhenViewTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_bCollideWhenPlacing_MetaData[] = {
		{ "Comment", "/** This actor collides with the world when placing in the editor, even if RootComponent collision is disabled. Does not affect spawning, @see SpawnCollisionHandlingMethod */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "This actor collides with the world when placing in the editor, even if RootComponent collision is disabled. Does not affect spawning, @see SpawnCollisionHandlingMethod" },
	};
#endif
	void Z_Construct_UClass_AActor_Statics::NewProp_bCollideWhenPlacing_SetBit(void* Obj)
	{
		((AActor*)Obj)->bCollideWhenPlacing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bCollideWhenPlacing = { "bCollideWhenPlacing", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bCollideWhenPlacing_SetBit, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_bCollideWhenPlacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_bCollideWhenPlacing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_bBlockInput_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** If true, all input on the stack below this actor will not be considered */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "If true, all input on the stack below this actor will not be considered" },
	};
#endif
	void Z_Construct_UClass_AActor_Statics::NewProp_bBlockInput_SetBit(void* Obj)
	{
		((AActor*)Obj)->bBlockInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bBlockInput = { "bBlockInput", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bBlockInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_bBlockInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_bBlockInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_bCanBeDamaged_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Actor" },
		{ "Comment", "/**\n\x09 * Whether this actor can take damage. Must be true for damage events (e.g. ReceiveDamage()) to be called.\n\x09 * @see https://www.unrealengine.com/blog/damage-in-ue4\n\x09 * @see TakeDamage(), ReceiveDamage()\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Whether this actor can take damage. Must be true for damage events (e.g. ReceiveDamage()) to be called.\n@see https://www.unrealengine.com/blog/damage-in-ue4\n@see TakeDamage(), ReceiveDamage()" },
	};
#endif
	void Z_Construct_UClass_AActor_Statics::NewProp_bCanBeDamaged_SetBit(void* Obj)
	{
		((AActor*)Obj)->bCanBeDamaged = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bCanBeDamaged = { "bCanBeDamaged", nullptr, (EPropertyFlags)0x0040000001000025, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bCanBeDamaged_SetBit, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_bCanBeDamaged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_bCanBeDamaged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_bAutoDestroyWhenFinished_MetaData[] = {
		{ "BlueprintSetter", "SetAutoDestroyWhenFinished" },
		{ "Category", "Actor" },
		{ "Comment", "/** If true then destroy self when \"finished\", meaning all relevant components report that they are done and no timelines or timers are in flight. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "If true then destroy self when \"finished\", meaning all relevant components report that they are done and no timelines or timers are in flight." },
	};
#endif
	void Z_Construct_UClass_AActor_Statics::NewProp_bAutoDestroyWhenFinished_SetBit(void* Obj)
	{
		((AActor*)Obj)->bAutoDestroyWhenFinished = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bAutoDestroyWhenFinished = { "bAutoDestroyWhenFinished", nullptr, (EPropertyFlags)0x0040000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bAutoDestroyWhenFinished_SetBit, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_bAutoDestroyWhenFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_bAutoDestroyWhenFinished_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_bAllowTickBeforeBeginPlay_MetaData[] = {
		{ "Category", "Tick" },
		{ "Comment", "/**\n\x09 * Whether we allow this Actor to tick before it receives the BeginPlay event.\n\x09 * Normally we don't tick actors until after BeginPlay; this setting allows this behavior to be overridden.\n\x09 * This Actor must be able to tick for this setting to be relevant.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Whether we allow this Actor to tick before it receives the BeginPlay event.\nNormally we don't tick actors until after BeginPlay; this setting allows this behavior to be overridden.\nThis Actor must be able to tick for this setting to be relevant." },
	};
#endif
	void Z_Construct_UClass_AActor_Statics::NewProp_bAllowTickBeforeBeginPlay_SetBit(void* Obj)
	{
		((AActor*)Obj)->bAllowTickBeforeBeginPlay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bAllowTickBeforeBeginPlay = { "bAllowTickBeforeBeginPlay", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bAllowTickBeforeBeginPlay_SetBit, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_bAllowTickBeforeBeginPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_bAllowTickBeforeBeginPlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_bReplayRewindable_MetaData[] = {
		{ "Category", "Replication" },
		{ "Comment", "/**\n\x09 * If true, this actor will only be destroyed during scrubbing if the replay is set to a time before the actor existed.\n\x09 * Otherwise, RewindForReplay will be called if we detect the actor needs to be reset.\n\x09 * Note, this Actor must not be destroyed by gamecode, and RollbackViaDeletion may not be used. \n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "If true, this actor will only be destroyed during scrubbing if the replay is set to a time before the actor existed.\nOtherwise, RewindForReplay will be called if we detect the actor needs to be reset.\nNote, this Actor must not be destroyed by gamecode, and RollbackViaDeletion may not be used." },
	};
#endif
	void Z_Construct_UClass_AActor_Statics::NewProp_bReplayRewindable_SetBit(void* Obj)
	{
		((AActor*)Obj)->bReplayRewindable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bReplayRewindable = { "bReplayRewindable", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bReplayRewindable_SetBit, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_bReplayRewindable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_bReplayRewindable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_bRelevantForLevelBounds_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** \n\x09 * If true, this actor's component's bounds will be included in the level's\n\x09 * bounding box unless the Actor's class has overridden IsLevelBoundsRelevant \n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "If true, this actor's component's bounds will be included in the level's\nbounding box unless the Actor's class has overridden IsLevelBoundsRelevant" },
	};
#endif
	void Z_Construct_UClass_AActor_Statics::NewProp_bRelevantForLevelBounds_SetBit(void* Obj)
	{
		((AActor*)Obj)->bRelevantForLevelBounds = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bRelevantForLevelBounds = { "bRelevantForLevelBounds", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bRelevantForLevelBounds_SetBit, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_bRelevantForLevelBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_bRelevantForLevelBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_bRelevantForNetworkReplays_MetaData[] = {
		{ "Comment", "/** If true, this actor will be replicated to network replays (default is true) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "If true, this actor will be replicated to network replays (default is true)" },
	};
#endif
	void Z_Construct_UClass_AActor_Statics::NewProp_bRelevantForNetworkReplays_SetBit(void* Obj)
	{
		((AActor*)Obj)->bRelevantForNetworkReplays = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bRelevantForNetworkReplays = { "bRelevantForNetworkReplays", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bRelevantForNetworkReplays_SetBit, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_bRelevantForNetworkReplays_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_bRelevantForNetworkReplays_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_bNetUseOwnerRelevancy_MetaData[] = {
		{ "Category", "Replication" },
		{ "Comment", "/** If actor has valid Owner, call Owner's IsNetRelevantFor and GetNetPriority */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "If actor has valid Owner, call Owner's IsNetRelevantFor and GetNetPriority" },
	};
#endif
	void Z_Construct_UClass_AActor_Statics::NewProp_bNetUseOwnerRelevancy_SetBit(void* Obj)
	{
		((AActor*)Obj)->bNetUseOwnerRelevancy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bNetUseOwnerRelevancy = { "bNetUseOwnerRelevancy", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bNetUseOwnerRelevancy_SetBit, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_bNetUseOwnerRelevancy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_bNetUseOwnerRelevancy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_bNetLoadOnClient_MetaData[] = {
		{ "Category", "Replication" },
		{ "Comment", "/** This actor will be loaded on network clients during map load */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "This actor will be loaded on network clients during map load" },
	};
#endif
	void Z_Construct_UClass_AActor_Statics::NewProp_bNetLoadOnClient_SetBit(void* Obj)
	{
		((AActor*)Obj)->bNetLoadOnClient = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bNetLoadOnClient = { "bNetLoadOnClient", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bNetLoadOnClient_SetBit, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_bNetLoadOnClient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_bNetLoadOnClient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_bExchangedRoles_MetaData[] = {
		{ "Comment", "/**\n\x09 * Whether we have already exchanged Role/RemoteRole on the client, as when removing then re-adding a streaming level.\n\x09 * Causes all initialization to be performed again even though the actor may not have actually been reloaded.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Whether we have already exchanged Role/RemoteRole on the client, as when removing then re-adding a streaming level.\nCauses all initialization to be performed again even though the actor may not have actually been reloaded." },
	};
#endif
	void Z_Construct_UClass_AActor_Statics::NewProp_bExchangedRoles_SetBit(void* Obj)
	{
		((AActor*)Obj)->bExchangedRoles = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bExchangedRoles = { "bExchangedRoles", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bExchangedRoles_SetBit, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_bExchangedRoles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_bExchangedRoles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_bTearOff_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
	};
#endif
	void Z_Construct_UClass_AActor_Statics::NewProp_bTearOff_SetBit(void* Obj)
	{
		((AActor*)Obj)->bTearOff = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bTearOff = { "bTearOff", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bTearOff_SetBit, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_bTearOff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_bTearOff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_bHidden_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09 * Allows us to only see this Actor in the Editor, and not in the actual game.\n\x09 * @see SetActorHiddenInGame()\n\x09 */" },
		{ "DisplayName", "Actor Hidden In Game" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "SequencerTrackClass", "MovieSceneVisibilityTrack" },
		{ "ToolTip", "Allows us to only see this Actor in the Editor, and not in the actual game.\n@see SetActorHiddenInGame()" },
	};
#endif
	void Z_Construct_UClass_AActor_Statics::NewProp_bHidden_SetBit(void* Obj)
	{
		((AActor*)Obj)->bHidden = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bHidden = { "bHidden", nullptr, (EPropertyFlags)0x0040000200000035, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bHidden_SetBit, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_bHidden_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_bHidden_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_bReplicateMovement_MetaData[] = {
		{ "Category", "Replication" },
		{ "Comment", "/**\n\x09 * If true, replicate movement/location related properties.\n\x09 * Actor must also be set to replicate.\n\x09 * @see SetReplicates()\n\x09 * @see https://docs.unrealengine.com/latest/INT/Gameplay/Networking/Replication/\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "If true, replicate movement/location related properties.\nActor must also be set to replicate.\n@see SetReplicates()\n@see https://docs.unrealengine.com/latest/INT/Gameplay/Networking/Replication/" },
	};
#endif
	void Z_Construct_UClass_AActor_Statics::NewProp_bReplicateMovement_SetBit(void* Obj)
	{
		((AActor*)Obj)->bReplicateMovement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bReplicateMovement = { "bReplicateMovement", "OnRep_ReplicateMovement", (EPropertyFlags)0x0040000100010021, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bReplicateMovement_SetBit, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_bReplicateMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_bReplicateMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_bAlwaysRelevant_MetaData[] = {
		{ "Category", "Replication" },
		{ "Comment", "/** Always relevant for network (overrides bOnlyRelevantToOwner). */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Always relevant for network (overrides bOnlyRelevantToOwner)." },
	};
#endif
	void Z_Construct_UClass_AActor_Statics::NewProp_bAlwaysRelevant_SetBit(void* Obj)
	{
		((AActor*)Obj)->bAlwaysRelevant = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bAlwaysRelevant = { "bAlwaysRelevant", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bAlwaysRelevant_SetBit, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_bAlwaysRelevant_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_bAlwaysRelevant_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_bOnlyRelevantToOwner_MetaData[] = {
		{ "Category", "Replication" },
		{ "Comment", "/** If true, this actor is only relevant to its owner. If this flag is changed during play, all non-owner channels would need to be explicitly closed. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "If true, this actor is only relevant to its owner. If this flag is changed during play, all non-owner channels would need to be explicitly closed." },
	};
#endif
	void Z_Construct_UClass_AActor_Statics::NewProp_bOnlyRelevantToOwner_SetBit(void* Obj)
	{
		((AActor*)Obj)->bOnlyRelevantToOwner = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bOnlyRelevantToOwner = { "bOnlyRelevantToOwner", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bOnlyRelevantToOwner_SetBit, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_bOnlyRelevantToOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_bOnlyRelevantToOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_bNetStartup_MetaData[] = {
		{ "Comment", "/** If true, this actor was loaded directly from the map, and for networking purposes can be addressed by its full path name */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "If true, this actor was loaded directly from the map, and for networking purposes can be addressed by its full path name" },
	};
#endif
	void Z_Construct_UClass_AActor_Statics::NewProp_bNetStartup_SetBit(void* Obj)
	{
		((AActor*)Obj)->bNetStartup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bNetStartup = { "bNetStartup", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bNetStartup_SetBit, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_bNetStartup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_bNetStartup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_bNetTemporary_MetaData[] = {
		{ "Comment", "/** If true, when the actor is spawned it will be sent to the client but receive no further replication updates from the server afterwards. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "If true, when the actor is spawned it will be sent to the client but receive no further replication updates from the server afterwards." },
	};
#endif
	void Z_Construct_UClass_AActor_Statics::NewProp_bNetTemporary_SetBit(void* Obj)
	{
		((AActor*)Obj)->bNetTemporary = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bNetTemporary = { "bNetTemporary", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bNetTemporary_SetBit, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_bNetTemporary_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_bNetTemporary_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_Statics::NewProp_PrimaryActorTick_MetaData[] = {
		{ "Category", "Tick" },
		{ "Comment", "/**\n\x09 * Primary Actor tick function, which calls TickActor().\n\x09 * Tick functions can be configured to control whether ticking is enabled, at what time during a frame the update occurs, and to set up tick dependencies.\n\x09 * @see https://docs.unrealengine.com/latest/INT/API/Runtime/Engine/Engine/FTickFunction/\n\x09 * @see AddTickPrerequisiteActor(), AddTickPrerequisiteComponent()\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Primary Actor tick function, which calls TickActor().\nTick functions can be configured to control whether ticking is enabled, at what time during a frame the update occurs, and to set up tick dependencies.\n@see https://docs.unrealengine.com/latest/INT/API/Runtime/Engine/Engine/FTickFunction/\n@see AddTickPrerequisiteActor(), AddTickPrerequisiteComponent()" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_PrimaryActorTick = { "PrimaryActorTick", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActor, PrimaryActorTick), Z_Construct_UScriptStruct_FActorTickFunction, METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::NewProp_PrimaryActorTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::NewProp_PrimaryActorTick_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_BlueprintCreatedComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_BlueprintCreatedComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_InstanceComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_InstanceComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_OnEndPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_OnDestroyed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_OnActorHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_OnInputTouchLeave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_OnInputTouchEnter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_OnInputTouchEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_OnInputTouchBegin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_OnReleased,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_OnClicked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_OnEndCursorOver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_OnBeginCursorOver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_OnActorEndOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_OnActorBeginOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_OnTakeRadialDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_OnTakePointDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_OnTakeAnyDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_Tags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_Tags_Inner,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bHiddenEdTemporary,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bOptimizeBPComponentData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bListedInSceneOutliner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bEditable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bActorLabelEditable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bLockLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bHiddenEdLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bHiddenEdLayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bIsEditorPreviewActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bHiddenEd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_FolderPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_ActorLabel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_HiddenEditorViews,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_SpriteScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_GroupActor,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_ParentComponent,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_ParentComponentActor,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_Layers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_Layers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_ControllingMatineeActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_ControllingMatineeActors_Inner,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_PivotOffset,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_RootComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_Children,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_Children_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_Instigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_NetPriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_MinNetUpdateFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_NetUpdateFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_NetTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_NetCullDistanceSquared,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_InputComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_InputPriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_AutoReceiveInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_SpawnCollisionHandlingMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_SpawnCollisionHandlingMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_NetDormancy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_Role,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_NetDriverName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_Owner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_AttachmentReplication,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_CustomTimeDilation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_InitialLifeSpan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_ReplicatedMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_RemoteRole,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_DefaultUpdateOverlapsMethodDuringLevelStreaming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_DefaultUpdateOverlapsMethodDuringLevelStreaming_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_UpdateOverlapsMethodDuringLevelStreaming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_UpdateOverlapsMethodDuringLevelStreaming_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bActorIsBeingDestroyed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bActorEnableCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bAllowReceiveTickEventOnDedicatedServer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bCanBeInCluster,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bReplicates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bActorSeamlessTraveled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bIsEditorOnlyActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bEnableAutoLODGeneration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bIgnoresOriginShifting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bGenerateOverlapEventsDuringLevelStreaming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bFindCameraComponentWhenViewTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bCollideWhenPlacing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bBlockInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bCanBeDamaged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bAutoDestroyWhenFinished,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bAllowTickBeforeBeginPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bReplayRewindable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bRelevantForLevelBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bRelevantForNetworkReplays,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bNetUseOwnerRelevancy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bNetLoadOnClient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bExchangedRoles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bTearOff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bHidden,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bReplicateMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bAlwaysRelevant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bOnlyRelevantToOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bNetStartup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bNetTemporary,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_PrimaryActorTick,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AActor_Statics::ClassParams = {
		&AActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AActor, 742648980);
	template<> ENGINE_API UClass* StaticClass<AActor>()
	{
		return AActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AActor(Z_Construct_UClass_AActor, &AActor::StaticClass, TEXT("/Script/Engine"), TEXT("AActor"), false, nullptr, nullptr, nullptr);

	void AActor::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bReplicateMovement(TEXT("bReplicateMovement"));
		static const FName Name_bHidden(TEXT("bHidden"));
		static const FName Name_bTearOff(TEXT("bTearOff"));
		static const FName Name_bCanBeDamaged(TEXT("bCanBeDamaged"));
		static const FName Name_RemoteRole(TEXT("RemoteRole"));
		static const FName Name_ReplicatedMovement(TEXT("ReplicatedMovement"));
		static const FName Name_AttachmentReplication(TEXT("AttachmentReplication"));
		static const FName Name_Owner(TEXT("Owner"));
		static const FName Name_Role(TEXT("Role"));
		static const FName Name_Instigator(TEXT("Instigator"));

		const bool bIsValid = true
			&& Name_bReplicateMovement == ClassReps[(int32)ENetFields_Private::bReplicateMovement].Property->GetFName()
			&& Name_bHidden == ClassReps[(int32)ENetFields_Private::bHidden].Property->GetFName()
			&& Name_bTearOff == ClassReps[(int32)ENetFields_Private::bTearOff].Property->GetFName()
			&& Name_bCanBeDamaged == ClassReps[(int32)ENetFields_Private::bCanBeDamaged].Property->GetFName()
			&& Name_RemoteRole == ClassReps[(int32)ENetFields_Private::RemoteRole].Property->GetFName()
			&& Name_ReplicatedMovement == ClassReps[(int32)ENetFields_Private::ReplicatedMovement].Property->GetFName()
			&& Name_AttachmentReplication == ClassReps[(int32)ENetFields_Private::AttachmentReplication].Property->GetFName()
			&& Name_Owner == ClassReps[(int32)ENetFields_Private::Owner].Property->GetFName()
			&& Name_Role == ClassReps[(int32)ENetFields_Private::Role].Property->GetFName()
			&& Name_Instigator == ClassReps[(int32)ENetFields_Private::Instigator].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AActor"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AActor);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(AActor)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
