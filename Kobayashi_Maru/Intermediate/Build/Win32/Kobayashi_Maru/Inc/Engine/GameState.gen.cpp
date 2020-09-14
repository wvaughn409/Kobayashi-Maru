// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/GameFramework/GameState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameState() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameState();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	DEFINE_FUNCTION(AGameState::execOnRep_ElapsedTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ElapsedTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameState::execOnRep_MatchState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MatchState();
		P_NATIVE_END;
	}
	void AGameState::StaticRegisterNativesAGameState()
	{
		UClass* Class = AGameState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_ElapsedTime", &AGameState::execOnRep_ElapsedTime },
			{ "OnRep_MatchState", &AGameState::execOnRep_MatchState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGameState_OnRep_ElapsedTime_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameState_OnRep_ElapsedTime_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Gives clients the chance to do something when time gets updates */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameState.h" },
		{ "ToolTip", "Gives clients the chance to do something when time gets updates" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameState_OnRep_ElapsedTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameState, nullptr, "OnRep_ElapsedTime", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameState_OnRep_ElapsedTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameState_OnRep_ElapsedTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameState_OnRep_ElapsedTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameState_OnRep_ElapsedTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameState_OnRep_MatchState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameState_OnRep_MatchState_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Match state has changed */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameState.h" },
		{ "ToolTip", "Match state has changed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameState_OnRep_MatchState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameState, nullptr, "OnRep_MatchState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameState_OnRep_MatchState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameState_OnRep_MatchState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameState_OnRep_MatchState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameState_OnRep_MatchState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGameState_NoRegister()
	{
		return AGameState::StaticClass();
	}
	struct Z_Construct_UClass_AGameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElapsedTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ElapsedTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousMatchState_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PreviousMatchState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchState_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MatchState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGameState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGameState_OnRep_ElapsedTime, "OnRep_ElapsedTime" }, // 381352627
		{ &Z_Construct_UFunction_AGameState_OnRep_MatchState, "OnRep_MatchState" }, // 1109969544
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * GameState is a subclass of GameStateBase that behaves like a multiplayer match-based game.\n * It is tied to functionality in GameMode.\n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GameFramework/GameState.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "GameState is a subclass of GameStateBase that behaves like a multiplayer match-based game.\nIt is tied to functionality in GameMode." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameState_Statics::NewProp_ElapsedTime_MetaData[] = {
		{ "Category", "GameState" },
		{ "Comment", "/** Elapsed game time since match has started. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameState.h" },
		{ "ToolTip", "Elapsed game time since match has started." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameState_Statics::NewProp_ElapsedTime = { "ElapsedTime", "OnRep_ElapsedTime", (EPropertyFlags)0x0010000100000034, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameState, ElapsedTime), METADATA_PARAMS(Z_Construct_UClass_AGameState_Statics::NewProp_ElapsedTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameState_Statics::NewProp_ElapsedTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameState_Statics::NewProp_PreviousMatchState_MetaData[] = {
		{ "Category", "GameState" },
		{ "Comment", "/** Previous map state, used to handle if multiple transitions happen per frame */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameState.h" },
		{ "ToolTip", "Previous map state, used to handle if multiple transitions happen per frame" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AGameState_Statics::NewProp_PreviousMatchState = { "PreviousMatchState", nullptr, (EPropertyFlags)0x0020080000020815, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameState, PreviousMatchState), METADATA_PARAMS(Z_Construct_UClass_AGameState_Statics::NewProp_PreviousMatchState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameState_Statics::NewProp_PreviousMatchState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameState_Statics::NewProp_MatchState_MetaData[] = {
		{ "Category", "GameState" },
		{ "Comment", "/** What match state we are currently in */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameState.h" },
		{ "ToolTip", "What match state we are currently in" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AGameState_Statics::NewProp_MatchState = { "MatchState", "OnRep_MatchState", (EPropertyFlags)0x0020080100020835, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameState, MatchState), METADATA_PARAMS(Z_Construct_UClass_AGameState_Statics::NewProp_MatchState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameState_Statics::NewProp_MatchState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameState_Statics::NewProp_ElapsedTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameState_Statics::NewProp_PreviousMatchState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameState_Statics::NewProp_MatchState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGameState_Statics::ClassParams = {
		&AGameState::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGameState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGameState_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGameState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGameState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameState, 1348011911);
	template<> ENGINE_API UClass* StaticClass<AGameState>()
	{
		return AGameState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameState(Z_Construct_UClass_AGameState, &AGameState::StaticClass, TEXT("/Script/Engine"), TEXT("AGameState"), false, nullptr, nullptr, nullptr);

	void AGameState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_MatchState(TEXT("MatchState"));
		static const FName Name_ElapsedTime(TEXT("ElapsedTime"));

		const bool bIsValid = true
			&& Name_MatchState == ClassReps[(int32)ENetFields_Private::MatchState].Property->GetFName()
			&& Name_ElapsedTime == ClassReps[(int32)ENetFields_Private::ElapsedTime].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AGameState"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
