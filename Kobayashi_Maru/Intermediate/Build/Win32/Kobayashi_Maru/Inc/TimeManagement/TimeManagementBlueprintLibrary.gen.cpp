// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TimeManagement/Public/TimeManagementBlueprintLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimeManagementBlueprintLibrary() {}
// Cross Module References
	TIMEMANAGEMENT_API UClass* Z_Construct_UClass_UTimeManagementBlueprintLibrary_NoRegister();
	TIMEMANAGEMENT_API UClass* Z_Construct_UClass_UTimeManagementBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_TimeManagement();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQualifiedFrameTime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimecode();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameTime();
// End Cross Module References
	DEFINE_FUNCTION(UTimeManagementBlueprintLibrary::execGetTimecodeFrameRate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFrameRate*)Z_Param__Result=UTimeManagementBlueprintLibrary::GetTimecodeFrameRate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimeManagementBlueprintLibrary::execGetTimecode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTimecode*)Z_Param__Result=UTimeManagementBlueprintLibrary::GetTimecode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimeManagementBlueprintLibrary::execConv_FrameNumberToInteger)
	{
		P_GET_STRUCT_REF(FFrameNumber,Z_Param_Out_InFrameNumber);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UTimeManagementBlueprintLibrary::Conv_FrameNumberToInteger(Z_Param_Out_InFrameNumber);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimeManagementBlueprintLibrary::execDivide_FrameNumberInteger)
	{
		P_GET_STRUCT(FFrameNumber,Z_Param_A);
		P_GET_PROPERTY(FIntProperty,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFrameNumber*)Z_Param__Result=UTimeManagementBlueprintLibrary::Divide_FrameNumberInteger(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimeManagementBlueprintLibrary::execMultiply_FrameNumberInteger)
	{
		P_GET_STRUCT(FFrameNumber,Z_Param_A);
		P_GET_PROPERTY(FIntProperty,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFrameNumber*)Z_Param__Result=UTimeManagementBlueprintLibrary::Multiply_FrameNumberInteger(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimeManagementBlueprintLibrary::execSubtract_FrameNumberInteger)
	{
		P_GET_STRUCT(FFrameNumber,Z_Param_A);
		P_GET_PROPERTY(FIntProperty,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFrameNumber*)Z_Param__Result=UTimeManagementBlueprintLibrary::Subtract_FrameNumberInteger(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimeManagementBlueprintLibrary::execAdd_FrameNumberInteger)
	{
		P_GET_STRUCT(FFrameNumber,Z_Param_A);
		P_GET_PROPERTY(FIntProperty,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFrameNumber*)Z_Param__Result=UTimeManagementBlueprintLibrary::Add_FrameNumberInteger(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimeManagementBlueprintLibrary::execSubtract_FrameNumberFrameNumber)
	{
		P_GET_STRUCT(FFrameNumber,Z_Param_A);
		P_GET_STRUCT(FFrameNumber,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFrameNumber*)Z_Param__Result=UTimeManagementBlueprintLibrary::Subtract_FrameNumberFrameNumber(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimeManagementBlueprintLibrary::execAdd_FrameNumberFrameNumber)
	{
		P_GET_STRUCT(FFrameNumber,Z_Param_A);
		P_GET_STRUCT(FFrameNumber,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFrameNumber*)Z_Param__Result=UTimeManagementBlueprintLibrary::Add_FrameNumberFrameNumber(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimeManagementBlueprintLibrary::execSnapFrameTimeToRate)
	{
		P_GET_STRUCT_REF(FFrameTime,Z_Param_Out_SourceTime);
		P_GET_STRUCT_REF(FFrameRate,Z_Param_Out_SourceRate);
		P_GET_STRUCT_REF(FFrameRate,Z_Param_Out_SnapToRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFrameTime*)Z_Param__Result=UTimeManagementBlueprintLibrary::SnapFrameTimeToRate(Z_Param_Out_SourceTime,Z_Param_Out_SourceRate,Z_Param_Out_SnapToRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimeManagementBlueprintLibrary::execTransformTime)
	{
		P_GET_STRUCT_REF(FFrameTime,Z_Param_Out_SourceTime);
		P_GET_STRUCT_REF(FFrameRate,Z_Param_Out_SourceRate);
		P_GET_STRUCT_REF(FFrameRate,Z_Param_Out_DestinationRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFrameTime*)Z_Param__Result=UTimeManagementBlueprintLibrary::TransformTime(Z_Param_Out_SourceTime,Z_Param_Out_SourceRate,Z_Param_Out_DestinationRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimeManagementBlueprintLibrary::execIsValid_MultipleOf)
	{
		P_GET_STRUCT_REF(FFrameRate,Z_Param_Out_InFrameRate);
		P_GET_STRUCT_REF(FFrameRate,Z_Param_Out_OtherFramerate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTimeManagementBlueprintLibrary::IsValid_MultipleOf(Z_Param_Out_InFrameRate,Z_Param_Out_OtherFramerate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimeManagementBlueprintLibrary::execIsValid_Framerate)
	{
		P_GET_STRUCT_REF(FFrameRate,Z_Param_Out_InFrameRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTimeManagementBlueprintLibrary::IsValid_Framerate(Z_Param_Out_InFrameRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimeManagementBlueprintLibrary::execConv_TimecodeToString)
	{
		P_GET_STRUCT_REF(FTimecode,Z_Param_Out_InTimecode);
		P_GET_UBOOL(Z_Param_bForceSignDisplay);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UTimeManagementBlueprintLibrary::Conv_TimecodeToString(Z_Param_Out_InTimecode,Z_Param_bForceSignDisplay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimeManagementBlueprintLibrary::execMultiply_SecondsFrameRate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeInSeconds);
		P_GET_STRUCT_REF(FFrameRate,Z_Param_Out_FrameRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFrameTime*)Z_Param__Result=UTimeManagementBlueprintLibrary::Multiply_SecondsFrameRate(Z_Param_TimeInSeconds,Z_Param_Out_FrameRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimeManagementBlueprintLibrary::execConv_QualifiedFrameTimeToSeconds)
	{
		P_GET_STRUCT_REF(FQualifiedFrameTime,Z_Param_Out_InFrameTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UTimeManagementBlueprintLibrary::Conv_QualifiedFrameTimeToSeconds(Z_Param_Out_InFrameTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimeManagementBlueprintLibrary::execConv_FrameRateToSeconds)
	{
		P_GET_STRUCT_REF(FFrameRate,Z_Param_Out_InFrameRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UTimeManagementBlueprintLibrary::Conv_FrameRateToSeconds(Z_Param_Out_InFrameRate);
		P_NATIVE_END;
	}
	void UTimeManagementBlueprintLibrary::StaticRegisterNativesUTimeManagementBlueprintLibrary()
	{
		UClass* Class = UTimeManagementBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Add_FrameNumberFrameNumber", &UTimeManagementBlueprintLibrary::execAdd_FrameNumberFrameNumber },
			{ "Add_FrameNumberInteger", &UTimeManagementBlueprintLibrary::execAdd_FrameNumberInteger },
			{ "Conv_FrameNumberToInteger", &UTimeManagementBlueprintLibrary::execConv_FrameNumberToInteger },
			{ "Conv_FrameRateToSeconds", &UTimeManagementBlueprintLibrary::execConv_FrameRateToSeconds },
			{ "Conv_QualifiedFrameTimeToSeconds", &UTimeManagementBlueprintLibrary::execConv_QualifiedFrameTimeToSeconds },
			{ "Conv_TimecodeToString", &UTimeManagementBlueprintLibrary::execConv_TimecodeToString },
			{ "Divide_FrameNumberInteger", &UTimeManagementBlueprintLibrary::execDivide_FrameNumberInteger },
			{ "GetTimecode", &UTimeManagementBlueprintLibrary::execGetTimecode },
			{ "GetTimecodeFrameRate", &UTimeManagementBlueprintLibrary::execGetTimecodeFrameRate },
			{ "IsValid_Framerate", &UTimeManagementBlueprintLibrary::execIsValid_Framerate },
			{ "IsValid_MultipleOf", &UTimeManagementBlueprintLibrary::execIsValid_MultipleOf },
			{ "Multiply_FrameNumberInteger", &UTimeManagementBlueprintLibrary::execMultiply_FrameNumberInteger },
			{ "Multiply_SecondsFrameRate", &UTimeManagementBlueprintLibrary::execMultiply_SecondsFrameRate },
			{ "SnapFrameTimeToRate", &UTimeManagementBlueprintLibrary::execSnapFrameTimeToRate },
			{ "Subtract_FrameNumberFrameNumber", &UTimeManagementBlueprintLibrary::execSubtract_FrameNumberFrameNumber },
			{ "Subtract_FrameNumberInteger", &UTimeManagementBlueprintLibrary::execSubtract_FrameNumberInteger },
			{ "TransformTime", &UTimeManagementBlueprintLibrary::execTransformTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Add_FrameNumberFrameNumber_Statics
	{
		struct TimeManagementBlueprintLibrary_eventAdd_FrameNumberFrameNumber_Parms
		{
			FFrameNumber A;
			FFrameNumber B;
			FFrameNumber ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_B;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Add_FrameNumberFrameNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventAdd_FrameNumberFrameNumber_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Add_FrameNumberFrameNumber_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventAdd_FrameNumberFrameNumber_Parms, B), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Add_FrameNumberFrameNumber_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventAdd_FrameNumberFrameNumber_Parms, A), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Add_FrameNumberFrameNumber_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Add_FrameNumberFrameNumber_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Add_FrameNumberFrameNumber_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Add_FrameNumberFrameNumber_Statics::NewProp_A,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Add_FrameNumberFrameNumber_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Time Management" },
		{ "Comment", "/** Addition (FrameNumber A + FrameNumber B) */" },
		{ "CommutativeAssociativeBinaryOperator", "true" },
		{ "CompactNodeTitle", "+" },
		{ "DisplayName", "FrameNumber + FrameNumber" },
		{ "Keywords", "+ add plus" },
		{ "ModuleRelativePath", "Public/TimeManagementBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ScriptMethodSelfReturn", "" },
		{ "ScriptOperator", "+;+=" },
		{ "ToolTip", "Addition (FrameNumber A + FrameNumber B)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Add_FrameNumberFrameNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimeManagementBlueprintLibrary, nullptr, "Add_FrameNumberFrameNumber", nullptr, nullptr, sizeof(TimeManagementBlueprintLibrary_eventAdd_FrameNumberFrameNumber_Parms), Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Add_FrameNumberFrameNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Add_FrameNumberFrameNumber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Add_FrameNumberFrameNumber_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Add_FrameNumberFrameNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Add_FrameNumberFrameNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Add_FrameNumberFrameNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Add_FrameNumberInteger_Statics
	{
		struct TimeManagementBlueprintLibrary_eventAdd_FrameNumberInteger_Parms
		{
			FFrameNumber A;
			int32 B;
			FFrameNumber ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_B;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Add_FrameNumberInteger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventAdd_FrameNumberInteger_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Add_FrameNumberInteger_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventAdd_FrameNumberInteger_Parms, B), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Add_FrameNumberInteger_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventAdd_FrameNumberInteger_Parms, A), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Add_FrameNumberInteger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Add_FrameNumberInteger_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Add_FrameNumberInteger_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Add_FrameNumberInteger_Statics::NewProp_A,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Add_FrameNumberInteger_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Time Management" },
		{ "Comment", "/** Addition (FrameNumber A + int B) */" },
		{ "CompactNodeTitle", "+" },
		{ "DisplayName", "FrameNumber + Int" },
		{ "Keywords", "+ add plus" },
		{ "ModuleRelativePath", "Public/TimeManagementBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ScriptMethodSelfReturn", "" },
		{ "ScriptOperator", "+;+=" },
		{ "ToolTip", "Addition (FrameNumber A + int B)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Add_FrameNumberInteger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimeManagementBlueprintLibrary, nullptr, "Add_FrameNumberInteger", nullptr, nullptr, sizeof(TimeManagementBlueprintLibrary_eventAdd_FrameNumberInteger_Parms), Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Add_FrameNumberInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Add_FrameNumberInteger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Add_FrameNumberInteger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Add_FrameNumberInteger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Add_FrameNumberInteger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Add_FrameNumberInteger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameNumberToInteger_Statics
	{
		struct TimeManagementBlueprintLibrary_eventConv_FrameNumberToInteger_Parms
		{
			FFrameNumber InFrameNumber;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InFrameNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InFrameNumber;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameNumberToInteger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventConv_FrameNumberToInteger_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameNumberToInteger_Statics::NewProp_InFrameNumber_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameNumberToInteger_Statics::NewProp_InFrameNumber = { "InFrameNumber", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventConv_FrameNumberToInteger_Parms, InFrameNumber), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameNumberToInteger_Statics::NewProp_InFrameNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameNumberToInteger_Statics::NewProp_InFrameNumber_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameNumberToInteger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameNumberToInteger_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameNumberToInteger_Statics::NewProp_InFrameNumber,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameNumberToInteger_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|Time Management" },
		{ "Comment", "/** Converts a FrameNumber to an int32 for use in functions that take int32 frame counts for convenience. */" },
		{ "DisplayName", "FrameNumber to Integer" },
		{ "ModuleRelativePath", "Public/TimeManagementBlueprintLibrary.h" },
		{ "ScriptName", "FrameNumberToInteger" },
		{ "ToolTip", "Converts a FrameNumber to an int32 for use in functions that take int32 frame counts for convenience." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameNumberToInteger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimeManagementBlueprintLibrary, nullptr, "Conv_FrameNumberToInteger", nullptr, nullptr, sizeof(TimeManagementBlueprintLibrary_eventConv_FrameNumberToInteger_Parms), Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameNumberToInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameNumberToInteger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameNumberToInteger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameNumberToInteger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameNumberToInteger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameNumberToInteger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameRateToSeconds_Statics
	{
		struct FFrameRate
		{
			int32 Numerator;
			int32 Denominator;
		};

		struct TimeManagementBlueprintLibrary_eventConv_FrameRateToSeconds_Parms
		{
			FFrameRate InFrameRate;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InFrameRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InFrameRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameRateToSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventConv_FrameRateToSeconds_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameRateToSeconds_Statics::NewProp_InFrameRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameRateToSeconds_Statics::NewProp_InFrameRate = { "InFrameRate", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventConv_FrameRateToSeconds_Parms, InFrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameRateToSeconds_Statics::NewProp_InFrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameRateToSeconds_Statics::NewProp_InFrameRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameRateToSeconds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameRateToSeconds_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameRateToSeconds_Statics::NewProp_InFrameRate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameRateToSeconds_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|Time Management" },
		{ "Comment", "/** Converts an FrameRate to a float ie: 1/30 returns 0.0333333 */" },
		{ "DisplayName", "FrameRate to Seconds" },
		{ "ModuleRelativePath", "Public/TimeManagementBlueprintLibrary.h" },
		{ "ToolTip", "Converts an FrameRate to a float ie: 1/30 returns 0.0333333" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameRateToSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimeManagementBlueprintLibrary, nullptr, "Conv_FrameRateToSeconds", nullptr, nullptr, sizeof(TimeManagementBlueprintLibrary_eventConv_FrameRateToSeconds_Parms), Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameRateToSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameRateToSeconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameRateToSeconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameRateToSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameRateToSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameRateToSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds_Statics
	{
		struct FFrameRate
		{
			int32 Numerator;
			int32 Denominator;
		};

		struct FFrameTime
		{
			FFrameNumber FrameNumber;
			float SubFrame;
		};

		struct FQualifiedFrameTime
		{
			FFrameTime Time;
			FFrameRate Rate;
		};

		struct TimeManagementBlueprintLibrary_eventConv_QualifiedFrameTimeToSeconds_Parms
		{
			FQualifiedFrameTime InFrameTime;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InFrameTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InFrameTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventConv_QualifiedFrameTimeToSeconds_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds_Statics::NewProp_InFrameTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds_Statics::NewProp_InFrameTime = { "InFrameTime", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventConv_QualifiedFrameTimeToSeconds_Parms, InFrameTime), Z_Construct_UScriptStruct_FQualifiedFrameTime, METADATA_PARAMS(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds_Statics::NewProp_InFrameTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds_Statics::NewProp_InFrameTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds_Statics::NewProp_InFrameTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|Time Management" },
		{ "Comment", "/** Converts an QualifiedFrameTime to seconds. */" },
		{ "DisplayName", "QualifiedFrameTime to Seconds" },
		{ "ModuleRelativePath", "Public/TimeManagementBlueprintLibrary.h" },
		{ "ToolTip", "Converts an QualifiedFrameTime to seconds." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimeManagementBlueprintLibrary, nullptr, "Conv_QualifiedFrameTimeToSeconds", nullptr, nullptr, sizeof(TimeManagementBlueprintLibrary_eventConv_QualifiedFrameTimeToSeconds_Parms), Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_TimecodeToString_Statics
	{
		struct FTimecode
		{
			int32 Hours;
			int32 Minutes;
			int32 Seconds;
			int32 Frames;
			bool bDropFrameFormat;
		};

		struct TimeManagementBlueprintLibrary_eventConv_TimecodeToString_Parms
		{
			FTimecode InTimecode;
			bool bForceSignDisplay;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static void NewProp_bForceSignDisplay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceSignDisplay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTimecode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InTimecode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_TimecodeToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventConv_TimecodeToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_TimecodeToString_Statics::NewProp_bForceSignDisplay_SetBit(void* Obj)
	{
		((TimeManagementBlueprintLibrary_eventConv_TimecodeToString_Parms*)Obj)->bForceSignDisplay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_TimecodeToString_Statics::NewProp_bForceSignDisplay = { "bForceSignDisplay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TimeManagementBlueprintLibrary_eventConv_TimecodeToString_Parms), &Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_TimecodeToString_Statics::NewProp_bForceSignDisplay_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_TimecodeToString_Statics::NewProp_InTimecode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_TimecodeToString_Statics::NewProp_InTimecode = { "InTimecode", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventConv_TimecodeToString_Parms, InTimecode), Z_Construct_UScriptStruct_FTimecode, METADATA_PARAMS(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_TimecodeToString_Statics::NewProp_InTimecode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_TimecodeToString_Statics::NewProp_InTimecode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_TimecodeToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_TimecodeToString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_TimecodeToString_Statics::NewProp_bForceSignDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_TimecodeToString_Statics::NewProp_InTimecode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_TimecodeToString_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|Time Management" },
		{ "Comment", "/** Converts an Timecode to a string (hh:mm:ss:ff). If bForceSignDisplay then the number sign will always be prepended instead of just when expressing a negative time. */" },
		{ "CPP_Default_bForceSignDisplay", "false" },
		{ "DisplayName", "Timecode to String" },
		{ "ModuleRelativePath", "Public/TimeManagementBlueprintLibrary.h" },
		{ "ToolTip", "Converts an Timecode to a string (hh:mm:ss:ff). If bForceSignDisplay then the number sign will always be prepended instead of just when expressing a negative time." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_TimecodeToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimeManagementBlueprintLibrary, nullptr, "Conv_TimecodeToString", nullptr, nullptr, sizeof(TimeManagementBlueprintLibrary_eventConv_TimecodeToString_Parms), Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_TimecodeToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_TimecodeToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_TimecodeToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_TimecodeToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_TimecodeToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_TimecodeToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Divide_FrameNumberInteger_Statics
	{
		struct TimeManagementBlueprintLibrary_eventDivide_FrameNumberInteger_Parms
		{
			FFrameNumber A;
			int32 B;
			FFrameNumber ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_B;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Divide_FrameNumberInteger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventDivide_FrameNumberInteger_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Divide_FrameNumberInteger_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventDivide_FrameNumberInteger_Parms, B), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Divide_FrameNumberInteger_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventDivide_FrameNumberInteger_Parms, A), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Divide_FrameNumberInteger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Divide_FrameNumberInteger_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Divide_FrameNumberInteger_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Divide_FrameNumberInteger_Statics::NewProp_A,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Divide_FrameNumberInteger_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Time Management" },
		{ "Comment", "/** Divide (FrameNumber A / B) */" },
		{ "CompactNodeTitle", "-" },
		{ "DisplayName", "FrameNumber - FrameNumber" },
		{ "Keywords", "/ divide" },
		{ "ModuleRelativePath", "Public/TimeManagementBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ScriptMethodSelfReturn", "" },
		{ "ScriptOperator", "/;/=" },
		{ "ToolTip", "Divide (FrameNumber A / B)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Divide_FrameNumberInteger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimeManagementBlueprintLibrary, nullptr, "Divide_FrameNumberInteger", nullptr, nullptr, sizeof(TimeManagementBlueprintLibrary_eventDivide_FrameNumberInteger_Parms), Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Divide_FrameNumberInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Divide_FrameNumberInteger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Divide_FrameNumberInteger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Divide_FrameNumberInteger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Divide_FrameNumberInteger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Divide_FrameNumberInteger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimeManagementBlueprintLibrary_GetTimecode_Statics
	{
		struct FTimecode
		{
			int32 Hours;
			int32 Minutes;
			int32 Seconds;
			int32 Frames;
			bool bDropFrameFormat;
		};

		struct TimeManagementBlueprintLibrary_eventGetTimecode_Parms
		{
			FTimecode ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_GetTimecode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventGetTimecode_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimecode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimeManagementBlueprintLibrary_GetTimecode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_GetTimecode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeManagementBlueprintLibrary_GetTimecode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Time Management" },
		{ "Comment", "/** Get the current timecode of the engine. */" },
		{ "ModuleRelativePath", "Public/TimeManagementBlueprintLibrary.h" },
		{ "ToolTip", "Get the current timecode of the engine." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_GetTimecode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimeManagementBlueprintLibrary, nullptr, "GetTimecode", nullptr, nullptr, sizeof(TimeManagementBlueprintLibrary_eventGetTimecode_Parms), Z_Construct_UFunction_UTimeManagementBlueprintLibrary_GetTimecode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_GetTimecode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_GetTimecode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_GetTimecode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimeManagementBlueprintLibrary_GetTimecode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimeManagementBlueprintLibrary_GetTimecode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimeManagementBlueprintLibrary_GetTimecodeFrameRate_Statics
	{
		struct FFrameRate
		{
			int32 Numerator;
			int32 Denominator;
		};

		struct TimeManagementBlueprintLibrary_eventGetTimecodeFrameRate_Parms
		{
			FFrameRate ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_GetTimecodeFrameRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventGetTimecodeFrameRate_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimeManagementBlueprintLibrary_GetTimecodeFrameRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_GetTimecodeFrameRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeManagementBlueprintLibrary_GetTimecodeFrameRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Time Management" },
		{ "Comment", "/** Gets the current timecode frame rate. */" },
		{ "ModuleRelativePath", "Public/TimeManagementBlueprintLibrary.h" },
		{ "ToolTip", "Gets the current timecode frame rate." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_GetTimecodeFrameRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimeManagementBlueprintLibrary, nullptr, "GetTimecodeFrameRate", nullptr, nullptr, sizeof(TimeManagementBlueprintLibrary_eventGetTimecodeFrameRate_Parms), Z_Construct_UFunction_UTimeManagementBlueprintLibrary_GetTimecodeFrameRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_GetTimecodeFrameRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_GetTimecodeFrameRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_GetTimecodeFrameRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimeManagementBlueprintLibrary_GetTimecodeFrameRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimeManagementBlueprintLibrary_GetTimecodeFrameRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_Framerate_Statics
	{
		struct FFrameRate
		{
			int32 Numerator;
			int32 Denominator;
		};

		struct TimeManagementBlueprintLibrary_eventIsValid_Framerate_Parms
		{
			FFrameRate InFrameRate;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InFrameRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InFrameRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_Framerate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TimeManagementBlueprintLibrary_eventIsValid_Framerate_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_Framerate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TimeManagementBlueprintLibrary_eventIsValid_Framerate_Parms), &Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_Framerate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_Framerate_Statics::NewProp_InFrameRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_Framerate_Statics::NewProp_InFrameRate = { "InFrameRate", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventIsValid_Framerate_Parms, InFrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_Framerate_Statics::NewProp_InFrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_Framerate_Statics::NewProp_InFrameRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_Framerate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_Framerate_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_Framerate_Statics::NewProp_InFrameRate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_Framerate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Time Management" },
		{ "Comment", "/** Verifies that this is a valid framerate with a non-zero denominator. */" },
		{ "DisplayName", "IsValid" },
		{ "ModuleRelativePath", "Public/TimeManagementBlueprintLibrary.h" },
		{ "ToolTip", "Verifies that this is a valid framerate with a non-zero denominator." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_Framerate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimeManagementBlueprintLibrary, nullptr, "IsValid_Framerate", nullptr, nullptr, sizeof(TimeManagementBlueprintLibrary_eventIsValid_Framerate_Parms), Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_Framerate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_Framerate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_Framerate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_Framerate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_Framerate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_Framerate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_MultipleOf_Statics
	{
		struct FFrameRate
		{
			int32 Numerator;
			int32 Denominator;
		};

		struct TimeManagementBlueprintLibrary_eventIsValid_MultipleOf_Parms
		{
			FFrameRate InFrameRate;
			FFrameRate OtherFramerate;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherFramerate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OtherFramerate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InFrameRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InFrameRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_MultipleOf_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TimeManagementBlueprintLibrary_eventIsValid_MultipleOf_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_MultipleOf_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TimeManagementBlueprintLibrary_eventIsValid_MultipleOf_Parms), &Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_MultipleOf_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_MultipleOf_Statics::NewProp_OtherFramerate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_MultipleOf_Statics::NewProp_OtherFramerate = { "OtherFramerate", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventIsValid_MultipleOf_Parms, OtherFramerate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_MultipleOf_Statics::NewProp_OtherFramerate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_MultipleOf_Statics::NewProp_OtherFramerate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_MultipleOf_Statics::NewProp_InFrameRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_MultipleOf_Statics::NewProp_InFrameRate = { "InFrameRate", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventIsValid_MultipleOf_Parms, InFrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_MultipleOf_Statics::NewProp_InFrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_MultipleOf_Statics::NewProp_InFrameRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_MultipleOf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_MultipleOf_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_MultipleOf_Statics::NewProp_OtherFramerate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_MultipleOf_Statics::NewProp_InFrameRate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_MultipleOf_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Time Management" },
		{ "Comment", "/** Checks if this framerate is an even multiple of another framerate, ie: 60 is a multiple of 30, but 59.94 is not. */" },
		{ "DisplayName", "Is Multiple Of" },
		{ "ModuleRelativePath", "Public/TimeManagementBlueprintLibrary.h" },
		{ "ToolTip", "Checks if this framerate is an even multiple of another framerate, ie: 60 is a multiple of 30, but 59.94 is not." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_MultipleOf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimeManagementBlueprintLibrary, nullptr, "IsValid_MultipleOf", nullptr, nullptr, sizeof(TimeManagementBlueprintLibrary_eventIsValid_MultipleOf_Parms), Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_MultipleOf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_MultipleOf_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_MultipleOf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_MultipleOf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_MultipleOf()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_MultipleOf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_FrameNumberInteger_Statics
	{
		struct TimeManagementBlueprintLibrary_eventMultiply_FrameNumberInteger_Parms
		{
			FFrameNumber A;
			int32 B;
			FFrameNumber ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_B;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_FrameNumberInteger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventMultiply_FrameNumberInteger_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_FrameNumberInteger_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventMultiply_FrameNumberInteger_Parms, B), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_FrameNumberInteger_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventMultiply_FrameNumberInteger_Parms, A), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_FrameNumberInteger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_FrameNumberInteger_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_FrameNumberInteger_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_FrameNumberInteger_Statics::NewProp_A,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_FrameNumberInteger_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Time Management" },
		{ "Comment", "/** Multiply (FrameNumber A * B) */" },
		{ "CompactNodeTitle", "*" },
		{ "DisplayName", "FrameNumber * Int" },
		{ "Keywords", "* multiply" },
		{ "ModuleRelativePath", "Public/TimeManagementBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ScriptMethodSelfReturn", "" },
		{ "ScriptOperator", "*;*=" },
		{ "ToolTip", "Multiply (FrameNumber A * B)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_FrameNumberInteger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimeManagementBlueprintLibrary, nullptr, "Multiply_FrameNumberInteger", nullptr, nullptr, sizeof(TimeManagementBlueprintLibrary_eventMultiply_FrameNumberInteger_Parms), Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_FrameNumberInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_FrameNumberInteger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_FrameNumberInteger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_FrameNumberInteger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_FrameNumberInteger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_FrameNumberInteger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_SecondsFrameRate_Statics
	{
		struct FFrameTime
		{
			FFrameNumber FrameNumber;
			float SubFrame;
		};

		struct FFrameRate
		{
			int32 Numerator;
			int32 Denominator;
		};

		struct TimeManagementBlueprintLibrary_eventMultiply_SecondsFrameRate_Parms
		{
			float TimeInSeconds;
			FFrameRate FrameRate;
			FFrameTime ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FrameRate;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeInSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_SecondsFrameRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventMultiply_SecondsFrameRate_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameTime, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_SecondsFrameRate_Statics::NewProp_FrameRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_SecondsFrameRate_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventMultiply_SecondsFrameRate_Parms, FrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_SecondsFrameRate_Statics::NewProp_FrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_SecondsFrameRate_Statics::NewProp_FrameRate_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_SecondsFrameRate_Statics::NewProp_TimeInSeconds = { "TimeInSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventMultiply_SecondsFrameRate_Parms, TimeInSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_SecondsFrameRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_SecondsFrameRate_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_SecondsFrameRate_Statics::NewProp_FrameRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_SecondsFrameRate_Statics::NewProp_TimeInSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_SecondsFrameRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Time Management" },
		{ "Comment", "/** Multiplies a value in seconds against a FrameRate to get a new FrameTime. */" },
		{ "CompactNodeTitle", "*" },
		{ "DisplayName", "Seconds * FrameRate" },
		{ "ModuleRelativePath", "Public/TimeManagementBlueprintLibrary.h" },
		{ "ToolTip", "Multiplies a value in seconds against a FrameRate to get a new FrameTime." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_SecondsFrameRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimeManagementBlueprintLibrary, nullptr, "Multiply_SecondsFrameRate", nullptr, nullptr, sizeof(TimeManagementBlueprintLibrary_eventMultiply_SecondsFrameRate_Parms), Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_SecondsFrameRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_SecondsFrameRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_SecondsFrameRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_SecondsFrameRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_SecondsFrameRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_SecondsFrameRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimeManagementBlueprintLibrary_SnapFrameTimeToRate_Statics
	{
		struct FFrameTime
		{
			FFrameNumber FrameNumber;
			float SubFrame;
		};

		struct FFrameRate
		{
			int32 Numerator;
			int32 Denominator;
		};

		struct TimeManagementBlueprintLibrary_eventSnapFrameTimeToRate_Parms
		{
			FFrameTime SourceTime;
			FFrameRate SourceRate;
			FFrameRate SnapToRate;
			FFrameTime ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnapToRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SnapToRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_SnapFrameTimeToRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventSnapFrameTimeToRate_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameTime, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeManagementBlueprintLibrary_SnapFrameTimeToRate_Statics::NewProp_SnapToRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_SnapFrameTimeToRate_Statics::NewProp_SnapToRate = { "SnapToRate", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventSnapFrameTimeToRate_Parms, SnapToRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_SnapFrameTimeToRate_Statics::NewProp_SnapToRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_SnapFrameTimeToRate_Statics::NewProp_SnapToRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeManagementBlueprintLibrary_SnapFrameTimeToRate_Statics::NewProp_SourceRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_SnapFrameTimeToRate_Statics::NewProp_SourceRate = { "SourceRate", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventSnapFrameTimeToRate_Parms, SourceRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_SnapFrameTimeToRate_Statics::NewProp_SourceRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_SnapFrameTimeToRate_Statics::NewProp_SourceRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeManagementBlueprintLibrary_SnapFrameTimeToRate_Statics::NewProp_SourceTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_SnapFrameTimeToRate_Statics::NewProp_SourceTime = { "SourceTime", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventSnapFrameTimeToRate_Parms, SourceTime), Z_Construct_UScriptStruct_FFrameTime, METADATA_PARAMS(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_SnapFrameTimeToRate_Statics::NewProp_SourceTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_SnapFrameTimeToRate_Statics::NewProp_SourceTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimeManagementBlueprintLibrary_SnapFrameTimeToRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_SnapFrameTimeToRate_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_SnapFrameTimeToRate_Statics::NewProp_SnapToRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_SnapFrameTimeToRate_Statics::NewProp_SourceRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_SnapFrameTimeToRate_Statics::NewProp_SourceTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeManagementBlueprintLibrary_SnapFrameTimeToRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Time Management" },
		{ "Comment", "/** Snaps the given SourceTime to the nearest frame in the specified Destination Framerate. Useful for determining the nearest frame for another resolution. Returns the frame time in the destination frame rate. */" },
		{ "DisplayName", "Snap Frame Time" },
		{ "ModuleRelativePath", "Public/TimeManagementBlueprintLibrary.h" },
		{ "ToolTip", "Snaps the given SourceTime to the nearest frame in the specified Destination Framerate. Useful for determining the nearest frame for another resolution. Returns the frame time in the destination frame rate." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_SnapFrameTimeToRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimeManagementBlueprintLibrary, nullptr, "SnapFrameTimeToRate", nullptr, nullptr, sizeof(TimeManagementBlueprintLibrary_eventSnapFrameTimeToRate_Parms), Z_Construct_UFunction_UTimeManagementBlueprintLibrary_SnapFrameTimeToRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_SnapFrameTimeToRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_SnapFrameTimeToRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_SnapFrameTimeToRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimeManagementBlueprintLibrary_SnapFrameTimeToRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimeManagementBlueprintLibrary_SnapFrameTimeToRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Subtract_FrameNumberFrameNumber_Statics
	{
		struct TimeManagementBlueprintLibrary_eventSubtract_FrameNumberFrameNumber_Parms
		{
			FFrameNumber A;
			FFrameNumber B;
			FFrameNumber ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_B;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Subtract_FrameNumberFrameNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventSubtract_FrameNumberFrameNumber_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Subtract_FrameNumberFrameNumber_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventSubtract_FrameNumberFrameNumber_Parms, B), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Subtract_FrameNumberFrameNumber_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventSubtract_FrameNumberFrameNumber_Parms, A), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Subtract_FrameNumberFrameNumber_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Subtract_FrameNumberFrameNumber_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Subtract_FrameNumberFrameNumber_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Subtract_FrameNumberFrameNumber_Statics::NewProp_A,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Subtract_FrameNumberFrameNumber_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Time Management" },
		{ "Comment", "/** Subtraction (FrameNumber A - FrameNumber B) */" },
		{ "CompactNodeTitle", "-" },
		{ "DisplayName", "FrameNumber - FrameNumber" },
		{ "Keywords", "- subtract minus" },
		{ "ModuleRelativePath", "Public/TimeManagementBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ScriptMethodSelfReturn", "" },
		{ "ScriptOperator", "-;-=" },
		{ "ToolTip", "Subtraction (FrameNumber A - FrameNumber B)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Subtract_FrameNumberFrameNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimeManagementBlueprintLibrary, nullptr, "Subtract_FrameNumberFrameNumber", nullptr, nullptr, sizeof(TimeManagementBlueprintLibrary_eventSubtract_FrameNumberFrameNumber_Parms), Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Subtract_FrameNumberFrameNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Subtract_FrameNumberFrameNumber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Subtract_FrameNumberFrameNumber_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Subtract_FrameNumberFrameNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Subtract_FrameNumberFrameNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Subtract_FrameNumberFrameNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Subtract_FrameNumberInteger_Statics
	{
		struct TimeManagementBlueprintLibrary_eventSubtract_FrameNumberInteger_Parms
		{
			FFrameNumber A;
			int32 B;
			FFrameNumber ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_B;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Subtract_FrameNumberInteger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventSubtract_FrameNumberInteger_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Subtract_FrameNumberInteger_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventSubtract_FrameNumberInteger_Parms, B), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Subtract_FrameNumberInteger_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventSubtract_FrameNumberInteger_Parms, A), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Subtract_FrameNumberInteger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Subtract_FrameNumberInteger_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Subtract_FrameNumberInteger_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Subtract_FrameNumberInteger_Statics::NewProp_A,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Subtract_FrameNumberInteger_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Time Management" },
		{ "Comment", "/** Subtraction (FrameNumber A - int B) */" },
		{ "CompactNodeTitle", "-" },
		{ "DisplayName", "FrameNumber - Int" },
		{ "Keywords", "- subtract minus" },
		{ "ModuleRelativePath", "Public/TimeManagementBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ScriptMethodSelfReturn", "" },
		{ "ScriptOperator", "-;-=" },
		{ "ToolTip", "Subtraction (FrameNumber A - int B)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Subtract_FrameNumberInteger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimeManagementBlueprintLibrary, nullptr, "Subtract_FrameNumberInteger", nullptr, nullptr, sizeof(TimeManagementBlueprintLibrary_eventSubtract_FrameNumberInteger_Parms), Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Subtract_FrameNumberInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Subtract_FrameNumberInteger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Subtract_FrameNumberInteger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Subtract_FrameNumberInteger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Subtract_FrameNumberInteger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Subtract_FrameNumberInteger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimeManagementBlueprintLibrary_TransformTime_Statics
	{
		struct FFrameTime
		{
			FFrameNumber FrameNumber;
			float SubFrame;
		};

		struct FFrameRate
		{
			int32 Numerator;
			int32 Denominator;
		};

		struct TimeManagementBlueprintLibrary_eventTransformTime_Parms
		{
			FFrameTime SourceTime;
			FFrameRate SourceRate;
			FFrameRate DestinationRate;
			FFrameTime ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestinationRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DestinationRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_TransformTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventTransformTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameTime, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeManagementBlueprintLibrary_TransformTime_Statics::NewProp_DestinationRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_TransformTime_Statics::NewProp_DestinationRate = { "DestinationRate", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventTransformTime_Parms, DestinationRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_TransformTime_Statics::NewProp_DestinationRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_TransformTime_Statics::NewProp_DestinationRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeManagementBlueprintLibrary_TransformTime_Statics::NewProp_SourceRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_TransformTime_Statics::NewProp_SourceRate = { "SourceRate", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventTransformTime_Parms, SourceRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_TransformTime_Statics::NewProp_SourceRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_TransformTime_Statics::NewProp_SourceRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeManagementBlueprintLibrary_TransformTime_Statics::NewProp_SourceTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_TransformTime_Statics::NewProp_SourceTime = { "SourceTime", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventTransformTime_Parms, SourceTime), Z_Construct_UScriptStruct_FFrameTime, METADATA_PARAMS(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_TransformTime_Statics::NewProp_SourceTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_TransformTime_Statics::NewProp_SourceTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimeManagementBlueprintLibrary_TransformTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_TransformTime_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_TransformTime_Statics::NewProp_DestinationRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_TransformTime_Statics::NewProp_SourceRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_TransformTime_Statics::NewProp_SourceTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeManagementBlueprintLibrary_TransformTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Time Management" },
		{ "Comment", "/** Converts the specified time from one framerate to another framerate. This is useful for converting between tick resolution and display rate. */" },
		{ "DisplayName", "Transform Frame Time" },
		{ "ModuleRelativePath", "Public/TimeManagementBlueprintLibrary.h" },
		{ "ToolTip", "Converts the specified time from one framerate to another framerate. This is useful for converting between tick resolution and display rate." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_TransformTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimeManagementBlueprintLibrary, nullptr, "TransformTime", nullptr, nullptr, sizeof(TimeManagementBlueprintLibrary_eventTransformTime_Parms), Z_Construct_UFunction_UTimeManagementBlueprintLibrary_TransformTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_TransformTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_TransformTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_TransformTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimeManagementBlueprintLibrary_TransformTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimeManagementBlueprintLibrary_TransformTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTimeManagementBlueprintLibrary_NoRegister()
	{
		return UTimeManagementBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UTimeManagementBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTimeManagementBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_TimeManagement,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTimeManagementBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Add_FrameNumberFrameNumber, "Add_FrameNumberFrameNumber" }, // 1349412944
		{ &Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Add_FrameNumberInteger, "Add_FrameNumberInteger" }, // 1163422822
		{ &Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameNumberToInteger, "Conv_FrameNumberToInteger" }, // 871900977
		{ &Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameRateToSeconds, "Conv_FrameRateToSeconds" }, // 4112501124
		{ &Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds, "Conv_QualifiedFrameTimeToSeconds" }, // 3966904817
		{ &Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_TimecodeToString, "Conv_TimecodeToString" }, // 3946901385
		{ &Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Divide_FrameNumberInteger, "Divide_FrameNumberInteger" }, // 3614460326
		{ &Z_Construct_UFunction_UTimeManagementBlueprintLibrary_GetTimecode, "GetTimecode" }, // 1581562816
		{ &Z_Construct_UFunction_UTimeManagementBlueprintLibrary_GetTimecodeFrameRate, "GetTimecodeFrameRate" }, // 2016212066
		{ &Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_Framerate, "IsValid_Framerate" }, // 720887106
		{ &Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_MultipleOf, "IsValid_MultipleOf" }, // 3911559503
		{ &Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_FrameNumberInteger, "Multiply_FrameNumberInteger" }, // 3255347007
		{ &Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_SecondsFrameRate, "Multiply_SecondsFrameRate" }, // 838039417
		{ &Z_Construct_UFunction_UTimeManagementBlueprintLibrary_SnapFrameTimeToRate, "SnapFrameTimeToRate" }, // 2680238936
		{ &Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Subtract_FrameNumberFrameNumber, "Subtract_FrameNumberFrameNumber" }, // 1920495058
		{ &Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Subtract_FrameNumberInteger, "Subtract_FrameNumberInteger" }, // 1084812642
		{ &Z_Construct_UFunction_UTimeManagementBlueprintLibrary_TransformTime, "TransformTime" }, // 3086428775
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimeManagementBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "TimeManagementBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/TimeManagementBlueprintLibrary.h" },
		{ "ScriptName", "TimeManagementLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTimeManagementBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTimeManagementBlueprintLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTimeManagementBlueprintLibrary_Statics::ClassParams = {
		&UTimeManagementBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTimeManagementBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTimeManagementBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTimeManagementBlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTimeManagementBlueprintLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTimeManagementBlueprintLibrary, 2051603784);
	template<> TIMEMANAGEMENT_API UClass* StaticClass<UTimeManagementBlueprintLibrary>()
	{
		return UTimeManagementBlueprintLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTimeManagementBlueprintLibrary(Z_Construct_UClass_UTimeManagementBlueprintLibrary, &UTimeManagementBlueprintLibrary::StaticClass, TEXT("/Script/TimeManagement"), TEXT("UTimeManagementBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTimeManagementBlueprintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
