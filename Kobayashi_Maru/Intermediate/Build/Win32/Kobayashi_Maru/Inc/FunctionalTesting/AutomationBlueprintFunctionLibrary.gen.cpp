// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FunctionalTesting/Public/AutomationBlueprintFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutomationBlueprintFunctionLibrary() {}
// Cross Module References
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_UAutomationEditorTask_NoRegister();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_UAutomationEditorTask();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FunctionalTesting();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_UAutomationBlueprintFunctionLibrary_NoRegister();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_UAutomationBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	FUNCTIONALTESTING_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationScreenshotOptions();
	FUNCTIONALTESTING_API UEnum* Z_Construct_UEnum_FunctionalTesting_EComparisonTolerance();
	ENGINE_API UClass* Z_Construct_UClass_ACameraActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAutomationEditorTask::execIsValidTask)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValidTask();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutomationEditorTask::execIsTaskDone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTaskDone();
		P_NATIVE_END;
	}
	void UAutomationEditorTask::StaticRegisterNativesUAutomationEditorTask()
	{
		UClass* Class = UAutomationEditorTask::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsTaskDone", &UAutomationEditorTask::execIsTaskDone },
			{ "IsValidTask", &UAutomationEditorTask::execIsValidTask },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAutomationEditorTask_IsTaskDone_Statics
	{
		struct AutomationEditorTask_eventIsTaskDone_Parms
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
	void Z_Construct_UFunction_UAutomationEditorTask_IsTaskDone_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AutomationEditorTask_eventIsTaskDone_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAutomationEditorTask_IsTaskDone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AutomationEditorTask_eventIsTaskDone_Parms), &Z_Construct_UFunction_UAutomationEditorTask_IsTaskDone_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationEditorTask_IsTaskDone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationEditorTask_IsTaskDone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationEditorTask_IsTaskDone_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "Comment", "/** Query if the Editor task is done  */" },
		{ "ModuleRelativePath", "Public/AutomationBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Query if the Editor task is done" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationEditorTask_IsTaskDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationEditorTask, nullptr, "IsTaskDone", nullptr, nullptr, sizeof(AutomationEditorTask_eventIsTaskDone_Parms), Z_Construct_UFunction_UAutomationEditorTask_IsTaskDone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationEditorTask_IsTaskDone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationEditorTask_IsTaskDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationEditorTask_IsTaskDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationEditorTask_IsTaskDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAutomationEditorTask_IsTaskDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationEditorTask_IsValidTask_Statics
	{
		struct AutomationEditorTask_eventIsValidTask_Parms
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
	void Z_Construct_UFunction_UAutomationEditorTask_IsValidTask_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AutomationEditorTask_eventIsValidTask_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAutomationEditorTask_IsValidTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AutomationEditorTask_eventIsValidTask_Parms), &Z_Construct_UFunction_UAutomationEditorTask_IsValidTask_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationEditorTask_IsValidTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationEditorTask_IsValidTask_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationEditorTask_IsValidTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "Comment", "/** Query if a task was setup */" },
		{ "ModuleRelativePath", "Public/AutomationBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Query if a task was setup" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationEditorTask_IsValidTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationEditorTask, nullptr, "IsValidTask", nullptr, nullptr, sizeof(AutomationEditorTask_eventIsValidTask_Parms), Z_Construct_UFunction_UAutomationEditorTask_IsValidTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationEditorTask_IsValidTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationEditorTask_IsValidTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationEditorTask_IsValidTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationEditorTask_IsValidTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAutomationEditorTask_IsValidTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAutomationEditorTask_NoRegister()
	{
		return UAutomationEditorTask::StaticClass();
	}
	struct Z_Construct_UClass_UAutomationEditorTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAutomationEditorTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAutomationEditorTask_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAutomationEditorTask_IsTaskDone, "IsTaskDone" }, // 3511368718
		{ &Z_Construct_UFunction_UAutomationEditorTask_IsValidTask, "IsValidTask" }, // 1886142231
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationEditorTask_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * UAutomationEditorTask\n */" },
		{ "IncludePath", "AutomationBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/AutomationBlueprintFunctionLibrary.h" },
		{ "ToolTip", "UAutomationEditorTask" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAutomationEditorTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutomationEditorTask>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAutomationEditorTask_Statics::ClassParams = {
		&UAutomationEditorTask::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAutomationEditorTask_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationEditorTask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAutomationEditorTask()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAutomationEditorTask_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAutomationEditorTask, 3389753359);
	template<> FUNCTIONALTESTING_API UClass* StaticClass<UAutomationEditorTask>()
	{
		return UAutomationEditorTask::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAutomationEditorTask(Z_Construct_UClass_UAutomationEditorTask, &UAutomationEditorTask::StaticClass, TEXT("/Script/FunctionalTesting"), TEXT("UAutomationEditorTask"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAutomationEditorTask);
	DEFINE_FUNCTION(UAutomationBlueprintFunctionLibrary::execSetScalabilityQualityToLow)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAutomationBlueprintFunctionLibrary::SetScalabilityQualityToLow(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutomationBlueprintFunctionLibrary::execSetScalabilityQualityToEpic)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAutomationBlueprintFunctionLibrary::SetScalabilityQualityToEpic(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutomationBlueprintFunctionLibrary::execSetScalabilityQualityLevelRelativeToMax)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAutomationBlueprintFunctionLibrary::SetScalabilityQualityLevelRelativeToMax(Z_Param_WorldContextObject,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutomationBlueprintFunctionLibrary::execAddExpectedLogError)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ExpectedPatternString);
		P_GET_PROPERTY(FIntProperty,Z_Param_Occurrences);
		P_GET_UBOOL(Z_Param_ExactMatch);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAutomationBlueprintFunctionLibrary::AddExpectedLogError(Z_Param_ExpectedPatternString,Z_Param_Occurrences,Z_Param_ExactMatch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutomationBlueprintFunctionLibrary::execGetDefaultScreenshotOptionsForRendering)
	{
		P_GET_ENUM(EComparisonTolerance,Z_Param_Tolerance);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAutomationScreenshotOptions*)Z_Param__Result=UAutomationBlueprintFunctionLibrary::GetDefaultScreenshotOptionsForRendering(EComparisonTolerance(Z_Param_Tolerance),Z_Param_Delay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutomationBlueprintFunctionLibrary::execGetDefaultScreenshotOptionsForGameplay)
	{
		P_GET_ENUM(EComparisonTolerance,Z_Param_Tolerance);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAutomationScreenshotOptions*)Z_Param__Result=UAutomationBlueprintFunctionLibrary::GetDefaultScreenshotOptionsForGameplay(EComparisonTolerance(Z_Param_Tolerance),Z_Param_Delay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutomationBlueprintFunctionLibrary::execTakeHighResScreenshot)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ResX);
		P_GET_PROPERTY(FIntProperty,Z_Param_ResY);
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_GET_OBJECT(ACameraActor,Z_Param_Camera);
		P_GET_UBOOL(Z_Param_bMaskEnabled);
		P_GET_UBOOL(Z_Param_bCaptureHDR);
		P_GET_ENUM(EComparisonTolerance,Z_Param_ComparisonTolerance);
		P_GET_PROPERTY(FStrProperty,Z_Param_ComparisonNotes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAutomationEditorTask**)Z_Param__Result=UAutomationBlueprintFunctionLibrary::TakeHighResScreenshot(Z_Param_ResX,Z_Param_ResY,Z_Param_Filename,Z_Param_Camera,Z_Param_bMaskEnabled,Z_Param_bCaptureHDR,EComparisonTolerance(Z_Param_ComparisonTolerance),Z_Param_ComparisonNotes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutomationBlueprintFunctionLibrary::execAutomationWaitForLoading)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAutomationBlueprintFunctionLibrary::AutomationWaitForLoading(Z_Param_WorldContextObject,Z_Param_LatentInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutomationBlueprintFunctionLibrary::execAreAutomatedTestsRunning)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAutomationBlueprintFunctionLibrary::AreAutomatedTestsRunning();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutomationBlueprintFunctionLibrary::execGetStatCallCount)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_StatName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UAutomationBlueprintFunctionLibrary::GetStatCallCount(Z_Param_StatName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutomationBlueprintFunctionLibrary::execGetStatExcMax)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_StatName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UAutomationBlueprintFunctionLibrary::GetStatExcMax(Z_Param_StatName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutomationBlueprintFunctionLibrary::execGetStatExcAverage)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_StatName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UAutomationBlueprintFunctionLibrary::GetStatExcAverage(Z_Param_StatName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutomationBlueprintFunctionLibrary::execGetStatIncMax)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_StatName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UAutomationBlueprintFunctionLibrary::GetStatIncMax(Z_Param_StatName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutomationBlueprintFunctionLibrary::execGetStatIncAverage)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_StatName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UAutomationBlueprintFunctionLibrary::GetStatIncAverage(Z_Param_StatName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutomationBlueprintFunctionLibrary::execDisableStatGroup)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_GroupName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAutomationBlueprintFunctionLibrary::DisableStatGroup(Z_Param_WorldContextObject,Z_Param_GroupName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutomationBlueprintFunctionLibrary::execEnableStatGroup)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_GroupName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAutomationBlueprintFunctionLibrary::EnableStatGroup(Z_Param_WorldContextObject,Z_Param_GroupName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutomationBlueprintFunctionLibrary::execTakeAutomationScreenshotOfUI)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_STRUCT_REF(FAutomationScreenshotOptions,Z_Param_Out_Options);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAutomationBlueprintFunctionLibrary::TakeAutomationScreenshotOfUI(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Name,Z_Param_Out_Options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutomationBlueprintFunctionLibrary::execTakeAutomationScreenshotAtCamera)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_OBJECT(ACameraActor,Z_Param_Camera);
		P_GET_PROPERTY(FStrProperty,Z_Param_NameOverride);
		P_GET_PROPERTY(FStrProperty,Z_Param_Notes);
		P_GET_STRUCT_REF(FAutomationScreenshotOptions,Z_Param_Out_Options);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAutomationBlueprintFunctionLibrary::TakeAutomationScreenshotAtCamera(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Camera,Z_Param_NameOverride,Z_Param_Notes,Z_Param_Out_Options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutomationBlueprintFunctionLibrary::execTakeAutomationScreenshot)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY(FStrProperty,Z_Param_Notes);
		P_GET_STRUCT_REF(FAutomationScreenshotOptions,Z_Param_Out_Options);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAutomationBlueprintFunctionLibrary::TakeAutomationScreenshot(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Name,Z_Param_Notes,Z_Param_Out_Options);
		P_NATIVE_END;
	}
	void UAutomationBlueprintFunctionLibrary::StaticRegisterNativesUAutomationBlueprintFunctionLibrary()
	{
		UClass* Class = UAutomationBlueprintFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddExpectedLogError", &UAutomationBlueprintFunctionLibrary::execAddExpectedLogError },
			{ "AreAutomatedTestsRunning", &UAutomationBlueprintFunctionLibrary::execAreAutomatedTestsRunning },
			{ "AutomationWaitForLoading", &UAutomationBlueprintFunctionLibrary::execAutomationWaitForLoading },
			{ "DisableStatGroup", &UAutomationBlueprintFunctionLibrary::execDisableStatGroup },
			{ "EnableStatGroup", &UAutomationBlueprintFunctionLibrary::execEnableStatGroup },
			{ "GetDefaultScreenshotOptionsForGameplay", &UAutomationBlueprintFunctionLibrary::execGetDefaultScreenshotOptionsForGameplay },
			{ "GetDefaultScreenshotOptionsForRendering", &UAutomationBlueprintFunctionLibrary::execGetDefaultScreenshotOptionsForRendering },
			{ "GetStatCallCount", &UAutomationBlueprintFunctionLibrary::execGetStatCallCount },
			{ "GetStatExcAverage", &UAutomationBlueprintFunctionLibrary::execGetStatExcAverage },
			{ "GetStatExcMax", &UAutomationBlueprintFunctionLibrary::execGetStatExcMax },
			{ "GetStatIncAverage", &UAutomationBlueprintFunctionLibrary::execGetStatIncAverage },
			{ "GetStatIncMax", &UAutomationBlueprintFunctionLibrary::execGetStatIncMax },
			{ "SetScalabilityQualityLevelRelativeToMax", &UAutomationBlueprintFunctionLibrary::execSetScalabilityQualityLevelRelativeToMax },
			{ "SetScalabilityQualityToEpic", &UAutomationBlueprintFunctionLibrary::execSetScalabilityQualityToEpic },
			{ "SetScalabilityQualityToLow", &UAutomationBlueprintFunctionLibrary::execSetScalabilityQualityToLow },
			{ "TakeAutomationScreenshot", &UAutomationBlueprintFunctionLibrary::execTakeAutomationScreenshot },
			{ "TakeAutomationScreenshotAtCamera", &UAutomationBlueprintFunctionLibrary::execTakeAutomationScreenshotAtCamera },
			{ "TakeAutomationScreenshotOfUI", &UAutomationBlueprintFunctionLibrary::execTakeAutomationScreenshotOfUI },
			{ "TakeHighResScreenshot", &UAutomationBlueprintFunctionLibrary::execTakeHighResScreenshot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddExpectedLogError_Statics
	{
		struct AutomationBlueprintFunctionLibrary_eventAddExpectedLogError_Parms
		{
			FString ExpectedPatternString;
			int32 Occurrences;
			bool ExactMatch;
		};
		static void NewProp_ExactMatch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ExactMatch;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Occurrences;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExpectedPatternString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddExpectedLogError_Statics::NewProp_ExactMatch_SetBit(void* Obj)
	{
		((AutomationBlueprintFunctionLibrary_eventAddExpectedLogError_Parms*)Obj)->ExactMatch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddExpectedLogError_Statics::NewProp_ExactMatch = { "ExactMatch", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AutomationBlueprintFunctionLibrary_eventAddExpectedLogError_Parms), &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddExpectedLogError_Statics::NewProp_ExactMatch_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddExpectedLogError_Statics::NewProp_Occurrences = { "Occurrences", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventAddExpectedLogError_Parms, Occurrences), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddExpectedLogError_Statics::NewProp_ExpectedPatternString = { "ExpectedPatternString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventAddExpectedLogError_Parms, ExpectedPatternString), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddExpectedLogError_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddExpectedLogError_Statics::NewProp_ExactMatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddExpectedLogError_Statics::NewProp_Occurrences,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddExpectedLogError_Statics::NewProp_ExpectedPatternString,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddExpectedLogError_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Occurrences, ExactMatch" },
		{ "Category", "Automation" },
		{ "Comment", "/**\n\x09 * Mute the report of log error and warning matching a pattern during an automated test\n\x09 */" },
		{ "CPP_Default_ExactMatch", "false" },
		{ "CPP_Default_Occurrences", "1" },
		{ "ModuleRelativePath", "Public/AutomationBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Mute the report of log error and warning matching a pattern during an automated test" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddExpectedLogError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationBlueprintFunctionLibrary, nullptr, "AddExpectedLogError", nullptr, nullptr, sizeof(AutomationBlueprintFunctionLibrary_eventAddExpectedLogError_Parms), Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddExpectedLogError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddExpectedLogError_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddExpectedLogError_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddExpectedLogError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddExpectedLogError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddExpectedLogError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AreAutomatedTestsRunning_Statics
	{
		struct AutomationBlueprintFunctionLibrary_eventAreAutomatedTestsRunning_Parms
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
	void Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AreAutomatedTestsRunning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AutomationBlueprintFunctionLibrary_eventAreAutomatedTestsRunning_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AreAutomatedTestsRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AutomationBlueprintFunctionLibrary_eventAreAutomatedTestsRunning_Parms), &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AreAutomatedTestsRunning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AreAutomatedTestsRunning_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AreAutomatedTestsRunning_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AreAutomatedTestsRunning_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "Comment", "/**\n\x09 * Lets you know if any automated tests are running, or are about to run and the automation system is spinning up tests.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AutomationBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Lets you know if any automated tests are running, or are about to run and the automation system is spinning up tests." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AreAutomatedTestsRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationBlueprintFunctionLibrary, nullptr, "AreAutomatedTestsRunning", nullptr, nullptr, sizeof(AutomationBlueprintFunctionLibrary_eventAreAutomatedTestsRunning_Parms), Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AreAutomatedTestsRunning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AreAutomatedTestsRunning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AreAutomatedTestsRunning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AreAutomatedTestsRunning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AreAutomatedTestsRunning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AreAutomatedTestsRunning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AutomationWaitForLoading_Statics
	{
		struct AutomationBlueprintFunctionLibrary_eventAutomationWaitForLoading_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AutomationWaitForLoading_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventAutomationWaitForLoading_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AutomationWaitForLoading_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventAutomationWaitForLoading_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AutomationWaitForLoading_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AutomationWaitForLoading_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AutomationWaitForLoading_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AutomationWaitForLoading_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/AutomationBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AutomationWaitForLoading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationBlueprintFunctionLibrary, nullptr, "AutomationWaitForLoading", nullptr, nullptr, sizeof(AutomationBlueprintFunctionLibrary_eventAutomationWaitForLoading_Parms), Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AutomationWaitForLoading_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AutomationWaitForLoading_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AutomationWaitForLoading_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AutomationWaitForLoading_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AutomationWaitForLoading()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AutomationWaitForLoading_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_DisableStatGroup_Statics
	{
		struct AutomationBlueprintFunctionLibrary_eventDisableStatGroup_Parms
		{
			UObject* WorldContextObject;
			FName GroupName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_GroupName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_DisableStatGroup_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventDisableStatGroup_Parms, GroupName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_DisableStatGroup_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventDisableStatGroup_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_DisableStatGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_DisableStatGroup_Statics::NewProp_GroupName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_DisableStatGroup_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_DisableStatGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/AutomationBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_DisableStatGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationBlueprintFunctionLibrary, nullptr, "DisableStatGroup", nullptr, nullptr, sizeof(AutomationBlueprintFunctionLibrary_eventDisableStatGroup_Parms), Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_DisableStatGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_DisableStatGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_DisableStatGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_DisableStatGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_DisableStatGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_DisableStatGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_EnableStatGroup_Statics
	{
		struct AutomationBlueprintFunctionLibrary_eventEnableStatGroup_Parms
		{
			UObject* WorldContextObject;
			FName GroupName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_GroupName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_EnableStatGroup_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventEnableStatGroup_Parms, GroupName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_EnableStatGroup_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventEnableStatGroup_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_EnableStatGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_EnableStatGroup_Statics::NewProp_GroupName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_EnableStatGroup_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_EnableStatGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/AutomationBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_EnableStatGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationBlueprintFunctionLibrary, nullptr, "EnableStatGroup", nullptr, nullptr, sizeof(AutomationBlueprintFunctionLibrary_eventEnableStatGroup_Parms), Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_EnableStatGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_EnableStatGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_EnableStatGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_EnableStatGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_EnableStatGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_EnableStatGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForGameplay_Statics
	{
		struct AutomationBlueprintFunctionLibrary_eventGetDefaultScreenshotOptionsForGameplay_Parms
		{
			EComparisonTolerance Tolerance;
			float Delay;
			FAutomationScreenshotOptions ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Delay;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Tolerance;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Tolerance_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForGameplay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventGetDefaultScreenshotOptionsForGameplay_Parms, ReturnValue), Z_Construct_UScriptStruct_FAutomationScreenshotOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForGameplay_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventGetDefaultScreenshotOptionsForGameplay_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForGameplay_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventGetDefaultScreenshotOptionsForGameplay_Parms, Tolerance), Z_Construct_UEnum_FunctionalTesting_EComparisonTolerance, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForGameplay_Statics::NewProp_Tolerance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForGameplay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForGameplay_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForGameplay_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForGameplay_Statics::NewProp_Tolerance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForGameplay_Statics::NewProp_Tolerance_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForGameplay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "Comment", "/**\n\x09 * \n\x09 */" },
		{ "CPP_Default_Delay", "0.200000" },
		{ "CPP_Default_Tolerance", "Low" },
		{ "ModuleRelativePath", "Public/AutomationBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForGameplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationBlueprintFunctionLibrary, nullptr, "GetDefaultScreenshotOptionsForGameplay", nullptr, nullptr, sizeof(AutomationBlueprintFunctionLibrary_eventGetDefaultScreenshotOptionsForGameplay_Parms), Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForGameplay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForGameplay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForGameplay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForGameplay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForGameplay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForGameplay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForRendering_Statics
	{
		struct AutomationBlueprintFunctionLibrary_eventGetDefaultScreenshotOptionsForRendering_Parms
		{
			EComparisonTolerance Tolerance;
			float Delay;
			FAutomationScreenshotOptions ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Delay;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Tolerance;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Tolerance_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForRendering_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventGetDefaultScreenshotOptionsForRendering_Parms, ReturnValue), Z_Construct_UScriptStruct_FAutomationScreenshotOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForRendering_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventGetDefaultScreenshotOptionsForRendering_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForRendering_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventGetDefaultScreenshotOptionsForRendering_Parms, Tolerance), Z_Construct_UEnum_FunctionalTesting_EComparisonTolerance, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForRendering_Statics::NewProp_Tolerance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForRendering_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForRendering_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForRendering_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForRendering_Statics::NewProp_Tolerance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForRendering_Statics::NewProp_Tolerance_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForRendering_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "Comment", "/**\n\x09 * \n\x09 */" },
		{ "CPP_Default_Delay", "0.200000" },
		{ "CPP_Default_Tolerance", "Low" },
		{ "ModuleRelativePath", "Public/AutomationBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForRendering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationBlueprintFunctionLibrary, nullptr, "GetDefaultScreenshotOptionsForRendering", nullptr, nullptr, sizeof(AutomationBlueprintFunctionLibrary_eventGetDefaultScreenshotOptionsForRendering_Parms), Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForRendering_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForRendering_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForRendering_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForRendering_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForRendering()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForRendering_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatCallCount_Statics
	{
		struct AutomationBlueprintFunctionLibrary_eventGetStatCallCount_Parms
		{
			FName StatName;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StatName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatCallCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventGetStatCallCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatCallCount_Statics::NewProp_StatName = { "StatName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventGetStatCallCount_Parms, StatName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatCallCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatCallCount_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatCallCount_Statics::NewProp_StatName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatCallCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Public/AutomationBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatCallCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationBlueprintFunctionLibrary, nullptr, "GetStatCallCount", nullptr, nullptr, sizeof(AutomationBlueprintFunctionLibrary_eventGetStatCallCount_Parms), Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatCallCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatCallCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatCallCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatCallCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatCallCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatCallCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcAverage_Statics
	{
		struct AutomationBlueprintFunctionLibrary_eventGetStatExcAverage_Parms
		{
			FName StatName;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StatName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcAverage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventGetStatExcAverage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcAverage_Statics::NewProp_StatName = { "StatName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventGetStatExcAverage_Parms, StatName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcAverage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcAverage_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcAverage_Statics::NewProp_StatName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcAverage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Public/AutomationBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcAverage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationBlueprintFunctionLibrary, nullptr, "GetStatExcAverage", nullptr, nullptr, sizeof(AutomationBlueprintFunctionLibrary_eventGetStatExcAverage_Parms), Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcAverage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcAverage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcAverage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcAverage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcAverage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcAverage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcMax_Statics
	{
		struct AutomationBlueprintFunctionLibrary_eventGetStatExcMax_Parms
		{
			FName StatName;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StatName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcMax_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventGetStatExcMax_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcMax_Statics::NewProp_StatName = { "StatName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventGetStatExcMax_Parms, StatName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcMax_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcMax_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcMax_Statics::NewProp_StatName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcMax_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Public/AutomationBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcMax_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationBlueprintFunctionLibrary, nullptr, "GetStatExcMax", nullptr, nullptr, sizeof(AutomationBlueprintFunctionLibrary_eventGetStatExcMax_Parms), Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcMax_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcMax_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcMax_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcMax_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcMax()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcMax_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncAverage_Statics
	{
		struct AutomationBlueprintFunctionLibrary_eventGetStatIncAverage_Parms
		{
			FName StatName;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StatName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncAverage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventGetStatIncAverage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncAverage_Statics::NewProp_StatName = { "StatName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventGetStatIncAverage_Parms, StatName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncAverage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncAverage_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncAverage_Statics::NewProp_StatName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncAverage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Public/AutomationBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncAverage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationBlueprintFunctionLibrary, nullptr, "GetStatIncAverage", nullptr, nullptr, sizeof(AutomationBlueprintFunctionLibrary_eventGetStatIncAverage_Parms), Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncAverage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncAverage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncAverage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncAverage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncAverage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncAverage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncMax_Statics
	{
		struct AutomationBlueprintFunctionLibrary_eventGetStatIncMax_Parms
		{
			FName StatName;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StatName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncMax_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventGetStatIncMax_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncMax_Statics::NewProp_StatName = { "StatName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventGetStatIncMax_Parms, StatName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncMax_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncMax_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncMax_Statics::NewProp_StatName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncMax_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Public/AutomationBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncMax_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationBlueprintFunctionLibrary, nullptr, "GetStatIncMax", nullptr, nullptr, sizeof(AutomationBlueprintFunctionLibrary_eventGetStatIncMax_Parms), Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncMax_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncMax_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncMax_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncMax_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncMax()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncMax_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityLevelRelativeToMax_Statics
	{
		struct AutomationBlueprintFunctionLibrary_eventSetScalabilityQualityLevelRelativeToMax_Parms
		{
			UObject* WorldContextObject;
			int32 Value;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityLevelRelativeToMax_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventSetScalabilityQualityLevelRelativeToMax_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityLevelRelativeToMax_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventSetScalabilityQualityLevelRelativeToMax_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityLevelRelativeToMax_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityLevelRelativeToMax_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityLevelRelativeToMax_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityLevelRelativeToMax_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "Comment", "/**\n\x09 * Sets all other settings based on an overall value\n\x09 * @param Value 0:Cinematic, 1:Epic...etc.\n\x09 */" },
		{ "CPP_Default_Value", "1" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/AutomationBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Sets all other settings based on an overall value\n@param Value 0:Cinematic, 1:Epic...etc." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityLevelRelativeToMax_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationBlueprintFunctionLibrary, nullptr, "SetScalabilityQualityLevelRelativeToMax", nullptr, nullptr, sizeof(AutomationBlueprintFunctionLibrary_eventSetScalabilityQualityLevelRelativeToMax_Parms), Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityLevelRelativeToMax_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityLevelRelativeToMax_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityLevelRelativeToMax_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityLevelRelativeToMax_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityLevelRelativeToMax()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityLevelRelativeToMax_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToEpic_Statics
	{
		struct AutomationBlueprintFunctionLibrary_eventSetScalabilityQualityToEpic_Parms
		{
			UObject* WorldContextObject;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToEpic_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventSetScalabilityQualityToEpic_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToEpic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToEpic_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToEpic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/AutomationBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToEpic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationBlueprintFunctionLibrary, nullptr, "SetScalabilityQualityToEpic", nullptr, nullptr, sizeof(AutomationBlueprintFunctionLibrary_eventSetScalabilityQualityToEpic_Parms), Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToEpic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToEpic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToEpic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToEpic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToEpic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToEpic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToLow_Statics
	{
		struct AutomationBlueprintFunctionLibrary_eventSetScalabilityQualityToLow_Parms
		{
			UObject* WorldContextObject;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToLow_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventSetScalabilityQualityToLow_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToLow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToLow_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToLow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/AutomationBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToLow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationBlueprintFunctionLibrary, nullptr, "SetScalabilityQualityToLow", nullptr, nullptr, sizeof(AutomationBlueprintFunctionLibrary_eventSetScalabilityQualityToLow_Parms), Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToLow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToLow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToLow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToLow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToLow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToLow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics
	{
		struct AutomationBlueprintFunctionLibrary_eventTakeAutomationScreenshot_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			FString Name;
			FString Notes;
			FAutomationScreenshotOptions Options;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Options;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Notes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Notes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventTakeAutomationScreenshot_Parms, Options), Z_Construct_UScriptStruct_FAutomationScreenshotOptions, METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::NewProp_Options_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::NewProp_Options_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::NewProp_Notes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::NewProp_Notes = { "Notes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventTakeAutomationScreenshot_Parms, Notes), METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::NewProp_Notes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::NewProp_Notes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventTakeAutomationScreenshot_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventTakeAutomationScreenshot_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventTakeAutomationScreenshot_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::NewProp_Options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::NewProp_Notes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "Comment", "/**\n\x09 * Takes a screenshot of the game's viewport.  Does not capture any UI.\n\x09 */" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/AutomationBlueprintFunctionLibrary.h" },
		{ "Name", "" },
		{ "ToolTip", "Takes a screenshot of the game's viewport.  Does not capture any UI." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationBlueprintFunctionLibrary, nullptr, "TakeAutomationScreenshot", nullptr, nullptr, sizeof(AutomationBlueprintFunctionLibrary_eventTakeAutomationScreenshot_Parms), Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics
	{
		struct AutomationBlueprintFunctionLibrary_eventTakeAutomationScreenshotAtCamera_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			ACameraActor* Camera;
			FString NameOverride;
			FString Notes;
			FAutomationScreenshotOptions Options;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Options;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Notes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Notes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NameOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NameOverride;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventTakeAutomationScreenshotAtCamera_Parms, Options), Z_Construct_UScriptStruct_FAutomationScreenshotOptions, METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::NewProp_Options_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::NewProp_Options_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::NewProp_Notes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::NewProp_Notes = { "Notes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventTakeAutomationScreenshotAtCamera_Parms, Notes), METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::NewProp_Notes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::NewProp_Notes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::NewProp_NameOverride_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::NewProp_NameOverride = { "NameOverride", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventTakeAutomationScreenshotAtCamera_Parms, NameOverride), METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::NewProp_NameOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::NewProp_NameOverride_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventTakeAutomationScreenshotAtCamera_Parms, Camera), Z_Construct_UClass_ACameraActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventTakeAutomationScreenshotAtCamera_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventTakeAutomationScreenshotAtCamera_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::NewProp_Options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::NewProp_Notes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::NewProp_NameOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::NewProp_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "Comment", "/**\n\x09 * Takes a screenshot of the game's viewport, from a particular camera actors POV.  Does not capture any UI.\n\x09 */" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/AutomationBlueprintFunctionLibrary.h" },
		{ "NameOverride", "" },
		{ "ToolTip", "Takes a screenshot of the game's viewport, from a particular camera actors POV.  Does not capture any UI." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationBlueprintFunctionLibrary, nullptr, "TakeAutomationScreenshotAtCamera", nullptr, nullptr, sizeof(AutomationBlueprintFunctionLibrary_eventTakeAutomationScreenshotAtCamera_Parms), Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Statics
	{
		struct AutomationBlueprintFunctionLibrary_eventTakeAutomationScreenshotOfUI_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			FString Name;
			FAutomationScreenshotOptions Options;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Options;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Statics::NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventTakeAutomationScreenshotOfUI_Parms, Options), Z_Construct_UScriptStruct_FAutomationScreenshotOptions, METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Statics::NewProp_Options_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Statics::NewProp_Options_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventTakeAutomationScreenshotOfUI_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventTakeAutomationScreenshotOfUI_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventTakeAutomationScreenshotOfUI_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Statics::NewProp_Options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/AutomationBlueprintFunctionLibrary.h" },
		{ "NameOverride", "" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationBlueprintFunctionLibrary, nullptr, "TakeAutomationScreenshotOfUI", nullptr, nullptr, sizeof(AutomationBlueprintFunctionLibrary_eventTakeAutomationScreenshotOfUI_Parms), Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics
	{
		struct AutomationBlueprintFunctionLibrary_eventTakeHighResScreenshot_Parms
		{
			int32 ResX;
			int32 ResY;
			FString Filename;
			ACameraActor* Camera;
			bool bMaskEnabled;
			bool bCaptureHDR;
			EComparisonTolerance ComparisonTolerance;
			FString ComparisonNotes;
			UAutomationEditorTask* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ComparisonNotes;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ComparisonTolerance;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ComparisonTolerance_Underlying;
		static void NewProp_bCaptureHDR_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCaptureHDR;
		static void NewProp_bMaskEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMaskEnabled;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ResY;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ResX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventTakeHighResScreenshot_Parms, ReturnValue), Z_Construct_UClass_UAutomationEditorTask_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics::NewProp_ComparisonNotes = { "ComparisonNotes", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventTakeHighResScreenshot_Parms, ComparisonNotes), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics::NewProp_ComparisonTolerance = { "ComparisonTolerance", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventTakeHighResScreenshot_Parms, ComparisonTolerance), Z_Construct_UEnum_FunctionalTesting_EComparisonTolerance, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics::NewProp_ComparisonTolerance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics::NewProp_bCaptureHDR_SetBit(void* Obj)
	{
		((AutomationBlueprintFunctionLibrary_eventTakeHighResScreenshot_Parms*)Obj)->bCaptureHDR = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics::NewProp_bCaptureHDR = { "bCaptureHDR", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AutomationBlueprintFunctionLibrary_eventTakeHighResScreenshot_Parms), &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics::NewProp_bCaptureHDR_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics::NewProp_bMaskEnabled_SetBit(void* Obj)
	{
		((AutomationBlueprintFunctionLibrary_eventTakeHighResScreenshot_Parms*)Obj)->bMaskEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics::NewProp_bMaskEnabled = { "bMaskEnabled", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AutomationBlueprintFunctionLibrary_eventTakeHighResScreenshot_Parms), &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics::NewProp_bMaskEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventTakeHighResScreenshot_Parms, Camera), Z_Construct_UClass_ACameraActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventTakeHighResScreenshot_Parms, Filename), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics::NewProp_ResY = { "ResY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventTakeHighResScreenshot_Parms, ResY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics::NewProp_ResX = { "ResX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventTakeHighResScreenshot_Parms, ResX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics::NewProp_ComparisonNotes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics::NewProp_ComparisonTolerance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics::NewProp_ComparisonTolerance_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics::NewProp_bCaptureHDR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics::NewProp_bMaskEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics::NewProp_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics::NewProp_Filename,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics::NewProp_ResY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics::NewProp_ResX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Camera, bMaskEnabled, bCaptureHDR, ComparisonTolerance, ComparisonNotes" },
		{ "Category", "Automation" },
		{ "Comment", "/**\n\x09* take high res screenshot in editor.\n\x09*/" },
		{ "CPP_Default_bCaptureHDR", "false" },
		{ "CPP_Default_bMaskEnabled", "false" },
		{ "CPP_Default_Camera", "None" },
		{ "CPP_Default_ComparisonNotes", "" },
		{ "CPP_Default_ComparisonTolerance", "Low" },
		{ "ModuleRelativePath", "Public/AutomationBlueprintFunctionLibrary.h" },
		{ "ToolTip", "take high res screenshot in editor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationBlueprintFunctionLibrary, nullptr, "TakeHighResScreenshot", nullptr, nullptr, sizeof(AutomationBlueprintFunctionLibrary_eventTakeHighResScreenshot_Parms), Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAutomationBlueprintFunctionLibrary_NoRegister()
	{
		return UAutomationBlueprintFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UAutomationBlueprintFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAutomationBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAutomationBlueprintFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddExpectedLogError, "AddExpectedLogError" }, // 2132011898
		{ &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AreAutomatedTestsRunning, "AreAutomatedTestsRunning" }, // 270900785
		{ &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AutomationWaitForLoading, "AutomationWaitForLoading" }, // 157243022
		{ &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_DisableStatGroup, "DisableStatGroup" }, // 31631475
		{ &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_EnableStatGroup, "EnableStatGroup" }, // 2882576065
		{ &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForGameplay, "GetDefaultScreenshotOptionsForGameplay" }, // 3709903291
		{ &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForRendering, "GetDefaultScreenshotOptionsForRendering" }, // 1210106693
		{ &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatCallCount, "GetStatCallCount" }, // 3634345140
		{ &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcAverage, "GetStatExcAverage" }, // 815958728
		{ &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcMax, "GetStatExcMax" }, // 3282674762
		{ &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncAverage, "GetStatIncAverage" }, // 3117826908
		{ &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncMax, "GetStatIncMax" }, // 30652484
		{ &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityLevelRelativeToMax, "SetScalabilityQualityLevelRelativeToMax" }, // 1361940162
		{ &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToEpic, "SetScalabilityQualityToEpic" }, // 354919159
		{ &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToLow, "SetScalabilityQualityToLow" }, // 1778310669
		{ &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot, "TakeAutomationScreenshot" }, // 3863289078
		{ &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera, "TakeAutomationScreenshotAtCamera" }, // 6075437
		{ &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI, "TakeAutomationScreenshotOfUI" }, // 474240070
		{ &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot, "TakeHighResScreenshot" }, // 628240620
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationBlueprintFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AutomationBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/AutomationBlueprintFunctionLibrary.h" },
		{ "ScriptName", "AutomationLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAutomationBlueprintFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutomationBlueprintFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAutomationBlueprintFunctionLibrary_Statics::ClassParams = {
		&UAutomationBlueprintFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAutomationBlueprintFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationBlueprintFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAutomationBlueprintFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAutomationBlueprintFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAutomationBlueprintFunctionLibrary, 109465080);
	template<> FUNCTIONALTESTING_API UClass* StaticClass<UAutomationBlueprintFunctionLibrary>()
	{
		return UAutomationBlueprintFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAutomationBlueprintFunctionLibrary(Z_Construct_UClass_UAutomationBlueprintFunctionLibrary, &UAutomationBlueprintFunctionLibrary::StaticClass, TEXT("/Script/FunctionalTesting"), TEXT("UAutomationBlueprintFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAutomationBlueprintFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
