// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CableComponent/Classes/CableComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCableComponent() {}
// Cross Module References
	CABLECOMPONENT_API UClass* Z_Construct_UClass_UCableComponent_NoRegister();
	CABLECOMPONENT_API UClass* Z_Construct_UClass_UCableComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
	UPackage* Z_Construct_UPackage__Script_CableComponent();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentReference();
// End Cross Module References
	DEFINE_FUNCTION(UCableComponent::execGetCableParticleLocations)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Locations);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCableParticleLocations(Z_Param_Out_Locations);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCableComponent::execGetAttachedComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USceneComponent**)Z_Param__Result=P_THIS->GetAttachedComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCableComponent::execGetAttachedActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetAttachedActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCableComponent::execSetAttachEndTo)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FNameProperty,Z_Param_ComponentProperty);
		P_GET_PROPERTY(FNameProperty,Z_Param_SocketName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAttachEndTo(Z_Param_Actor,Z_Param_ComponentProperty,Z_Param_SocketName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCableComponent::execSetAttachEndToComponent)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_Component);
		P_GET_PROPERTY(FNameProperty,Z_Param_SocketName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAttachEndToComponent(Z_Param_Component,Z_Param_SocketName);
		P_NATIVE_END;
	}
	void UCableComponent::StaticRegisterNativesUCableComponent()
	{
		UClass* Class = UCableComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAttachedActor", &UCableComponent::execGetAttachedActor },
			{ "GetAttachedComponent", &UCableComponent::execGetAttachedComponent },
			{ "GetCableParticleLocations", &UCableComponent::execGetCableParticleLocations },
			{ "SetAttachEndTo", &UCableComponent::execSetAttachEndTo },
			{ "SetAttachEndToComponent", &UCableComponent::execSetAttachEndToComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCableComponent_GetAttachedActor_Statics
	{
		struct CableComponent_eventGetAttachedActor_Parms
		{
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCableComponent_GetAttachedActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CableComponent_eventGetAttachedActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCableComponent_GetAttachedActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCableComponent_GetAttachedActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCableComponent_GetAttachedActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cable" },
		{ "Comment", "/** Gets the Actor that the cable is attached to **/" },
		{ "ModuleRelativePath", "Classes/CableComponent.h" },
		{ "ToolTip", "Gets the Actor that the cable is attached to *" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCableComponent_GetAttachedActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCableComponent, nullptr, "GetAttachedActor", nullptr, nullptr, sizeof(CableComponent_eventGetAttachedActor_Parms), Z_Construct_UFunction_UCableComponent_GetAttachedActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCableComponent_GetAttachedActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCableComponent_GetAttachedActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCableComponent_GetAttachedActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCableComponent_GetAttachedActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCableComponent_GetAttachedActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCableComponent_GetAttachedComponent_Statics
	{
		struct CableComponent_eventGetAttachedComponent_Parms
		{
			USceneComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCableComponent_GetAttachedComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCableComponent_GetAttachedComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CableComponent_eventGetAttachedComponent_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCableComponent_GetAttachedComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCableComponent_GetAttachedComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCableComponent_GetAttachedComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCableComponent_GetAttachedComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCableComponent_GetAttachedComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cable" },
		{ "Comment", "/** Gets the specific USceneComponent that the cable is attached to **/" },
		{ "ModuleRelativePath", "Classes/CableComponent.h" },
		{ "ToolTip", "Gets the specific USceneComponent that the cable is attached to *" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCableComponent_GetAttachedComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCableComponent, nullptr, "GetAttachedComponent", nullptr, nullptr, sizeof(CableComponent_eventGetAttachedComponent_Parms), Z_Construct_UFunction_UCableComponent_GetAttachedComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCableComponent_GetAttachedComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCableComponent_GetAttachedComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCableComponent_GetAttachedComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCableComponent_GetAttachedComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCableComponent_GetAttachedComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCableComponent_GetCableParticleLocations_Statics
	{
		struct CableComponent_eventGetCableParticleLocations_Parms
		{
			TArray<FVector> Locations;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Locations;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Locations_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCableComponent_GetCableParticleLocations_Statics::NewProp_Locations = { "Locations", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CableComponent_eventGetCableParticleLocations_Parms, Locations), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCableComponent_GetCableParticleLocations_Statics::NewProp_Locations_Inner = { "Locations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCableComponent_GetCableParticleLocations_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCableComponent_GetCableParticleLocations_Statics::NewProp_Locations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCableComponent_GetCableParticleLocations_Statics::NewProp_Locations_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCableComponent_GetCableParticleLocations_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cable" },
		{ "Comment", "/** Get array of locations of particles (in world space) making up the cable simulation. */" },
		{ "ModuleRelativePath", "Classes/CableComponent.h" },
		{ "ToolTip", "Get array of locations of particles (in world space) making up the cable simulation." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCableComponent_GetCableParticleLocations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCableComponent, nullptr, "GetCableParticleLocations", nullptr, nullptr, sizeof(CableComponent_eventGetCableParticleLocations_Parms), Z_Construct_UFunction_UCableComponent_GetCableParticleLocations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCableComponent_GetCableParticleLocations_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCableComponent_GetCableParticleLocations_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCableComponent_GetCableParticleLocations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCableComponent_GetCableParticleLocations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCableComponent_GetCableParticleLocations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCableComponent_SetAttachEndTo_Statics
	{
		struct CableComponent_eventSetAttachEndTo_Parms
		{
			AActor* Actor;
			FName ComponentProperty;
			FName SocketName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SocketName;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ComponentProperty;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCableComponent_SetAttachEndTo_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CableComponent_eventSetAttachEndTo_Parms, SocketName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCableComponent_SetAttachEndTo_Statics::NewProp_ComponentProperty = { "ComponentProperty", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CableComponent_eventSetAttachEndTo_Parms, ComponentProperty), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCableComponent_SetAttachEndTo_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CableComponent_eventSetAttachEndTo_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCableComponent_SetAttachEndTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCableComponent_SetAttachEndTo_Statics::NewProp_SocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCableComponent_SetAttachEndTo_Statics::NewProp_ComponentProperty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCableComponent_SetAttachEndTo_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCableComponent_SetAttachEndTo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cable" },
		{ "Comment", "/** Attaches the end of the cable to a specific Component within an Actor **/" },
		{ "CPP_Default_SocketName", "None" },
		{ "ModuleRelativePath", "Classes/CableComponent.h" },
		{ "ToolTip", "Attaches the end of the cable to a specific Component within an Actor *" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCableComponent_SetAttachEndTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCableComponent, nullptr, "SetAttachEndTo", nullptr, nullptr, sizeof(CableComponent_eventSetAttachEndTo_Parms), Z_Construct_UFunction_UCableComponent_SetAttachEndTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCableComponent_SetAttachEndTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCableComponent_SetAttachEndTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCableComponent_SetAttachEndTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCableComponent_SetAttachEndTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCableComponent_SetAttachEndTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCableComponent_SetAttachEndToComponent_Statics
	{
		struct CableComponent_eventSetAttachEndToComponent_Parms
		{
			USceneComponent* Component;
			FName SocketName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCableComponent_SetAttachEndToComponent_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CableComponent_eventSetAttachEndToComponent_Parms, SocketName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCableComponent_SetAttachEndToComponent_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCableComponent_SetAttachEndToComponent_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CableComponent_eventSetAttachEndToComponent_Parms, Component), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCableComponent_SetAttachEndToComponent_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCableComponent_SetAttachEndToComponent_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCableComponent_SetAttachEndToComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCableComponent_SetAttachEndToComponent_Statics::NewProp_SocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCableComponent_SetAttachEndToComponent_Statics::NewProp_Component,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCableComponent_SetAttachEndToComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cable" },
		{ "Comment", "/** Attaches the end of the cable to a specific Component **/" },
		{ "CPP_Default_SocketName", "None" },
		{ "ModuleRelativePath", "Classes/CableComponent.h" },
		{ "ToolTip", "Attaches the end of the cable to a specific Component *" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCableComponent_SetAttachEndToComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCableComponent, nullptr, "SetAttachEndToComponent", nullptr, nullptr, sizeof(CableComponent_eventSetAttachEndToComponent_Parms), Z_Construct_UFunction_UCableComponent_SetAttachEndToComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCableComponent_SetAttachEndToComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCableComponent_SetAttachEndToComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCableComponent_SetAttachEndToComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCableComponent_SetAttachEndToComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCableComponent_SetAttachEndToComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCableComponent_NoRegister()
	{
		return UCableComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCableComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TileMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumSides_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumSides;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CableWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CableWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CableGravityScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CableGravityScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CableForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CableForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionFriction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CollisionFriction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableCollision_MetaData[];
#endif
		static void NewProp_bEnableCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableStiffness_MetaData[];
#endif
		static void NewProp_bEnableStiffness_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableStiffness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SolverIterations_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SolverIterations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubstepTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SubstepTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumSegments_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumSegments;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CableLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CableLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachEndToSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttachEndToSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachEndTo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttachEndTo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAttachEnd_MetaData[];
#endif
		static void NewProp_bAttachEnd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAttachEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAttachStart_MetaData[];
#endif
		static void NewProp_bAttachStart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAttachStart;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCableComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CableComponent,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCableComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCableComponent_GetAttachedActor, "GetAttachedActor" }, // 465621294
		{ &Z_Construct_UFunction_UCableComponent_GetAttachedComponent, "GetAttachedComponent" }, // 2419968877
		{ &Z_Construct_UFunction_UCableComponent_GetCableParticleLocations, "GetCableParticleLocations" }, // 3332736227
		{ &Z_Construct_UFunction_UCableComponent_SetAttachEndTo, "SetAttachEndTo" }, // 2639951497
		{ &Z_Construct_UFunction_UCableComponent_SetAttachEndToComponent, "SetAttachEndToComponent" }, // 2080985797
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCableComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/** Component that allows you to specify custom triangle mesh geometry */" },
		{ "HideCategories", "Object Physics Activation Components|Activation Mobility Trigger" },
		{ "IncludePath", "CableComponent.h" },
		{ "ModuleRelativePath", "Classes/CableComponent.h" },
		{ "ToolTip", "Component that allows you to specify custom triangle mesh geometry" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCableComponent_Statics::NewProp_TileMaterial_MetaData[] = {
		{ "Category", "Cable Rendering" },
		{ "Comment", "/** How many times to repeat the material along the length of the cable */" },
		{ "ModuleRelativePath", "Classes/CableComponent.h" },
		{ "ToolTip", "How many times to repeat the material along the length of the cable" },
		{ "UIMax", "8" },
		{ "UIMin", "0.1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCableComponent_Statics::NewProp_TileMaterial = { "TileMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCableComponent, TileMaterial), METADATA_PARAMS(Z_Construct_UClass_UCableComponent_Statics::NewProp_TileMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCableComponent_Statics::NewProp_TileMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCableComponent_Statics::NewProp_NumSides_MetaData[] = {
		{ "Category", "Cable Rendering" },
		{ "ClampMax", "16" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Number of sides of the cable geometry */" },
		{ "ModuleRelativePath", "Classes/CableComponent.h" },
		{ "ToolTip", "Number of sides of the cable geometry" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCableComponent_Statics::NewProp_NumSides = { "NumSides", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCableComponent, NumSides), METADATA_PARAMS(Z_Construct_UClass_UCableComponent_Statics::NewProp_NumSides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCableComponent_Statics::NewProp_NumSides_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCableComponent_Statics::NewProp_CableWidth_MetaData[] = {
		{ "Category", "Cable Rendering" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** How wide the cable geometry is */" },
		{ "ModuleRelativePath", "Classes/CableComponent.h" },
		{ "ToolTip", "How wide the cable geometry is" },
		{ "UIMax", "50.0" },
		{ "UIMin", "0.01" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCableComponent_Statics::NewProp_CableWidth = { "CableWidth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCableComponent, CableWidth), METADATA_PARAMS(Z_Construct_UClass_UCableComponent_Statics::NewProp_CableWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCableComponent_Statics::NewProp_CableWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCableComponent_Statics::NewProp_CableGravityScale_MetaData[] = {
		{ "Category", "Cable Forces" },
		{ "Comment", "/** Scaling applied to world gravity affecting this cable. */" },
		{ "ModuleRelativePath", "Classes/CableComponent.h" },
		{ "ToolTip", "Scaling applied to world gravity affecting this cable." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCableComponent_Statics::NewProp_CableGravityScale = { "CableGravityScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCableComponent, CableGravityScale), METADATA_PARAMS(Z_Construct_UClass_UCableComponent_Statics::NewProp_CableGravityScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCableComponent_Statics::NewProp_CableGravityScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCableComponent_Statics::NewProp_CableForce_MetaData[] = {
		{ "Category", "Cable Forces" },
		{ "Comment", "/** Force vector (world space) applied to all particles in cable. */" },
		{ "ModuleRelativePath", "Classes/CableComponent.h" },
		{ "ToolTip", "Force vector (world space) applied to all particles in cable." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCableComponent_Statics::NewProp_CableForce = { "CableForce", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCableComponent, CableForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UCableComponent_Statics::NewProp_CableForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCableComponent_Statics::NewProp_CableForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCableComponent_Statics::NewProp_CollisionFriction_MetaData[] = {
		{ "Category", "Cable" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** If collision is enabled, control how much sliding friction is applied when cable is in contact. */" },
		{ "EditCondition", "bEnableCollision" },
		{ "ModuleRelativePath", "Classes/CableComponent.h" },
		{ "ToolTip", "If collision is enabled, control how much sliding friction is applied when cable is in contact." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCableComponent_Statics::NewProp_CollisionFriction = { "CollisionFriction", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCableComponent, CollisionFriction), METADATA_PARAMS(Z_Construct_UClass_UCableComponent_Statics::NewProp_CollisionFriction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCableComponent_Statics::NewProp_CollisionFriction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCableComponent_Statics::NewProp_bEnableCollision_MetaData[] = {
		{ "Category", "Cable" },
		{ "Comment", "/** \n\x09 *\x09""EXPERIMENTAL. Perform sweeps for each cable particle, each substep, to avoid collisions with the world. \n\x09 *\x09Uses the Collision Preset on the component to determine what is collided with.\n\x09 *\x09This greatly increases the cost of the cable simulation.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/CableComponent.h" },
		{ "ToolTip", "EXPERIMENTAL. Perform sweeps for each cable particle, each substep, to avoid collisions with the world.\nUses the Collision Preset on the component to determine what is collided with.\nThis greatly increases the cost of the cable simulation." },
	};
#endif
	void Z_Construct_UClass_UCableComponent_Statics::NewProp_bEnableCollision_SetBit(void* Obj)
	{
		((UCableComponent*)Obj)->bEnableCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCableComponent_Statics::NewProp_bEnableCollision = { "bEnableCollision", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCableComponent), &Z_Construct_UClass_UCableComponent_Statics::NewProp_bEnableCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCableComponent_Statics::NewProp_bEnableCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCableComponent_Statics::NewProp_bEnableCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCableComponent_Statics::NewProp_bEnableStiffness_MetaData[] = {
		{ "Category", "Cable" },
		{ "Comment", "/** Add stiffness constraints to cable. */" },
		{ "ModuleRelativePath", "Classes/CableComponent.h" },
		{ "ToolTip", "Add stiffness constraints to cable." },
	};
#endif
	void Z_Construct_UClass_UCableComponent_Statics::NewProp_bEnableStiffness_SetBit(void* Obj)
	{
		((UCableComponent*)Obj)->bEnableStiffness = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCableComponent_Statics::NewProp_bEnableStiffness = { "bEnableStiffness", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCableComponent), &Z_Construct_UClass_UCableComponent_Statics::NewProp_bEnableStiffness_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCableComponent_Statics::NewProp_bEnableStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCableComponent_Statics::NewProp_bEnableStiffness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCableComponent_Statics::NewProp_SolverIterations_MetaData[] = {
		{ "Category", "Cable" },
		{ "ClampMax", "16" },
		{ "ClampMin", "1" },
		{ "Comment", "/** The number of solver iterations controls how 'stiff' the cable is */" },
		{ "ModuleRelativePath", "Classes/CableComponent.h" },
		{ "ToolTip", "The number of solver iterations controls how 'stiff' the cable is" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCableComponent_Statics::NewProp_SolverIterations = { "SolverIterations", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCableComponent, SolverIterations), METADATA_PARAMS(Z_Construct_UClass_UCableComponent_Statics::NewProp_SolverIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCableComponent_Statics::NewProp_SolverIterations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCableComponent_Statics::NewProp_SubstepTime_MetaData[] = {
		{ "Category", "Cable" },
		{ "ClampMin", "0.005" },
		{ "Comment", "/** Controls the simulation substep time for the cable */" },
		{ "ModuleRelativePath", "Classes/CableComponent.h" },
		{ "ToolTip", "Controls the simulation substep time for the cable" },
		{ "UIMax", "0.1" },
		{ "UIMin", "0.005" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCableComponent_Statics::NewProp_SubstepTime = { "SubstepTime", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCableComponent, SubstepTime), METADATA_PARAMS(Z_Construct_UClass_UCableComponent_Statics::NewProp_SubstepTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCableComponent_Statics::NewProp_SubstepTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCableComponent_Statics::NewProp_NumSegments_MetaData[] = {
		{ "Category", "Cable" },
		{ "ClampMin", "1" },
		{ "Comment", "/** How many segments the cable has */" },
		{ "ModuleRelativePath", "Classes/CableComponent.h" },
		{ "ToolTip", "How many segments the cable has" },
		{ "UIMax", "20" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCableComponent_Statics::NewProp_NumSegments = { "NumSegments", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCableComponent, NumSegments), METADATA_PARAMS(Z_Construct_UClass_UCableComponent_Statics::NewProp_NumSegments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCableComponent_Statics::NewProp_NumSegments_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCableComponent_Statics::NewProp_CableLength_MetaData[] = {
		{ "Category", "Cable" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Rest length of the cable */" },
		{ "ModuleRelativePath", "Classes/CableComponent.h" },
		{ "ToolTip", "Rest length of the cable" },
		{ "UIMax", "1000.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCableComponent_Statics::NewProp_CableLength = { "CableLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCableComponent, CableLength), METADATA_PARAMS(Z_Construct_UClass_UCableComponent_Statics::NewProp_CableLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCableComponent_Statics::NewProp_CableLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCableComponent_Statics::NewProp_EndLocation_MetaData[] = {
		{ "Category", "Cable" },
		{ "Comment", "/** End location of cable, relative to AttachEndTo (or AttachEndToSocketName) if specified, otherwise relative to cable component. */" },
		{ "MakeEditWidget", "TRUE" },
		{ "ModuleRelativePath", "Classes/CableComponent.h" },
		{ "ToolTip", "End location of cable, relative to AttachEndTo (or AttachEndToSocketName) if specified, otherwise relative to cable component." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCableComponent_Statics::NewProp_EndLocation = { "EndLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCableComponent, EndLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UCableComponent_Statics::NewProp_EndLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCableComponent_Statics::NewProp_EndLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCableComponent_Statics::NewProp_AttachEndToSocketName_MetaData[] = {
		{ "Category", "Cable" },
		{ "Comment", "/** Socket name on the AttachEndTo component to attach to */" },
		{ "ModuleRelativePath", "Classes/CableComponent.h" },
		{ "ToolTip", "Socket name on the AttachEndTo component to attach to" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCableComponent_Statics::NewProp_AttachEndToSocketName = { "AttachEndToSocketName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCableComponent, AttachEndToSocketName), METADATA_PARAMS(Z_Construct_UClass_UCableComponent_Statics::NewProp_AttachEndToSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCableComponent_Statics::NewProp_AttachEndToSocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCableComponent_Statics::NewProp_AttachEndTo_MetaData[] = {
		{ "Category", "Cable" },
		{ "Comment", "/** Actor or Component that the defines the end position of the cable */" },
		{ "ModuleRelativePath", "Classes/CableComponent.h" },
		{ "ToolTip", "Actor or Component that the defines the end position of the cable" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCableComponent_Statics::NewProp_AttachEndTo = { "AttachEndTo", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCableComponent, AttachEndTo), Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(Z_Construct_UClass_UCableComponent_Statics::NewProp_AttachEndTo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCableComponent_Statics::NewProp_AttachEndTo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCableComponent_Statics::NewProp_bAttachEnd_MetaData[] = {
		{ "Category", "Cable" },
		{ "Comment", "/** \n\x09 *\x09Should we fix the end to something (using AttachEndTo and EndLocation), or leave it free. \n\x09 *\x09If false, AttachEndTo and EndLocation are just used for initial location of end of cable\n\x09 */" },
		{ "ModuleRelativePath", "Classes/CableComponent.h" },
		{ "ToolTip", "Should we fix the end to something (using AttachEndTo and EndLocation), or leave it free.\nIf false, AttachEndTo and EndLocation are just used for initial location of end of cable" },
	};
#endif
	void Z_Construct_UClass_UCableComponent_Statics::NewProp_bAttachEnd_SetBit(void* Obj)
	{
		((UCableComponent*)Obj)->bAttachEnd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCableComponent_Statics::NewProp_bAttachEnd = { "bAttachEnd", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCableComponent), &Z_Construct_UClass_UCableComponent_Statics::NewProp_bAttachEnd_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCableComponent_Statics::NewProp_bAttachEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCableComponent_Statics::NewProp_bAttachEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCableComponent_Statics::NewProp_bAttachStart_MetaData[] = {
		{ "Category", "Cable" },
		{ "Comment", "/**\n\x09 *\x09Should we fix the start to something, or leave it free.\n\x09 *\x09If false, component transform is just used for initial location of start of cable\n\x09 */" },
		{ "ModuleRelativePath", "Classes/CableComponent.h" },
		{ "ToolTip", "Should we fix the start to something, or leave it free.\nIf false, component transform is just used for initial location of start of cable" },
	};
#endif
	void Z_Construct_UClass_UCableComponent_Statics::NewProp_bAttachStart_SetBit(void* Obj)
	{
		((UCableComponent*)Obj)->bAttachStart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCableComponent_Statics::NewProp_bAttachStart = { "bAttachStart", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCableComponent), &Z_Construct_UClass_UCableComponent_Statics::NewProp_bAttachStart_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCableComponent_Statics::NewProp_bAttachStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCableComponent_Statics::NewProp_bAttachStart_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCableComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCableComponent_Statics::NewProp_TileMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCableComponent_Statics::NewProp_NumSides,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCableComponent_Statics::NewProp_CableWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCableComponent_Statics::NewProp_CableGravityScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCableComponent_Statics::NewProp_CableForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCableComponent_Statics::NewProp_CollisionFriction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCableComponent_Statics::NewProp_bEnableCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCableComponent_Statics::NewProp_bEnableStiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCableComponent_Statics::NewProp_SolverIterations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCableComponent_Statics::NewProp_SubstepTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCableComponent_Statics::NewProp_NumSegments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCableComponent_Statics::NewProp_CableLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCableComponent_Statics::NewProp_EndLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCableComponent_Statics::NewProp_AttachEndToSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCableComponent_Statics::NewProp_AttachEndTo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCableComponent_Statics::NewProp_bAttachEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCableComponent_Statics::NewProp_bAttachStart,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCableComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCableComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCableComponent_Statics::ClassParams = {
		&UCableComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCableComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCableComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCableComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCableComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCableComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCableComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCableComponent, 459730001);
	template<> CABLECOMPONENT_API UClass* StaticClass<UCableComponent>()
	{
		return UCableComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCableComponent(Z_Construct_UClass_UCableComponent, &UCableComponent::StaticClass, TEXT("/Script/CableComponent"), TEXT("UCableComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCableComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
