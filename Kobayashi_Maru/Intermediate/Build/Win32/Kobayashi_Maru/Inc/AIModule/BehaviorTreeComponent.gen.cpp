// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/BehaviorTree/BehaviorTreeComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBehaviorTreeComponent() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent();
	AIMODULE_API UClass* Z_Construct_UClass_UBrainComponent();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTNode_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBehaviorTreeComponent::execSetDynamicSubtree)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_InjectTag);
		P_GET_OBJECT(UBehaviorTree,Z_Param_BehaviorAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDynamicSubtree(Z_Param_InjectTag,Z_Param_BehaviorAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBehaviorTreeComponent::execAddCooldownTagDuration)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_CooldownTag);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CooldownDuration);
		P_GET_UBOOL(Z_Param_bAddToExistingDuration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddCooldownTagDuration(Z_Param_CooldownTag,Z_Param_CooldownDuration,Z_Param_bAddToExistingDuration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBehaviorTreeComponent::execGetTagCooldownEndTime)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_CooldownTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTagCooldownEndTime(Z_Param_CooldownTag);
		P_NATIVE_END;
	}
	void UBehaviorTreeComponent::StaticRegisterNativesUBehaviorTreeComponent()
	{
		UClass* Class = UBehaviorTreeComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddCooldownTagDuration", &UBehaviorTreeComponent::execAddCooldownTagDuration },
			{ "GetTagCooldownEndTime", &UBehaviorTreeComponent::execGetTagCooldownEndTime },
			{ "SetDynamicSubtree", &UBehaviorTreeComponent::execSetDynamicSubtree },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBehaviorTreeComponent_AddCooldownTagDuration_Statics
	{
		struct BehaviorTreeComponent_eventAddCooldownTagDuration_Parms
		{
			FGameplayTag CooldownTag;
			float CooldownDuration;
			bool bAddToExistingDuration;
		};
		static void NewProp_bAddToExistingDuration_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAddToExistingDuration;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CooldownDuration;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CooldownTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBehaviorTreeComponent_AddCooldownTagDuration_Statics::NewProp_bAddToExistingDuration_SetBit(void* Obj)
	{
		((BehaviorTreeComponent_eventAddCooldownTagDuration_Parms*)Obj)->bAddToExistingDuration = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBehaviorTreeComponent_AddCooldownTagDuration_Statics::NewProp_bAddToExistingDuration = { "bAddToExistingDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BehaviorTreeComponent_eventAddCooldownTagDuration_Parms), &Z_Construct_UFunction_UBehaviorTreeComponent_AddCooldownTagDuration_Statics::NewProp_bAddToExistingDuration_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBehaviorTreeComponent_AddCooldownTagDuration_Statics::NewProp_CooldownDuration = { "CooldownDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BehaviorTreeComponent_eventAddCooldownTagDuration_Parms, CooldownDuration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBehaviorTreeComponent_AddCooldownTagDuration_Statics::NewProp_CooldownTag = { "CooldownTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BehaviorTreeComponent_eventAddCooldownTagDuration_Parms, CooldownTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBehaviorTreeComponent_AddCooldownTagDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviorTreeComponent_AddCooldownTagDuration_Statics::NewProp_bAddToExistingDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviorTreeComponent_AddCooldownTagDuration_Statics::NewProp_CooldownDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviorTreeComponent_AddCooldownTagDuration_Statics::NewProp_CooldownTag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBehaviorTreeComponent_AddCooldownTagDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Logic" },
		{ "Comment", "/** add to the cooldown tag's duration */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeComponent.h" },
		{ "ToolTip", "add to the cooldown tag's duration" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBehaviorTreeComponent_AddCooldownTagDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBehaviorTreeComponent, nullptr, "AddCooldownTagDuration", nullptr, nullptr, sizeof(BehaviorTreeComponent_eventAddCooldownTagDuration_Parms), Z_Construct_UFunction_UBehaviorTreeComponent_AddCooldownTagDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviorTreeComponent_AddCooldownTagDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBehaviorTreeComponent_AddCooldownTagDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviorTreeComponent_AddCooldownTagDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBehaviorTreeComponent_AddCooldownTagDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBehaviorTreeComponent_AddCooldownTagDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBehaviorTreeComponent_GetTagCooldownEndTime_Statics
	{
		struct BehaviorTreeComponent_eventGetTagCooldownEndTime_Parms
		{
			FGameplayTag CooldownTag;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CooldownTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBehaviorTreeComponent_GetTagCooldownEndTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BehaviorTreeComponent_eventGetTagCooldownEndTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBehaviorTreeComponent_GetTagCooldownEndTime_Statics::NewProp_CooldownTag = { "CooldownTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BehaviorTreeComponent_eventGetTagCooldownEndTime_Parms, CooldownTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBehaviorTreeComponent_GetTagCooldownEndTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviorTreeComponent_GetTagCooldownEndTime_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviorTreeComponent_GetTagCooldownEndTime_Statics::NewProp_CooldownTag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBehaviorTreeComponent_GetTagCooldownEndTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Logic" },
		{ "Comment", "/** @return the cooldown tag end time, 0.0f if CooldownTag is not found */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeComponent.h" },
		{ "ToolTip", "@return the cooldown tag end time, 0.0f if CooldownTag is not found" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBehaviorTreeComponent_GetTagCooldownEndTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBehaviorTreeComponent, nullptr, "GetTagCooldownEndTime", nullptr, nullptr, sizeof(BehaviorTreeComponent_eventGetTagCooldownEndTime_Parms), Z_Construct_UFunction_UBehaviorTreeComponent_GetTagCooldownEndTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviorTreeComponent_GetTagCooldownEndTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBehaviorTreeComponent_GetTagCooldownEndTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviorTreeComponent_GetTagCooldownEndTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBehaviorTreeComponent_GetTagCooldownEndTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBehaviorTreeComponent_GetTagCooldownEndTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBehaviorTreeComponent_SetDynamicSubtree_Statics
	{
		struct BehaviorTreeComponent_eventSetDynamicSubtree_Parms
		{
			FGameplayTag InjectTag;
			UBehaviorTree* BehaviorAsset;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BehaviorAsset;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InjectTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBehaviorTreeComponent_SetDynamicSubtree_Statics::NewProp_BehaviorAsset = { "BehaviorAsset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BehaviorTreeComponent_eventSetDynamicSubtree_Parms, BehaviorAsset), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBehaviorTreeComponent_SetDynamicSubtree_Statics::NewProp_InjectTag = { "InjectTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BehaviorTreeComponent_eventSetDynamicSubtree_Parms, InjectTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBehaviorTreeComponent_SetDynamicSubtree_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviorTreeComponent_SetDynamicSubtree_Statics::NewProp_BehaviorAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviorTreeComponent_SetDynamicSubtree_Statics::NewProp_InjectTag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBehaviorTreeComponent_SetDynamicSubtree_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Logic" },
		{ "Comment", "/** assign subtree to RunBehaviorDynamic task specified by tag */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeComponent.h" },
		{ "ToolTip", "assign subtree to RunBehaviorDynamic task specified by tag" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBehaviorTreeComponent_SetDynamicSubtree_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBehaviorTreeComponent, nullptr, "SetDynamicSubtree", nullptr, nullptr, sizeof(BehaviorTreeComponent_eventSetDynamicSubtree_Parms), Z_Construct_UFunction_UBehaviorTreeComponent_SetDynamicSubtree_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviorTreeComponent_SetDynamicSubtree_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBehaviorTreeComponent_SetDynamicSubtree_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviorTreeComponent_SetDynamicSubtree_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBehaviorTreeComponent_SetDynamicSubtree()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBehaviorTreeComponent_SetDynamicSubtree_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister()
	{
		return UBehaviorTreeComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBehaviorTreeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultBehaviorTreeAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultBehaviorTreeAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeInstances_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NodeInstances;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeInstances_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBehaviorTreeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBrainComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBehaviorTreeComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBehaviorTreeComponent_AddCooldownTagDuration, "AddCooldownTagDuration" }, // 181295087
		{ &Z_Construct_UFunction_UBehaviorTreeComponent_GetTagCooldownEndTime, "GetTagCooldownEndTime" }, // 4111872687
		{ &Z_Construct_UFunction_UBehaviorTreeComponent_SetDynamicSubtree, "SetDynamicSubtree" }, // 1133494253
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTreeComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AI" },
		{ "HideCategories", "Sockets Collision" },
		{ "IncludePath", "BehaviorTree/BehaviorTreeComponent.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTreeComponent_Statics::NewProp_DefaultBehaviorTreeAsset_MetaData[] = {
		{ "Category", "AI" },
		{ "Comment", "/** data asset defining the tree */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeComponent.h" },
		{ "ToolTip", "data asset defining the tree" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBehaviorTreeComponent_Statics::NewProp_DefaultBehaviorTreeAsset = { "DefaultBehaviorTreeAsset", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBehaviorTreeComponent, DefaultBehaviorTreeAsset), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBehaviorTreeComponent_Statics::NewProp_DefaultBehaviorTreeAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeComponent_Statics::NewProp_DefaultBehaviorTreeAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTreeComponent_Statics::NewProp_NodeInstances_MetaData[] = {
		{ "Comment", "/** instanced nodes */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeComponent.h" },
		{ "ToolTip", "instanced nodes" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBehaviorTreeComponent_Statics::NewProp_NodeInstances = { "NodeInstances", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBehaviorTreeComponent, NodeInstances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBehaviorTreeComponent_Statics::NewProp_NodeInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeComponent_Statics::NewProp_NodeInstances_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBehaviorTreeComponent_Statics::NewProp_NodeInstances_Inner = { "NodeInstances", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBehaviorTreeComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTreeComponent_Statics::NewProp_DefaultBehaviorTreeAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTreeComponent_Statics::NewProp_NodeInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTreeComponent_Statics::NewProp_NodeInstances_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBehaviorTreeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviorTreeComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBehaviorTreeComponent_Statics::ClassParams = {
		&UBehaviorTreeComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBehaviorTreeComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBehaviorTreeComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBehaviorTreeComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBehaviorTreeComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBehaviorTreeComponent, 372937916);
	template<> AIMODULE_API UClass* StaticClass<UBehaviorTreeComponent>()
	{
		return UBehaviorTreeComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBehaviorTreeComponent(Z_Construct_UClass_UBehaviorTreeComponent, &UBehaviorTreeComponent::StaticClass, TEXT("/Script/AIModule"), TEXT("UBehaviorTreeComponent"), false, nullptr, nullptr, nullptr);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
