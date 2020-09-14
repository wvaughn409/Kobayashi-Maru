// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayTasks/Classes/Tasks/GameplayTask_WaitDelay.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayTask_WaitDelay() {}
// Cross Module References
	GAMEPLAYTASKS_API UFunction* Z_Construct_UDelegateFunction_UGameplayTask_WaitDelay_TaskDelayDelegate__DelegateSignature();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTask_WaitDelay();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTask_WaitDelay_NoRegister();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTask();
	UPackage* Z_Construct_UPackage__Script_GameplayTasks();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UGameplayTask_WaitDelay_TaskDelayDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UGameplayTask_WaitDelay_TaskDelayDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Tasks/GameplayTask_WaitDelay.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UGameplayTask_WaitDelay_TaskDelayDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayTask_WaitDelay, nullptr, "TaskDelayDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UGameplayTask_WaitDelay_TaskDelayDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UGameplayTask_WaitDelay_TaskDelayDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UGameplayTask_WaitDelay_TaskDelayDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UGameplayTask_WaitDelay_TaskDelayDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UGameplayTask_WaitDelay::execTaskWaitDelay)
	{
		P_GET_TINTERFACE(IGameplayTaskOwnerInterface,Z_Param_TaskOwner);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_GET_PROPERTY(FByteProperty,Z_Param_Priority);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGameplayTask_WaitDelay**)Z_Param__Result=UGameplayTask_WaitDelay::TaskWaitDelay(Z_Param_TaskOwner,Z_Param_Time,Z_Param_Priority);
		P_NATIVE_END;
	}
	void UGameplayTask_WaitDelay::StaticRegisterNativesUGameplayTask_WaitDelay()
	{
		UClass* Class = UGameplayTask_WaitDelay::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TaskWaitDelay", &UGameplayTask_WaitDelay::execTaskWaitDelay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay_Statics
	{
		struct GameplayTask_WaitDelay_eventTaskWaitDelay_Parms
		{
			TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner;
			float Time;
			uint8 Priority;
			UGameplayTask_WaitDelay* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Priority;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_TaskOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayTask_WaitDelay_eventTaskWaitDelay_Parms, ReturnValue), Z_Construct_UClass_UGameplayTask_WaitDelay_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay_Statics::NewProp_Priority_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayTask_WaitDelay_eventTaskWaitDelay_Parms, Priority), nullptr, METADATA_PARAMS(Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay_Statics::NewProp_Priority_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayTask_WaitDelay_eventTaskWaitDelay_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay_Statics::NewProp_TaskOwner = { "TaskOwner", nullptr, (EPropertyFlags)0x0014040000000080, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayTask_WaitDelay_eventTaskWaitDelay_Parms, TaskOwner), Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay_Statics::NewProp_Priority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay_Statics::NewProp_Time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay_Statics::NewProp_TaskOwner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "TaskOwner, Priority" },
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "GameplayTasks" },
		{ "Comment", "/** Wait specified time. This is functionally the same as a standard Delay node. */" },
		{ "CPP_Default_Priority", "192" },
		{ "DefaultToSelf", "TaskOwner" },
		{ "ModuleRelativePath", "Classes/Tasks/GameplayTask_WaitDelay.h" },
		{ "ToolTip", "Wait specified time. This is functionally the same as a standard Delay node." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayTask_WaitDelay, nullptr, "TaskWaitDelay", nullptr, nullptr, sizeof(GameplayTask_WaitDelay_eventTaskWaitDelay_Parms), Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameplayTask_WaitDelay_NoRegister()
	{
		return UGameplayTask_WaitDelay::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayTask_WaitDelay_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFinish_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFinish;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayTask_WaitDelay_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayTask,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTasks,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameplayTask_WaitDelay_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UGameplayTask_WaitDelay_TaskDelayDelegate__DelegateSignature, "TaskDelayDelegate__DelegateSignature" }, // 1199000651
		{ &Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay, "TaskWaitDelay" }, // 3812067454
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTask_WaitDelay_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tasks/GameplayTask_WaitDelay.h" },
		{ "ModuleRelativePath", "Classes/Tasks/GameplayTask_WaitDelay.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTask_WaitDelay_Statics::NewProp_OnFinish_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Tasks/GameplayTask_WaitDelay.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameplayTask_WaitDelay_Statics::NewProp_OnFinish = { "OnFinish", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameplayTask_WaitDelay, OnFinish), Z_Construct_UDelegateFunction_UGameplayTask_WaitDelay_TaskDelayDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGameplayTask_WaitDelay_Statics::NewProp_OnFinish_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_WaitDelay_Statics::NewProp_OnFinish_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayTask_WaitDelay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTask_WaitDelay_Statics::NewProp_OnFinish,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayTask_WaitDelay_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayTask_WaitDelay>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameplayTask_WaitDelay_Statics::ClassParams = {
		&UGameplayTask_WaitDelay::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameplayTask_WaitDelay_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_WaitDelay_Statics::PropPointers),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayTask_WaitDelay_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_WaitDelay_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayTask_WaitDelay()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameplayTask_WaitDelay_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameplayTask_WaitDelay, 1052622284);
	template<> GAMEPLAYTASKS_API UClass* StaticClass<UGameplayTask_WaitDelay>()
	{
		return UGameplayTask_WaitDelay::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameplayTask_WaitDelay(Z_Construct_UClass_UGameplayTask_WaitDelay, &UGameplayTask_WaitDelay::StaticClass, TEXT("/Script/GameplayTasks"), TEXT("UGameplayTask_WaitDelay"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayTask_WaitDelay);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
