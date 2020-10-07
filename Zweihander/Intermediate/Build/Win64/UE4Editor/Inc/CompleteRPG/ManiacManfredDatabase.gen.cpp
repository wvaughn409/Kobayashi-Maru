// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CompleteRPG/ArticyGenerated/ManiacManfredDatabase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManiacManfredDatabase() {}
// Cross Module References
	COMPLETERPG_API UClass* Z_Construct_UClass_UManiacManfredDatabase_NoRegister();
	COMPLETERPG_API UClass* Z_Construct_UClass_UManiacManfredDatabase();
	ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyDatabase();
	UPackage* Z_Construct_UPackage__Script_CompleteRPG();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COMPLETERPG_API UClass* Z_Construct_UClass_UManiacManfredGlobalVariables_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UManiacManfredDatabase::execGetGVs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UManiacManfredGlobalVariables**)Z_Param__Result=P_THIS->GetGVs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManiacManfredDatabase::execGet)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UManiacManfredDatabase**)Z_Param__Result=UManiacManfredDatabase::Get(Z_Param_WorldContext);
		P_NATIVE_END;
	}
	void UManiacManfredDatabase::StaticRegisterNativesUManiacManfredDatabase()
	{
		UClass* Class = UManiacManfredDatabase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Get", &UManiacManfredDatabase::execGet },
			{ "GetGVs", &UManiacManfredDatabase::execGetGVs },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UManiacManfredDatabase_Get_Statics
	{
		struct ManiacManfredDatabase_eventGet_Parms
		{
			const UObject* WorldContext;
			UManiacManfredDatabase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManiacManfredDatabase_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManiacManfredDatabase_eventGet_Parms, ReturnValue), Z_Construct_UClass_UManiacManfredDatabase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManiacManfredDatabase_Get_Statics::NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManiacManfredDatabase_Get_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManiacManfredDatabase_eventGet_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UManiacManfredDatabase_Get_Statics::NewProp_WorldContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UManiacManfredDatabase_Get_Statics::NewProp_WorldContext_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManiacManfredDatabase_Get_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManiacManfredDatabase_Get_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManiacManfredDatabase_Get_Statics::NewProp_WorldContext,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManiacManfredDatabase_Get_Statics::Function_MetaDataParams[] = {
		{ "Category", "articy:draft" },
		{ "Comment", "/** Get the instace (copy of the asset) of the database. */" },
		{ "DefaultToSelf", "WorldContext" },
		{ "DisplayName", "GetArticyDB" },
		{ "HidePin", "WorldContext" },
		{ "keywords", "database" },
		{ "ModuleRelativePath", "ArticyGenerated/ManiacManfredDatabase.h" },
		{ "ToolTip", "Get the instace (copy of the asset) of the database." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManiacManfredDatabase_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManiacManfredDatabase, nullptr, "Get", nullptr, nullptr, sizeof(ManiacManfredDatabase_eventGet_Parms), Z_Construct_UFunction_UManiacManfredDatabase_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManiacManfredDatabase_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManiacManfredDatabase_Get_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManiacManfredDatabase_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManiacManfredDatabase_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManiacManfredDatabase_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManiacManfredDatabase_GetGVs_Statics
	{
		struct ManiacManfredDatabase_eventGetGVs_Parms
		{
			UManiacManfredGlobalVariables* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManiacManfredDatabase_GetGVs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManiacManfredDatabase_eventGetGVs_Parms, ReturnValue), Z_Construct_UClass_UManiacManfredGlobalVariables_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManiacManfredDatabase_GetGVs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManiacManfredDatabase_GetGVs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManiacManfredDatabase_GetGVs_Statics::Function_MetaDataParams[] = {
		{ "Category", "articy:draft" },
		{ "Comment", "/** Get the global variables. */" },
		{ "keywords", "global variables" },
		{ "ModuleRelativePath", "ArticyGenerated/ManiacManfredDatabase.h" },
		{ "ToolTip", "Get the global variables." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManiacManfredDatabase_GetGVs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManiacManfredDatabase, nullptr, "GetGVs", nullptr, nullptr, sizeof(ManiacManfredDatabase_eventGetGVs_Parms), Z_Construct_UFunction_UManiacManfredDatabase_GetGVs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManiacManfredDatabase_GetGVs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManiacManfredDatabase_GetGVs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManiacManfredDatabase_GetGVs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManiacManfredDatabase_GetGVs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManiacManfredDatabase_GetGVs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UManiacManfredDatabase_NoRegister()
	{
		return UManiacManfredDatabase::StaticClass();
	}
	struct Z_Construct_UClass_UManiacManfredDatabase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UManiacManfredDatabase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UArticyDatabase,
		(UObject* (*)())Z_Construct_UPackage__Script_CompleteRPG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UManiacManfredDatabase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UManiacManfredDatabase_Get, "Get" }, // 1595450979
		{ &Z_Construct_UFunction_UManiacManfredDatabase_GetGVs, "GetGVs" }, // 421330362
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManiacManfredDatabase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ArticyGenerated/ManiacManfredDatabase.h" },
		{ "ModuleRelativePath", "ArticyGenerated/ManiacManfredDatabase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UManiacManfredDatabase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UManiacManfredDatabase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UManiacManfredDatabase_Statics::ClassParams = {
		&UManiacManfredDatabase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UManiacManfredDatabase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UManiacManfredDatabase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UManiacManfredDatabase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UManiacManfredDatabase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UManiacManfredDatabase, 3162914974);
	template<> COMPLETERPG_API UClass* StaticClass<UManiacManfredDatabase>()
	{
		return UManiacManfredDatabase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UManiacManfredDatabase(Z_Construct_UClass_UManiacManfredDatabase, &UManiacManfredDatabase::StaticClass, TEXT("/Script/CompleteRPG"), TEXT("UManiacManfredDatabase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UManiacManfredDatabase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
