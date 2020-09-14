// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemUtils/Classes/AchievementWriteCallbackProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAchievementWriteCallbackProxy() {}
// Cross Module References
	ONLINESUBSYSTEMUTILS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemUtils_AchievementWriteDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UAchievementWriteCallbackProxy_NoRegister();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UAchievementWriteCallbackProxy();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OnlineSubsystemUtils_AchievementWriteDelegate__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemUtils_eventAchievementWriteDelegate_Parms
		{
			FName WrittenAchievementName;
			float WrittenProgress;
			int32 WrittenUserTag;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WrittenUserTag;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WrittenProgress;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_WrittenAchievementName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_AchievementWriteDelegate__DelegateSignature_Statics::NewProp_WrittenUserTag = { "WrittenUserTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemUtils_eventAchievementWriteDelegate_Parms, WrittenUserTag), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_AchievementWriteDelegate__DelegateSignature_Statics::NewProp_WrittenProgress = { "WrittenProgress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemUtils_eventAchievementWriteDelegate_Parms, WrittenProgress), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_AchievementWriteDelegate__DelegateSignature_Statics::NewProp_WrittenAchievementName = { "WrittenAchievementName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemUtils_eventAchievementWriteDelegate_Parms, WrittenAchievementName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemUtils_AchievementWriteDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemUtils_AchievementWriteDelegate__DelegateSignature_Statics::NewProp_WrittenUserTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemUtils_AchievementWriteDelegate__DelegateSignature_Statics::NewProp_WrittenProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemUtils_AchievementWriteDelegate__DelegateSignature_Statics::NewProp_WrittenAchievementName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemUtils_AchievementWriteDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AchievementWriteCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_AchievementWriteDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils, nullptr, "AchievementWriteDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_OnlineSubsystemUtils_eventAchievementWriteDelegate_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_AchievementWriteDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_AchievementWriteDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_AchievementWriteDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_AchievementWriteDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemUtils_AchievementWriteDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemUtils_AchievementWriteDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UAchievementWriteCallbackProxy::execWriteAchievementProgress)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_PROPERTY(FNameProperty,Z_Param_AchievementName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Progress);
		P_GET_PROPERTY(FIntProperty,Z_Param_UserTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAchievementWriteCallbackProxy**)Z_Param__Result=UAchievementWriteCallbackProxy::WriteAchievementProgress(Z_Param_WorldContextObject,Z_Param_PlayerController,Z_Param_AchievementName,Z_Param_Progress,Z_Param_UserTag);
		P_NATIVE_END;
	}
	void UAchievementWriteCallbackProxy::StaticRegisterNativesUAchievementWriteCallbackProxy()
	{
		UClass* Class = UAchievementWriteCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "WriteAchievementProgress", &UAchievementWriteCallbackProxy::execWriteAchievementProgress },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAchievementWriteCallbackProxy_WriteAchievementProgress_Statics
	{
		struct AchievementWriteCallbackProxy_eventWriteAchievementProgress_Parms
		{
			UObject* WorldContextObject;
			APlayerController* PlayerController;
			FName AchievementName;
			float Progress;
			int32 UserTag;
			UAchievementWriteCallbackProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UserTag;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Progress;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AchievementName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAchievementWriteCallbackProxy_WriteAchievementProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AchievementWriteCallbackProxy_eventWriteAchievementProgress_Parms, ReturnValue), Z_Construct_UClass_UAchievementWriteCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAchievementWriteCallbackProxy_WriteAchievementProgress_Statics::NewProp_UserTag = { "UserTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AchievementWriteCallbackProxy_eventWriteAchievementProgress_Parms, UserTag), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAchievementWriteCallbackProxy_WriteAchievementProgress_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AchievementWriteCallbackProxy_eventWriteAchievementProgress_Parms, Progress), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAchievementWriteCallbackProxy_WriteAchievementProgress_Statics::NewProp_AchievementName = { "AchievementName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AchievementWriteCallbackProxy_eventWriteAchievementProgress_Parms, AchievementName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAchievementWriteCallbackProxy_WriteAchievementProgress_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AchievementWriteCallbackProxy_eventWriteAchievementProgress_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAchievementWriteCallbackProxy_WriteAchievementProgress_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AchievementWriteCallbackProxy_eventWriteAchievementProgress_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAchievementWriteCallbackProxy_WriteAchievementProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementWriteCallbackProxy_WriteAchievementProgress_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementWriteCallbackProxy_WriteAchievementProgress_Statics::NewProp_UserTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementWriteCallbackProxy_WriteAchievementProgress_Statics::NewProp_Progress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementWriteCallbackProxy_WriteAchievementProgress_Statics::NewProp_AchievementName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementWriteCallbackProxy_WriteAchievementProgress_Statics::NewProp_PlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementWriteCallbackProxy_WriteAchievementProgress_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAchievementWriteCallbackProxy_WriteAchievementProgress_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|Achievements" },
		{ "Comment", "// Writes progress about an achievement to the default online subsystem\n//   AchievementName is the ID of the achievement to update progress on\n//   Progress is the reported progress toward accomplishing the achievement\n//   UserTag is not used internally, but it is returned on success or failure\n" },
		{ "CPP_Default_Progress", "100.000000" },
		{ "CPP_Default_UserTag", "0" },
		{ "ModuleRelativePath", "Classes/AchievementWriteCallbackProxy.h" },
		{ "ToolTip", "Writes progress about an achievement to the default online subsystem\n  AchievementName is the ID of the achievement to update progress on\n  Progress is the reported progress toward accomplishing the achievement\n  UserTag is not used internally, but it is returned on success or failure" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAchievementWriteCallbackProxy_WriteAchievementProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAchievementWriteCallbackProxy, nullptr, "WriteAchievementProgress", nullptr, nullptr, sizeof(AchievementWriteCallbackProxy_eventWriteAchievementProgress_Parms), Z_Construct_UFunction_UAchievementWriteCallbackProxy_WriteAchievementProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementWriteCallbackProxy_WriteAchievementProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAchievementWriteCallbackProxy_WriteAchievementProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementWriteCallbackProxy_WriteAchievementProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAchievementWriteCallbackProxy_WriteAchievementProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAchievementWriteCallbackProxy_WriteAchievementProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAchievementWriteCallbackProxy_NoRegister()
	{
		return UAchievementWriteCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_UAchievementWriteCallbackProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAchievementWriteCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAchievementWriteCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAchievementWriteCallbackProxy_WriteAchievementProgress, "WriteAchievementProgress" }, // 285413266
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAchievementWriteCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AchievementWriteCallbackProxy.h" },
		{ "ModuleRelativePath", "Classes/AchievementWriteCallbackProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAchievementWriteCallbackProxy_Statics::NewProp_OnFailure_MetaData[] = {
		{ "Comment", "// Called when there is an unsuccessful achievement write\n" },
		{ "ModuleRelativePath", "Classes/AchievementWriteCallbackProxy.h" },
		{ "ToolTip", "Called when there is an unsuccessful achievement write" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAchievementWriteCallbackProxy_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAchievementWriteCallbackProxy, OnFailure), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_AchievementWriteDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAchievementWriteCallbackProxy_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementWriteCallbackProxy_Statics::NewProp_OnFailure_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAchievementWriteCallbackProxy_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "Comment", "// Called when there is a successful achievement write\n" },
		{ "ModuleRelativePath", "Classes/AchievementWriteCallbackProxy.h" },
		{ "ToolTip", "Called when there is a successful achievement write" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAchievementWriteCallbackProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAchievementWriteCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_AchievementWriteDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAchievementWriteCallbackProxy_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementWriteCallbackProxy_Statics::NewProp_OnSuccess_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAchievementWriteCallbackProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAchievementWriteCallbackProxy_Statics::NewProp_OnFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAchievementWriteCallbackProxy_Statics::NewProp_OnSuccess,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAchievementWriteCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAchievementWriteCallbackProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAchievementWriteCallbackProxy_Statics::ClassParams = {
		&UAchievementWriteCallbackProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAchievementWriteCallbackProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementWriteCallbackProxy_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAchievementWriteCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementWriteCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAchievementWriteCallbackProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAchievementWriteCallbackProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAchievementWriteCallbackProxy, 4040730695);
	template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<UAchievementWriteCallbackProxy>()
	{
		return UAchievementWriteCallbackProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAchievementWriteCallbackProxy(Z_Construct_UClass_UAchievementWriteCallbackProxy, &UAchievementWriteCallbackProxy::StaticClass, TEXT("/Script/OnlineSubsystemUtils"), TEXT("UAchievementWriteCallbackProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAchievementWriteCallbackProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
