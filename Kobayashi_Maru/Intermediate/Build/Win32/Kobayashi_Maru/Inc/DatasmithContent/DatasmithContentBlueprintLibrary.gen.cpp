// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DatasmithContent/Public/DatasmithContentBlueprintLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithContentBlueprintLibrary() {}
// Cross Module References
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithContentBlueprintLibrary_NoRegister();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithContentBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DatasmithContent();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithAssetUserData_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDatasmithContentBlueprintLibrary::execGetDatasmithUserDataKeysAndValuesForValue)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_GET_PROPERTY(FStrProperty,Z_Param_StringToMatch);
		P_GET_TARRAY_REF(FName,Z_Param_Out_OutKeys);
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutValues);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDatasmithContentBlueprintLibrary::GetDatasmithUserDataKeysAndValuesForValue(Z_Param_Object,Z_Param_StringToMatch,Z_Param_Out_OutKeys,Z_Param_Out_OutValues);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithContentBlueprintLibrary::execGetDatasmithUserDataValueForKey)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_GET_PROPERTY(FNameProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UDatasmithContentBlueprintLibrary::GetDatasmithUserDataValueForKey(Z_Param_Object,Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithContentBlueprintLibrary::execGetDatasmithUserData)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDatasmithAssetUserData**)Z_Param__Result=UDatasmithContentBlueprintLibrary::GetDatasmithUserData(Z_Param_Object);
		P_NATIVE_END;
	}
#if WITH_EDITOR
	DEFINE_FUNCTION(UDatasmithContentBlueprintLibrary::execGetAllObjectsAndValuesForKey)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Key);
		P_GET_OBJECT(UClass,Z_Param_ObjectClass);
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_OutObjects);
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutValues);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDatasmithContentBlueprintLibrary::GetAllObjectsAndValuesForKey(Z_Param_Key,Z_Param_ObjectClass,Z_Param_Out_OutObjects,Z_Param_Out_OutValues);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithContentBlueprintLibrary::execGetAllDatasmithUserData)
	{
		P_GET_OBJECT(UClass,Z_Param_ObjectClass);
		P_GET_TARRAY_REF(UDatasmithAssetUserData*,Z_Param_Out_OutUserData);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDatasmithContentBlueprintLibrary::GetAllDatasmithUserData(Z_Param_ObjectClass,Z_Param_Out_OutUserData);
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void UDatasmithContentBlueprintLibrary::StaticRegisterNativesUDatasmithContentBlueprintLibrary()
	{
		UClass* Class = UDatasmithContentBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
#if WITH_EDITOR
			{ "GetAllDatasmithUserData", &UDatasmithContentBlueprintLibrary::execGetAllDatasmithUserData },
			{ "GetAllObjectsAndValuesForKey", &UDatasmithContentBlueprintLibrary::execGetAllObjectsAndValuesForKey },
#endif // WITH_EDITOR
			{ "GetDatasmithUserData", &UDatasmithContentBlueprintLibrary::execGetDatasmithUserData },
			{ "GetDatasmithUserDataKeysAndValuesForValue", &UDatasmithContentBlueprintLibrary::execGetDatasmithUserDataKeysAndValuesForValue },
			{ "GetDatasmithUserDataValueForKey", &UDatasmithContentBlueprintLibrary::execGetDatasmithUserDataValueForKey },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllDatasmithUserData_Statics
	{
		struct DatasmithContentBlueprintLibrary_eventGetAllDatasmithUserData_Parms
		{
			TSubclassOf<UObject>  ObjectClass;
			TArray<UDatasmithAssetUserData*> OutUserData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutUserData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutUserData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutUserData_Inner;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ObjectClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllDatasmithUserData_Statics::NewProp_OutUserData_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllDatasmithUserData_Statics::NewProp_OutUserData = { "OutUserData", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DatasmithContentBlueprintLibrary_eventGetAllDatasmithUserData_Parms, OutUserData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllDatasmithUserData_Statics::NewProp_OutUserData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllDatasmithUserData_Statics::NewProp_OutUserData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllDatasmithUserData_Statics::NewProp_OutUserData_Inner = { "OutUserData", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDatasmithAssetUserData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllDatasmithUserData_Statics::NewProp_ObjectClass = { "ObjectClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DatasmithContentBlueprintLibrary_eventGetAllDatasmithUserData_Parms, ObjectClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllDatasmithUserData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllDatasmithUserData_Statics::NewProp_OutUserData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllDatasmithUserData_Statics::NewProp_OutUserData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllDatasmithUserData_Statics::NewProp_ObjectClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllDatasmithUserData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Datasmith User Data" },
		{ "Comment", "/**\n\x09 *\x09""Find all Datasmith User Data of loaded objects of the given type.\n\x09 *\x09This is a slow operation, so editor only.\n\x09 *\x09@param\x09ObjectClass\x09\x09""Class of the object on which to filter, if specificed; otherwise there's no filtering\n\x09 *\x09@param\x09OutUserData\x09\x09Output array of Datasmith User Data.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DatasmithContentBlueprintLibrary.h" },
		{ "ToolTip", "Find all Datasmith User Data of loaded objects of the given type.\nThis is a slow operation, so editor only.\n@param  ObjectClass             Class of the object on which to filter, if specificed; otherwise there's no filtering\n@param  OutUserData             Output array of Datasmith User Data." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllDatasmithUserData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithContentBlueprintLibrary, nullptr, "GetAllDatasmithUserData", nullptr, nullptr, sizeof(DatasmithContentBlueprintLibrary_eventGetAllDatasmithUserData_Parms), Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllDatasmithUserData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllDatasmithUserData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllDatasmithUserData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllDatasmithUserData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllDatasmithUserData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllDatasmithUserData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllObjectsAndValuesForKey_Statics
	{
		struct DatasmithContentBlueprintLibrary_eventGetAllObjectsAndValuesForKey_Parms
		{
			FName Key;
			TSubclassOf<UObject>  ObjectClass;
			TArray<UObject*> OutObjects;
			TArray<FString> OutValues;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutValues;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutValues_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutObjects;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutObjects_Inner;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ObjectClass;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllObjectsAndValuesForKey_Statics::NewProp_OutValues = { "OutValues", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DatasmithContentBlueprintLibrary_eventGetAllObjectsAndValuesForKey_Parms, OutValues), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllObjectsAndValuesForKey_Statics::NewProp_OutValues_Inner = { "OutValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllObjectsAndValuesForKey_Statics::NewProp_OutObjects = { "OutObjects", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DatasmithContentBlueprintLibrary_eventGetAllObjectsAndValuesForKey_Parms, OutObjects), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllObjectsAndValuesForKey_Statics::NewProp_OutObjects_Inner = { "OutObjects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllObjectsAndValuesForKey_Statics::NewProp_ObjectClass = { "ObjectClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DatasmithContentBlueprintLibrary_eventGetAllObjectsAndValuesForKey_Parms, ObjectClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllObjectsAndValuesForKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DatasmithContentBlueprintLibrary_eventGetAllObjectsAndValuesForKey_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllObjectsAndValuesForKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllObjectsAndValuesForKey_Statics::NewProp_OutValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllObjectsAndValuesForKey_Statics::NewProp_OutValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllObjectsAndValuesForKey_Statics::NewProp_OutObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllObjectsAndValuesForKey_Statics::NewProp_OutObjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllObjectsAndValuesForKey_Statics::NewProp_ObjectClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllObjectsAndValuesForKey_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllObjectsAndValuesForKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Datasmith User Data" },
		{ "Comment", "/**\n\x09 *\x09""Find all loaded objects of the given type that have a Datasmith User Data that contains the given key and their associated values.\n\x09 *\x09This is a slow operation, so editor only.\n\x09 *\x09@param\x09Key\x09\x09\x09The key to find in the Datasmith User Data.\n\x09 *\x09@param\x09ObjectClass\x09""Class of the object on which to filter, if specificed; otherwise there's no filtering\n\x09 *\x09@param\x09OutObjects\x09Output array of objects for which the Datasmith User Data match the given key.\n\x09 *\x09@param\x09OutValues\x09Output array of values associated with each object in OutObjects.\n\x09 */" },
		{ "DeterminesOutputType", "ObjectClass" },
		{ "DynamicOutputParam", "OutObjects" },
		{ "ModuleRelativePath", "Public/DatasmithContentBlueprintLibrary.h" },
		{ "ToolTip", "Find all loaded objects of the given type that have a Datasmith User Data that contains the given key and their associated values.\nThis is a slow operation, so editor only.\n@param  Key                     The key to find in the Datasmith User Data.\n@param  ObjectClass     Class of the object on which to filter, if specificed; otherwise there's no filtering\n@param  OutObjects      Output array of objects for which the Datasmith User Data match the given key.\n@param  OutValues       Output array of values associated with each object in OutObjects." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllObjectsAndValuesForKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithContentBlueprintLibrary, nullptr, "GetAllObjectsAndValuesForKey", nullptr, nullptr, sizeof(DatasmithContentBlueprintLibrary_eventGetAllObjectsAndValuesForKey_Parms), Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllObjectsAndValuesForKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllObjectsAndValuesForKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllObjectsAndValuesForKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllObjectsAndValuesForKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllObjectsAndValuesForKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllObjectsAndValuesForKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserData_Statics
	{
		struct DatasmithContentBlueprintLibrary_eventGetDatasmithUserData_Parms
		{
			UObject* Object;
			UDatasmithAssetUserData* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserData_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DatasmithContentBlueprintLibrary_eventGetDatasmithUserData_Parms, ReturnValue), Z_Construct_UClass_UDatasmithAssetUserData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserData_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserData_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserData_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DatasmithContentBlueprintLibrary_eventGetDatasmithUserData_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserData_Statics::NewProp_Object,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith User Data" },
		{ "Comment", "/**\n\x09 * Get the Datasmith User Data of a given object\n\x09 * @param\x09Object\x09The Object from which to retrieve the Datasmith User Data.\n\x09 * @return\x09\x09\x09The Datasmith User Data if it exists; nullptr, otherwise\n\x09 */" },
		{ "ModuleRelativePath", "Public/DatasmithContentBlueprintLibrary.h" },
		{ "ToolTip", "Get the Datasmith User Data of a given object\n@param       Object  The Object from which to retrieve the Datasmith User Data.\n@return                      The Datasmith User Data if it exists; nullptr, otherwise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithContentBlueprintLibrary, nullptr, "GetDatasmithUserData", nullptr, nullptr, sizeof(DatasmithContentBlueprintLibrary_eventGetDatasmithUserData_Parms), Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue_Statics
	{
		struct DatasmithContentBlueprintLibrary_eventGetDatasmithUserDataKeysAndValuesForValue_Parms
		{
			UObject* Object;
			FString StringToMatch;
			TArray<FName> OutKeys;
			TArray<FString> OutValues;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutValues;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutValues_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutKeys;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OutKeys_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringToMatch_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringToMatch;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue_Statics::NewProp_OutValues = { "OutValues", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DatasmithContentBlueprintLibrary_eventGetDatasmithUserDataKeysAndValuesForValue_Parms, OutValues), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue_Statics::NewProp_OutValues_Inner = { "OutValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue_Statics::NewProp_OutKeys = { "OutKeys", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DatasmithContentBlueprintLibrary_eventGetDatasmithUserDataKeysAndValuesForValue_Parms, OutKeys), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue_Statics::NewProp_OutKeys_Inner = { "OutKeys", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue_Statics::NewProp_StringToMatch_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue_Statics::NewProp_StringToMatch = { "StringToMatch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DatasmithContentBlueprintLibrary_eventGetDatasmithUserDataKeysAndValuesForValue_Parms, StringToMatch), METADATA_PARAMS(Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue_Statics::NewProp_StringToMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue_Statics::NewProp_StringToMatch_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DatasmithContentBlueprintLibrary_eventGetDatasmithUserDataKeysAndValuesForValue_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue_Statics::NewProp_OutValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue_Statics::NewProp_OutValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue_Statics::NewProp_OutKeys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue_Statics::NewProp_OutKeys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue_Statics::NewProp_StringToMatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue_Statics::NewProp_Object,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith User Data" },
		{ "Comment", "/**\n\x09 * Get the keys and values for which the associated value contains the string to match for the Datasmith User Data of the given object.\n\x09 * @param\x09Object\x09\x09\x09The Object from which to retrieve the Datasmith User Data.\n\x09 * @param\x09StringToMatch\x09The string to match in the values.\n\x09 * @param\x09OutKeys\x09\x09\x09Output array of keys for which the associated values contain the string to match.\n\x09 * @param\x09OutValues\x09\x09Output array of values associated to the keys.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DatasmithContentBlueprintLibrary.h" },
		{ "ToolTip", "Get the keys and values for which the associated value contains the string to match for the Datasmith User Data of the given object.\n@param       Object                  The Object from which to retrieve the Datasmith User Data.\n@param       StringToMatch   The string to match in the values.\n@param       OutKeys                 Output array of keys for which the associated values contain the string to match.\n@param       OutValues               Output array of values associated to the keys." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithContentBlueprintLibrary, nullptr, "GetDatasmithUserDataKeysAndValuesForValue", nullptr, nullptr, sizeof(DatasmithContentBlueprintLibrary_eventGetDatasmithUserDataKeysAndValuesForValue_Parms), Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey_Statics
	{
		struct DatasmithContentBlueprintLibrary_eventGetDatasmithUserDataValueForKey_Parms
		{
			UObject* Object;
			FName Key;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DatasmithContentBlueprintLibrary_eventGetDatasmithUserDataValueForKey_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DatasmithContentBlueprintLibrary_eventGetDatasmithUserDataValueForKey_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DatasmithContentBlueprintLibrary_eventGetDatasmithUserDataValueForKey_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey_Statics::NewProp_Object,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith User Data" },
		{ "Comment", "/**\n\x09 * Get the value of the given key for the Datasmith User Data of the given object.\n\x09 * @param\x09Object\x09The Object from which to retrieve the Datasmith User Data.\n\x09 * @param\x09Key\x09\x09The key to find in the Datasmith User Data.\n\x09 * @return\x09\x09\x09The string value associated with the given key\n\x09 */" },
		{ "ModuleRelativePath", "Public/DatasmithContentBlueprintLibrary.h" },
		{ "ToolTip", "Get the value of the given key for the Datasmith User Data of the given object.\n@param       Object  The Object from which to retrieve the Datasmith User Data.\n@param       Key             The key to find in the Datasmith User Data.\n@return                      The string value associated with the given key" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithContentBlueprintLibrary, nullptr, "GetDatasmithUserDataValueForKey", nullptr, nullptr, sizeof(DatasmithContentBlueprintLibrary_eventGetDatasmithUserDataValueForKey_Parms), Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDatasmithContentBlueprintLibrary_NoRegister()
	{
		return UDatasmithContentBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithContentBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithContentBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDatasmithContentBlueprintLibrary_Statics::FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllDatasmithUserData, "GetAllDatasmithUserData" }, // 1606497159
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllObjectsAndValuesForKey, "GetAllObjectsAndValuesForKey" }, // 2644668730
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserData, "GetDatasmithUserData" }, // 1731956511
		{ &Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue, "GetDatasmithUserDataKeysAndValuesForValue" }, // 473592957
		{ &Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey, "GetDatasmithUserDataValueForKey" }, // 1975804133
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithContentBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DatasmithContentBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/DatasmithContentBlueprintLibrary.h" },
		{ "ScriptName", "DatasmithContentLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithContentBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithContentBlueprintLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithContentBlueprintLibrary_Statics::ClassParams = {
		&UDatasmithContentBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithContentBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithContentBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithContentBlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDatasmithContentBlueprintLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDatasmithContentBlueprintLibrary, 192165990);
	template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithContentBlueprintLibrary>()
	{
		return UDatasmithContentBlueprintLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDatasmithContentBlueprintLibrary(Z_Construct_UClass_UDatasmithContentBlueprintLibrary, &UDatasmithContentBlueprintLibrary::StaticClass, TEXT("/Script/DatasmithContent"), TEXT("UDatasmithContentBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithContentBlueprintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
