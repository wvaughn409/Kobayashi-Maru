// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/NiagaraComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraComponent() {}
// Cross Module References
	NIAGARA_API UFunction* Z_Construct_UDelegateFunction_Niagara_OnNiagaraSystemFinished__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Niagara();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent();
	ENGINE_API UClass* Z_Construct_UClass_UFXSystemComponent();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraAgeUpdateMode();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAttachmentRule();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableBase();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariant();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraUserRedirectionParameterStore();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraTickBehavior();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Niagara_OnNiagaraSystemFinished__DelegateSignature_Statics
	{
		struct _Script_Niagara_eventOnNiagaraSystemFinished_Parms
		{
			UNiagaraComponent* PSystem;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PSystem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Niagara_OnNiagaraSystemFinished__DelegateSignature_Statics::NewProp_PSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Niagara_OnNiagaraSystemFinished__DelegateSignature_Statics::NewProp_PSystem = { "PSystem", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Niagara_eventOnNiagaraSystemFinished_Parms, PSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_Niagara_OnNiagaraSystemFinished__DelegateSignature_Statics::NewProp_PSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Niagara_OnNiagaraSystemFinished__DelegateSignature_Statics::NewProp_PSystem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Niagara_OnNiagaraSystemFinished__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Niagara_OnNiagaraSystemFinished__DelegateSignature_Statics::NewProp_PSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Niagara_OnNiagaraSystemFinished__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Called when the particle system is done\n" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Called when the particle system is done" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Niagara_OnNiagaraSystemFinished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Niagara, nullptr, "OnNiagaraSystemFinished__DelegateSignature", nullptr, nullptr, sizeof(_Script_Niagara_eventOnNiagaraSystemFinished_Parms), Z_Construct_UDelegateFunction_Niagara_OnNiagaraSystemFinished__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Niagara_OnNiagaraSystemFinished__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Niagara_OnNiagaraSystemFinished__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Niagara_OnNiagaraSystemFinished__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Niagara_OnNiagaraSystemFinished__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Niagara_OnNiagaraSystemFinished__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetAllowScalability)
	{
		P_GET_UBOOL(Z_Param_bAllow);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAllowScalability(Z_Param_bAllow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execGetPreviewLODDistance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPreviewLODDistance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execGetPreviewLODDistanceEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPreviewLODDistanceEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetPreviewLODDistance)
	{
		P_GET_UBOOL(Z_Param_bEnablePreviewLODDistance);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PreviewLODDistance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPreviewLODDistance(Z_Param_bEnablePreviewLODDistance,Z_Param_PreviewLODDistance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execGetDataInterface)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNiagaraDataInterface**)Z_Param__Result=P_THIS->GetDataInterface(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execIsPaused)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPaused();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetPaused)
	{
		P_GET_UBOOL(Z_Param_bInPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPaused(Z_Param_bInPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execAdvanceSimulationByTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_SimulateTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TickDeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AdvanceSimulationByTime(Z_Param_SimulateTime,Z_Param_TickDeltaSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execAdvanceSimulation)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_TickCount);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TickDeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AdvanceSimulation(Z_Param_TickCount,Z_Param_TickDeltaSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetRenderingEnabled)
	{
		P_GET_UBOOL(Z_Param_bInRenderingEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRenderingEnabled(Z_Param_bInRenderingEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execReinitializeSystem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReinitializeSystem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execResetSystem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetSystem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execGetNiagaraParticleValueVec3_DebugOnly)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InEmitterName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InValueName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=P_THIS->GetNiagaraParticleValueVec3_DebugOnly(Z_Param_InEmitterName,Z_Param_InValueName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execGetNiagaraParticleValues_DebugOnly)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InEmitterName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InValueName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=P_THIS->GetNiagaraParticleValues_DebugOnly(Z_Param_InEmitterName,Z_Param_InValueName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execGetNiagaraParticlePositions_DebugOnly)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InEmitterName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=P_THIS->GetNiagaraParticlePositions_DebugOnly(Z_Param_InEmitterName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetVariableMaterial)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InVariableName);
		P_GET_OBJECT(UMaterialInterface,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVariableMaterial(Z_Param_InVariableName,Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetVariableObject)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InVariableName);
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVariableObject(Z_Param_InVariableName,Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetNiagaraVariableObject)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InVariableName);
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNiagaraVariableObject(Z_Param_InVariableName,Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetVariableActor)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InVariableName);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVariableActor(Z_Param_InVariableName,Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetNiagaraVariableActor)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InVariableName);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNiagaraVariableActor(Z_Param_InVariableName,Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetVariableBool)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InVariableName);
		P_GET_UBOOL(Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVariableBool(Z_Param_InVariableName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetNiagaraVariableBool)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InVariableName);
		P_GET_UBOOL(Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNiagaraVariableBool(Z_Param_InVariableName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetVariableInt)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InVariableName);
		P_GET_PROPERTY(FIntProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVariableInt(Z_Param_InVariableName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetNiagaraVariableInt)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InVariableName);
		P_GET_PROPERTY(FIntProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNiagaraVariableInt(Z_Param_InVariableName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetVariableFloat)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InVariableName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVariableFloat(Z_Param_InVariableName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetNiagaraVariableFloat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InVariableName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNiagaraVariableFloat(Z_Param_InVariableName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetVariableVec2)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InVariableName);
		P_GET_STRUCT(FVector2D,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVariableVec2(Z_Param_InVariableName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetNiagaraVariableVec2)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InVariableName);
		P_GET_STRUCT(FVector2D,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNiagaraVariableVec2(Z_Param_InVariableName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetVariableVec3)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InVariableName);
		P_GET_STRUCT(FVector,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVariableVec3(Z_Param_InVariableName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetNiagaraVariableVec3)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InVariableName);
		P_GET_STRUCT(FVector,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNiagaraVariableVec3(Z_Param_InVariableName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetVariableQuat)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InVariableName);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVariableQuat(Z_Param_InVariableName,Z_Param_Out_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetNiagaraVariableQuat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InVariableName);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNiagaraVariableQuat(Z_Param_InVariableName,Z_Param_Out_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetVariableVec4)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InVariableName);
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVariableVec4(Z_Param_InVariableName,Z_Param_Out_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetNiagaraVariableVec4)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InVariableName);
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNiagaraVariableVec4(Z_Param_InVariableName,Z_Param_Out_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetVariableLinearColor)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InVariableName);
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVariableLinearColor(Z_Param_InVariableName,Z_Param_Out_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetNiagaraVariableLinearColor)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InVariableName);
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNiagaraVariableLinearColor(Z_Param_InVariableName,Z_Param_Out_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetAutoDestroy)
	{
		P_GET_UBOOL(Z_Param_bInAutoDestroy);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAutoDestroy(Z_Param_bInAutoDestroy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetMaxSimTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InMaxTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxSimTime(Z_Param_InMaxTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execGetMaxSimTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxSimTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetSeekDelta)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InSeekDelta);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSeekDelta(Z_Param_InSeekDelta);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execGetSeekDelta)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSeekDelta();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetCanRenderWhileSeeking)
	{
		P_GET_UBOOL(Z_Param_bInCanRenderWhileSeeking);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCanRenderWhileSeeking(Z_Param_bInCanRenderWhileSeeking);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSeekToDesiredAge)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDesiredAge);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SeekToDesiredAge(Z_Param_InDesiredAge);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetDesiredAge)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDesiredAge);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDesiredAge(Z_Param_InDesiredAge);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execGetDesiredAge)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDesiredAge();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetAgeUpdateMode)
	{
		P_GET_ENUM(ENiagaraAgeUpdateMode,Z_Param_InAgeUpdateMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAgeUpdateMode(ENiagaraAgeUpdateMode(Z_Param_InAgeUpdateMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execGetAgeUpdateMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ENiagaraAgeUpdateMode*)Z_Param__Result=P_THIS->GetAgeUpdateMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execGetForceSolo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetForceSolo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetForceSolo)
	{
		P_GET_UBOOL(Z_Param_bInForceSolo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetForceSolo(Z_Param_bInForceSolo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execGetAsset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNiagaraSystem**)Z_Param__Result=P_THIS->GetAsset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetAsset)
	{
		P_GET_OBJECT(UNiagaraSystem,Z_Param_InAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAsset(Z_Param_InAsset);
		P_NATIVE_END;
	}
	void UNiagaraComponent::StaticRegisterNativesUNiagaraComponent()
	{
		UClass* Class = UNiagaraComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AdvanceSimulation", &UNiagaraComponent::execAdvanceSimulation },
			{ "AdvanceSimulationByTime", &UNiagaraComponent::execAdvanceSimulationByTime },
			{ "GetAgeUpdateMode", &UNiagaraComponent::execGetAgeUpdateMode },
			{ "GetAsset", &UNiagaraComponent::execGetAsset },
			{ "GetDataInterface", &UNiagaraComponent::execGetDataInterface },
			{ "GetDesiredAge", &UNiagaraComponent::execGetDesiredAge },
			{ "GetForceSolo", &UNiagaraComponent::execGetForceSolo },
			{ "GetMaxSimTime", &UNiagaraComponent::execGetMaxSimTime },
			{ "GetNiagaraParticlePositions_DebugOnly", &UNiagaraComponent::execGetNiagaraParticlePositions_DebugOnly },
			{ "GetNiagaraParticleValues_DebugOnly", &UNiagaraComponent::execGetNiagaraParticleValues_DebugOnly },
			{ "GetNiagaraParticleValueVec3_DebugOnly", &UNiagaraComponent::execGetNiagaraParticleValueVec3_DebugOnly },
			{ "GetPreviewLODDistance", &UNiagaraComponent::execGetPreviewLODDistance },
			{ "GetPreviewLODDistanceEnabled", &UNiagaraComponent::execGetPreviewLODDistanceEnabled },
			{ "GetSeekDelta", &UNiagaraComponent::execGetSeekDelta },
			{ "IsPaused", &UNiagaraComponent::execIsPaused },
			{ "ReinitializeSystem", &UNiagaraComponent::execReinitializeSystem },
			{ "ResetSystem", &UNiagaraComponent::execResetSystem },
			{ "SeekToDesiredAge", &UNiagaraComponent::execSeekToDesiredAge },
			{ "SetAgeUpdateMode", &UNiagaraComponent::execSetAgeUpdateMode },
			{ "SetAllowScalability", &UNiagaraComponent::execSetAllowScalability },
			{ "SetAsset", &UNiagaraComponent::execSetAsset },
			{ "SetAutoDestroy", &UNiagaraComponent::execSetAutoDestroy },
			{ "SetCanRenderWhileSeeking", &UNiagaraComponent::execSetCanRenderWhileSeeking },
			{ "SetDesiredAge", &UNiagaraComponent::execSetDesiredAge },
			{ "SetForceSolo", &UNiagaraComponent::execSetForceSolo },
			{ "SetMaxSimTime", &UNiagaraComponent::execSetMaxSimTime },
			{ "SetNiagaraVariableActor", &UNiagaraComponent::execSetNiagaraVariableActor },
			{ "SetNiagaraVariableBool", &UNiagaraComponent::execSetNiagaraVariableBool },
			{ "SetNiagaraVariableFloat", &UNiagaraComponent::execSetNiagaraVariableFloat },
			{ "SetNiagaraVariableInt", &UNiagaraComponent::execSetNiagaraVariableInt },
			{ "SetNiagaraVariableLinearColor", &UNiagaraComponent::execSetNiagaraVariableLinearColor },
			{ "SetNiagaraVariableObject", &UNiagaraComponent::execSetNiagaraVariableObject },
			{ "SetNiagaraVariableQuat", &UNiagaraComponent::execSetNiagaraVariableQuat },
			{ "SetNiagaraVariableVec2", &UNiagaraComponent::execSetNiagaraVariableVec2 },
			{ "SetNiagaraVariableVec3", &UNiagaraComponent::execSetNiagaraVariableVec3 },
			{ "SetNiagaraVariableVec4", &UNiagaraComponent::execSetNiagaraVariableVec4 },
			{ "SetPaused", &UNiagaraComponent::execSetPaused },
			{ "SetPreviewLODDistance", &UNiagaraComponent::execSetPreviewLODDistance },
			{ "SetRenderingEnabled", &UNiagaraComponent::execSetRenderingEnabled },
			{ "SetSeekDelta", &UNiagaraComponent::execSetSeekDelta },
			{ "SetVariableActor", &UNiagaraComponent::execSetVariableActor },
			{ "SetVariableBool", &UNiagaraComponent::execSetVariableBool },
			{ "SetVariableFloat", &UNiagaraComponent::execSetVariableFloat },
			{ "SetVariableInt", &UNiagaraComponent::execSetVariableInt },
			{ "SetVariableLinearColor", &UNiagaraComponent::execSetVariableLinearColor },
			{ "SetVariableMaterial", &UNiagaraComponent::execSetVariableMaterial },
			{ "SetVariableObject", &UNiagaraComponent::execSetVariableObject },
			{ "SetVariableQuat", &UNiagaraComponent::execSetVariableQuat },
			{ "SetVariableVec2", &UNiagaraComponent::execSetVariableVec2 },
			{ "SetVariableVec3", &UNiagaraComponent::execSetVariableVec3 },
			{ "SetVariableVec4", &UNiagaraComponent::execSetVariableVec4 },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNiagaraComponent_AdvanceSimulation_Statics
	{
		struct NiagaraComponent_eventAdvanceSimulation_Parms
		{
			int32 TickCount;
			float TickDeltaSeconds;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TickDeltaSeconds;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TickCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNiagaraComponent_AdvanceSimulation_Statics::NewProp_TickDeltaSeconds = { "TickDeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraComponent_eventAdvanceSimulation_Parms, TickDeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraComponent_AdvanceSimulation_Statics::NewProp_TickCount = { "TickCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraComponent_eventAdvanceSimulation_Parms, TickCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_AdvanceSimulation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_AdvanceSimulation_Statics::NewProp_TickDeltaSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_AdvanceSimulation_Statics::NewProp_TickCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_AdvanceSimulation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Advances this system's simulation by the specified number of ticks and delta time. */" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Advances this system's simulation by the specified number of ticks and delta time." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_AdvanceSimulation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "AdvanceSimulation", nullptr, nullptr, sizeof(NiagaraComponent_eventAdvanceSimulation_Parms), Z_Construct_UFunction_UNiagaraComponent_AdvanceSimulation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_AdvanceSimulation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_AdvanceSimulation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_AdvanceSimulation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_AdvanceSimulation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_AdvanceSimulation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_AdvanceSimulationByTime_Statics
	{
		struct NiagaraComponent_eventAdvanceSimulationByTime_Parms
		{
			float SimulateTime;
			float TickDeltaSeconds;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TickDeltaSeconds;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SimulateTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNiagaraComponent_AdvanceSimulationByTime_Statics::NewProp_TickDeltaSeconds = { "TickDeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraComponent_eventAdvanceSimulationByTime_Parms, TickDeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNiagaraComponent_AdvanceSimulationByTime_Statics::NewProp_SimulateTime = { "SimulateTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraComponent_eventAdvanceSimulationByTime_Parms, SimulateTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_AdvanceSimulationByTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_AdvanceSimulationByTime_Statics::NewProp_TickDeltaSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_AdvanceSimulationByTime_Statics::NewProp_SimulateTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_AdvanceSimulationByTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Advances this system's simulation by the specified time in seconds and delta time. Advancement is done in whole ticks of TickDeltaSeconds so actual simulated time will be the nearest lower multiple of TickDeltaSeconds. */" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Advances this system's simulation by the specified time in seconds and delta time. Advancement is done in whole ticks of TickDeltaSeconds so actual simulated time will be the nearest lower multiple of TickDeltaSeconds." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_AdvanceSimulationByTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "AdvanceSimulationByTime", nullptr, nullptr, sizeof(NiagaraComponent_eventAdvanceSimulationByTime_Parms), Z_Construct_UFunction_UNiagaraComponent_AdvanceSimulationByTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_AdvanceSimulationByTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_AdvanceSimulationByTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_AdvanceSimulationByTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_AdvanceSimulationByTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_AdvanceSimulationByTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_GetAgeUpdateMode_Statics
	{
		struct NiagaraComponent_eventGetAgeUpdateMode_Parms
		{
			ENiagaraAgeUpdateMode ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UNiagaraComponent_GetAgeUpdateMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraComponent_eventGetAgeUpdateMode_Parms, ReturnValue), Z_Construct_UEnum_Niagara_ENiagaraAgeUpdateMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNiagaraComponent_GetAgeUpdateMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_GetAgeUpdateMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_GetAgeUpdateMode_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_GetAgeUpdateMode_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_GetAgeUpdateMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "DisplayName", "Get Age Update Mode" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_GetAgeUpdateMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "GetAgeUpdateMode", nullptr, nullptr, sizeof(NiagaraComponent_eventGetAgeUpdateMode_Parms), Z_Construct_UFunction_UNiagaraComponent_GetAgeUpdateMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetAgeUpdateMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_GetAgeUpdateMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetAgeUpdateMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_GetAgeUpdateMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_GetAgeUpdateMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_GetAsset_Statics
	{
		struct NiagaraComponent_eventGetAsset_Parms
		{
			UNiagaraSystem* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraComponent_GetAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraComponent_eventGetAsset_Parms, ReturnValue), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_GetAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_GetAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_GetAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "DisplayName", "Get Niagara System Asset" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_GetAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "GetAsset", nullptr, nullptr, sizeof(NiagaraComponent_eventGetAsset_Parms), Z_Construct_UFunction_UNiagaraComponent_GetAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_GetAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_GetAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_GetAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_GetDataInterface_Statics
	{
		struct NiagaraComponent_eventGetDataInterface_Parms
		{
			FString Name;
			UNiagaraDataInterface* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraComponent_GetDataInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraComponent_eventGetDataInterface_Parms, ReturnValue), Z_Construct_UClass_UNiagaraDataInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_GetDataInterface_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraComponent_GetDataInterface_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraComponent_eventGetDataInterface_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_GetDataInterface_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetDataInterface_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_GetDataInterface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_GetDataInterface_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_GetDataInterface_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_GetDataInterface_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_GetDataInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "GetDataInterface", nullptr, nullptr, sizeof(NiagaraComponent_eventGetDataInterface_Parms), Z_Construct_UFunction_UNiagaraComponent_GetDataInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetDataInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_GetDataInterface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetDataInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_GetDataInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_GetDataInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_GetDesiredAge_Statics
	{
		struct NiagaraComponent_eventGetDesiredAge_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNiagaraComponent_GetDesiredAge_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraComponent_eventGetDesiredAge_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_GetDesiredAge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_GetDesiredAge_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_GetDesiredAge_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Gets the desired age of the System instance.  This is only relevant when using the DesiredAge age update mode. */" },
		{ "DisplayName", "Get Desired Age" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Gets the desired age of the System instance.  This is only relevant when using the DesiredAge age update mode." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_GetDesiredAge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "GetDesiredAge", nullptr, nullptr, sizeof(NiagaraComponent_eventGetDesiredAge_Parms), Z_Construct_UFunction_UNiagaraComponent_GetDesiredAge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetDesiredAge_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_GetDesiredAge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetDesiredAge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_GetDesiredAge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_GetDesiredAge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_GetForceSolo_Statics
	{
		struct NiagaraComponent_eventGetForceSolo_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNiagaraComponent_GetForceSolo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NiagaraComponent_eventGetForceSolo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraComponent_GetForceSolo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NiagaraComponent_eventGetForceSolo_Parms), &Z_Construct_UFunction_UNiagaraComponent_GetForceSolo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_GetForceSolo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_GetForceSolo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_GetForceSolo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "DisplayName", "Is In Forced Solo Mode" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_GetForceSolo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "GetForceSolo", nullptr, nullptr, sizeof(NiagaraComponent_eventGetForceSolo_Parms), Z_Construct_UFunction_UNiagaraComponent_GetForceSolo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetForceSolo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_GetForceSolo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetForceSolo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_GetForceSolo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_GetForceSolo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_GetMaxSimTime_Statics
	{
		struct NiagaraComponent_eventGetMaxSimTime_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNiagaraComponent_GetMaxSimTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraComponent_eventGetMaxSimTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_GetMaxSimTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_GetMaxSimTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_GetMaxSimTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets the maximum time that you can jump within a tick which is used when seeking from the current age, to the desired age.  This is only relevant\n\x09when using the DesiredAge age update mode. */" },
		{ "DisplayName", "Get Max Desired Age Tick Delta" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Sets the maximum time that you can jump within a tick which is used when seeking from the current age, to the desired age.  This is only relevant\n      when using the DesiredAge age update mode." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_GetMaxSimTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "GetMaxSimTime", nullptr, nullptr, sizeof(NiagaraComponent_eventGetMaxSimTime_Parms), Z_Construct_UFunction_UNiagaraComponent_GetMaxSimTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetMaxSimTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_GetMaxSimTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetMaxSimTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_GetMaxSimTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_GetMaxSimTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticlePositions_DebugOnly_Statics
	{
		struct NiagaraComponent_eventGetNiagaraParticlePositions_DebugOnly_Parms
		{
			FString InEmitterName;
			TArray<FVector> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InEmitterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InEmitterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticlePositions_DebugOnly_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraComponent_eventGetNiagaraParticlePositions_DebugOnly_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticlePositions_DebugOnly_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticlePositions_DebugOnly_Statics::NewProp_InEmitterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticlePositions_DebugOnly_Statics::NewProp_InEmitterName = { "InEmitterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraComponent_eventGetNiagaraParticlePositions_DebugOnly_Parms, InEmitterName), METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticlePositions_DebugOnly_Statics::NewProp_InEmitterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticlePositions_DebugOnly_Statics::NewProp_InEmitterName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticlePositions_DebugOnly_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticlePositions_DebugOnly_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticlePositions_DebugOnly_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticlePositions_DebugOnly_Statics::NewProp_InEmitterName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticlePositions_DebugOnly_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Debug accessors for getting positions in blueprints. */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Get Niagara Emitter Positions is deprecated, use the particle export DI inside your emitter instead." },
		{ "DisplayName", "Get Niagara Emitter Positions" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Debug accessors for getting positions in blueprints." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticlePositions_DebugOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "GetNiagaraParticlePositions_DebugOnly", nullptr, nullptr, sizeof(NiagaraComponent_eventGetNiagaraParticlePositions_DebugOnly_Parms), Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticlePositions_DebugOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticlePositions_DebugOnly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticlePositions_DebugOnly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticlePositions_DebugOnly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticlePositions_DebugOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticlePositions_DebugOnly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValues_DebugOnly_Statics
	{
		struct NiagaraComponent_eventGetNiagaraParticleValues_DebugOnly_Parms
		{
			FString InEmitterName;
			FString InValueName;
			TArray<float> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InValueName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InValueName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InEmitterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InEmitterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValues_DebugOnly_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraComponent_eventGetNiagaraParticleValues_DebugOnly_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValues_DebugOnly_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValues_DebugOnly_Statics::NewProp_InValueName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValues_DebugOnly_Statics::NewProp_InValueName = { "InValueName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraComponent_eventGetNiagaraParticleValues_DebugOnly_Parms, InValueName), METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValues_DebugOnly_Statics::NewProp_InValueName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValues_DebugOnly_Statics::NewProp_InValueName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValues_DebugOnly_Statics::NewProp_InEmitterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValues_DebugOnly_Statics::NewProp_InEmitterName = { "InEmitterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraComponent_eventGetNiagaraParticleValues_DebugOnly_Parms, InEmitterName), METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValues_DebugOnly_Statics::NewProp_InEmitterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValues_DebugOnly_Statics::NewProp_InEmitterName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValues_DebugOnly_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValues_DebugOnly_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValues_DebugOnly_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValues_DebugOnly_Statics::NewProp_InValueName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValues_DebugOnly_Statics::NewProp_InEmitterName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValues_DebugOnly_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Debug accessors for getting a float attribute array in blueprints.  The attribute name should be without namespaces. For example for \"Particles.Position\", send \"Position\". */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Get Niagara Emitter Float Attrib is deprecated, use the particle export DI inside your emitter instead." },
		{ "DisplayName", "Get Niagara Emitter Float Attrib" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Debug accessors for getting a float attribute array in blueprints.  The attribute name should be without namespaces. For example for \"Particles.Position\", send \"Position\"." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValues_DebugOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "GetNiagaraParticleValues_DebugOnly", nullptr, nullptr, sizeof(NiagaraComponent_eventGetNiagaraParticleValues_DebugOnly_Parms), Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValues_DebugOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValues_DebugOnly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValues_DebugOnly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValues_DebugOnly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValues_DebugOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValues_DebugOnly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly_Statics
	{
		struct NiagaraComponent_eventGetNiagaraParticleValueVec3_DebugOnly_Parms
		{
			FString InEmitterName;
			FString InValueName;
			TArray<FVector> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InValueName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InValueName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InEmitterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InEmitterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraComponent_eventGetNiagaraParticleValueVec3_DebugOnly_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly_Statics::NewProp_InValueName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly_Statics::NewProp_InValueName = { "InValueName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraComponent_eventGetNiagaraParticleValueVec3_DebugOnly_Parms, InValueName), METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly_Statics::NewProp_InValueName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly_Statics::NewProp_InValueName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly_Statics::NewProp_InEmitterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly_Statics::NewProp_InEmitterName = { "InEmitterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraComponent_eventGetNiagaraParticleValueVec3_DebugOnly_Parms, InEmitterName), METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly_Statics::NewProp_InEmitterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly_Statics::NewProp_InEmitterName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly_Statics::NewProp_InValueName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly_Statics::NewProp_InEmitterName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Debug accessors for getting a FVector attribute array in blueprints. The attribute name should be without namespaces. For example for \"Particles.Position\", send \"Position\". */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Get Niagara Emitter Vec3 Attrib is deprecated, use the particle export DI inside your emitter instead." },
		{ "DisplayName", "Get Niagara Emitter Vec3 Attrib" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Debug accessors for getting a FVector attribute array in blueprints. The attribute name should be without namespaces. For example for \"Particles.Position\", send \"Position\"." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "GetNiagaraParticleValueVec3_DebugOnly", nullptr, nullptr, sizeof(NiagaraComponent_eventGetNiagaraParticleValueVec3_DebugOnly_Parms), Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_GetPreviewLODDistance_Statics
	{
		struct NiagaraComponent_eventGetPreviewLODDistance_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraComponent_GetPreviewLODDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraComponent_eventGetPreviewLODDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_GetPreviewLODDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_GetPreviewLODDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_GetPreviewLODDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Preview" },
		{ "Keywords", "preview LOD Distance scalability" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_GetPreviewLODDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "GetPreviewLODDistance", nullptr, nullptr, sizeof(NiagaraComponent_eventGetPreviewLODDistance_Parms), Z_Construct_UFunction_UNiagaraComponent_GetPreviewLODDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetPreviewLODDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_GetPreviewLODDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetPreviewLODDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_GetPreviewLODDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_GetPreviewLODDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_GetPreviewLODDistanceEnabled_Statics
	{
		struct NiagaraComponent_eventGetPreviewLODDistanceEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNiagaraComponent_GetPreviewLODDistanceEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NiagaraComponent_eventGetPreviewLODDistanceEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraComponent_GetPreviewLODDistanceEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NiagaraComponent_eventGetPreviewLODDistanceEnabled_Parms), &Z_Construct_UFunction_UNiagaraComponent_GetPreviewLODDistanceEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_GetPreviewLODDistanceEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_GetPreviewLODDistanceEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_GetPreviewLODDistanceEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Preview" },
		{ "Keywords", "preview LOD Distance scalability" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_GetPreviewLODDistanceEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "GetPreviewLODDistanceEnabled", nullptr, nullptr, sizeof(NiagaraComponent_eventGetPreviewLODDistanceEnabled_Parms), Z_Construct_UFunction_UNiagaraComponent_GetPreviewLODDistanceEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetPreviewLODDistanceEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_GetPreviewLODDistanceEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetPreviewLODDistanceEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_GetPreviewLODDistanceEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_GetPreviewLODDistanceEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_GetSeekDelta_Statics
	{
		struct NiagaraComponent_eventGetSeekDelta_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNiagaraComponent_GetSeekDelta_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraComponent_eventGetSeekDelta_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_GetSeekDelta_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_GetSeekDelta_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_GetSeekDelta_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Gets the delta value which is used when seeking from the current age, to the desired age.  This is only relevant\n\x09when using the DesiredAge age update mode. */" },
		{ "DisplayName", "Get Desired Age Seek Delta" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Gets the delta value which is used when seeking from the current age, to the desired age.  This is only relevant\n      when using the DesiredAge age update mode." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_GetSeekDelta_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "GetSeekDelta", nullptr, nullptr, sizeof(NiagaraComponent_eventGetSeekDelta_Parms), Z_Construct_UFunction_UNiagaraComponent_GetSeekDelta_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetSeekDelta_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_GetSeekDelta_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetSeekDelta_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_GetSeekDelta()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_GetSeekDelta_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_IsPaused_Statics
	{
		struct NiagaraComponent_eventIsPaused_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNiagaraComponent_IsPaused_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NiagaraComponent_eventIsPaused_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraComponent_IsPaused_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NiagaraComponent_eventIsPaused_Parms), &Z_Construct_UFunction_UNiagaraComponent_IsPaused_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_IsPaused_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_IsPaused_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_IsPaused_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_IsPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "IsPaused", nullptr, nullptr, sizeof(NiagaraComponent_eventIsPaused_Parms), Z_Construct_UFunction_UNiagaraComponent_IsPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_IsPaused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_IsPaused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_IsPaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_IsPaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_IsPaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_ReinitializeSystem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_ReinitializeSystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Called on when an external object wishes to force this System to reinitialize itself from the System data.*/" },
		{ "DisplayName", "Reinitialize System" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Called on when an external object wishes to force this System to reinitialize itself from the System data." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_ReinitializeSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "ReinitializeSystem", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_ReinitializeSystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_ReinitializeSystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_ReinitializeSystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_ReinitializeSystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_ResetSystem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_ResetSystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Resets the System to it's initial pre-simulated state. */" },
		{ "DisplayName", "Reset System" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Resets the System to it's initial pre-simulated state." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_ResetSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "ResetSystem", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_ResetSystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_ResetSystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_ResetSystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_ResetSystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SeekToDesiredAge_Statics
	{
		struct NiagaraComponent_eventSeekToDesiredAge_Parms
		{
			float InDesiredAge;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InDesiredAge;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNiagaraComponent_SeekToDesiredAge_Statics::NewProp_InDesiredAge = { "InDesiredAge", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraComponent_eventSeekToDesiredAge_Parms, InDesiredAge), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SeekToDesiredAge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SeekToDesiredAge_Statics::NewProp_InDesiredAge,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SeekToDesiredAge_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets the desired age of the System instance and designates that this change is a seek.  When seeking to a desired age the\n\x09    The component can optionally prevent rendering. */" },
		{ "DisplayName", "Seek to Desired Age" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Sets the desired age of the System instance and designates that this change is a seek.  When seeking to a desired age the\n          The component can optionally prevent rendering." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SeekToDesiredAge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SeekToDesiredAge", nullptr, nullptr, sizeof(NiagaraComponent_eventSeekToDesiredAge_Parms), Z_Construct_UFunction_UNiagaraComponent_SeekToDesiredAge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SeekToDesiredAge_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SeekToDesiredAge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SeekToDesiredAge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SeekToDesiredAge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SeekToDesiredAge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetAgeUpdateMode_Statics
	{
		struct NiagaraComponent_eventSetAgeUpdateMode_Parms
		{
			ENiagaraAgeUpdateMode InAgeUpdateMode;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InAgeUpdateMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InAgeUpdateMode_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetAgeUpdateMode_Statics::NewProp_InAgeUpdateMode = { "InAgeUpdateMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraComponent_eventSetAgeUpdateMode_Parms, InAgeUpdateMode), Z_Construct_UEnum_Niagara_ENiagaraAgeUpdateMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNiagaraComponent_SetAgeUpdateMode_Statics::NewProp_InAgeUpdateMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetAgeUpdateMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetAgeUpdateMode_Statics::NewProp_InAgeUpdateMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetAgeUpdateMode_Statics::NewProp_InAgeUpdateMode_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetAgeUpdateMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets the age update mode for the System instance. */" },
		{ "DisplayName", "Set Age Update Mode" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Sets the age update mode for the System instance." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetAgeUpdateMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetAgeUpdateMode", nullptr, nullptr, sizeof(NiagaraComponent_eventSetAgeUpdateMode_Parms), Z_Construct_UFunction_UNiagaraComponent_SetAgeUpdateMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetAgeUpdateMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetAgeUpdateMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetAgeUpdateMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetAgeUpdateMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetAgeUpdateMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetAllowScalability_Statics
	{
		struct NiagaraComponent_eventSetAllowScalability_Parms
		{
			bool bAllow;
		};
		static void NewProp_bAllow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllow;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNiagaraComponent_SetAllowScalability_Statics::NewProp_bAllow_SetBit(void* Obj)
	{
		((NiagaraComponent_eventSetAllowScalability_Parms*)Obj)->bAllow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetAllowScalability_Statics::NewProp_bAllow = { "bAllow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NiagaraComponent_eventSetAllowScalability_Parms), &Z_Construct_UFunction_UNiagaraComponent_SetAllowScalability_Statics::NewProp_bAllow_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetAllowScalability_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetAllowScalability_Statics::NewProp_bAllow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetAllowScalability_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scalability" },
		{ "Comment", "/** Set whether this component is allowed to perform scalability checks and potentially be culled etc. Occasionally it is useful to disable this for specific components. E.g. Effects on the local player. */" },
		{ "Keywords", "LOD scalability" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Set whether this component is allowed to perform scalability checks and potentially be culled etc. Occasionally it is useful to disable this for specific components. E.g. Effects on the local player." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetAllowScalability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetAllowScalability", nullptr, nullptr, sizeof(NiagaraComponent_eventSetAllowScalability_Parms), Z_Construct_UFunction_UNiagaraComponent_SetAllowScalability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetAllowScalability_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetAllowScalability_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetAllowScalability_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetAllowScalability()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetAllowScalability_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetAsset_Statics
	{
		struct NiagaraComponent_eventSetAsset_Parms
		{
			UNiagaraSystem* InAsset;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetAsset_Statics::NewProp_InAsset = { "InAsset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraComponent_eventSetAsset_Parms, InAsset), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetAsset_Statics::NewProp_InAsset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "DisplayName", "Set Niagara System Asset" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetAsset", nullptr, nullptr, sizeof(NiagaraComponent_eventSetAsset_Parms), Z_Construct_UFunction_UNiagaraComponent_SetAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetAutoDestroy_Statics
	{
		struct NiagaraComponent_eventSetAutoDestroy_Parms
		{
			bool bInAutoDestroy;
		};
		static void NewProp_bInAutoDestroy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInAutoDestroy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNiagaraComponent_SetAutoDestroy_Statics::NewProp_bInAutoDestroy_SetBit(void* Obj)
	{
		((NiagaraComponent_eventSetAutoDestroy_Parms*)Obj)->bInAutoDestroy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetAutoDestroy_Statics::NewProp_bInAutoDestroy = { "bInAutoDestroy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NiagaraComponent_eventSetAutoDestroy_Parms), &Z_Construct_UFunction_UNiagaraComponent_SetAutoDestroy_Statics::NewProp_bInAutoDestroy_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetAutoDestroy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetAutoDestroy_Statics::NewProp_bInAutoDestroy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetAutoDestroy_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "DisplayName", "Set Auto Destroy" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetAutoDestroy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetAutoDestroy", nullptr, nullptr, sizeof(NiagaraComponent_eventSetAutoDestroy_Parms), Z_Construct_UFunction_UNiagaraComponent_SetAutoDestroy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetAutoDestroy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetAutoDestroy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetAutoDestroy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetAutoDestroy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetAutoDestroy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetCanRenderWhileSeeking_Statics
	{
		struct NiagaraComponent_eventSetCanRenderWhileSeeking_Parms
		{
			bool bInCanRenderWhileSeeking;
		};
		static void NewProp_bInCanRenderWhileSeeking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInCanRenderWhileSeeking;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNiagaraComponent_SetCanRenderWhileSeeking_Statics::NewProp_bInCanRenderWhileSeeking_SetBit(void* Obj)
	{
		((NiagaraComponent_eventSetCanRenderWhileSeeking_Parms*)Obj)->bInCanRenderWhileSeeking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetCanRenderWhileSeeking_Statics::NewProp_bInCanRenderWhileSeeking = { "bInCanRenderWhileSeeking", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NiagaraComponent_eventSetCanRenderWhileSeeking_Parms), &Z_Construct_UFunction_UNiagaraComponent_SetCanRenderWhileSeeking_Statics::NewProp_bInCanRenderWhileSeeking_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetCanRenderWhileSeeking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetCanRenderWhileSeeking_Statics::NewProp_bInCanRenderWhileSeeking,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetCanRenderWhileSeeking_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets whether or not the system can render while seeking. */" },
		{ "DisplayName", "Set Can Render While Seeking" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Sets whether or not the system can render while seeking." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetCanRenderWhileSeeking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetCanRenderWhileSeeking", nullptr, nullptr, sizeof(NiagaraComponent_eventSetCanRenderWhileSeeking_Parms), Z_Construct_UFunction_UNiagaraComponent_SetCanRenderWhileSeeking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetCanRenderWhileSeeking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetCanRenderWhileSeeking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetCanRenderWhileSeeking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetCanRenderWhileSeeking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetCanRenderWhileSeeking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetDesiredAge_Statics
	{
		struct NiagaraComponent_eventSetDesiredAge_Parms
		{
			float InDesiredAge;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InDesiredAge;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetDesiredAge_Statics::NewProp_InDesiredAge = { "InDesiredAge", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraComponent_eventSetDesiredAge_Parms, InDesiredAge), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetDesiredAge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetDesiredAge_Statics::NewProp_InDesiredAge,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetDesiredAge_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets the desired age of the System instance.  This is only relevant when using the DesiredAge age update mode. */" },
		{ "DisplayName", "Set Desired Age" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Sets the desired age of the System instance.  This is only relevant when using the DesiredAge age update mode." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetDesiredAge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetDesiredAge", nullptr, nullptr, sizeof(NiagaraComponent_eventSetDesiredAge_Parms), Z_Construct_UFunction_UNiagaraComponent_SetDesiredAge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetDesiredAge_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetDesiredAge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetDesiredAge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetDesiredAge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetDesiredAge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetForceSolo_Statics
	{
		struct NiagaraComponent_eventSetForceSolo_Parms
		{
			bool bInForceSolo;
		};
		static void NewProp_bInForceSolo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInForceSolo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNiagaraComponent_SetForceSolo_Statics::NewProp_bInForceSolo_SetBit(void* Obj)
	{
		((NiagaraComponent_eventSetForceSolo_Parms*)Obj)->bInForceSolo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetForceSolo_Statics::NewProp_bInForceSolo = { "bInForceSolo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NiagaraComponent_eventSetForceSolo_Parms), &Z_Construct_UFunction_UNiagaraComponent_SetForceSolo_Statics::NewProp_bInForceSolo_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetForceSolo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetForceSolo_Statics::NewProp_bInForceSolo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetForceSolo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "DisplayName", "Set Forced Solo Mode" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetForceSolo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetForceSolo", nullptr, nullptr, sizeof(NiagaraComponent_eventSetForceSolo_Parms), Z_Construct_UFunction_UNiagaraComponent_SetForceSolo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetForceSolo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetForceSolo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetForceSolo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetForceSolo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetForceSolo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetMaxSimTime_Statics
	{
		struct NiagaraComponent_eventSetMaxSimTime_Parms
		{
			float InMaxTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InMaxTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetMaxSimTime_Statics::NewProp_InMaxTime = { "InMaxTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraComponent_eventSetMaxSimTime_Parms, InMaxTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetMaxSimTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetMaxSimTime_Statics::NewProp_InMaxTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetMaxSimTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets the maximum time that you can jump within a tick which is used when seeking from the current age, to the desired age.  This is only relevant\n\x09when using the DesiredAge age update mode. */" },
		{ "DisplayName", "Set Max Desired Age Tick Delta" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Sets the maximum time that you can jump within a tick which is used when seeking from the current age, to the desired age.  This is only relevant\n      when using the DesiredAge age update mode." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetMaxSimTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetMaxSimTime", nullptr, nullptr, sizeof(NiagaraComponent_eventSetMaxSimTime_Parms), Z_Construct_UFunction_UNiagaraComponent_SetMaxSimTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetMaxSimTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetMaxSimTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetMaxSimTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetMaxSimTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetMaxSimTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableActor_Statics
	{
		struct NiagaraComponent_eventSetNiagaraVariableActor_Parms
		{
			FString InVariableName;
			AActor* Actor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InVariableName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InVariableName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraComponent_eventSetNiagaraVariableActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableActor_Statics::NewProp_InVariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableActor_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraComponent_eventSetNiagaraVariableActor_Parms, InVariableName), METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableActor_Statics::NewProp_InVariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableActor_Statics::NewProp_InVariableName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableActor_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableActor_Statics::NewProp_InVariableName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "DisplayName", "Set Niagara Variable By String (Actor)" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetNiagaraVariableActor", nullptr, nullptr, sizeof(NiagaraComponent_eventSetNiagaraVariableActor_Parms), Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableBool_Statics
	{
		struct NiagaraComponent_eventSetNiagaraVariableBool_Parms
		{
			FString InVariableName;
			bool InValue;
		};
		static void NewProp_InValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InVariableName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InVariableName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableBool_Statics::NewProp_InValue_SetBit(void* Obj)
	{
		((NiagaraComponent_eventSetNiagaraVariableBool_Parms*)Obj)->InValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableBool_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NiagaraComponent_eventSetNiagaraVariableBool_Parms), &Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableBool_Statics::NewProp_InValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableBool_Statics::NewProp_InVariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableBool_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraComponent_eventSetNiagaraVariableBool_Parms, InVariableName), METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableBool_Statics::NewProp_InVariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableBool_Statics::NewProp_InVariableName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableBool_Statics::NewProp_InValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableBool_Statics::NewProp_InVariableName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets a Niagara float parameter by name, overriding locally if necessary.*/" },
		{ "DisplayName", "Set Niagara Variable By String (Bool)" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Sets a Niagara float parameter by name, overriding locally if necessary." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetNiagaraVariableBool", nullptr, nullptr, sizeof(NiagaraComponent_eventSetNiagaraVariableBool_Parms), Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableFloat_Statics
	{
		struct NiagaraComponent_eventSetNiagaraVariableFloat_Parms
		{
			FString InVariableName;
			float InValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InVariableName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InVariableName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableFloat_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraComponent_eventSetNiagaraVariableFloat_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableFloat_Statics::NewProp_InVariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableFloat_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraComponent_eventSetNiagaraVariableFloat_Parms, InVariableName), METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableFloat_Statics::NewProp_InVariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableFloat_Statics::NewProp_InVariableName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableFloat_Statics::NewProp_InValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableFloat_Statics::NewProp_InVariableName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets a Niagara float parameter by name, overriding locally if necessary.*/" },
		{ "DisplayName", "Set Niagara Variable By String (Float)" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Sets a Niagara float parameter by name, overriding locally if necessary." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetNiagaraVariableFloat", nullptr, nullptr, sizeof(NiagaraComponent_eventSetNiagaraVariableFloat_Parms), Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableInt_Statics
	{
		struct NiagaraComponent_eventSetNiagaraVariableInt_Parms
		{
			FString InVariableName;
			int32 InValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InVariableName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InVariableName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableInt_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraComponent_eventSetNiagaraVariableInt_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableInt_Statics::NewProp_InVariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableInt_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraComponent_eventSetNiagaraVariableInt_Parms, InVariableName), METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableInt_Statics::NewProp_InVariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableInt_Statics::NewProp_InVariableName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableInt_Statics::NewProp_InValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableInt_Statics::NewProp_InVariableName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets a Niagara int parameter by name, overriding locally if necessary.*/" },
		{ "DisplayName", "Set Niagara Variable By String (Int32)" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Sets a Niagara int parameter by name, overriding locally if necessary." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetNiagaraVariableInt", nullptr, nullptr, sizeof(NiagaraComponent_eventSetNiagaraVariableInt_Parms), Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableLinearColor_Statics
	{
		struct NiagaraComponent_eventSetNiagaraVariableLinearColor_Parms
		{
			FString InVariableName;
			FLinearColor InValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InVariableName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InVariableName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableLinearColor_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableLinearColor_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraComponent_eventSetNiagaraVariableLinearColor_Parms, InValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableLinearColor_Statics::NewProp_InValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableLinearColor_Statics::NewProp_InValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableLinearColor_Statics::NewProp_InVariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableLinearColor_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraComponent_eventSetNiagaraVariableLinearColor_Parms, InVariableName), METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableLinearColor_Statics::NewProp_InVariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableLinearColor_Statics::NewProp_InVariableName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableLinearColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableLinearColor_Statics::NewProp_InValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableLinearColor_Statics::NewProp_InVariableName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableLinearColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets a Niagara FLinearColor parameter by name, overriding locally if necessary.*/" },
		{ "DisplayName", "Set Niagara Variable By String (LinearColor)" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Sets a Niagara FLinearColor parameter by name, overriding locally if necessary." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableLinearColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetNiagaraVariableLinearColor", nullptr, nullptr, sizeof(NiagaraComponent_eventSetNiagaraVariableLinearColor_Parms), Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableLinearColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableLinearColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableLinearColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableLinearColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableLinearColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableLinearColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableObject_Statics
	{
		struct NiagaraComponent_eventSetNiagaraVariableObject_Parms
		{
			FString InVariableName;
			UObject* Object;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InVariableName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InVariableName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraComponent_eventSetNiagaraVariableObject_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableObject_Statics::NewProp_InVariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableObject_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraComponent_eventSetNiagaraVariableObject_Parms, InVariableName), METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableObject_Statics::NewProp_InVariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableObject_Statics::NewProp_InVariableName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableObject_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableObject_Statics::NewProp_InVariableName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "DisplayName", "Set Niagara Variable By String (Object)" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetNiagaraVariableObject", nullptr, nullptr, sizeof(NiagaraComponent_eventSetNiagaraVariableObject_Parms), Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableQuat_Statics
	{
		struct NiagaraComponent_eventSetNiagaraVariableQuat_Parms
		{
			FString InVariableName;
			FQuat InValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InVariableName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InVariableName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableQuat_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableQuat_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraComponent_eventSetNiagaraVariableQuat_Parms, InValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableQuat_Statics::NewProp_InValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableQuat_Statics::NewProp_InValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableQuat_Statics::NewProp_InVariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableQuat_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraComponent_eventSetNiagaraVariableQuat_Parms, InVariableName), METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableQuat_Statics::NewProp_InVariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableQuat_Statics::NewProp_InVariableName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableQuat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableQuat_Statics::NewProp_InValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableQuat_Statics::NewProp_InVariableName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableQuat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets a Niagara Vector3 parameter by name, overriding locally if necessary.*/" },
		{ "DisplayName", "Set Niagara Variable By String (Quaternion)" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Sets a Niagara Vector3 parameter by name, overriding locally if necessary." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableQuat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetNiagaraVariableQuat", nullptr, nullptr, sizeof(NiagaraComponent_eventSetNiagaraVariableQuat_Parms), Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableQuat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableQuat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableQuat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableQuat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableQuat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableQuat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec2_Statics
	{
		struct NiagaraComponent_eventSetNiagaraVariableVec2_Parms
		{
			FString InVariableName;
			FVector2D InValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InVariableName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InVariableName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec2_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraComponent_eventSetNiagaraVariableVec2_Parms, InValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec2_Statics::NewProp_InVariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec2_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraComponent_eventSetNiagaraVariableVec2_Parms, InVariableName), METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec2_Statics::NewProp_InVariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec2_Statics::NewProp_InVariableName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec2_Statics::NewProp_InValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec2_Statics::NewProp_InVariableName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec2_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets a Niagara Vector3 parameter by name, overriding locally if necessary.*/" },
		{ "DisplayName", "Set Niagara Variable By String (Vector2)" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Sets a Niagara Vector3 parameter by name, overriding locally if necessary." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetNiagaraVariableVec2", nullptr, nullptr, sizeof(NiagaraComponent_eventSetNiagaraVariableVec2_Parms), Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec2_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec3_Statics
	{
		struct NiagaraComponent_eventSetNiagaraVariableVec3_Parms
		{
			FString InVariableName;
			FVector InValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InVariableName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InVariableName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec3_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraComponent_eventSetNiagaraVariableVec3_Parms, InValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec3_Statics::NewProp_InVariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec3_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraComponent_eventSetNiagaraVariableVec3_Parms, InVariableName), METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec3_Statics::NewProp_InVariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec3_Statics::NewProp_InVariableName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec3_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec3_Statics::NewProp_InValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec3_Statics::NewProp_InVariableName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec3_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets a Niagara Vector3 parameter by name, overriding locally if necessary.*/" },
		{ "DisplayName", "Set Niagara Variable By String (Vector3)" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Sets a Niagara Vector3 parameter by name, overriding locally if necessary." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec3_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetNiagaraVariableVec3", nullptr, nullptr, sizeof(NiagaraComponent_eventSetNiagaraVariableVec3_Parms), Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec3_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec3_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec3_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec3_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec3()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec3_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec4_Statics
	{
		struct NiagaraComponent_eventSetNiagaraVariableVec4_Parms
		{
			FString InVariableName;
			FVector4 InValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InVariableName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InVariableName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec4_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec4_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraComponent_eventSetNiagaraVariableVec4_Parms, InValue), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec4_Statics::NewProp_InValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec4_Statics::NewProp_InValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec4_Statics::NewProp_InVariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec4_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraComponent_eventSetNiagaraVariableVec4_Parms, InVariableName), METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec4_Statics::NewProp_InVariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec4_Statics::NewProp_InVariableName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec4_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec4_Statics::NewProp_InValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec4_Statics::NewProp_InVariableName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec4_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets a Niagara Vector4 parameter by name, overriding locally if necessary.*/" },
		{ "DisplayName", "Set Niagara Variable By String (Vector4)" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Sets a Niagara Vector4 parameter by name, overriding locally if necessary." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetNiagaraVariableVec4", nullptr, nullptr, sizeof(NiagaraComponent_eventSetNiagaraVariableVec4_Parms), Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec4_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec4_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec4_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec4()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec4_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetPaused_Statics
	{
		struct NiagaraComponent_eventSetPaused_Parms
		{
			bool bInPaused;
		};
		static void NewProp_bInPaused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInPaused;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNiagaraComponent_SetPaused_Statics::NewProp_bInPaused_SetBit(void* Obj)
	{
		((NiagaraComponent_eventSetPaused_Parms*)Obj)->bInPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetPaused_Statics::NewProp_bInPaused = { "bInPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NiagaraComponent_eventSetPaused_Parms), &Z_Construct_UFunction_UNiagaraComponent_SetPaused_Statics::NewProp_bInPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetPaused_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetPaused_Statics::NewProp_bInPaused,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetPaused_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetPaused", nullptr, nullptr, sizeof(NiagaraComponent_eventSetPaused_Parms), Z_Construct_UFunction_UNiagaraComponent_SetPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetPaused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetPaused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetPaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetPaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetPaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetPreviewLODDistance_Statics
	{
		struct NiagaraComponent_eventSetPreviewLODDistance_Parms
		{
			bool bEnablePreviewLODDistance;
			float PreviewLODDistance;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PreviewLODDistance;
		static void NewProp_bEnablePreviewLODDistance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnablePreviewLODDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetPreviewLODDistance_Statics::NewProp_PreviewLODDistance = { "PreviewLODDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraComponent_eventSetPreviewLODDistance_Parms, PreviewLODDistance), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNiagaraComponent_SetPreviewLODDistance_Statics::NewProp_bEnablePreviewLODDistance_SetBit(void* Obj)
	{
		((NiagaraComponent_eventSetPreviewLODDistance_Parms*)Obj)->bEnablePreviewLODDistance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetPreviewLODDistance_Statics::NewProp_bEnablePreviewLODDistance = { "bEnablePreviewLODDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NiagaraComponent_eventSetPreviewLODDistance_Parms), &Z_Construct_UFunction_UNiagaraComponent_SetPreviewLODDistance_Statics::NewProp_bEnablePreviewLODDistance_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetPreviewLODDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetPreviewLODDistance_Statics::NewProp_PreviewLODDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetPreviewLODDistance_Statics::NewProp_bEnablePreviewLODDistance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetPreviewLODDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Preview" },
		{ "Comment", "//~ End UObject Interface\n" },
		{ "Keywords", "preview LOD Distance scalability" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetPreviewLODDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetPreviewLODDistance", nullptr, nullptr, sizeof(NiagaraComponent_eventSetPreviewLODDistance_Parms), Z_Construct_UFunction_UNiagaraComponent_SetPreviewLODDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetPreviewLODDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetPreviewLODDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetPreviewLODDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetPreviewLODDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetPreviewLODDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetRenderingEnabled_Statics
	{
		struct NiagaraComponent_eventSetRenderingEnabled_Parms
		{
			bool bInRenderingEnabled;
		};
		static void NewProp_bInRenderingEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInRenderingEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNiagaraComponent_SetRenderingEnabled_Statics::NewProp_bInRenderingEnabled_SetBit(void* Obj)
	{
		((NiagaraComponent_eventSetRenderingEnabled_Parms*)Obj)->bInRenderingEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetRenderingEnabled_Statics::NewProp_bInRenderingEnabled = { "bInRenderingEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NiagaraComponent_eventSetRenderingEnabled_Parms), &Z_Construct_UFunction_UNiagaraComponent_SetRenderingEnabled_Statics::NewProp_bInRenderingEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetRenderingEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetRenderingEnabled_Statics::NewProp_bInRenderingEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetRenderingEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets whether or not rendering is enabled for this component. */" },
		{ "DisplayName", "Set Rendering Enabled" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Sets whether or not rendering is enabled for this component." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetRenderingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetRenderingEnabled", nullptr, nullptr, sizeof(NiagaraComponent_eventSetRenderingEnabled_Parms), Z_Construct_UFunction_UNiagaraComponent_SetRenderingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetRenderingEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetRenderingEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetRenderingEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetRenderingEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetRenderingEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetSeekDelta_Statics
	{
		struct NiagaraComponent_eventSetSeekDelta_Parms
		{
			float InSeekDelta;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InSeekDelta;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetSeekDelta_Statics::NewProp_InSeekDelta = { "InSeekDelta", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraComponent_eventSetSeekDelta_Parms, InSeekDelta), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetSeekDelta_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetSeekDelta_Statics::NewProp_InSeekDelta,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetSeekDelta_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets the delta value which is used when seeking from the current age, to the desired age.  This is only relevant\n\x09when using the DesiredAge age update mode. */" },
		{ "DisplayName", "Set Desired Age Seek Delta" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Sets the delta value which is used when seeking from the current age, to the desired age.  This is only relevant\n      when using the DesiredAge age update mode." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetSeekDelta_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetSeekDelta", nullptr, nullptr, sizeof(NiagaraComponent_eventSetSeekDelta_Parms), Z_Construct_UFunction_UNiagaraComponent_SetSeekDelta_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetSeekDelta_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetSeekDelta_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetSeekDelta_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetSeekDelta()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetSeekDelta_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetVariableActor_Statics
	{
		struct NiagaraComponent_eventSetVariableActor_Parms
		{
			FName InVariableName;
			AActor* Actor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InVariableName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetVariableActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraComponent_eventSetVariableActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraComponent_SetVariableActor_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraComponent_eventSetVariableActor_Parms, InVariableName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetVariableActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetVariableActor_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetVariableActor_Statics::NewProp_InVariableName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetVariableActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "DisplayName", "Set Niagara Variable (Actor)" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetVariableActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetVariableActor", nullptr, nullptr, sizeof(NiagaraComponent_eventSetVariableActor_Parms), Z_Construct_UFunction_UNiagaraComponent_SetVariableActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetVariableActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetVariableActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetVariableActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetVariableActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetVariableActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetVariableBool_Statics
	{
		struct NiagaraComponent_eventSetVariableBool_Parms
		{
			FName InVariableName;
			bool InValue;
		};
		static void NewProp_InValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InVariableName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNiagaraComponent_SetVariableBool_Statics::NewProp_InValue_SetBit(void* Obj)
	{
		((NiagaraComponent_eventSetVariableBool_Parms*)Obj)->InValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetVariableBool_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NiagaraComponent_eventSetVariableBool_Parms), &Z_Construct_UFunction_UNiagaraComponent_SetVariableBool_Statics::NewProp_InValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraComponent_SetVariableBool_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraComponent_eventSetVariableBool_Parms, InVariableName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetVariableBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetVariableBool_Statics::NewProp_InValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetVariableBool_Statics::NewProp_InVariableName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetVariableBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets a Niagara float parameter by name, overriding locally if necessary.*/" },
		{ "DisplayName", "Set Niagara Variable (Bool)" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Sets a Niagara float parameter by name, overriding locally if necessary." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetVariableBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetVariableBool", nullptr, nullptr, sizeof(NiagaraComponent_eventSetVariableBool_Parms), Z_Construct_UFunction_UNiagaraComponent_SetVariableBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetVariableBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetVariableBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetVariableBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetVariableBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetVariableBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetVariableFloat_Statics
	{
		struct NiagaraComponent_eventSetVariableFloat_Parms
		{
			FName InVariableName;
			float InValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InVariableName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetVariableFloat_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraComponent_eventSetVariableFloat_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraComponent_SetVariableFloat_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraComponent_eventSetVariableFloat_Parms, InVariableName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetVariableFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetVariableFloat_Statics::NewProp_InValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetVariableFloat_Statics::NewProp_InVariableName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetVariableFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets a Niagara float parameter by name, overriding locally if necessary.*/" },
		{ "DisplayName", "Set Niagara Variable (Float)" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Sets a Niagara float parameter by name, overriding locally if necessary." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetVariableFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetVariableFloat", nullptr, nullptr, sizeof(NiagaraComponent_eventSetVariableFloat_Parms), Z_Construct_UFunction_UNiagaraComponent_SetVariableFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetVariableFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetVariableFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetVariableFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetVariableFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetVariableFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetVariableInt_Statics
	{
		struct NiagaraComponent_eventSetVariableInt_Parms
		{
			FName InVariableName;
			int32 InValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InVariableName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetVariableInt_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraComponent_eventSetVariableInt_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraComponent_SetVariableInt_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraComponent_eventSetVariableInt_Parms, InVariableName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetVariableInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetVariableInt_Statics::NewProp_InValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetVariableInt_Statics::NewProp_InVariableName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetVariableInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets a Niagara int parameter by name, overriding locally if necessary.*/" },
		{ "DisplayName", "Set Niagara Variable (Int32)" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Sets a Niagara int parameter by name, overriding locally if necessary." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetVariableInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetVariableInt", nullptr, nullptr, sizeof(NiagaraComponent_eventSetVariableInt_Parms), Z_Construct_UFunction_UNiagaraComponent_SetVariableInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetVariableInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetVariableInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetVariableInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetVariableInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetVariableInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetVariableLinearColor_Statics
	{
		struct NiagaraComponent_eventSetVariableLinearColor_Parms
		{
			FName InVariableName;
			FLinearColor InValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InVariableName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetVariableLinearColor_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetVariableLinearColor_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraComponent_eventSetVariableLinearColor_Parms, InValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetVariableLinearColor_Statics::NewProp_InValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetVariableLinearColor_Statics::NewProp_InValue_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraComponent_SetVariableLinearColor_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraComponent_eventSetVariableLinearColor_Parms, InVariableName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetVariableLinearColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetVariableLinearColor_Statics::NewProp_InValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetVariableLinearColor_Statics::NewProp_InVariableName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetVariableLinearColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets a Niagara FLinearColor parameter by name, overriding locally if necessary.*/" },
		{ "DisplayName", "Set Niagara Variable (LinearColor)" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Sets a Niagara FLinearColor parameter by name, overriding locally if necessary." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetVariableLinearColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetVariableLinearColor", nullptr, nullptr, sizeof(NiagaraComponent_eventSetVariableLinearColor_Parms), Z_Construct_UFunction_UNiagaraComponent_SetVariableLinearColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetVariableLinearColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetVariableLinearColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetVariableLinearColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetVariableLinearColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetVariableLinearColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetVariableMaterial_Statics
	{
		struct NiagaraComponent_eventSetVariableMaterial_Parms
		{
			FName InVariableName;
			UMaterialInterface* Object;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InVariableName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetVariableMaterial_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraComponent_eventSetVariableMaterial_Parms, Object), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraComponent_SetVariableMaterial_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraComponent_eventSetVariableMaterial_Parms, InVariableName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetVariableMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetVariableMaterial_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetVariableMaterial_Statics::NewProp_InVariableName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetVariableMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "DisplayName", "Set Niagara Variable (Material)" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetVariableMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetVariableMaterial", nullptr, nullptr, sizeof(NiagaraComponent_eventSetVariableMaterial_Parms), Z_Construct_UFunction_UNiagaraComponent_SetVariableMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetVariableMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetVariableMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetVariableMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetVariableMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetVariableMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetVariableObject_Statics
	{
		struct NiagaraComponent_eventSetVariableObject_Parms
		{
			FName InVariableName;
			UObject* Object;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InVariableName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetVariableObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraComponent_eventSetVariableObject_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraComponent_SetVariableObject_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraComponent_eventSetVariableObject_Parms, InVariableName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetVariableObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetVariableObject_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetVariableObject_Statics::NewProp_InVariableName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetVariableObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "DisplayName", "Set Niagara Variable (Object)" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetVariableObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetVariableObject", nullptr, nullptr, sizeof(NiagaraComponent_eventSetVariableObject_Parms), Z_Construct_UFunction_UNiagaraComponent_SetVariableObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetVariableObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetVariableObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetVariableObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetVariableObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetVariableObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetVariableQuat_Statics
	{
		struct NiagaraComponent_eventSetVariableQuat_Parms
		{
			FName InVariableName;
			FQuat InValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InVariableName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetVariableQuat_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetVariableQuat_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraComponent_eventSetVariableQuat_Parms, InValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetVariableQuat_Statics::NewProp_InValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetVariableQuat_Statics::NewProp_InValue_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraComponent_SetVariableQuat_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraComponent_eventSetVariableQuat_Parms, InVariableName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetVariableQuat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetVariableQuat_Statics::NewProp_InValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetVariableQuat_Statics::NewProp_InVariableName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetVariableQuat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets a Niagara Vector3 parameter by name, overriding locally if necessary.*/" },
		{ "DisplayName", "Set Niagara Variable (Quaternion)" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Sets a Niagara Vector3 parameter by name, overriding locally if necessary." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetVariableQuat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetVariableQuat", nullptr, nullptr, sizeof(NiagaraComponent_eventSetVariableQuat_Parms), Z_Construct_UFunction_UNiagaraComponent_SetVariableQuat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetVariableQuat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetVariableQuat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetVariableQuat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetVariableQuat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetVariableQuat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetVariableVec2_Statics
	{
		struct NiagaraComponent_eventSetVariableVec2_Parms
		{
			FName InVariableName;
			FVector2D InValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InVariableName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetVariableVec2_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraComponent_eventSetVariableVec2_Parms, InValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraComponent_SetVariableVec2_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraComponent_eventSetVariableVec2_Parms, InVariableName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetVariableVec2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetVariableVec2_Statics::NewProp_InValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetVariableVec2_Statics::NewProp_InVariableName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetVariableVec2_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets a Niagara Vector3 parameter by name, overriding locally if necessary.*/" },
		{ "DisplayName", "Set Niagara Variable (Vector2)" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Sets a Niagara Vector3 parameter by name, overriding locally if necessary." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetVariableVec2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetVariableVec2", nullptr, nullptr, sizeof(NiagaraComponent_eventSetVariableVec2_Parms), Z_Construct_UFunction_UNiagaraComponent_SetVariableVec2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetVariableVec2_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetVariableVec2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetVariableVec2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetVariableVec2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetVariableVec2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetVariableVec3_Statics
	{
		struct NiagaraComponent_eventSetVariableVec3_Parms
		{
			FName InVariableName;
			FVector InValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InVariableName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetVariableVec3_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraComponent_eventSetVariableVec3_Parms, InValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraComponent_SetVariableVec3_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraComponent_eventSetVariableVec3_Parms, InVariableName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetVariableVec3_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetVariableVec3_Statics::NewProp_InValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetVariableVec3_Statics::NewProp_InVariableName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetVariableVec3_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets a Niagara Vector3 parameter by name, overriding locally if necessary.*/" },
		{ "DisplayName", "Set Niagara Variable (Vector3)" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Sets a Niagara Vector3 parameter by name, overriding locally if necessary." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetVariableVec3_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetVariableVec3", nullptr, nullptr, sizeof(NiagaraComponent_eventSetVariableVec3_Parms), Z_Construct_UFunction_UNiagaraComponent_SetVariableVec3_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetVariableVec3_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetVariableVec3_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetVariableVec3_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetVariableVec3()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetVariableVec3_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetVariableVec4_Statics
	{
		struct NiagaraComponent_eventSetVariableVec4_Parms
		{
			FName InVariableName;
			FVector4 InValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InVariableName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetVariableVec4_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetVariableVec4_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraComponent_eventSetVariableVec4_Parms, InValue), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetVariableVec4_Statics::NewProp_InValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetVariableVec4_Statics::NewProp_InValue_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraComponent_SetVariableVec4_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraComponent_eventSetVariableVec4_Parms, InVariableName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetVariableVec4_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetVariableVec4_Statics::NewProp_InValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetVariableVec4_Statics::NewProp_InVariableName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetVariableVec4_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets a Niagara Vector4 parameter by name, overriding locally if necessary.*/" },
		{ "DisplayName", "Set Niagara Variable (Vector4)" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Sets a Niagara Vector4 parameter by name, overriding locally if necessary." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetVariableVec4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetVariableVec4", nullptr, nullptr, sizeof(NiagaraComponent_eventSetVariableVec4_Parms), Z_Construct_UFunction_UNiagaraComponent_SetVariableVec4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetVariableVec4_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetVariableVec4_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetVariableVec4_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetVariableVec4()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetVariableVec4_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister()
	{
		return UNiagaraComponent::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWaitForCompilationOnActivate_MetaData[];
#endif
		static void NewProp_bWaitForCompilationOnActivate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWaitForCompilationOnActivate;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoAttachScaleRule_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AutoAttachScaleRule;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AutoAttachScaleRule_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoAttachRotationRule_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AutoAttachRotationRule;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AutoAttachRotationRule_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoAttachLocationRule_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AutoAttachLocationRule;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AutoAttachLocationRule_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoAttachSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AutoAttachSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoAttachParent_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_AutoAttachParent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSystemFinished_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSystemFinished;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTimeBeforeForceUpdateTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxTimeBeforeForceUpdateTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoAttachWeldSimulatedBodies_MetaData[];
#endif
		static void NewProp_bAutoAttachWeldSimulatedBodies_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoAttachWeldSimulatedBodies;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoManageAttachment_MetaData[];
#endif
		static void NewProp_bAutoManageAttachment_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoManageAttachment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRenderingEnabled_MetaData[];
#endif
		static void NewProp_bRenderingEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRenderingEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoDestroy_MetaData[];
#endif
		static void NewProp_bAutoDestroy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceSolo_MetaData[];
#endif
		static void NewProp_bForceSolo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceSolo;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceParameterOverrides_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_InstanceParameterOverrides;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InstanceParameterOverrides_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InstanceParameterOverrides_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TemplateParameterOverrides_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_TemplateParameterOverrides;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TemplateParameterOverrides_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TemplateParameterOverrides_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorOverridesValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_EditorOverridesValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EditorOverridesValue_Key_KeyProp;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EditorOverridesValue_ValueProp;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OverrideParameters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TickBehavior_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TickBehavior;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TickBehavior_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Asset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFXSystemComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNiagaraComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNiagaraComponent_AdvanceSimulation, "AdvanceSimulation" }, // 758286196
		{ &Z_Construct_UFunction_UNiagaraComponent_AdvanceSimulationByTime, "AdvanceSimulationByTime" }, // 3845705174
		{ &Z_Construct_UFunction_UNiagaraComponent_GetAgeUpdateMode, "GetAgeUpdateMode" }, // 2054670515
		{ &Z_Construct_UFunction_UNiagaraComponent_GetAsset, "GetAsset" }, // 3837563289
		{ &Z_Construct_UFunction_UNiagaraComponent_GetDataInterface, "GetDataInterface" }, // 602231901
		{ &Z_Construct_UFunction_UNiagaraComponent_GetDesiredAge, "GetDesiredAge" }, // 1226633427
		{ &Z_Construct_UFunction_UNiagaraComponent_GetForceSolo, "GetForceSolo" }, // 175793019
		{ &Z_Construct_UFunction_UNiagaraComponent_GetMaxSimTime, "GetMaxSimTime" }, // 3367144613
		{ &Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticlePositions_DebugOnly, "GetNiagaraParticlePositions_DebugOnly" }, // 3790096867
		{ &Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValues_DebugOnly, "GetNiagaraParticleValues_DebugOnly" }, // 1881594653
		{ &Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly, "GetNiagaraParticleValueVec3_DebugOnly" }, // 2863126474
		{ &Z_Construct_UFunction_UNiagaraComponent_GetPreviewLODDistance, "GetPreviewLODDistance" }, // 3040951829
		{ &Z_Construct_UFunction_UNiagaraComponent_GetPreviewLODDistanceEnabled, "GetPreviewLODDistanceEnabled" }, // 1302774860
		{ &Z_Construct_UFunction_UNiagaraComponent_GetSeekDelta, "GetSeekDelta" }, // 3786135833
		{ &Z_Construct_UFunction_UNiagaraComponent_IsPaused, "IsPaused" }, // 1233692768
		{ &Z_Construct_UFunction_UNiagaraComponent_ReinitializeSystem, "ReinitializeSystem" }, // 3078085282
		{ &Z_Construct_UFunction_UNiagaraComponent_ResetSystem, "ResetSystem" }, // 1907125925
		{ &Z_Construct_UFunction_UNiagaraComponent_SeekToDesiredAge, "SeekToDesiredAge" }, // 1393932121
		{ &Z_Construct_UFunction_UNiagaraComponent_SetAgeUpdateMode, "SetAgeUpdateMode" }, // 1056831302
		{ &Z_Construct_UFunction_UNiagaraComponent_SetAllowScalability, "SetAllowScalability" }, // 2019105369
		{ &Z_Construct_UFunction_UNiagaraComponent_SetAsset, "SetAsset" }, // 27219562
		{ &Z_Construct_UFunction_UNiagaraComponent_SetAutoDestroy, "SetAutoDestroy" }, // 4198344053
		{ &Z_Construct_UFunction_UNiagaraComponent_SetCanRenderWhileSeeking, "SetCanRenderWhileSeeking" }, // 3405437940
		{ &Z_Construct_UFunction_UNiagaraComponent_SetDesiredAge, "SetDesiredAge" }, // 798074590
		{ &Z_Construct_UFunction_UNiagaraComponent_SetForceSolo, "SetForceSolo" }, // 2665683567
		{ &Z_Construct_UFunction_UNiagaraComponent_SetMaxSimTime, "SetMaxSimTime" }, // 35084382
		{ &Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableActor, "SetNiagaraVariableActor" }, // 3115639815
		{ &Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableBool, "SetNiagaraVariableBool" }, // 1304658081
		{ &Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableFloat, "SetNiagaraVariableFloat" }, // 789854712
		{ &Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableInt, "SetNiagaraVariableInt" }, // 228710024
		{ &Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableLinearColor, "SetNiagaraVariableLinearColor" }, // 890673167
		{ &Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableObject, "SetNiagaraVariableObject" }, // 3944050274
		{ &Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableQuat, "SetNiagaraVariableQuat" }, // 2291102072
		{ &Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec2, "SetNiagaraVariableVec2" }, // 2874149336
		{ &Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec3, "SetNiagaraVariableVec3" }, // 2475736455
		{ &Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec4, "SetNiagaraVariableVec4" }, // 1904144305
		{ &Z_Construct_UFunction_UNiagaraComponent_SetPaused, "SetPaused" }, // 1563589709
		{ &Z_Construct_UFunction_UNiagaraComponent_SetPreviewLODDistance, "SetPreviewLODDistance" }, // 3706959638
		{ &Z_Construct_UFunction_UNiagaraComponent_SetRenderingEnabled, "SetRenderingEnabled" }, // 3417363152
		{ &Z_Construct_UFunction_UNiagaraComponent_SetSeekDelta, "SetSeekDelta" }, // 2090934945
		{ &Z_Construct_UFunction_UNiagaraComponent_SetVariableActor, "SetVariableActor" }, // 293968319
		{ &Z_Construct_UFunction_UNiagaraComponent_SetVariableBool, "SetVariableBool" }, // 283492346
		{ &Z_Construct_UFunction_UNiagaraComponent_SetVariableFloat, "SetVariableFloat" }, // 4275944858
		{ &Z_Construct_UFunction_UNiagaraComponent_SetVariableInt, "SetVariableInt" }, // 3156096196
		{ &Z_Construct_UFunction_UNiagaraComponent_SetVariableLinearColor, "SetVariableLinearColor" }, // 15501467
		{ &Z_Construct_UFunction_UNiagaraComponent_SetVariableMaterial, "SetVariableMaterial" }, // 3112139589
		{ &Z_Construct_UFunction_UNiagaraComponent_SetVariableObject, "SetVariableObject" }, // 3896117022
		{ &Z_Construct_UFunction_UNiagaraComponent_SetVariableQuat, "SetVariableQuat" }, // 761870511
		{ &Z_Construct_UFunction_UNiagaraComponent_SetVariableVec2, "SetVariableVec2" }, // 3270366661
		{ &Z_Construct_UFunction_UNiagaraComponent_SetVariableVec3, "SetVariableVec3" }, // 3352390437
		{ &Z_Construct_UFunction_UNiagaraComponent_SetVariableVec4, "SetVariableVec4" }, // 2240101825
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering Common" },
		{ "Comment", "/**\n* UNiagaraComponent is the primitive component for a Niagara System.\n* @see ANiagaraActor\n* @see UNiagaraSystem\n*/" },
		{ "DisplayName", "Niagara Particle System" },
		{ "HideCategories", "Object Physics Collision Mobility VirtualTexture" },
		{ "IncludePath", "NiagaraComponent.h" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "UNiagaraComponent is the primitive component for a Niagara System.\n@see ANiagaraActor\n@see UNiagaraSystem" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bWaitForCompilationOnActivate_MetaData[] = {
		{ "Category", "Compilation" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bWaitForCompilationOnActivate_SetBit(void* Obj)
	{
		((UNiagaraComponent*)Obj)->bWaitForCompilationOnActivate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bWaitForCompilationOnActivate = { "bWaitForCompilationOnActivate", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNiagaraComponent), &Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bWaitForCompilationOnActivate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bWaitForCompilationOnActivate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bWaitForCompilationOnActivate_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_AutoAttachScaleRule_MetaData[] = {
		{ "Category", "Attachment" },
		{ "Comment", "/**\n\x09 * Options for how we handle our scale when we attach to the AutoAttachParent, if bAutoManageAttachment is true.\n\x09 * @see bAutoManageAttachment, EAttachmentRule\n\x09 */" },
		{ "EditCondition", "bAutoManageAttachment" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Options for how we handle our scale when we attach to the AutoAttachParent, if bAutoManageAttachment is true.\n@see bAutoManageAttachment, EAttachmentRule" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_AutoAttachScaleRule = { "AutoAttachScaleRule", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraComponent, AutoAttachScaleRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_AutoAttachScaleRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_AutoAttachScaleRule_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_AutoAttachScaleRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_AutoAttachRotationRule_MetaData[] = {
		{ "Category", "Attachment" },
		{ "Comment", "/**\n\x09 * Options for how we handle our rotation when we attach to the AutoAttachParent, if bAutoManageAttachment is true.\n\x09 * @see bAutoManageAttachment, EAttachmentRule\n\x09 */" },
		{ "EditCondition", "bAutoManageAttachment" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Options for how we handle our rotation when we attach to the AutoAttachParent, if bAutoManageAttachment is true.\n@see bAutoManageAttachment, EAttachmentRule" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_AutoAttachRotationRule = { "AutoAttachRotationRule", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraComponent, AutoAttachRotationRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_AutoAttachRotationRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_AutoAttachRotationRule_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_AutoAttachRotationRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_AutoAttachLocationRule_MetaData[] = {
		{ "Category", "Attachment" },
		{ "Comment", "/**\n\x09 * Options for how we handle our location when we attach to the AutoAttachParent, if bAutoManageAttachment is true.\n\x09 * @see bAutoManageAttachment, EAttachmentRule\n\x09 */" },
		{ "EditCondition", "bAutoManageAttachment" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Options for how we handle our location when we attach to the AutoAttachParent, if bAutoManageAttachment is true.\n@see bAutoManageAttachment, EAttachmentRule" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_AutoAttachLocationRule = { "AutoAttachLocationRule", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraComponent, AutoAttachLocationRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_AutoAttachLocationRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_AutoAttachLocationRule_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_AutoAttachLocationRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_AutoAttachSocketName_MetaData[] = {
		{ "Category", "Attachment" },
		{ "Comment", "/**\n\x09 * Socket we automatically attach to on the AutoAttachParent, if bAutoManageAttachment is true.\n\x09 * @see bAutoManageAttachment\n\x09 */" },
		{ "EditCondition", "bAutoManageAttachment" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Socket we automatically attach to on the AutoAttachParent, if bAutoManageAttachment is true.\n@see bAutoManageAttachment" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_AutoAttachSocketName = { "AutoAttachSocketName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraComponent, AutoAttachSocketName), METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_AutoAttachSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_AutoAttachSocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_AutoAttachParent_MetaData[] = {
		{ "Category", "Attachment" },
		{ "Comment", "/**\n\x09 * Component we automatically attach to when activated, if bAutoManageAttachment is true.\n\x09 * If null during registration, we assign the existing AttachParent and defer attachment until we activate.\n\x09 * @see bAutoManageAttachment\n\x09 */" },
		{ "EditCondition", "bAutoManageAttachment" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Component we automatically attach to when activated, if bAutoManageAttachment is true.\nIf null during registration, we assign the existing AttachParent and defer attachment until we activate.\n@see bAutoManageAttachment" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_AutoAttachParent = { "AutoAttachParent", nullptr, (EPropertyFlags)0x00140000000a080d, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraComponent, AutoAttachParent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_AutoAttachParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_AutoAttachParent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_OnSystemFinished_MetaData[] = {
		{ "Comment", "// Called when the particle system is done\n" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Called when the particle system is done" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_OnSystemFinished = { "OnSystemFinished", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraComponent, OnSystemFinished), Z_Construct_UDelegateFunction_Niagara_OnNiagaraSystemFinished__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_OnSystemFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_OnSystemFinished_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_MaxTimeBeforeForceUpdateTransform_MetaData[] = {
		{ "Comment", "/**\n\x09 * Time between forced UpdateTransforms for systems that use dynamically calculated bounds,\n\x09 * Which is effectively how often the bounds are shrunk.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Time between forced UpdateTransforms for systems that use dynamically calculated bounds,\nWhich is effectively how often the bounds are shrunk." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_MaxTimeBeforeForceUpdateTransform = { "MaxTimeBeforeForceUpdateTransform", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraComponent, MaxTimeBeforeForceUpdateTransform), METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_MaxTimeBeforeForceUpdateTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_MaxTimeBeforeForceUpdateTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bAutoAttachWeldSimulatedBodies_MetaData[] = {
		{ "Category", "Attachment" },
		{ "Comment", "/**\n\x09 * Option for how we handle bWeldSimulatedBodies when we attach to the AutoAttachParent, if bAutoManageAttachment is true.\n\x09 * @see bAutoManageAttachment\n\x09 */" },
		{ "EditCondition", "bAutoManageAttachment" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Option for how we handle bWeldSimulatedBodies when we attach to the AutoAttachParent, if bAutoManageAttachment is true.\n@see bAutoManageAttachment" },
	};
#endif
	void Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bAutoAttachWeldSimulatedBodies_SetBit(void* Obj)
	{
		((UNiagaraComponent*)Obj)->bAutoAttachWeldSimulatedBodies = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bAutoAttachWeldSimulatedBodies = { "bAutoAttachWeldSimulatedBodies", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNiagaraComponent), &Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bAutoAttachWeldSimulatedBodies_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bAutoAttachWeldSimulatedBodies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bAutoAttachWeldSimulatedBodies_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bAutoManageAttachment_MetaData[] = {
		{ "Category", "Attachment" },
		{ "Comment", "/**\n\x09* True if we should automatically attach to AutoAttachParent when activated, and detach from our parent when completed.\n\x09* This overrides any current attachment that may be present at the time of activation (deferring initial attachment until activation, if AutoAttachParent is null).\n\x09* When enabled, detachment occurs regardless of whether AutoAttachParent is assigned, and the relative transform from the time of activation is restored.\n\x09* This also disables attachment on dedicated servers, where we don't actually activate even if bAutoActivate is true.\n\x09* @see AutoAttachParent, AutoAttachSocketName, AutoAttachLocationType\n\x09*/" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "True if we should automatically attach to AutoAttachParent when activated, and detach from our parent when completed.\nThis overrides any current attachment that may be present at the time of activation (deferring initial attachment until activation, if AutoAttachParent is null).\nWhen enabled, detachment occurs regardless of whether AutoAttachParent is assigned, and the relative transform from the time of activation is restored.\nThis also disables attachment on dedicated servers, where we don't actually activate even if bAutoActivate is true.\n@see AutoAttachParent, AutoAttachSocketName, AutoAttachLocationType" },
	};
#endif
	void Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bAutoManageAttachment_SetBit(void* Obj)
	{
		((UNiagaraComponent*)Obj)->bAutoManageAttachment = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bAutoManageAttachment = { "bAutoManageAttachment", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNiagaraComponent), &Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bAutoManageAttachment_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bAutoManageAttachment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bAutoManageAttachment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bRenderingEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bRenderingEnabled_SetBit(void* Obj)
	{
		((UNiagaraComponent*)Obj)->bRenderingEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bRenderingEnabled = { "bRenderingEnabled", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNiagaraComponent), &Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bRenderingEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bRenderingEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bRenderingEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bAutoDestroy_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bAutoDestroy_SetBit(void* Obj)
	{
		((UNiagaraComponent*)Obj)->bAutoDestroy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bAutoDestroy = { "bAutoDestroy", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNiagaraComponent), &Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bAutoDestroy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bAutoDestroy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bForceSolo_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "/**\n\x09When true, this component's system will be force to update via a slower \"solo\" path rather than the more optimal batched path with other instances of the same system.\n\x09*/" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "When true, this component's system will be force to update via a slower \"solo\" path rather than the more optimal batched path with other instances of the same system." },
	};
#endif
	void Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bForceSolo_SetBit(void* Obj)
	{
		((UNiagaraComponent*)Obj)->bForceSolo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bForceSolo = { "bForceSolo", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNiagaraComponent), &Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bForceSolo_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bForceSolo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bForceSolo_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_InstanceParameterOverrides_MetaData[] = {
		{ "Category", "Niagara" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_InstanceParameterOverrides = { "InstanceParameterOverrides", nullptr, (EPropertyFlags)0x0040000800000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraComponent, InstanceParameterOverrides), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_InstanceParameterOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_InstanceParameterOverrides_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_InstanceParameterOverrides_Key_KeyProp = { "InstanceParameterOverrides_Key", nullptr, (EPropertyFlags)0x0000000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNiagaraVariableBase, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_InstanceParameterOverrides_ValueProp = { "InstanceParameterOverrides", nullptr, (EPropertyFlags)0x0000000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FNiagaraVariant, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_TemplateParameterOverrides_MetaData[] = {
		{ "Category", "Niagara" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_TemplateParameterOverrides = { "TemplateParameterOverrides", nullptr, (EPropertyFlags)0x0040000800000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraComponent, TemplateParameterOverrides), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_TemplateParameterOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_TemplateParameterOverrides_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_TemplateParameterOverrides_Key_KeyProp = { "TemplateParameterOverrides_Key", nullptr, (EPropertyFlags)0x0000000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNiagaraVariableBase, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_TemplateParameterOverrides_ValueProp = { "TemplateParameterOverrides", nullptr, (EPropertyFlags)0x0000000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FNiagaraVariant, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_EditorOverridesValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_EditorOverridesValue = { "EditorOverridesValue", nullptr, (EPropertyFlags)0x0040000820000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraComponent, EditorOverridesValue_DEPRECATED), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_EditorOverridesValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_EditorOverridesValue_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_EditorOverridesValue_Key_KeyProp = { "EditorOverridesValue_Key", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_EditorOverridesValue_ValueProp = { "EditorOverridesValue", nullptr, (EPropertyFlags)0x0000000820000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_OverrideParameters_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_OverrideParameters = { "OverrideParameters", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraComponent, OverrideParameters), Z_Construct_UScriptStruct_FNiagaraUserRedirectionParameterStore, METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_OverrideParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_OverrideParameters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_TickBehavior_MetaData[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Allows you to control how Niagara selects the tick group, changing this while an instance is active will result in not change as it is cached. */" },
		{ "DisplayName", "Niagara Tick Behavior" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Allows you to control how Niagara selects the tick group, changing this while an instance is active will result in not change as it is cached." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_TickBehavior = { "TickBehavior", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraComponent, TickBehavior), Z_Construct_UEnum_Niagara_ENiagaraTickBehavior, METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_TickBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_TickBehavior_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_TickBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_Asset_MetaData[] = {
		{ "Category", "Niagara" },
		{ "DisplayName", "Niagara System Asset" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraComponent, Asset), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_Asset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_Asset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraComponent_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bWaitForCompilationOnActivate,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_AutoAttachScaleRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_AutoAttachScaleRule_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_AutoAttachRotationRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_AutoAttachRotationRule_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_AutoAttachLocationRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_AutoAttachLocationRule_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_AutoAttachSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_AutoAttachParent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_OnSystemFinished,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_MaxTimeBeforeForceUpdateTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bAutoAttachWeldSimulatedBodies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bAutoManageAttachment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bRenderingEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bAutoDestroy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bForceSolo,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_InstanceParameterOverrides,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_InstanceParameterOverrides_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_InstanceParameterOverrides_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_TemplateParameterOverrides,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_TemplateParameterOverrides_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_TemplateParameterOverrides_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_EditorOverridesValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_EditorOverridesValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_EditorOverridesValue_ValueProp,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_OverrideParameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_TickBehavior,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_TickBehavior_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_Asset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraComponent_Statics::ClassParams = {
		&UNiagaraComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNiagaraComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraComponent, 139968213);
	template<> NIAGARA_API UClass* StaticClass<UNiagaraComponent>()
	{
		return UNiagaraComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraComponent(Z_Construct_UClass_UNiagaraComponent, &UNiagaraComponent::StaticClass, TEXT("/Script/Niagara"), TEXT("UNiagaraComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
