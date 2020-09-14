// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemUtils/Classes/LeaderboardBlueprintLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLeaderboardBlueprintLibrary() {}
// Cross Module References
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_ULeaderboardBlueprintLibrary_NoRegister();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_ULeaderboardBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ULeaderboardBlueprintLibrary::execWriteLeaderboardInteger)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_PROPERTY(FNameProperty,Z_Param_StatName);
		P_GET_PROPERTY(FIntProperty,Z_Param_StatValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULeaderboardBlueprintLibrary::WriteLeaderboardInteger(Z_Param_PlayerController,Z_Param_StatName,Z_Param_StatValue);
		P_NATIVE_END;
	}
	void ULeaderboardBlueprintLibrary::StaticRegisterNativesULeaderboardBlueprintLibrary()
	{
		UClass* Class = ULeaderboardBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "WriteLeaderboardInteger", &ULeaderboardBlueprintLibrary::execWriteLeaderboardInteger },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULeaderboardBlueprintLibrary_WriteLeaderboardInteger_Statics
	{
		struct LeaderboardBlueprintLibrary_eventWriteLeaderboardInteger_Parms
		{
			APlayerController* PlayerController;
			FName StatName;
			int32 StatValue;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StatValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StatName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULeaderboardBlueprintLibrary_WriteLeaderboardInteger_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LeaderboardBlueprintLibrary_eventWriteLeaderboardInteger_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULeaderboardBlueprintLibrary_WriteLeaderboardInteger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LeaderboardBlueprintLibrary_eventWriteLeaderboardInteger_Parms), &Z_Construct_UFunction_ULeaderboardBlueprintLibrary_WriteLeaderboardInteger_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULeaderboardBlueprintLibrary_WriteLeaderboardInteger_Statics::NewProp_StatValue = { "StatValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeaderboardBlueprintLibrary_eventWriteLeaderboardInteger_Parms, StatValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULeaderboardBlueprintLibrary_WriteLeaderboardInteger_Statics::NewProp_StatName = { "StatName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeaderboardBlueprintLibrary_eventWriteLeaderboardInteger_Parms, StatName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeaderboardBlueprintLibrary_WriteLeaderboardInteger_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeaderboardBlueprintLibrary_eventWriteLeaderboardInteger_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeaderboardBlueprintLibrary_WriteLeaderboardInteger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeaderboardBlueprintLibrary_WriteLeaderboardInteger_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeaderboardBlueprintLibrary_WriteLeaderboardInteger_Statics::NewProp_StatValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeaderboardBlueprintLibrary_WriteLeaderboardInteger_Statics::NewProp_StatName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeaderboardBlueprintLibrary_WriteLeaderboardInteger_Statics::NewProp_PlayerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeaderboardBlueprintLibrary_WriteLeaderboardInteger_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Leaderboard" },
		{ "Comment", "/** Writes an integer value to the specified leaderboard */" },
		{ "ModuleRelativePath", "Classes/LeaderboardBlueprintLibrary.h" },
		{ "ToolTip", "Writes an integer value to the specified leaderboard" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeaderboardBlueprintLibrary_WriteLeaderboardInteger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeaderboardBlueprintLibrary, nullptr, "WriteLeaderboardInteger", nullptr, nullptr, sizeof(LeaderboardBlueprintLibrary_eventWriteLeaderboardInteger_Parms), Z_Construct_UFunction_ULeaderboardBlueprintLibrary_WriteLeaderboardInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeaderboardBlueprintLibrary_WriteLeaderboardInteger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeaderboardBlueprintLibrary_WriteLeaderboardInteger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeaderboardBlueprintLibrary_WriteLeaderboardInteger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeaderboardBlueprintLibrary_WriteLeaderboardInteger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeaderboardBlueprintLibrary_WriteLeaderboardInteger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULeaderboardBlueprintLibrary_NoRegister()
	{
		return ULeaderboardBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_ULeaderboardBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULeaderboardBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULeaderboardBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULeaderboardBlueprintLibrary_WriteLeaderboardInteger, "WriteLeaderboardInteger" }, // 1572930265
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeaderboardBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A beacon host used for taking reservations for an existing game session\n */" },
		{ "IncludePath", "LeaderboardBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Classes/LeaderboardBlueprintLibrary.h" },
		{ "ScriptName", "LeaderboardLibrary" },
		{ "ToolTip", "A beacon host used for taking reservations for an existing game session" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULeaderboardBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULeaderboardBlueprintLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULeaderboardBlueprintLibrary_Statics::ClassParams = {
		&ULeaderboardBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULeaderboardBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULeaderboardBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULeaderboardBlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULeaderboardBlueprintLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULeaderboardBlueprintLibrary, 487811747);
	template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<ULeaderboardBlueprintLibrary>()
	{
		return ULeaderboardBlueprintLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULeaderboardBlueprintLibrary(Z_Construct_UClass_ULeaderboardBlueprintLibrary, &ULeaderboardBlueprintLibrary::StaticClass, TEXT("/Script/OnlineSubsystemUtils"), TEXT("ULeaderboardBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULeaderboardBlueprintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
