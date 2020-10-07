// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CompleteRPG/Public/FlockManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlockManager() {}
// Cross Module References
	COMPLETERPG_API UEnum* Z_Construct_UEnum_CompleteRPG_ETargetCentroidDirection();
	UPackage* Z_Construct_UPackage__Script_CompleteRPG();
	COMPLETERPG_API UEnum* Z_Construct_UEnum_CompleteRPG_EFlockMovementMode();
	COMPLETERPG_API UEnum* Z_Construct_UEnum_CompleteRPG_EAgentState();
	COMPLETERPG_API UScriptStruct* Z_Construct_UScriptStruct_FAgentInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
	COMPLETERPG_API UClass* Z_Construct_UClass_UFlockCrowdFollowingComponent_NoRegister();
	COMPLETERPG_API UClass* Z_Construct_UClass_AFlockManager_NoRegister();
	COMPLETERPG_API UClass* Z_Construct_UClass_AFlockManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COMPLETERPG_API UClass* Z_Construct_UClass_ACrowdTestChar_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
// End Cross Module References
	static UEnum* ETargetCentroidDirection_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CompleteRPG_ETargetCentroidDirection, Z_Construct_UPackage__Script_CompleteRPG(), TEXT("ETargetCentroidDirection"));
		}
		return Singleton;
	}
	template<> COMPLETERPG_API UEnum* StaticEnum<ETargetCentroidDirection>()
	{
		return ETargetCentroidDirection_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETargetCentroidDirection(ETargetCentroidDirection_StaticEnum, TEXT("/Script/CompleteRPG"), TEXT("ETargetCentroidDirection"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CompleteRPG_ETargetCentroidDirection_Hash() { return 3222353742U; }
	UEnum* Z_Construct_UEnum_CompleteRPG_ETargetCentroidDirection()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CompleteRPG();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETargetCentroidDirection"), 0, Get_Z_Construct_UEnum_CompleteRPG_ETargetCentroidDirection_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETargetCentroidDirection::AwayFromPlayer", (int64)ETargetCentroidDirection::AwayFromPlayer },
				{ "ETargetCentroidDirection::BehindPlayer", (int64)ETargetCentroidDirection::BehindPlayer },
				{ "ETargetCentroidDirection::LeftOfPlayer", (int64)ETargetCentroidDirection::LeftOfPlayer },
				{ "ETargetCentroidDirection::RightOfPlayer", (int64)ETargetCentroidDirection::RightOfPlayer },
				{ "ETargetCentroidDirection::Count", (int64)ETargetCentroidDirection::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AwayFromPlayer.Name", "ETargetCentroidDirection::AwayFromPlayer" },
				{ "BehindPlayer.Name", "ETargetCentroidDirection::BehindPlayer" },
				{ "Comment", "/** Enum describing query points for navmesh projection */" },
				{ "Count.Name", "ETargetCentroidDirection::Count" },
				{ "LeftOfPlayer.Name", "ETargetCentroidDirection::LeftOfPlayer" },
				{ "ModuleRelativePath", "Public/FlockManager.h" },
				{ "RightOfPlayer.Name", "ETargetCentroidDirection::RightOfPlayer" },
				{ "ToolTip", "Enum describing query points for navmesh projection" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CompleteRPG,
				nullptr,
				"ETargetCentroidDirection",
				"ETargetCentroidDirection",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EFlockMovementMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CompleteRPG_EFlockMovementMode, Z_Construct_UPackage__Script_CompleteRPG(), TEXT("EFlockMovementMode"));
		}
		return Singleton;
	}
	template<> COMPLETERPG_API UEnum* StaticEnum<EFlockMovementMode>()
	{
		return EFlockMovementMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFlockMovementMode(EFlockMovementMode_StaticEnum, TEXT("/Script/CompleteRPG"), TEXT("EFlockMovementMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CompleteRPG_EFlockMovementMode_Hash() { return 1185886023U; }
	UEnum* Z_Construct_UEnum_CompleteRPG_EFlockMovementMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CompleteRPG();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFlockMovementMode"), 0, Get_Z_Construct_UEnum_CompleteRPG_EFlockMovementMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFlockMovementMode::Flock", (int64)EFlockMovementMode::Flock },
				{ "EFlockMovementMode::JustWalkForwards", (int64)EFlockMovementMode::JustWalkForwards },
				{ "EFlockMovementMode::SpecifyTargetPosition", (int64)EFlockMovementMode::SpecifyTargetPosition },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Flock.Comment", "/** Use flocking system */" },
				{ "Flock.Name", "EFlockMovementMode::Flock" },
				{ "Flock.ToolTip", "Use flocking system" },
				{ "JustWalkForwards.Comment", "/** Useful for performance testing - just walk forwards */" },
				{ "JustWalkForwards.Name", "EFlockMovementMode::JustWalkForwards" },
				{ "JustWalkForwards.ToolTip", "Useful for performance testing - just walk forwards" },
				{ "ModuleRelativePath", "Public/FlockManager.h" },
				{ "SpecifyTargetPosition.Comment", "/** Specify a target position using PositionToRunTo and route find to it */" },
				{ "SpecifyTargetPosition.Name", "EFlockMovementMode::SpecifyTargetPosition" },
				{ "SpecifyTargetPosition.ToolTip", "Specify a target position using PositionToRunTo and route find to it" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CompleteRPG,
				nullptr,
				"EFlockMovementMode",
				"EFlockMovementMode",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EAgentState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CompleteRPG_EAgentState, Z_Construct_UPackage__Script_CompleteRPG(), TEXT("EAgentState"));
		}
		return Singleton;
	}
	template<> COMPLETERPG_API UEnum* StaticEnum<EAgentState>()
	{
		return EAgentState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAgentState(EAgentState_StaticEnum, TEXT("/Script/CompleteRPG"), TEXT("EAgentState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CompleteRPG_EAgentState_Hash() { return 1039119572U; }
	UEnum* Z_Construct_UEnum_CompleteRPG_EAgentState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CompleteRPG();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAgentState"), 0, Get_Z_Construct_UEnum_CompleteRPG_EAgentState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAgentState::Grazing", (int64)EAgentState::Grazing },
				{ "EAgentState::Walking", (int64)EAgentState::Walking },
				{ "EAgentState::Fleeing", (int64)EAgentState::Fleeing },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Fleeing.Name", "EAgentState::Fleeing" },
				{ "Grazing.Name", "EAgentState::Grazing" },
				{ "ModuleRelativePath", "Public/FlockManager.h" },
				{ "Walking.Name", "EAgentState::Walking" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CompleteRPG,
				nullptr,
				"EAgentState",
				"EAgentState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FAgentInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COMPLETERPG_API uint32 Get_Z_Construct_UScriptStruct_FAgentInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAgentInfo, Z_Construct_UPackage__Script_CompleteRPG(), TEXT("AgentInfo"), sizeof(FAgentInfo), Get_Z_Construct_UScriptStruct_FAgentInfo_Hash());
	}
	return Singleton;
}
template<> COMPLETERPG_API UScriptStruct* StaticStruct<FAgentInfo>()
{
	return FAgentInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAgentInfo(FAgentInfo::StaticStruct, TEXT("/Script/CompleteRPG"), TEXT("AgentInfo"), false, nullptr, nullptr);
static struct FScriptStruct_CompleteRPG_StaticRegisterNativesFAgentInfo
{
	FScriptStruct_CompleteRPG_StaticRegisterNativesFAgentInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AgentInfo")),new UScriptStruct::TCppStructOps<FAgentInfo>);
	}
} ScriptStruct_CompleteRPG_StaticRegisterNativesFAgentInfo;
	struct Z_Construct_UScriptStruct_FAgentInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetCentroidDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TargetCentroidDirection;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TargetCentroidDirection_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWantsNewPath_MetaData[];
#endif
		static void NewProp_bWantsNewPath_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWantsNewPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerDeltaLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayerDeltaLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpookednessRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpookednessRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spookedness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Spookedness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeToMove_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeToMove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeToPathFind_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeToPathFind;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetCentroid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetCentroid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerceivedCenterOfMass_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PerceivedCenterOfMass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningPawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningPawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterMovementComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterMovementComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathFollowingComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PathFollowingComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgentInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FlockManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAgentInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAgentInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_TargetCentroidDirection_MetaData[] = {
		{ "Category", "AgentInfo" },
		{ "Comment", "/** Projection direction we last took */" },
		{ "ModuleRelativePath", "Public/FlockManager.h" },
		{ "ToolTip", "Projection direction we last took" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_TargetCentroidDirection = { "TargetCentroidDirection", nullptr, (EPropertyFlags)0x0010000000022001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAgentInfo, TargetCentroidDirection), Z_Construct_UEnum_CompleteRPG_ETargetCentroidDirection, METADATA_PARAMS(Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_TargetCentroidDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_TargetCentroidDirection_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_TargetCentroidDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_bWantsNewPath_MetaData[] = {
		{ "Category", "AgentInfo" },
		{ "Comment", "/** New path required (agent is queued) */" },
		{ "ModuleRelativePath", "Public/FlockManager.h" },
		{ "ToolTip", "New path required (agent is queued)" },
	};
#endif
	void Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_bWantsNewPath_SetBit(void* Obj)
	{
		((FAgentInfo*)Obj)->bWantsNewPath = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_bWantsNewPath = { "bWantsNewPath", nullptr, (EPropertyFlags)0x0010000000022001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAgentInfo), &Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_bWantsNewPath_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_bWantsNewPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_bWantsNewPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_State_MetaData[] = {
		{ "Category", "AgentInfo" },
		{ "Comment", "/** Agent state */" },
		{ "ModuleRelativePath", "Public/FlockManager.h" },
		{ "ToolTip", "Agent state" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000022001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAgentInfo, State), Z_Construct_UEnum_CompleteRPG_EAgentState, METADATA_PARAMS(Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_State_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_PlayerDeltaLength_MetaData[] = {
		{ "Category", "AgentInfo" },
		{ "Comment", "/** Distance to player */" },
		{ "ModuleRelativePath", "Public/FlockManager.h" },
		{ "ToolTip", "Distance to player" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_PlayerDeltaLength = { "PlayerDeltaLength", nullptr, (EPropertyFlags)0x0010000000022001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAgentInfo, PlayerDeltaLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_PlayerDeltaLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_PlayerDeltaLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_SpookednessRate_MetaData[] = {
		{ "Category", "AgentInfo" },
		{ "Comment", "/** Spookedness rate 0->1 */" },
		{ "ModuleRelativePath", "Public/FlockManager.h" },
		{ "ToolTip", "Spookedness rate 0->1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_SpookednessRate = { "SpookednessRate", nullptr, (EPropertyFlags)0x0010000000022001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAgentInfo, SpookednessRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_SpookednessRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_SpookednessRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_Spookedness_MetaData[] = {
		{ "Category", "AgentInfo" },
		{ "Comment", "/** Spookedness factor */" },
		{ "ModuleRelativePath", "Public/FlockManager.h" },
		{ "ToolTip", "Spookedness factor" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_Spookedness = { "Spookedness", nullptr, (EPropertyFlags)0x0010000000022001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAgentInfo, Spookedness), METADATA_PARAMS(Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_Spookedness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_Spookedness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_TimeToMove_MetaData[] = {
		{ "Category", "AgentInfo" },
		{ "Comment", "/** Time until next move is forced */" },
		{ "ModuleRelativePath", "Public/FlockManager.h" },
		{ "ToolTip", "Time until next move is forced" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_TimeToMove = { "TimeToMove", nullptr, (EPropertyFlags)0x0010000000022001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAgentInfo, TimeToMove), METADATA_PARAMS(Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_TimeToMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_TimeToMove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_TimeToPathFind_MetaData[] = {
		{ "Category", "AgentInfo" },
		{ "Comment", "/** Time until next pathfind is forced */" },
		{ "ModuleRelativePath", "Public/FlockManager.h" },
		{ "ToolTip", "Time until next pathfind is forced" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_TimeToPathFind = { "TimeToPathFind", nullptr, (EPropertyFlags)0x0010000000022001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAgentInfo, TimeToPathFind), METADATA_PARAMS(Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_TimeToPathFind_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_TimeToPathFind_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_TargetCentroid_MetaData[] = {
		{ "Category", "AgentInfo" },
		{ "Comment", "/** Centroid of the target location area */" },
		{ "ModuleRelativePath", "Public/FlockManager.h" },
		{ "ToolTip", "Centroid of the target location area" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_TargetCentroid = { "TargetCentroid", nullptr, (EPropertyFlags)0x0010000000022001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAgentInfo, TargetCentroid), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_TargetCentroid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_TargetCentroid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_TargetLocation_MetaData[] = {
		{ "Category", "AgentInfo" },
		{ "Comment", "/** Target location of this agent */" },
		{ "ModuleRelativePath", "Public/FlockManager.h" },
		{ "ToolTip", "Target location of this agent" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000022001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAgentInfo, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_TargetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_TargetLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_PerceivedCenterOfMass_MetaData[] = {
		{ "Category", "AgentInfo" },
		{ "Comment", "/** Center of mass that this agent perceives */" },
		{ "ModuleRelativePath", "Public/FlockManager.h" },
		{ "ToolTip", "Center of mass that this agent perceives" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_PerceivedCenterOfMass = { "PerceivedCenterOfMass", nullptr, (EPropertyFlags)0x0010000000022001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAgentInfo, PerceivedCenterOfMass), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_PerceivedCenterOfMass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_PerceivedCenterOfMass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "AgentInfo" },
		{ "Comment", "/** Current location of this agent */" },
		{ "ModuleRelativePath", "Public/FlockManager.h" },
		{ "ToolTip", "Current location of this agent" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000022001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAgentInfo, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_AIController_MetaData[] = {
		{ "Category", "AgentInfo" },
		{ "ModuleRelativePath", "Public/FlockManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_AIController = { "AIController", nullptr, (EPropertyFlags)0x0010000000022001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAgentInfo, AIController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_AIController_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_AIController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_OwningPawn_MetaData[] = {
		{ "Category", "AgentInfo" },
		{ "ModuleRelativePath", "Public/FlockManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_OwningPawn = { "OwningPawn", nullptr, (EPropertyFlags)0x0010000000022001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAgentInfo, OwningPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_OwningPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_OwningPawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "Category", "AgentInfo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FlockManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_SkeletalMeshComponent = { "SkeletalMeshComponent", nullptr, (EPropertyFlags)0x00100000000a2009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAgentInfo, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_SkeletalMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_SkeletalMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_CharacterMovementComponent_MetaData[] = {
		{ "Category", "AgentInfo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FlockManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_CharacterMovementComponent = { "CharacterMovementComponent", nullptr, (EPropertyFlags)0x00100000000a2009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAgentInfo, CharacterMovementComponent), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_CharacterMovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_CharacterMovementComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_PathFollowingComponent_MetaData[] = {
		{ "Category", "AgentInfo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FlockManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_PathFollowingComponent = { "PathFollowingComponent", nullptr, (EPropertyFlags)0x00100000000a2009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAgentInfo, PathFollowingComponent), Z_Construct_UClass_UFlockCrowdFollowingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_PathFollowingComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_PathFollowingComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAgentInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_TargetCentroidDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_TargetCentroidDirection_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_bWantsNewPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_State_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_PlayerDeltaLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_SpookednessRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_Spookedness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_TimeToMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_TimeToPathFind,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_TargetCentroid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_TargetLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_PerceivedCenterOfMass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_AIController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_OwningPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_SkeletalMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_CharacterMovementComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_PathFollowingComponent,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAgentInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CompleteRPG,
		nullptr,
		&NewStructOps,
		"AgentInfo",
		sizeof(FAgentInfo),
		alignof(FAgentInfo),
		Z_Construct_UScriptStruct_FAgentInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAgentInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAgentInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAgentInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CompleteRPG();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AgentInfo"), sizeof(FAgentInfo), Get_Z_Construct_UScriptStruct_FAgentInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAgentInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAgentInfo_Hash() { return 2227801824U; }
	DEFINE_FUNCTION(AFlockManager::execBolt)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Bolt();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFlockManager::execSetMovementMode)
	{
		P_GET_ENUM(EFlockMovementMode,Z_Param_Mode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMovementMode(EFlockMovementMode(Z_Param_Mode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFlockManager::execSetScareActor)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetScareActor(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFlockManager::execTryUnregisterAgent)
	{
		P_GET_OBJECT(ACrowdTestChar,Z_Param_CrowdChar);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TryUnregisterAgent(Z_Param_CrowdChar);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFlockManager::execTryRegisterAgent)
	{
		P_GET_OBJECT(ACrowdTestChar,Z_Param_CrowdChar);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TryRegisterAgent(Z_Param_CrowdChar);
		P_NATIVE_END;
	}
	void AFlockManager::StaticRegisterNativesAFlockManager()
	{
		UClass* Class = AFlockManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Bolt", &AFlockManager::execBolt },
			{ "SetMovementMode", &AFlockManager::execSetMovementMode },
			{ "SetScareActor", &AFlockManager::execSetScareActor },
			{ "TryRegisterAgent", &AFlockManager::execTryRegisterAgent },
			{ "TryUnregisterAgent", &AFlockManager::execTryUnregisterAgent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFlockManager_Bolt_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlockManager_Bolt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Flock" },
		{ "Comment", "/** Cause deer to transition to running state, does not work in JustWalkForwards mode */" },
		{ "ModuleRelativePath", "Public/FlockManager.h" },
		{ "ToolTip", "Cause deer to transition to running state, does not work in JustWalkForwards mode" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlockManager_Bolt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlockManager, nullptr, "Bolt", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlockManager_Bolt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlockManager_Bolt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlockManager_Bolt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFlockManager_Bolt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlockManager_SetMovementMode_Statics
	{
		struct FlockManager_eventSetMovementMode_Parms
		{
			EFlockMovementMode Mode;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Mode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFlockManager_SetMovementMode_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlockManager_eventSetMovementMode_Parms, Mode), Z_Construct_UEnum_CompleteRPG_EFlockMovementMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFlockManager_SetMovementMode_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlockManager_SetMovementMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlockManager_SetMovementMode_Statics::NewProp_Mode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlockManager_SetMovementMode_Statics::NewProp_Mode_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlockManager_SetMovementMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Flock" },
		{ "ModuleRelativePath", "Public/FlockManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlockManager_SetMovementMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlockManager, nullptr, "SetMovementMode", nullptr, nullptr, sizeof(FlockManager_eventSetMovementMode_Parms), Z_Construct_UFunction_AFlockManager_SetMovementMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlockManager_SetMovementMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlockManager_SetMovementMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlockManager_SetMovementMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlockManager_SetMovementMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFlockManager_SetMovementMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlockManager_SetScareActor_Statics
	{
		struct FlockManager_eventSetScareActor_Parms
		{
			AActor* Actor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFlockManager_SetScareActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlockManager_eventSetScareActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlockManager_SetScareActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlockManager_SetScareActor_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlockManager_SetScareActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Flock" },
		{ "Comment", "/** Set an actor */" },
		{ "ModuleRelativePath", "Public/FlockManager.h" },
		{ "ToolTip", "Set an actor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlockManager_SetScareActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlockManager, nullptr, "SetScareActor", nullptr, nullptr, sizeof(FlockManager_eventSetScareActor_Parms), Z_Construct_UFunction_AFlockManager_SetScareActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlockManager_SetScareActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlockManager_SetScareActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlockManager_SetScareActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlockManager_SetScareActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFlockManager_SetScareActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlockManager_TryRegisterAgent_Statics
	{
		struct FlockManager_eventTryRegisterAgent_Parms
		{
			ACrowdTestChar* CrowdChar;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CrowdChar;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFlockManager_TryRegisterAgent_Statics::NewProp_CrowdChar = { "CrowdChar", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlockManager_eventTryRegisterAgent_Parms, CrowdChar), Z_Construct_UClass_ACrowdTestChar_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlockManager_TryRegisterAgent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlockManager_TryRegisterAgent_Statics::NewProp_CrowdChar,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlockManager_TryRegisterAgent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Flock" },
		{ "Comment", "/** Attempts to find a flocking component within the provided agent's controller to register with the manager\n\x09 *\x09@param CrowdChar Agent whos controller to check for suitable component\n\x09 */" },
		{ "ModuleRelativePath", "Public/FlockManager.h" },
		{ "ToolTip", "Attempts to find a flocking component within the provided agent's controller to register with the manager\n    @param CrowdChar Agent whos controller to check for suitable component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlockManager_TryRegisterAgent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlockManager, nullptr, "TryRegisterAgent", nullptr, nullptr, sizeof(FlockManager_eventTryRegisterAgent_Parms), Z_Construct_UFunction_AFlockManager_TryRegisterAgent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlockManager_TryRegisterAgent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlockManager_TryRegisterAgent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlockManager_TryRegisterAgent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlockManager_TryRegisterAgent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFlockManager_TryRegisterAgent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlockManager_TryUnregisterAgent_Statics
	{
		struct FlockManager_eventTryUnregisterAgent_Parms
		{
			ACrowdTestChar* CrowdChar;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CrowdChar;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFlockManager_TryUnregisterAgent_Statics::NewProp_CrowdChar = { "CrowdChar", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlockManager_eventTryUnregisterAgent_Parms, CrowdChar), Z_Construct_UClass_ACrowdTestChar_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlockManager_TryUnregisterAgent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlockManager_TryUnregisterAgent_Statics::NewProp_CrowdChar,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlockManager_TryUnregisterAgent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Flock" },
		{ "Comment", "/** Try to unregister the supplied agent from this manager */" },
		{ "ModuleRelativePath", "Public/FlockManager.h" },
		{ "ToolTip", "Try to unregister the supplied agent from this manager" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlockManager_TryUnregisterAgent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlockManager, nullptr, "TryUnregisterAgent", nullptr, nullptr, sizeof(FlockManager_eventTryUnregisterAgent_Parms), Z_Construct_UFunction_AFlockManager_TryUnregisterAgent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlockManager_TryUnregisterAgent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlockManager_TryUnregisterAgent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlockManager_TryUnregisterAgent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlockManager_TryUnregisterAgent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFlockManager_TryUnregisterAgent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFlockManager_NoRegister()
	{
		return AFlockManager::StaticClass();
	}
	struct Z_Construct_UClass_AFlockManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TickRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TickRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TickAccumulator_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TickAccumulator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlwaysBolt_MetaData[];
#endif
		static void NewProp_bAlwaysBolt_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlwaysBolt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBoltWhileRunningDirectionally_MetaData[];
#endif
		static void NewProp_bBoltWhileRunningDirectionally_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBoltWhileRunningDirectionally;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadiusOfFlockWhenRunningDirectionally_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RadiusOfFlockWhenRunningDirectionally;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PositionToRunTo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PositionToRunTo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CenterOfMassPerceptionRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CenterOfMassPerceptionRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimationRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullCharacterMovementRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FullCharacterMovementRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxRequestsPerFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxRequestsPerFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MovementMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MovementMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerTrackingRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayerTrackingRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetCentroidRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetCentroidRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathFindSuccessRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PathFindSuccessRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpookSafetyRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpookSafetyRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgentAgentSpookRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AgentAgentSpookRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpookRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpookRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgentRunSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AgentRunSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgentWalkSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AgentWalkSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathFindTimerVariance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PathFindTimerVariance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathFindTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PathFindTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveTimerVariance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoveTimerVariance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoveTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CenterOfMassPerceptionRadiusSquared_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CenterOfMassPerceptionRadiusSquared;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Agents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Agents;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Agents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpriteComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScareActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ScareActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFlockManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CompleteRPG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFlockManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFlockManager_Bolt, "Bolt" }, // 162252834
		{ &Z_Construct_UFunction_AFlockManager_SetMovementMode, "SetMovementMode" }, // 3779085971
		{ &Z_Construct_UFunction_AFlockManager_SetScareActor, "SetScareActor" }, // 4184259059
		{ &Z_Construct_UFunction_AFlockManager_TryRegisterAgent, "TryRegisterAgent" }, // 1956049635
		{ &Z_Construct_UFunction_AFlockManager_TryUnregisterAgent, "TryUnregisterAgent" }, // 1516548648
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlockManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Class that controls all the agents */" },
		{ "IncludePath", "FlockManager.h" },
		{ "ModuleRelativePath", "Public/FlockManager.h" },
		{ "ToolTip", "Class that controls all the agents" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlockManager_Statics::NewProp_TickRate_MetaData[] = {
		{ "Category", "Flock" },
		{ "Comment", "/** How often the flock manager ticks */" },
		{ "ModuleRelativePath", "Public/FlockManager.h" },
		{ "ToolTip", "How often the flock manager ticks" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlockManager_Statics::NewProp_TickRate = { "TickRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlockManager, TickRate), METADATA_PARAMS(Z_Construct_UClass_AFlockManager_Statics::NewProp_TickRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlockManager_Statics::NewProp_TickRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlockManager_Statics::NewProp_TickAccumulator_MetaData[] = {
		{ "ModuleRelativePath", "Public/FlockManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlockManager_Statics::NewProp_TickAccumulator = { "TickAccumulator", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlockManager, TickAccumulator), METADATA_PARAMS(Z_Construct_UClass_AFlockManager_Statics::NewProp_TickAccumulator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlockManager_Statics::NewProp_TickAccumulator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlockManager_Statics::NewProp_bAlwaysBolt_MetaData[] = {
		{ "Category", "Flock" },
		{ "Comment", "/** Flag indicating deer should always bolt */" },
		{ "ModuleRelativePath", "Public/FlockManager.h" },
		{ "ToolTip", "Flag indicating deer should always bolt" },
	};
#endif
	void Z_Construct_UClass_AFlockManager_Statics::NewProp_bAlwaysBolt_SetBit(void* Obj)
	{
		((AFlockManager*)Obj)->bAlwaysBolt = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFlockManager_Statics::NewProp_bAlwaysBolt = { "bAlwaysBolt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFlockManager), &Z_Construct_UClass_AFlockManager_Statics::NewProp_bAlwaysBolt_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFlockManager_Statics::NewProp_bAlwaysBolt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlockManager_Statics::NewProp_bAlwaysBolt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlockManager_Statics::NewProp_bBoltWhileRunningDirectionally_MetaData[] = {
		{ "Category", "Flock" },
		{ "Comment", "/** Bolt according to player/scare actor proximity, or if bAlwaysBolt is set */" },
		{ "ModuleRelativePath", "Public/FlockManager.h" },
		{ "ToolTip", "Bolt according to player/scare actor proximity, or if bAlwaysBolt is set" },
	};
#endif
	void Z_Construct_UClass_AFlockManager_Statics::NewProp_bBoltWhileRunningDirectionally_SetBit(void* Obj)
	{
		((AFlockManager*)Obj)->bBoltWhileRunningDirectionally = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFlockManager_Statics::NewProp_bBoltWhileRunningDirectionally = { "bBoltWhileRunningDirectionally", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFlockManager), &Z_Construct_UClass_AFlockManager_Statics::NewProp_bBoltWhileRunningDirectionally_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFlockManager_Statics::NewProp_bBoltWhileRunningDirectionally_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlockManager_Statics::NewProp_bBoltWhileRunningDirectionally_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlockManager_Statics::NewProp_RadiusOfFlockWhenRunningDirectionally_MetaData[] = {
		{ "Category", "Flock" },
		{ "ModuleRelativePath", "Public/FlockManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlockManager_Statics::NewProp_RadiusOfFlockWhenRunningDirectionally = { "RadiusOfFlockWhenRunningDirectionally", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlockManager, RadiusOfFlockWhenRunningDirectionally), METADATA_PARAMS(Z_Construct_UClass_AFlockManager_Statics::NewProp_RadiusOfFlockWhenRunningDirectionally_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlockManager_Statics::NewProp_RadiusOfFlockWhenRunningDirectionally_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlockManager_Statics::NewProp_PositionToRunTo_MetaData[] = {
		{ "Category", "Flock" },
		{ "ModuleRelativePath", "Public/FlockManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFlockManager_Statics::NewProp_PositionToRunTo = { "PositionToRunTo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlockManager, PositionToRunTo), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFlockManager_Statics::NewProp_PositionToRunTo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlockManager_Statics::NewProp_PositionToRunTo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlockManager_Statics::NewProp_CenterOfMassPerceptionRadius_MetaData[] = {
		{ "Category", "Flock" },
		{ "ModuleRelativePath", "Public/FlockManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlockManager_Statics::NewProp_CenterOfMassPerceptionRadius = { "CenterOfMassPerceptionRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlockManager, CenterOfMassPerceptionRadius), METADATA_PARAMS(Z_Construct_UClass_AFlockManager_Statics::NewProp_CenterOfMassPerceptionRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlockManager_Statics::NewProp_CenterOfMassPerceptionRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlockManager_Statics::NewProp_AnimationRadius_MetaData[] = {
		{ "Category", "LOD" },
		{ "Comment", "/** Agents within this radius will run their animation graph */" },
		{ "ModuleRelativePath", "Public/FlockManager.h" },
		{ "ToolTip", "Agents within this radius will run their animation graph" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlockManager_Statics::NewProp_AnimationRadius = { "AnimationRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlockManager, AnimationRadius), METADATA_PARAMS(Z_Construct_UClass_AFlockManager_Statics::NewProp_AnimationRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlockManager_Statics::NewProp_AnimationRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlockManager_Statics::NewProp_FullCharacterMovementRadius_MetaData[] = {
		{ "Category", "LOD" },
		{ "Comment", "/** Agents within this radius will use standard character movement rather than navmesh walking */" },
		{ "ModuleRelativePath", "Public/FlockManager.h" },
		{ "ToolTip", "Agents within this radius will use standard character movement rather than navmesh walking" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlockManager_Statics::NewProp_FullCharacterMovementRadius = { "FullCharacterMovementRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlockManager, FullCharacterMovementRadius), METADATA_PARAMS(Z_Construct_UClass_AFlockManager_Statics::NewProp_FullCharacterMovementRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlockManager_Statics::NewProp_FullCharacterMovementRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlockManager_Statics::NewProp_MaxRequestsPerFrame_MetaData[] = {
		{ "Category", "Flock" },
		{ "Comment", "/** Maximum path requests per frame to make */" },
		{ "ModuleRelativePath", "Public/FlockManager.h" },
		{ "ToolTip", "Maximum path requests per frame to make" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFlockManager_Statics::NewProp_MaxRequestsPerFrame = { "MaxRequestsPerFrame", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlockManager, MaxRequestsPerFrame), METADATA_PARAMS(Z_Construct_UClass_AFlockManager_Statics::NewProp_MaxRequestsPerFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlockManager_Statics::NewProp_MaxRequestsPerFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlockManager_Statics::NewProp_MovementMode_MetaData[] = {
		{ "Category", "Flock" },
		{ "ModuleRelativePath", "Public/FlockManager.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFlockManager_Statics::NewProp_MovementMode = { "MovementMode", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlockManager, MovementMode), Z_Construct_UEnum_CompleteRPG_EFlockMovementMode, METADATA_PARAMS(Z_Construct_UClass_AFlockManager_Statics::NewProp_MovementMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlockManager_Statics::NewProp_MovementMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFlockManager_Statics::NewProp_MovementMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlockManager_Statics::NewProp_PlayerLocation_MetaData[] = {
		{ "Category", "Flock" },
		{ "ModuleRelativePath", "Public/FlockManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFlockManager_Statics::NewProp_PlayerLocation = { "PlayerLocation", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlockManager, PlayerLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFlockManager_Statics::NewProp_PlayerLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlockManager_Statics::NewProp_PlayerLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlockManager_Statics::NewProp_PlayerTrackingRadius_MetaData[] = {
		{ "Category", "Flock" },
		{ "ModuleRelativePath", "Public/FlockManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlockManager_Statics::NewProp_PlayerTrackingRadius = { "PlayerTrackingRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlockManager, PlayerTrackingRadius), METADATA_PARAMS(Z_Construct_UClass_AFlockManager_Statics::NewProp_PlayerTrackingRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlockManager_Statics::NewProp_PlayerTrackingRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlockManager_Statics::NewProp_TargetCentroidRadius_MetaData[] = {
		{ "Category", "Flock" },
		{ "ModuleRelativePath", "Public/FlockManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlockManager_Statics::NewProp_TargetCentroidRadius = { "TargetCentroidRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlockManager, TargetCentroidRadius), METADATA_PARAMS(Z_Construct_UClass_AFlockManager_Statics::NewProp_TargetCentroidRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlockManager_Statics::NewProp_TargetCentroidRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlockManager_Statics::NewProp_PathFindSuccessRadius_MetaData[] = {
		{ "Category", "Flock" },
		{ "ModuleRelativePath", "Public/FlockManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlockManager_Statics::NewProp_PathFindSuccessRadius = { "PathFindSuccessRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlockManager, PathFindSuccessRadius), METADATA_PARAMS(Z_Construct_UClass_AFlockManager_Statics::NewProp_PathFindSuccessRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlockManager_Statics::NewProp_PathFindSuccessRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlockManager_Statics::NewProp_SpookSafetyRadius_MetaData[] = {
		{ "Category", "Flock" },
		{ "ModuleRelativePath", "Public/FlockManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlockManager_Statics::NewProp_SpookSafetyRadius = { "SpookSafetyRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlockManager, SpookSafetyRadius), METADATA_PARAMS(Z_Construct_UClass_AFlockManager_Statics::NewProp_SpookSafetyRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlockManager_Statics::NewProp_SpookSafetyRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlockManager_Statics::NewProp_AgentAgentSpookRadius_MetaData[] = {
		{ "Category", "Flock" },
		{ "ModuleRelativePath", "Public/FlockManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlockManager_Statics::NewProp_AgentAgentSpookRadius = { "AgentAgentSpookRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlockManager, AgentAgentSpookRadius), METADATA_PARAMS(Z_Construct_UClass_AFlockManager_Statics::NewProp_AgentAgentSpookRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlockManager_Statics::NewProp_AgentAgentSpookRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlockManager_Statics::NewProp_SpookRadius_MetaData[] = {
		{ "Category", "Flock" },
		{ "ModuleRelativePath", "Public/FlockManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlockManager_Statics::NewProp_SpookRadius = { "SpookRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlockManager, SpookRadius), METADATA_PARAMS(Z_Construct_UClass_AFlockManager_Statics::NewProp_SpookRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlockManager_Statics::NewProp_SpookRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlockManager_Statics::NewProp_AgentRunSpeed_MetaData[] = {
		{ "Category", "Flock" },
		{ "ModuleRelativePath", "Public/FlockManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlockManager_Statics::NewProp_AgentRunSpeed = { "AgentRunSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlockManager, AgentRunSpeed), METADATA_PARAMS(Z_Construct_UClass_AFlockManager_Statics::NewProp_AgentRunSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlockManager_Statics::NewProp_AgentRunSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlockManager_Statics::NewProp_AgentWalkSpeed_MetaData[] = {
		{ "Category", "Flock" },
		{ "ModuleRelativePath", "Public/FlockManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlockManager_Statics::NewProp_AgentWalkSpeed = { "AgentWalkSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlockManager, AgentWalkSpeed), METADATA_PARAMS(Z_Construct_UClass_AFlockManager_Statics::NewProp_AgentWalkSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlockManager_Statics::NewProp_AgentWalkSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlockManager_Statics::NewProp_PathFindTimerVariance_MetaData[] = {
		{ "Category", "Flock" },
		{ "ModuleRelativePath", "Public/FlockManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlockManager_Statics::NewProp_PathFindTimerVariance = { "PathFindTimerVariance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlockManager, PathFindTimerVariance), METADATA_PARAMS(Z_Construct_UClass_AFlockManager_Statics::NewProp_PathFindTimerVariance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlockManager_Statics::NewProp_PathFindTimerVariance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlockManager_Statics::NewProp_PathFindTimer_MetaData[] = {
		{ "Category", "Flock" },
		{ "ModuleRelativePath", "Public/FlockManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlockManager_Statics::NewProp_PathFindTimer = { "PathFindTimer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlockManager, PathFindTimer), METADATA_PARAMS(Z_Construct_UClass_AFlockManager_Statics::NewProp_PathFindTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlockManager_Statics::NewProp_PathFindTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlockManager_Statics::NewProp_MoveTimerVariance_MetaData[] = {
		{ "Category", "Flock" },
		{ "ModuleRelativePath", "Public/FlockManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlockManager_Statics::NewProp_MoveTimerVariance = { "MoveTimerVariance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlockManager, MoveTimerVariance), METADATA_PARAMS(Z_Construct_UClass_AFlockManager_Statics::NewProp_MoveTimerVariance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlockManager_Statics::NewProp_MoveTimerVariance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlockManager_Statics::NewProp_MoveTimer_MetaData[] = {
		{ "Category", "Flock" },
		{ "ModuleRelativePath", "Public/FlockManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlockManager_Statics::NewProp_MoveTimer = { "MoveTimer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlockManager, MoveTimer), METADATA_PARAMS(Z_Construct_UClass_AFlockManager_Statics::NewProp_MoveTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlockManager_Statics::NewProp_MoveTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlockManager_Statics::NewProp_CenterOfMassPerceptionRadiusSquared_MetaData[] = {
		{ "ModuleRelativePath", "Public/FlockManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlockManager_Statics::NewProp_CenterOfMassPerceptionRadiusSquared = { "CenterOfMassPerceptionRadiusSquared", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlockManager, CenterOfMassPerceptionRadiusSquared), METADATA_PARAMS(Z_Construct_UClass_AFlockManager_Statics::NewProp_CenterOfMassPerceptionRadiusSquared_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlockManager_Statics::NewProp_CenterOfMassPerceptionRadiusSquared_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlockManager_Statics::NewProp_Agents_MetaData[] = {
		{ "Category", "Flock" },
		{ "Comment", "/** Array of agents */" },
		{ "ModuleRelativePath", "Public/FlockManager.h" },
		{ "ToolTip", "Array of agents" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFlockManager_Statics::NewProp_Agents = { "Agents", nullptr, (EPropertyFlags)0x0010008000022001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlockManager, Agents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFlockManager_Statics::NewProp_Agents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlockManager_Statics::NewProp_Agents_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFlockManager_Statics::NewProp_Agents_Inner = { "Agents", nullptr, (EPropertyFlags)0x0000008000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAgentInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlockManager_Statics::NewProp_SpriteComponent_MetaData[] = {
		{ "Comment", "/** Sprite component, also used as root */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FlockManager.h" },
		{ "ToolTip", "Sprite component, also used as root" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlockManager_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlockManager, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlockManager_Statics::NewProp_SpriteComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlockManager_Statics::NewProp_SpriteComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlockManager_Statics::NewProp_ScareActor_MetaData[] = {
		{ "Category", "Flock" },
		{ "ModuleRelativePath", "Public/FlockManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlockManager_Statics::NewProp_ScareActor = { "ScareActor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlockManager, ScareActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlockManager_Statics::NewProp_ScareActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlockManager_Statics::NewProp_ScareActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFlockManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlockManager_Statics::NewProp_TickRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlockManager_Statics::NewProp_TickAccumulator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlockManager_Statics::NewProp_bAlwaysBolt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlockManager_Statics::NewProp_bBoltWhileRunningDirectionally,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlockManager_Statics::NewProp_RadiusOfFlockWhenRunningDirectionally,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlockManager_Statics::NewProp_PositionToRunTo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlockManager_Statics::NewProp_CenterOfMassPerceptionRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlockManager_Statics::NewProp_AnimationRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlockManager_Statics::NewProp_FullCharacterMovementRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlockManager_Statics::NewProp_MaxRequestsPerFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlockManager_Statics::NewProp_MovementMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlockManager_Statics::NewProp_MovementMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlockManager_Statics::NewProp_PlayerLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlockManager_Statics::NewProp_PlayerTrackingRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlockManager_Statics::NewProp_TargetCentroidRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlockManager_Statics::NewProp_PathFindSuccessRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlockManager_Statics::NewProp_SpookSafetyRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlockManager_Statics::NewProp_AgentAgentSpookRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlockManager_Statics::NewProp_SpookRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlockManager_Statics::NewProp_AgentRunSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlockManager_Statics::NewProp_AgentWalkSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlockManager_Statics::NewProp_PathFindTimerVariance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlockManager_Statics::NewProp_PathFindTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlockManager_Statics::NewProp_MoveTimerVariance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlockManager_Statics::NewProp_MoveTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlockManager_Statics::NewProp_CenterOfMassPerceptionRadiusSquared,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlockManager_Statics::NewProp_Agents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlockManager_Statics::NewProp_Agents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlockManager_Statics::NewProp_SpriteComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlockManager_Statics::NewProp_ScareActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFlockManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFlockManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFlockManager_Statics::ClassParams = {
		&AFlockManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFlockManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFlockManager_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFlockManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFlockManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFlockManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFlockManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFlockManager, 3965063807);
	template<> COMPLETERPG_API UClass* StaticClass<AFlockManager>()
	{
		return AFlockManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFlockManager(Z_Construct_UClass_AFlockManager, &AFlockManager::StaticClass, TEXT("/Script/CompleteRPG"), TEXT("AFlockManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFlockManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
