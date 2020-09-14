// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/Public/Interfaces/TurnBasedMatchInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTurnBasedMatchInterface() {}
// Cross Module References
	ONLINESUBSYSTEM_API UClass* Z_Construct_UClass_UTurnBasedMatchInterface_NoRegister();
	ONLINESUBSYSTEM_API UClass* Z_Construct_UClass_UTurnBasedMatchInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystem();
// End Cross Module References
	void ITurnBasedMatchInterface::OnMatchEnded(const FString& Match)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnMatchEnded instead.");
	}
	void ITurnBasedMatchInterface::OnMatchReceivedTurn(const FString& Match, bool bDidBecomeActive)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnMatchReceivedTurn instead.");
	}
	void UTurnBasedMatchInterface::StaticRegisterNativesUTurnBasedMatchInterface()
	{
	}
	struct Z_Construct_UFunction_UTurnBasedMatchInterface_OnMatchEnded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Match_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Match;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTurnBasedMatchInterface_OnMatchEnded_Statics::NewProp_Match_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTurnBasedMatchInterface_OnMatchEnded_Statics::NewProp_Match = { "Match", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TurnBasedMatchInterface_eventOnMatchEnded_Parms, Match), METADATA_PARAMS(Z_Construct_UFunction_UTurnBasedMatchInterface_OnMatchEnded_Statics::NewProp_Match_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnBasedMatchInterface_OnMatchEnded_Statics::NewProp_Match_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTurnBasedMatchInterface_OnMatchEnded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnBasedMatchInterface_OnMatchEnded_Statics::NewProp_Match,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTurnBasedMatchInterface_OnMatchEnded_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|TurnBased" },
		{ "ModuleRelativePath", "Public/Interfaces/TurnBasedMatchInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnBasedMatchInterface_OnMatchEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTurnBasedMatchInterface, nullptr, "OnMatchEnded", nullptr, nullptr, sizeof(TurnBasedMatchInterface_eventOnMatchEnded_Parms), Z_Construct_UFunction_UTurnBasedMatchInterface_OnMatchEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnBasedMatchInterface_OnMatchEnded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTurnBasedMatchInterface_OnMatchEnded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnBasedMatchInterface_OnMatchEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTurnBasedMatchInterface_OnMatchEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTurnBasedMatchInterface_OnMatchEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTurnBasedMatchInterface_OnMatchReceivedTurn_Statics
	{
		static void NewProp_bDidBecomeActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDidBecomeActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Match_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Match;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTurnBasedMatchInterface_OnMatchReceivedTurn_Statics::NewProp_bDidBecomeActive_SetBit(void* Obj)
	{
		((TurnBasedMatchInterface_eventOnMatchReceivedTurn_Parms*)Obj)->bDidBecomeActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTurnBasedMatchInterface_OnMatchReceivedTurn_Statics::NewProp_bDidBecomeActive = { "bDidBecomeActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TurnBasedMatchInterface_eventOnMatchReceivedTurn_Parms), &Z_Construct_UFunction_UTurnBasedMatchInterface_OnMatchReceivedTurn_Statics::NewProp_bDidBecomeActive_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTurnBasedMatchInterface_OnMatchReceivedTurn_Statics::NewProp_Match_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTurnBasedMatchInterface_OnMatchReceivedTurn_Statics::NewProp_Match = { "Match", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TurnBasedMatchInterface_eventOnMatchReceivedTurn_Parms, Match), METADATA_PARAMS(Z_Construct_UFunction_UTurnBasedMatchInterface_OnMatchReceivedTurn_Statics::NewProp_Match_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnBasedMatchInterface_OnMatchReceivedTurn_Statics::NewProp_Match_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTurnBasedMatchInterface_OnMatchReceivedTurn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnBasedMatchInterface_OnMatchReceivedTurn_Statics::NewProp_bDidBecomeActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnBasedMatchInterface_OnMatchReceivedTurn_Statics::NewProp_Match,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTurnBasedMatchInterface_OnMatchReceivedTurn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|TurnBased" },
		{ "ModuleRelativePath", "Public/Interfaces/TurnBasedMatchInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnBasedMatchInterface_OnMatchReceivedTurn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTurnBasedMatchInterface, nullptr, "OnMatchReceivedTurn", nullptr, nullptr, sizeof(TurnBasedMatchInterface_eventOnMatchReceivedTurn_Parms), Z_Construct_UFunction_UTurnBasedMatchInterface_OnMatchReceivedTurn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnBasedMatchInterface_OnMatchReceivedTurn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTurnBasedMatchInterface_OnMatchReceivedTurn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnBasedMatchInterface_OnMatchReceivedTurn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTurnBasedMatchInterface_OnMatchReceivedTurn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTurnBasedMatchInterface_OnMatchReceivedTurn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTurnBasedMatchInterface_NoRegister()
	{
		return UTurnBasedMatchInterface::StaticClass();
	}
	struct Z_Construct_UClass_UTurnBasedMatchInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTurnBasedMatchInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTurnBasedMatchInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTurnBasedMatchInterface_OnMatchEnded, "OnMatchEnded" }, // 579458969
		{ &Z_Construct_UFunction_UTurnBasedMatchInterface_OnMatchReceivedTurn, "OnMatchReceivedTurn" }, // 3103149503
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTurnBasedMatchInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interfaces/TurnBasedMatchInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTurnBasedMatchInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITurnBasedMatchInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTurnBasedMatchInterface_Statics::ClassParams = {
		&UTurnBasedMatchInterface::StaticClass,
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
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTurnBasedMatchInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTurnBasedMatchInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTurnBasedMatchInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTurnBasedMatchInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTurnBasedMatchInterface, 839163924);
	template<> ONLINESUBSYSTEM_API UClass* StaticClass<UTurnBasedMatchInterface>()
	{
		return UTurnBasedMatchInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTurnBasedMatchInterface(Z_Construct_UClass_UTurnBasedMatchInterface, &UTurnBasedMatchInterface::StaticClass, TEXT("/Script/OnlineSubsystem"), TEXT("UTurnBasedMatchInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTurnBasedMatchInterface);
	static FName NAME_UTurnBasedMatchInterface_OnMatchEnded = FName(TEXT("OnMatchEnded"));
	void ITurnBasedMatchInterface::Execute_OnMatchEnded(UObject* O, const FString& Match)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTurnBasedMatchInterface::StaticClass()));
		TurnBasedMatchInterface_eventOnMatchEnded_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTurnBasedMatchInterface_OnMatchEnded);
		if (Func)
		{
			Parms.Match=Match;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_UTurnBasedMatchInterface_OnMatchReceivedTurn = FName(TEXT("OnMatchReceivedTurn"));
	void ITurnBasedMatchInterface::Execute_OnMatchReceivedTurn(UObject* O, const FString& Match, bool bDidBecomeActive)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTurnBasedMatchInterface::StaticClass()));
		TurnBasedMatchInterface_eventOnMatchReceivedTurn_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTurnBasedMatchInterface_OnMatchReceivedTurn);
		if (Func)
		{
			Parms.Match=Match;
			Parms.bDidBecomeActive=bDidBecomeActive;
			O->ProcessEvent(Func, &Parms);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
