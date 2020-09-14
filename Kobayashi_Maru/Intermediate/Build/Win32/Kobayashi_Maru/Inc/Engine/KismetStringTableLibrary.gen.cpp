// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Kismet/KismetStringTableLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKismetStringTableLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UKismetStringTableLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UKismetStringTableLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	DEFINE_FUNCTION(UKismetStringTableLibrary::execGetMetaDataIdsFromStringTableEntry)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_TableId);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=UKismetStringTableLibrary::GetMetaDataIdsFromStringTableEntry(Z_Param_TableId,Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetStringTableLibrary::execGetKeysFromStringTable)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_TableId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UKismetStringTableLibrary::GetKeysFromStringTable(Z_Param_TableId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetStringTableLibrary::execGetRegisteredStringTables)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=UKismetStringTableLibrary::GetRegisteredStringTables();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetStringTableLibrary::execGetTableEntryMetaData)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_TableId);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FNameProperty,Z_Param_MetaDataId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UKismetStringTableLibrary::GetTableEntryMetaData(Z_Param_TableId,Z_Param_Key,Z_Param_MetaDataId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetStringTableLibrary::execGetTableEntrySourceString)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_TableId);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UKismetStringTableLibrary::GetTableEntrySourceString(Z_Param_TableId,Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetStringTableLibrary::execGetTableNamespace)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_TableId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UKismetStringTableLibrary::GetTableNamespace(Z_Param_TableId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetStringTableLibrary::execIsRegisteredTableEntry)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_TableId);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UKismetStringTableLibrary::IsRegisteredTableEntry(Z_Param_TableId,Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetStringTableLibrary::execIsRegisteredTableId)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_TableId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UKismetStringTableLibrary::IsRegisteredTableId(Z_Param_TableId);
		P_NATIVE_END;
	}
	void UKismetStringTableLibrary::StaticRegisterNativesUKismetStringTableLibrary()
	{
		UClass* Class = UKismetStringTableLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetKeysFromStringTable", &UKismetStringTableLibrary::execGetKeysFromStringTable },
			{ "GetMetaDataIdsFromStringTableEntry", &UKismetStringTableLibrary::execGetMetaDataIdsFromStringTableEntry },
			{ "GetRegisteredStringTables", &UKismetStringTableLibrary::execGetRegisteredStringTables },
			{ "GetTableEntryMetaData", &UKismetStringTableLibrary::execGetTableEntryMetaData },
			{ "GetTableEntrySourceString", &UKismetStringTableLibrary::execGetTableEntrySourceString },
			{ "GetTableNamespace", &UKismetStringTableLibrary::execGetTableNamespace },
			{ "IsRegisteredTableEntry", &UKismetStringTableLibrary::execIsRegisteredTableEntry },
			{ "IsRegisteredTableId", &UKismetStringTableLibrary::execIsRegisteredTableId },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKismetStringTableLibrary_GetKeysFromStringTable_Statics
	{
		struct KismetStringTableLibrary_eventGetKeysFromStringTable_Parms
		{
			FName TableId;
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TableId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TableId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKismetStringTableLibrary_GetKeysFromStringTable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetStringTableLibrary_eventGetKeysFromStringTable_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetStringTableLibrary_GetKeysFromStringTable_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetStringTableLibrary_GetKeysFromStringTable_Statics::NewProp_TableId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKismetStringTableLibrary_GetKeysFromStringTable_Statics::NewProp_TableId = { "TableId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetStringTableLibrary_eventGetKeysFromStringTable_Parms, TableId), METADATA_PARAMS(Z_Construct_UFunction_UKismetStringTableLibrary_GetKeysFromStringTable_Statics::NewProp_TableId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetStringTableLibrary_GetKeysFromStringTable_Statics::NewProp_TableId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetStringTableLibrary_GetKeysFromStringTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetStringTableLibrary_GetKeysFromStringTable_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetStringTableLibrary_GetKeysFromStringTable_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetStringTableLibrary_GetKeysFromStringTable_Statics::NewProp_TableId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetStringTableLibrary_GetKeysFromStringTable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|String Table" },
		{ "Comment", "/** Returns an array of all keys within the given string table */" },
		{ "DisplayName", "Get Keys from String Table" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetStringTableLibrary.h" },
		{ "ToolTip", "Returns an array of all keys within the given string table" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetStringTableLibrary_GetKeysFromStringTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetStringTableLibrary, nullptr, "GetKeysFromStringTable", nullptr, nullptr, sizeof(KismetStringTableLibrary_eventGetKeysFromStringTable_Parms), Z_Construct_UFunction_UKismetStringTableLibrary_GetKeysFromStringTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetStringTableLibrary_GetKeysFromStringTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetStringTableLibrary_GetKeysFromStringTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetStringTableLibrary_GetKeysFromStringTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetStringTableLibrary_GetKeysFromStringTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetStringTableLibrary_GetKeysFromStringTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetStringTableLibrary_GetMetaDataIdsFromStringTableEntry_Statics
	{
		struct KismetStringTableLibrary_eventGetMetaDataIdsFromStringTableEntry_Parms
		{
			FName TableId;
			FString Key;
			TArray<FName> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TableId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TableId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKismetStringTableLibrary_GetMetaDataIdsFromStringTableEntry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetStringTableLibrary_eventGetMetaDataIdsFromStringTableEntry_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKismetStringTableLibrary_GetMetaDataIdsFromStringTableEntry_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetStringTableLibrary_GetMetaDataIdsFromStringTableEntry_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetStringTableLibrary_GetMetaDataIdsFromStringTableEntry_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetStringTableLibrary_eventGetMetaDataIdsFromStringTableEntry_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UKismetStringTableLibrary_GetMetaDataIdsFromStringTableEntry_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetStringTableLibrary_GetMetaDataIdsFromStringTableEntry_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetStringTableLibrary_GetMetaDataIdsFromStringTableEntry_Statics::NewProp_TableId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKismetStringTableLibrary_GetMetaDataIdsFromStringTableEntry_Statics::NewProp_TableId = { "TableId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetStringTableLibrary_eventGetMetaDataIdsFromStringTableEntry_Parms, TableId), METADATA_PARAMS(Z_Construct_UFunction_UKismetStringTableLibrary_GetMetaDataIdsFromStringTableEntry_Statics::NewProp_TableId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetStringTableLibrary_GetMetaDataIdsFromStringTableEntry_Statics::NewProp_TableId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetStringTableLibrary_GetMetaDataIdsFromStringTableEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetStringTableLibrary_GetMetaDataIdsFromStringTableEntry_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetStringTableLibrary_GetMetaDataIdsFromStringTableEntry_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetStringTableLibrary_GetMetaDataIdsFromStringTableEntry_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetStringTableLibrary_GetMetaDataIdsFromStringTableEntry_Statics::NewProp_TableId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetStringTableLibrary_GetMetaDataIdsFromStringTableEntry_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|String Table" },
		{ "Comment", "/** Returns an array of all meta-data IDs within the given string table entry */" },
		{ "DisplayName", "Get Meta-Data IDs from String Table Entry" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetStringTableLibrary.h" },
		{ "ToolTip", "Returns an array of all meta-data IDs within the given string table entry" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetStringTableLibrary_GetMetaDataIdsFromStringTableEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetStringTableLibrary, nullptr, "GetMetaDataIdsFromStringTableEntry", nullptr, nullptr, sizeof(KismetStringTableLibrary_eventGetMetaDataIdsFromStringTableEntry_Parms), Z_Construct_UFunction_UKismetStringTableLibrary_GetMetaDataIdsFromStringTableEntry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetStringTableLibrary_GetMetaDataIdsFromStringTableEntry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetStringTableLibrary_GetMetaDataIdsFromStringTableEntry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetStringTableLibrary_GetMetaDataIdsFromStringTableEntry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetStringTableLibrary_GetMetaDataIdsFromStringTableEntry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetStringTableLibrary_GetMetaDataIdsFromStringTableEntry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetStringTableLibrary_GetRegisteredStringTables_Statics
	{
		struct KismetStringTableLibrary_eventGetRegisteredStringTables_Parms
		{
			TArray<FName> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKismetStringTableLibrary_GetRegisteredStringTables_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetStringTableLibrary_eventGetRegisteredStringTables_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKismetStringTableLibrary_GetRegisteredStringTables_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetStringTableLibrary_GetRegisteredStringTables_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetStringTableLibrary_GetRegisteredStringTables_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetStringTableLibrary_GetRegisteredStringTables_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetStringTableLibrary_GetRegisteredStringTables_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|String Table" },
		{ "Comment", "/** Returns an array of all registered string table IDs */" },
		{ "DisplayName", "Get Registered String Tables" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetStringTableLibrary.h" },
		{ "ToolTip", "Returns an array of all registered string table IDs" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetStringTableLibrary_GetRegisteredStringTables_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetStringTableLibrary, nullptr, "GetRegisteredStringTables", nullptr, nullptr, sizeof(KismetStringTableLibrary_eventGetRegisteredStringTables_Parms), Z_Construct_UFunction_UKismetStringTableLibrary_GetRegisteredStringTables_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetStringTableLibrary_GetRegisteredStringTables_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetStringTableLibrary_GetRegisteredStringTables_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetStringTableLibrary_GetRegisteredStringTables_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetStringTableLibrary_GetRegisteredStringTables()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetStringTableLibrary_GetRegisteredStringTables_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntryMetaData_Statics
	{
		struct KismetStringTableLibrary_eventGetTableEntryMetaData_Parms
		{
			FName TableId;
			FString Key;
			FName MetaDataId;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetaDataId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MetaDataId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TableId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TableId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntryMetaData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetStringTableLibrary_eventGetTableEntryMetaData_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntryMetaData_Statics::NewProp_MetaDataId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntryMetaData_Statics::NewProp_MetaDataId = { "MetaDataId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetStringTableLibrary_eventGetTableEntryMetaData_Parms, MetaDataId), METADATA_PARAMS(Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntryMetaData_Statics::NewProp_MetaDataId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntryMetaData_Statics::NewProp_MetaDataId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntryMetaData_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntryMetaData_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetStringTableLibrary_eventGetTableEntryMetaData_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntryMetaData_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntryMetaData_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntryMetaData_Statics::NewProp_TableId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntryMetaData_Statics::NewProp_TableId = { "TableId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetStringTableLibrary_eventGetTableEntryMetaData_Parms, TableId), METADATA_PARAMS(Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntryMetaData_Statics::NewProp_TableId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntryMetaData_Statics::NewProp_TableId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntryMetaData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntryMetaData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntryMetaData_Statics::NewProp_MetaDataId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntryMetaData_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntryMetaData_Statics::NewProp_TableId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntryMetaData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|String Table" },
		{ "Comment", "/** Returns the specified meta-data of the given string table entry (or an empty string). */" },
		{ "DisplayName", "Get String Table Entry Meta-Data" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetStringTableLibrary.h" },
		{ "ToolTip", "Returns the specified meta-data of the given string table entry (or an empty string)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntryMetaData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetStringTableLibrary, nullptr, "GetTableEntryMetaData", nullptr, nullptr, sizeof(KismetStringTableLibrary_eventGetTableEntryMetaData_Parms), Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntryMetaData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntryMetaData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntryMetaData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntryMetaData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntryMetaData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntryMetaData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntrySourceString_Statics
	{
		struct KismetStringTableLibrary_eventGetTableEntrySourceString_Parms
		{
			FName TableId;
			FString Key;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TableId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TableId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntrySourceString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetStringTableLibrary_eventGetTableEntrySourceString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntrySourceString_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntrySourceString_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetStringTableLibrary_eventGetTableEntrySourceString_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntrySourceString_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntrySourceString_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntrySourceString_Statics::NewProp_TableId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntrySourceString_Statics::NewProp_TableId = { "TableId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetStringTableLibrary_eventGetTableEntrySourceString_Parms, TableId), METADATA_PARAMS(Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntrySourceString_Statics::NewProp_TableId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntrySourceString_Statics::NewProp_TableId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntrySourceString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntrySourceString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntrySourceString_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntrySourceString_Statics::NewProp_TableId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntrySourceString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|String Table" },
		{ "Comment", "/** Returns the source string of the given string table entry (or an empty string). */" },
		{ "DisplayName", "Get String Table Entry Source String" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetStringTableLibrary.h" },
		{ "ToolTip", "Returns the source string of the given string table entry (or an empty string)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntrySourceString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetStringTableLibrary, nullptr, "GetTableEntrySourceString", nullptr, nullptr, sizeof(KismetStringTableLibrary_eventGetTableEntrySourceString_Parms), Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntrySourceString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntrySourceString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntrySourceString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntrySourceString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntrySourceString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntrySourceString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetStringTableLibrary_GetTableNamespace_Statics
	{
		struct KismetStringTableLibrary_eventGetTableNamespace_Parms
		{
			FName TableId;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TableId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TableId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetStringTableLibrary_GetTableNamespace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetStringTableLibrary_eventGetTableNamespace_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetStringTableLibrary_GetTableNamespace_Statics::NewProp_TableId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKismetStringTableLibrary_GetTableNamespace_Statics::NewProp_TableId = { "TableId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetStringTableLibrary_eventGetTableNamespace_Parms, TableId), METADATA_PARAMS(Z_Construct_UFunction_UKismetStringTableLibrary_GetTableNamespace_Statics::NewProp_TableId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetStringTableLibrary_GetTableNamespace_Statics::NewProp_TableId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetStringTableLibrary_GetTableNamespace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetStringTableLibrary_GetTableNamespace_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetStringTableLibrary_GetTableNamespace_Statics::NewProp_TableId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetStringTableLibrary_GetTableNamespace_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|String Table" },
		{ "Comment", "/** Returns the namespace of the given string table. */" },
		{ "DisplayName", "Get String Table Namespace" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetStringTableLibrary.h" },
		{ "ToolTip", "Returns the namespace of the given string table." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetStringTableLibrary_GetTableNamespace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetStringTableLibrary, nullptr, "GetTableNamespace", nullptr, nullptr, sizeof(KismetStringTableLibrary_eventGetTableNamespace_Parms), Z_Construct_UFunction_UKismetStringTableLibrary_GetTableNamespace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetStringTableLibrary_GetTableNamespace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetStringTableLibrary_GetTableNamespace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetStringTableLibrary_GetTableNamespace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetStringTableLibrary_GetTableNamespace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetStringTableLibrary_GetTableNamespace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableEntry_Statics
	{
		struct KismetStringTableLibrary_eventIsRegisteredTableEntry_Parms
		{
			FName TableId;
			FString Key;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TableId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TableId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableEntry_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetStringTableLibrary_eventIsRegisteredTableEntry_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableEntry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KismetStringTableLibrary_eventIsRegisteredTableEntry_Parms), &Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableEntry_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableEntry_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableEntry_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetStringTableLibrary_eventIsRegisteredTableEntry_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableEntry_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableEntry_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableEntry_Statics::NewProp_TableId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableEntry_Statics::NewProp_TableId = { "TableId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetStringTableLibrary_eventIsRegisteredTableEntry_Parms, TableId), METADATA_PARAMS(Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableEntry_Statics::NewProp_TableId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableEntry_Statics::NewProp_TableId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableEntry_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableEntry_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableEntry_Statics::NewProp_TableId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableEntry_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|String Table" },
		{ "Comment", "/** Returns true if the given table ID corresponds to a registered string table, and that table has. */" },
		{ "DisplayName", "Is String Table Entry Registered" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetStringTableLibrary.h" },
		{ "ToolTip", "Returns true if the given table ID corresponds to a registered string table, and that table has." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetStringTableLibrary, nullptr, "IsRegisteredTableEntry", nullptr, nullptr, sizeof(KismetStringTableLibrary_eventIsRegisteredTableEntry_Parms), Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableEntry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableEntry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableEntry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableEntry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableEntry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableEntry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableId_Statics
	{
		struct KismetStringTableLibrary_eventIsRegisteredTableId_Parms
		{
			FName TableId;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TableId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TableId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableId_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetStringTableLibrary_eventIsRegisteredTableId_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KismetStringTableLibrary_eventIsRegisteredTableId_Parms), &Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableId_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableId_Statics::NewProp_TableId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableId_Statics::NewProp_TableId = { "TableId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetStringTableLibrary_eventIsRegisteredTableId_Parms, TableId), METADATA_PARAMS(Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableId_Statics::NewProp_TableId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableId_Statics::NewProp_TableId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableId_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableId_Statics::NewProp_TableId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|String Table" },
		{ "Comment", "/** Returns true if the given table ID corresponds to a registered string table. */" },
		{ "DisplayName", "Is String Table Registered" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetStringTableLibrary.h" },
		{ "ToolTip", "Returns true if the given table ID corresponds to a registered string table." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetStringTableLibrary, nullptr, "IsRegisteredTableId", nullptr, nullptr, sizeof(KismetStringTableLibrary_eventIsRegisteredTableId_Parms), Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UKismetStringTableLibrary_NoRegister()
	{
		return UKismetStringTableLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UKismetStringTableLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKismetStringTableLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKismetStringTableLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKismetStringTableLibrary_GetKeysFromStringTable, "GetKeysFromStringTable" }, // 1397786350
		{ &Z_Construct_UFunction_UKismetStringTableLibrary_GetMetaDataIdsFromStringTableEntry, "GetMetaDataIdsFromStringTableEntry" }, // 2351155014
		{ &Z_Construct_UFunction_UKismetStringTableLibrary_GetRegisteredStringTables, "GetRegisteredStringTables" }, // 1989687237
		{ &Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntryMetaData, "GetTableEntryMetaData" }, // 4245599609
		{ &Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntrySourceString, "GetTableEntrySourceString" }, // 3569894664
		{ &Z_Construct_UFunction_UKismetStringTableLibrary_GetTableNamespace, "GetTableNamespace" }, // 1302393572
		{ &Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableEntry, "IsRegisteredTableEntry" }, // 4117589407
		{ &Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableId, "IsRegisteredTableId" }, // 3923960280
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKismetStringTableLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "IncludePath", "Kismet/KismetStringTableLibrary.h" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetStringTableLibrary.h" },
		{ "ScriptName", "StringTableLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKismetStringTableLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKismetStringTableLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKismetStringTableLibrary_Statics::ClassParams = {
		&UKismetStringTableLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UKismetStringTableLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKismetStringTableLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKismetStringTableLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKismetStringTableLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKismetStringTableLibrary, 3402927580);
	template<> ENGINE_API UClass* StaticClass<UKismetStringTableLibrary>()
	{
		return UKismetStringTableLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKismetStringTableLibrary(Z_Construct_UClass_UKismetStringTableLibrary, &UKismetStringTableLibrary::StaticClass, TEXT("/Script/Engine"), TEXT("UKismetStringTableLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKismetStringTableLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
