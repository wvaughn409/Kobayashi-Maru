// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/BehaviorTree/BlackboardComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlackboardComponent() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardKeyType_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardData_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBrainComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBlackboardComponent::execClearValue)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_KeyName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearValue(Z_Param_Out_KeyName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlackboardComponent::execGetRotationFromEntry)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_KeyName);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_ResultRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetRotationFromEntry(Z_Param_Out_KeyName,Z_Param_Out_ResultRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlackboardComponent::execGetLocationFromEntry)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_KeyName);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ResultLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetLocationFromEntry(Z_Param_Out_KeyName,Z_Param_Out_ResultLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlackboardComponent::execIsVectorValueSet)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_KeyName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsVectorValueSet(Z_Param_Out_KeyName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlackboardComponent::execSetValueAsRotator)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_KeyName);
		P_GET_STRUCT(FRotator,Z_Param_VectorValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetValueAsRotator(Z_Param_Out_KeyName,Z_Param_VectorValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlackboardComponent::execSetValueAsVector)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_KeyName);
		P_GET_STRUCT(FVector,Z_Param_VectorValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetValueAsVector(Z_Param_Out_KeyName,Z_Param_VectorValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlackboardComponent::execSetValueAsName)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_KeyName);
		P_GET_PROPERTY(FNameProperty,Z_Param_NameValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetValueAsName(Z_Param_Out_KeyName,Z_Param_NameValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlackboardComponent::execSetValueAsString)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_KeyName);
		P_GET_PROPERTY(FStrProperty,Z_Param_StringValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetValueAsString(Z_Param_Out_KeyName,Z_Param_StringValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlackboardComponent::execSetValueAsBool)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_KeyName);
		P_GET_UBOOL(Z_Param_BoolValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetValueAsBool(Z_Param_Out_KeyName,Z_Param_BoolValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlackboardComponent::execSetValueAsFloat)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_KeyName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FloatValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetValueAsFloat(Z_Param_Out_KeyName,Z_Param_FloatValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlackboardComponent::execSetValueAsInt)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_KeyName);
		P_GET_PROPERTY(FIntProperty,Z_Param_IntValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetValueAsInt(Z_Param_Out_KeyName,Z_Param_IntValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlackboardComponent::execSetValueAsEnum)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_KeyName);
		P_GET_PROPERTY(FByteProperty,Z_Param_EnumValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetValueAsEnum(Z_Param_Out_KeyName,Z_Param_EnumValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlackboardComponent::execSetValueAsClass)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_KeyName);
		P_GET_OBJECT(UClass,Z_Param_ClassValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetValueAsClass(Z_Param_Out_KeyName,Z_Param_ClassValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlackboardComponent::execSetValueAsObject)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_KeyName);
		P_GET_OBJECT(UObject,Z_Param_ObjectValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetValueAsObject(Z_Param_Out_KeyName,Z_Param_ObjectValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlackboardComponent::execGetValueAsRotator)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_KeyName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->GetValueAsRotator(Z_Param_Out_KeyName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlackboardComponent::execGetValueAsVector)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_KeyName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetValueAsVector(Z_Param_Out_KeyName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlackboardComponent::execGetValueAsName)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_KeyName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetValueAsName(Z_Param_Out_KeyName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlackboardComponent::execGetValueAsString)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_KeyName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetValueAsString(Z_Param_Out_KeyName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlackboardComponent::execGetValueAsBool)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_KeyName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetValueAsBool(Z_Param_Out_KeyName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlackboardComponent::execGetValueAsFloat)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_KeyName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetValueAsFloat(Z_Param_Out_KeyName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlackboardComponent::execGetValueAsInt)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_KeyName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetValueAsInt(Z_Param_Out_KeyName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlackboardComponent::execGetValueAsEnum)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_KeyName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=P_THIS->GetValueAsEnum(Z_Param_Out_KeyName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlackboardComponent::execGetValueAsClass)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_KeyName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UClass**)Z_Param__Result=P_THIS->GetValueAsClass(Z_Param_Out_KeyName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlackboardComponent::execGetValueAsObject)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_KeyName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetValueAsObject(Z_Param_Out_KeyName);
		P_NATIVE_END;
	}
	void UBlackboardComponent::StaticRegisterNativesUBlackboardComponent()
	{
		UClass* Class = UBlackboardComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearValue", &UBlackboardComponent::execClearValue },
			{ "GetLocationFromEntry", &UBlackboardComponent::execGetLocationFromEntry },
			{ "GetRotationFromEntry", &UBlackboardComponent::execGetRotationFromEntry },
			{ "GetValueAsBool", &UBlackboardComponent::execGetValueAsBool },
			{ "GetValueAsClass", &UBlackboardComponent::execGetValueAsClass },
			{ "GetValueAsEnum", &UBlackboardComponent::execGetValueAsEnum },
			{ "GetValueAsFloat", &UBlackboardComponent::execGetValueAsFloat },
			{ "GetValueAsInt", &UBlackboardComponent::execGetValueAsInt },
			{ "GetValueAsName", &UBlackboardComponent::execGetValueAsName },
			{ "GetValueAsObject", &UBlackboardComponent::execGetValueAsObject },
			{ "GetValueAsRotator", &UBlackboardComponent::execGetValueAsRotator },
			{ "GetValueAsString", &UBlackboardComponent::execGetValueAsString },
			{ "GetValueAsVector", &UBlackboardComponent::execGetValueAsVector },
			{ "IsVectorValueSet", &UBlackboardComponent::execIsVectorValueSet },
			{ "SetValueAsBool", &UBlackboardComponent::execSetValueAsBool },
			{ "SetValueAsClass", &UBlackboardComponent::execSetValueAsClass },
			{ "SetValueAsEnum", &UBlackboardComponent::execSetValueAsEnum },
			{ "SetValueAsFloat", &UBlackboardComponent::execSetValueAsFloat },
			{ "SetValueAsInt", &UBlackboardComponent::execSetValueAsInt },
			{ "SetValueAsName", &UBlackboardComponent::execSetValueAsName },
			{ "SetValueAsObject", &UBlackboardComponent::execSetValueAsObject },
			{ "SetValueAsRotator", &UBlackboardComponent::execSetValueAsRotator },
			{ "SetValueAsString", &UBlackboardComponent::execSetValueAsString },
			{ "SetValueAsVector", &UBlackboardComponent::execSetValueAsVector },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBlackboardComponent_ClearValue_Statics
	{
		struct BlackboardComponent_eventClearValue_Parms
		{
			FName KeyName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_ClearValue_Statics::NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_ClearValue_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlackboardComponent_eventClearValue_Parms, KeyName), METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_ClearValue_Statics::NewProp_KeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_ClearValue_Statics::NewProp_KeyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_ClearValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_ClearValue_Statics::NewProp_KeyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_ClearValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_ClearValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, nullptr, "ClearValue", nullptr, nullptr, sizeof(BlackboardComponent_eventClearValue_Parms), Z_Construct_UFunction_UBlackboardComponent_ClearValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_ClearValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_ClearValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_ClearValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlackboardComponent_ClearValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_ClearValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlackboardComponent_GetLocationFromEntry_Statics
	{
		struct BlackboardComponent_eventGetLocationFromEntry_Parms
		{
			FName KeyName;
			FVector ResultLocation;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResultLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBlackboardComponent_GetLocationFromEntry_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlackboardComponent_eventGetLocationFromEntry_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlackboardComponent_GetLocationFromEntry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlackboardComponent_eventGetLocationFromEntry_Parms), &Z_Construct_UFunction_UBlackboardComponent_GetLocationFromEntry_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlackboardComponent_GetLocationFromEntry_Statics::NewProp_ResultLocation = { "ResultLocation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlackboardComponent_eventGetLocationFromEntry_Parms, ResultLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_GetLocationFromEntry_Statics::NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_GetLocationFromEntry_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlackboardComponent_eventGetLocationFromEntry_Parms, KeyName), METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_GetLocationFromEntry_Statics::NewProp_KeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetLocationFromEntry_Statics::NewProp_KeyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_GetLocationFromEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetLocationFromEntry_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetLocationFromEntry_Statics::NewProp_ResultLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetLocationFromEntry_Statics::NewProp_KeyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_GetLocationFromEntry_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "Comment", "/** return false if call failed (most probably no such entry in BB) */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
		{ "ToolTip", "return false if call failed (most probably no such entry in BB)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_GetLocationFromEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, nullptr, "GetLocationFromEntry", nullptr, nullptr, sizeof(BlackboardComponent_eventGetLocationFromEntry_Parms), Z_Construct_UFunction_UBlackboardComponent_GetLocationFromEntry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetLocationFromEntry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_GetLocationFromEntry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetLocationFromEntry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlackboardComponent_GetLocationFromEntry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_GetLocationFromEntry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlackboardComponent_GetRotationFromEntry_Statics
	{
		struct BlackboardComponent_eventGetRotationFromEntry_Parms
		{
			FName KeyName;
			FRotator ResultRotation;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResultRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBlackboardComponent_GetRotationFromEntry_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlackboardComponent_eventGetRotationFromEntry_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlackboardComponent_GetRotationFromEntry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlackboardComponent_eventGetRotationFromEntry_Parms), &Z_Construct_UFunction_UBlackboardComponent_GetRotationFromEntry_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlackboardComponent_GetRotationFromEntry_Statics::NewProp_ResultRotation = { "ResultRotation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlackboardComponent_eventGetRotationFromEntry_Parms, ResultRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_GetRotationFromEntry_Statics::NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_GetRotationFromEntry_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlackboardComponent_eventGetRotationFromEntry_Parms, KeyName), METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_GetRotationFromEntry_Statics::NewProp_KeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetRotationFromEntry_Statics::NewProp_KeyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_GetRotationFromEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetRotationFromEntry_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetRotationFromEntry_Statics::NewProp_ResultRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetRotationFromEntry_Statics::NewProp_KeyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_GetRotationFromEntry_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "Comment", "/** return false if call failed (most probably no such entry in BB) */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
		{ "ToolTip", "return false if call failed (most probably no such entry in BB)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_GetRotationFromEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, nullptr, "GetRotationFromEntry", nullptr, nullptr, sizeof(BlackboardComponent_eventGetRotationFromEntry_Parms), Z_Construct_UFunction_UBlackboardComponent_GetRotationFromEntry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetRotationFromEntry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_GetRotationFromEntry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetRotationFromEntry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlackboardComponent_GetRotationFromEntry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_GetRotationFromEntry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlackboardComponent_GetValueAsBool_Statics
	{
		struct BlackboardComponent_eventGetValueAsBool_Parms
		{
			FName KeyName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBlackboardComponent_GetValueAsBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlackboardComponent_eventGetValueAsBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlackboardComponent_eventGetValueAsBool_Parms), &Z_Construct_UFunction_UBlackboardComponent_GetValueAsBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_GetValueAsBool_Statics::NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsBool_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsBool_Parms, KeyName), METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_GetValueAsBool_Statics::NewProp_KeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsBool_Statics::NewProp_KeyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_GetValueAsBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetValueAsBool_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetValueAsBool_Statics::NewProp_KeyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_GetValueAsBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, nullptr, "GetValueAsBool", nullptr, nullptr, sizeof(BlackboardComponent_eventGetValueAsBool_Parms), Z_Construct_UFunction_UBlackboardComponent_GetValueAsBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_GetValueAsBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlackboardComponent_GetValueAsBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_GetValueAsBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlackboardComponent_GetValueAsClass_Statics
	{
		struct BlackboardComponent_eventGetValueAsClass_Parms
		{
			FName KeyName;
			UClass* ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsClass_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_GetValueAsClass_Statics::NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsClass_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsClass_Parms, KeyName), METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_GetValueAsClass_Statics::NewProp_KeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsClass_Statics::NewProp_KeyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_GetValueAsClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetValueAsClass_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetValueAsClass_Statics::NewProp_KeyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_GetValueAsClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, nullptr, "GetValueAsClass", nullptr, nullptr, sizeof(BlackboardComponent_eventGetValueAsClass_Parms), Z_Construct_UFunction_UBlackboardComponent_GetValueAsClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_GetValueAsClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlackboardComponent_GetValueAsClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_GetValueAsClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlackboardComponent_GetValueAsEnum_Statics
	{
		struct BlackboardComponent_eventGetValueAsEnum_Parms
		{
			FName KeyName;
			uint8 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsEnum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsEnum_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_GetValueAsEnum_Statics::NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsEnum_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsEnum_Parms, KeyName), METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_GetValueAsEnum_Statics::NewProp_KeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsEnum_Statics::NewProp_KeyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_GetValueAsEnum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetValueAsEnum_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetValueAsEnum_Statics::NewProp_KeyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_GetValueAsEnum_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsEnum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, nullptr, "GetValueAsEnum", nullptr, nullptr, sizeof(BlackboardComponent_eventGetValueAsEnum_Parms), Z_Construct_UFunction_UBlackboardComponent_GetValueAsEnum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsEnum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_GetValueAsEnum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsEnum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlackboardComponent_GetValueAsEnum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_GetValueAsEnum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlackboardComponent_GetValueAsFloat_Statics
	{
		struct BlackboardComponent_eventGetValueAsFloat_Parms
		{
			FName KeyName;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_GetValueAsFloat_Statics::NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsFloat_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsFloat_Parms, KeyName), METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_GetValueAsFloat_Statics::NewProp_KeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsFloat_Statics::NewProp_KeyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_GetValueAsFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetValueAsFloat_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetValueAsFloat_Statics::NewProp_KeyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_GetValueAsFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, nullptr, "GetValueAsFloat", nullptr, nullptr, sizeof(BlackboardComponent_eventGetValueAsFloat_Parms), Z_Construct_UFunction_UBlackboardComponent_GetValueAsFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_GetValueAsFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlackboardComponent_GetValueAsFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_GetValueAsFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlackboardComponent_GetValueAsInt_Statics
	{
		struct BlackboardComponent_eventGetValueAsInt_Parms
		{
			FName KeyName;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsInt_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_GetValueAsInt_Statics::NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsInt_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsInt_Parms, KeyName), METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_GetValueAsInt_Statics::NewProp_KeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsInt_Statics::NewProp_KeyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_GetValueAsInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetValueAsInt_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetValueAsInt_Statics::NewProp_KeyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_GetValueAsInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, nullptr, "GetValueAsInt", nullptr, nullptr, sizeof(BlackboardComponent_eventGetValueAsInt_Parms), Z_Construct_UFunction_UBlackboardComponent_GetValueAsInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_GetValueAsInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlackboardComponent_GetValueAsInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_GetValueAsInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlackboardComponent_GetValueAsName_Statics
	{
		struct BlackboardComponent_eventGetValueAsName_Parms
		{
			FName KeyName;
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_GetValueAsName_Statics::NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsName_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsName_Parms, KeyName), METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_GetValueAsName_Statics::NewProp_KeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsName_Statics::NewProp_KeyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_GetValueAsName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetValueAsName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetValueAsName_Statics::NewProp_KeyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_GetValueAsName_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, nullptr, "GetValueAsName", nullptr, nullptr, sizeof(BlackboardComponent_eventGetValueAsName_Parms), Z_Construct_UFunction_UBlackboardComponent_GetValueAsName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_GetValueAsName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlackboardComponent_GetValueAsName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_GetValueAsName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlackboardComponent_GetValueAsObject_Statics
	{
		struct BlackboardComponent_eventGetValueAsObject_Parms
		{
			FName KeyName;
			UObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsObject_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_GetValueAsObject_Statics::NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsObject_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsObject_Parms, KeyName), METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_GetValueAsObject_Statics::NewProp_KeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsObject_Statics::NewProp_KeyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_GetValueAsObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetValueAsObject_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetValueAsObject_Statics::NewProp_KeyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_GetValueAsObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, nullptr, "GetValueAsObject", nullptr, nullptr, sizeof(BlackboardComponent_eventGetValueAsObject_Parms), Z_Construct_UFunction_UBlackboardComponent_GetValueAsObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_GetValueAsObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlackboardComponent_GetValueAsObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_GetValueAsObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlackboardComponent_GetValueAsRotator_Statics
	{
		struct BlackboardComponent_eventGetValueAsRotator_Parms
		{
			FName KeyName;
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsRotator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsRotator_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_GetValueAsRotator_Statics::NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsRotator_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsRotator_Parms, KeyName), METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_GetValueAsRotator_Statics::NewProp_KeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsRotator_Statics::NewProp_KeyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_GetValueAsRotator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetValueAsRotator_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetValueAsRotator_Statics::NewProp_KeyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_GetValueAsRotator_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, nullptr, "GetValueAsRotator", nullptr, nullptr, sizeof(BlackboardComponent_eventGetValueAsRotator_Parms), Z_Construct_UFunction_UBlackboardComponent_GetValueAsRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsRotator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_GetValueAsRotator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsRotator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlackboardComponent_GetValueAsRotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_GetValueAsRotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlackboardComponent_GetValueAsString_Statics
	{
		struct BlackboardComponent_eventGetValueAsString_Parms
		{
			FName KeyName;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_GetValueAsString_Statics::NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsString_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsString_Parms, KeyName), METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_GetValueAsString_Statics::NewProp_KeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsString_Statics::NewProp_KeyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_GetValueAsString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetValueAsString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetValueAsString_Statics::NewProp_KeyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_GetValueAsString_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, nullptr, "GetValueAsString", nullptr, nullptr, sizeof(BlackboardComponent_eventGetValueAsString_Parms), Z_Construct_UFunction_UBlackboardComponent_GetValueAsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_GetValueAsString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlackboardComponent_GetValueAsString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_GetValueAsString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlackboardComponent_GetValueAsVector_Statics
	{
		struct BlackboardComponent_eventGetValueAsVector_Parms
		{
			FName KeyName;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_GetValueAsVector_Statics::NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsVector_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsVector_Parms, KeyName), METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_GetValueAsVector_Statics::NewProp_KeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsVector_Statics::NewProp_KeyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_GetValueAsVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetValueAsVector_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetValueAsVector_Statics::NewProp_KeyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_GetValueAsVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, nullptr, "GetValueAsVector", nullptr, nullptr, sizeof(BlackboardComponent_eventGetValueAsVector_Parms), Z_Construct_UFunction_UBlackboardComponent_GetValueAsVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_GetValueAsVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlackboardComponent_GetValueAsVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_GetValueAsVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlackboardComponent_IsVectorValueSet_Statics
	{
		struct BlackboardComponent_eventIsVectorValueSet_Parms
		{
			FName KeyName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBlackboardComponent_IsVectorValueSet_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlackboardComponent_eventIsVectorValueSet_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlackboardComponent_IsVectorValueSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlackboardComponent_eventIsVectorValueSet_Parms), &Z_Construct_UFunction_UBlackboardComponent_IsVectorValueSet_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_IsVectorValueSet_Statics::NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_IsVectorValueSet_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlackboardComponent_eventIsVectorValueSet_Parms, KeyName), METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_IsVectorValueSet_Statics::NewProp_KeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_IsVectorValueSet_Statics::NewProp_KeyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_IsVectorValueSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_IsVectorValueSet_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_IsVectorValueSet_Statics::NewProp_KeyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_IsVectorValueSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
		{ "Tooltip", "If the vector value has been set (and not cleared), this function returns true (indicating that the value should be valid).  If it's not set, the vector value is invalid and this function will return false.  (Also returns false if the key specified does not hold a vector.)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_IsVectorValueSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, nullptr, "IsVectorValueSet", nullptr, nullptr, sizeof(BlackboardComponent_eventIsVectorValueSet_Parms), Z_Construct_UFunction_UBlackboardComponent_IsVectorValueSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_IsVectorValueSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_IsVectorValueSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_IsVectorValueSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlackboardComponent_IsVectorValueSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_IsVectorValueSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlackboardComponent_SetValueAsBool_Statics
	{
		struct BlackboardComponent_eventSetValueAsBool_Parms
		{
			FName KeyName;
			bool BoolValue;
		};
		static void NewProp_BoolValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BoolValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBlackboardComponent_SetValueAsBool_Statics::NewProp_BoolValue_SetBit(void* Obj)
	{
		((BlackboardComponent_eventSetValueAsBool_Parms*)Obj)->BoolValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsBool_Statics::NewProp_BoolValue = { "BoolValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlackboardComponent_eventSetValueAsBool_Parms), &Z_Construct_UFunction_UBlackboardComponent_SetValueAsBool_Statics::NewProp_BoolValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_SetValueAsBool_Statics::NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsBool_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsBool_Parms, KeyName), METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_SetValueAsBool_Statics::NewProp_KeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsBool_Statics::NewProp_KeyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_SetValueAsBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_SetValueAsBool_Statics::NewProp_BoolValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_SetValueAsBool_Statics::NewProp_KeyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_SetValueAsBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, nullptr, "SetValueAsBool", nullptr, nullptr, sizeof(BlackboardComponent_eventSetValueAsBool_Parms), Z_Construct_UFunction_UBlackboardComponent_SetValueAsBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_SetValueAsBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlackboardComponent_SetValueAsBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_SetValueAsBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlackboardComponent_SetValueAsClass_Statics
	{
		struct BlackboardComponent_eventSetValueAsClass_Parms
		{
			FName KeyName;
			UClass* ClassValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ClassValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsClass_Statics::NewProp_ClassValue = { "ClassValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsClass_Parms, ClassValue), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_SetValueAsClass_Statics::NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsClass_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsClass_Parms, KeyName), METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_SetValueAsClass_Statics::NewProp_KeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsClass_Statics::NewProp_KeyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_SetValueAsClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_SetValueAsClass_Statics::NewProp_ClassValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_SetValueAsClass_Statics::NewProp_KeyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_SetValueAsClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, nullptr, "SetValueAsClass", nullptr, nullptr, sizeof(BlackboardComponent_eventSetValueAsClass_Parms), Z_Construct_UFunction_UBlackboardComponent_SetValueAsClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_SetValueAsClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlackboardComponent_SetValueAsClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_SetValueAsClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlackboardComponent_SetValueAsEnum_Statics
	{
		struct BlackboardComponent_eventSetValueAsEnum_Parms
		{
			FName KeyName;
			uint8 EnumValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EnumValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsEnum_Statics::NewProp_EnumValue = { "EnumValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsEnum_Parms, EnumValue), nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_SetValueAsEnum_Statics::NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsEnum_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsEnum_Parms, KeyName), METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_SetValueAsEnum_Statics::NewProp_KeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsEnum_Statics::NewProp_KeyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_SetValueAsEnum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_SetValueAsEnum_Statics::NewProp_EnumValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_SetValueAsEnum_Statics::NewProp_KeyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_SetValueAsEnum_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsEnum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, nullptr, "SetValueAsEnum", nullptr, nullptr, sizeof(BlackboardComponent_eventSetValueAsEnum_Parms), Z_Construct_UFunction_UBlackboardComponent_SetValueAsEnum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsEnum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_SetValueAsEnum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsEnum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlackboardComponent_SetValueAsEnum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_SetValueAsEnum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlackboardComponent_SetValueAsFloat_Statics
	{
		struct BlackboardComponent_eventSetValueAsFloat_Parms
		{
			FName KeyName;
			float FloatValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloatValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsFloat_Statics::NewProp_FloatValue = { "FloatValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsFloat_Parms, FloatValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_SetValueAsFloat_Statics::NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsFloat_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsFloat_Parms, KeyName), METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_SetValueAsFloat_Statics::NewProp_KeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsFloat_Statics::NewProp_KeyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_SetValueAsFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_SetValueAsFloat_Statics::NewProp_FloatValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_SetValueAsFloat_Statics::NewProp_KeyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_SetValueAsFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, nullptr, "SetValueAsFloat", nullptr, nullptr, sizeof(BlackboardComponent_eventSetValueAsFloat_Parms), Z_Construct_UFunction_UBlackboardComponent_SetValueAsFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_SetValueAsFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlackboardComponent_SetValueAsFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_SetValueAsFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlackboardComponent_SetValueAsInt_Statics
	{
		struct BlackboardComponent_eventSetValueAsInt_Parms
		{
			FName KeyName;
			int32 IntValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IntValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsInt_Statics::NewProp_IntValue = { "IntValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsInt_Parms, IntValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_SetValueAsInt_Statics::NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsInt_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsInt_Parms, KeyName), METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_SetValueAsInt_Statics::NewProp_KeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsInt_Statics::NewProp_KeyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_SetValueAsInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_SetValueAsInt_Statics::NewProp_IntValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_SetValueAsInt_Statics::NewProp_KeyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_SetValueAsInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, nullptr, "SetValueAsInt", nullptr, nullptr, sizeof(BlackboardComponent_eventSetValueAsInt_Parms), Z_Construct_UFunction_UBlackboardComponent_SetValueAsInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_SetValueAsInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlackboardComponent_SetValueAsInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_SetValueAsInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlackboardComponent_SetValueAsName_Statics
	{
		struct BlackboardComponent_eventSetValueAsName_Parms
		{
			FName KeyName;
			FName NameValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NameValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsName_Statics::NewProp_NameValue = { "NameValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsName_Parms, NameValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_SetValueAsName_Statics::NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsName_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsName_Parms, KeyName), METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_SetValueAsName_Statics::NewProp_KeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsName_Statics::NewProp_KeyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_SetValueAsName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_SetValueAsName_Statics::NewProp_NameValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_SetValueAsName_Statics::NewProp_KeyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_SetValueAsName_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, nullptr, "SetValueAsName", nullptr, nullptr, sizeof(BlackboardComponent_eventSetValueAsName_Parms), Z_Construct_UFunction_UBlackboardComponent_SetValueAsName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_SetValueAsName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlackboardComponent_SetValueAsName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_SetValueAsName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlackboardComponent_SetValueAsObject_Statics
	{
		struct BlackboardComponent_eventSetValueAsObject_Parms
		{
			FName KeyName;
			UObject* ObjectValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsObject_Statics::NewProp_ObjectValue = { "ObjectValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsObject_Parms, ObjectValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_SetValueAsObject_Statics::NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsObject_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsObject_Parms, KeyName), METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_SetValueAsObject_Statics::NewProp_KeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsObject_Statics::NewProp_KeyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_SetValueAsObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_SetValueAsObject_Statics::NewProp_ObjectValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_SetValueAsObject_Statics::NewProp_KeyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_SetValueAsObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, nullptr, "SetValueAsObject", nullptr, nullptr, sizeof(BlackboardComponent_eventSetValueAsObject_Parms), Z_Construct_UFunction_UBlackboardComponent_SetValueAsObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_SetValueAsObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlackboardComponent_SetValueAsObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_SetValueAsObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlackboardComponent_SetValueAsRotator_Statics
	{
		struct BlackboardComponent_eventSetValueAsRotator_Parms
		{
			FName KeyName;
			FRotator VectorValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VectorValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsRotator_Statics::NewProp_VectorValue = { "VectorValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsRotator_Parms, VectorValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_SetValueAsRotator_Statics::NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsRotator_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsRotator_Parms, KeyName), METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_SetValueAsRotator_Statics::NewProp_KeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsRotator_Statics::NewProp_KeyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_SetValueAsRotator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_SetValueAsRotator_Statics::NewProp_VectorValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_SetValueAsRotator_Statics::NewProp_KeyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_SetValueAsRotator_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, nullptr, "SetValueAsRotator", nullptr, nullptr, sizeof(BlackboardComponent_eventSetValueAsRotator_Parms), Z_Construct_UFunction_UBlackboardComponent_SetValueAsRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsRotator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_SetValueAsRotator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsRotator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlackboardComponent_SetValueAsRotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_SetValueAsRotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlackboardComponent_SetValueAsString_Statics
	{
		struct BlackboardComponent_eventSetValueAsString_Parms
		{
			FName KeyName;
			FString StringValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsString_Statics::NewProp_StringValue = { "StringValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsString_Parms, StringValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_SetValueAsString_Statics::NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsString_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsString_Parms, KeyName), METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_SetValueAsString_Statics::NewProp_KeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsString_Statics::NewProp_KeyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_SetValueAsString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_SetValueAsString_Statics::NewProp_StringValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_SetValueAsString_Statics::NewProp_KeyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_SetValueAsString_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, nullptr, "SetValueAsString", nullptr, nullptr, sizeof(BlackboardComponent_eventSetValueAsString_Parms), Z_Construct_UFunction_UBlackboardComponent_SetValueAsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_SetValueAsString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlackboardComponent_SetValueAsString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_SetValueAsString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlackboardComponent_SetValueAsVector_Statics
	{
		struct BlackboardComponent_eventSetValueAsVector_Parms
		{
			FName KeyName;
			FVector VectorValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VectorValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsVector_Statics::NewProp_VectorValue = { "VectorValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsVector_Parms, VectorValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_SetValueAsVector_Statics::NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsVector_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsVector_Parms, KeyName), METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_SetValueAsVector_Statics::NewProp_KeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsVector_Statics::NewProp_KeyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_SetValueAsVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_SetValueAsVector_Statics::NewProp_VectorValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_SetValueAsVector_Statics::NewProp_KeyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_SetValueAsVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, nullptr, "SetValueAsVector", nullptr, nullptr, sizeof(BlackboardComponent_eventSetValueAsVector_Parms), Z_Construct_UFunction_UBlackboardComponent_SetValueAsVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_SetValueAsVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlackboardComponent_SetValueAsVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_SetValueAsVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister()
	{
		return UBlackboardComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBlackboardComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyInstances_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_KeyInstances;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KeyInstances_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlackboardAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlackboardAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultBlackboardAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultBlackboardAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrainComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BrainComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlackboardComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBlackboardComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlackboardComponent_ClearValue, "ClearValue" }, // 3251398692
		{ &Z_Construct_UFunction_UBlackboardComponent_GetLocationFromEntry, "GetLocationFromEntry" }, // 1621347804
		{ &Z_Construct_UFunction_UBlackboardComponent_GetRotationFromEntry, "GetRotationFromEntry" }, // 2187544336
		{ &Z_Construct_UFunction_UBlackboardComponent_GetValueAsBool, "GetValueAsBool" }, // 3295921535
		{ &Z_Construct_UFunction_UBlackboardComponent_GetValueAsClass, "GetValueAsClass" }, // 3922098475
		{ &Z_Construct_UFunction_UBlackboardComponent_GetValueAsEnum, "GetValueAsEnum" }, // 33074417
		{ &Z_Construct_UFunction_UBlackboardComponent_GetValueAsFloat, "GetValueAsFloat" }, // 3222065709
		{ &Z_Construct_UFunction_UBlackboardComponent_GetValueAsInt, "GetValueAsInt" }, // 693895132
		{ &Z_Construct_UFunction_UBlackboardComponent_GetValueAsName, "GetValueAsName" }, // 2110456164
		{ &Z_Construct_UFunction_UBlackboardComponent_GetValueAsObject, "GetValueAsObject" }, // 659452557
		{ &Z_Construct_UFunction_UBlackboardComponent_GetValueAsRotator, "GetValueAsRotator" }, // 1583316131
		{ &Z_Construct_UFunction_UBlackboardComponent_GetValueAsString, "GetValueAsString" }, // 57154566
		{ &Z_Construct_UFunction_UBlackboardComponent_GetValueAsVector, "GetValueAsVector" }, // 825267009
		{ &Z_Construct_UFunction_UBlackboardComponent_IsVectorValueSet, "IsVectorValueSet" }, // 1871140880
		{ &Z_Construct_UFunction_UBlackboardComponent_SetValueAsBool, "SetValueAsBool" }, // 1472793630
		{ &Z_Construct_UFunction_UBlackboardComponent_SetValueAsClass, "SetValueAsClass" }, // 1741639909
		{ &Z_Construct_UFunction_UBlackboardComponent_SetValueAsEnum, "SetValueAsEnum" }, // 1547882090
		{ &Z_Construct_UFunction_UBlackboardComponent_SetValueAsFloat, "SetValueAsFloat" }, // 443541467
		{ &Z_Construct_UFunction_UBlackboardComponent_SetValueAsInt, "SetValueAsInt" }, // 3939954382
		{ &Z_Construct_UFunction_UBlackboardComponent_SetValueAsName, "SetValueAsName" }, // 3944241838
		{ &Z_Construct_UFunction_UBlackboardComponent_SetValueAsObject, "SetValueAsObject" }, // 1082380860
		{ &Z_Construct_UFunction_UBlackboardComponent_SetValueAsRotator, "SetValueAsRotator" }, // 2929548473
		{ &Z_Construct_UFunction_UBlackboardComponent_SetValueAsString, "SetValueAsString" }, // 1707970661
		{ &Z_Construct_UFunction_UBlackboardComponent_SetValueAsVector, "SetValueAsVector" }, // 3467214047
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackboardComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AI" },
		{ "HideCategories", "Sockets Collision" },
		{ "IncludePath", "BehaviorTree/BlackboardComponent.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackboardComponent_Statics::NewProp_KeyInstances_MetaData[] = {
		{ "Comment", "/** instanced keys with custom data allocations */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
		{ "ToolTip", "instanced keys with custom data allocations" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlackboardComponent_Statics::NewProp_KeyInstances = { "KeyInstances", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlackboardComponent, KeyInstances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBlackboardComponent_Statics::NewProp_KeyInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlackboardComponent_Statics::NewProp_KeyInstances_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlackboardComponent_Statics::NewProp_KeyInstances_Inner = { "KeyInstances", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBlackboardKeyType_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackboardComponent_Statics::NewProp_BlackboardAsset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlackboardComponent_Statics::NewProp_BlackboardAsset = { "BlackboardAsset", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlackboardComponent, BlackboardAsset), Z_Construct_UClass_UBlackboardData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBlackboardComponent_Statics::NewProp_BlackboardAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlackboardComponent_Statics::NewProp_BlackboardAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackboardComponent_Statics::NewProp_DefaultBlackboardAsset_MetaData[] = {
		{ "Category", "AI" },
		{ "Comment", "/** data asset defining entries. Will be used as part of InitializeComponent \n\x09 *\x09""call provided BlackboardAsset hasn't been already set (via a InitializeBlackboard \n\x09 *\x09""call). */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
		{ "ToolTip", "data asset defining entries. Will be used as part of InitializeComponent\n    call provided BlackboardAsset hasn't been already set (via a InitializeBlackboard\n    call)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlackboardComponent_Statics::NewProp_DefaultBlackboardAsset = { "DefaultBlackboardAsset", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlackboardComponent, DefaultBlackboardAsset), Z_Construct_UClass_UBlackboardData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBlackboardComponent_Statics::NewProp_DefaultBlackboardAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlackboardComponent_Statics::NewProp_DefaultBlackboardAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackboardComponent_Statics::NewProp_BrainComp_MetaData[] = {
		{ "Comment", "/** cached behavior tree component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
		{ "ToolTip", "cached behavior tree component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlackboardComponent_Statics::NewProp_BrainComp = { "BrainComp", nullptr, (EPropertyFlags)0x0020080000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlackboardComponent, BrainComp), Z_Construct_UClass_UBrainComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBlackboardComponent_Statics::NewProp_BrainComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlackboardComponent_Statics::NewProp_BrainComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlackboardComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackboardComponent_Statics::NewProp_KeyInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackboardComponent_Statics::NewProp_KeyInstances_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackboardComponent_Statics::NewProp_BlackboardAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackboardComponent_Statics::NewProp_DefaultBlackboardAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackboardComponent_Statics::NewProp_BrainComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlackboardComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlackboardComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlackboardComponent_Statics::ClassParams = {
		&UBlackboardComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBlackboardComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBlackboardComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBlackboardComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlackboardComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlackboardComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlackboardComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlackboardComponent, 1304742747);
	template<> AIMODULE_API UClass* StaticClass<UBlackboardComponent>()
	{
		return UBlackboardComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlackboardComponent(Z_Construct_UClass_UBlackboardComponent, &UBlackboardComponent::StaticClass, TEXT("/Script/AIModule"), TEXT("UBlackboardComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlackboardComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
