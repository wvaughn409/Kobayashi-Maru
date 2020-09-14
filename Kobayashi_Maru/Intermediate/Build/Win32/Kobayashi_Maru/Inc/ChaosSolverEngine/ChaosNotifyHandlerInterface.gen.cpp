// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosSolverEngine/Public/Chaos/ChaosNotifyHandlerInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosNotifyHandlerInterface() {}
// Cross Module References
	CHAOSSOLVERENGINE_API UFunction* Z_Construct_UDelegateFunction_ChaosSolverEngine_OnChaosPhysicsCollision__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ChaosSolverEngine();
	CHAOSSOLVERENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_UChaosNotifyHandlerInterface_NoRegister();
	CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_UChaosNotifyHandlerInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_UChaosSolverEngineBlueprintLibrary_NoRegister();
	CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_UChaosSolverEngineBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ChaosSolverEngine_OnChaosPhysicsCollision__DelegateSignature_Statics
	{
		struct _Script_ChaosSolverEngine_eventOnChaosPhysicsCollision_Parms
		{
			FChaosPhysicsCollisionInfo CollisionInfo;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CollisionInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ChaosSolverEngine_OnChaosPhysicsCollision__DelegateSignature_Statics::NewProp_CollisionInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ChaosSolverEngine_OnChaosPhysicsCollision__DelegateSignature_Statics::NewProp_CollisionInfo = { "CollisionInfo", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ChaosSolverEngine_eventOnChaosPhysicsCollision_Parms, CollisionInfo), Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo, METADATA_PARAMS(Z_Construct_UDelegateFunction_ChaosSolverEngine_OnChaosPhysicsCollision__DelegateSignature_Statics::NewProp_CollisionInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ChaosSolverEngine_OnChaosPhysicsCollision__DelegateSignature_Statics::NewProp_CollisionInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ChaosSolverEngine_OnChaosPhysicsCollision__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ChaosSolverEngine_OnChaosPhysicsCollision__DelegateSignature_Statics::NewProp_CollisionInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ChaosSolverEngine_OnChaosPhysicsCollision__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Chaos/ChaosNotifyHandlerInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ChaosSolverEngine_OnChaosPhysicsCollision__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ChaosSolverEngine, nullptr, "OnChaosPhysicsCollision__DelegateSignature", nullptr, nullptr, sizeof(_Script_ChaosSolverEngine_eventOnChaosPhysicsCollision_Parms), Z_Construct_UDelegateFunction_ChaosSolverEngine_OnChaosPhysicsCollision__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ChaosSolverEngine_OnChaosPhysicsCollision__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ChaosSolverEngine_OnChaosPhysicsCollision__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ChaosSolverEngine_OnChaosPhysicsCollision__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ChaosSolverEngine_OnChaosPhysicsCollision__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_ChaosSolverEngine_OnChaosPhysicsCollision__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FChaosPhysicsCollisionInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CHAOSSOLVERENGINE_API uint32 Get_Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo, Z_Construct_UPackage__Script_ChaosSolverEngine(), TEXT("ChaosPhysicsCollisionInfo"), sizeof(FChaosPhysicsCollisionInfo), Get_Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Hash());
	}
	return Singleton;
}
template<> CHAOSSOLVERENGINE_API UScriptStruct* StaticStruct<FChaosPhysicsCollisionInfo>()
{
	return FChaosPhysicsCollisionInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChaosPhysicsCollisionInfo(FChaosPhysicsCollisionInfo::StaticStruct, TEXT("/Script/ChaosSolverEngine"), TEXT("ChaosPhysicsCollisionInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ChaosSolverEngine_StaticRegisterNativesFChaosPhysicsCollisionInfo
{
	FScriptStruct_ChaosSolverEngine_StaticRegisterNativesFChaosPhysicsCollisionInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ChaosPhysicsCollisionInfo")),new UScriptStruct::TCppStructOps<FChaosPhysicsCollisionInfo>);
	}
} ScriptStruct_ChaosSolverEngine_StaticRegisterNativesFChaosPhysicsCollisionInfo;
	struct Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherMass_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OtherMass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Mass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherAngularVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OtherAngularVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AngularVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OtherVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Velocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccumulatedImpulse_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AccumulatedImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosNotifyHandlerInterface.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosPhysicsCollisionInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_OtherMass_MetaData[] = {
		{ "Category", "Chaos" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosNotifyHandlerInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_OtherMass = { "OtherMass", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosPhysicsCollisionInfo, OtherMass), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_OtherMass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_OtherMass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_Mass_MetaData[] = {
		{ "Category", "Chaos" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosNotifyHandlerInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_Mass = { "Mass", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosPhysicsCollisionInfo, Mass), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_Mass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_Mass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_OtherAngularVelocity_MetaData[] = {
		{ "Category", "Chaos" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosNotifyHandlerInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_OtherAngularVelocity = { "OtherAngularVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosPhysicsCollisionInfo, OtherAngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_OtherAngularVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_OtherAngularVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_AngularVelocity_MetaData[] = {
		{ "Category", "Chaos" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosNotifyHandlerInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosPhysicsCollisionInfo, AngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_AngularVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_AngularVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_OtherVelocity_MetaData[] = {
		{ "Category", "Chaos" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosNotifyHandlerInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_OtherVelocity = { "OtherVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosPhysicsCollisionInfo, OtherVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_OtherVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_OtherVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_Velocity_MetaData[] = {
		{ "Category", "Chaos" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosNotifyHandlerInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosPhysicsCollisionInfo, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_Velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_Velocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_AccumulatedImpulse_MetaData[] = {
		{ "Category", "Chaos" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosNotifyHandlerInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_AccumulatedImpulse = { "AccumulatedImpulse", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosPhysicsCollisionInfo, AccumulatedImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_AccumulatedImpulse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_AccumulatedImpulse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_Normal_MetaData[] = {
		{ "Category", "Chaos" },
		{ "Comment", "/** Normal at the impact */" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosNotifyHandlerInterface.h" },
		{ "ToolTip", "Normal at the impact" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosPhysicsCollisionInfo, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_Normal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "Chaos" },
		{ "Comment", "/** Location of the impact */" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosNotifyHandlerInterface.h" },
		{ "ToolTip", "Location of the impact" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosPhysicsCollisionInfo, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "Category", "Chaos" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosNotifyHandlerInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosPhysicsCollisionInfo, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_OtherComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_OtherComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_Component_MetaData[] = {
		{ "Category", "Chaos" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosNotifyHandlerInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosPhysicsCollisionInfo, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_OtherMass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_Mass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_OtherAngularVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_AngularVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_OtherVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_Velocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_AccumulatedImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_Normal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_OtherComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_Component,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosSolverEngine,
		nullptr,
		&NewStructOps,
		"ChaosPhysicsCollisionInfo",
		sizeof(FChaosPhysicsCollisionInfo),
		alignof(FChaosPhysicsCollisionInfo),
		Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ChaosSolverEngine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChaosPhysicsCollisionInfo"), sizeof(FChaosPhysicsCollisionInfo), Get_Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Hash() { return 2207680670U; }
	void UChaosNotifyHandlerInterface::StaticRegisterNativesUChaosNotifyHandlerInterface()
	{
	}
	UClass* Z_Construct_UClass_UChaosNotifyHandlerInterface_NoRegister()
	{
		return UChaosNotifyHandlerInterface::StaticClass();
	}
	struct Z_Construct_UClass_UChaosNotifyHandlerInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChaosNotifyHandlerInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosSolverEngine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosNotifyHandlerInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosNotifyHandlerInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChaosNotifyHandlerInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IChaosNotifyHandlerInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UChaosNotifyHandlerInterface_Statics::ClassParams = {
		&UChaosNotifyHandlerInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UChaosNotifyHandlerInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosNotifyHandlerInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChaosNotifyHandlerInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UChaosNotifyHandlerInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UChaosNotifyHandlerInterface, 2546072285);
	template<> CHAOSSOLVERENGINE_API UClass* StaticClass<UChaosNotifyHandlerInterface>()
	{
		return UChaosNotifyHandlerInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UChaosNotifyHandlerInterface(Z_Construct_UClass_UChaosNotifyHandlerInterface, &UChaosNotifyHandlerInterface::StaticClass, TEXT("/Script/ChaosSolverEngine"), TEXT("UChaosNotifyHandlerInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChaosNotifyHandlerInterface);
	DEFINE_FUNCTION(UChaosSolverEngineBlueprintLibrary::execConvertPhysicsCollisionToHitResult)
	{
		P_GET_STRUCT_REF(FChaosPhysicsCollisionInfo,Z_Param_Out_PhysicsCollision);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FHitResult*)Z_Param__Result=UChaosSolverEngineBlueprintLibrary::ConvertPhysicsCollisionToHitResult(Z_Param_Out_PhysicsCollision);
		P_NATIVE_END;
	}
	void UChaosSolverEngineBlueprintLibrary::StaticRegisterNativesUChaosSolverEngineBlueprintLibrary()
	{
		UClass* Class = UChaosSolverEngineBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertPhysicsCollisionToHitResult", &UChaosSolverEngineBlueprintLibrary::execConvertPhysicsCollisionToHitResult },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult_Statics
	{
		struct ChaosSolverEngineBlueprintLibrary_eventConvertPhysicsCollisionToHitResult_Parms
		{
			FChaosPhysicsCollisionInfo PhysicsCollision;
			FHitResult ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicsCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PhysicsCollision;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChaosSolverEngineBlueprintLibrary_eventConvertPhysicsCollisionToHitResult_Parms, ReturnValue), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult_Statics::NewProp_PhysicsCollision_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult_Statics::NewProp_PhysicsCollision = { "PhysicsCollision", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChaosSolverEngineBlueprintLibrary_eventConvertPhysicsCollisionToHitResult_Parms, PhysicsCollision), Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo, METADATA_PARAMS(Z_Construct_UFunction_UChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult_Statics::NewProp_PhysicsCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult_Statics::NewProp_PhysicsCollision_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult_Statics::NewProp_PhysicsCollision,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult_Statics::Function_MetaDataParams[] = {
		{ "Category", "Chaos" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosNotifyHandlerInterface.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosSolverEngineBlueprintLibrary, nullptr, "ConvertPhysicsCollisionToHitResult", nullptr, nullptr, sizeof(ChaosSolverEngineBlueprintLibrary_eventConvertPhysicsCollisionToHitResult_Parms), Z_Construct_UFunction_UChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UChaosSolverEngineBlueprintLibrary_NoRegister()
	{
		return UChaosSolverEngineBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UChaosSolverEngineBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChaosSolverEngineBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosSolverEngine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UChaosSolverEngineBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult, "ConvertPhysicsCollisionToHitResult" }, // 4164144494
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosSolverEngineBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Chaos/ChaosNotifyHandlerInterface.h" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosNotifyHandlerInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChaosSolverEngineBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChaosSolverEngineBlueprintLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UChaosSolverEngineBlueprintLibrary_Statics::ClassParams = {
		&UChaosSolverEngineBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UChaosSolverEngineBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosSolverEngineBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChaosSolverEngineBlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UChaosSolverEngineBlueprintLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UChaosSolverEngineBlueprintLibrary, 3435353523);
	template<> CHAOSSOLVERENGINE_API UClass* StaticClass<UChaosSolverEngineBlueprintLibrary>()
	{
		return UChaosSolverEngineBlueprintLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UChaosSolverEngineBlueprintLibrary(Z_Construct_UClass_UChaosSolverEngineBlueprintLibrary, &UChaosSolverEngineBlueprintLibrary::StaticClass, TEXT("/Script/ChaosSolverEngine"), TEXT("UChaosSolverEngineBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChaosSolverEngineBlueprintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
