// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/PhysicsEngine/PhysicalAnimationComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicalAnimationComponent() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicalAnimationData();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicalAnimationComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicalAnimationComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FPhysicalAnimationData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPhysicalAnimationData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhysicalAnimationData, Z_Construct_UPackage__Script_Engine(), TEXT("PhysicalAnimationData"), sizeof(FPhysicalAnimationData), Get_Z_Construct_UScriptStruct_FPhysicalAnimationData_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPhysicalAnimationData>()
{
	return FPhysicalAnimationData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPhysicalAnimationData(FPhysicalAnimationData::StaticStruct, TEXT("/Script/Engine"), TEXT("PhysicalAnimationData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPhysicalAnimationData
{
	FScriptStruct_Engine_StaticRegisterNativesFPhysicalAnimationData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PhysicalAnimationData")),new UScriptStruct::TCppStructOps<FPhysicalAnimationData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFPhysicalAnimationData;
	struct Z_Construct_UScriptStruct_FPhysicalAnimationData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAngularForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAngularForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxLinearForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxLinearForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VelocityStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VelocityStrength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PositionStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PositionStrength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularVelocityStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngularVelocityStrength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrientationStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OrientationStrength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsLocalSimulation_MetaData[];
#endif
		static void NewProp_bIsLocalSimulation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLocalSimulation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BodyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicalAnimationData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Stores info on the type of motor that will be used for a given bone */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicalAnimationComponent.h" },
		{ "ToolTip", "Stores info on the type of motor that will be used for a given bone" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPhysicalAnimationData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhysicalAnimationData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicalAnimationData_Statics::NewProp_MaxAngularForce_MetaData[] = {
		{ "Category", "PhysicalAnimation" },
		{ "Comment", "/** The max force used to correct angular errors */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicalAnimationComponent.h" },
		{ "ToolTip", "The max force used to correct angular errors" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhysicalAnimationData_Statics::NewProp_MaxAngularForce = { "MaxAngularForce", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhysicalAnimationData, MaxAngularForce), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicalAnimationData_Statics::NewProp_MaxAngularForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalAnimationData_Statics::NewProp_MaxAngularForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicalAnimationData_Statics::NewProp_MaxLinearForce_MetaData[] = {
		{ "Category", "PhysicalAnimation" },
		{ "Comment", "/** The max force used to correct linear errors */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicalAnimationComponent.h" },
		{ "ToolTip", "The max force used to correct linear errors" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhysicalAnimationData_Statics::NewProp_MaxLinearForce = { "MaxLinearForce", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhysicalAnimationData, MaxLinearForce), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicalAnimationData_Statics::NewProp_MaxLinearForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalAnimationData_Statics::NewProp_MaxLinearForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicalAnimationData_Statics::NewProp_VelocityStrength_MetaData[] = {
		{ "Category", "PhysicalAnimation" },
		{ "Comment", "/** The strength used to correct linear velocity error. Only used for non-local simulation */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicalAnimationComponent.h" },
		{ "ToolTip", "The strength used to correct linear velocity error. Only used for non-local simulation" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhysicalAnimationData_Statics::NewProp_VelocityStrength = { "VelocityStrength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhysicalAnimationData, VelocityStrength), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicalAnimationData_Statics::NewProp_VelocityStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalAnimationData_Statics::NewProp_VelocityStrength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicalAnimationData_Statics::NewProp_PositionStrength_MetaData[] = {
		{ "Category", "PhysicalAnimation" },
		{ "Comment", "/** The strength used to correct linear position error. Only used for non-local simulation */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicalAnimationComponent.h" },
		{ "ToolTip", "The strength used to correct linear position error. Only used for non-local simulation" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhysicalAnimationData_Statics::NewProp_PositionStrength = { "PositionStrength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhysicalAnimationData, PositionStrength), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicalAnimationData_Statics::NewProp_PositionStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalAnimationData_Statics::NewProp_PositionStrength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicalAnimationData_Statics::NewProp_AngularVelocityStrength_MetaData[] = {
		{ "Category", "PhysicalAnimation" },
		{ "Comment", "/** The strength used to correct angular velocity error */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicalAnimationComponent.h" },
		{ "ToolTip", "The strength used to correct angular velocity error" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhysicalAnimationData_Statics::NewProp_AngularVelocityStrength = { "AngularVelocityStrength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhysicalAnimationData, AngularVelocityStrength), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicalAnimationData_Statics::NewProp_AngularVelocityStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalAnimationData_Statics::NewProp_AngularVelocityStrength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicalAnimationData_Statics::NewProp_OrientationStrength_MetaData[] = {
		{ "Category", "PhysicalAnimation" },
		{ "Comment", "/** The strength used to correct orientation error */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicalAnimationComponent.h" },
		{ "ToolTip", "The strength used to correct orientation error" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhysicalAnimationData_Statics::NewProp_OrientationStrength = { "OrientationStrength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhysicalAnimationData, OrientationStrength), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicalAnimationData_Statics::NewProp_OrientationStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalAnimationData_Statics::NewProp_OrientationStrength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicalAnimationData_Statics::NewProp_bIsLocalSimulation_MetaData[] = {
		{ "Category", "PhysicalAnimation" },
		{ "Comment", "/** Whether the drive targets are in world space or local */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicalAnimationComponent.h" },
		{ "ToolTip", "Whether the drive targets are in world space or local" },
	};
#endif
	void Z_Construct_UScriptStruct_FPhysicalAnimationData_Statics::NewProp_bIsLocalSimulation_SetBit(void* Obj)
	{
		((FPhysicalAnimationData*)Obj)->bIsLocalSimulation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPhysicalAnimationData_Statics::NewProp_bIsLocalSimulation = { "bIsLocalSimulation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPhysicalAnimationData), &Z_Construct_UScriptStruct_FPhysicalAnimationData_Statics::NewProp_bIsLocalSimulation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicalAnimationData_Statics::NewProp_bIsLocalSimulation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalAnimationData_Statics::NewProp_bIsLocalSimulation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicalAnimationData_Statics::NewProp_BodyName_MetaData[] = {
		{ "Comment", "/** The body we will be driving. We specifically hide this from users since they provide the body name and bodies below in the component API. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicalAnimationComponent.h" },
		{ "ToolTip", "The body we will be driving. We specifically hide this from users since they provide the body name and bodies below in the component API." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPhysicalAnimationData_Statics::NewProp_BodyName = { "BodyName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhysicalAnimationData, BodyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicalAnimationData_Statics::NewProp_BodyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalAnimationData_Statics::NewProp_BodyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPhysicalAnimationData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicalAnimationData_Statics::NewProp_MaxAngularForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicalAnimationData_Statics::NewProp_MaxLinearForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicalAnimationData_Statics::NewProp_VelocityStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicalAnimationData_Statics::NewProp_PositionStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicalAnimationData_Statics::NewProp_AngularVelocityStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicalAnimationData_Statics::NewProp_OrientationStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicalAnimationData_Statics::NewProp_bIsLocalSimulation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicalAnimationData_Statics::NewProp_BodyName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhysicalAnimationData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PhysicalAnimationData",
		sizeof(FPhysicalAnimationData),
		alignof(FPhysicalAnimationData),
		Z_Construct_UScriptStruct_FPhysicalAnimationData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalAnimationData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicalAnimationData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalAnimationData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPhysicalAnimationData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPhysicalAnimationData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PhysicalAnimationData"), sizeof(FPhysicalAnimationData), Get_Z_Construct_UScriptStruct_FPhysicalAnimationData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPhysicalAnimationData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPhysicalAnimationData_Hash() { return 3127076724U; }
	DEFINE_FUNCTION(UPhysicalAnimationComponent::execGetBodyTargetTransform)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BodyName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetBodyTargetTransform(Z_Param_BodyName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicalAnimationComponent::execApplyPhysicalAnimationProfileBelow)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BodyName);
		P_GET_PROPERTY(FNameProperty,Z_Param_ProfileName);
		P_GET_UBOOL(Z_Param_bIncludeSelf);
		P_GET_UBOOL(Z_Param_bClearNotFound);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyPhysicalAnimationProfileBelow(Z_Param_BodyName,Z_Param_ProfileName,Z_Param_bIncludeSelf,Z_Param_bClearNotFound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicalAnimationComponent::execSetStrengthMultiplyer)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InStrengthMultiplyer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStrengthMultiplyer(Z_Param_InStrengthMultiplyer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicalAnimationComponent::execApplyPhysicalAnimationSettingsBelow)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BodyName);
		P_GET_STRUCT_REF(FPhysicalAnimationData,Z_Param_Out_PhysicalAnimationData);
		P_GET_UBOOL(Z_Param_bIncludeSelf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyPhysicalAnimationSettingsBelow(Z_Param_BodyName,Z_Param_Out_PhysicalAnimationData,Z_Param_bIncludeSelf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicalAnimationComponent::execApplyPhysicalAnimationSettings)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BodyName);
		P_GET_STRUCT_REF(FPhysicalAnimationData,Z_Param_Out_PhysicalAnimationData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyPhysicalAnimationSettings(Z_Param_BodyName,Z_Param_Out_PhysicalAnimationData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicalAnimationComponent::execSetSkeletalMeshComponent)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_InSkeletalMeshComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSkeletalMeshComponent(Z_Param_InSkeletalMeshComponent);
		P_NATIVE_END;
	}
	void UPhysicalAnimationComponent::StaticRegisterNativesUPhysicalAnimationComponent()
	{
		UClass* Class = UPhysicalAnimationComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyPhysicalAnimationProfileBelow", &UPhysicalAnimationComponent::execApplyPhysicalAnimationProfileBelow },
			{ "ApplyPhysicalAnimationSettings", &UPhysicalAnimationComponent::execApplyPhysicalAnimationSettings },
			{ "ApplyPhysicalAnimationSettingsBelow", &UPhysicalAnimationComponent::execApplyPhysicalAnimationSettingsBelow },
			{ "GetBodyTargetTransform", &UPhysicalAnimationComponent::execGetBodyTargetTransform },
			{ "SetSkeletalMeshComponent", &UPhysicalAnimationComponent::execSetSkeletalMeshComponent },
			{ "SetStrengthMultiplyer", &UPhysicalAnimationComponent::execSetStrengthMultiplyer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationProfileBelow_Statics
	{
		struct PhysicalAnimationComponent_eventApplyPhysicalAnimationProfileBelow_Parms
		{
			FName BodyName;
			FName ProfileName;
			bool bIncludeSelf;
			bool bClearNotFound;
		};
		static void NewProp_bClearNotFound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClearNotFound;
		static void NewProp_bIncludeSelf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeSelf;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ProfileName;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BodyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationProfileBelow_Statics::NewProp_bClearNotFound_SetBit(void* Obj)
	{
		((PhysicalAnimationComponent_eventApplyPhysicalAnimationProfileBelow_Parms*)Obj)->bClearNotFound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationProfileBelow_Statics::NewProp_bClearNotFound = { "bClearNotFound", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PhysicalAnimationComponent_eventApplyPhysicalAnimationProfileBelow_Parms), &Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationProfileBelow_Statics::NewProp_bClearNotFound_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationProfileBelow_Statics::NewProp_bIncludeSelf_SetBit(void* Obj)
	{
		((PhysicalAnimationComponent_eventApplyPhysicalAnimationProfileBelow_Parms*)Obj)->bIncludeSelf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationProfileBelow_Statics::NewProp_bIncludeSelf = { "bIncludeSelf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PhysicalAnimationComponent_eventApplyPhysicalAnimationProfileBelow_Parms), &Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationProfileBelow_Statics::NewProp_bIncludeSelf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationProfileBelow_Statics::NewProp_ProfileName = { "ProfileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicalAnimationComponent_eventApplyPhysicalAnimationProfileBelow_Parms, ProfileName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationProfileBelow_Statics::NewProp_BodyName = { "BodyName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicalAnimationComponent_eventApplyPhysicalAnimationProfileBelow_Parms, BodyName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationProfileBelow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationProfileBelow_Statics::NewProp_bClearNotFound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationProfileBelow_Statics::NewProp_bIncludeSelf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationProfileBelow_Statics::NewProp_ProfileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationProfileBelow_Statics::NewProp_BodyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationProfileBelow_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicalAnimation" },
		{ "Comment", "/**\n\x09*  Applies the physical animation profile to the body given and all bodies below.\n\x09*  @param  BodyName\x09\x09\x09The body from which we'd like to start applying the physical animation profile. Finds all bodies below in the skeleton hierarchy. None implies all bodies\n\x09*  @param  ProfileName\x09\x09The physical animation profile we'd like to apply. For each body in the physics asset we search for physical animation settings with this name.\n\x09*  @param  bIncludeSelf\x09\x09Whether to include the provided body name in the list of bodies we act on (useful to ignore for cases where a root has multiple children)\n\x09*  @param  bClearNotFound\x09If true, bodies without the given profile name will have any existing physical animation settings cleared. If false, bodies without the given profile name are left untouched.\n\x09*/" },
		{ "CPP_Default_bClearNotFound", "false" },
		{ "CPP_Default_bIncludeSelf", "true" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicalAnimationComponent.h" },
		{ "ToolTip", "Applies the physical animation profile to the body given and all bodies below.\n@param  BodyName                     The body from which we'd like to start applying the physical animation profile. Finds all bodies below in the skeleton hierarchy. None implies all bodies\n@param  ProfileName          The physical animation profile we'd like to apply. For each body in the physics asset we search for physical animation settings with this name.\n@param  bIncludeSelf         Whether to include the provided body name in the list of bodies we act on (useful to ignore for cases where a root has multiple children)\n@param  bClearNotFound       If true, bodies without the given profile name will have any existing physical animation settings cleared. If false, bodies without the given profile name are left untouched." },
		{ "UnsafeDuringActorConstruction", "" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationProfileBelow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicalAnimationComponent, nullptr, "ApplyPhysicalAnimationProfileBelow", nullptr, nullptr, sizeof(PhysicalAnimationComponent_eventApplyPhysicalAnimationProfileBelow_Parms), Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationProfileBelow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationProfileBelow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationProfileBelow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationProfileBelow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationProfileBelow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationProfileBelow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationSettings_Statics
	{
		struct PhysicalAnimationComponent_eventApplyPhysicalAnimationSettings_Parms
		{
			FName BodyName;
			FPhysicalAnimationData PhysicalAnimationData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicalAnimationData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PhysicalAnimationData;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BodyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationSettings_Statics::NewProp_PhysicalAnimationData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationSettings_Statics::NewProp_PhysicalAnimationData = { "PhysicalAnimationData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicalAnimationComponent_eventApplyPhysicalAnimationSettings_Parms, PhysicalAnimationData), Z_Construct_UScriptStruct_FPhysicalAnimationData, METADATA_PARAMS(Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationSettings_Statics::NewProp_PhysicalAnimationData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationSettings_Statics::NewProp_PhysicalAnimationData_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationSettings_Statics::NewProp_BodyName = { "BodyName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicalAnimationComponent_eventApplyPhysicalAnimationSettings_Parms, BodyName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationSettings_Statics::NewProp_PhysicalAnimationData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationSettings_Statics::NewProp_BodyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicalAnimation" },
		{ "Comment", "/** Applies the physical animation settings to the body given.*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicalAnimationComponent.h" },
		{ "ToolTip", "Applies the physical animation settings to the body given." },
		{ "UnsafeDuringActorConstruction", "" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicalAnimationComponent, nullptr, "ApplyPhysicalAnimationSettings", nullptr, nullptr, sizeof(PhysicalAnimationComponent_eventApplyPhysicalAnimationSettings_Parms), Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationSettingsBelow_Statics
	{
		struct PhysicalAnimationComponent_eventApplyPhysicalAnimationSettingsBelow_Parms
		{
			FName BodyName;
			FPhysicalAnimationData PhysicalAnimationData;
			bool bIncludeSelf;
		};
		static void NewProp_bIncludeSelf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeSelf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicalAnimationData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PhysicalAnimationData;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BodyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationSettingsBelow_Statics::NewProp_bIncludeSelf_SetBit(void* Obj)
	{
		((PhysicalAnimationComponent_eventApplyPhysicalAnimationSettingsBelow_Parms*)Obj)->bIncludeSelf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationSettingsBelow_Statics::NewProp_bIncludeSelf = { "bIncludeSelf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PhysicalAnimationComponent_eventApplyPhysicalAnimationSettingsBelow_Parms), &Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationSettingsBelow_Statics::NewProp_bIncludeSelf_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationSettingsBelow_Statics::NewProp_PhysicalAnimationData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationSettingsBelow_Statics::NewProp_PhysicalAnimationData = { "PhysicalAnimationData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicalAnimationComponent_eventApplyPhysicalAnimationSettingsBelow_Parms, PhysicalAnimationData), Z_Construct_UScriptStruct_FPhysicalAnimationData, METADATA_PARAMS(Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationSettingsBelow_Statics::NewProp_PhysicalAnimationData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationSettingsBelow_Statics::NewProp_PhysicalAnimationData_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationSettingsBelow_Statics::NewProp_BodyName = { "BodyName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicalAnimationComponent_eventApplyPhysicalAnimationSettingsBelow_Parms, BodyName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationSettingsBelow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationSettingsBelow_Statics::NewProp_bIncludeSelf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationSettingsBelow_Statics::NewProp_PhysicalAnimationData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationSettingsBelow_Statics::NewProp_BodyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationSettingsBelow_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicalAnimation" },
		{ "Comment", "/** Applies the physical animation settings to the body given and all bodies below.*/" },
		{ "CPP_Default_bIncludeSelf", "true" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicalAnimationComponent.h" },
		{ "ToolTip", "Applies the physical animation settings to the body given and all bodies below." },
		{ "UnsafeDuringActorConstruction", "" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationSettingsBelow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicalAnimationComponent, nullptr, "ApplyPhysicalAnimationSettingsBelow", nullptr, nullptr, sizeof(PhysicalAnimationComponent_eventApplyPhysicalAnimationSettingsBelow_Parms), Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationSettingsBelow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationSettingsBelow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationSettingsBelow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationSettingsBelow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationSettingsBelow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationSettingsBelow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicalAnimationComponent_GetBodyTargetTransform_Statics
	{
		struct PhysicalAnimationComponent_eventGetBodyTargetTransform_Parms
		{
			FName BodyName;
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BodyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicalAnimationComponent_GetBodyTargetTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicalAnimationComponent_eventGetBodyTargetTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicalAnimationComponent_GetBodyTargetTransform_Statics::NewProp_BodyName = { "BodyName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicalAnimationComponent_eventGetBodyTargetTransform_Parms, BodyName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicalAnimationComponent_GetBodyTargetTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicalAnimationComponent_GetBodyTargetTransform_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicalAnimationComponent_GetBodyTargetTransform_Statics::NewProp_BodyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicalAnimationComponent_GetBodyTargetTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicalAnimation" },
		{ "Comment", "/** \n\x09 *\x09Returns the target transform for the given body. If physical animation component is not controlling this body, returns its current transform.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicalAnimationComponent.h" },
		{ "ToolTip", "Returns the target transform for the given body. If physical animation component is not controlling this body, returns its current transform." },
		{ "UnsafeDuringActorConstruction", "" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicalAnimationComponent_GetBodyTargetTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicalAnimationComponent, nullptr, "GetBodyTargetTransform", nullptr, nullptr, sizeof(PhysicalAnimationComponent_eventGetBodyTargetTransform_Parms), Z_Construct_UFunction_UPhysicalAnimationComponent_GetBodyTargetTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicalAnimationComponent_GetBodyTargetTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicalAnimationComponent_GetBodyTargetTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicalAnimationComponent_GetBodyTargetTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicalAnimationComponent_GetBodyTargetTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicalAnimationComponent_GetBodyTargetTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicalAnimationComponent_SetSkeletalMeshComponent_Statics
	{
		struct PhysicalAnimationComponent_eventSetSkeletalMeshComponent_Parms
		{
			USkeletalMeshComponent* InSkeletalMeshComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSkeletalMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSkeletalMeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicalAnimationComponent_SetSkeletalMeshComponent_Statics::NewProp_InSkeletalMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhysicalAnimationComponent_SetSkeletalMeshComponent_Statics::NewProp_InSkeletalMeshComponent = { "InSkeletalMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicalAnimationComponent_eventSetSkeletalMeshComponent_Parms, InSkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPhysicalAnimationComponent_SetSkeletalMeshComponent_Statics::NewProp_InSkeletalMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicalAnimationComponent_SetSkeletalMeshComponent_Statics::NewProp_InSkeletalMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicalAnimationComponent_SetSkeletalMeshComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicalAnimationComponent_SetSkeletalMeshComponent_Statics::NewProp_InSkeletalMeshComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicalAnimationComponent_SetSkeletalMeshComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicalAnimation" },
		{ "Comment", "/** Sets the skeletal mesh we are driving through physical animation. Will erase any existing physical animation data. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicalAnimationComponent.h" },
		{ "ToolTip", "Sets the skeletal mesh we are driving through physical animation. Will erase any existing physical animation data." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicalAnimationComponent_SetSkeletalMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicalAnimationComponent, nullptr, "SetSkeletalMeshComponent", nullptr, nullptr, sizeof(PhysicalAnimationComponent_eventSetSkeletalMeshComponent_Parms), Z_Construct_UFunction_UPhysicalAnimationComponent_SetSkeletalMeshComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicalAnimationComponent_SetSkeletalMeshComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicalAnimationComponent_SetSkeletalMeshComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicalAnimationComponent_SetSkeletalMeshComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicalAnimationComponent_SetSkeletalMeshComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicalAnimationComponent_SetSkeletalMeshComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicalAnimationComponent_SetStrengthMultiplyer_Statics
	{
		struct PhysicalAnimationComponent_eventSetStrengthMultiplyer_Parms
		{
			float InStrengthMultiplyer;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InStrengthMultiplyer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicalAnimationComponent_SetStrengthMultiplyer_Statics::NewProp_InStrengthMultiplyer = { "InStrengthMultiplyer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicalAnimationComponent_eventSetStrengthMultiplyer_Parms, InStrengthMultiplyer), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicalAnimationComponent_SetStrengthMultiplyer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicalAnimationComponent_SetStrengthMultiplyer_Statics::NewProp_InStrengthMultiplyer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicalAnimationComponent_SetStrengthMultiplyer_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicalAnimation" },
		{ "Comment", "/** Updates strength multiplyer and any active motors */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicalAnimationComponent.h" },
		{ "ToolTip", "Updates strength multiplyer and any active motors" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicalAnimationComponent_SetStrengthMultiplyer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicalAnimationComponent, nullptr, "SetStrengthMultiplyer", nullptr, nullptr, sizeof(PhysicalAnimationComponent_eventSetStrengthMultiplyer_Parms), Z_Construct_UFunction_UPhysicalAnimationComponent_SetStrengthMultiplyer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicalAnimationComponent_SetStrengthMultiplyer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicalAnimationComponent_SetStrengthMultiplyer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicalAnimationComponent_SetStrengthMultiplyer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicalAnimationComponent_SetStrengthMultiplyer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicalAnimationComponent_SetStrengthMultiplyer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPhysicalAnimationComponent_NoRegister()
	{
		return UPhysicalAnimationComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPhysicalAnimationComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrengthMultiplyer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StrengthMultiplyer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhysicalAnimationComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPhysicalAnimationComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationProfileBelow, "ApplyPhysicalAnimationProfileBelow" }, // 593406545
		{ &Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationSettings, "ApplyPhysicalAnimationSettings" }, // 1372105454
		{ &Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationSettingsBelow, "ApplyPhysicalAnimationSettingsBelow" }, // 3385500925
		{ &Z_Construct_UFunction_UPhysicalAnimationComponent_GetBodyTargetTransform, "GetBodyTargetTransform" }, // 2299168773
		{ &Z_Construct_UFunction_UPhysicalAnimationComponent_SetSkeletalMeshComponent, "SetSkeletalMeshComponent" }, // 781742237
		{ &Z_Construct_UFunction_UPhysicalAnimationComponent_SetStrengthMultiplyer, "SetStrengthMultiplyer" }, // 3030324066
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalAnimationComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Physics" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "PhysicsEngine/PhysicalAnimationComponent.h" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicalAnimationComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalAnimationComponent_Statics::NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicalAnimationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhysicalAnimationComponent_Statics::NewProp_SkeletalMeshComponent = { "SkeletalMeshComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicalAnimationComponent, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhysicalAnimationComponent_Statics::NewProp_SkeletalMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalAnimationComponent_Statics::NewProp_SkeletalMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalAnimationComponent_Statics::NewProp_StrengthMultiplyer_MetaData[] = {
		{ "Category", "PhysicalAnimation" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Multiplies the strength of any active motors. (can blend from 0-1 for example)*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicalAnimationComponent.h" },
		{ "ToolTip", "Multiplies the strength of any active motors. (can blend from 0-1 for example)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicalAnimationComponent_Statics::NewProp_StrengthMultiplyer = { "StrengthMultiplyer", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicalAnimationComponent, StrengthMultiplyer), METADATA_PARAMS(Z_Construct_UClass_UPhysicalAnimationComponent_Statics::NewProp_StrengthMultiplyer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalAnimationComponent_Statics::NewProp_StrengthMultiplyer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhysicalAnimationComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalAnimationComponent_Statics::NewProp_SkeletalMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalAnimationComponent_Statics::NewProp_StrengthMultiplyer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhysicalAnimationComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicalAnimationComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPhysicalAnimationComponent_Statics::ClassParams = {
		&UPhysicalAnimationComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPhysicalAnimationComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalAnimationComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPhysicalAnimationComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalAnimationComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhysicalAnimationComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPhysicalAnimationComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPhysicalAnimationComponent, 3471933143);
	template<> ENGINE_API UClass* StaticClass<UPhysicalAnimationComponent>()
	{
		return UPhysicalAnimationComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPhysicalAnimationComponent(Z_Construct_UClass_UPhysicalAnimationComponent, &UPhysicalAnimationComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UPhysicalAnimationComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicalAnimationComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
