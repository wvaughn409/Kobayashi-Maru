// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/Navigation/CrowdFollowingComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrowdFollowingComponent() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UCrowdFollowingComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UCrowdFollowingComponent();
	AIMODULE_API UClass* Z_Construct_UClass_UPathFollowingComponent();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavAvoidanceMask();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UCrowdAgentInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCrowdFollowingComponent::execSuspendCrowdSteering)
	{
		P_GET_UBOOL(Z_Param_bSuspend);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SuspendCrowdSteering(Z_Param_bSuspend);
		P_NATIVE_END;
	}
	void UCrowdFollowingComponent::StaticRegisterNativesUCrowdFollowingComponent()
	{
		UClass* Class = UCrowdFollowingComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SuspendCrowdSteering", &UCrowdFollowingComponent::execSuspendCrowdSteering },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCrowdFollowingComponent_SuspendCrowdSteering_Statics
	{
		struct CrowdFollowingComponent_eventSuspendCrowdSteering_Parms
		{
			bool bSuspend;
		};
		static void NewProp_bSuspend_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuspend;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCrowdFollowingComponent_SuspendCrowdSteering_Statics::NewProp_bSuspend_SetBit(void* Obj)
	{
		((CrowdFollowingComponent_eventSuspendCrowdSteering_Parms*)Obj)->bSuspend = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdFollowingComponent_SuspendCrowdSteering_Statics::NewProp_bSuspend = { "bSuspend", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CrowdFollowingComponent_eventSuspendCrowdSteering_Parms), &Z_Construct_UFunction_UCrowdFollowingComponent_SuspendCrowdSteering_Statics::NewProp_bSuspend_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCrowdFollowingComponent_SuspendCrowdSteering_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdFollowingComponent_SuspendCrowdSteering_Statics::NewProp_bSuspend,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrowdFollowingComponent_SuspendCrowdSteering_Statics::Function_MetaDataParams[] = {
		{ "Category", "Crowd" },
		{ "Comment", "/** master switch for crowd steering & avoidance */" },
		{ "ModuleRelativePath", "Classes/Navigation/CrowdFollowingComponent.h" },
		{ "ToolTip", "master switch for crowd steering & avoidance" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrowdFollowingComponent_SuspendCrowdSteering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCrowdFollowingComponent, nullptr, "SuspendCrowdSteering", nullptr, nullptr, sizeof(CrowdFollowingComponent_eventSuspendCrowdSteering_Parms), Z_Construct_UFunction_UCrowdFollowingComponent_SuspendCrowdSteering_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdFollowingComponent_SuspendCrowdSteering_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCrowdFollowingComponent_SuspendCrowdSteering_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdFollowingComponent_SuspendCrowdSteering_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCrowdFollowingComponent_SuspendCrowdSteering()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCrowdFollowingComponent_SuspendCrowdSteering_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCrowdFollowingComponent_NoRegister()
	{
		return UCrowdFollowingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCrowdFollowingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupsToIgnore_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GroupsToIgnore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupsToAvoid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GroupsToAvoid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvoidanceGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AvoidanceGroup;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrowdAgentMoveDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CrowdAgentMoveDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterMovement;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCrowdFollowingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPathFollowingComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCrowdFollowingComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCrowdFollowingComponent_SuspendCrowdSteering, "SuspendCrowdSteering" }, // 2089042778
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrowdFollowingComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Navigation/CrowdFollowingComponent.h" },
		{ "ModuleRelativePath", "Classes/Navigation/CrowdFollowingComponent.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrowdFollowingComponent_Statics::NewProp_GroupsToIgnore_MetaData[] = {
		{ "Comment", "/** DEPRECATED: Will NOT avoid other agents if they are in one of specified groups, higher priority than GroupsToAvoid - use property from CharacterMovementComponent instead */" },
		{ "ModuleRelativePath", "Classes/Navigation/CrowdFollowingComponent.h" },
		{ "ToolTip", "DEPRECATED: Will NOT avoid other agents if they are in one of specified groups, higher priority than GroupsToAvoid - use property from CharacterMovementComponent instead" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCrowdFollowingComponent_Statics::NewProp_GroupsToIgnore = { "GroupsToIgnore", nullptr, (EPropertyFlags)0x0020080820000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCrowdFollowingComponent, GroupsToIgnore_DEPRECATED), Z_Construct_UScriptStruct_FNavAvoidanceMask, METADATA_PARAMS(Z_Construct_UClass_UCrowdFollowingComponent_Statics::NewProp_GroupsToIgnore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCrowdFollowingComponent_Statics::NewProp_GroupsToIgnore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrowdFollowingComponent_Statics::NewProp_GroupsToAvoid_MetaData[] = {
		{ "Comment", "/** DEPRECATED: Will avoid other agents if they are in one of specified groups - use property from CharacterMovementComponent instead */" },
		{ "ModuleRelativePath", "Classes/Navigation/CrowdFollowingComponent.h" },
		{ "ToolTip", "DEPRECATED: Will avoid other agents if they are in one of specified groups - use property from CharacterMovementComponent instead" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCrowdFollowingComponent_Statics::NewProp_GroupsToAvoid = { "GroupsToAvoid", nullptr, (EPropertyFlags)0x0020080820000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCrowdFollowingComponent, GroupsToAvoid_DEPRECATED), Z_Construct_UScriptStruct_FNavAvoidanceMask, METADATA_PARAMS(Z_Construct_UClass_UCrowdFollowingComponent_Statics::NewProp_GroupsToAvoid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCrowdFollowingComponent_Statics::NewProp_GroupsToAvoid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrowdFollowingComponent_Statics::NewProp_AvoidanceGroup_MetaData[] = {
		{ "Comment", "/** DEPRECATED: Group mask for this agent - use property from CharacterMovementComponent instead */" },
		{ "ModuleRelativePath", "Classes/Navigation/CrowdFollowingComponent.h" },
		{ "ToolTip", "DEPRECATED: Group mask for this agent - use property from CharacterMovementComponent instead" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCrowdFollowingComponent_Statics::NewProp_AvoidanceGroup = { "AvoidanceGroup", nullptr, (EPropertyFlags)0x0020080820000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCrowdFollowingComponent, AvoidanceGroup_DEPRECATED), Z_Construct_UScriptStruct_FNavAvoidanceMask, METADATA_PARAMS(Z_Construct_UClass_UCrowdFollowingComponent_Statics::NewProp_AvoidanceGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCrowdFollowingComponent_Statics::NewProp_AvoidanceGroup_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrowdFollowingComponent_Statics::NewProp_CrowdAgentMoveDirection_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Navigation/CrowdFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCrowdFollowingComponent_Statics::NewProp_CrowdAgentMoveDirection = { "CrowdAgentMoveDirection", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCrowdFollowingComponent, CrowdAgentMoveDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UCrowdFollowingComponent_Statics::NewProp_CrowdAgentMoveDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCrowdFollowingComponent_Statics::NewProp_CrowdAgentMoveDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrowdFollowingComponent_Statics::NewProp_CharacterMovement_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Navigation/CrowdFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCrowdFollowingComponent_Statics::NewProp_CharacterMovement = { "CharacterMovement", nullptr, (EPropertyFlags)0x0020080000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCrowdFollowingComponent, CharacterMovement), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCrowdFollowingComponent_Statics::NewProp_CharacterMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCrowdFollowingComponent_Statics::NewProp_CharacterMovement_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCrowdFollowingComponent_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrowdFollowingComponent_Statics::NewProp_GroupsToIgnore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrowdFollowingComponent_Statics::NewProp_GroupsToAvoid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrowdFollowingComponent_Statics::NewProp_AvoidanceGroup,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrowdFollowingComponent_Statics::NewProp_CrowdAgentMoveDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrowdFollowingComponent_Statics::NewProp_CharacterMovement,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCrowdFollowingComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UCrowdAgentInterface_NoRegister, (int32)VTABLE_OFFSET(UCrowdFollowingComponent, ICrowdAgentInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCrowdFollowingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCrowdFollowingComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCrowdFollowingComponent_Statics::ClassParams = {
		&UCrowdFollowingComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCrowdFollowingComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCrowdFollowingComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCrowdFollowingComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCrowdFollowingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCrowdFollowingComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCrowdFollowingComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCrowdFollowingComponent, 2158193445);
	template<> AIMODULE_API UClass* StaticClass<UCrowdFollowingComponent>()
	{
		return UCrowdFollowingComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCrowdFollowingComponent(Z_Construct_UClass_UCrowdFollowingComponent, &UCrowdFollowingComponent::StaticClass, TEXT("/Script/AIModule"), TEXT("UCrowdFollowingComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCrowdFollowingComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
