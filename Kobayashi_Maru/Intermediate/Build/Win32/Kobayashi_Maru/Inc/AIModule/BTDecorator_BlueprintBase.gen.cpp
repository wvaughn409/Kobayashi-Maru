// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/BehaviorTree/Decorators/BTDecorator_BlueprintBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_BlueprintBase() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_BlueprintBase_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_BlueprintBase();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EBTNodeResult();
// End Cross Module References
	DEFINE_FUNCTION(UBTDecorator_BlueprintBase::execIsDecoratorObserverActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDecoratorObserverActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBTDecorator_BlueprintBase::execIsDecoratorExecutionActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDecoratorExecutionActive();
		P_NATIVE_END;
	}
	static FName NAME_UBTDecorator_BlueprintBase_PerformConditionCheck = FName(TEXT("PerformConditionCheck"));
	bool UBTDecorator_BlueprintBase::PerformConditionCheck(AActor* OwnerActor)
	{
		BTDecorator_BlueprintBase_eventPerformConditionCheck_Parms Parms;
		Parms.OwnerActor=OwnerActor;
		ProcessEvent(FindFunctionChecked(NAME_UBTDecorator_BlueprintBase_PerformConditionCheck),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UBTDecorator_BlueprintBase_PerformConditionCheckAI = FName(TEXT("PerformConditionCheckAI"));
	bool UBTDecorator_BlueprintBase::PerformConditionCheckAI(AAIController* OwnerController, APawn* ControlledPawn)
	{
		BTDecorator_BlueprintBase_eventPerformConditionCheckAI_Parms Parms;
		Parms.OwnerController=OwnerController;
		Parms.ControlledPawn=ControlledPawn;
		ProcessEvent(FindFunctionChecked(NAME_UBTDecorator_BlueprintBase_PerformConditionCheckAI),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UBTDecorator_BlueprintBase_ReceiveExecutionFinish = FName(TEXT("ReceiveExecutionFinish"));
	void UBTDecorator_BlueprintBase::ReceiveExecutionFinish(AActor* OwnerActor, EBTNodeResult::Type NodeResult)
	{
		BTDecorator_BlueprintBase_eventReceiveExecutionFinish_Parms Parms;
		Parms.OwnerActor=OwnerActor;
		Parms.NodeResult=NodeResult;
		ProcessEvent(FindFunctionChecked(NAME_UBTDecorator_BlueprintBase_ReceiveExecutionFinish),&Parms);
	}
	static FName NAME_UBTDecorator_BlueprintBase_ReceiveExecutionFinishAI = FName(TEXT("ReceiveExecutionFinishAI"));
	void UBTDecorator_BlueprintBase::ReceiveExecutionFinishAI(AAIController* OwnerController, APawn* ControlledPawn, EBTNodeResult::Type NodeResult)
	{
		BTDecorator_BlueprintBase_eventReceiveExecutionFinishAI_Parms Parms;
		Parms.OwnerController=OwnerController;
		Parms.ControlledPawn=ControlledPawn;
		Parms.NodeResult=NodeResult;
		ProcessEvent(FindFunctionChecked(NAME_UBTDecorator_BlueprintBase_ReceiveExecutionFinishAI),&Parms);
	}
	static FName NAME_UBTDecorator_BlueprintBase_ReceiveExecutionStart = FName(TEXT("ReceiveExecutionStart"));
	void UBTDecorator_BlueprintBase::ReceiveExecutionStart(AActor* OwnerActor)
	{
		BTDecorator_BlueprintBase_eventReceiveExecutionStart_Parms Parms;
		Parms.OwnerActor=OwnerActor;
		ProcessEvent(FindFunctionChecked(NAME_UBTDecorator_BlueprintBase_ReceiveExecutionStart),&Parms);
	}
	static FName NAME_UBTDecorator_BlueprintBase_ReceiveExecutionStartAI = FName(TEXT("ReceiveExecutionStartAI"));
	void UBTDecorator_BlueprintBase::ReceiveExecutionStartAI(AAIController* OwnerController, APawn* ControlledPawn)
	{
		BTDecorator_BlueprintBase_eventReceiveExecutionStartAI_Parms Parms;
		Parms.OwnerController=OwnerController;
		Parms.ControlledPawn=ControlledPawn;
		ProcessEvent(FindFunctionChecked(NAME_UBTDecorator_BlueprintBase_ReceiveExecutionStartAI),&Parms);
	}
	static FName NAME_UBTDecorator_BlueprintBase_ReceiveObserverActivated = FName(TEXT("ReceiveObserverActivated"));
	void UBTDecorator_BlueprintBase::ReceiveObserverActivated(AActor* OwnerActor)
	{
		BTDecorator_BlueprintBase_eventReceiveObserverActivated_Parms Parms;
		Parms.OwnerActor=OwnerActor;
		ProcessEvent(FindFunctionChecked(NAME_UBTDecorator_BlueprintBase_ReceiveObserverActivated),&Parms);
	}
	static FName NAME_UBTDecorator_BlueprintBase_ReceiveObserverActivatedAI = FName(TEXT("ReceiveObserverActivatedAI"));
	void UBTDecorator_BlueprintBase::ReceiveObserverActivatedAI(AAIController* OwnerController, APawn* ControlledPawn)
	{
		BTDecorator_BlueprintBase_eventReceiveObserverActivatedAI_Parms Parms;
		Parms.OwnerController=OwnerController;
		Parms.ControlledPawn=ControlledPawn;
		ProcessEvent(FindFunctionChecked(NAME_UBTDecorator_BlueprintBase_ReceiveObserverActivatedAI),&Parms);
	}
	static FName NAME_UBTDecorator_BlueprintBase_ReceiveObserverDeactivated = FName(TEXT("ReceiveObserverDeactivated"));
	void UBTDecorator_BlueprintBase::ReceiveObserverDeactivated(AActor* OwnerActor)
	{
		BTDecorator_BlueprintBase_eventReceiveObserverDeactivated_Parms Parms;
		Parms.OwnerActor=OwnerActor;
		ProcessEvent(FindFunctionChecked(NAME_UBTDecorator_BlueprintBase_ReceiveObserverDeactivated),&Parms);
	}
	static FName NAME_UBTDecorator_BlueprintBase_ReceiveObserverDeactivatedAI = FName(TEXT("ReceiveObserverDeactivatedAI"));
	void UBTDecorator_BlueprintBase::ReceiveObserverDeactivatedAI(AAIController* OwnerController, APawn* ControlledPawn)
	{
		BTDecorator_BlueprintBase_eventReceiveObserverDeactivatedAI_Parms Parms;
		Parms.OwnerController=OwnerController;
		Parms.ControlledPawn=ControlledPawn;
		ProcessEvent(FindFunctionChecked(NAME_UBTDecorator_BlueprintBase_ReceiveObserverDeactivatedAI),&Parms);
	}
	static FName NAME_UBTDecorator_BlueprintBase_ReceiveTick = FName(TEXT("ReceiveTick"));
	void UBTDecorator_BlueprintBase::ReceiveTick(AActor* OwnerActor, float DeltaSeconds)
	{
		BTDecorator_BlueprintBase_eventReceiveTick_Parms Parms;
		Parms.OwnerActor=OwnerActor;
		Parms.DeltaSeconds=DeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_UBTDecorator_BlueprintBase_ReceiveTick),&Parms);
	}
	static FName NAME_UBTDecorator_BlueprintBase_ReceiveTickAI = FName(TEXT("ReceiveTickAI"));
	void UBTDecorator_BlueprintBase::ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds)
	{
		BTDecorator_BlueprintBase_eventReceiveTickAI_Parms Parms;
		Parms.OwnerController=OwnerController;
		Parms.ControlledPawn=ControlledPawn;
		Parms.DeltaSeconds=DeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_UBTDecorator_BlueprintBase_ReceiveTickAI),&Parms);
	}
	void UBTDecorator_BlueprintBase::StaticRegisterNativesUBTDecorator_BlueprintBase()
	{
		UClass* Class = UBTDecorator_BlueprintBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsDecoratorExecutionActive", &UBTDecorator_BlueprintBase::execIsDecoratorExecutionActive },
			{ "IsDecoratorObserverActive", &UBTDecorator_BlueprintBase::execIsDecoratorObserverActive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBTDecorator_BlueprintBase_IsDecoratorExecutionActive_Statics
	{
		struct BTDecorator_BlueprintBase_eventIsDecoratorExecutionActive_Parms
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
	void Z_Construct_UFunction_UBTDecorator_BlueprintBase_IsDecoratorExecutionActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BTDecorator_BlueprintBase_eventIsDecoratorExecutionActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBTDecorator_BlueprintBase_IsDecoratorExecutionActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BTDecorator_BlueprintBase_eventIsDecoratorExecutionActive_Parms), &Z_Construct_UFunction_UBTDecorator_BlueprintBase_IsDecoratorExecutionActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTDecorator_BlueprintBase_IsDecoratorExecutionActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTDecorator_BlueprintBase_IsDecoratorExecutionActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTDecorator_BlueprintBase_IsDecoratorExecutionActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "Comment", "/** check if decorator is part of currently active branch */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_BlueprintBase.h" },
		{ "ToolTip", "check if decorator is part of currently active branch" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTDecorator_BlueprintBase_IsDecoratorExecutionActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTDecorator_BlueprintBase, nullptr, "IsDecoratorExecutionActive", nullptr, nullptr, sizeof(BTDecorator_BlueprintBase_eventIsDecoratorExecutionActive_Parms), Z_Construct_UFunction_UBTDecorator_BlueprintBase_IsDecoratorExecutionActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTDecorator_BlueprintBase_IsDecoratorExecutionActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTDecorator_BlueprintBase_IsDecoratorExecutionActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTDecorator_BlueprintBase_IsDecoratorExecutionActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTDecorator_BlueprintBase_IsDecoratorExecutionActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBTDecorator_BlueprintBase_IsDecoratorExecutionActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTDecorator_BlueprintBase_IsDecoratorObserverActive_Statics
	{
		struct BTDecorator_BlueprintBase_eventIsDecoratorObserverActive_Parms
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
	void Z_Construct_UFunction_UBTDecorator_BlueprintBase_IsDecoratorObserverActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BTDecorator_BlueprintBase_eventIsDecoratorObserverActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBTDecorator_BlueprintBase_IsDecoratorObserverActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BTDecorator_BlueprintBase_eventIsDecoratorObserverActive_Parms), &Z_Construct_UFunction_UBTDecorator_BlueprintBase_IsDecoratorObserverActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTDecorator_BlueprintBase_IsDecoratorObserverActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTDecorator_BlueprintBase_IsDecoratorObserverActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTDecorator_BlueprintBase_IsDecoratorObserverActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "Comment", "/** check if decorator's observer is currently active */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_BlueprintBase.h" },
		{ "ToolTip", "check if decorator's observer is currently active" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTDecorator_BlueprintBase_IsDecoratorObserverActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTDecorator_BlueprintBase, nullptr, "IsDecoratorObserverActive", nullptr, nullptr, sizeof(BTDecorator_BlueprintBase_eventIsDecoratorObserverActive_Parms), Z_Construct_UFunction_UBTDecorator_BlueprintBase_IsDecoratorObserverActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTDecorator_BlueprintBase_IsDecoratorObserverActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTDecorator_BlueprintBase_IsDecoratorObserverActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTDecorator_BlueprintBase_IsDecoratorObserverActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTDecorator_BlueprintBase_IsDecoratorObserverActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBTDecorator_BlueprintBase_IsDecoratorObserverActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTDecorator_BlueprintBase_PerformConditionCheck_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBTDecorator_BlueprintBase_PerformConditionCheck_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BTDecorator_BlueprintBase_eventPerformConditionCheck_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBTDecorator_BlueprintBase_PerformConditionCheck_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BTDecorator_BlueprintBase_eventPerformConditionCheck_Parms), &Z_Construct_UFunction_UBTDecorator_BlueprintBase_PerformConditionCheck_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTDecorator_BlueprintBase_PerformConditionCheck_Statics::NewProp_OwnerActor = { "OwnerActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BTDecorator_BlueprintBase_eventPerformConditionCheck_Parms, OwnerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTDecorator_BlueprintBase_PerformConditionCheck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTDecorator_BlueprintBase_PerformConditionCheck_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTDecorator_BlueprintBase_PerformConditionCheck_Statics::NewProp_OwnerActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTDecorator_BlueprintBase_PerformConditionCheck_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** called when testing if underlying node can be executed, must call FinishConditionCheck\n\x09 *\x09@Note that if both generic and AI event versions are implemented only the more\n\x09 *\x09suitable one will be called, meaning the AI version if called for AI, generic one otherwise */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_BlueprintBase.h" },
		{ "ToolTip", "called when testing if underlying node can be executed, must call FinishConditionCheck\n    @Note that if both generic and AI event versions are implemented only the more\n    suitable one will be called, meaning the AI version if called for AI, generic one otherwise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTDecorator_BlueprintBase_PerformConditionCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTDecorator_BlueprintBase, nullptr, "PerformConditionCheck", nullptr, nullptr, sizeof(BTDecorator_BlueprintBase_eventPerformConditionCheck_Parms), Z_Construct_UFunction_UBTDecorator_BlueprintBase_PerformConditionCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTDecorator_BlueprintBase_PerformConditionCheck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTDecorator_BlueprintBase_PerformConditionCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTDecorator_BlueprintBase_PerformConditionCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTDecorator_BlueprintBase_PerformConditionCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBTDecorator_BlueprintBase_PerformConditionCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTDecorator_BlueprintBase_PerformConditionCheckAI_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControlledPawn;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBTDecorator_BlueprintBase_PerformConditionCheckAI_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BTDecorator_BlueprintBase_eventPerformConditionCheckAI_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBTDecorator_BlueprintBase_PerformConditionCheckAI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BTDecorator_BlueprintBase_eventPerformConditionCheckAI_Parms), &Z_Construct_UFunction_UBTDecorator_BlueprintBase_PerformConditionCheckAI_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTDecorator_BlueprintBase_PerformConditionCheckAI_Statics::NewProp_ControlledPawn = { "ControlledPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BTDecorator_BlueprintBase_eventPerformConditionCheckAI_Parms, ControlledPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTDecorator_BlueprintBase_PerformConditionCheckAI_Statics::NewProp_OwnerController = { "OwnerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BTDecorator_BlueprintBase_eventPerformConditionCheckAI_Parms, OwnerController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTDecorator_BlueprintBase_PerformConditionCheckAI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTDecorator_BlueprintBase_PerformConditionCheckAI_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTDecorator_BlueprintBase_PerformConditionCheckAI_Statics::NewProp_ControlledPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTDecorator_BlueprintBase_PerformConditionCheckAI_Statics::NewProp_OwnerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTDecorator_BlueprintBase_PerformConditionCheckAI_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "Comment", "/** Alternative AI version of ReceiveConditionCheck\n\x09 *\x09@see ReceiveConditionCheck for more details\n\x09 *\x09@Note that if both generic and AI event versions are implemented only the more\n\x09 *\x09suitable one will be called, meaning the AI version if called for AI, generic one otherwise */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_BlueprintBase.h" },
		{ "ToolTip", "Alternative AI version of ReceiveConditionCheck\n    @see ReceiveConditionCheck for more details\n    @Note that if both generic and AI event versions are implemented only the more\n    suitable one will be called, meaning the AI version if called for AI, generic one otherwise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTDecorator_BlueprintBase_PerformConditionCheckAI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTDecorator_BlueprintBase, nullptr, "PerformConditionCheckAI", nullptr, nullptr, sizeof(BTDecorator_BlueprintBase_eventPerformConditionCheckAI_Parms), Z_Construct_UFunction_UBTDecorator_BlueprintBase_PerformConditionCheckAI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTDecorator_BlueprintBase_PerformConditionCheckAI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTDecorator_BlueprintBase_PerformConditionCheckAI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTDecorator_BlueprintBase_PerformConditionCheckAI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTDecorator_BlueprintBase_PerformConditionCheckAI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBTDecorator_BlueprintBase_PerformConditionCheckAI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionFinish_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NodeResult;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionFinish_Statics::NewProp_NodeResult = { "NodeResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BTDecorator_BlueprintBase_eventReceiveExecutionFinish_Parms, NodeResult), Z_Construct_UEnum_AIModule_EBTNodeResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionFinish_Statics::NewProp_OwnerActor = { "OwnerActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BTDecorator_BlueprintBase_eventReceiveExecutionFinish_Parms, OwnerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionFinish_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionFinish_Statics::NewProp_NodeResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionFinish_Statics::NewProp_OwnerActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionFinish_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** called when execution of underlying node is finished \n\x09 *\x09@Note that if both generic and AI event versions are implemented only the more\n\x09 *\x09suitable one will be called, meaning the AI version if called for AI, generic one otherwise */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_BlueprintBase.h" },
		{ "ToolTip", "called when execution of underlying node is finished\n    @Note that if both generic and AI event versions are implemented only the more\n    suitable one will be called, meaning the AI version if called for AI, generic one otherwise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionFinish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTDecorator_BlueprintBase, nullptr, "ReceiveExecutionFinish", nullptr, nullptr, sizeof(BTDecorator_BlueprintBase_eventReceiveExecutionFinish_Parms), Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionFinish_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionFinish_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionFinish_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionFinish_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionFinish()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionFinish_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionFinishAI_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NodeResult;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControlledPawn;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionFinishAI_Statics::NewProp_NodeResult = { "NodeResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BTDecorator_BlueprintBase_eventReceiveExecutionFinishAI_Parms, NodeResult), Z_Construct_UEnum_AIModule_EBTNodeResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionFinishAI_Statics::NewProp_ControlledPawn = { "ControlledPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BTDecorator_BlueprintBase_eventReceiveExecutionFinishAI_Parms, ControlledPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionFinishAI_Statics::NewProp_OwnerController = { "OwnerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BTDecorator_BlueprintBase_eventReceiveExecutionFinishAI_Parms, OwnerController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionFinishAI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionFinishAI_Statics::NewProp_NodeResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionFinishAI_Statics::NewProp_ControlledPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionFinishAI_Statics::NewProp_OwnerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionFinishAI_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "Comment", "/** Alternative AI version of ReceiveExecutionFinish\n\x09 *\x09@see ReceiveExecutionFinish for more details\n\x09 *\x09@Note that if both generic and AI event versions are implemented only the more\n\x09 *\x09suitable one will be called, meaning the AI version if called for AI, generic one otherwise */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_BlueprintBase.h" },
		{ "ToolTip", "Alternative AI version of ReceiveExecutionFinish\n    @see ReceiveExecutionFinish for more details\n    @Note that if both generic and AI event versions are implemented only the more\n    suitable one will be called, meaning the AI version if called for AI, generic one otherwise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionFinishAI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTDecorator_BlueprintBase, nullptr, "ReceiveExecutionFinishAI", nullptr, nullptr, sizeof(BTDecorator_BlueprintBase_eventReceiveExecutionFinishAI_Parms), Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionFinishAI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionFinishAI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionFinishAI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionFinishAI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionFinishAI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionFinishAI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionStart_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionStart_Statics::NewProp_OwnerActor = { "OwnerActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BTDecorator_BlueprintBase_eventReceiveExecutionStart_Parms, OwnerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionStart_Statics::NewProp_OwnerActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionStart_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** called on execution of underlying node \n\x09 *\x09@Note that if both generic and AI event versions are implemented only the more\n\x09 *\x09suitable one will be called, meaning the AI version if called for AI, generic one otherwise */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_BlueprintBase.h" },
		{ "ToolTip", "called on execution of underlying node\n    @Note that if both generic and AI event versions are implemented only the more\n    suitable one will be called, meaning the AI version if called for AI, generic one otherwise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTDecorator_BlueprintBase, nullptr, "ReceiveExecutionStart", nullptr, nullptr, sizeof(BTDecorator_BlueprintBase_eventReceiveExecutionStart_Parms), Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionStartAI_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControlledPawn;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionStartAI_Statics::NewProp_ControlledPawn = { "ControlledPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BTDecorator_BlueprintBase_eventReceiveExecutionStartAI_Parms, ControlledPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionStartAI_Statics::NewProp_OwnerController = { "OwnerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BTDecorator_BlueprintBase_eventReceiveExecutionStartAI_Parms, OwnerController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionStartAI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionStartAI_Statics::NewProp_ControlledPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionStartAI_Statics::NewProp_OwnerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionStartAI_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "Comment", "/** Alternative AI version of ReceiveExecutionStart\n\x09 *\x09@see ReceiveExecutionStart for more details\n\x09 *\x09@Note that if both generic and AI event versions are implemented only the more\n\x09 *\x09suitable one will be called, meaning the AI version if called for AI, generic one otherwise */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_BlueprintBase.h" },
		{ "ToolTip", "Alternative AI version of ReceiveExecutionStart\n    @see ReceiveExecutionStart for more details\n    @Note that if both generic and AI event versions are implemented only the more\n    suitable one will be called, meaning the AI version if called for AI, generic one otherwise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionStartAI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTDecorator_BlueprintBase, nullptr, "ReceiveExecutionStartAI", nullptr, nullptr, sizeof(BTDecorator_BlueprintBase_eventReceiveExecutionStartAI_Parms), Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionStartAI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionStartAI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionStartAI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionStartAI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionStartAI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionStartAI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveObserverActivated_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveObserverActivated_Statics::NewProp_OwnerActor = { "OwnerActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BTDecorator_BlueprintBase_eventReceiveObserverActivated_Parms, OwnerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveObserverActivated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveObserverActivated_Statics::NewProp_OwnerActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveObserverActivated_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** called when observer is activated (flow controller) \n\x09 *\x09@Note that if both generic and AI event versions are implemented only the more\n\x09 *\x09suitable one will be called, meaning the AI version if called for AI, generic one otherwise */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_BlueprintBase.h" },
		{ "ToolTip", "called when observer is activated (flow controller)\n    @Note that if both generic and AI event versions are implemented only the more\n    suitable one will be called, meaning the AI version if called for AI, generic one otherwise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveObserverActivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTDecorator_BlueprintBase, nullptr, "ReceiveObserverActivated", nullptr, nullptr, sizeof(BTDecorator_BlueprintBase_eventReceiveObserverActivated_Parms), Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveObserverActivated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveObserverActivated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveObserverActivated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveObserverActivated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveObserverActivated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveObserverActivated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveObserverActivatedAI_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControlledPawn;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveObserverActivatedAI_Statics::NewProp_ControlledPawn = { "ControlledPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BTDecorator_BlueprintBase_eventReceiveObserverActivatedAI_Parms, ControlledPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveObserverActivatedAI_Statics::NewProp_OwnerController = { "OwnerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BTDecorator_BlueprintBase_eventReceiveObserverActivatedAI_Parms, OwnerController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveObserverActivatedAI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveObserverActivatedAI_Statics::NewProp_ControlledPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveObserverActivatedAI_Statics::NewProp_OwnerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveObserverActivatedAI_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "Comment", "/** Alternative AI version of ReceiveObserverActivated\n\x09 *\x09@see ReceiveObserverActivated for more details\n\x09 *\x09@Note that if both generic and AI event versions are implemented only the more\n\x09 *\x09suitable one will be called, meaning the AI version if called for AI, generic one otherwise */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_BlueprintBase.h" },
		{ "ToolTip", "Alternative AI version of ReceiveObserverActivated\n    @see ReceiveObserverActivated for more details\n    @Note that if both generic and AI event versions are implemented only the more\n    suitable one will be called, meaning the AI version if called for AI, generic one otherwise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveObserverActivatedAI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTDecorator_BlueprintBase, nullptr, "ReceiveObserverActivatedAI", nullptr, nullptr, sizeof(BTDecorator_BlueprintBase_eventReceiveObserverActivatedAI_Parms), Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveObserverActivatedAI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveObserverActivatedAI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveObserverActivatedAI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveObserverActivatedAI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveObserverActivatedAI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveObserverActivatedAI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveObserverDeactivated_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveObserverDeactivated_Statics::NewProp_OwnerActor = { "OwnerActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BTDecorator_BlueprintBase_eventReceiveObserverDeactivated_Parms, OwnerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveObserverDeactivated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveObserverDeactivated_Statics::NewProp_OwnerActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveObserverDeactivated_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** called when observer is deactivated (flow controller) \n\x09 *\x09@Note that if both generic and AI event versions are implemented only the more\n\x09 *\x09suitable one will be called, meaning the AI version if called for AI, generic one otherwise */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_BlueprintBase.h" },
		{ "ToolTip", "called when observer is deactivated (flow controller)\n    @Note that if both generic and AI event versions are implemented only the more\n    suitable one will be called, meaning the AI version if called for AI, generic one otherwise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveObserverDeactivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTDecorator_BlueprintBase, nullptr, "ReceiveObserverDeactivated", nullptr, nullptr, sizeof(BTDecorator_BlueprintBase_eventReceiveObserverDeactivated_Parms), Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveObserverDeactivated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveObserverDeactivated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveObserverDeactivated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveObserverDeactivated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveObserverDeactivated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveObserverDeactivated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveObserverDeactivatedAI_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControlledPawn;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveObserverDeactivatedAI_Statics::NewProp_ControlledPawn = { "ControlledPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BTDecorator_BlueprintBase_eventReceiveObserverDeactivatedAI_Parms, ControlledPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveObserverDeactivatedAI_Statics::NewProp_OwnerController = { "OwnerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BTDecorator_BlueprintBase_eventReceiveObserverDeactivatedAI_Parms, OwnerController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveObserverDeactivatedAI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveObserverDeactivatedAI_Statics::NewProp_ControlledPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveObserverDeactivatedAI_Statics::NewProp_OwnerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveObserverDeactivatedAI_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "Comment", "/** Alternative AI version of ReceiveObserverDeactivated\n\x09 *\x09@see ReceiveObserverDeactivated for more details\n\x09 *\x09@Note that if both generic and AI event versions are implemented only the more\n\x09 *\x09suitable one will be called, meaning the AI version if called for AI, generic one otherwise */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_BlueprintBase.h" },
		{ "ToolTip", "Alternative AI version of ReceiveObserverDeactivated\n    @see ReceiveObserverDeactivated for more details\n    @Note that if both generic and AI event versions are implemented only the more\n    suitable one will be called, meaning the AI version if called for AI, generic one otherwise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveObserverDeactivatedAI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTDecorator_BlueprintBase, nullptr, "ReceiveObserverDeactivatedAI", nullptr, nullptr, sizeof(BTDecorator_BlueprintBase_eventReceiveObserverDeactivatedAI_Parms), Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveObserverDeactivatedAI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveObserverDeactivatedAI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveObserverDeactivatedAI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveObserverDeactivatedAI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveObserverDeactivatedAI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveObserverDeactivatedAI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveTick_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveTick_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BTDecorator_BlueprintBase_eventReceiveTick_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveTick_Statics::NewProp_OwnerActor = { "OwnerActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BTDecorator_BlueprintBase_eventReceiveTick_Parms, OwnerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveTick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveTick_Statics::NewProp_DeltaSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveTick_Statics::NewProp_OwnerActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveTick_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** tick function\n\x09 *\x09@Note that if both generic and AI event versions are implemented only the more\n\x09 *\x09suitable one will be called, meaning the AI version if called for AI, generic one otherwise */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_BlueprintBase.h" },
		{ "ToolTip", "tick function\n    @Note that if both generic and AI event versions are implemented only the more\n    suitable one will be called, meaning the AI version if called for AI, generic one otherwise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTDecorator_BlueprintBase, nullptr, "ReceiveTick", nullptr, nullptr, sizeof(BTDecorator_BlueprintBase_eventReceiveTick_Parms), Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveTickAI_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControlledPawn;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveTickAI_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BTDecorator_BlueprintBase_eventReceiveTickAI_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveTickAI_Statics::NewProp_ControlledPawn = { "ControlledPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BTDecorator_BlueprintBase_eventReceiveTickAI_Parms, ControlledPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveTickAI_Statics::NewProp_OwnerController = { "OwnerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BTDecorator_BlueprintBase_eventReceiveTickAI_Parms, OwnerController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveTickAI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveTickAI_Statics::NewProp_DeltaSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveTickAI_Statics::NewProp_ControlledPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveTickAI_Statics::NewProp_OwnerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveTickAI_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "Comment", "/** Alternative AI version of ReceiveTick\n\x09 *\x09@see ReceiveTick for more details\n\x09 *\x09@Note that if both generic and AI event versions are implemented only the more\n\x09 *\x09suitable one will be called, meaning the AI version if called for AI, generic one otherwise */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_BlueprintBase.h" },
		{ "ToolTip", "Alternative AI version of ReceiveTick\n    @see ReceiveTick for more details\n    @Note that if both generic and AI event versions are implemented only the more\n    suitable one will be called, meaning the AI version if called for AI, generic one otherwise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveTickAI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTDecorator_BlueprintBase, nullptr, "ReceiveTickAI", nullptr, nullptr, sizeof(BTDecorator_BlueprintBase_eventReceiveTickAI_Parms), Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveTickAI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveTickAI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveTickAI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveTickAI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveTickAI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveTickAI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBTDecorator_BlueprintBase_NoRegister()
	{
		return UBTDecorator_BlueprintBase::StaticClass();
	}
	struct Z_Construct_UClass_UBTDecorator_BlueprintBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsObservingBB_MetaData[];
#endif
		static void NewProp_bIsObservingBB_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsObservingBB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCheckConditionOnlyBlackBoardChanges_MetaData[];
#endif
		static void NewProp_bCheckConditionOnlyBlackBoardChanges_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCheckConditionOnlyBlackBoardChanges;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowPropertyDetails_MetaData[];
#endif
		static void NewProp_bShowPropertyDetails_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowPropertyDetails;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CustomDescription;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObservedKeyNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ObservedKeyNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ObservedKeyNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTDecorator_BlueprintBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBTDecorator_BlueprintBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBTDecorator_BlueprintBase_IsDecoratorExecutionActive, "IsDecoratorExecutionActive" }, // 462468088
		{ &Z_Construct_UFunction_UBTDecorator_BlueprintBase_IsDecoratorObserverActive, "IsDecoratorObserverActive" }, // 1041697402
		{ &Z_Construct_UFunction_UBTDecorator_BlueprintBase_PerformConditionCheck, "PerformConditionCheck" }, // 1216555298
		{ &Z_Construct_UFunction_UBTDecorator_BlueprintBase_PerformConditionCheckAI, "PerformConditionCheckAI" }, // 3614635757
		{ &Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionFinish, "ReceiveExecutionFinish" }, // 2362799643
		{ &Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionFinishAI, "ReceiveExecutionFinishAI" }, // 1034119941
		{ &Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionStart, "ReceiveExecutionStart" }, // 950926807
		{ &Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionStartAI, "ReceiveExecutionStartAI" }, // 2977038249
		{ &Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveObserverActivated, "ReceiveObserverActivated" }, // 3785001967
		{ &Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveObserverActivatedAI, "ReceiveObserverActivatedAI" }, // 3107835003
		{ &Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveObserverDeactivated, "ReceiveObserverDeactivated" }, // 129377590
		{ &Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveObserverDeactivatedAI, "ReceiveObserverDeactivatedAI" }, // 1935170144
		{ &Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveTick, "ReceiveTick" }, // 1018319768
		{ &Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveTickAI, "ReceiveTickAI" }, // 2011969603
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_BlueprintBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *  Base class for blueprint based decorator nodes. Do NOT use it for creating native c++ classes!\n *\n *  Unlike task and services, decorator have two execution chains: \n *   ExecutionStart-ExecutionFinish and ObserverActivated-ObserverDeactivated\n *  which makes automatic latent action cleanup impossible. Keep in mind, that\n *  you HAVE TO verify is given chain is still active after resuming from any\n *  latent action (like Delay, Timelines, etc).\n *\n *  Helper functions:\n *  - IsDecoratorExecutionActive (true after ExecutionStart, until ExecutionFinish)\n *  - IsDecoratorObserverActive (true after ObserverActivated, until ObserverDeactivated)\n */" },
		{ "IncludePath", "BehaviorTree/Decorators/BTDecorator_BlueprintBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_BlueprintBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Base class for blueprint based decorator nodes. Do NOT use it for creating native c++ classes!\n\nUnlike task and services, decorator have two execution chains:\n ExecutionStart-ExecutionFinish and ObserverActivated-ObserverDeactivated\nwhich makes automatic latent action cleanup impossible. Keep in mind, that\nyou HAVE TO verify is given chain is still active after resuming from any\nlatent action (like Delay, Timelines, etc).\n\nHelper functions:\n- IsDecoratorExecutionActive (true after ExecutionStart, until ExecutionFinish)\n- IsDecoratorObserverActive (true after ObserverActivated, until ObserverDeactivated)" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_BlueprintBase_Statics::NewProp_bIsObservingBB_MetaData[] = {
		{ "Comment", "/** gets set to true if decorator declared BB keys it can potentially observe */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_BlueprintBase.h" },
		{ "ToolTip", "gets set to true if decorator declared BB keys it can potentially observe" },
	};
#endif
	void Z_Construct_UClass_UBTDecorator_BlueprintBase_Statics::NewProp_bIsObservingBB_SetBit(void* Obj)
	{
		((UBTDecorator_BlueprintBase*)Obj)->bIsObservingBB = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTDecorator_BlueprintBase_Statics::NewProp_bIsObservingBB = { "bIsObservingBB", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UBTDecorator_BlueprintBase), &Z_Construct_UClass_UBTDecorator_BlueprintBase_Statics::NewProp_bIsObservingBB_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_BlueprintBase_Statics::NewProp_bIsObservingBB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_BlueprintBase_Statics::NewProp_bIsObservingBB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_BlueprintBase_Statics::NewProp_bCheckConditionOnlyBlackBoardChanges_MetaData[] = {
		{ "Category", "FlowControl" },
		{ "Comment", "/** Applies only if Decorator has any FBlackboardKeySelector property and if decorator is \n\x09 *\x09set to abort BT flow. Is set to true ReceiveConditionCheck will be called only on changes \n\x09  *\x09to observed BB keys. If false or no BB keys observed ReceiveConditionCheck will be called every tick */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_BlueprintBase.h" },
		{ "ToolTip", "Applies only if Decorator has any FBlackboardKeySelector property and if decorator is\n    set to abort BT flow. Is set to true ReceiveConditionCheck will be called only on changes\n   to observed BB keys. If false or no BB keys observed ReceiveConditionCheck will be called every tick" },
	};
#endif
	void Z_Construct_UClass_UBTDecorator_BlueprintBase_Statics::NewProp_bCheckConditionOnlyBlackBoardChanges_SetBit(void* Obj)
	{
		((UBTDecorator_BlueprintBase*)Obj)->bCheckConditionOnlyBlackBoardChanges = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTDecorator_BlueprintBase_Statics::NewProp_bCheckConditionOnlyBlackBoardChanges = { "bCheckConditionOnlyBlackBoardChanges", nullptr, (EPropertyFlags)0x00200c0000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UBTDecorator_BlueprintBase), &Z_Construct_UClass_UBTDecorator_BlueprintBase_Statics::NewProp_bCheckConditionOnlyBlackBoardChanges_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_BlueprintBase_Statics::NewProp_bCheckConditionOnlyBlackBoardChanges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_BlueprintBase_Statics::NewProp_bCheckConditionOnlyBlackBoardChanges_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_BlueprintBase_Statics::NewProp_bShowPropertyDetails_MetaData[] = {
		{ "Category", "Description" },
		{ "Comment", "/** show detailed information about properties */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_BlueprintBase.h" },
		{ "ToolTip", "show detailed information about properties" },
	};
#endif
	void Z_Construct_UClass_UBTDecorator_BlueprintBase_Statics::NewProp_bShowPropertyDetails_SetBit(void* Obj)
	{
		((UBTDecorator_BlueprintBase*)Obj)->bShowPropertyDetails = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTDecorator_BlueprintBase_Statics::NewProp_bShowPropertyDetails = { "bShowPropertyDetails", nullptr, (EPropertyFlags)0x0020080000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UBTDecorator_BlueprintBase), &Z_Construct_UClass_UBTDecorator_BlueprintBase_Statics::NewProp_bShowPropertyDetails_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_BlueprintBase_Statics::NewProp_bShowPropertyDetails_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_BlueprintBase_Statics::NewProp_bShowPropertyDetails_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_BlueprintBase_Statics::NewProp_CustomDescription_MetaData[] = {
		{ "Category", "Description" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_BlueprintBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBTDecorator_BlueprintBase_Statics::NewProp_CustomDescription = { "CustomDescription", nullptr, (EPropertyFlags)0x0020080800010005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTDecorator_BlueprintBase, CustomDescription), METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_BlueprintBase_Statics::NewProp_CustomDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_BlueprintBase_Statics::NewProp_CustomDescription_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_BlueprintBase_Statics::NewProp_ObservedKeyNames_MetaData[] = {
		{ "Comment", "/** blackboard key names that should be observed */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_BlueprintBase.h" },
		{ "ToolTip", "blackboard key names that should be observed" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBTDecorator_BlueprintBase_Statics::NewProp_ObservedKeyNames = { "ObservedKeyNames", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTDecorator_BlueprintBase, ObservedKeyNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_BlueprintBase_Statics::NewProp_ObservedKeyNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_BlueprintBase_Statics::NewProp_ObservedKeyNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBTDecorator_BlueprintBase_Statics::NewProp_ObservedKeyNames_Inner = { "ObservedKeyNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_BlueprintBase_Statics::NewProp_ActorOwner_MetaData[] = {
		{ "Comment", "/** Cached AIController owner of BehaviorTreeComponent. */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_BlueprintBase.h" },
		{ "ToolTip", "Cached AIController owner of BehaviorTreeComponent." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTDecorator_BlueprintBase_Statics::NewProp_ActorOwner = { "ActorOwner", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTDecorator_BlueprintBase, ActorOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_BlueprintBase_Statics::NewProp_ActorOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_BlueprintBase_Statics::NewProp_ActorOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_BlueprintBase_Statics::NewProp_AIOwner_MetaData[] = {
		{ "Comment", "/** Cached AIController owner of BehaviorTreeComponent. */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_BlueprintBase.h" },
		{ "ToolTip", "Cached AIController owner of BehaviorTreeComponent." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTDecorator_BlueprintBase_Statics::NewProp_AIOwner = { "AIOwner", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTDecorator_BlueprintBase, AIOwner), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_BlueprintBase_Statics::NewProp_AIOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_BlueprintBase_Statics::NewProp_AIOwner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTDecorator_BlueprintBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_BlueprintBase_Statics::NewProp_bIsObservingBB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_BlueprintBase_Statics::NewProp_bCheckConditionOnlyBlackBoardChanges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_BlueprintBase_Statics::NewProp_bShowPropertyDetails,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_BlueprintBase_Statics::NewProp_CustomDescription,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_BlueprintBase_Statics::NewProp_ObservedKeyNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_BlueprintBase_Statics::NewProp_ObservedKeyNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_BlueprintBase_Statics::NewProp_ActorOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_BlueprintBase_Statics::NewProp_AIOwner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTDecorator_BlueprintBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_BlueprintBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_BlueprintBase_Statics::ClassParams = {
		&UBTDecorator_BlueprintBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBTDecorator_BlueprintBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_BlueprintBase_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_BlueprintBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_BlueprintBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTDecorator_BlueprintBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTDecorator_BlueprintBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTDecorator_BlueprintBase, 3333497978);
	template<> AIMODULE_API UClass* StaticClass<UBTDecorator_BlueprintBase>()
	{
		return UBTDecorator_BlueprintBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTDecorator_BlueprintBase(Z_Construct_UClass_UBTDecorator_BlueprintBase, &UBTDecorator_BlueprintBase::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTDecorator_BlueprintBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_BlueprintBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
