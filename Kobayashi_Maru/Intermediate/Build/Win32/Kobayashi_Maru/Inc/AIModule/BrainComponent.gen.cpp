// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/BrainComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBrainComponent() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBrainComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBrainComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAIResourceInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBrainComponent::execIsPaused)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPaused();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBrainComponent::execIsRunning)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRunning();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBrainComponent::execStopLogic)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Reason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopLogic(Z_Param_Reason);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBrainComponent::execRestartLogic)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RestartLogic();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBrainComponent::execStartLogic)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartLogic();
		P_NATIVE_END;
	}
	void UBrainComponent::StaticRegisterNativesUBrainComponent()
	{
		UClass* Class = UBrainComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsPaused", &UBrainComponent::execIsPaused },
			{ "IsRunning", &UBrainComponent::execIsRunning },
			{ "RestartLogic", &UBrainComponent::execRestartLogic },
			{ "StartLogic", &UBrainComponent::execStartLogic },
			{ "StopLogic", &UBrainComponent::execStopLogic },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBrainComponent_IsPaused_Statics
	{
		struct BrainComponent_eventIsPaused_Parms
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
	void Z_Construct_UFunction_UBrainComponent_IsPaused_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BrainComponent_eventIsPaused_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBrainComponent_IsPaused_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BrainComponent_eventIsPaused_Parms), &Z_Construct_UFunction_UBrainComponent_IsPaused_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBrainComponent_IsPaused_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBrainComponent_IsPaused_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBrainComponent_IsPaused_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Logic" },
		{ "ModuleRelativePath", "Classes/BrainComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBrainComponent_IsPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBrainComponent, nullptr, "IsPaused", nullptr, nullptr, sizeof(BrainComponent_eventIsPaused_Parms), Z_Construct_UFunction_UBrainComponent_IsPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBrainComponent_IsPaused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBrainComponent_IsPaused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBrainComponent_IsPaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBrainComponent_IsPaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBrainComponent_IsPaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBrainComponent_IsRunning_Statics
	{
		struct BrainComponent_eventIsRunning_Parms
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
	void Z_Construct_UFunction_UBrainComponent_IsRunning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BrainComponent_eventIsRunning_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBrainComponent_IsRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BrainComponent_eventIsRunning_Parms), &Z_Construct_UFunction_UBrainComponent_IsRunning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBrainComponent_IsRunning_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBrainComponent_IsRunning_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBrainComponent_IsRunning_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Logic" },
		{ "ModuleRelativePath", "Classes/BrainComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBrainComponent_IsRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBrainComponent, nullptr, "IsRunning", nullptr, nullptr, sizeof(BrainComponent_eventIsRunning_Parms), Z_Construct_UFunction_UBrainComponent_IsRunning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBrainComponent_IsRunning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBrainComponent_IsRunning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBrainComponent_IsRunning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBrainComponent_IsRunning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBrainComponent_IsRunning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBrainComponent_RestartLogic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBrainComponent_RestartLogic_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Logic" },
		{ "Comment", "/** Restarts currently running or previously ran brain logic. */" },
		{ "ModuleRelativePath", "Classes/BrainComponent.h" },
		{ "ToolTip", "Restarts currently running or previously ran brain logic." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBrainComponent_RestartLogic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBrainComponent, nullptr, "RestartLogic", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBrainComponent_RestartLogic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBrainComponent_RestartLogic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBrainComponent_RestartLogic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBrainComponent_RestartLogic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBrainComponent_StartLogic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBrainComponent_StartLogic_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Logic" },
		{ "Comment", "/** Starts brain logic. If brain is already running, will not do anything. */" },
		{ "ModuleRelativePath", "Classes/BrainComponent.h" },
		{ "ToolTip", "Starts brain logic. If brain is already running, will not do anything." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBrainComponent_StartLogic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBrainComponent, nullptr, "StartLogic", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBrainComponent_StartLogic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBrainComponent_StartLogic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBrainComponent_StartLogic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBrainComponent_StartLogic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBrainComponent_StopLogic_Statics
	{
		struct BrainComponent_eventStopLogic_Parms
		{
			FString Reason;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reason_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Reason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBrainComponent_StopLogic_Statics::NewProp_Reason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBrainComponent_StopLogic_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BrainComponent_eventStopLogic_Parms, Reason), METADATA_PARAMS(Z_Construct_UFunction_UBrainComponent_StopLogic_Statics::NewProp_Reason_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBrainComponent_StopLogic_Statics::NewProp_Reason_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBrainComponent_StopLogic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBrainComponent_StopLogic_Statics::NewProp_Reason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBrainComponent_StopLogic_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Logic" },
		{ "Comment", "/** Stops currently running brain logic. */" },
		{ "ModuleRelativePath", "Classes/BrainComponent.h" },
		{ "ToolTip", "Stops currently running brain logic." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBrainComponent_StopLogic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBrainComponent, nullptr, "StopLogic", nullptr, nullptr, sizeof(BrainComponent_eventStopLogic_Parms), Z_Construct_UFunction_UBrainComponent_StopLogic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBrainComponent_StopLogic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBrainComponent_StopLogic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBrainComponent_StopLogic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBrainComponent_StopLogic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBrainComponent_StopLogic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBrainComponent_NoRegister()
	{
		return UBrainComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBrainComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlackboardComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlackboardComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBrainComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBrainComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBrainComponent_IsPaused, "IsPaused" }, // 2360962203
		{ &Z_Construct_UFunction_UBrainComponent_IsRunning, "IsRunning" }, // 4245707378
		{ &Z_Construct_UFunction_UBrainComponent_RestartLogic, "RestartLogic" }, // 2066666511
		{ &Z_Construct_UFunction_UBrainComponent_StartLogic, "StartLogic" }, // 4020838828
		{ &Z_Construct_UFunction_UBrainComponent_StopLogic, "StopLogic" }, // 1382467630
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrainComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "AI" },
		{ "HideCategories", "Sockets Collision" },
		{ "IncludePath", "BrainComponent.h" },
		{ "ModuleRelativePath", "Classes/BrainComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrainComponent_Statics::NewProp_AIOwner_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BrainComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBrainComponent_Statics::NewProp_AIOwner = { "AIOwner", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBrainComponent, AIOwner), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBrainComponent_Statics::NewProp_AIOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBrainComponent_Statics::NewProp_AIOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrainComponent_Statics::NewProp_BlackboardComp_MetaData[] = {
		{ "Comment", "/** blackboard component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/BrainComponent.h" },
		{ "ToolTip", "blackboard component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBrainComponent_Statics::NewProp_BlackboardComp = { "BlackboardComp", nullptr, (EPropertyFlags)0x0020080000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBrainComponent, BlackboardComp), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBrainComponent_Statics::NewProp_BlackboardComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBrainComponent_Statics::NewProp_BlackboardComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBrainComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrainComponent_Statics::NewProp_AIOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrainComponent_Statics::NewProp_BlackboardComp,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UBrainComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAIResourceInterface_NoRegister, (int32)VTABLE_OFFSET(UBrainComponent, IAIResourceInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBrainComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBrainComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBrainComponent_Statics::ClassParams = {
		&UBrainComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBrainComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBrainComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBrainComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBrainComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBrainComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBrainComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBrainComponent, 1872637480);
	template<> AIMODULE_API UClass* StaticClass<UBrainComponent>()
	{
		return UBrainComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBrainComponent(Z_Construct_UClass_UBrainComponent, &UBrainComponent::StaticClass, TEXT("/Script/AIModule"), TEXT("UBrainComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBrainComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
