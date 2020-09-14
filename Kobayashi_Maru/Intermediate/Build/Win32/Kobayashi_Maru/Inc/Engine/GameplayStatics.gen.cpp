// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Kismet/GameplayStatics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayStatics() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameplayStatics_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameplayStatics();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UReverbEffect_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESpawnActorCollisionHandlingMethod();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPredictProjectilePathResult();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPredictProjectilePathParams();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDrawDebugTrace();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESuggestProjVelocityTraceOption();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundClass_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundMix_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundConcurrency_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULevelStreaming_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPhysicalSurface();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMouseCaptureMode();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMatrix();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMinimalViewInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueContext();
	ENGINE_API UClass* Z_Construct_UClass_UDialogueWave_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShake_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDecalComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAttachLocation();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPSCPoolMethod();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UForceFeedbackComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UForceFeedbackAttenuation_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UForceFeedbackEffect_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UGameplayStatics::execHasLaunchOption)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_OptionToCheck);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGameplayStatics::HasLaunchOption(Z_Param_OptionToCheck);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execGetIntOption)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Options);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_DefaultValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UGameplayStatics::GetIntOption(Z_Param_Options,Z_Param_Key,Z_Param_DefaultValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execHasOption)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Options);
		P_GET_PROPERTY(FStrProperty,Z_Param_InKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGameplayStatics::HasOption(Z_Param_Options,Z_Param_InKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execParseOption)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Options);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UGameplayStatics::ParseOption(Z_Param_Options,Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execGetKeyValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Pair);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Key);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameplayStatics::GetKeyValue(Z_Param_Pair,Z_Param_Out_Key,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execGetViewProjectionMatrix)
	{
		P_GET_STRUCT(FMinimalViewInfo,Z_Param_DesiredView);
		P_GET_STRUCT_REF(FMatrix,Z_Param_Out_ViewMatrix);
		P_GET_STRUCT_REF(FMatrix,Z_Param_Out_ProjectionMatrix);
		P_GET_STRUCT_REF(FMatrix,Z_Param_Out_ViewProjectionMatrix);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameplayStatics::GetViewProjectionMatrix(Z_Param_DesiredView,Z_Param_Out_ViewMatrix,Z_Param_Out_ProjectionMatrix,Z_Param_Out_ViewProjectionMatrix);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execProjectWorldToScreen)
	{
		P_GET_OBJECT(APlayerController,Z_Param_Player);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldPosition);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_ScreenPosition);
		P_GET_UBOOL(Z_Param_bPlayerViewportRelative);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGameplayStatics::ProjectWorldToScreen(Z_Param_Player,Z_Param_Out_WorldPosition,Z_Param_Out_ScreenPosition,Z_Param_bPlayerViewportRelative);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execDeprojectScreenToWorld)
	{
		P_GET_OBJECT(APlayerController,Z_Param_Player);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_ScreenPosition);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldPosition);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldDirection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGameplayStatics::DeprojectScreenToWorld(Z_Param_Player,Z_Param_Out_ScreenPosition,Z_Param_Out_WorldPosition,Z_Param_Out_WorldDirection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execGrassOverlappingSphereCount)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_STRUCT(FVector,Z_Param_CenterPosition);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UGameplayStatics::GrassOverlappingSphereCount(Z_Param_WorldContextObject,Z_Param_StaticMesh,Z_Param_CenterPosition,Z_Param_Radius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execRebaseZeroOriginOntoLocal)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FVector,Z_Param_WorldLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UGameplayStatics::RebaseZeroOriginOntoLocal(Z_Param_WorldContextObject,Z_Param_WorldLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execRebaseLocalOriginOntoZero)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FVector,Z_Param_WorldLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UGameplayStatics::RebaseLocalOriginOntoZero(Z_Param_WorldContextObject,Z_Param_WorldLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execSetWorldOriginLocation)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FIntVector,Z_Param_NewLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameplayStatics::SetWorldOriginLocation(Z_Param_WorldContextObject,Z_Param_NewLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execGetWorldOriginLocation)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntVector*)Z_Param__Result=UGameplayStatics::GetWorldOriginLocation(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execSuggestProjectileVelocity_CustomArc)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutLaunchVelocity);
		P_GET_STRUCT(FVector,Z_Param_StartPos);
		P_GET_STRUCT(FVector,Z_Param_EndPos);
		P_GET_PROPERTY(FFloatProperty,Z_Param_OverrideGravityZ);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ArcParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGameplayStatics::SuggestProjectileVelocity_CustomArc(Z_Param_WorldContextObject,Z_Param_Out_OutLaunchVelocity,Z_Param_StartPos,Z_Param_EndPos,Z_Param_OverrideGravityZ,Z_Param_ArcParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execBlueprint_PredictProjectilePath_Advanced)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FPredictProjectilePathParams,Z_Param_Out_PredictParams);
		P_GET_STRUCT_REF(FPredictProjectilePathResult,Z_Param_Out_PredictResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGameplayStatics::Blueprint_PredictProjectilePath_Advanced(Z_Param_WorldContextObject,Z_Param_Out_PredictParams,Z_Param_Out_PredictResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execBlueprint_PredictProjectilePath_ByTraceChannel)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_OutPathPositions);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutLastTraceDestination);
		P_GET_STRUCT(FVector,Z_Param_StartPos);
		P_GET_STRUCT(FVector,Z_Param_LaunchVelocity);
		P_GET_UBOOL(Z_Param_bTracePath);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ProjectileRadius);
		P_GET_PROPERTY(FByteProperty,Z_Param_TraceChannel);
		P_GET_UBOOL(Z_Param_bTraceComplex);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore);
		P_GET_PROPERTY(FByteProperty,Z_Param_DrawDebugType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DrawDebugTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SimFrequency);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxSimTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_OverrideGravityZ);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGameplayStatics::Blueprint_PredictProjectilePath_ByTraceChannel(Z_Param_WorldContextObject,Z_Param_Out_OutHit,Z_Param_Out_OutPathPositions,Z_Param_Out_OutLastTraceDestination,Z_Param_StartPos,Z_Param_LaunchVelocity,Z_Param_bTracePath,Z_Param_ProjectileRadius,ECollisionChannel(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_DrawDebugTime,Z_Param_SimFrequency,Z_Param_MaxSimTime,Z_Param_OverrideGravityZ);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execBlueprint_PredictProjectilePath_ByObjectType)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_OutPathPositions);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutLastTraceDestination);
		P_GET_STRUCT(FVector,Z_Param_StartPos);
		P_GET_STRUCT(FVector,Z_Param_LaunchVelocity);
		P_GET_UBOOL(Z_Param_bTracePath);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ProjectileRadius);
		P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ObjectTypes);
		P_GET_UBOOL(Z_Param_bTraceComplex);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore);
		P_GET_PROPERTY(FByteProperty,Z_Param_DrawDebugType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DrawDebugTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SimFrequency);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxSimTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_OverrideGravityZ);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGameplayStatics::Blueprint_PredictProjectilePath_ByObjectType(Z_Param_WorldContextObject,Z_Param_Out_OutHit,Z_Param_Out_OutPathPositions,Z_Param_Out_OutLastTraceDestination,Z_Param_StartPos,Z_Param_LaunchVelocity,Z_Param_bTracePath,Z_Param_ProjectileRadius,Z_Param_Out_ObjectTypes,Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_DrawDebugTime,Z_Param_SimFrequency,Z_Param_MaxSimTime,Z_Param_OverrideGravityZ);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execBlueprintSuggestProjectileVelocity)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TossVelocity);
		P_GET_STRUCT(FVector,Z_Param_StartLocation);
		P_GET_STRUCT(FVector,Z_Param_EndLocation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LaunchSpeed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_OverrideGravityZ);
		P_GET_PROPERTY(FByteProperty,Z_Param_TraceOption);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CollisionRadius);
		P_GET_UBOOL(Z_Param_bFavorHighArc);
		P_GET_UBOOL(Z_Param_bDrawDebug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGameplayStatics::BlueprintSuggestProjectileVelocity(Z_Param_WorldContextObject,Z_Param_Out_TossVelocity,Z_Param_StartLocation,Z_Param_EndLocation,Z_Param_LaunchSpeed,Z_Param_OverrideGravityZ,ESuggestProjVelocityTraceOption::Type(Z_Param_TraceOption),Z_Param_CollisionRadius,Z_Param_bFavorHighArc,Z_Param_bDrawDebug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execGetPlatformName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UGameplayStatics::GetPlatformName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execEnableLiveStreaming)
	{
		P_GET_UBOOL(Z_Param_Enable);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameplayStatics::EnableLiveStreaming(Z_Param_Enable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execGetAccurateRealTime)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Seconds);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_PartialSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameplayStatics::GetAccurateRealTime(Z_Param_WorldContextObject,Z_Param_Out_Seconds,Z_Param_Out_PartialSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execGetAudioTimeSeconds)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UGameplayStatics::GetAudioTimeSeconds(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execGetRealTimeSeconds)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UGameplayStatics::GetRealTimeSeconds(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execGetUnpausedTimeSeconds)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UGameplayStatics::GetUnpausedTimeSeconds(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execGetTimeSeconds)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UGameplayStatics::GetTimeSeconds(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execGetWorldDeltaSeconds)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UGameplayStatics::GetWorldDeltaSeconds(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execDeleteGameInSlot)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
		P_GET_PROPERTY(FIntProperty,Z_Param_UserIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGameplayStatics::DeleteGameInSlot(Z_Param_SlotName,Z_Param_UserIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execLoadGameFromSlot)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
		P_GET_PROPERTY(FIntProperty,Z_Param_UserIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USaveGame**)Z_Param__Result=UGameplayStatics::LoadGameFromSlot(Z_Param_SlotName,Z_Param_UserIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execDoesSaveGameExist)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
		P_GET_PROPERTY(FIntProperty,Z_Param_UserIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGameplayStatics::DoesSaveGameExist(Z_Param_SlotName,Z_Param_UserIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execSaveGameToSlot)
	{
		P_GET_OBJECT(USaveGame,Z_Param_SaveGameObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
		P_GET_PROPERTY(FIntProperty,Z_Param_UserIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGameplayStatics::SaveGameToSlot(Z_Param_SaveGameObject,Z_Param_SlotName,Z_Param_UserIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execCreateSaveGameObject)
	{
		P_GET_OBJECT(UClass,Z_Param_SaveGameClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USaveGame**)Z_Param__Result=UGameplayStatics::CreateSaveGameObject(Z_Param_SaveGameClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execFindCollisionUV)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_GET_PROPERTY(FIntProperty,Z_Param_UVChannel);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_UV);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGameplayStatics::FindCollisionUV(Z_Param_Out_Hit,Z_Param_UVChannel,Z_Param_Out_UV);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execGetSurfaceType)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<EPhysicalSurface>*)Z_Param__Result=UGameplayStatics::GetSurfaceType(Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execMakeHitResult)
	{
		P_GET_UBOOL(Z_Param_bBlockingHit);
		P_GET_UBOOL(Z_Param_bInitialOverlap);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Distance);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FVector,Z_Param_ImpactPoint);
		P_GET_STRUCT(FVector,Z_Param_Normal);
		P_GET_STRUCT(FVector,Z_Param_ImpactNormal);
		P_GET_OBJECT(UPhysicalMaterial,Z_Param_PhysMat);
		P_GET_OBJECT(AActor,Z_Param_HitActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_PROPERTY(FNameProperty,Z_Param_HitBoneName);
		P_GET_PROPERTY(FIntProperty,Z_Param_HitItem);
		P_GET_PROPERTY(FIntProperty,Z_Param_FaceIndex);
		P_GET_STRUCT(FVector,Z_Param_TraceStart);
		P_GET_STRUCT(FVector,Z_Param_TraceEnd);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FHitResult*)Z_Param__Result=UGameplayStatics::MakeHitResult(Z_Param_bBlockingHit,Z_Param_bInitialOverlap,Z_Param_Time,Z_Param_Distance,Z_Param_Location,Z_Param_ImpactPoint,Z_Param_Normal,Z_Param_ImpactNormal,Z_Param_PhysMat,Z_Param_HitActor,Z_Param_HitComponent,Z_Param_HitBoneName,Z_Param_HitItem,Z_Param_FaceIndex,Z_Param_TraceStart,Z_Param_TraceEnd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execBreakHitResult)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_GET_UBOOL_REF(Z_Param_Out_bBlockingHit);
		P_GET_UBOOL_REF(Z_Param_Out_bInitialOverlap);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Time);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Distance);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ImpactPoint);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Normal);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ImpactNormal);
		P_GET_OBJECT_REF(UPhysicalMaterial,Z_Param_Out_PhysMat);
		P_GET_OBJECT_REF(AActor,Z_Param_Out_HitActor);
		P_GET_OBJECT_REF(UPrimitiveComponent,Z_Param_Out_HitComponent);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_HitBoneName);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_HitItem);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_FaceIndex);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TraceStart);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TraceEnd);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameplayStatics::BreakHitResult(Z_Param_Out_Hit,Z_Param_Out_bBlockingHit,Z_Param_Out_bInitialOverlap,Z_Param_Out_Time,Z_Param_Out_Distance,Z_Param_Out_Location,Z_Param_Out_ImpactPoint,Z_Param_Out_Normal,Z_Param_Out_ImpactNormal,Z_Param_Out_PhysMat,Z_Param_Out_HitActor,Z_Param_Out_HitComponent,Z_Param_Out_HitBoneName,Z_Param_Out_HitItem,Z_Param_Out_FaceIndex,Z_Param_Out_TraceStart,Z_Param_Out_TraceEnd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execSpawnDecalAttached)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_DecalMaterial);
		P_GET_STRUCT(FVector,Z_Param_DecalSize);
		P_GET_OBJECT(USceneComponent,Z_Param_AttachToComponent);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttachPointName);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_GET_PROPERTY(FByteProperty,Z_Param_LocationType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LifeSpan);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDecalComponent**)Z_Param__Result=UGameplayStatics::SpawnDecalAttached(Z_Param_DecalMaterial,Z_Param_DecalSize,Z_Param_AttachToComponent,Z_Param_AttachPointName,Z_Param_Location,Z_Param_Rotation,EAttachLocation::Type(Z_Param_LocationType),Z_Param_LifeSpan);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execSpawnDecalAtLocation)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UMaterialInterface,Z_Param_DecalMaterial);
		P_GET_STRUCT(FVector,Z_Param_DecalSize);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LifeSpan);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDecalComponent**)Z_Param__Result=UGameplayStatics::SpawnDecalAtLocation(Z_Param_WorldContextObject,Z_Param_DecalMaterial,Z_Param_DecalSize,Z_Param_Location,Z_Param_Rotation,Z_Param_LifeSpan);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execGetMaxAudioChannelCount)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UGameplayStatics::GetMaxAudioChannelCount(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execSetMaxAudioChannelsScaled)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxChannelCountScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameplayStatics::SetMaxAudioChannelsScaled(Z_Param_WorldContextObject,Z_Param_MaxChannelCountScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execGetCurrentReverbEffect)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UReverbEffect**)Z_Param__Result=UGameplayStatics::GetCurrentReverbEffect(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execDeactivateReverbEffect)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_TagName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameplayStatics::DeactivateReverbEffect(Z_Param_WorldContextObject,Z_Param_TagName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execActivateReverbEffect)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UReverbEffect,Z_Param_ReverbEffect);
		P_GET_PROPERTY(FNameProperty,Z_Param_TagName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Priority);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FadeTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameplayStatics::ActivateReverbEffect(Z_Param_WorldContextObject,Z_Param_ReverbEffect,Z_Param_TagName,Z_Param_Priority,Z_Param_Volume,Z_Param_FadeTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execClearSoundMixModifiers)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameplayStatics::ClearSoundMixModifiers(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execPopSoundMixModifier)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundMix,Z_Param_InSoundMixModifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameplayStatics::PopSoundMixModifier(Z_Param_WorldContextObject,Z_Param_InSoundMixModifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execPushSoundMixModifier)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundMix,Z_Param_InSoundMixModifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameplayStatics::PushSoundMixModifier(Z_Param_WorldContextObject,Z_Param_InSoundMixModifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execClearSoundMixClassOverride)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundMix,Z_Param_InSoundMixModifier);
		P_GET_OBJECT(USoundClass,Z_Param_InSoundClass);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FadeOutTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameplayStatics::ClearSoundMixClassOverride(Z_Param_WorldContextObject,Z_Param_InSoundMixModifier,Z_Param_InSoundClass,Z_Param_FadeOutTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execSetSoundMixClassOverride)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundMix,Z_Param_InSoundMixModifier);
		P_GET_OBJECT(USoundClass,Z_Param_InSoundClass);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Pitch);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FadeInTime);
		P_GET_UBOOL(Z_Param_bApplyToChildren);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameplayStatics::SetSoundMixClassOverride(Z_Param_WorldContextObject,Z_Param_InSoundMixModifier,Z_Param_InSoundClass,Z_Param_Volume,Z_Param_Pitch,Z_Param_FadeInTime,Z_Param_bApplyToChildren);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execPrimeSound)
	{
		P_GET_OBJECT(USoundBase,Z_Param_InSound);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameplayStatics::PrimeSound(Z_Param_InSound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execSetBaseSoundMix)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundMix,Z_Param_InSoundMix);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameplayStatics::SetBaseSoundMix(Z_Param_WorldContextObject,Z_Param_InSoundMix);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execAreSubtitlesEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGameplayStatics::AreSubtitlesEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execSetSubtitlesEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameplayStatics::SetSubtitlesEnabled(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execSpawnForceFeedbackAttached)
	{
		P_GET_OBJECT(UForceFeedbackEffect,Z_Param_ForceFeedbackEffect);
		P_GET_OBJECT(USceneComponent,Z_Param_AttachToComponent);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttachPointName);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_GET_PROPERTY(FByteProperty,Z_Param_LocationType);
		P_GET_UBOOL(Z_Param_bStopWhenAttachedToDestroyed);
		P_GET_UBOOL(Z_Param_bLooping);
		P_GET_PROPERTY(FFloatProperty,Z_Param_IntensityMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_GET_OBJECT(UForceFeedbackAttenuation,Z_Param_AttenuationSettings);
		P_GET_UBOOL(Z_Param_bAutoDestroy);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UForceFeedbackComponent**)Z_Param__Result=UGameplayStatics::SpawnForceFeedbackAttached(Z_Param_ForceFeedbackEffect,Z_Param_AttachToComponent,Z_Param_AttachPointName,Z_Param_Location,Z_Param_Rotation,EAttachLocation::Type(Z_Param_LocationType),Z_Param_bStopWhenAttachedToDestroyed,Z_Param_bLooping,Z_Param_IntensityMultiplier,Z_Param_StartTime,Z_Param_AttenuationSettings,Z_Param_bAutoDestroy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execSpawnForceFeedbackAtLocation)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UForceFeedbackEffect,Z_Param_ForceFeedbackEffect);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_GET_UBOOL(Z_Param_bLooping);
		P_GET_PROPERTY(FFloatProperty,Z_Param_IntensityMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_GET_OBJECT(UForceFeedbackAttenuation,Z_Param_AttenuationSettings);
		P_GET_UBOOL(Z_Param_bAutoDestroy);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UForceFeedbackComponent**)Z_Param__Result=UGameplayStatics::SpawnForceFeedbackAtLocation(Z_Param_WorldContextObject,Z_Param_ForceFeedbackEffect,Z_Param_Location,Z_Param_Rotation,Z_Param_bLooping,Z_Param_IntensityMultiplier,Z_Param_StartTime,Z_Param_AttenuationSettings,Z_Param_bAutoDestroy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execSpawnDialogueAttached)
	{
		P_GET_OBJECT(UDialogueWave,Z_Param_Dialogue);
		P_GET_STRUCT_REF(FDialogueContext,Z_Param_Out_Context);
		P_GET_OBJECT(USceneComponent,Z_Param_AttachToComponent);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttachPointName);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_GET_PROPERTY(FByteProperty,Z_Param_LocationType);
		P_GET_UBOOL(Z_Param_bStopWhenAttachedToDestroyed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_VolumeMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PitchMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_GET_OBJECT(USoundAttenuation,Z_Param_AttenuationSettings);
		P_GET_UBOOL(Z_Param_bAutoDestroy);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAudioComponent**)Z_Param__Result=UGameplayStatics::SpawnDialogueAttached(Z_Param_Dialogue,Z_Param_Out_Context,Z_Param_AttachToComponent,Z_Param_AttachPointName,Z_Param_Location,Z_Param_Rotation,EAttachLocation::Type(Z_Param_LocationType),Z_Param_bStopWhenAttachedToDestroyed,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier,Z_Param_StartTime,Z_Param_AttenuationSettings,Z_Param_bAutoDestroy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execSpawnDialogueAtLocation)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UDialogueWave,Z_Param_Dialogue);
		P_GET_STRUCT_REF(FDialogueContext,Z_Param_Out_Context);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_VolumeMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PitchMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_GET_OBJECT(USoundAttenuation,Z_Param_AttenuationSettings);
		P_GET_UBOOL(Z_Param_bAutoDestroy);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAudioComponent**)Z_Param__Result=UGameplayStatics::SpawnDialogueAtLocation(Z_Param_WorldContextObject,Z_Param_Dialogue,Z_Param_Out_Context,Z_Param_Location,Z_Param_Rotation,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier,Z_Param_StartTime,Z_Param_AttenuationSettings,Z_Param_bAutoDestroy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execPlayDialogueAtLocation)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UDialogueWave,Z_Param_Dialogue);
		P_GET_STRUCT_REF(FDialogueContext,Z_Param_Out_Context);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_VolumeMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PitchMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_GET_OBJECT(USoundAttenuation,Z_Param_AttenuationSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameplayStatics::PlayDialogueAtLocation(Z_Param_WorldContextObject,Z_Param_Dialogue,Z_Param_Out_Context,Z_Param_Location,Z_Param_Rotation,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier,Z_Param_StartTime,Z_Param_AttenuationSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execSpawnDialogue2D)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UDialogueWave,Z_Param_Dialogue);
		P_GET_STRUCT_REF(FDialogueContext,Z_Param_Out_Context);
		P_GET_PROPERTY(FFloatProperty,Z_Param_VolumeMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PitchMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_GET_UBOOL(Z_Param_bAutoDestroy);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAudioComponent**)Z_Param__Result=UGameplayStatics::SpawnDialogue2D(Z_Param_WorldContextObject,Z_Param_Dialogue,Z_Param_Out_Context,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier,Z_Param_StartTime,Z_Param_bAutoDestroy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execPlayDialogue2D)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UDialogueWave,Z_Param_Dialogue);
		P_GET_STRUCT_REF(FDialogueContext,Z_Param_Out_Context);
		P_GET_PROPERTY(FFloatProperty,Z_Param_VolumeMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PitchMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameplayStatics::PlayDialogue2D(Z_Param_WorldContextObject,Z_Param_Dialogue,Z_Param_Out_Context,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier,Z_Param_StartTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execSpawnSoundAttached)
	{
		P_GET_OBJECT(USoundBase,Z_Param_Sound);
		P_GET_OBJECT(USceneComponent,Z_Param_AttachToComponent);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttachPointName);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_GET_PROPERTY(FByteProperty,Z_Param_LocationType);
		P_GET_UBOOL(Z_Param_bStopWhenAttachedToDestroyed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_VolumeMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PitchMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_GET_OBJECT(USoundAttenuation,Z_Param_AttenuationSettings);
		P_GET_OBJECT(USoundConcurrency,Z_Param_ConcurrencySettings);
		P_GET_UBOOL(Z_Param_bAutoDestroy);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAudioComponent**)Z_Param__Result=UGameplayStatics::SpawnSoundAttached(Z_Param_Sound,Z_Param_AttachToComponent,Z_Param_AttachPointName,Z_Param_Location,Z_Param_Rotation,EAttachLocation::Type(Z_Param_LocationType),Z_Param_bStopWhenAttachedToDestroyed,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier,Z_Param_StartTime,Z_Param_AttenuationSettings,Z_Param_ConcurrencySettings,Z_Param_bAutoDestroy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execSpawnSoundAtLocation)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundBase,Z_Param_Sound);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_VolumeMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PitchMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_GET_OBJECT(USoundAttenuation,Z_Param_AttenuationSettings);
		P_GET_OBJECT(USoundConcurrency,Z_Param_ConcurrencySettings);
		P_GET_UBOOL(Z_Param_bAutoDestroy);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAudioComponent**)Z_Param__Result=UGameplayStatics::SpawnSoundAtLocation(Z_Param_WorldContextObject,Z_Param_Sound,Z_Param_Location,Z_Param_Rotation,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier,Z_Param_StartTime,Z_Param_AttenuationSettings,Z_Param_ConcurrencySettings,Z_Param_bAutoDestroy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execPlaySoundAtLocation)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundBase,Z_Param_Sound);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_VolumeMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PitchMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_GET_OBJECT(USoundAttenuation,Z_Param_AttenuationSettings);
		P_GET_OBJECT(USoundConcurrency,Z_Param_ConcurrencySettings);
		P_GET_OBJECT(AActor,Z_Param_OwningActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameplayStatics::PlaySoundAtLocation(Z_Param_WorldContextObject,Z_Param_Sound,Z_Param_Location,Z_Param_Rotation,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier,Z_Param_StartTime,Z_Param_AttenuationSettings,Z_Param_ConcurrencySettings,Z_Param_OwningActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execCreateSound2D)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundBase,Z_Param_Sound);
		P_GET_PROPERTY(FFloatProperty,Z_Param_VolumeMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PitchMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_GET_OBJECT(USoundConcurrency,Z_Param_ConcurrencySettings);
		P_GET_UBOOL(Z_Param_bPersistAcrossLevelTransition);
		P_GET_UBOOL(Z_Param_bAutoDestroy);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAudioComponent**)Z_Param__Result=UGameplayStatics::CreateSound2D(Z_Param_WorldContextObject,Z_Param_Sound,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier,Z_Param_StartTime,Z_Param_ConcurrencySettings,Z_Param_bPersistAcrossLevelTransition,Z_Param_bAutoDestroy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execSpawnSound2D)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundBase,Z_Param_Sound);
		P_GET_PROPERTY(FFloatProperty,Z_Param_VolumeMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PitchMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_GET_OBJECT(USoundConcurrency,Z_Param_ConcurrencySettings);
		P_GET_UBOOL(Z_Param_bPersistAcrossLevelTransition);
		P_GET_UBOOL(Z_Param_bAutoDestroy);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAudioComponent**)Z_Param__Result=UGameplayStatics::SpawnSound2D(Z_Param_WorldContextObject,Z_Param_Sound,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier,Z_Param_StartTime,Z_Param_ConcurrencySettings,Z_Param_bPersistAcrossLevelTransition,Z_Param_bAutoDestroy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execPlaySound2D)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundBase,Z_Param_Sound);
		P_GET_PROPERTY(FFloatProperty,Z_Param_VolumeMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PitchMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_GET_OBJECT(USoundConcurrency,Z_Param_ConcurrencySettings);
		P_GET_OBJECT(AActor,Z_Param_OwningActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameplayStatics::PlaySound2D(Z_Param_WorldContextObject,Z_Param_Sound,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier,Z_Param_StartTime,Z_Param_ConcurrencySettings,Z_Param_OwningActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execSetGlobalListenerFocusParameters)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FocusAzimuthScale);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NonFocusAzimuthScale);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FocusDistanceScale);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NonFocusDistanceScale);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FocusVolumeScale);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NonFocusVolumeScale);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FocusPriorityScale);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NonFocusPriorityScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameplayStatics::SetGlobalListenerFocusParameters(Z_Param_WorldContextObject,Z_Param_FocusAzimuthScale,Z_Param_NonFocusAzimuthScale,Z_Param_FocusDistanceScale,Z_Param_NonFocusDistanceScale,Z_Param_FocusVolumeScale,Z_Param_NonFocusVolumeScale,Z_Param_FocusPriorityScale,Z_Param_NonFocusPriorityScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execSetSoundClassDistanceScale)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundClass,Z_Param_SoundClass);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DistanceAttenuationScale);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeSec);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameplayStatics::SetSoundClassDistanceScale(Z_Param_WorldContextObject,Z_Param_SoundClass,Z_Param_DistanceAttenuationScale,Z_Param_TimeSec);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execSetGlobalPitchModulation)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PitchModulation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeSec);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameplayStatics::SetGlobalPitchModulation(Z_Param_WorldContextObject,Z_Param_PitchModulation,Z_Param_TimeSec);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execGetClosestListenerLocation)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaximumRange);
		P_GET_UBOOL(Z_Param_bAllowAttenuationOverride);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ListenerPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGameplayStatics::GetClosestListenerLocation(Z_Param_WorldContextObject,Z_Param_Out_Location,Z_Param_MaximumRange,Z_Param_bAllowAttenuationOverride,Z_Param_Out_ListenerPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execAreAnyListenersWithinRange)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaximumRange);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGameplayStatics::AreAnyListenersWithinRange(Z_Param_WorldContextObject,Z_Param_Out_Location,Z_Param_MaximumRange);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execSpawnEmitterAttached)
	{
		P_GET_OBJECT(UParticleSystem,Z_Param_EmitterTemplate);
		P_GET_OBJECT(USceneComponent,Z_Param_AttachToComponent);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttachPointName);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_GET_STRUCT(FVector,Z_Param_Scale);
		P_GET_PROPERTY(FByteProperty,Z_Param_LocationType);
		P_GET_UBOOL(Z_Param_bAutoDestroy);
		P_GET_ENUM(EPSCPoolMethod,Z_Param_PoolingMethod);
		P_GET_UBOOL(Z_Param_bAutoActivate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UParticleSystemComponent**)Z_Param__Result=UGameplayStatics::SpawnEmitterAttached(Z_Param_EmitterTemplate,Z_Param_AttachToComponent,Z_Param_AttachPointName,Z_Param_Location,Z_Param_Rotation,Z_Param_Scale,EAttachLocation::Type(Z_Param_LocationType),Z_Param_bAutoDestroy,EPSCPoolMethod(Z_Param_PoolingMethod),Z_Param_bAutoActivate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execSpawnEmitterAtLocation)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UParticleSystem,Z_Param_EmitterTemplate);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_GET_STRUCT(FVector,Z_Param_Scale);
		P_GET_UBOOL(Z_Param_bAutoDestroy);
		P_GET_ENUM(EPSCPoolMethod,Z_Param_PoolingMethod);
		P_GET_UBOOL(Z_Param_bAutoActivateSystem);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UParticleSystemComponent**)Z_Param__Result=UGameplayStatics::SpawnEmitterAtLocation(Z_Param_WorldContextObject,Z_Param_EmitterTemplate,Z_Param_Location,Z_Param_Rotation,Z_Param_Scale,Z_Param_bAutoDestroy,EPSCPoolMethod(Z_Param_PoolingMethod),Z_Param_bAutoActivateSystem);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execPlayWorldCameraShake)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UClass,Z_Param_Shake);
		P_GET_STRUCT(FVector,Z_Param_Epicenter);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InnerRadius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_OuterRadius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Falloff);
		P_GET_UBOOL(Z_Param_bOrientShakeTowardsEpicenter);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameplayStatics::PlayWorldCameraShake(Z_Param_WorldContextObject,Z_Param_Shake,Z_Param_Epicenter,Z_Param_InnerRadius,Z_Param_OuterRadius,Z_Param_Falloff,Z_Param_bOrientShakeTowardsEpicenter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execApplyDamage)
	{
		P_GET_OBJECT(AActor,Z_Param_DamagedActor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BaseDamage);
		P_GET_OBJECT(AController,Z_Param_EventInstigator);
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_GET_OBJECT(UClass,Z_Param_DamageTypeClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UGameplayStatics::ApplyDamage(Z_Param_DamagedActor,Z_Param_BaseDamage,Z_Param_EventInstigator,Z_Param_DamageCauser,Z_Param_DamageTypeClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execApplyPointDamage)
	{
		P_GET_OBJECT(AActor,Z_Param_DamagedActor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BaseDamage);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HitFromDirection);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitInfo);
		P_GET_OBJECT(AController,Z_Param_EventInstigator);
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_GET_OBJECT(UClass,Z_Param_DamageTypeClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UGameplayStatics::ApplyPointDamage(Z_Param_DamagedActor,Z_Param_BaseDamage,Z_Param_Out_HitFromDirection,Z_Param_Out_HitInfo,Z_Param_EventInstigator,Z_Param_DamageCauser,Z_Param_DamageTypeClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execApplyRadialDamageWithFalloff)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BaseDamage);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MinimumDamage);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DamageInnerRadius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DamageOuterRadius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DamageFalloff);
		P_GET_OBJECT(UClass,Z_Param_DamageTypeClass);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_IgnoreActors);
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_GET_OBJECT(AController,Z_Param_InstigatedByController);
		P_GET_PROPERTY(FByteProperty,Z_Param_DamagePreventionChannel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGameplayStatics::ApplyRadialDamageWithFalloff(Z_Param_WorldContextObject,Z_Param_BaseDamage,Z_Param_MinimumDamage,Z_Param_Out_Origin,Z_Param_DamageInnerRadius,Z_Param_DamageOuterRadius,Z_Param_DamageFalloff,Z_Param_DamageTypeClass,Z_Param_Out_IgnoreActors,Z_Param_DamageCauser,Z_Param_InstigatedByController,ECollisionChannel(Z_Param_DamagePreventionChannel));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execApplyRadialDamage)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BaseDamage);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DamageRadius);
		P_GET_OBJECT(UClass,Z_Param_DamageTypeClass);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_IgnoreActors);
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_GET_OBJECT(AController,Z_Param_InstigatedByController);
		P_GET_UBOOL(Z_Param_bDoFullDamage);
		P_GET_PROPERTY(FByteProperty,Z_Param_DamagePreventionChannel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGameplayStatics::ApplyRadialDamage(Z_Param_WorldContextObject,Z_Param_BaseDamage,Z_Param_Out_Origin,Z_Param_DamageRadius,Z_Param_DamageTypeClass,Z_Param_Out_IgnoreActors,Z_Param_DamageCauser,Z_Param_InstigatedByController,Z_Param_bDoFullDamage,ECollisionChannel(Z_Param_DamagePreventionChannel));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execSetViewportMouseCaptureMode)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(EMouseCaptureMode,Z_Param_MouseCaptureMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameplayStatics::SetViewportMouseCaptureMode(Z_Param_WorldContextObject,EMouseCaptureMode(Z_Param_MouseCaptureMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execGetViewportMouseCaptureMode)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EMouseCaptureMode*)Z_Param__Result=UGameplayStatics::GetViewportMouseCaptureMode(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execGetEnableWorldRendering)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGameplayStatics::GetEnableWorldRendering(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execSetEnableWorldRendering)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameplayStatics::SetEnableWorldRendering(Z_Param_WorldContextObject,Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execIsSplitscreenForceDisabled)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGameplayStatics::IsSplitscreenForceDisabled(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execSetForceDisableSplitscreen)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_UBOOL(Z_Param_bDisable);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameplayStatics::SetForceDisableSplitscreen(Z_Param_WorldContextObject,Z_Param_bDisable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execIsGamePaused)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGameplayStatics::IsGamePaused(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execSetGamePaused)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_UBOOL(Z_Param_bPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGameplayStatics::SetGamePaused(Z_Param_WorldContextObject,Z_Param_bPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execSetGlobalTimeDilation)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeDilation);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameplayStatics::SetGlobalTimeDilation(Z_Param_WorldContextObject,Z_Param_TimeDilation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execGetGlobalTimeDilation)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UGameplayStatics::GetGlobalTimeDilation(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execGetObjectClass)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UClass**)Z_Param__Result=UGameplayStatics::GetObjectClass(Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execGetGameState)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AGameStateBase**)Z_Param__Result=UGameplayStatics::GetGameState(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execGetGameMode)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AGameModeBase**)Z_Param__Result=UGameplayStatics::GetGameMode(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execGetCurrentLevelName)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_UBOOL(Z_Param_bRemovePrefixString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UGameplayStatics::GetCurrentLevelName(Z_Param_WorldContextObject,Z_Param_bRemovePrefixString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execOpenLevel)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_LevelName);
		P_GET_UBOOL(Z_Param_bAbsolute);
		P_GET_PROPERTY(FStrProperty,Z_Param_Options);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameplayStatics::OpenLevel(Z_Param_WorldContextObject,Z_Param_LevelName,Z_Param_bAbsolute,Z_Param_Options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execCancelAsyncLoading)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameplayStatics::CancelAsyncLoading();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execFlushLevelStreaming)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameplayStatics::FlushLevelStreaming(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execGetStreamingLevel)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_PackageName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULevelStreaming**)Z_Param__Result=UGameplayStatics::GetStreamingLevel(Z_Param_WorldContextObject,Z_Param_PackageName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execUnloadStreamLevel)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_LevelName);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_UBOOL(Z_Param_bShouldBlockOnUnload);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameplayStatics::UnloadStreamLevel(Z_Param_WorldContextObject,Z_Param_LevelName,Z_Param_LatentInfo,Z_Param_bShouldBlockOnUnload);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execLoadStreamLevel)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_LevelName);
		P_GET_UBOOL(Z_Param_bMakeVisibleAfterLoad);
		P_GET_UBOOL(Z_Param_bShouldBlockOnLoad);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameplayStatics::LoadStreamLevel(Z_Param_WorldContextObject,Z_Param_LevelName,Z_Param_bMakeVisibleAfterLoad,Z_Param_bShouldBlockOnLoad,Z_Param_LatentInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execSetPlayerControllerID)
	{
		P_GET_OBJECT(APlayerController,Z_Param_Player);
		P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameplayStatics::SetPlayerControllerID(Z_Param_Player,Z_Param_ControllerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execGetPlayerControllerID)
	{
		P_GET_OBJECT(APlayerController,Z_Param_Player);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UGameplayStatics::GetPlayerControllerID(Z_Param_Player);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execRemovePlayer)
	{
		P_GET_OBJECT(APlayerController,Z_Param_Player);
		P_GET_UBOOL(Z_Param_bDestroyPawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameplayStatics::RemovePlayer(Z_Param_Player,Z_Param_bDestroyPawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execCreatePlayer)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
		P_GET_UBOOL(Z_Param_bSpawnPlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APlayerController**)Z_Param__Result=UGameplayStatics::CreatePlayer(Z_Param_WorldContextObject,Z_Param_ControllerId,Z_Param_bSpawnPlayerController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execGetPlayerCameraManager)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APlayerCameraManager**)Z_Param__Result=UGameplayStatics::GetPlayerCameraManager(Z_Param_WorldContextObject,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execGetPlayerCharacter)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACharacter**)Z_Param__Result=UGameplayStatics::GetPlayerCharacter(Z_Param_WorldContextObject,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execGetPlayerPawn)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APawn**)Z_Param__Result=UGameplayStatics::GetPlayerPawn(Z_Param_WorldContextObject,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execGetPlayerControllerFromID)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_ControllerID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APlayerController**)Z_Param__Result=UGameplayStatics::GetPlayerControllerFromID(Z_Param_WorldContextObject,Z_Param_ControllerID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execGetPlayerController)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APlayerController**)Z_Param__Result=UGameplayStatics::GetPlayerController(Z_Param_WorldContextObject,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execGetGameInstance)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGameInstance**)Z_Param__Result=UGameplayStatics::GetGameInstance(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execGetAllActorsOfClassWithTag)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UClass,Z_Param_ActorClass);
		P_GET_PROPERTY(FNameProperty,Z_Param_Tag);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameplayStatics::GetAllActorsOfClassWithTag(Z_Param_WorldContextObject,Z_Param_ActorClass,Z_Param_Tag,Z_Param_Out_OutActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execGetAllActorsWithTag)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_Tag);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameplayStatics::GetAllActorsWithTag(Z_Param_WorldContextObject,Z_Param_Tag,Z_Param_Out_OutActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execGetAllActorsWithInterface)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UClass,Z_Param_Interface);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameplayStatics::GetAllActorsWithInterface(Z_Param_WorldContextObject,Z_Param_Interface,Z_Param_Out_OutActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execGetAllActorsOfClass)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UClass,Z_Param_ActorClass);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameplayStatics::GetAllActorsOfClass(Z_Param_WorldContextObject,Z_Param_ActorClass,Z_Param_Out_OutActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execGetActorOfClass)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UClass,Z_Param_ActorClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=UGameplayStatics::GetActorOfClass(Z_Param_WorldContextObject,Z_Param_ActorClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execGetActorArrayBounds)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_Actors);
		P_GET_UBOOL(Z_Param_bOnlyCollidingComponents);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Center);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_BoxExtent);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameplayStatics::GetActorArrayBounds(Z_Param_Out_Actors,Z_Param_bOnlyCollidingComponents,Z_Param_Out_Center,Z_Param_Out_BoxExtent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execGetActorArrayAverageLocation)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_Actors);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UGameplayStatics::GetActorArrayAverageLocation(Z_Param_Out_Actors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execFinishSpawningActor)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SpawnTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=UGameplayStatics::FinishSpawningActor(Z_Param_Actor,Z_Param_Out_SpawnTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execBeginDeferredActorSpawnFromClass)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UClass,Z_Param_ActorClass);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SpawnTransform);
		P_GET_ENUM(ESpawnActorCollisionHandlingMethod,Z_Param_CollisionHandlingOverride);
		P_GET_OBJECT(AActor,Z_Param_Owner);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=UGameplayStatics::BeginDeferredActorSpawnFromClass(Z_Param_WorldContextObject,Z_Param_ActorClass,Z_Param_Out_SpawnTransform,ESpawnActorCollisionHandlingMethod(Z_Param_CollisionHandlingOverride),Z_Param_Owner);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execBeginSpawningActorFromClass)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UClass,Z_Param_ActorClass);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SpawnTransform);
		P_GET_UBOOL(Z_Param_bNoCollisionFail);
		P_GET_OBJECT(AActor,Z_Param_Owner);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=UGameplayStatics::BeginSpawningActorFromClass(Z_Param_WorldContextObject,Z_Param_ActorClass,Z_Param_Out_SpawnTransform,Z_Param_bNoCollisionFail,Z_Param_Owner);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execBeginSpawningActorFromBlueprint)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SpawnTransform);
		P_GET_UBOOL(Z_Param_bNoCollisionFail);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=UGameplayStatics::BeginSpawningActorFromBlueprint(Z_Param_WorldContextObject,Z_Param_Blueprint,Z_Param_Out_SpawnTransform,Z_Param_bNoCollisionFail);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayStatics::execSpawnObject)
	{
		P_GET_OBJECT(UClass,Z_Param_ObjectClass);
		P_GET_OBJECT(UObject,Z_Param_Outer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=UGameplayStatics::SpawnObject(Z_Param_ObjectClass,Z_Param_Outer);
		P_NATIVE_END;
	}
	void UGameplayStatics::StaticRegisterNativesUGameplayStatics()
	{
		UClass* Class = UGameplayStatics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateReverbEffect", &UGameplayStatics::execActivateReverbEffect },
			{ "ApplyDamage", &UGameplayStatics::execApplyDamage },
			{ "ApplyPointDamage", &UGameplayStatics::execApplyPointDamage },
			{ "ApplyRadialDamage", &UGameplayStatics::execApplyRadialDamage },
			{ "ApplyRadialDamageWithFalloff", &UGameplayStatics::execApplyRadialDamageWithFalloff },
			{ "AreAnyListenersWithinRange", &UGameplayStatics::execAreAnyListenersWithinRange },
			{ "AreSubtitlesEnabled", &UGameplayStatics::execAreSubtitlesEnabled },
			{ "BeginDeferredActorSpawnFromClass", &UGameplayStatics::execBeginDeferredActorSpawnFromClass },
			{ "BeginSpawningActorFromBlueprint", &UGameplayStatics::execBeginSpawningActorFromBlueprint },
			{ "BeginSpawningActorFromClass", &UGameplayStatics::execBeginSpawningActorFromClass },
			{ "Blueprint_PredictProjectilePath_Advanced", &UGameplayStatics::execBlueprint_PredictProjectilePath_Advanced },
			{ "Blueprint_PredictProjectilePath_ByObjectType", &UGameplayStatics::execBlueprint_PredictProjectilePath_ByObjectType },
			{ "Blueprint_PredictProjectilePath_ByTraceChannel", &UGameplayStatics::execBlueprint_PredictProjectilePath_ByTraceChannel },
			{ "BlueprintSuggestProjectileVelocity", &UGameplayStatics::execBlueprintSuggestProjectileVelocity },
			{ "BreakHitResult", &UGameplayStatics::execBreakHitResult },
			{ "CancelAsyncLoading", &UGameplayStatics::execCancelAsyncLoading },
			{ "ClearSoundMixClassOverride", &UGameplayStatics::execClearSoundMixClassOverride },
			{ "ClearSoundMixModifiers", &UGameplayStatics::execClearSoundMixModifiers },
			{ "CreatePlayer", &UGameplayStatics::execCreatePlayer },
			{ "CreateSaveGameObject", &UGameplayStatics::execCreateSaveGameObject },
			{ "CreateSound2D", &UGameplayStatics::execCreateSound2D },
			{ "DeactivateReverbEffect", &UGameplayStatics::execDeactivateReverbEffect },
			{ "DeleteGameInSlot", &UGameplayStatics::execDeleteGameInSlot },
			{ "DeprojectScreenToWorld", &UGameplayStatics::execDeprojectScreenToWorld },
			{ "DoesSaveGameExist", &UGameplayStatics::execDoesSaveGameExist },
			{ "EnableLiveStreaming", &UGameplayStatics::execEnableLiveStreaming },
			{ "FindCollisionUV", &UGameplayStatics::execFindCollisionUV },
			{ "FinishSpawningActor", &UGameplayStatics::execFinishSpawningActor },
			{ "FlushLevelStreaming", &UGameplayStatics::execFlushLevelStreaming },
			{ "GetAccurateRealTime", &UGameplayStatics::execGetAccurateRealTime },
			{ "GetActorArrayAverageLocation", &UGameplayStatics::execGetActorArrayAverageLocation },
			{ "GetActorArrayBounds", &UGameplayStatics::execGetActorArrayBounds },
			{ "GetActorOfClass", &UGameplayStatics::execGetActorOfClass },
			{ "GetAllActorsOfClass", &UGameplayStatics::execGetAllActorsOfClass },
			{ "GetAllActorsOfClassWithTag", &UGameplayStatics::execGetAllActorsOfClassWithTag },
			{ "GetAllActorsWithInterface", &UGameplayStatics::execGetAllActorsWithInterface },
			{ "GetAllActorsWithTag", &UGameplayStatics::execGetAllActorsWithTag },
			{ "GetAudioTimeSeconds", &UGameplayStatics::execGetAudioTimeSeconds },
			{ "GetClosestListenerLocation", &UGameplayStatics::execGetClosestListenerLocation },
			{ "GetCurrentLevelName", &UGameplayStatics::execGetCurrentLevelName },
			{ "GetCurrentReverbEffect", &UGameplayStatics::execGetCurrentReverbEffect },
			{ "GetEnableWorldRendering", &UGameplayStatics::execGetEnableWorldRendering },
			{ "GetGameInstance", &UGameplayStatics::execGetGameInstance },
			{ "GetGameMode", &UGameplayStatics::execGetGameMode },
			{ "GetGameState", &UGameplayStatics::execGetGameState },
			{ "GetGlobalTimeDilation", &UGameplayStatics::execGetGlobalTimeDilation },
			{ "GetIntOption", &UGameplayStatics::execGetIntOption },
			{ "GetKeyValue", &UGameplayStatics::execGetKeyValue },
			{ "GetMaxAudioChannelCount", &UGameplayStatics::execGetMaxAudioChannelCount },
			{ "GetObjectClass", &UGameplayStatics::execGetObjectClass },
			{ "GetPlatformName", &UGameplayStatics::execGetPlatformName },
			{ "GetPlayerCameraManager", &UGameplayStatics::execGetPlayerCameraManager },
			{ "GetPlayerCharacter", &UGameplayStatics::execGetPlayerCharacter },
			{ "GetPlayerController", &UGameplayStatics::execGetPlayerController },
			{ "GetPlayerControllerFromID", &UGameplayStatics::execGetPlayerControllerFromID },
			{ "GetPlayerControllerID", &UGameplayStatics::execGetPlayerControllerID },
			{ "GetPlayerPawn", &UGameplayStatics::execGetPlayerPawn },
			{ "GetRealTimeSeconds", &UGameplayStatics::execGetRealTimeSeconds },
			{ "GetStreamingLevel", &UGameplayStatics::execGetStreamingLevel },
			{ "GetSurfaceType", &UGameplayStatics::execGetSurfaceType },
			{ "GetTimeSeconds", &UGameplayStatics::execGetTimeSeconds },
			{ "GetUnpausedTimeSeconds", &UGameplayStatics::execGetUnpausedTimeSeconds },
			{ "GetViewportMouseCaptureMode", &UGameplayStatics::execGetViewportMouseCaptureMode },
			{ "GetViewProjectionMatrix", &UGameplayStatics::execGetViewProjectionMatrix },
			{ "GetWorldDeltaSeconds", &UGameplayStatics::execGetWorldDeltaSeconds },
			{ "GetWorldOriginLocation", &UGameplayStatics::execGetWorldOriginLocation },
			{ "GrassOverlappingSphereCount", &UGameplayStatics::execGrassOverlappingSphereCount },
			{ "HasLaunchOption", &UGameplayStatics::execHasLaunchOption },
			{ "HasOption", &UGameplayStatics::execHasOption },
			{ "IsGamePaused", &UGameplayStatics::execIsGamePaused },
			{ "IsSplitscreenForceDisabled", &UGameplayStatics::execIsSplitscreenForceDisabled },
			{ "LoadGameFromSlot", &UGameplayStatics::execLoadGameFromSlot },
			{ "LoadStreamLevel", &UGameplayStatics::execLoadStreamLevel },
			{ "MakeHitResult", &UGameplayStatics::execMakeHitResult },
			{ "OpenLevel", &UGameplayStatics::execOpenLevel },
			{ "ParseOption", &UGameplayStatics::execParseOption },
			{ "PlayDialogue2D", &UGameplayStatics::execPlayDialogue2D },
			{ "PlayDialogueAtLocation", &UGameplayStatics::execPlayDialogueAtLocation },
			{ "PlaySound2D", &UGameplayStatics::execPlaySound2D },
			{ "PlaySoundAtLocation", &UGameplayStatics::execPlaySoundAtLocation },
			{ "PlayWorldCameraShake", &UGameplayStatics::execPlayWorldCameraShake },
			{ "PopSoundMixModifier", &UGameplayStatics::execPopSoundMixModifier },
			{ "PrimeSound", &UGameplayStatics::execPrimeSound },
			{ "ProjectWorldToScreen", &UGameplayStatics::execProjectWorldToScreen },
			{ "PushSoundMixModifier", &UGameplayStatics::execPushSoundMixModifier },
			{ "RebaseLocalOriginOntoZero", &UGameplayStatics::execRebaseLocalOriginOntoZero },
			{ "RebaseZeroOriginOntoLocal", &UGameplayStatics::execRebaseZeroOriginOntoLocal },
			{ "RemovePlayer", &UGameplayStatics::execRemovePlayer },
			{ "SaveGameToSlot", &UGameplayStatics::execSaveGameToSlot },
			{ "SetBaseSoundMix", &UGameplayStatics::execSetBaseSoundMix },
			{ "SetEnableWorldRendering", &UGameplayStatics::execSetEnableWorldRendering },
			{ "SetForceDisableSplitscreen", &UGameplayStatics::execSetForceDisableSplitscreen },
			{ "SetGamePaused", &UGameplayStatics::execSetGamePaused },
			{ "SetGlobalListenerFocusParameters", &UGameplayStatics::execSetGlobalListenerFocusParameters },
			{ "SetGlobalPitchModulation", &UGameplayStatics::execSetGlobalPitchModulation },
			{ "SetGlobalTimeDilation", &UGameplayStatics::execSetGlobalTimeDilation },
			{ "SetMaxAudioChannelsScaled", &UGameplayStatics::execSetMaxAudioChannelsScaled },
			{ "SetPlayerControllerID", &UGameplayStatics::execSetPlayerControllerID },
			{ "SetSoundClassDistanceScale", &UGameplayStatics::execSetSoundClassDistanceScale },
			{ "SetSoundMixClassOverride", &UGameplayStatics::execSetSoundMixClassOverride },
			{ "SetSubtitlesEnabled", &UGameplayStatics::execSetSubtitlesEnabled },
			{ "SetViewportMouseCaptureMode", &UGameplayStatics::execSetViewportMouseCaptureMode },
			{ "SetWorldOriginLocation", &UGameplayStatics::execSetWorldOriginLocation },
			{ "SpawnDecalAtLocation", &UGameplayStatics::execSpawnDecalAtLocation },
			{ "SpawnDecalAttached", &UGameplayStatics::execSpawnDecalAttached },
			{ "SpawnDialogue2D", &UGameplayStatics::execSpawnDialogue2D },
			{ "SpawnDialogueAtLocation", &UGameplayStatics::execSpawnDialogueAtLocation },
			{ "SpawnDialogueAttached", &UGameplayStatics::execSpawnDialogueAttached },
			{ "SpawnEmitterAtLocation", &UGameplayStatics::execSpawnEmitterAtLocation },
			{ "SpawnEmitterAttached", &UGameplayStatics::execSpawnEmitterAttached },
			{ "SpawnForceFeedbackAtLocation", &UGameplayStatics::execSpawnForceFeedbackAtLocation },
			{ "SpawnForceFeedbackAttached", &UGameplayStatics::execSpawnForceFeedbackAttached },
			{ "SpawnObject", &UGameplayStatics::execSpawnObject },
			{ "SpawnSound2D", &UGameplayStatics::execSpawnSound2D },
			{ "SpawnSoundAtLocation", &UGameplayStatics::execSpawnSoundAtLocation },
			{ "SpawnSoundAttached", &UGameplayStatics::execSpawnSoundAttached },
			{ "SuggestProjectileVelocity_CustomArc", &UGameplayStatics::execSuggestProjectileVelocity_CustomArc },
			{ "UnloadStreamLevel", &UGameplayStatics::execUnloadStreamLevel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameplayStatics_ActivateReverbEffect_Statics
	{
		struct GameplayStatics_eventActivateReverbEffect_Parms
		{
			const UObject* WorldContextObject;
			UReverbEffect* ReverbEffect;
			FName TagName;
			float Priority;
			float Volume;
			float FadeTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Volume;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Priority;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TagName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReverbEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_ActivateReverbEffect_Statics::NewProp_FadeTime = { "FadeTime", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventActivateReverbEffect_Parms, FadeTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_ActivateReverbEffect_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventActivateReverbEffect_Parms, Volume), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_ActivateReverbEffect_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventActivateReverbEffect_Parms, Priority), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGameplayStatics_ActivateReverbEffect_Statics::NewProp_TagName = { "TagName", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventActivateReverbEffect_Parms, TagName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_ActivateReverbEffect_Statics::NewProp_ReverbEffect = { "ReverbEffect", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventActivateReverbEffect_Parms, ReverbEffect), Z_Construct_UClass_UReverbEffect_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_ActivateReverbEffect_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_ActivateReverbEffect_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventActivateReverbEffect_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_ActivateReverbEffect_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_ActivateReverbEffect_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_ActivateReverbEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_ActivateReverbEffect_Statics::NewProp_FadeTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_ActivateReverbEffect_Statics::NewProp_Volume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_ActivateReverbEffect_Statics::NewProp_Priority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_ActivateReverbEffect_Statics::NewProp_TagName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_ActivateReverbEffect_Statics::NewProp_ReverbEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_ActivateReverbEffect_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_ActivateReverbEffect_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "Audio" },
		{ "Comment", "/** Activates a Reverb Effect without the need for a volume\n\x09 * @param ReverbEffect Reverb Effect to use\n\x09 * @param TagName Tag to associate with Reverb Effect\n\x09 * @param Priority Priority of the Reverb Effect\n\x09 * @param Volume Volume level of Reverb Effect\n\x09 * @param FadeTime Time before Reverb Effect is fully active\n\x09 */" },
		{ "CPP_Default_FadeTime", "2.000000" },
		{ "CPP_Default_Priority", "0.000000" },
		{ "CPP_Default_Volume", "0.500000" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Activates a Reverb Effect without the need for a volume\n@param ReverbEffect Reverb Effect to use\n@param TagName Tag to associate with Reverb Effect\n@param Priority Priority of the Reverb Effect\n@param Volume Volume level of Reverb Effect\n@param FadeTime Time before Reverb Effect is fully active" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_ActivateReverbEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "ActivateReverbEffect", nullptr, nullptr, sizeof(GameplayStatics_eventActivateReverbEffect_Parms), Z_Construct_UFunction_UGameplayStatics_ActivateReverbEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_ActivateReverbEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_ActivateReverbEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_ActivateReverbEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_ActivateReverbEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_ActivateReverbEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_ApplyDamage_Statics
	{
		struct GameplayStatics_eventApplyDamage_Parms
		{
			AActor* DamagedActor;
			float BaseDamage;
			AController* EventInstigator;
			AActor* DamageCauser;
			TSubclassOf<UDamageType>  DamageTypeClass;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DamageTypeClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventInstigator;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseDamage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_ApplyDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventApplyDamage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGameplayStatics_ApplyDamage_Statics::NewProp_DamageTypeClass = { "DamageTypeClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventApplyDamage_Parms, DamageTypeClass), Z_Construct_UClass_UDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_ApplyDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventApplyDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_ApplyDamage_Statics::NewProp_EventInstigator = { "EventInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventApplyDamage_Parms, EventInstigator), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_ApplyDamage_Statics::NewProp_BaseDamage = { "BaseDamage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventApplyDamage_Parms, BaseDamage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_ApplyDamage_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventApplyDamage_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_ApplyDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_ApplyDamage_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_ApplyDamage_Statics::NewProp_DamageTypeClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_ApplyDamage_Statics::NewProp_DamageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_ApplyDamage_Statics::NewProp_EventInstigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_ApplyDamage_Statics::NewProp_BaseDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_ApplyDamage_Statics::NewProp_DamagedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_ApplyDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Damage" },
		{ "Comment", "/** Hurts the specified actor with generic damage.\n\x09 * @param DamagedActor - Actor that will be damaged.\n\x09 * @param BaseDamage - The base damage to apply.\n\x09 * @param EventInstigator - Controller that was responsible for causing this damage (e.g. player who shot the weapon)\n\x09 * @param DamageCauser - Actor that actually caused the damage (e.g. the grenade that exploded)\n\x09 * @param DamageTypeClass - Class that describes the damage that was done.\n\x09 * @return Actual damage the ended up being applied to the actor.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Hurts the specified actor with generic damage.\n@param DamagedActor - Actor that will be damaged.\n@param BaseDamage - The base damage to apply.\n@param EventInstigator - Controller that was responsible for causing this damage (e.g. player who shot the weapon)\n@param DamageCauser - Actor that actually caused the damage (e.g. the grenade that exploded)\n@param DamageTypeClass - Class that describes the damage that was done.\n@return Actual damage the ended up being applied to the actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_ApplyDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "ApplyDamage", nullptr, nullptr, sizeof(GameplayStatics_eventApplyDamage_Parms), Z_Construct_UFunction_UGameplayStatics_ApplyDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_ApplyDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_ApplyDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_ApplyDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_ApplyDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_ApplyDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_ApplyPointDamage_Statics
	{
		struct GameplayStatics_eventApplyPointDamage_Parms
		{
			AActor* DamagedActor;
			float BaseDamage;
			FVector HitFromDirection;
			FHitResult HitInfo;
			AController* EventInstigator;
			AActor* DamageCauser;
			TSubclassOf<UDamageType>  DamageTypeClass;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DamageTypeClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventInstigator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitFromDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitFromDirection;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseDamage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_ApplyPointDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventApplyPointDamage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGameplayStatics_ApplyPointDamage_Statics::NewProp_DamageTypeClass = { "DamageTypeClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventApplyPointDamage_Parms, DamageTypeClass), Z_Construct_UClass_UDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_ApplyPointDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventApplyPointDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_ApplyPointDamage_Statics::NewProp_EventInstigator = { "EventInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventApplyPointDamage_Parms, EventInstigator), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_ApplyPointDamage_Statics::NewProp_HitInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_ApplyPointDamage_Statics::NewProp_HitInfo = { "HitInfo", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventApplyPointDamage_Parms, HitInfo), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_ApplyPointDamage_Statics::NewProp_HitInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_ApplyPointDamage_Statics::NewProp_HitInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_ApplyPointDamage_Statics::NewProp_HitFromDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_ApplyPointDamage_Statics::NewProp_HitFromDirection = { "HitFromDirection", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventApplyPointDamage_Parms, HitFromDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_ApplyPointDamage_Statics::NewProp_HitFromDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_ApplyPointDamage_Statics::NewProp_HitFromDirection_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_ApplyPointDamage_Statics::NewProp_BaseDamage = { "BaseDamage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventApplyPointDamage_Parms, BaseDamage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_ApplyPointDamage_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventApplyPointDamage_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_ApplyPointDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_ApplyPointDamage_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_ApplyPointDamage_Statics::NewProp_DamageTypeClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_ApplyPointDamage_Statics::NewProp_DamageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_ApplyPointDamage_Statics::NewProp_EventInstigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_ApplyPointDamage_Statics::NewProp_HitInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_ApplyPointDamage_Statics::NewProp_HitFromDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_ApplyPointDamage_Statics::NewProp_BaseDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_ApplyPointDamage_Statics::NewProp_DamagedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_ApplyPointDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Damage" },
		{ "Comment", "/** Hurts the specified actor with the specified impact.\n\x09 * @param DamagedActor - Actor that will be damaged.\n\x09 * @param BaseDamage - The base damage to apply.\n\x09 * @param HitFromDirection - Direction the hit came FROM\n\x09 * @param HitInfo - Collision or trace result that describes the hit\n\x09 * @param EventInstigator - Controller that was responsible for causing this damage (e.g. player who shot the weapon)\n\x09 * @param DamageCauser - Actor that actually caused the damage (e.g. the grenade that exploded)\n\x09 * @param DamageTypeClass - Class that describes the damage that was done.\n\x09 * @return Actual damage the ended up being applied to the actor.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Hurts the specified actor with the specified impact.\n@param DamagedActor - Actor that will be damaged.\n@param BaseDamage - The base damage to apply.\n@param HitFromDirection - Direction the hit came FROM\n@param HitInfo - Collision or trace result that describes the hit\n@param EventInstigator - Controller that was responsible for causing this damage (e.g. player who shot the weapon)\n@param DamageCauser - Actor that actually caused the damage (e.g. the grenade that exploded)\n@param DamageTypeClass - Class that describes the damage that was done.\n@return Actual damage the ended up being applied to the actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_ApplyPointDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "ApplyPointDamage", nullptr, nullptr, sizeof(GameplayStatics_eventApplyPointDamage_Parms), Z_Construct_UFunction_UGameplayStatics_ApplyPointDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_ApplyPointDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_ApplyPointDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_ApplyPointDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_ApplyPointDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_ApplyPointDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamage_Statics
	{
		struct GameplayStatics_eventApplyRadialDamage_Parms
		{
			const UObject* WorldContextObject;
			float BaseDamage;
			FVector Origin;
			float DamageRadius;
			TSubclassOf<UDamageType>  DamageTypeClass;
			TArray<AActor*> IgnoreActors;
			AActor* DamageCauser;
			AController* InstigatedByController;
			bool bDoFullDamage;
			TEnumAsByte<ECollisionChannel> DamagePreventionChannel;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DamagePreventionChannel;
		static void NewProp_bDoFullDamage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoFullDamage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatedByController;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IgnoreActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IgnoreActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IgnoreActors_Inner;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DamageTypeClass;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Origin;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameplayStatics_eventApplyRadialDamage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventApplyRadialDamage_Parms), &Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamage_Statics::NewProp_DamagePreventionChannel = { "DamagePreventionChannel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventApplyRadialDamage_Parms, DamagePreventionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamage_Statics::NewProp_bDoFullDamage_SetBit(void* Obj)
	{
		((GameplayStatics_eventApplyRadialDamage_Parms*)Obj)->bDoFullDamage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamage_Statics::NewProp_bDoFullDamage = { "bDoFullDamage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventApplyRadialDamage_Parms), &Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamage_Statics::NewProp_bDoFullDamage_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamage_Statics::NewProp_InstigatedByController = { "InstigatedByController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventApplyRadialDamage_Parms, InstigatedByController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventApplyRadialDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamage_Statics::NewProp_IgnoreActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamage_Statics::NewProp_IgnoreActors = { "IgnoreActors", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventApplyRadialDamage_Parms, IgnoreActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamage_Statics::NewProp_IgnoreActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamage_Statics::NewProp_IgnoreActors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamage_Statics::NewProp_IgnoreActors_Inner = { "IgnoreActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamage_Statics::NewProp_DamageTypeClass = { "DamageTypeClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventApplyRadialDamage_Parms, DamageTypeClass), Z_Construct_UClass_UDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamage_Statics::NewProp_DamageRadius = { "DamageRadius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventApplyRadialDamage_Parms, DamageRadius), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamage_Statics::NewProp_Origin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamage_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventApplyRadialDamage_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamage_Statics::NewProp_Origin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamage_Statics::NewProp_Origin_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamage_Statics::NewProp_BaseDamage = { "BaseDamage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventApplyRadialDamage_Parms, BaseDamage), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamage_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamage_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventApplyRadialDamage_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamage_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamage_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamage_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamage_Statics::NewProp_DamagePreventionChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamage_Statics::NewProp_bDoFullDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamage_Statics::NewProp_InstigatedByController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamage_Statics::NewProp_DamageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamage_Statics::NewProp_IgnoreActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamage_Statics::NewProp_IgnoreActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamage_Statics::NewProp_DamageTypeClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamage_Statics::NewProp_DamageRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamage_Statics::NewProp_Origin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamage_Statics::NewProp_BaseDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamage_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamage_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "IgnoreActors" },
		{ "Category", "Game|Damage" },
		{ "Comment", "/** Hurt locally authoritative actors within the radius. Will only hit components that block the Visibility channel.\n\x09 * @param BaseDamage - The base damage to apply, i.e. the damage at the origin.\n\x09 * @param Origin - Epicenter of the damage area.\n\x09 * @param DamageRadius - Radius of the damage area, from Origin\n\x09 * @param DamageTypeClass - Class that describes the damage that was done.\n\x09 * @param DamageCauser - Actor that actually caused the damage (e.g. the grenade that exploded).  This actor will not be damaged and it will not block damage.\n\x09 * @param InstigatedByController - Controller that was responsible for causing this damage (e.g. player who threw the grenade)\n\x09 * @param bFullDamage - if true, damage not scaled based on distance from Origin\n\x09 * @param DamagePreventionChannel - Damage will not be applied to victim if there is something between the origin and the victim which blocks traces on this channel\n\x09 * @return true if damage was applied to at least one actor.\n\x09 */" },
		{ "CPP_Default_bDoFullDamage", "false" },
		{ "CPP_Default_DamageCauser", "None" },
		{ "CPP_Default_DamagePreventionChannel", "ECC_Visibility" },
		{ "CPP_Default_InstigatedByController", "None" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Hurt locally authoritative actors within the radius. Will only hit components that block the Visibility channel.\n@param BaseDamage - The base damage to apply, i.e. the damage at the origin.\n@param Origin - Epicenter of the damage area.\n@param DamageRadius - Radius of the damage area, from Origin\n@param DamageTypeClass - Class that describes the damage that was done.\n@param DamageCauser - Actor that actually caused the damage (e.g. the grenade that exploded).  This actor will not be damaged and it will not block damage.\n@param InstigatedByController - Controller that was responsible for causing this damage (e.g. player who threw the grenade)\n@param bFullDamage - if true, damage not scaled based on distance from Origin\n@param DamagePreventionChannel - Damage will not be applied to victim if there is something between the origin and the victim which blocks traces on this channel\n@return true if damage was applied to at least one actor." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "ApplyRadialDamage", nullptr, nullptr, sizeof(GameplayStatics_eventApplyRadialDamage_Parms), Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamageWithFalloff_Statics
	{
		struct GameplayStatics_eventApplyRadialDamageWithFalloff_Parms
		{
			const UObject* WorldContextObject;
			float BaseDamage;
			float MinimumDamage;
			FVector Origin;
			float DamageInnerRadius;
			float DamageOuterRadius;
			float DamageFalloff;
			TSubclassOf<UDamageType>  DamageTypeClass;
			TArray<AActor*> IgnoreActors;
			AActor* DamageCauser;
			AController* InstigatedByController;
			TEnumAsByte<ECollisionChannel> DamagePreventionChannel;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DamagePreventionChannel;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatedByController;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IgnoreActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IgnoreActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IgnoreActors_Inner;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DamageTypeClass;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageFalloff;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageOuterRadius;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageInnerRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Origin;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinimumDamage;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamageWithFalloff_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameplayStatics_eventApplyRadialDamageWithFalloff_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamageWithFalloff_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventApplyRadialDamageWithFalloff_Parms), &Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamageWithFalloff_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamageWithFalloff_Statics::NewProp_DamagePreventionChannel = { "DamagePreventionChannel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventApplyRadialDamageWithFalloff_Parms, DamagePreventionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamageWithFalloff_Statics::NewProp_InstigatedByController = { "InstigatedByController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventApplyRadialDamageWithFalloff_Parms, InstigatedByController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamageWithFalloff_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventApplyRadialDamageWithFalloff_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamageWithFalloff_Statics::NewProp_IgnoreActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamageWithFalloff_Statics::NewProp_IgnoreActors = { "IgnoreActors", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventApplyRadialDamageWithFalloff_Parms, IgnoreActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamageWithFalloff_Statics::NewProp_IgnoreActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamageWithFalloff_Statics::NewProp_IgnoreActors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamageWithFalloff_Statics::NewProp_IgnoreActors_Inner = { "IgnoreActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamageWithFalloff_Statics::NewProp_DamageTypeClass = { "DamageTypeClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventApplyRadialDamageWithFalloff_Parms, DamageTypeClass), Z_Construct_UClass_UDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamageWithFalloff_Statics::NewProp_DamageFalloff = { "DamageFalloff", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventApplyRadialDamageWithFalloff_Parms, DamageFalloff), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamageWithFalloff_Statics::NewProp_DamageOuterRadius = { "DamageOuterRadius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventApplyRadialDamageWithFalloff_Parms, DamageOuterRadius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamageWithFalloff_Statics::NewProp_DamageInnerRadius = { "DamageInnerRadius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventApplyRadialDamageWithFalloff_Parms, DamageInnerRadius), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamageWithFalloff_Statics::NewProp_Origin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamageWithFalloff_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventApplyRadialDamageWithFalloff_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamageWithFalloff_Statics::NewProp_Origin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamageWithFalloff_Statics::NewProp_Origin_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamageWithFalloff_Statics::NewProp_MinimumDamage = { "MinimumDamage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventApplyRadialDamageWithFalloff_Parms, MinimumDamage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamageWithFalloff_Statics::NewProp_BaseDamage = { "BaseDamage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventApplyRadialDamageWithFalloff_Parms, BaseDamage), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamageWithFalloff_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamageWithFalloff_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventApplyRadialDamageWithFalloff_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamageWithFalloff_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamageWithFalloff_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamageWithFalloff_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamageWithFalloff_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamageWithFalloff_Statics::NewProp_DamagePreventionChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamageWithFalloff_Statics::NewProp_InstigatedByController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamageWithFalloff_Statics::NewProp_DamageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamageWithFalloff_Statics::NewProp_IgnoreActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamageWithFalloff_Statics::NewProp_IgnoreActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamageWithFalloff_Statics::NewProp_DamageTypeClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamageWithFalloff_Statics::NewProp_DamageFalloff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamageWithFalloff_Statics::NewProp_DamageOuterRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamageWithFalloff_Statics::NewProp_DamageInnerRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamageWithFalloff_Statics::NewProp_Origin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamageWithFalloff_Statics::NewProp_MinimumDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamageWithFalloff_Statics::NewProp_BaseDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamageWithFalloff_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamageWithFalloff_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "IgnoreActors" },
		{ "Category", "Game|Damage" },
		{ "Comment", "/** Hurt locally authoritative actors within the radius. Will only hit components that block the Visibility channel.\n\x09 * @param BaseDamage - The base damage to apply, i.e. the damage at the origin.\n\x09 * @param Origin - Epicenter of the damage area.\n\x09 * @param DamageInnerRadius - Radius of the full damage area, from Origin\n\x09 * @param DamageOuterRadius - Radius of the minimum damage area, from Origin\n\x09 * @param DamageFalloff - Falloff exponent of damage from DamageInnerRadius to DamageOuterRadius\n\x09 * @param DamageTypeClass - Class that describes the damage that was done.\n\x09 * @param DamageCauser - Actor that actually caused the damage (e.g. the grenade that exploded)\n\x09 * @param InstigatedByController - Controller that was responsible for causing this damage (e.g. player who threw the grenade)\n\x09 * @param bFullDamage - if true, damage not scaled based on distance from Origin\n\x09 * @param DamagePreventionChannel - Damage will not be applied to victim if there is something between the origin and the victim which blocks traces on this channel\n\x09 * @return true if damage was applied to at least one actor.\n\x09 */" },
		{ "CPP_Default_DamageCauser", "None" },
		{ "CPP_Default_DamagePreventionChannel", "ECC_Visibility" },
		{ "CPP_Default_InstigatedByController", "None" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Hurt locally authoritative actors within the radius. Will only hit components that block the Visibility channel.\n@param BaseDamage - The base damage to apply, i.e. the damage at the origin.\n@param Origin - Epicenter of the damage area.\n@param DamageInnerRadius - Radius of the full damage area, from Origin\n@param DamageOuterRadius - Radius of the minimum damage area, from Origin\n@param DamageFalloff - Falloff exponent of damage from DamageInnerRadius to DamageOuterRadius\n@param DamageTypeClass - Class that describes the damage that was done.\n@param DamageCauser - Actor that actually caused the damage (e.g. the grenade that exploded)\n@param InstigatedByController - Controller that was responsible for causing this damage (e.g. player who threw the grenade)\n@param bFullDamage - if true, damage not scaled based on distance from Origin\n@param DamagePreventionChannel - Damage will not be applied to victim if there is something between the origin and the victim which blocks traces on this channel\n@return true if damage was applied to at least one actor." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamageWithFalloff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "ApplyRadialDamageWithFalloff", nullptr, nullptr, sizeof(GameplayStatics_eventApplyRadialDamageWithFalloff_Parms), Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamageWithFalloff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamageWithFalloff_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamageWithFalloff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamageWithFalloff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamageWithFalloff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamageWithFalloff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_AreAnyListenersWithinRange_Statics
	{
		struct GameplayStatics_eventAreAnyListenersWithinRange_Parms
		{
			const UObject* WorldContextObject;
			FVector Location;
			float MaximumRange;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaximumRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameplayStatics_AreAnyListenersWithinRange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameplayStatics_eventAreAnyListenersWithinRange_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_AreAnyListenersWithinRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventAreAnyListenersWithinRange_Parms), &Z_Construct_UFunction_UGameplayStatics_AreAnyListenersWithinRange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_AreAnyListenersWithinRange_Statics::NewProp_MaximumRange = { "MaximumRange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventAreAnyListenersWithinRange_Parms, MaximumRange), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_AreAnyListenersWithinRange_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_AreAnyListenersWithinRange_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventAreAnyListenersWithinRange_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_AreAnyListenersWithinRange_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_AreAnyListenersWithinRange_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_AreAnyListenersWithinRange_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_AreAnyListenersWithinRange_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventAreAnyListenersWithinRange_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_AreAnyListenersWithinRange_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_AreAnyListenersWithinRange_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_AreAnyListenersWithinRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_AreAnyListenersWithinRange_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_AreAnyListenersWithinRange_Statics::NewProp_MaximumRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_AreAnyListenersWithinRange_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_AreAnyListenersWithinRange_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_AreAnyListenersWithinRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "Comment", "/**\n\x09 * Determines if any audio listeners are within range of the specified location\n\x09 * @param Location\x09\x09The location to potentially play a sound at\n\x09 * @param MaximumRange\x09The maximum distance away from Location that a listener can be\n\x09 * @note This will always return false if there is no audio device, or the audio device is disabled.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Determines if any audio listeners are within range of the specified location\n@param Location              The location to potentially play a sound at\n@param MaximumRange  The maximum distance away from Location that a listener can be\n@note This will always return false if there is no audio device, or the audio device is disabled." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_AreAnyListenersWithinRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "AreAnyListenersWithinRange", nullptr, nullptr, sizeof(GameplayStatics_eventAreAnyListenersWithinRange_Parms), Z_Construct_UFunction_UGameplayStatics_AreAnyListenersWithinRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_AreAnyListenersWithinRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_AreAnyListenersWithinRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_AreAnyListenersWithinRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_AreAnyListenersWithinRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_AreAnyListenersWithinRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_AreSubtitlesEnabled_Statics
	{
		struct GameplayStatics_eventAreSubtitlesEnabled_Parms
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
	void Z_Construct_UFunction_UGameplayStatics_AreSubtitlesEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameplayStatics_eventAreSubtitlesEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_AreSubtitlesEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventAreSubtitlesEnabled_Parms), &Z_Construct_UFunction_UGameplayStatics_AreSubtitlesEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_AreSubtitlesEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_AreSubtitlesEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_AreSubtitlesEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Subtitles" },
		{ "Comment", "/**\n\x09 * Returns whether or not subtitles are currently enabled.\n\x09 * @return true if subtitles are enabled.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Returns whether or not subtitles are currently enabled.\n@return true if subtitles are enabled." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_AreSubtitlesEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "AreSubtitlesEnabled", nullptr, nullptr, sizeof(GameplayStatics_eventAreSubtitlesEnabled_Parms), Z_Construct_UFunction_UGameplayStatics_AreSubtitlesEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_AreSubtitlesEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_AreSubtitlesEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_AreSubtitlesEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_AreSubtitlesEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_AreSubtitlesEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_BeginDeferredActorSpawnFromClass_Statics
	{
		struct GameplayStatics_eventBeginDeferredActorSpawnFromClass_Parms
		{
			const UObject* WorldContextObject;
			TSubclassOf<AActor>  ActorClass;
			FTransform SpawnTransform;
			ESpawnActorCollisionHandlingMethod CollisionHandlingOverride;
			AActor* Owner;
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CollisionHandlingOverride;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CollisionHandlingOverride_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnTransform;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_BeginDeferredActorSpawnFromClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventBeginDeferredActorSpawnFromClass_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_BeginDeferredActorSpawnFromClass_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventBeginDeferredActorSpawnFromClass_Parms, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameplayStatics_BeginDeferredActorSpawnFromClass_Statics::NewProp_CollisionHandlingOverride = { "CollisionHandlingOverride", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventBeginDeferredActorSpawnFromClass_Parms, CollisionHandlingOverride), Z_Construct_UEnum_Engine_ESpawnActorCollisionHandlingMethod, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameplayStatics_BeginDeferredActorSpawnFromClass_Statics::NewProp_CollisionHandlingOverride_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_BeginDeferredActorSpawnFromClass_Statics::NewProp_SpawnTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_BeginDeferredActorSpawnFromClass_Statics::NewProp_SpawnTransform = { "SpawnTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventBeginDeferredActorSpawnFromClass_Parms, SpawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_BeginDeferredActorSpawnFromClass_Statics::NewProp_SpawnTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_BeginDeferredActorSpawnFromClass_Statics::NewProp_SpawnTransform_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGameplayStatics_BeginDeferredActorSpawnFromClass_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventBeginDeferredActorSpawnFromClass_Parms, ActorClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_BeginDeferredActorSpawnFromClass_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_BeginDeferredActorSpawnFromClass_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventBeginDeferredActorSpawnFromClass_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_BeginDeferredActorSpawnFromClass_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_BeginDeferredActorSpawnFromClass_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_BeginDeferredActorSpawnFromClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_BeginDeferredActorSpawnFromClass_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_BeginDeferredActorSpawnFromClass_Statics::NewProp_Owner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_BeginDeferredActorSpawnFromClass_Statics::NewProp_CollisionHandlingOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_BeginDeferredActorSpawnFromClass_Statics::NewProp_CollisionHandlingOverride_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_BeginDeferredActorSpawnFromClass_Statics::NewProp_SpawnTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_BeginDeferredActorSpawnFromClass_Statics::NewProp_ActorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_BeginDeferredActorSpawnFromClass_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_BeginDeferredActorSpawnFromClass_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Spawning" },
		{ "Comment", "/** Spawns an instance of an actor class, but does not automatically run its construction script.  */" },
		{ "CPP_Default_CollisionHandlingOverride", "Undefined" },
		{ "CPP_Default_Owner", "None" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Spawns an instance of an actor class, but does not automatically run its construction script." },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_BeginDeferredActorSpawnFromClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "BeginDeferredActorSpawnFromClass", nullptr, nullptr, sizeof(GameplayStatics_eventBeginDeferredActorSpawnFromClass_Parms), Z_Construct_UFunction_UGameplayStatics_BeginDeferredActorSpawnFromClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_BeginDeferredActorSpawnFromClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_BeginDeferredActorSpawnFromClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_BeginDeferredActorSpawnFromClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_BeginDeferredActorSpawnFromClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_BeginDeferredActorSpawnFromClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_BeginSpawningActorFromBlueprint_Statics
	{
		struct GameplayStatics_eventBeginSpawningActorFromBlueprint_Parms
		{
			const UObject* WorldContextObject;
			const UBlueprint* Blueprint;
			FTransform SpawnTransform;
			bool bNoCollisionFail;
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_bNoCollisionFail_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNoCollisionFail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Blueprint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_BeginSpawningActorFromBlueprint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventBeginSpawningActorFromBlueprint_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGameplayStatics_BeginSpawningActorFromBlueprint_Statics::NewProp_bNoCollisionFail_SetBit(void* Obj)
	{
		((GameplayStatics_eventBeginSpawningActorFromBlueprint_Parms*)Obj)->bNoCollisionFail = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_BeginSpawningActorFromBlueprint_Statics::NewProp_bNoCollisionFail = { "bNoCollisionFail", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventBeginSpawningActorFromBlueprint_Parms), &Z_Construct_UFunction_UGameplayStatics_BeginSpawningActorFromBlueprint_Statics::NewProp_bNoCollisionFail_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_BeginSpawningActorFromBlueprint_Statics::NewProp_SpawnTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_BeginSpawningActorFromBlueprint_Statics::NewProp_SpawnTransform = { "SpawnTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventBeginSpawningActorFromBlueprint_Parms, SpawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_BeginSpawningActorFromBlueprint_Statics::NewProp_SpawnTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_BeginSpawningActorFromBlueprint_Statics::NewProp_SpawnTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_BeginSpawningActorFromBlueprint_Statics::NewProp_Blueprint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_BeginSpawningActorFromBlueprint_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventBeginSpawningActorFromBlueprint_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_BeginSpawningActorFromBlueprint_Statics::NewProp_Blueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_BeginSpawningActorFromBlueprint_Statics::NewProp_Blueprint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_BeginSpawningActorFromBlueprint_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_BeginSpawningActorFromBlueprint_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventBeginSpawningActorFromBlueprint_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_BeginSpawningActorFromBlueprint_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_BeginSpawningActorFromBlueprint_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_BeginSpawningActorFromBlueprint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_BeginSpawningActorFromBlueprint_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_BeginSpawningActorFromBlueprint_Statics::NewProp_bNoCollisionFail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_BeginSpawningActorFromBlueprint_Statics::NewProp_SpawnTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_BeginSpawningActorFromBlueprint_Statics::NewProp_Blueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_BeginSpawningActorFromBlueprint_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_BeginSpawningActorFromBlueprint_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Spawning" },
		{ "Comment", "/** Spawns an instance of a blueprint, but does not automatically run its construction script.  */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use BeginSpawningActorFromClass" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Spawns an instance of a blueprint, but does not automatically run its construction script." },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_BeginSpawningActorFromBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "BeginSpawningActorFromBlueprint", nullptr, nullptr, sizeof(GameplayStatics_eventBeginSpawningActorFromBlueprint_Parms), Z_Construct_UFunction_UGameplayStatics_BeginSpawningActorFromBlueprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_BeginSpawningActorFromBlueprint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_BeginSpawningActorFromBlueprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_BeginSpawningActorFromBlueprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_BeginSpawningActorFromBlueprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_BeginSpawningActorFromBlueprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_BeginSpawningActorFromClass_Statics
	{
		struct GameplayStatics_eventBeginSpawningActorFromClass_Parms
		{
			const UObject* WorldContextObject;
			TSubclassOf<AActor>  ActorClass;
			FTransform SpawnTransform;
			bool bNoCollisionFail;
			AActor* Owner;
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner;
		static void NewProp_bNoCollisionFail_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNoCollisionFail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnTransform;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_BeginSpawningActorFromClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventBeginSpawningActorFromClass_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_BeginSpawningActorFromClass_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventBeginSpawningActorFromClass_Parms, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGameplayStatics_BeginSpawningActorFromClass_Statics::NewProp_bNoCollisionFail_SetBit(void* Obj)
	{
		((GameplayStatics_eventBeginSpawningActorFromClass_Parms*)Obj)->bNoCollisionFail = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_BeginSpawningActorFromClass_Statics::NewProp_bNoCollisionFail = { "bNoCollisionFail", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventBeginSpawningActorFromClass_Parms), &Z_Construct_UFunction_UGameplayStatics_BeginSpawningActorFromClass_Statics::NewProp_bNoCollisionFail_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_BeginSpawningActorFromClass_Statics::NewProp_SpawnTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_BeginSpawningActorFromClass_Statics::NewProp_SpawnTransform = { "SpawnTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventBeginSpawningActorFromClass_Parms, SpawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_BeginSpawningActorFromClass_Statics::NewProp_SpawnTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_BeginSpawningActorFromClass_Statics::NewProp_SpawnTransform_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGameplayStatics_BeginSpawningActorFromClass_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventBeginSpawningActorFromClass_Parms, ActorClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_BeginSpawningActorFromClass_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_BeginSpawningActorFromClass_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventBeginSpawningActorFromClass_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_BeginSpawningActorFromClass_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_BeginSpawningActorFromClass_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_BeginSpawningActorFromClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_BeginSpawningActorFromClass_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_BeginSpawningActorFromClass_Statics::NewProp_Owner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_BeginSpawningActorFromClass_Statics::NewProp_bNoCollisionFail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_BeginSpawningActorFromClass_Statics::NewProp_SpawnTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_BeginSpawningActorFromClass_Statics::NewProp_ActorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_BeginSpawningActorFromClass_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_BeginSpawningActorFromClass_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Spawning" },
		{ "CPP_Default_bNoCollisionFail", "false" },
		{ "CPP_Default_Owner", "None" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_BeginSpawningActorFromClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "BeginSpawningActorFromClass", nullptr, nullptr, sizeof(GameplayStatics_eventBeginSpawningActorFromClass_Parms), Z_Construct_UFunction_UGameplayStatics_BeginSpawningActorFromClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_BeginSpawningActorFromClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_BeginSpawningActorFromClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_BeginSpawningActorFromClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_BeginSpawningActorFromClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_BeginSpawningActorFromClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_Advanced_Statics
	{
		struct GameplayStatics_eventBlueprint_PredictProjectilePath_Advanced_Parms
		{
			const UObject* WorldContextObject;
			FPredictProjectilePathParams PredictParams;
			FPredictProjectilePathResult PredictResult;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PredictResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PredictParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PredictParams;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_Advanced_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameplayStatics_eventBlueprint_PredictProjectilePath_Advanced_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_Advanced_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventBlueprint_PredictProjectilePath_Advanced_Parms), &Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_Advanced_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_Advanced_Statics::NewProp_PredictResult = { "PredictResult", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventBlueprint_PredictProjectilePath_Advanced_Parms, PredictResult), Z_Construct_UScriptStruct_FPredictProjectilePathResult, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_Advanced_Statics::NewProp_PredictParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_Advanced_Statics::NewProp_PredictParams = { "PredictParams", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventBlueprint_PredictProjectilePath_Advanced_Parms, PredictParams), Z_Construct_UScriptStruct_FPredictProjectilePathParams, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_Advanced_Statics::NewProp_PredictParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_Advanced_Statics::NewProp_PredictParams_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_Advanced_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_Advanced_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventBlueprint_PredictProjectilePath_Advanced_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_Advanced_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_Advanced_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_Advanced_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_Advanced_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_Advanced_Statics::NewProp_PredictResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_Advanced_Statics::NewProp_PredictParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_Advanced_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_Advanced_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/**\n\x09* Predict the arc of a virtual projectile affected by gravity with collision checks along the arc.\n\x09* Returns true if it hit something.\n\x09*\n\x09* @param PredictParams\x09\x09\x09\x09Input params to the trace (start location, velocity, time to simulate, etc).\n\x09* @param PredictResult\x09\x09\x09\x09Output result of the trace (Hit result, array of location/velocity/times for each trace step, etc).\n\x09* @return\x09\x09\x09\x09\x09\x09\x09True if hit something along the path (if tracing with collision).\n\x09*/" },
		{ "DisplayName", "Predict Projectile Path (Advanced)" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Predict the arc of a virtual projectile affected by gravity with collision checks along the arc.\nReturns true if it hit something.\n\n@param PredictParams                          Input params to the trace (start location, velocity, time to simulate, etc).\n@param PredictResult                          Output result of the trace (Hit result, array of location/velocity/times for each trace step, etc).\n@return                                                       True if hit something along the path (if tracing with collision)." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_Advanced_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "Blueprint_PredictProjectilePath_Advanced", nullptr, nullptr, sizeof(GameplayStatics_eventBlueprint_PredictProjectilePath_Advanced_Parms), Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_Advanced_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_Advanced_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_Advanced_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_Advanced_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_Advanced()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_Advanced_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Statics
	{
		struct GameplayStatics_eventBlueprint_PredictProjectilePath_ByObjectType_Parms
		{
			const UObject* WorldContextObject;
			FHitResult OutHit;
			TArray<FVector> OutPathPositions;
			FVector OutLastTraceDestination;
			FVector StartPos;
			FVector LaunchVelocity;
			bool bTracePath;
			float ProjectileRadius;
			TArray<TEnumAsByte<EObjectTypeQuery> > ObjectTypes;
			bool bTraceComplex;
			TArray<AActor*> ActorsToIgnore;
			TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType;
			float DrawDebugTime;
			float SimFrequency;
			float MaxSimTime;
			float OverrideGravityZ;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OverrideGravityZ;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSimTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SimFrequency;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DrawDebugTime;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DrawDebugType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnore_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
		static void NewProp_bTraceComplex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ObjectTypes;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ObjectTypes_Inner;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProjectileRadius;
		static void NewProp_bTracePath_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTracePath;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LaunchVelocity;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartPos;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutLastTraceDestination;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutPathPositions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutPathPositions_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutHit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameplayStatics_eventBlueprint_PredictProjectilePath_ByObjectType_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventBlueprint_PredictProjectilePath_ByObjectType_Parms), &Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Statics::NewProp_OverrideGravityZ = { "OverrideGravityZ", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventBlueprint_PredictProjectilePath_ByObjectType_Parms, OverrideGravityZ), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Statics::NewProp_MaxSimTime = { "MaxSimTime", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventBlueprint_PredictProjectilePath_ByObjectType_Parms, MaxSimTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Statics::NewProp_SimFrequency = { "SimFrequency", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventBlueprint_PredictProjectilePath_ByObjectType_Parms, SimFrequency), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Statics::NewProp_DrawDebugTime = { "DrawDebugTime", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventBlueprint_PredictProjectilePath_ByObjectType_Parms, DrawDebugTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Statics::NewProp_DrawDebugType = { "DrawDebugType", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventBlueprint_PredictProjectilePath_ByObjectType_Parms, DrawDebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Statics::NewProp_ActorsToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventBlueprint_PredictProjectilePath_ByObjectType_Parms, ActorsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Statics::NewProp_ActorsToIgnore_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Statics::NewProp_ActorsToIgnore_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
	{
		((GameplayStatics_eventBlueprint_PredictProjectilePath_ByObjectType_Parms*)Obj)->bTraceComplex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventBlueprint_PredictProjectilePath_ByObjectType_Parms), &Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Statics::NewProp_ObjectTypes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Statics::NewProp_ObjectTypes = { "ObjectTypes", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventBlueprint_PredictProjectilePath_ByObjectType_Parms, ObjectTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Statics::NewProp_ObjectTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Statics::NewProp_ObjectTypes_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Statics::NewProp_ObjectTypes_Inner = { "ObjectTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Statics::NewProp_ProjectileRadius = { "ProjectileRadius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventBlueprint_PredictProjectilePath_ByObjectType_Parms, ProjectileRadius), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Statics::NewProp_bTracePath_SetBit(void* Obj)
	{
		((GameplayStatics_eventBlueprint_PredictProjectilePath_ByObjectType_Parms*)Obj)->bTracePath = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Statics::NewProp_bTracePath = { "bTracePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventBlueprint_PredictProjectilePath_ByObjectType_Parms), &Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Statics::NewProp_bTracePath_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Statics::NewProp_LaunchVelocity = { "LaunchVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventBlueprint_PredictProjectilePath_ByObjectType_Parms, LaunchVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Statics::NewProp_StartPos = { "StartPos", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventBlueprint_PredictProjectilePath_ByObjectType_Parms, StartPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Statics::NewProp_OutLastTraceDestination = { "OutLastTraceDestination", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventBlueprint_PredictProjectilePath_ByObjectType_Parms, OutLastTraceDestination), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Statics::NewProp_OutPathPositions = { "OutPathPositions", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventBlueprint_PredictProjectilePath_ByObjectType_Parms, OutPathPositions), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Statics::NewProp_OutPathPositions_Inner = { "OutPathPositions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Statics::NewProp_OutHit = { "OutHit", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventBlueprint_PredictProjectilePath_ByObjectType_Parms, OutHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventBlueprint_PredictProjectilePath_ByObjectType_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Statics::NewProp_OverrideGravityZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Statics::NewProp_MaxSimTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Statics::NewProp_SimFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Statics::NewProp_DrawDebugTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Statics::NewProp_DrawDebugType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Statics::NewProp_ActorsToIgnore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Statics::NewProp_ActorsToIgnore_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Statics::NewProp_bTraceComplex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Statics::NewProp_ObjectTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Statics::NewProp_ObjectTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Statics::NewProp_ProjectileRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Statics::NewProp_bTracePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Statics::NewProp_LaunchVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Statics::NewProp_StartPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Statics::NewProp_OutLastTraceDestination,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Statics::NewProp_OutPathPositions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Statics::NewProp_OutPathPositions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Statics::NewProp_OutHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "DrawDebugTime, DrawDebugType, SimFrequency, MaxSimTime, OverrideGravityZ" },
		{ "AutoCreateRefTerm", "ActorsToIgnore" },
		{ "bTracePath", "TRUE" },
		{ "Category", "Game" },
		{ "Comment", "/**\n\x09* Predict the arc of a virtual projectile affected by gravity with collision checks along the arc. Returns a list of positions of the simulated arc and the destination reached by the simulation.\n\x09* Returns true if it hit something.\n\x09*\n\x09* @param OutPathPositions\x09\x09\x09Predicted projectile path. Ordered series of positions from StartPos to the end. Includes location at point of impact if it hit something.\n\x09* @param OutHit\x09\x09\x09\x09\x09\x09Predicted hit result, if the projectile will hit something\n\x09* @param OutLastTraceDestination\x09Goal position of the final trace it did. Will not be in the path if there is a hit.\n\x09* @param StartPos\x09\x09\x09\x09\x09""First start trace location\n\x09* @param LaunchVelocity\x09\x09\x09\x09Velocity the \"virtual projectile\" is launched at\n\x09* @param bTracePath\x09\x09\x09\x09\x09Trace along the entire path to look for blocking hits\n\x09* @param ProjectileRadius\x09\x09\x09Radius of the virtual projectile to sweep against the environment\n\x09* @param ObjectTypes\x09\x09\x09\x09ObjectTypes to trace against, if bTracePath is true.\n\x09* @param bTraceComplex\x09\x09\x09\x09Use TraceComplex (trace against triangles not primitives)\n\x09* @param ActorsToIgnore\x09\x09\x09\x09""Actors to exclude from the traces\n\x09* @param DrawDebugType\x09\x09\x09\x09""Debug type (one-frame, duration, persistent)\n\x09* @param DrawDebugTime\x09\x09\x09\x09""Duration of debug lines (only relevant for DrawDebugType::Duration)\n\x09* @param SimFrequency\x09\x09\x09\x09""Determines size of each sub-step in the simulation (chopping up MaxSimTime)\n\x09* @param MaxSimTime\x09\x09\x09\x09\x09Maximum simulation time for the virtual projectile.\n\x09* @param OverrideGravityZ\x09\x09\x09Optional override of Gravity (if 0, uses WorldGravityZ)\n\x09* @return\x09\x09\x09\x09\x09\x09\x09True if hit something along the path if tracing for collision.\n\x09*/" },
		{ "CPP_Default_MaxSimTime", "2.000000" },
		{ "CPP_Default_OverrideGravityZ", "0.000000" },
		{ "CPP_Default_SimFrequency", "15.000000" },
		{ "DisplayName", "Predict Projectile Path By ObjectType" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Predict the arc of a virtual projectile affected by gravity with collision checks along the arc. Returns a list of positions of the simulated arc and the destination reached by the simulation.\nReturns true if it hit something.\n\n@param OutPathPositions                       Predicted projectile path. Ordered series of positions from StartPos to the end. Includes location at point of impact if it hit something.\n@param OutHit                                         Predicted hit result, if the projectile will hit something\n@param OutLastTraceDestination        Goal position of the final trace it did. Will not be in the path if there is a hit.\n@param StartPos                                       First start trace location\n@param LaunchVelocity                         Velocity the \"virtual projectile\" is launched at\n@param bTracePath                                     Trace along the entire path to look for blocking hits\n@param ProjectileRadius                       Radius of the virtual projectile to sweep against the environment\n@param ObjectTypes                            ObjectTypes to trace against, if bTracePath is true.\n@param bTraceComplex                          Use TraceComplex (trace against triangles not primitives)\n@param ActorsToIgnore                         Actors to exclude from the traces\n@param DrawDebugType                          Debug type (one-frame, duration, persistent)\n@param DrawDebugTime                          Duration of debug lines (only relevant for DrawDebugType::Duration)\n@param SimFrequency                           Determines size of each sub-step in the simulation (chopping up MaxSimTime)\n@param MaxSimTime                                     Maximum simulation time for the virtual projectile.\n@param OverrideGravityZ                       Optional override of Gravity (if 0, uses WorldGravityZ)\n@return                                                       True if hit something along the path if tracing for collision." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "Blueprint_PredictProjectilePath_ByObjectType", nullptr, nullptr, sizeof(GameplayStatics_eventBlueprint_PredictProjectilePath_ByObjectType_Parms), Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByTraceChannel_Statics
	{
		struct GameplayStatics_eventBlueprint_PredictProjectilePath_ByTraceChannel_Parms
		{
			const UObject* WorldContextObject;
			FHitResult OutHit;
			TArray<FVector> OutPathPositions;
			FVector OutLastTraceDestination;
			FVector StartPos;
			FVector LaunchVelocity;
			bool bTracePath;
			float ProjectileRadius;
			TEnumAsByte<ECollisionChannel> TraceChannel;
			bool bTraceComplex;
			TArray<AActor*> ActorsToIgnore;
			TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType;
			float DrawDebugTime;
			float SimFrequency;
			float MaxSimTime;
			float OverrideGravityZ;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OverrideGravityZ;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSimTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SimFrequency;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DrawDebugTime;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DrawDebugType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnore_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
		static void NewProp_bTraceComplex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProjectileRadius;
		static void NewProp_bTracePath_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTracePath;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LaunchVelocity;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartPos;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutLastTraceDestination;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutPathPositions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutPathPositions_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutHit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByTraceChannel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameplayStatics_eventBlueprint_PredictProjectilePath_ByTraceChannel_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByTraceChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventBlueprint_PredictProjectilePath_ByTraceChannel_Parms), &Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByTraceChannel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByTraceChannel_Statics::NewProp_OverrideGravityZ = { "OverrideGravityZ", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventBlueprint_PredictProjectilePath_ByTraceChannel_Parms, OverrideGravityZ), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByTraceChannel_Statics::NewProp_MaxSimTime = { "MaxSimTime", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventBlueprint_PredictProjectilePath_ByTraceChannel_Parms, MaxSimTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByTraceChannel_Statics::NewProp_SimFrequency = { "SimFrequency", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventBlueprint_PredictProjectilePath_ByTraceChannel_Parms, SimFrequency), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByTraceChannel_Statics::NewProp_DrawDebugTime = { "DrawDebugTime", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventBlueprint_PredictProjectilePath_ByTraceChannel_Parms, DrawDebugTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByTraceChannel_Statics::NewProp_DrawDebugType = { "DrawDebugType", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventBlueprint_PredictProjectilePath_ByTraceChannel_Parms, DrawDebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByTraceChannel_Statics::NewProp_ActorsToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByTraceChannel_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventBlueprint_PredictProjectilePath_ByTraceChannel_Parms, ActorsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByTraceChannel_Statics::NewProp_ActorsToIgnore_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByTraceChannel_Statics::NewProp_ActorsToIgnore_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByTraceChannel_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByTraceChannel_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
	{
		((GameplayStatics_eventBlueprint_PredictProjectilePath_ByTraceChannel_Parms*)Obj)->bTraceComplex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByTraceChannel_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventBlueprint_PredictProjectilePath_ByTraceChannel_Parms), &Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByTraceChannel_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByTraceChannel_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventBlueprint_PredictProjectilePath_ByTraceChannel_Parms, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByTraceChannel_Statics::NewProp_ProjectileRadius = { "ProjectileRadius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventBlueprint_PredictProjectilePath_ByTraceChannel_Parms, ProjectileRadius), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByTraceChannel_Statics::NewProp_bTracePath_SetBit(void* Obj)
	{
		((GameplayStatics_eventBlueprint_PredictProjectilePath_ByTraceChannel_Parms*)Obj)->bTracePath = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByTraceChannel_Statics::NewProp_bTracePath = { "bTracePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventBlueprint_PredictProjectilePath_ByTraceChannel_Parms), &Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByTraceChannel_Statics::NewProp_bTracePath_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByTraceChannel_Statics::NewProp_LaunchVelocity = { "LaunchVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventBlueprint_PredictProjectilePath_ByTraceChannel_Parms, LaunchVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByTraceChannel_Statics::NewProp_StartPos = { "StartPos", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventBlueprint_PredictProjectilePath_ByTraceChannel_Parms, StartPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByTraceChannel_Statics::NewProp_OutLastTraceDestination = { "OutLastTraceDestination", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventBlueprint_PredictProjectilePath_ByTraceChannel_Parms, OutLastTraceDestination), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByTraceChannel_Statics::NewProp_OutPathPositions = { "OutPathPositions", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventBlueprint_PredictProjectilePath_ByTraceChannel_Parms, OutPathPositions), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByTraceChannel_Statics::NewProp_OutPathPositions_Inner = { "OutPathPositions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByTraceChannel_Statics::NewProp_OutHit = { "OutHit", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventBlueprint_PredictProjectilePath_ByTraceChannel_Parms, OutHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByTraceChannel_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByTraceChannel_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventBlueprint_PredictProjectilePath_ByTraceChannel_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByTraceChannel_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByTraceChannel_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByTraceChannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByTraceChannel_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByTraceChannel_Statics::NewProp_OverrideGravityZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByTraceChannel_Statics::NewProp_MaxSimTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByTraceChannel_Statics::NewProp_SimFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByTraceChannel_Statics::NewProp_DrawDebugTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByTraceChannel_Statics::NewProp_DrawDebugType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByTraceChannel_Statics::NewProp_ActorsToIgnore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByTraceChannel_Statics::NewProp_ActorsToIgnore_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByTraceChannel_Statics::NewProp_bTraceComplex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByTraceChannel_Statics::NewProp_TraceChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByTraceChannel_Statics::NewProp_ProjectileRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByTraceChannel_Statics::NewProp_bTracePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByTraceChannel_Statics::NewProp_LaunchVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByTraceChannel_Statics::NewProp_StartPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByTraceChannel_Statics::NewProp_OutLastTraceDestination,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByTraceChannel_Statics::NewProp_OutPathPositions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByTraceChannel_Statics::NewProp_OutPathPositions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByTraceChannel_Statics::NewProp_OutHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByTraceChannel_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByTraceChannel_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "DrawDebugTime, DrawDebugType, SimFrequency, MaxSimTime, OverrideGravityZ" },
		{ "AutoCreateRefTerm", "ActorsToIgnore" },
		{ "bTracePath", "TRUE" },
		{ "Category", "Game" },
		{ "Comment", "/**\n\x09* Predict the arc of a virtual projectile affected by gravity with collision checks along the arc. Returns a list of positions of the simulated arc and the destination reached by the simulation.\n\x09* Returns true if it hit something (if tracing with collision).\n\x09*\n\x09* @param OutPathPositions\x09\x09\x09Predicted projectile path. Ordered series of positions from StartPos to the end. Includes location at point of impact if it hit something.\n\x09* @param OutHit\x09\x09\x09\x09\x09\x09Predicted hit result, if the projectile will hit something\n\x09* @param OutLastTraceDestination\x09Goal position of the final trace it did. Will not be in the path if there is a hit.\n\x09* @param StartPos\x09\x09\x09\x09\x09""First start trace location\n\x09* @param LaunchVelocity\x09\x09\x09\x09Velocity the \"virtual projectile\" is launched at\n\x09* @param bTracePath\x09\x09\x09\x09\x09Trace along the entire path to look for blocking hits\n\x09* @param ProjectileRadius\x09\x09\x09Radius of the virtual projectile to sweep against the environment\n\x09* @param TraceChannel\x09\x09\x09\x09TraceChannel to trace against, if bTracePath is true.\n\x09* @param bTraceComplex\x09\x09\x09\x09Use TraceComplex (trace against triangles not primitives)\n\x09* @param ActorsToIgnore\x09\x09\x09\x09""Actors to exclude from the traces\n\x09* @param DrawDebugType\x09\x09\x09\x09""Debug type (one-frame, duration, persistent)\n\x09* @param DrawDebugTime\x09\x09\x09\x09""Duration of debug lines (only relevant for DrawDebugType::Duration)\n\x09* @param SimFrequency\x09\x09\x09\x09""Determines size of each sub-step in the simulation (chopping up MaxSimTime)\n\x09* @param MaxSimTime\x09\x09\x09\x09\x09Maximum simulation time for the virtual projectile.\n\x09* @param OverrideGravityZ\x09\x09\x09Optional override of Gravity (if 0, uses WorldGravityZ)\n\x09* @return\x09\x09\x09\x09\x09\x09\x09True if hit something along the path (if tracing with collision).\n\x09*/" },
		{ "CPP_Default_MaxSimTime", "2.000000" },
		{ "CPP_Default_OverrideGravityZ", "0.000000" },
		{ "CPP_Default_SimFrequency", "15.000000" },
		{ "DisplayName", "Predict Projectile Path By TraceChannel" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Predict the arc of a virtual projectile affected by gravity with collision checks along the arc. Returns a list of positions of the simulated arc and the destination reached by the simulation.\nReturns true if it hit something (if tracing with collision).\n\n@param OutPathPositions                       Predicted projectile path. Ordered series of positions from StartPos to the end. Includes location at point of impact if it hit something.\n@param OutHit                                         Predicted hit result, if the projectile will hit something\n@param OutLastTraceDestination        Goal position of the final trace it did. Will not be in the path if there is a hit.\n@param StartPos                                       First start trace location\n@param LaunchVelocity                         Velocity the \"virtual projectile\" is launched at\n@param bTracePath                                     Trace along the entire path to look for blocking hits\n@param ProjectileRadius                       Radius of the virtual projectile to sweep against the environment\n@param TraceChannel                           TraceChannel to trace against, if bTracePath is true.\n@param bTraceComplex                          Use TraceComplex (trace against triangles not primitives)\n@param ActorsToIgnore                         Actors to exclude from the traces\n@param DrawDebugType                          Debug type (one-frame, duration, persistent)\n@param DrawDebugTime                          Duration of debug lines (only relevant for DrawDebugType::Duration)\n@param SimFrequency                           Determines size of each sub-step in the simulation (chopping up MaxSimTime)\n@param MaxSimTime                                     Maximum simulation time for the virtual projectile.\n@param OverrideGravityZ                       Optional override of Gravity (if 0, uses WorldGravityZ)\n@return                                                       True if hit something along the path (if tracing with collision)." },
		{ "TraceChannel", "ECC_WorldDynamic" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByTraceChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "Blueprint_PredictProjectilePath_ByTraceChannel", nullptr, nullptr, sizeof(GameplayStatics_eventBlueprint_PredictProjectilePath_ByTraceChannel_Parms), Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByTraceChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByTraceChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByTraceChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByTraceChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByTraceChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByTraceChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_BlueprintSuggestProjectileVelocity_Statics
	{
		struct GameplayStatics_eventBlueprintSuggestProjectileVelocity_Parms
		{
			const UObject* WorldContextObject;
			FVector TossVelocity;
			FVector StartLocation;
			FVector EndLocation;
			float LaunchSpeed;
			float OverrideGravityZ;
			TEnumAsByte<ESuggestProjVelocityTraceOption::Type> TraceOption;
			float CollisionRadius;
			bool bFavorHighArc;
			bool bDrawDebug;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bDrawDebug_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawDebug;
		static void NewProp_bFavorHighArc_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFavorHighArc;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CollisionRadius;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TraceOption;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OverrideGravityZ;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LaunchSpeed;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TossVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameplayStatics_BlueprintSuggestProjectileVelocity_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameplayStatics_eventBlueprintSuggestProjectileVelocity_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_BlueprintSuggestProjectileVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventBlueprintSuggestProjectileVelocity_Parms), &Z_Construct_UFunction_UGameplayStatics_BlueprintSuggestProjectileVelocity_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGameplayStatics_BlueprintSuggestProjectileVelocity_Statics::NewProp_bDrawDebug_SetBit(void* Obj)
	{
		((GameplayStatics_eventBlueprintSuggestProjectileVelocity_Parms*)Obj)->bDrawDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_BlueprintSuggestProjectileVelocity_Statics::NewProp_bDrawDebug = { "bDrawDebug", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventBlueprintSuggestProjectileVelocity_Parms), &Z_Construct_UFunction_UGameplayStatics_BlueprintSuggestProjectileVelocity_Statics::NewProp_bDrawDebug_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGameplayStatics_BlueprintSuggestProjectileVelocity_Statics::NewProp_bFavorHighArc_SetBit(void* Obj)
	{
		((GameplayStatics_eventBlueprintSuggestProjectileVelocity_Parms*)Obj)->bFavorHighArc = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_BlueprintSuggestProjectileVelocity_Statics::NewProp_bFavorHighArc = { "bFavorHighArc", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventBlueprintSuggestProjectileVelocity_Parms), &Z_Construct_UFunction_UGameplayStatics_BlueprintSuggestProjectileVelocity_Statics::NewProp_bFavorHighArc_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_BlueprintSuggestProjectileVelocity_Statics::NewProp_CollisionRadius = { "CollisionRadius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventBlueprintSuggestProjectileVelocity_Parms, CollisionRadius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameplayStatics_BlueprintSuggestProjectileVelocity_Statics::NewProp_TraceOption = { "TraceOption", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventBlueprintSuggestProjectileVelocity_Parms, TraceOption), Z_Construct_UEnum_Engine_ESuggestProjVelocityTraceOption, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_BlueprintSuggestProjectileVelocity_Statics::NewProp_OverrideGravityZ = { "OverrideGravityZ", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventBlueprintSuggestProjectileVelocity_Parms, OverrideGravityZ), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_BlueprintSuggestProjectileVelocity_Statics::NewProp_LaunchSpeed = { "LaunchSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventBlueprintSuggestProjectileVelocity_Parms, LaunchSpeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_BlueprintSuggestProjectileVelocity_Statics::NewProp_EndLocation = { "EndLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventBlueprintSuggestProjectileVelocity_Parms, EndLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_BlueprintSuggestProjectileVelocity_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventBlueprintSuggestProjectileVelocity_Parms, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_BlueprintSuggestProjectileVelocity_Statics::NewProp_TossVelocity = { "TossVelocity", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventBlueprintSuggestProjectileVelocity_Parms, TossVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_BlueprintSuggestProjectileVelocity_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_BlueprintSuggestProjectileVelocity_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventBlueprintSuggestProjectileVelocity_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_BlueprintSuggestProjectileVelocity_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_BlueprintSuggestProjectileVelocity_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_BlueprintSuggestProjectileVelocity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_BlueprintSuggestProjectileVelocity_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_BlueprintSuggestProjectileVelocity_Statics::NewProp_bDrawDebug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_BlueprintSuggestProjectileVelocity_Statics::NewProp_bFavorHighArc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_BlueprintSuggestProjectileVelocity_Statics::NewProp_CollisionRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_BlueprintSuggestProjectileVelocity_Statics::NewProp_TraceOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_BlueprintSuggestProjectileVelocity_Statics::NewProp_OverrideGravityZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_BlueprintSuggestProjectileVelocity_Statics::NewProp_LaunchSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_BlueprintSuggestProjectileVelocity_Statics::NewProp_EndLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_BlueprintSuggestProjectileVelocity_Statics::NewProp_StartLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_BlueprintSuggestProjectileVelocity_Statics::NewProp_TossVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_BlueprintSuggestProjectileVelocity_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_BlueprintSuggestProjectileVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|ProjectileMovement" },
		{ "Comment", "/**\n\x09 * Calculates an launch velocity for a projectile to hit a specified point.\n\x09 * @param TossVelocity\x09\x09(output) Result launch velocity.\n\x09 * @param StartLocation\x09\x09Intended launch location\n\x09 * @param EndLocation\x09\x09""Desired landing location\n\x09 * @param LaunchSpeed\x09\x09""Desired launch speed\n\x09 * @param OverrideGravityZ\x09Optional gravity override.  0 means \"do not override\".\n\x09 * @param TraceOption\x09\x09""Controls whether or not to validate a clear path by tracing along the calculated arc\n\x09 * @param CollisionRadius\x09Radius of the projectile (assumed spherical), used when tracing\n\x09 * @param bFavorHighArc\x09\x09If true and there are 2 valid solutions, will return the higher arc.  If false, will favor the lower arc.\n\x09 * @param bDrawDebug\x09\x09When true, a debug arc is drawn (red for an invalid arc, green for a valid arc)\n\x09 * @return\x09\x09\x09\x09\x09Returns false if there is no valid solution or the valid solutions are blocked.  Returns true otherwise.\n\x09 */" },
		{ "DisplayName", "SuggestProjectileVelocity" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Calculates an launch velocity for a projectile to hit a specified point.\n@param TossVelocity          (output) Result launch velocity.\n@param StartLocation         Intended launch location\n@param EndLocation           Desired landing location\n@param LaunchSpeed           Desired launch speed\n@param OverrideGravityZ      Optional gravity override.  0 means \"do not override\".\n@param TraceOption           Controls whether or not to validate a clear path by tracing along the calculated arc\n@param CollisionRadius       Radius of the projectile (assumed spherical), used when tracing\n@param bFavorHighArc         If true and there are 2 valid solutions, will return the higher arc.  If false, will favor the lower arc.\n@param bDrawDebug            When true, a debug arc is drawn (red for an invalid arc, green for a valid arc)\n@return                                      Returns false if there is no valid solution or the valid solutions are blocked.  Returns true otherwise." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_BlueprintSuggestProjectileVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "BlueprintSuggestProjectileVelocity", nullptr, nullptr, sizeof(GameplayStatics_eventBlueprintSuggestProjectileVelocity_Parms), Z_Construct_UFunction_UGameplayStatics_BlueprintSuggestProjectileVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_BlueprintSuggestProjectileVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_BlueprintSuggestProjectileVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_BlueprintSuggestProjectileVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_BlueprintSuggestProjectileVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_BlueprintSuggestProjectileVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_BreakHitResult_Statics
	{
		struct GameplayStatics_eventBreakHitResult_Parms
		{
			FHitResult Hit;
			bool bBlockingHit;
			bool bInitialOverlap;
			float Time;
			float Distance;
			FVector Location;
			FVector ImpactPoint;
			FVector Normal;
			FVector ImpactNormal;
			UPhysicalMaterial* PhysMat;
			AActor* HitActor;
			UPrimitiveComponent* HitComponent;
			FName HitBoneName;
			int32 HitItem;
			int32 FaceIndex;
			FVector TraceStart;
			FVector TraceEnd;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TraceEnd;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TraceStart;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FaceIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HitItem;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_HitBoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhysMat;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImpactNormal;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normal;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImpactPoint;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
		static void NewProp_bInitialOverlap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInitialOverlap;
		static void NewProp_bBlockingHit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBlockingHit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_BreakHitResult_Statics::NewProp_TraceEnd = { "TraceEnd", nullptr, (EPropertyFlags)0x0010040000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventBreakHitResult_Parms, TraceEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_BreakHitResult_Statics::NewProp_TraceStart = { "TraceStart", nullptr, (EPropertyFlags)0x0010040000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventBreakHitResult_Parms, TraceStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameplayStatics_BreakHitResult_Statics::NewProp_FaceIndex = { "FaceIndex", nullptr, (EPropertyFlags)0x0010040000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventBreakHitResult_Parms, FaceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameplayStatics_BreakHitResult_Statics::NewProp_HitItem = { "HitItem", nullptr, (EPropertyFlags)0x0010040000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventBreakHitResult_Parms, HitItem), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGameplayStatics_BreakHitResult_Statics::NewProp_HitBoneName = { "HitBoneName", nullptr, (EPropertyFlags)0x0010040000000180, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventBreakHitResult_Parms, HitBoneName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_BreakHitResult_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_BreakHitResult_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010040000080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventBreakHitResult_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_BreakHitResult_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_BreakHitResult_Statics::NewProp_HitComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_BreakHitResult_Statics::NewProp_HitActor = { "HitActor", nullptr, (EPropertyFlags)0x0010040000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventBreakHitResult_Parms, HitActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_BreakHitResult_Statics::NewProp_PhysMat = { "PhysMat", nullptr, (EPropertyFlags)0x0010040000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventBreakHitResult_Parms, PhysMat), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_BreakHitResult_Statics::NewProp_ImpactNormal = { "ImpactNormal", nullptr, (EPropertyFlags)0x0010040000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventBreakHitResult_Parms, ImpactNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_BreakHitResult_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010040000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventBreakHitResult_Parms, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_BreakHitResult_Statics::NewProp_ImpactPoint = { "ImpactPoint", nullptr, (EPropertyFlags)0x0010040000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventBreakHitResult_Parms, ImpactPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_BreakHitResult_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010040000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventBreakHitResult_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_BreakHitResult_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010040000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventBreakHitResult_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_BreakHitResult_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010040000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventBreakHitResult_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGameplayStatics_BreakHitResult_Statics::NewProp_bInitialOverlap_SetBit(void* Obj)
	{
		((GameplayStatics_eventBreakHitResult_Parms*)Obj)->bInitialOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_BreakHitResult_Statics::NewProp_bInitialOverlap = { "bInitialOverlap", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventBreakHitResult_Parms), &Z_Construct_UFunction_UGameplayStatics_BreakHitResult_Statics::NewProp_bInitialOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGameplayStatics_BreakHitResult_Statics::NewProp_bBlockingHit_SetBit(void* Obj)
	{
		((GameplayStatics_eventBreakHitResult_Parms*)Obj)->bBlockingHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_BreakHitResult_Statics::NewProp_bBlockingHit = { "bBlockingHit", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventBreakHitResult_Parms), &Z_Construct_UFunction_UGameplayStatics_BreakHitResult_Statics::NewProp_bBlockingHit_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_BreakHitResult_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_BreakHitResult_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventBreakHitResult_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_BreakHitResult_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_BreakHitResult_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_BreakHitResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_BreakHitResult_Statics::NewProp_TraceEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_BreakHitResult_Statics::NewProp_TraceStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_BreakHitResult_Statics::NewProp_FaceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_BreakHitResult_Statics::NewProp_HitItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_BreakHitResult_Statics::NewProp_HitBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_BreakHitResult_Statics::NewProp_HitComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_BreakHitResult_Statics::NewProp_HitActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_BreakHitResult_Statics::NewProp_PhysMat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_BreakHitResult_Statics::NewProp_ImpactNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_BreakHitResult_Statics::NewProp_Normal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_BreakHitResult_Statics::NewProp_ImpactPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_BreakHitResult_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_BreakHitResult_Statics::NewProp_Distance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_BreakHitResult_Statics::NewProp_Time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_BreakHitResult_Statics::NewProp_bInitialOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_BreakHitResult_Statics::NewProp_bBlockingHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_BreakHitResult_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_BreakHitResult_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "Category", "Collision" },
		{ "Comment", "/** Extracts data from a HitResult. \n\x09 * @param Hit\x09\x09\x09The source HitResult.\n\x09 * @param bBlockingHit\x09True if there was a blocking hit, false otherwise.\n\x09 * @param bInitialOverlap True if the hit started in an initial overlap. In this case some other values should be interpreted differently. Time will be 0, ImpactPoint will equal Location, and normals will be equal and indicate a depenetration vector.\n\x09 * @param Time\x09\x09\x09'Time' of impact along trace direction ranging from [0.0 to 1.0) if there is a hit, indicating time between start and end. Equals 1.0 if there is no hit.\n\x09 * @param Distance\x09\x09The distance from the TraceStart to the Location in world space. This value is 0 if there was an initial overlap (trace started inside another colliding object).\n\x09 * @param Location\x09\x09Location of the hit in world space. If this was a swept shape test, this is the location where we can place the shape in the world where it will not penetrate.\n\x09 * @param Normal\x09\x09Normal of the hit in world space, for the object that was swept (e.g. for a sphere trace this points towards the sphere's center). Equal to ImpactNormal for line tests.\n\x09 * @param ImpactPoint\x09Location of the actual contact point of the trace shape with the surface of the hit object. Equal to Location in the case of an initial overlap.\n\x09 * @param ImpactNormal\x09Normal of the hit in world space, for the object that was hit by the sweep.\n\x09 * @param PhysMat\x09\x09Physical material that was hit. Must set bReturnPhysicalMaterial to true in the query params for this to be returned.\n\x09 * @param HitActor\x09\x09""Actor hit by the trace.\n\x09 * @param HitComponent\x09PrimitiveComponent hit by the trace.\n\x09 * @param HitBoneName\x09Name of the bone hit (valid only if we hit a skeletal mesh).\n\x09 * @param HitItem\x09\x09Primitive-specific data recording which item in the primitive was hit\n\x09 * @param FaceIndex\x09\x09If colliding with trimesh or landscape, index of face that was hit.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "NativeBreakFunc", "" },
		{ "ToolTip", "Extracts data from a HitResult.\n@param Hit                   The source HitResult.\n@param bBlockingHit  True if there was a blocking hit, false otherwise.\n@param bInitialOverlap True if the hit started in an initial overlap. In this case some other values should be interpreted differently. Time will be 0, ImpactPoint will equal Location, and normals will be equal and indicate a depenetration vector.\n@param Time                  'Time' of impact along trace direction ranging from [0.0 to 1.0) if there is a hit, indicating time between start and end. Equals 1.0 if there is no hit.\n@param Distance              The distance from the TraceStart to the Location in world space. This value is 0 if there was an initial overlap (trace started inside another colliding object).\n@param Location              Location of the hit in world space. If this was a swept shape test, this is the location where we can place the shape in the world where it will not penetrate.\n@param Normal                Normal of the hit in world space, for the object that was swept (e.g. for a sphere trace this points towards the sphere's center). Equal to ImpactNormal for line tests.\n@param ImpactPoint   Location of the actual contact point of the trace shape with the surface of the hit object. Equal to Location in the case of an initial overlap.\n@param ImpactNormal  Normal of the hit in world space, for the object that was hit by the sweep.\n@param PhysMat               Physical material that was hit. Must set bReturnPhysicalMaterial to true in the query params for this to be returned.\n@param HitActor              Actor hit by the trace.\n@param HitComponent  PrimitiveComponent hit by the trace.\n@param HitBoneName   Name of the bone hit (valid only if we hit a skeletal mesh).\n@param HitItem               Primitive-specific data recording which item in the primitive was hit\n@param FaceIndex             If colliding with trimesh or landscape, index of face that was hit." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_BreakHitResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "BreakHitResult", nullptr, nullptr, sizeof(GameplayStatics_eventBreakHitResult_Parms), Z_Construct_UFunction_UGameplayStatics_BreakHitResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_BreakHitResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_BreakHitResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_BreakHitResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_BreakHitResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_BreakHitResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_CancelAsyncLoading_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_CancelAsyncLoading_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Cancels all currently queued streaming packages */" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Cancels all currently queued streaming packages" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_CancelAsyncLoading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "CancelAsyncLoading", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_CancelAsyncLoading_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_CancelAsyncLoading_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_CancelAsyncLoading()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_CancelAsyncLoading_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_ClearSoundMixClassOverride_Statics
	{
		struct GameplayStatics_eventClearSoundMixClassOverride_Parms
		{
			const UObject* WorldContextObject;
			USoundMix* InSoundMixModifier;
			USoundClass* InSoundClass;
			float FadeOutTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeOutTime;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSoundClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSoundMixModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_ClearSoundMixClassOverride_Statics::NewProp_FadeOutTime = { "FadeOutTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventClearSoundMixClassOverride_Parms, FadeOutTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_ClearSoundMixClassOverride_Statics::NewProp_InSoundClass = { "InSoundClass", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventClearSoundMixClassOverride_Parms, InSoundClass), Z_Construct_UClass_USoundClass_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_ClearSoundMixClassOverride_Statics::NewProp_InSoundMixModifier = { "InSoundMixModifier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventClearSoundMixClassOverride_Parms, InSoundMixModifier), Z_Construct_UClass_USoundMix_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_ClearSoundMixClassOverride_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_ClearSoundMixClassOverride_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventClearSoundMixClassOverride_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_ClearSoundMixClassOverride_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_ClearSoundMixClassOverride_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_ClearSoundMixClassOverride_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_ClearSoundMixClassOverride_Statics::NewProp_FadeOutTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_ClearSoundMixClassOverride_Statics::NewProp_InSoundClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_ClearSoundMixClassOverride_Statics::NewProp_InSoundMixModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_ClearSoundMixClassOverride_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_ClearSoundMixClassOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Clears the override of the sound class adjuster in the given sound mix. If the override did not exist in the sound mix, this will do nothing.\n\x09 * @param InSoundMixModifier The sound mix to modify.\n\x09 * @param InSoundClass The sound class to override (or add) in the sound mix.\n\x09 * @param FadeOutTime The interpolation time to use to go from the current sound class adjuster override values to the non-override values.\n\x09*/" },
		{ "CPP_Default_FadeOutTime", "1.000000" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Clears the override of the sound class adjuster in the given sound mix. If the override did not exist in the sound mix, this will do nothing.\n@param InSoundMixModifier The sound mix to modify.\n@param InSoundClass The sound class to override (or add) in the sound mix.\n@param FadeOutTime The interpolation time to use to go from the current sound class adjuster override values to the non-override values." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_ClearSoundMixClassOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "ClearSoundMixClassOverride", nullptr, nullptr, sizeof(GameplayStatics_eventClearSoundMixClassOverride_Parms), Z_Construct_UFunction_UGameplayStatics_ClearSoundMixClassOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_ClearSoundMixClassOverride_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_ClearSoundMixClassOverride_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_ClearSoundMixClassOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_ClearSoundMixClassOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_ClearSoundMixClassOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_ClearSoundMixModifiers_Statics
	{
		struct GameplayStatics_eventClearSoundMixModifiers_Parms
		{
			const UObject* WorldContextObject;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_ClearSoundMixModifiers_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_ClearSoundMixModifiers_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventClearSoundMixModifiers_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_ClearSoundMixModifiers_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_ClearSoundMixModifiers_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_ClearSoundMixModifiers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_ClearSoundMixModifiers_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_ClearSoundMixModifiers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Clear all sound mix modifiers from the audio system **/" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Clear all sound mix modifiers from the audio system *" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_ClearSoundMixModifiers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "ClearSoundMixModifiers", nullptr, nullptr, sizeof(GameplayStatics_eventClearSoundMixModifiers_Parms), Z_Construct_UFunction_UGameplayStatics_ClearSoundMixModifiers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_ClearSoundMixModifiers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_ClearSoundMixModifiers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_ClearSoundMixModifiers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_ClearSoundMixModifiers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_ClearSoundMixModifiers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_CreatePlayer_Statics
	{
		struct GameplayStatics_eventCreatePlayer_Parms
		{
			const UObject* WorldContextObject;
			int32 ControllerId;
			bool bSpawnPlayerController;
			APlayerController* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_bSpawnPlayerController_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSpawnPlayerController;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ControllerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_CreatePlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventCreatePlayer_Parms, ReturnValue), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGameplayStatics_CreatePlayer_Statics::NewProp_bSpawnPlayerController_SetBit(void* Obj)
	{
		((GameplayStatics_eventCreatePlayer_Parms*)Obj)->bSpawnPlayerController = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_CreatePlayer_Statics::NewProp_bSpawnPlayerController = { "bSpawnPlayerController", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventCreatePlayer_Parms), &Z_Construct_UFunction_UGameplayStatics_CreatePlayer_Statics::NewProp_bSpawnPlayerController_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameplayStatics_CreatePlayer_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventCreatePlayer_Parms, ControllerId), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_CreatePlayer_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_CreatePlayer_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventCreatePlayer_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_CreatePlayer_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_CreatePlayer_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_CreatePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_CreatePlayer_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_CreatePlayer_Statics::NewProp_bSpawnPlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_CreatePlayer_Statics::NewProp_ControllerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_CreatePlayer_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_CreatePlayer_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "Game" },
		{ "Comment", "/** Create a new player for this game.  \n\x09 *  @param ControllerId     The ID of the controller that the should control the newly created player.  A value of -1 specifies to use the next available ID\n\x09 *  @param bSpawnPawn       Whether a player controller should be spawned immediately for this player. If false a player controller will not be created automatically until transition to the next map.\n\x09 *  @return                 The created player controller if one is created. \n\x09 */" },
		{ "CPP_Default_bSpawnPlayerController", "true" },
		{ "CPP_Default_ControllerId", "-1" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Create a new player for this game.\n@param ControllerId     The ID of the controller that the should control the newly created player.  A value of -1 specifies to use the next available ID\n@param bSpawnPawn       Whether a player controller should be spawned immediately for this player. If false a player controller will not be created automatically until transition to the next map.\n@return                 The created player controller if one is created." },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_CreatePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "CreatePlayer", nullptr, nullptr, sizeof(GameplayStatics_eventCreatePlayer_Parms), Z_Construct_UFunction_UGameplayStatics_CreatePlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_CreatePlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_CreatePlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_CreatePlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_CreatePlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_CreatePlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_CreateSaveGameObject_Statics
	{
		struct GameplayStatics_eventCreateSaveGameObject_Parms
		{
			TSubclassOf<USaveGame>  SaveGameClass;
			USaveGame* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SaveGameClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_CreateSaveGameObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventCreateSaveGameObject_Parms, ReturnValue), Z_Construct_UClass_USaveGame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGameplayStatics_CreateSaveGameObject_Statics::NewProp_SaveGameClass = { "SaveGameClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventCreateSaveGameObject_Parms, SaveGameClass), Z_Construct_UClass_USaveGame_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_CreateSaveGameObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_CreateSaveGameObject_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_CreateSaveGameObject_Statics::NewProp_SaveGameClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_CreateSaveGameObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveGame" },
		{ "Comment", "/** \n\x09 * Create a new, empty SaveGame object to set data on and then pass to SaveGameToSlot.\n\x09 * @param\x09SaveGameClass\x09""Class of SaveGame to create\n\x09 * @return\x09\x09\x09\x09\x09New SaveGame object to write data to\n\x09 */" },
		{ "DeterminesOutputType", "SaveGameClass" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Create a new, empty SaveGame object to set data on and then pass to SaveGameToSlot.\n@param       SaveGameClass   Class of SaveGame to create\n@return                                      New SaveGame object to write data to" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_CreateSaveGameObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "CreateSaveGameObject", nullptr, nullptr, sizeof(GameplayStatics_eventCreateSaveGameObject_Parms), Z_Construct_UFunction_UGameplayStatics_CreateSaveGameObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_CreateSaveGameObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_CreateSaveGameObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_CreateSaveGameObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_CreateSaveGameObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_CreateSaveGameObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_CreateSound2D_Statics
	{
		struct GameplayStatics_eventCreateSound2D_Parms
		{
			const UObject* WorldContextObject;
			USoundBase* Sound;
			float VolumeMultiplier;
			float PitchMultiplier;
			float StartTime;
			USoundConcurrency* ConcurrencySettings;
			bool bPersistAcrossLevelTransition;
			bool bAutoDestroy;
			UAudioComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_bAutoDestroy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy;
		static void NewProp_bPersistAcrossLevelTransition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPersistAcrossLevelTransition;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConcurrencySettings;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_CreateSound2D_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_CreateSound2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventCreateSound2D_Parms, ReturnValue), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_CreateSound2D_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_CreateSound2D_Statics::NewProp_ReturnValue_MetaData)) };
	void Z_Construct_UFunction_UGameplayStatics_CreateSound2D_Statics::NewProp_bAutoDestroy_SetBit(void* Obj)
	{
		((GameplayStatics_eventCreateSound2D_Parms*)Obj)->bAutoDestroy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_CreateSound2D_Statics::NewProp_bAutoDestroy = { "bAutoDestroy", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventCreateSound2D_Parms), &Z_Construct_UFunction_UGameplayStatics_CreateSound2D_Statics::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGameplayStatics_CreateSound2D_Statics::NewProp_bPersistAcrossLevelTransition_SetBit(void* Obj)
	{
		((GameplayStatics_eventCreateSound2D_Parms*)Obj)->bPersistAcrossLevelTransition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_CreateSound2D_Statics::NewProp_bPersistAcrossLevelTransition = { "bPersistAcrossLevelTransition", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventCreateSound2D_Parms), &Z_Construct_UFunction_UGameplayStatics_CreateSound2D_Statics::NewProp_bPersistAcrossLevelTransition_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_CreateSound2D_Statics::NewProp_ConcurrencySettings = { "ConcurrencySettings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventCreateSound2D_Parms, ConcurrencySettings), Z_Construct_UClass_USoundConcurrency_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_CreateSound2D_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventCreateSound2D_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_CreateSound2D_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventCreateSound2D_Parms, PitchMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_CreateSound2D_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventCreateSound2D_Parms, VolumeMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_CreateSound2D_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventCreateSound2D_Parms, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_CreateSound2D_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_CreateSound2D_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventCreateSound2D_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_CreateSound2D_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_CreateSound2D_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_CreateSound2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_CreateSound2D_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_CreateSound2D_Statics::NewProp_bAutoDestroy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_CreateSound2D_Statics::NewProp_bPersistAcrossLevelTransition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_CreateSound2D_Statics::NewProp_ConcurrencySettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_CreateSound2D_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_CreateSound2D_Statics::NewProp_PitchMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_CreateSound2D_Statics::NewProp_VolumeMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_CreateSound2D_Statics::NewProp_Sound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_CreateSound2D_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_CreateSound2D_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "Audio" },
		{ "Comment", "/**\n\x09 * Creates a sound with no attenuation, perfect for UI sounds. This does NOT play the sound\n\x09 *\n\x09 * * Not Replicated.\n\x09 * @param Sound - Sound to create.\n\x09 * @param VolumeMultiplier - Multiplied with the volume to make the sound louder or softer.\n\x09 * @param PitchMultiplier - Multiplies the pitch.\n\x09 * @param StartTime - How far in to the sound to begin playback at\n\x09 * @param ConcurrencySettings - Override concurrency settings package to play sound with\n\x09 * @param PersistAcrossLevelTransition - Whether the sound should continue to play when the map it was played in is unloaded\n\x09 * @param bAutoDestroy - Whether the returned audio component will be automatically cleaned up when the sound finishes (by completing or stopping) or whether it can be reactivated\n\x09 * @return An audio component to manipulate the created sound\n\x09 */" },
		{ "CPP_Default_bAutoDestroy", "true" },
		{ "CPP_Default_bPersistAcrossLevelTransition", "false" },
		{ "CPP_Default_ConcurrencySettings", "None" },
		{ "CPP_Default_PitchMultiplier", "1.000000" },
		{ "CPP_Default_StartTime", "0.000000" },
		{ "CPP_Default_VolumeMultiplier", "1.000000" },
		{ "Keywords", "play" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Creates a sound with no attenuation, perfect for UI sounds. This does NOT play the sound\n\n* Not Replicated.\n@param Sound - Sound to create.\n@param VolumeMultiplier - Multiplied with the volume to make the sound louder or softer.\n@param PitchMultiplier - Multiplies the pitch.\n@param StartTime - How far in to the sound to begin playback at\n@param ConcurrencySettings - Override concurrency settings package to play sound with\n@param PersistAcrossLevelTransition - Whether the sound should continue to play when the map it was played in is unloaded\n@param bAutoDestroy - Whether the returned audio component will be automatically cleaned up when the sound finishes (by completing or stopping) or whether it can be reactivated\n@return An audio component to manipulate the created sound" },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_CreateSound2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "CreateSound2D", nullptr, nullptr, sizeof(GameplayStatics_eventCreateSound2D_Parms), Z_Construct_UFunction_UGameplayStatics_CreateSound2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_CreateSound2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_CreateSound2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_CreateSound2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_CreateSound2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_CreateSound2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_DeactivateReverbEffect_Statics
	{
		struct GameplayStatics_eventDeactivateReverbEffect_Parms
		{
			const UObject* WorldContextObject;
			FName TagName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TagName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGameplayStatics_DeactivateReverbEffect_Statics::NewProp_TagName = { "TagName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventDeactivateReverbEffect_Parms, TagName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_DeactivateReverbEffect_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_DeactivateReverbEffect_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventDeactivateReverbEffect_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_DeactivateReverbEffect_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_DeactivateReverbEffect_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_DeactivateReverbEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_DeactivateReverbEffect_Statics::NewProp_TagName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_DeactivateReverbEffect_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_DeactivateReverbEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "Comment", "/**\n\x09 * Deactivates a Reverb Effect not applied by a volume\n\x09 *\n\x09 * @param TagName Tag associated with Reverb Effect to remove\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Deactivates a Reverb Effect not applied by a volume\n\n@param TagName Tag associated with Reverb Effect to remove" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_DeactivateReverbEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "DeactivateReverbEffect", nullptr, nullptr, sizeof(GameplayStatics_eventDeactivateReverbEffect_Parms), Z_Construct_UFunction_UGameplayStatics_DeactivateReverbEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_DeactivateReverbEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_DeactivateReverbEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_DeactivateReverbEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_DeactivateReverbEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_DeactivateReverbEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_DeleteGameInSlot_Statics
	{
		struct GameplayStatics_eventDeleteGameInSlot_Parms
		{
			FString SlotName;
			int32 UserIndex;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UserIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SlotName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameplayStatics_DeleteGameInSlot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameplayStatics_eventDeleteGameInSlot_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_DeleteGameInSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventDeleteGameInSlot_Parms), &Z_Construct_UFunction_UGameplayStatics_DeleteGameInSlot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_DeleteGameInSlot_Statics::NewProp_UserIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameplayStatics_DeleteGameInSlot_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventDeleteGameInSlot_Parms, UserIndex), METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_DeleteGameInSlot_Statics::NewProp_UserIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_DeleteGameInSlot_Statics::NewProp_UserIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_DeleteGameInSlot_Statics::NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameplayStatics_DeleteGameInSlot_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventDeleteGameInSlot_Parms, SlotName), METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_DeleteGameInSlot_Statics::NewProp_SlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_DeleteGameInSlot_Statics::NewProp_SlotName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_DeleteGameInSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_DeleteGameInSlot_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_DeleteGameInSlot_Statics::NewProp_UserIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_DeleteGameInSlot_Statics::NewProp_SlotName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_DeleteGameInSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveGame" },
		{ "Comment", "/**\n\x09 * Delete a save game in a particular slot.\n\x09 * @param SlotName\x09\x09\x09Name of save game slot to delete.\n\x09 * @param UserIndex\x09\x09\x09""For some platforms, master user index to identify the user doing the deletion.\n\x09 * @return\x09\x09\x09\x09\x09True if a file was actually able to be deleted. use DoesSaveGameExist to distinguish between delete failures and failure due to file not existing.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Delete a save game in a particular slot.\n@param SlotName                      Name of save game slot to delete.\n@param UserIndex                     For some platforms, master user index to identify the user doing the deletion.\n@return                                      True if a file was actually able to be deleted. use DoesSaveGameExist to distinguish between delete failures and failure due to file not existing." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_DeleteGameInSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "DeleteGameInSlot", nullptr, nullptr, sizeof(GameplayStatics_eventDeleteGameInSlot_Parms), Z_Construct_UFunction_UGameplayStatics_DeleteGameInSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_DeleteGameInSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_DeleteGameInSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_DeleteGameInSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_DeleteGameInSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_DeleteGameInSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_DeprojectScreenToWorld_Statics
	{
		struct GameplayStatics_eventDeprojectScreenToWorld_Parms
		{
			APlayerController* Player;
			FVector2D ScreenPosition;
			FVector WorldPosition;
			FVector WorldDirection;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldDirection;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScreenPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameplayStatics_DeprojectScreenToWorld_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameplayStatics_eventDeprojectScreenToWorld_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_DeprojectScreenToWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventDeprojectScreenToWorld_Parms), &Z_Construct_UFunction_UGameplayStatics_DeprojectScreenToWorld_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_DeprojectScreenToWorld_Statics::NewProp_WorldDirection = { "WorldDirection", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventDeprojectScreenToWorld_Parms, WorldDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_DeprojectScreenToWorld_Statics::NewProp_WorldPosition = { "WorldPosition", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventDeprojectScreenToWorld_Parms, WorldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_DeprojectScreenToWorld_Statics::NewProp_ScreenPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_DeprojectScreenToWorld_Statics::NewProp_ScreenPosition = { "ScreenPosition", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventDeprojectScreenToWorld_Parms, ScreenPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_DeprojectScreenToWorld_Statics::NewProp_ScreenPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_DeprojectScreenToWorld_Statics::NewProp_ScreenPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_DeprojectScreenToWorld_Statics::NewProp_Player_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_DeprojectScreenToWorld_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventDeprojectScreenToWorld_Parms, Player), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_DeprojectScreenToWorld_Statics::NewProp_Player_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_DeprojectScreenToWorld_Statics::NewProp_Player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_DeprojectScreenToWorld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_DeprojectScreenToWorld_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_DeprojectScreenToWorld_Statics::NewProp_WorldDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_DeprojectScreenToWorld_Statics::NewProp_WorldPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_DeprojectScreenToWorld_Statics::NewProp_ScreenPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_DeprojectScreenToWorld_Statics::NewProp_Player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_DeprojectScreenToWorld_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities" },
		{ "Comment", "/** \n\x09 * Transforms the given 2D screen space coordinate into a 3D world-space point and direction.\n\x09 * @param Player\x09\x09\x09""Deproject using this player's view.\n\x09 * @param ScreenPosition\x09""2D screen space to deproject.\n\x09 * @param WorldPosition\x09\x09(out) Corresponding 3D position in world space.\n\x09 * @param WorldDirection\x09(out) World space direction vector away from the camera at the given 2d point.\n\x09 */" },
		{ "Keywords", "unproject" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Transforms the given 2D screen space coordinate into a 3D world-space point and direction.\n@param Player                        Deproject using this player's view.\n@param ScreenPosition        2D screen space to deproject.\n@param WorldPosition         (out) Corresponding 3D position in world space.\n@param WorldDirection        (out) World space direction vector away from the camera at the given 2d point." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_DeprojectScreenToWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "DeprojectScreenToWorld", nullptr, nullptr, sizeof(GameplayStatics_eventDeprojectScreenToWorld_Parms), Z_Construct_UFunction_UGameplayStatics_DeprojectScreenToWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_DeprojectScreenToWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_DeprojectScreenToWorld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_DeprojectScreenToWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_DeprojectScreenToWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_DeprojectScreenToWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_DoesSaveGameExist_Statics
	{
		struct GameplayStatics_eventDoesSaveGameExist_Parms
		{
			FString SlotName;
			int32 UserIndex;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UserIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SlotName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameplayStatics_DoesSaveGameExist_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameplayStatics_eventDoesSaveGameExist_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_DoesSaveGameExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventDoesSaveGameExist_Parms), &Z_Construct_UFunction_UGameplayStatics_DoesSaveGameExist_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_DoesSaveGameExist_Statics::NewProp_UserIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameplayStatics_DoesSaveGameExist_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventDoesSaveGameExist_Parms, UserIndex), METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_DoesSaveGameExist_Statics::NewProp_UserIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_DoesSaveGameExist_Statics::NewProp_UserIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_DoesSaveGameExist_Statics::NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameplayStatics_DoesSaveGameExist_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventDoesSaveGameExist_Parms, SlotName), METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_DoesSaveGameExist_Statics::NewProp_SlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_DoesSaveGameExist_Statics::NewProp_SlotName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_DoesSaveGameExist_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_DoesSaveGameExist_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_DoesSaveGameExist_Statics::NewProp_UserIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_DoesSaveGameExist_Statics::NewProp_SlotName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_DoesSaveGameExist_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveGame" },
		{ "Comment", "/**\n\x09 * See if a save game exists with the specified name.\n\x09 * @param SlotName\x09\x09\x09Name of save game slot.\n\x09 * @param UserIndex\x09\x09\x09""For some platforms, master user index to identify the user doing the saving.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "See if a save game exists with the specified name.\n@param SlotName                      Name of save game slot.\n@param UserIndex                     For some platforms, master user index to identify the user doing the saving." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_DoesSaveGameExist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "DoesSaveGameExist", nullptr, nullptr, sizeof(GameplayStatics_eventDoesSaveGameExist_Parms), Z_Construct_UFunction_UGameplayStatics_DoesSaveGameExist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_DoesSaveGameExist_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_DoesSaveGameExist_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_DoesSaveGameExist_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_DoesSaveGameExist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_DoesSaveGameExist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_EnableLiveStreaming_Statics
	{
		struct GameplayStatics_eventEnableLiveStreaming_Parms
		{
			bool Enable;
		};
		static void NewProp_Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameplayStatics_EnableLiveStreaming_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((GameplayStatics_eventEnableLiveStreaming_Parms*)Obj)->Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_EnableLiveStreaming_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventEnableLiveStreaming_Parms), &Z_Construct_UFunction_UGameplayStatics_EnableLiveStreaming_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_EnableLiveStreaming_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_EnableLiveStreaming_Statics::NewProp_Enable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_EnableLiveStreaming_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/**\n\x09 * Toggle live DVR streaming.\n\x09 * @param Enable\x09\x09\x09If true enable streaming, otherwise disable.\n\x09 */" },
		{ "Enable", "true" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Toggle live DVR streaming.\n@param Enable                        If true enable streaming, otherwise disable." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_EnableLiveStreaming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "EnableLiveStreaming", nullptr, nullptr, sizeof(GameplayStatics_eventEnableLiveStreaming_Parms), Z_Construct_UFunction_UGameplayStatics_EnableLiveStreaming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_EnableLiveStreaming_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_EnableLiveStreaming_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_EnableLiveStreaming_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_EnableLiveStreaming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_EnableLiveStreaming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_FindCollisionUV_Statics
	{
		struct GameplayStatics_eventFindCollisionUV_Parms
		{
			FHitResult Hit;
			int32 UVChannel;
			FVector2D UV;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UV;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UVChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameplayStatics_FindCollisionUV_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameplayStatics_eventFindCollisionUV_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_FindCollisionUV_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventFindCollisionUV_Parms), &Z_Construct_UFunction_UGameplayStatics_FindCollisionUV_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_FindCollisionUV_Statics::NewProp_UV = { "UV", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventFindCollisionUV_Parms, UV), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameplayStatics_FindCollisionUV_Statics::NewProp_UVChannel = { "UVChannel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventFindCollisionUV_Parms, UVChannel), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_FindCollisionUV_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_FindCollisionUV_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventFindCollisionUV_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_FindCollisionUV_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_FindCollisionUV_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_FindCollisionUV_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_FindCollisionUV_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_FindCollisionUV_Statics::NewProp_UV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_FindCollisionUV_Statics::NewProp_UVChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_FindCollisionUV_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_FindCollisionUV_Statics::Function_MetaDataParams[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** \n\x09 *\x09Try and find the UV for a collision impact. Note this ONLY works if 'Support UV From Hit Results' is enabled in Physics Settings.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Try and find the UV for a collision impact. Note this ONLY works if 'Support UV From Hit Results' is enabled in Physics Settings." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_FindCollisionUV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "FindCollisionUV", nullptr, nullptr, sizeof(GameplayStatics_eventFindCollisionUV_Parms), Z_Construct_UFunction_UGameplayStatics_FindCollisionUV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_FindCollisionUV_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_FindCollisionUV_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_FindCollisionUV_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_FindCollisionUV()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_FindCollisionUV_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_FinishSpawningActor_Statics
	{
		struct GameplayStatics_eventFinishSpawningActor_Parms
		{
			AActor* Actor;
			FTransform SpawnTransform;
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnTransform;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_FinishSpawningActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventFinishSpawningActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_FinishSpawningActor_Statics::NewProp_SpawnTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_FinishSpawningActor_Statics::NewProp_SpawnTransform = { "SpawnTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventFinishSpawningActor_Parms, SpawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_FinishSpawningActor_Statics::NewProp_SpawnTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_FinishSpawningActor_Statics::NewProp_SpawnTransform_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_FinishSpawningActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventFinishSpawningActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_FinishSpawningActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_FinishSpawningActor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_FinishSpawningActor_Statics::NewProp_SpawnTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_FinishSpawningActor_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_FinishSpawningActor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Spawning" },
		{ "Comment", "/** 'Finish' spawning an actor.  This will run the construction script. */" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "'Finish' spawning an actor.  This will run the construction script." },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_FinishSpawningActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "FinishSpawningActor", nullptr, nullptr, sizeof(GameplayStatics_eventFinishSpawningActor_Parms), Z_Construct_UFunction_UGameplayStatics_FinishSpawningActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_FinishSpawningActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_FinishSpawningActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_FinishSpawningActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_FinishSpawningActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_FinishSpawningActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_FlushLevelStreaming_Statics
	{
		struct GameplayStatics_eventFlushLevelStreaming_Parms
		{
			const UObject* WorldContextObject;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_FlushLevelStreaming_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_FlushLevelStreaming_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventFlushLevelStreaming_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_FlushLevelStreaming_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_FlushLevelStreaming_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_FlushLevelStreaming_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_FlushLevelStreaming_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_FlushLevelStreaming_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Flushes level streaming in blocking fashion and returns when all sub-levels are loaded / visible / hidden */" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Flushes level streaming in blocking fashion and returns when all sub-levels are loaded / visible / hidden" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_FlushLevelStreaming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "FlushLevelStreaming", nullptr, nullptr, sizeof(GameplayStatics_eventFlushLevelStreaming_Parms), Z_Construct_UFunction_UGameplayStatics_FlushLevelStreaming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_FlushLevelStreaming_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_FlushLevelStreaming_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_FlushLevelStreaming_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_FlushLevelStreaming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_FlushLevelStreaming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_GetAccurateRealTime_Statics
	{
		struct GameplayStatics_eventGetAccurateRealTime_Parms
		{
			const UObject* WorldContextObject;
			int32 Seconds;
			float PartialSeconds;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PartialSeconds;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Seconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_GetAccurateRealTime_Statics::NewProp_PartialSeconds = { "PartialSeconds", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetAccurateRealTime_Parms, PartialSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameplayStatics_GetAccurateRealTime_Statics::NewProp_Seconds = { "Seconds", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetAccurateRealTime_Parms, Seconds), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetAccurateRealTime_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_GetAccurateRealTime_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetAccurateRealTime_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetAccurateRealTime_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetAccurateRealTime_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_GetAccurateRealTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetAccurateRealTime_Statics::NewProp_PartialSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetAccurateRealTime_Statics::NewProp_Seconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetAccurateRealTime_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetAccurateRealTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Time" },
		{ "Comment", "/** Returns time in seconds since the application was started. Unlike the other time functions this is accurate to the exact time this function is called instead of set once per frame. */" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Returns time in seconds since the application was started. Unlike the other time functions this is accurate to the exact time this function is called instead of set once per frame." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_GetAccurateRealTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "GetAccurateRealTime", nullptr, nullptr, sizeof(GameplayStatics_eventGetAccurateRealTime_Parms), Z_Construct_UFunction_UGameplayStatics_GetAccurateRealTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetAccurateRealTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetAccurateRealTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetAccurateRealTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_GetAccurateRealTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_GetAccurateRealTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_GetActorArrayAverageLocation_Statics
	{
		struct GameplayStatics_eventGetActorArrayAverageLocation_Parms
		{
			TArray<AActor*> Actors;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Actors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_GetActorArrayAverageLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetActorArrayAverageLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetActorArrayAverageLocation_Statics::NewProp_Actors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGameplayStatics_GetActorArrayAverageLocation_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetActorArrayAverageLocation_Parms, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetActorArrayAverageLocation_Statics::NewProp_Actors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetActorArrayAverageLocation_Statics::NewProp_Actors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_GetActorArrayAverageLocation_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_GetActorArrayAverageLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetActorArrayAverageLocation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetActorArrayAverageLocation_Statics::NewProp_Actors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetActorArrayAverageLocation_Statics::NewProp_Actors_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetActorArrayAverageLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Transformation" },
		{ "Comment", "/** Find the average location (centroid) of an array of Actors */" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Find the average location (centroid) of an array of Actors" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_GetActorArrayAverageLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "GetActorArrayAverageLocation", nullptr, nullptr, sizeof(GameplayStatics_eventGetActorArrayAverageLocation_Parms), Z_Construct_UFunction_UGameplayStatics_GetActorArrayAverageLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetActorArrayAverageLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetActorArrayAverageLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetActorArrayAverageLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_GetActorArrayAverageLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_GetActorArrayAverageLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_GetActorArrayBounds_Statics
	{
		struct GameplayStatics_eventGetActorArrayBounds_Parms
		{
			TArray<AActor*> Actors;
			bool bOnlyCollidingComponents;
			FVector Center;
			FVector BoxExtent;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoxExtent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Center;
		static void NewProp_bOnlyCollidingComponents_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnlyCollidingComponents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Actors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_GetActorArrayBounds_Statics::NewProp_BoxExtent = { "BoxExtent", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetActorArrayBounds_Parms, BoxExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_GetActorArrayBounds_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetActorArrayBounds_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGameplayStatics_GetActorArrayBounds_Statics::NewProp_bOnlyCollidingComponents_SetBit(void* Obj)
	{
		((GameplayStatics_eventGetActorArrayBounds_Parms*)Obj)->bOnlyCollidingComponents = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_GetActorArrayBounds_Statics::NewProp_bOnlyCollidingComponents = { "bOnlyCollidingComponents", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventGetActorArrayBounds_Parms), &Z_Construct_UFunction_UGameplayStatics_GetActorArrayBounds_Statics::NewProp_bOnlyCollidingComponents_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetActorArrayBounds_Statics::NewProp_Actors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGameplayStatics_GetActorArrayBounds_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetActorArrayBounds_Parms, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetActorArrayBounds_Statics::NewProp_Actors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetActorArrayBounds_Statics::NewProp_Actors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_GetActorArrayBounds_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_GetActorArrayBounds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetActorArrayBounds_Statics::NewProp_BoxExtent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetActorArrayBounds_Statics::NewProp_Center,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetActorArrayBounds_Statics::NewProp_bOnlyCollidingComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetActorArrayBounds_Statics::NewProp_Actors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetActorArrayBounds_Statics::NewProp_Actors_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetActorArrayBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** Bind the bounds of an array of Actors */" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Bind the bounds of an array of Actors" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_GetActorArrayBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "GetActorArrayBounds", nullptr, nullptr, sizeof(GameplayStatics_eventGetActorArrayBounds_Parms), Z_Construct_UFunction_UGameplayStatics_GetActorArrayBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetActorArrayBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetActorArrayBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetActorArrayBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_GetActorArrayBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_GetActorArrayBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_GetActorOfClass_Statics
	{
		struct GameplayStatics_eventGetActorOfClass_Parms
		{
			const UObject* WorldContextObject;
			TSubclassOf<AActor>  ActorClass;
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_GetActorOfClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetActorOfClass_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGameplayStatics_GetActorOfClass_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetActorOfClass_Parms, ActorClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetActorOfClass_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_GetActorOfClass_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetActorOfClass_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetActorOfClass_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetActorOfClass_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_GetActorOfClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetActorOfClass_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetActorOfClass_Statics::NewProp_ActorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetActorOfClass_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetActorOfClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities" },
		{ "Comment", "/** \n\x09 *\x09""Find the first Actor in the world of the specified class. \n\x09 *\x09This is a slow operation, use with caution e.g. do not use every frame.\n\x09 *\x09@param\x09""ActorClass\x09""Class of Actor to find. Must be specified or result will be empty.\n\x09 *\x09@return\x09\x09\x09\x09""Actor of the specified class.\n\x09 */" },
		{ "DeterminesOutputType", "ActorClass" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Find the first Actor in the world of the specified class.\nThis is a slow operation, use with caution e.g. do not use every frame.\n@param  ActorClass      Class of Actor to find. Must be specified or result will be empty.\n@return                         Actor of the specified class." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_GetActorOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "GetActorOfClass", nullptr, nullptr, sizeof(GameplayStatics_eventGetActorOfClass_Parms), Z_Construct_UFunction_UGameplayStatics_GetActorOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetActorOfClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetActorOfClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetActorOfClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_GetActorOfClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_GetActorOfClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_GetAllActorsOfClass_Statics
	{
		struct GameplayStatics_eventGetAllActorsOfClass_Parms
		{
			const UObject* WorldContextObject;
			TSubclassOf<AActor>  ActorClass;
			TArray<AActor*> OutActors;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutActors_Inner;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGameplayStatics_GetAllActorsOfClass_Statics::NewProp_OutActors = { "OutActors", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetAllActorsOfClass_Parms, OutActors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_GetAllActorsOfClass_Statics::NewProp_OutActors_Inner = { "OutActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGameplayStatics_GetAllActorsOfClass_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetAllActorsOfClass_Parms, ActorClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetAllActorsOfClass_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_GetAllActorsOfClass_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetAllActorsOfClass_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetAllActorsOfClass_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetAllActorsOfClass_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_GetAllActorsOfClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetAllActorsOfClass_Statics::NewProp_OutActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetAllActorsOfClass_Statics::NewProp_OutActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetAllActorsOfClass_Statics::NewProp_ActorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetAllActorsOfClass_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetAllActorsOfClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities" },
		{ "Comment", "/** \n\x09 *\x09""Find all Actors in the world of the specified class. \n\x09 *\x09This is a slow operation, use with caution e.g. do not use every frame.\n\x09 *\x09@param\x09""ActorClass\x09""Class of Actor to find. Must be specified or result array will be empty.\n\x09 *\x09@param\x09OutActors\x09Output array of Actors of the specified class.\n\x09 */" },
		{ "DeterminesOutputType", "ActorClass" },
		{ "DynamicOutputParam", "OutActors" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Find all Actors in the world of the specified class.\nThis is a slow operation, use with caution e.g. do not use every frame.\n@param  ActorClass      Class of Actor to find. Must be specified or result array will be empty.\n@param  OutActors       Output array of Actors of the specified class." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_GetAllActorsOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "GetAllActorsOfClass", nullptr, nullptr, sizeof(GameplayStatics_eventGetAllActorsOfClass_Parms), Z_Construct_UFunction_UGameplayStatics_GetAllActorsOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetAllActorsOfClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetAllActorsOfClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetAllActorsOfClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_GetAllActorsOfClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_GetAllActorsOfClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_GetAllActorsOfClassWithTag_Statics
	{
		struct GameplayStatics_eventGetAllActorsOfClassWithTag_Parms
		{
			const UObject* WorldContextObject;
			TSubclassOf<AActor>  ActorClass;
			FName Tag;
			TArray<AActor*> OutActors;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutActors_Inner;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tag;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGameplayStatics_GetAllActorsOfClassWithTag_Statics::NewProp_OutActors = { "OutActors", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetAllActorsOfClassWithTag_Parms, OutActors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_GetAllActorsOfClassWithTag_Statics::NewProp_OutActors_Inner = { "OutActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGameplayStatics_GetAllActorsOfClassWithTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetAllActorsOfClassWithTag_Parms, Tag), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGameplayStatics_GetAllActorsOfClassWithTag_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetAllActorsOfClassWithTag_Parms, ActorClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetAllActorsOfClassWithTag_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_GetAllActorsOfClassWithTag_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetAllActorsOfClassWithTag_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetAllActorsOfClassWithTag_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetAllActorsOfClassWithTag_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_GetAllActorsOfClassWithTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetAllActorsOfClassWithTag_Statics::NewProp_OutActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetAllActorsOfClassWithTag_Statics::NewProp_OutActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetAllActorsOfClassWithTag_Statics::NewProp_Tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetAllActorsOfClassWithTag_Statics::NewProp_ActorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetAllActorsOfClassWithTag_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetAllActorsOfClassWithTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities" },
		{ "Comment", "/**\n\x09 *\x09""Find all Actors in the world of the specified class with the specified tag.\n\x09 *\x09This is a slow operation, use with caution e.g. do not use every frame.\n\x09 *\x09@param\x09Tag\x09\x09\x09Tag to find. Must be specified or result array will be empty.\n\x09 *\x09@param\x09""ActorClass\x09""Class of Actor to find. Must be specified or result array will be empty.\n\x09 *\x09@param\x09OutActors\x09Output array of Actors of the specified tag.\n\x09 */" },
		{ "DeterminesOutputType", "ActorClass" },
		{ "DynamicOutputParam", "OutActors" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Find all Actors in the world of the specified class with the specified tag.\nThis is a slow operation, use with caution e.g. do not use every frame.\n@param  Tag                     Tag to find. Must be specified or result array will be empty.\n@param  ActorClass      Class of Actor to find. Must be specified or result array will be empty.\n@param  OutActors       Output array of Actors of the specified tag." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_GetAllActorsOfClassWithTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "GetAllActorsOfClassWithTag", nullptr, nullptr, sizeof(GameplayStatics_eventGetAllActorsOfClassWithTag_Parms), Z_Construct_UFunction_UGameplayStatics_GetAllActorsOfClassWithTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetAllActorsOfClassWithTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetAllActorsOfClassWithTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetAllActorsOfClassWithTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_GetAllActorsOfClassWithTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_GetAllActorsOfClassWithTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_GetAllActorsWithInterface_Statics
	{
		struct GameplayStatics_eventGetAllActorsWithInterface_Parms
		{
			const UObject* WorldContextObject;
			TSubclassOf<UInterface>  Interface;
			TArray<AActor*> OutActors;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutActors_Inner;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Interface;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGameplayStatics_GetAllActorsWithInterface_Statics::NewProp_OutActors = { "OutActors", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetAllActorsWithInterface_Parms, OutActors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_GetAllActorsWithInterface_Statics::NewProp_OutActors_Inner = { "OutActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGameplayStatics_GetAllActorsWithInterface_Statics::NewProp_Interface = { "Interface", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetAllActorsWithInterface_Parms, Interface), Z_Construct_UClass_UInterface, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetAllActorsWithInterface_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_GetAllActorsWithInterface_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetAllActorsWithInterface_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetAllActorsWithInterface_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetAllActorsWithInterface_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_GetAllActorsWithInterface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetAllActorsWithInterface_Statics::NewProp_OutActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetAllActorsWithInterface_Statics::NewProp_OutActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetAllActorsWithInterface_Statics::NewProp_Interface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetAllActorsWithInterface_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetAllActorsWithInterface_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities" },
		{ "Comment", "/** \n\x09 *\x09""Find all Actors in the world with the specified interface.\n\x09 *\x09This is a slow operation, use with caution e.g. do not use every frame.\n\x09 *\x09@param\x09Interface\x09Interface to find. Must be specified or result array will be empty.\n\x09 *\x09@param\x09OutActors\x09Output array of Actors of the specified interface.\n\x09 */" },
		{ "DeterminesOutputType", "Interface" },
		{ "DynamicOutputParam", "OutActors" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Find all Actors in the world with the specified interface.\nThis is a slow operation, use with caution e.g. do not use every frame.\n@param  Interface       Interface to find. Must be specified or result array will be empty.\n@param  OutActors       Output array of Actors of the specified interface." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_GetAllActorsWithInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "GetAllActorsWithInterface", nullptr, nullptr, sizeof(GameplayStatics_eventGetAllActorsWithInterface_Parms), Z_Construct_UFunction_UGameplayStatics_GetAllActorsWithInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetAllActorsWithInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetAllActorsWithInterface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetAllActorsWithInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_GetAllActorsWithInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_GetAllActorsWithInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_GetAllActorsWithTag_Statics
	{
		struct GameplayStatics_eventGetAllActorsWithTag_Parms
		{
			const UObject* WorldContextObject;
			FName Tag;
			TArray<AActor*> OutActors;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutActors_Inner;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGameplayStatics_GetAllActorsWithTag_Statics::NewProp_OutActors = { "OutActors", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetAllActorsWithTag_Parms, OutActors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_GetAllActorsWithTag_Statics::NewProp_OutActors_Inner = { "OutActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGameplayStatics_GetAllActorsWithTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetAllActorsWithTag_Parms, Tag), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetAllActorsWithTag_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_GetAllActorsWithTag_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetAllActorsWithTag_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetAllActorsWithTag_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetAllActorsWithTag_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_GetAllActorsWithTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetAllActorsWithTag_Statics::NewProp_OutActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetAllActorsWithTag_Statics::NewProp_OutActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetAllActorsWithTag_Statics::NewProp_Tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetAllActorsWithTag_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetAllActorsWithTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities" },
		{ "Comment", "/**\n\x09 *\x09""Find all Actors in the world with the specified tag.\n\x09 *\x09This is a slow operation, use with caution e.g. do not use every frame.\n\x09 *\x09@param\x09Tag\x09\x09\x09Tag to find. Must be specified or result array will be empty.\n\x09 *\x09@param\x09OutActors\x09Output array of Actors of the specified tag.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Find all Actors in the world with the specified tag.\nThis is a slow operation, use with caution e.g. do not use every frame.\n@param  Tag                     Tag to find. Must be specified or result array will be empty.\n@param  OutActors       Output array of Actors of the specified tag." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_GetAllActorsWithTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "GetAllActorsWithTag", nullptr, nullptr, sizeof(GameplayStatics_eventGetAllActorsWithTag_Parms), Z_Construct_UFunction_UGameplayStatics_GetAllActorsWithTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetAllActorsWithTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetAllActorsWithTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetAllActorsWithTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_GetAllActorsWithTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_GetAllActorsWithTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_GetAudioTimeSeconds_Statics
	{
		struct GameplayStatics_eventGetAudioTimeSeconds_Parms
		{
			const UObject* WorldContextObject;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_GetAudioTimeSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetAudioTimeSeconds_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetAudioTimeSeconds_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_GetAudioTimeSeconds_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetAudioTimeSeconds_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetAudioTimeSeconds_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetAudioTimeSeconds_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_GetAudioTimeSeconds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetAudioTimeSeconds_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetAudioTimeSeconds_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetAudioTimeSeconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Time" },
		{ "Comment", "/** Returns time in seconds since world was brought up for play, IS stopped when game pauses, NOT dilated/clamped. */" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Returns time in seconds since world was brought up for play, IS stopped when game pauses, NOT dilated/clamped." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_GetAudioTimeSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "GetAudioTimeSeconds", nullptr, nullptr, sizeof(GameplayStatics_eventGetAudioTimeSeconds_Parms), Z_Construct_UFunction_UGameplayStatics_GetAudioTimeSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetAudioTimeSeconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetAudioTimeSeconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetAudioTimeSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_GetAudioTimeSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_GetAudioTimeSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_GetClosestListenerLocation_Statics
	{
		struct GameplayStatics_eventGetClosestListenerLocation_Parms
		{
			const UObject* WorldContextObject;
			FVector Location;
			float MaximumRange;
			bool bAllowAttenuationOverride;
			FVector ListenerPosition;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ListenerPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowAttenuationOverride_MetaData[];
#endif
		static void NewProp_bAllowAttenuationOverride_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowAttenuationOverride;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaximumRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameplayStatics_GetClosestListenerLocation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameplayStatics_eventGetClosestListenerLocation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_GetClosestListenerLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventGetClosestListenerLocation_Parms), &Z_Construct_UFunction_UGameplayStatics_GetClosestListenerLocation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_GetClosestListenerLocation_Statics::NewProp_ListenerPosition = { "ListenerPosition", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetClosestListenerLocation_Parms, ListenerPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetClosestListenerLocation_Statics::NewProp_bAllowAttenuationOverride_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UGameplayStatics_GetClosestListenerLocation_Statics::NewProp_bAllowAttenuationOverride_SetBit(void* Obj)
	{
		((GameplayStatics_eventGetClosestListenerLocation_Parms*)Obj)->bAllowAttenuationOverride = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_GetClosestListenerLocation_Statics::NewProp_bAllowAttenuationOverride = { "bAllowAttenuationOverride", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventGetClosestListenerLocation_Parms), &Z_Construct_UFunction_UGameplayStatics_GetClosestListenerLocation_Statics::NewProp_bAllowAttenuationOverride_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetClosestListenerLocation_Statics::NewProp_bAllowAttenuationOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetClosestListenerLocation_Statics::NewProp_bAllowAttenuationOverride_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_GetClosestListenerLocation_Statics::NewProp_MaximumRange = { "MaximumRange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetClosestListenerLocation_Parms, MaximumRange), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetClosestListenerLocation_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_GetClosestListenerLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetClosestListenerLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetClosestListenerLocation_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetClosestListenerLocation_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetClosestListenerLocation_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_GetClosestListenerLocation_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetClosestListenerLocation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetClosestListenerLocation_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetClosestListenerLocation_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_GetClosestListenerLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetClosestListenerLocation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetClosestListenerLocation_Statics::NewProp_ListenerPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetClosestListenerLocation_Statics::NewProp_bAllowAttenuationOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetClosestListenerLocation_Statics::NewProp_MaximumRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetClosestListenerLocation_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetClosestListenerLocation_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetClosestListenerLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "Comment", "/**\n\x09 * Finds and returns the position of the closest listener to the specified location\n\x09 * @param Location\x09\x09\x09\x09\x09\x09The location from which we'd like to find the closest listener, in world space.\n\x09 * @param MaximumRange\x09\x09\x09\x09\x09The maximum distance away from Location that a listener can be.\n\x09 * @param bAllowAttenuationOverride\x09\x09True for the adjusted listener position (if attenuation override is set), false for the raw listener position (for panning)\n\x09 * @param ListenerPosition\x09\x09\x09\x09[Out] The position of the closest listener in world space, if found.\n\x09 * @return true if we've successfully found a listener within MaximumRange of Location, otherwise false.\n \x09 * @note This will always return false if there is no audio device, or the audio device is disabled.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Finds and returns the position of the closest listener to the specified location\n@param Location                                              The location from which we'd like to find the closest listener, in world space.\n@param MaximumRange                                  The maximum distance away from Location that a listener can be.\n@param bAllowAttenuationOverride             True for the adjusted listener position (if attenuation override is set), false for the raw listener position (for panning)\n@param ListenerPosition                              [Out] The position of the closest listener in world space, if found.\n@return true if we've successfully found a listener within MaximumRange of Location, otherwise false.\n@note This will always return false if there is no audio device, or the audio device is disabled." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_GetClosestListenerLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "GetClosestListenerLocation", nullptr, nullptr, sizeof(GameplayStatics_eventGetClosestListenerLocation_Parms), Z_Construct_UFunction_UGameplayStatics_GetClosestListenerLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetClosestListenerLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetClosestListenerLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetClosestListenerLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_GetClosestListenerLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_GetClosestListenerLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_GetCurrentLevelName_Statics
	{
		struct GameplayStatics_eventGetCurrentLevelName_Parms
		{
			const UObject* WorldContextObject;
			bool bRemovePrefixString;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static void NewProp_bRemovePrefixString_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRemovePrefixString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameplayStatics_GetCurrentLevelName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetCurrentLevelName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGameplayStatics_GetCurrentLevelName_Statics::NewProp_bRemovePrefixString_SetBit(void* Obj)
	{
		((GameplayStatics_eventGetCurrentLevelName_Parms*)Obj)->bRemovePrefixString = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_GetCurrentLevelName_Statics::NewProp_bRemovePrefixString = { "bRemovePrefixString", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventGetCurrentLevelName_Parms), &Z_Construct_UFunction_UGameplayStatics_GetCurrentLevelName_Statics::NewProp_bRemovePrefixString_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetCurrentLevelName_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_GetCurrentLevelName_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetCurrentLevelName_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetCurrentLevelName_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetCurrentLevelName_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_GetCurrentLevelName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetCurrentLevelName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetCurrentLevelName_Statics::NewProp_bRemovePrefixString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetCurrentLevelName_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetCurrentLevelName_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Game" },
		{ "Comment", "/**\n\x09* Get the name of the currently-open level.\n\x09*\n\x09* @param bRemovePrefixString\x09remove any streaming- or editor- added prefixes from the level name.\n\x09*/" },
		{ "CPP_Default_bRemovePrefixString", "true" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Get the name of the currently-open level.\n\n@param bRemovePrefixString    remove any streaming- or editor- added prefixes from the level name." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_GetCurrentLevelName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "GetCurrentLevelName", nullptr, nullptr, sizeof(GameplayStatics_eventGetCurrentLevelName_Parms), Z_Construct_UFunction_UGameplayStatics_GetCurrentLevelName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetCurrentLevelName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetCurrentLevelName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetCurrentLevelName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_GetCurrentLevelName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_GetCurrentLevelName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_GetCurrentReverbEffect_Statics
	{
		struct GameplayStatics_eventGetCurrentReverbEffect_Parms
		{
			const UObject* WorldContextObject;
			UReverbEffect* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_GetCurrentReverbEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetCurrentReverbEffect_Parms, ReturnValue), Z_Construct_UClass_UReverbEffect_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetCurrentReverbEffect_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_GetCurrentReverbEffect_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetCurrentReverbEffect_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetCurrentReverbEffect_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetCurrentReverbEffect_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_GetCurrentReverbEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetCurrentReverbEffect_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetCurrentReverbEffect_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetCurrentReverbEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** \n\x09 * Returns the highest priority reverb settings currently active from any source (volumes or manual setting).\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Returns the highest priority reverb settings currently active from any source (volumes or manual setting)." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_GetCurrentReverbEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "GetCurrentReverbEffect", nullptr, nullptr, sizeof(GameplayStatics_eventGetCurrentReverbEffect_Parms), Z_Construct_UFunction_UGameplayStatics_GetCurrentReverbEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetCurrentReverbEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetCurrentReverbEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetCurrentReverbEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_GetCurrentReverbEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_GetCurrentReverbEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_GetEnableWorldRendering_Statics
	{
		struct GameplayStatics_eventGetEnableWorldRendering_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameplayStatics_GetEnableWorldRendering_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameplayStatics_eventGetEnableWorldRendering_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_GetEnableWorldRendering_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventGetEnableWorldRendering_Parms), &Z_Construct_UFunction_UGameplayStatics_GetEnableWorldRendering_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetEnableWorldRendering_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_GetEnableWorldRendering_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetEnableWorldRendering_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetEnableWorldRendering_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetEnableWorldRendering_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_GetEnableWorldRendering_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetEnableWorldRendering_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetEnableWorldRendering_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetEnableWorldRendering_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09 * Returns the world rendering state\n\x09 * @return\x09Whether the world should be rendered or not\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Returns the world rendering state\n@return      Whether the world should be rendered or not" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_GetEnableWorldRendering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "GetEnableWorldRendering", nullptr, nullptr, sizeof(GameplayStatics_eventGetEnableWorldRendering_Parms), Z_Construct_UFunction_UGameplayStatics_GetEnableWorldRendering_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetEnableWorldRendering_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetEnableWorldRendering_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetEnableWorldRendering_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_GetEnableWorldRendering()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_GetEnableWorldRendering_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_GetGameInstance_Statics
	{
		struct GameplayStatics_eventGetGameInstance_Parms
		{
			const UObject* WorldContextObject;
			UGameInstance* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_GetGameInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetGameInstance_Parms, ReturnValue), Z_Construct_UClass_UGameInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetGameInstance_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_GetGameInstance_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetGameInstance_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetGameInstance_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetGameInstance_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_GetGameInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetGameInstance_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetGameInstance_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetGameInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Returns the game instance object  */" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Returns the game instance object" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_GetGameInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "GetGameInstance", nullptr, nullptr, sizeof(GameplayStatics_eventGetGameInstance_Parms), Z_Construct_UFunction_UGameplayStatics_GetGameInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetGameInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetGameInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetGameInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_GetGameInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_GetGameInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_GetGameMode_Statics
	{
		struct GameplayStatics_eventGetGameMode_Parms
		{
			const UObject* WorldContextObject;
			AGameModeBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_GetGameMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetGameMode_Parms, ReturnValue), Z_Construct_UClass_AGameModeBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetGameMode_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_GetGameMode_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetGameMode_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetGameMode_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetGameMode_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_GetGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetGameMode_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetGameMode_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetGameMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Returns the current GameModeBase or Null if it can't be retrieved, such as on the client */" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Returns the current GameModeBase or Null if it can't be retrieved, such as on the client" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_GetGameMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "GetGameMode", nullptr, nullptr, sizeof(GameplayStatics_eventGetGameMode_Parms), Z_Construct_UFunction_UGameplayStatics_GetGameMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetGameMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetGameMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetGameMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_GetGameMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_GetGameMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_GetGameState_Statics
	{
		struct GameplayStatics_eventGetGameState_Parms
		{
			const UObject* WorldContextObject;
			AGameStateBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_GetGameState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetGameState_Parms, ReturnValue), Z_Construct_UClass_AGameStateBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetGameState_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_GetGameState_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetGameState_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetGameState_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetGameState_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_GetGameState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetGameState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetGameState_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetGameState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Returns the current GameStateBase or Null if it can't be retrieved */" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Returns the current GameStateBase or Null if it can't be retrieved" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_GetGameState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "GetGameState", nullptr, nullptr, sizeof(GameplayStatics_eventGetGameState_Parms), Z_Construct_UFunction_UGameplayStatics_GetGameState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetGameState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetGameState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetGameState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_GetGameState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_GetGameState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_GetGlobalTimeDilation_Statics
	{
		struct GameplayStatics_eventGetGlobalTimeDilation_Parms
		{
			const UObject* WorldContextObject;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_GetGlobalTimeDilation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetGlobalTimeDilation_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetGlobalTimeDilation_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_GetGlobalTimeDilation_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetGlobalTimeDilation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetGlobalTimeDilation_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetGlobalTimeDilation_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_GetGlobalTimeDilation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetGlobalTimeDilation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetGlobalTimeDilation_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetGlobalTimeDilation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Time" },
		{ "Comment", "/**\n\x09 * Gets the current global time dilation.\n\x09 * @return Current time dilation.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Gets the current global time dilation.\n@return Current time dilation." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_GetGlobalTimeDilation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "GetGlobalTimeDilation", nullptr, nullptr, sizeof(GameplayStatics_eventGetGlobalTimeDilation_Parms), Z_Construct_UFunction_UGameplayStatics_GetGlobalTimeDilation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetGlobalTimeDilation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetGlobalTimeDilation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetGlobalTimeDilation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_GetGlobalTimeDilation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_GetGlobalTimeDilation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_GetIntOption_Statics
	{
		struct GameplayStatics_eventGetIntOption_Parms
		{
			FString Options;
			FString Key;
			int32 DefaultValue;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DefaultValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Options;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameplayStatics_GetIntOption_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetIntOption_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameplayStatics_GetIntOption_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetIntOption_Parms, DefaultValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetIntOption_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameplayStatics_GetIntOption_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetIntOption_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetIntOption_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetIntOption_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetIntOption_Statics::NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameplayStatics_GetIntOption_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetIntOption_Parms, Options), METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetIntOption_Statics::NewProp_Options_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetIntOption_Statics::NewProp_Options_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_GetIntOption_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetIntOption_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetIntOption_Statics::NewProp_DefaultValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetIntOption_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetIntOption_Statics::NewProp_Options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetIntOption_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Game Options" },
		{ "Comment", "/** \n\x09 * Find an option in the options string and return it as an integer.\n\x09 * @param Options\x09\x09The string containing the options.\n\x09 * @param Key\x09\x09\x09The key to find the value of in Options.\n\x09 * @return\x09\x09\x09\x09The value associated with Key as an integer if Key found in Options string, otherwise DefaultValue.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Find an option in the options string and return it as an integer.\n@param Options               The string containing the options.\n@param Key                   The key to find the value of in Options.\n@return                              The value associated with Key as an integer if Key found in Options string, otherwise DefaultValue." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_GetIntOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "GetIntOption", nullptr, nullptr, sizeof(GameplayStatics_eventGetIntOption_Parms), Z_Construct_UFunction_UGameplayStatics_GetIntOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetIntOption_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetIntOption_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetIntOption_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_GetIntOption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_GetIntOption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_GetKeyValue_Statics
	{
		struct GameplayStatics_eventGetKeyValue_Parms
		{
			FString Pair;
			FString Key;
			FString Value;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pair_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Pair;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameplayStatics_GetKeyValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetKeyValue_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameplayStatics_GetKeyValue_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetKeyValue_Parms, Key), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetKeyValue_Statics::NewProp_Pair_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameplayStatics_GetKeyValue_Statics::NewProp_Pair = { "Pair", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetKeyValue_Parms, Pair), METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetKeyValue_Statics::NewProp_Pair_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetKeyValue_Statics::NewProp_Pair_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_GetKeyValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetKeyValue_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetKeyValue_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetKeyValue_Statics::NewProp_Pair,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetKeyValue_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Game Options" },
		{ "Comment", "/** \n\x09 * Break up a key=value pair into its key and value. \n\x09 * @param Pair\x09\x09\x09The string containing a pair to split apart.\n\x09 * @param Key\x09\x09\x09(out) Key portion of Pair. If no = in string will be the same as Pair.\n\x09 * @param Value\x09\x09\x09(out) Value portion of Pair. If no = in string will be empty.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Break up a key=value pair into its key and value.\n@param Pair                  The string containing a pair to split apart.\n@param Key                   (out) Key portion of Pair. If no = in string will be the same as Pair.\n@param Value                 (out) Value portion of Pair. If no = in string will be empty." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_GetKeyValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "GetKeyValue", nullptr, nullptr, sizeof(GameplayStatics_eventGetKeyValue_Parms), Z_Construct_UFunction_UGameplayStatics_GetKeyValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetKeyValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetKeyValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetKeyValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_GetKeyValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_GetKeyValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_GetMaxAudioChannelCount_Statics
	{
		struct GameplayStatics_eventGetMaxAudioChannelCount_Parms
		{
			const UObject* WorldContextObject;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameplayStatics_GetMaxAudioChannelCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetMaxAudioChannelCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetMaxAudioChannelCount_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_GetMaxAudioChannelCount_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetMaxAudioChannelCount_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetMaxAudioChannelCount_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetMaxAudioChannelCount_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_GetMaxAudioChannelCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetMaxAudioChannelCount_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetMaxAudioChannelCount_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetMaxAudioChannelCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "Comment", "/**\n\x09 * Retrieves the max voice count currently used by the audio engine.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Retrieves the max voice count currently used by the audio engine." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_GetMaxAudioChannelCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "GetMaxAudioChannelCount", nullptr, nullptr, sizeof(GameplayStatics_eventGetMaxAudioChannelCount_Parms), Z_Construct_UFunction_UGameplayStatics_GetMaxAudioChannelCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetMaxAudioChannelCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetMaxAudioChannelCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetMaxAudioChannelCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_GetMaxAudioChannelCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_GetMaxAudioChannelCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_GetObjectClass_Statics
	{
		struct GameplayStatics_eventGetObjectClass_Parms
		{
			const UObject* Object;
			UClass* ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGameplayStatics_GetObjectClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetObjectClass_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetObjectClass_Statics::NewProp_Object_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_GetObjectClass_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetObjectClass_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetObjectClass_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetObjectClass_Statics::NewProp_Object_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_GetObjectClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetObjectClass_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetObjectClass_Statics::NewProp_Object,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetObjectClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities" },
		{ "Comment", "/** Returns the class of a passed in Object, will always be valid if Object is not NULL */" },
		{ "DeterminesOutputType", "Object" },
		{ "DisplayName", "GetClass" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Returns the class of a passed in Object, will always be valid if Object is not NULL" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_GetObjectClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "GetObjectClass", nullptr, nullptr, sizeof(GameplayStatics_eventGetObjectClass_Parms), Z_Construct_UFunction_UGameplayStatics_GetObjectClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetObjectClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetObjectClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetObjectClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_GetObjectClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_GetObjectClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_GetPlatformName_Statics
	{
		struct GameplayStatics_eventGetPlatformName_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameplayStatics_GetPlatformName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetPlatformName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_GetPlatformName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetPlatformName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetPlatformName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/**\n\x09 * Returns the string name of the current platform, to perform different behavior based on platform. \n\x09 * (Platform names include Windows, Mac, IOS, Android, PS4, XboxOne, Linux) */" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Returns the string name of the current platform, to perform different behavior based on platform.\n(Platform names include Windows, Mac, IOS, Android, PS4, XboxOne, Linux)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_GetPlatformName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "GetPlatformName", nullptr, nullptr, sizeof(GameplayStatics_eventGetPlatformName_Parms), Z_Construct_UFunction_UGameplayStatics_GetPlatformName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetPlatformName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetPlatformName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetPlatformName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_GetPlatformName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_GetPlatformName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_GetPlayerCameraManager_Statics
	{
		struct GameplayStatics_eventGetPlayerCameraManager_Parms
		{
			const UObject* WorldContextObject;
			int32 PlayerIndex;
			APlayerCameraManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_GetPlayerCameraManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetPlayerCameraManager_Parms, ReturnValue), Z_Construct_UClass_APlayerCameraManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameplayStatics_GetPlayerCameraManager_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetPlayerCameraManager_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetPlayerCameraManager_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_GetPlayerCameraManager_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetPlayerCameraManager_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetPlayerCameraManager_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetPlayerCameraManager_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_GetPlayerCameraManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetPlayerCameraManager_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetPlayerCameraManager_Statics::NewProp_PlayerIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetPlayerCameraManager_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetPlayerCameraManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Returns the player's camera manager for the specified player index */" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Returns the player's camera manager for the specified player index" },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_GetPlayerCameraManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "GetPlayerCameraManager", nullptr, nullptr, sizeof(GameplayStatics_eventGetPlayerCameraManager_Parms), Z_Construct_UFunction_UGameplayStatics_GetPlayerCameraManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetPlayerCameraManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetPlayerCameraManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetPlayerCameraManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_GetPlayerCameraManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_GetPlayerCameraManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_GetPlayerCharacter_Statics
	{
		struct GameplayStatics_eventGetPlayerCharacter_Parms
		{
			const UObject* WorldContextObject;
			int32 PlayerIndex;
			ACharacter* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_GetPlayerCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetPlayerCharacter_Parms, ReturnValue), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameplayStatics_GetPlayerCharacter_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetPlayerCharacter_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetPlayerCharacter_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_GetPlayerCharacter_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetPlayerCharacter_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetPlayerCharacter_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetPlayerCharacter_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_GetPlayerCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetPlayerCharacter_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetPlayerCharacter_Statics::NewProp_PlayerIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetPlayerCharacter_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetPlayerCharacter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Returns the player character (NULL if the player pawn doesn't exist OR is not a character) at the specified player index */" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Returns the player character (NULL if the player pawn doesn't exist OR is not a character) at the specified player index" },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_GetPlayerCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "GetPlayerCharacter", nullptr, nullptr, sizeof(GameplayStatics_eventGetPlayerCharacter_Parms), Z_Construct_UFunction_UGameplayStatics_GetPlayerCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetPlayerCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetPlayerCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetPlayerCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_GetPlayerCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_GetPlayerCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_GetPlayerController_Statics
	{
		struct GameplayStatics_eventGetPlayerController_Parms
		{
			const UObject* WorldContextObject;
			int32 PlayerIndex;
			APlayerController* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_GetPlayerController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetPlayerController_Parms, ReturnValue), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameplayStatics_GetPlayerController_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetPlayerController_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetPlayerController_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_GetPlayerController_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetPlayerController_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetPlayerController_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetPlayerController_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_GetPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetPlayerController_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetPlayerController_Statics::NewProp_PlayerIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetPlayerController_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetPlayerController_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Returns the player controller at the specified player index */" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Returns the player controller at the specified player index" },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_GetPlayerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "GetPlayerController", nullptr, nullptr, sizeof(GameplayStatics_eventGetPlayerController_Parms), Z_Construct_UFunction_UGameplayStatics_GetPlayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetPlayerController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetPlayerController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetPlayerController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_GetPlayerController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_GetPlayerController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_GetPlayerControllerFromID_Statics
	{
		struct GameplayStatics_eventGetPlayerControllerFromID_Parms
		{
			const UObject* WorldContextObject;
			int32 ControllerID;
			APlayerController* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ControllerID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_GetPlayerControllerFromID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetPlayerControllerFromID_Parms, ReturnValue), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameplayStatics_GetPlayerControllerFromID_Statics::NewProp_ControllerID = { "ControllerID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetPlayerControllerFromID_Parms, ControllerID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetPlayerControllerFromID_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_GetPlayerControllerFromID_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetPlayerControllerFromID_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetPlayerControllerFromID_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetPlayerControllerFromID_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_GetPlayerControllerFromID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetPlayerControllerFromID_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetPlayerControllerFromID_Statics::NewProp_ControllerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetPlayerControllerFromID_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetPlayerControllerFromID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Returns the player controller that has the given controller ID */" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Returns the player controller that has the given controller ID" },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_GetPlayerControllerFromID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "GetPlayerControllerFromID", nullptr, nullptr, sizeof(GameplayStatics_eventGetPlayerControllerFromID_Parms), Z_Construct_UFunction_UGameplayStatics_GetPlayerControllerFromID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetPlayerControllerFromID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetPlayerControllerFromID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetPlayerControllerFromID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_GetPlayerControllerFromID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_GetPlayerControllerFromID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_GetPlayerControllerID_Statics
	{
		struct GameplayStatics_eventGetPlayerControllerID_Parms
		{
			APlayerController* Player;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameplayStatics_GetPlayerControllerID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetPlayerControllerID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_GetPlayerControllerID_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetPlayerControllerID_Parms, Player), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_GetPlayerControllerID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetPlayerControllerID_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetPlayerControllerID_Statics::NewProp_Player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetPlayerControllerID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/** \n\x09* Gets what controller ID a Player is using\n\x09* @param Player\x09\x09The player controller of the player to get the ID of\n\x09* @return\x09\x09\x09The ID of the passed in player. -1 if there is no controller for the passed in player\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Gets what controller ID a Player is using\n@param Player         The player controller of the player to get the ID of\n@return                       The ID of the passed in player. -1 if there is no controller for the passed in player" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_GetPlayerControllerID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "GetPlayerControllerID", nullptr, nullptr, sizeof(GameplayStatics_eventGetPlayerControllerID_Parms), Z_Construct_UFunction_UGameplayStatics_GetPlayerControllerID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetPlayerControllerID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetPlayerControllerID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetPlayerControllerID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_GetPlayerControllerID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_GetPlayerControllerID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_GetPlayerPawn_Statics
	{
		struct GameplayStatics_eventGetPlayerPawn_Parms
		{
			const UObject* WorldContextObject;
			int32 PlayerIndex;
			APawn* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_GetPlayerPawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetPlayerPawn_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameplayStatics_GetPlayerPawn_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetPlayerPawn_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetPlayerPawn_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_GetPlayerPawn_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetPlayerPawn_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetPlayerPawn_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetPlayerPawn_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_GetPlayerPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetPlayerPawn_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetPlayerPawn_Statics::NewProp_PlayerIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetPlayerPawn_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetPlayerPawn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Returns the player pawn at the specified player index */" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Returns the player pawn at the specified player index" },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_GetPlayerPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "GetPlayerPawn", nullptr, nullptr, sizeof(GameplayStatics_eventGetPlayerPawn_Parms), Z_Construct_UFunction_UGameplayStatics_GetPlayerPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetPlayerPawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetPlayerPawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetPlayerPawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_GetPlayerPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_GetPlayerPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_GetRealTimeSeconds_Statics
	{
		struct GameplayStatics_eventGetRealTimeSeconds_Parms
		{
			const UObject* WorldContextObject;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_GetRealTimeSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetRealTimeSeconds_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetRealTimeSeconds_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_GetRealTimeSeconds_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetRealTimeSeconds_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetRealTimeSeconds_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetRealTimeSeconds_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_GetRealTimeSeconds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetRealTimeSeconds_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetRealTimeSeconds_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetRealTimeSeconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Time" },
		{ "Comment", "/** Returns time in seconds since world was brought up for play, does NOT stop when game pauses, NOT dilated/clamped */" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Returns time in seconds since world was brought up for play, does NOT stop when game pauses, NOT dilated/clamped" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_GetRealTimeSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "GetRealTimeSeconds", nullptr, nullptr, sizeof(GameplayStatics_eventGetRealTimeSeconds_Parms), Z_Construct_UFunction_UGameplayStatics_GetRealTimeSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetRealTimeSeconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetRealTimeSeconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetRealTimeSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_GetRealTimeSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_GetRealTimeSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_GetStreamingLevel_Statics
	{
		struct GameplayStatics_eventGetStreamingLevel_Parms
		{
			const UObject* WorldContextObject;
			FName PackageName;
			ULevelStreaming* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PackageName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_GetStreamingLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetStreamingLevel_Parms, ReturnValue), Z_Construct_UClass_ULevelStreaming_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGameplayStatics_GetStreamingLevel_Statics::NewProp_PackageName = { "PackageName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetStreamingLevel_Parms, PackageName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetStreamingLevel_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_GetStreamingLevel_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetStreamingLevel_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetStreamingLevel_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetStreamingLevel_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_GetStreamingLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetStreamingLevel_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetStreamingLevel_Statics::NewProp_PackageName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetStreamingLevel_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetStreamingLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Returns level streaming object with specified level package name */" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Returns level streaming object with specified level package name" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_GetStreamingLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "GetStreamingLevel", nullptr, nullptr, sizeof(GameplayStatics_eventGetStreamingLevel_Parms), Z_Construct_UFunction_UGameplayStatics_GetStreamingLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetStreamingLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetStreamingLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetStreamingLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_GetStreamingLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_GetStreamingLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_GetSurfaceType_Statics
	{
		struct GameplayStatics_eventGetSurfaceType_Parms
		{
			FHitResult Hit;
			TEnumAsByte<EPhysicalSurface> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameplayStatics_GetSurfaceType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetSurfaceType_Parms, ReturnValue), Z_Construct_UEnum_Engine_EPhysicalSurface, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetSurfaceType_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_GetSurfaceType_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetSurfaceType_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetSurfaceType_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetSurfaceType_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_GetSurfaceType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetSurfaceType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetSurfaceType_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetSurfaceType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** Returns the EPhysicalSurface type of the given Hit. \n\x09 * To edit surface type for your project, use ProjectSettings/Physics/PhysicalSurface section\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Returns the EPhysicalSurface type of the given Hit.\nTo edit surface type for your project, use ProjectSettings/Physics/PhysicalSurface section" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_GetSurfaceType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "GetSurfaceType", nullptr, nullptr, sizeof(GameplayStatics_eventGetSurfaceType_Parms), Z_Construct_UFunction_UGameplayStatics_GetSurfaceType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetSurfaceType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetSurfaceType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetSurfaceType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_GetSurfaceType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_GetSurfaceType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_GetTimeSeconds_Statics
	{
		struct GameplayStatics_eventGetTimeSeconds_Parms
		{
			const UObject* WorldContextObject;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_GetTimeSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetTimeSeconds_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetTimeSeconds_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_GetTimeSeconds_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetTimeSeconds_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetTimeSeconds_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetTimeSeconds_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_GetTimeSeconds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetTimeSeconds_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetTimeSeconds_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetTimeSeconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Time" },
		{ "Comment", "/** Returns time in seconds since world was brought up for play, adjusted by time dilation and IS stopped when game pauses */" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Returns time in seconds since world was brought up for play, adjusted by time dilation and IS stopped when game pauses" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_GetTimeSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "GetTimeSeconds", nullptr, nullptr, sizeof(GameplayStatics_eventGetTimeSeconds_Parms), Z_Construct_UFunction_UGameplayStatics_GetTimeSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetTimeSeconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetTimeSeconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetTimeSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_GetTimeSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_GetTimeSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_GetUnpausedTimeSeconds_Statics
	{
		struct GameplayStatics_eventGetUnpausedTimeSeconds_Parms
		{
			const UObject* WorldContextObject;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_GetUnpausedTimeSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetUnpausedTimeSeconds_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetUnpausedTimeSeconds_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_GetUnpausedTimeSeconds_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetUnpausedTimeSeconds_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetUnpausedTimeSeconds_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetUnpausedTimeSeconds_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_GetUnpausedTimeSeconds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetUnpausedTimeSeconds_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetUnpausedTimeSeconds_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetUnpausedTimeSeconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Time" },
		{ "Comment", "/** Returns time in seconds since world was brought up for play, adjusted by time dilation and IS NOT stopped when game pauses */" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Returns time in seconds since world was brought up for play, adjusted by time dilation and IS NOT stopped when game pauses" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_GetUnpausedTimeSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "GetUnpausedTimeSeconds", nullptr, nullptr, sizeof(GameplayStatics_eventGetUnpausedTimeSeconds_Parms), Z_Construct_UFunction_UGameplayStatics_GetUnpausedTimeSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetUnpausedTimeSeconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetUnpausedTimeSeconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetUnpausedTimeSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_GetUnpausedTimeSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_GetUnpausedTimeSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_GetViewportMouseCaptureMode_Statics
	{
		struct GameplayStatics_eventGetViewportMouseCaptureMode_Parms
		{
			const UObject* WorldContextObject;
			EMouseCaptureMode ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameplayStatics_GetViewportMouseCaptureMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetViewportMouseCaptureMode_Parms, ReturnValue), Z_Construct_UEnum_Engine_EMouseCaptureMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameplayStatics_GetViewportMouseCaptureMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetViewportMouseCaptureMode_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_GetViewportMouseCaptureMode_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetViewportMouseCaptureMode_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetViewportMouseCaptureMode_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetViewportMouseCaptureMode_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_GetViewportMouseCaptureMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetViewportMouseCaptureMode_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetViewportMouseCaptureMode_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetViewportMouseCaptureMode_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetViewportMouseCaptureMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities" },
		{ "Comment", "/**\n\x09 * Returns the current viewport mouse capture mode\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Returns the current viewport mouse capture mode" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_GetViewportMouseCaptureMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "GetViewportMouseCaptureMode", nullptr, nullptr, sizeof(GameplayStatics_eventGetViewportMouseCaptureMode_Parms), Z_Construct_UFunction_UGameplayStatics_GetViewportMouseCaptureMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetViewportMouseCaptureMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetViewportMouseCaptureMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetViewportMouseCaptureMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_GetViewportMouseCaptureMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_GetViewportMouseCaptureMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_GetViewProjectionMatrix_Statics
	{
		struct FMatrix
		{
			FPlane XPlane;
			FPlane YPlane;
			FPlane ZPlane;
			FPlane WPlane;
		};

		struct GameplayStatics_eventGetViewProjectionMatrix_Parms
		{
			FMinimalViewInfo DesiredView;
			FMatrix ViewMatrix;
			FMatrix ProjectionMatrix;
			FMatrix ViewProjectionMatrix;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ViewProjectionMatrix;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProjectionMatrix;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ViewMatrix;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DesiredView;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_GetViewProjectionMatrix_Statics::NewProp_ViewProjectionMatrix = { "ViewProjectionMatrix", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetViewProjectionMatrix_Parms, ViewProjectionMatrix), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_GetViewProjectionMatrix_Statics::NewProp_ProjectionMatrix = { "ProjectionMatrix", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetViewProjectionMatrix_Parms, ProjectionMatrix), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_GetViewProjectionMatrix_Statics::NewProp_ViewMatrix = { "ViewMatrix", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetViewProjectionMatrix_Parms, ViewMatrix), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_GetViewProjectionMatrix_Statics::NewProp_DesiredView = { "DesiredView", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetViewProjectionMatrix_Parms, DesiredView), Z_Construct_UScriptStruct_FMinimalViewInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_GetViewProjectionMatrix_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetViewProjectionMatrix_Statics::NewProp_ViewProjectionMatrix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetViewProjectionMatrix_Statics::NewProp_ProjectionMatrix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetViewProjectionMatrix_Statics::NewProp_ViewMatrix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetViewProjectionMatrix_Statics::NewProp_DesiredView,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetViewProjectionMatrix_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities" },
		{ "Comment", "/**\n\x09 * Returns the View Matrix, Projection Matrix and the View x Projection Matrix for a given view\n\x09 * @param DesiredView\x09\x09\x09""FMinimalViewInfo struct for a camera.\n\x09 * @param ViewMatrix\x09\x09\x09(out) Corresponding View Matrix\n\x09 * @param ProjectionMatrix\x09\x09(out) Corresponding Projection Matrix\n\x09 * @param ViewProjectionMatrix\x09(out) Corresponding View x Projection Matrix\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Returns the View Matrix, Projection Matrix and the View x Projection Matrix for a given view\n@param DesiredView                   FMinimalViewInfo struct for a camera.\n@param ViewMatrix                    (out) Corresponding View Matrix\n@param ProjectionMatrix              (out) Corresponding Projection Matrix\n@param ViewProjectionMatrix  (out) Corresponding View x Projection Matrix" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_GetViewProjectionMatrix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "GetViewProjectionMatrix", nullptr, nullptr, sizeof(GameplayStatics_eventGetViewProjectionMatrix_Parms), Z_Construct_UFunction_UGameplayStatics_GetViewProjectionMatrix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetViewProjectionMatrix_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetViewProjectionMatrix_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetViewProjectionMatrix_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_GetViewProjectionMatrix()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_GetViewProjectionMatrix_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_GetWorldDeltaSeconds_Statics
	{
		struct GameplayStatics_eventGetWorldDeltaSeconds_Parms
		{
			const UObject* WorldContextObject;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_GetWorldDeltaSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetWorldDeltaSeconds_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetWorldDeltaSeconds_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_GetWorldDeltaSeconds_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetWorldDeltaSeconds_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetWorldDeltaSeconds_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetWorldDeltaSeconds_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_GetWorldDeltaSeconds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetWorldDeltaSeconds_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetWorldDeltaSeconds_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetWorldDeltaSeconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Time" },
		{ "Comment", "/** Returns the frame delta time in seconds, adjusted by time dilation. */" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Returns the frame delta time in seconds, adjusted by time dilation." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_GetWorldDeltaSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "GetWorldDeltaSeconds", nullptr, nullptr, sizeof(GameplayStatics_eventGetWorldDeltaSeconds_Parms), Z_Construct_UFunction_UGameplayStatics_GetWorldDeltaSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetWorldDeltaSeconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetWorldDeltaSeconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetWorldDeltaSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_GetWorldDeltaSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_GetWorldDeltaSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_GetWorldOriginLocation_Statics
	{
		struct GameplayStatics_eventGetWorldOriginLocation_Parms
		{
			const UObject* WorldContextObject;
			FIntVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_GetWorldOriginLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetWorldOriginLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetWorldOriginLocation_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_GetWorldOriginLocation_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGetWorldOriginLocation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetWorldOriginLocation_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetWorldOriginLocation_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_GetWorldOriginLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetWorldOriginLocation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GetWorldOriginLocation_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GetWorldOriginLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Returns world origin current location. */" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Returns world origin current location." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_GetWorldOriginLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "GetWorldOriginLocation", nullptr, nullptr, sizeof(GameplayStatics_eventGetWorldOriginLocation_Parms), Z_Construct_UFunction_UGameplayStatics_GetWorldOriginLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetWorldOriginLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GetWorldOriginLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GetWorldOriginLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_GetWorldOriginLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_GetWorldOriginLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_GrassOverlappingSphereCount_Statics
	{
		struct GameplayStatics_eventGrassOverlappingSphereCount_Parms
		{
			const UObject* WorldContextObject;
			const UStaticMesh* StaticMesh;
			FVector CenterPosition;
			float Radius;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CenterPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameplayStatics_GrassOverlappingSphereCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGrassOverlappingSphereCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_GrassOverlappingSphereCount_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGrassOverlappingSphereCount_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_GrassOverlappingSphereCount_Statics::NewProp_CenterPosition = { "CenterPosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGrassOverlappingSphereCount_Parms, CenterPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GrassOverlappingSphereCount_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_GrassOverlappingSphereCount_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGrassOverlappingSphereCount_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GrassOverlappingSphereCount_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GrassOverlappingSphereCount_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GrassOverlappingSphereCount_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_GrassOverlappingSphereCount_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventGrassOverlappingSphereCount_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GrassOverlappingSphereCount_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GrassOverlappingSphereCount_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_GrassOverlappingSphereCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GrassOverlappingSphereCount_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GrassOverlappingSphereCount_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GrassOverlappingSphereCount_Statics::NewProp_CenterPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GrassOverlappingSphereCount_Statics::NewProp_StaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_GrassOverlappingSphereCount_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_GrassOverlappingSphereCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Foliage" },
		{ "Comment", "/**\n\x09* Counts how many grass foliage instances overlap a given sphere.\n\x09*\n\x09* @param\x09Mesh\x09\x09\x09The static mesh we are interested in counting.\n\x09* @param\x09""CenterPosition\x09The center position of the sphere.\n\x09* @param\x09Radius\x09\x09\x09The radius of the sphere.\n\x09*\n\x09* @return Number of foliage instances with their mesh set to Mesh that overlap the sphere.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Counts how many grass foliage instances overlap a given sphere.\n\n@param        Mesh                    The static mesh we are interested in counting.\n@param        CenterPosition  The center position of the sphere.\n@param        Radius                  The radius of the sphere.\n\n@return Number of foliage instances with their mesh set to Mesh that overlap the sphere." },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_GrassOverlappingSphereCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "GrassOverlappingSphereCount", nullptr, nullptr, sizeof(GameplayStatics_eventGrassOverlappingSphereCount_Parms), Z_Construct_UFunction_UGameplayStatics_GrassOverlappingSphereCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GrassOverlappingSphereCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_GrassOverlappingSphereCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_GrassOverlappingSphereCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_GrassOverlappingSphereCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_GrassOverlappingSphereCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_HasLaunchOption_Statics
	{
		struct GameplayStatics_eventHasLaunchOption_Parms
		{
			FString OptionToCheck;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptionToCheck_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OptionToCheck;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameplayStatics_HasLaunchOption_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameplayStatics_eventHasLaunchOption_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_HasLaunchOption_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventHasLaunchOption_Parms), &Z_Construct_UFunction_UGameplayStatics_HasLaunchOption_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_HasLaunchOption_Statics::NewProp_OptionToCheck_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameplayStatics_HasLaunchOption_Statics::NewProp_OptionToCheck = { "OptionToCheck", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventHasLaunchOption_Parms, OptionToCheck), METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_HasLaunchOption_Statics::NewProp_OptionToCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_HasLaunchOption_Statics::NewProp_OptionToCheck_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_HasLaunchOption_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_HasLaunchOption_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_HasLaunchOption_Statics::NewProp_OptionToCheck,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_HasLaunchOption_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities" },
		{ "Comment", "/**\n\x09* Checks the commandline to see if the desired option was specified on the commandline (e.g. -demobuild)\n\x09* @return\x09\x09\x09\x09True if the launch option was specified on the commandline, false otherwise\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Checks the commandline to see if the desired option was specified on the commandline (e.g. -demobuild)\n@return                               True if the launch option was specified on the commandline, false otherwise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_HasLaunchOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "HasLaunchOption", nullptr, nullptr, sizeof(GameplayStatics_eventHasLaunchOption_Parms), Z_Construct_UFunction_UGameplayStatics_HasLaunchOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_HasLaunchOption_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_HasLaunchOption_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_HasLaunchOption_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_HasLaunchOption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_HasLaunchOption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_HasOption_Statics
	{
		struct GameplayStatics_eventHasOption_Parms
		{
			FString Options;
			FString InKey;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InKey;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Options;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameplayStatics_HasOption_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameplayStatics_eventHasOption_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_HasOption_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventHasOption_Parms), &Z_Construct_UFunction_UGameplayStatics_HasOption_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_HasOption_Statics::NewProp_InKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameplayStatics_HasOption_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventHasOption_Parms, InKey), METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_HasOption_Statics::NewProp_InKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_HasOption_Statics::NewProp_InKey_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameplayStatics_HasOption_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventHasOption_Parms, Options), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_HasOption_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_HasOption_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_HasOption_Statics::NewProp_InKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_HasOption_Statics::NewProp_Options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_HasOption_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Game Options" },
		{ "Comment", "/** \n\x09 * Returns whether a key exists in an options string.\n\x09 * @param Options\x09\x09The string containing the options.\n\x09 * @param Key\x09\x09\x09The key to determine if it exists in Options.\n\x09 * @return\x09\x09\x09\x09Whether Key was found in Options.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Returns whether a key exists in an options string.\n@param Options               The string containing the options.\n@param Key                   The key to determine if it exists in Options.\n@return                              Whether Key was found in Options." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_HasOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "HasOption", nullptr, nullptr, sizeof(GameplayStatics_eventHasOption_Parms), Z_Construct_UFunction_UGameplayStatics_HasOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_HasOption_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_HasOption_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_HasOption_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_HasOption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_HasOption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_IsGamePaused_Statics
	{
		struct GameplayStatics_eventIsGamePaused_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameplayStatics_IsGamePaused_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameplayStatics_eventIsGamePaused_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_IsGamePaused_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventIsGamePaused_Parms), &Z_Construct_UFunction_UGameplayStatics_IsGamePaused_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_IsGamePaused_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_IsGamePaused_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventIsGamePaused_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_IsGamePaused_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_IsGamePaused_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_IsGamePaused_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_IsGamePaused_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_IsGamePaused_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_IsGamePaused_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/**\n\x09 * Returns the game's paused state\n\x09 * @return\x09Whether the game is currently paused or not\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Returns the game's paused state\n@return      Whether the game is currently paused or not" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_IsGamePaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "IsGamePaused", nullptr, nullptr, sizeof(GameplayStatics_eventIsGamePaused_Parms), Z_Construct_UFunction_UGameplayStatics_IsGamePaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_IsGamePaused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_IsGamePaused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_IsGamePaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_IsGamePaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_IsGamePaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_IsSplitscreenForceDisabled_Statics
	{
		struct GameplayStatics_eventIsSplitscreenForceDisabled_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameplayStatics_IsSplitscreenForceDisabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameplayStatics_eventIsSplitscreenForceDisabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_IsSplitscreenForceDisabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventIsSplitscreenForceDisabled_Parms), &Z_Construct_UFunction_UGameplayStatics_IsSplitscreenForceDisabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_IsSplitscreenForceDisabled_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_IsSplitscreenForceDisabled_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventIsSplitscreenForceDisabled_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_IsSplitscreenForceDisabled_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_IsSplitscreenForceDisabled_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_IsSplitscreenForceDisabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_IsSplitscreenForceDisabled_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_IsSplitscreenForceDisabled_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_IsSplitscreenForceDisabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Viewport" },
		{ "Comment", "/**\n\x09 * Returns the split screen state\n\x09 * @return\x09Whether the game viewport is split screen or not\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Returns the split screen state\n@return      Whether the game viewport is split screen or not" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_IsSplitscreenForceDisabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "IsSplitscreenForceDisabled", nullptr, nullptr, sizeof(GameplayStatics_eventIsSplitscreenForceDisabled_Parms), Z_Construct_UFunction_UGameplayStatics_IsSplitscreenForceDisabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_IsSplitscreenForceDisabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_IsSplitscreenForceDisabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_IsSplitscreenForceDisabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_IsSplitscreenForceDisabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_IsSplitscreenForceDisabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_LoadGameFromSlot_Statics
	{
		struct GameplayStatics_eventLoadGameFromSlot_Parms
		{
			FString SlotName;
			int32 UserIndex;
			USaveGame* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UserIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SlotName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_LoadGameFromSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventLoadGameFromSlot_Parms, ReturnValue), Z_Construct_UClass_USaveGame_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_LoadGameFromSlot_Statics::NewProp_UserIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameplayStatics_LoadGameFromSlot_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventLoadGameFromSlot_Parms, UserIndex), METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_LoadGameFromSlot_Statics::NewProp_UserIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_LoadGameFromSlot_Statics::NewProp_UserIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_LoadGameFromSlot_Statics::NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameplayStatics_LoadGameFromSlot_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventLoadGameFromSlot_Parms, SlotName), METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_LoadGameFromSlot_Statics::NewProp_SlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_LoadGameFromSlot_Statics::NewProp_SlotName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_LoadGameFromSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_LoadGameFromSlot_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_LoadGameFromSlot_Statics::NewProp_UserIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_LoadGameFromSlot_Statics::NewProp_SlotName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_LoadGameFromSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveGame" },
		{ "Comment", "/** \n\x09 * Load the contents from a given slot.\n\x09 * @param SlotName\x09\x09\x09Name of the save game slot to load from.\n\x09 * @param UserIndex\x09\x09\x09""For some platforms, master user index to identify the user doing the loading.\n\x09 * @return\x09\x09\x09\x09\x09Object containing loaded game state (nullptr if load fails)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Load the contents from a given slot.\n@param SlotName                      Name of the save game slot to load from.\n@param UserIndex                     For some platforms, master user index to identify the user doing the loading.\n@return                                      Object containing loaded game state (nullptr if load fails)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_LoadGameFromSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "LoadGameFromSlot", nullptr, nullptr, sizeof(GameplayStatics_eventLoadGameFromSlot_Parms), Z_Construct_UFunction_UGameplayStatics_LoadGameFromSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_LoadGameFromSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_LoadGameFromSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_LoadGameFromSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_LoadGameFromSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_LoadGameFromSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_LoadStreamLevel_Statics
	{
		struct GameplayStatics_eventLoadStreamLevel_Parms
		{
			const UObject* WorldContextObject;
			FName LevelName;
			bool bMakeVisibleAfterLoad;
			bool bShouldBlockOnLoad;
			FLatentActionInfo LatentInfo;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static void NewProp_bShouldBlockOnLoad_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldBlockOnLoad;
		static void NewProp_bMakeVisibleAfterLoad_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMakeVisibleAfterLoad;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LevelName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_LoadStreamLevel_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventLoadStreamLevel_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGameplayStatics_LoadStreamLevel_Statics::NewProp_bShouldBlockOnLoad_SetBit(void* Obj)
	{
		((GameplayStatics_eventLoadStreamLevel_Parms*)Obj)->bShouldBlockOnLoad = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_LoadStreamLevel_Statics::NewProp_bShouldBlockOnLoad = { "bShouldBlockOnLoad", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventLoadStreamLevel_Parms), &Z_Construct_UFunction_UGameplayStatics_LoadStreamLevel_Statics::NewProp_bShouldBlockOnLoad_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGameplayStatics_LoadStreamLevel_Statics::NewProp_bMakeVisibleAfterLoad_SetBit(void* Obj)
	{
		((GameplayStatics_eventLoadStreamLevel_Parms*)Obj)->bMakeVisibleAfterLoad = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_LoadStreamLevel_Statics::NewProp_bMakeVisibleAfterLoad = { "bMakeVisibleAfterLoad", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventLoadStreamLevel_Parms), &Z_Construct_UFunction_UGameplayStatics_LoadStreamLevel_Statics::NewProp_bMakeVisibleAfterLoad_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGameplayStatics_LoadStreamLevel_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventLoadStreamLevel_Parms, LevelName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_LoadStreamLevel_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_LoadStreamLevel_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventLoadStreamLevel_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_LoadStreamLevel_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_LoadStreamLevel_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_LoadStreamLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_LoadStreamLevel_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_LoadStreamLevel_Statics::NewProp_bShouldBlockOnLoad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_LoadStreamLevel_Statics::NewProp_bMakeVisibleAfterLoad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_LoadStreamLevel_Statics::NewProp_LevelName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_LoadStreamLevel_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_LoadStreamLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Stream the level with the LevelName ; Calling again before it finishes has no effect */" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Stream the level with the LevelName ; Calling again before it finishes has no effect" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_LoadStreamLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "LoadStreamLevel", nullptr, nullptr, sizeof(GameplayStatics_eventLoadStreamLevel_Parms), Z_Construct_UFunction_UGameplayStatics_LoadStreamLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_LoadStreamLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_LoadStreamLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_LoadStreamLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_LoadStreamLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_LoadStreamLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_MakeHitResult_Statics
	{
		struct GameplayStatics_eventMakeHitResult_Parms
		{
			bool bBlockingHit;
			bool bInitialOverlap;
			float Time;
			float Distance;
			FVector Location;
			FVector ImpactPoint;
			FVector Normal;
			FVector ImpactNormal;
			UPhysicalMaterial* PhysMat;
			AActor* HitActor;
			UPrimitiveComponent* HitComponent;
			FName HitBoneName;
			int32 HitItem;
			int32 FaceIndex;
			FVector TraceStart;
			FVector TraceEnd;
			FHitResult ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TraceEnd;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TraceStart;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FaceIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HitItem;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_HitBoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhysMat;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImpactNormal;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normal;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImpactPoint;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
		static void NewProp_bInitialOverlap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInitialOverlap;
		static void NewProp_bBlockingHit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBlockingHit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_MakeHitResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventMakeHitResult_Parms, ReturnValue), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_MakeHitResult_Statics::NewProp_TraceEnd = { "TraceEnd", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventMakeHitResult_Parms, TraceEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_MakeHitResult_Statics::NewProp_TraceStart = { "TraceStart", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventMakeHitResult_Parms, TraceStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameplayStatics_MakeHitResult_Statics::NewProp_FaceIndex = { "FaceIndex", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventMakeHitResult_Parms, FaceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameplayStatics_MakeHitResult_Statics::NewProp_HitItem = { "HitItem", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventMakeHitResult_Parms, HitItem), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGameplayStatics_MakeHitResult_Statics::NewProp_HitBoneName = { "HitBoneName", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventMakeHitResult_Parms, HitBoneName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_MakeHitResult_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_MakeHitResult_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010040000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventMakeHitResult_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_MakeHitResult_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_MakeHitResult_Statics::NewProp_HitComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_MakeHitResult_Statics::NewProp_HitActor = { "HitActor", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventMakeHitResult_Parms, HitActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_MakeHitResult_Statics::NewProp_PhysMat = { "PhysMat", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventMakeHitResult_Parms, PhysMat), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_MakeHitResult_Statics::NewProp_ImpactNormal = { "ImpactNormal", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventMakeHitResult_Parms, ImpactNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_MakeHitResult_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventMakeHitResult_Parms, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_MakeHitResult_Statics::NewProp_ImpactPoint = { "ImpactPoint", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventMakeHitResult_Parms, ImpactPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_MakeHitResult_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventMakeHitResult_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_MakeHitResult_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventMakeHitResult_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_MakeHitResult_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventMakeHitResult_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGameplayStatics_MakeHitResult_Statics::NewProp_bInitialOverlap_SetBit(void* Obj)
	{
		((GameplayStatics_eventMakeHitResult_Parms*)Obj)->bInitialOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_MakeHitResult_Statics::NewProp_bInitialOverlap = { "bInitialOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventMakeHitResult_Parms), &Z_Construct_UFunction_UGameplayStatics_MakeHitResult_Statics::NewProp_bInitialOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGameplayStatics_MakeHitResult_Statics::NewProp_bBlockingHit_SetBit(void* Obj)
	{
		((GameplayStatics_eventMakeHitResult_Parms*)Obj)->bBlockingHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_MakeHitResult_Statics::NewProp_bBlockingHit = { "bBlockingHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventMakeHitResult_Parms), &Z_Construct_UFunction_UGameplayStatics_MakeHitResult_Statics::NewProp_bBlockingHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_MakeHitResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_MakeHitResult_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_MakeHitResult_Statics::NewProp_TraceEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_MakeHitResult_Statics::NewProp_TraceStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_MakeHitResult_Statics::NewProp_FaceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_MakeHitResult_Statics::NewProp_HitItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_MakeHitResult_Statics::NewProp_HitBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_MakeHitResult_Statics::NewProp_HitComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_MakeHitResult_Statics::NewProp_HitActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_MakeHitResult_Statics::NewProp_PhysMat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_MakeHitResult_Statics::NewProp_ImpactNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_MakeHitResult_Statics::NewProp_Normal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_MakeHitResult_Statics::NewProp_ImpactPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_MakeHitResult_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_MakeHitResult_Statics::NewProp_Distance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_MakeHitResult_Statics::NewProp_Time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_MakeHitResult_Statics::NewProp_bInitialOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_MakeHitResult_Statics::NewProp_bBlockingHit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_MakeHitResult_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "Collision" },
		{ "Comment", "/** \n\x09 *\x09""Create a HitResult struct\n\x09 * @param Hit\x09\x09\x09The source HitResult.\n\x09 * @param bBlockingHit\x09True if there was a blocking hit, false otherwise.\n\x09 * @param bInitialOverlap True if the hit started in an initial overlap. In this case some other values should be interpreted differently. Time will be 0, ImpactPoint will equal Location, and normals will be equal and indicate a depenetration vector.\n\x09 * @param Time\x09\x09\x09'Time' of impact along trace direction ranging from [0.0 to 1.0) if there is a hit, indicating time between start and end. Equals 1.0 if there is no hit.\n\x09 * @param Distance\x09\x09The distance from the TraceStart to the Location in world space. This value is 0 if there was an initial overlap (trace started inside another colliding object).\n\x09 * @param Location\x09\x09Location of the hit in world space. If this was a swept shape test, this is the location where we can place the shape in the world where it will not penetrate.\n\x09 * @param Normal\x09\x09Normal of the hit in world space, for the object that was swept (e.g. for a sphere trace this points towards the sphere's center). Equal to ImpactNormal for line tests.\n\x09 * @param ImpactPoint\x09Location of the actual contact point of the trace shape with the surface of the hit object. Equal to Location in the case of an initial overlap.\n\x09 * @param ImpactNormal\x09Normal of the hit in world space, for the object that was hit by the sweep.\n\x09 * @param PhysMat\x09\x09Physical material that was hit. Must set bReturnPhysicalMaterial to true in the query params for this to be returned.\n\x09 * @param HitActor\x09\x09""Actor hit by the trace.\n\x09 * @param HitComponent\x09PrimitiveComponent hit by the trace.\n\x09 * @param HitBoneName\x09Name of the bone hit (valid only if we hit a skeletal mesh).\n\x09 * @param HitItem\x09\x09Primitive-specific data recording which item in the primitive was hit\n\x09 * @param FaceIndex\x09\x09If colliding with trimesh or landscape, index of face that was hit.\n\x09 */" },
		{ "ImpactNormal", "0,0,1" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "NativeMakeFunc", "" },
		{ "Normal", "0,0,1" },
		{ "ToolTip", "Create a HitResult struct\n@param Hit                   The source HitResult.\n@param bBlockingHit  True if there was a blocking hit, false otherwise.\n@param bInitialOverlap True if the hit started in an initial overlap. In this case some other values should be interpreted differently. Time will be 0, ImpactPoint will equal Location, and normals will be equal and indicate a depenetration vector.\n@param Time                  'Time' of impact along trace direction ranging from [0.0 to 1.0) if there is a hit, indicating time between start and end. Equals 1.0 if there is no hit.\n@param Distance              The distance from the TraceStart to the Location in world space. This value is 0 if there was an initial overlap (trace started inside another colliding object).\n@param Location              Location of the hit in world space. If this was a swept shape test, this is the location where we can place the shape in the world where it will not penetrate.\n@param Normal                Normal of the hit in world space, for the object that was swept (e.g. for a sphere trace this points towards the sphere's center). Equal to ImpactNormal for line tests.\n@param ImpactPoint   Location of the actual contact point of the trace shape with the surface of the hit object. Equal to Location in the case of an initial overlap.\n@param ImpactNormal  Normal of the hit in world space, for the object that was hit by the sweep.\n@param PhysMat               Physical material that was hit. Must set bReturnPhysicalMaterial to true in the query params for this to be returned.\n@param HitActor              Actor hit by the trace.\n@param HitComponent  PrimitiveComponent hit by the trace.\n@param HitBoneName   Name of the bone hit (valid only if we hit a skeletal mesh).\n@param HitItem               Primitive-specific data recording which item in the primitive was hit\n@param FaceIndex             If colliding with trimesh or landscape, index of face that was hit." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_MakeHitResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "MakeHitResult", nullptr, nullptr, sizeof(GameplayStatics_eventMakeHitResult_Parms), Z_Construct_UFunction_UGameplayStatics_MakeHitResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_MakeHitResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_MakeHitResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_MakeHitResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_MakeHitResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_MakeHitResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_OpenLevel_Statics
	{
		struct GameplayStatics_eventOpenLevel_Parms
		{
			const UObject* WorldContextObject;
			FName LevelName;
			bool bAbsolute;
			FString Options;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Options;
		static void NewProp_bAbsolute_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAbsolute;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LevelName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameplayStatics_OpenLevel_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventOpenLevel_Parms, Options), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGameplayStatics_OpenLevel_Statics::NewProp_bAbsolute_SetBit(void* Obj)
	{
		((GameplayStatics_eventOpenLevel_Parms*)Obj)->bAbsolute = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_OpenLevel_Statics::NewProp_bAbsolute = { "bAbsolute", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventOpenLevel_Parms), &Z_Construct_UFunction_UGameplayStatics_OpenLevel_Statics::NewProp_bAbsolute_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGameplayStatics_OpenLevel_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventOpenLevel_Parms, LevelName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_OpenLevel_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_OpenLevel_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventOpenLevel_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_OpenLevel_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_OpenLevel_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_OpenLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_OpenLevel_Statics::NewProp_Options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_OpenLevel_Statics::NewProp_bAbsolute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_OpenLevel_Statics::NewProp_LevelName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_OpenLevel_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_OpenLevel_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "Game" },
		{ "Comment", "/**\n\x09 * Travel to another level\n\x09 *\n\x09 * @param\x09LevelName\x09\x09\x09the level to open\n\x09 * @param\x09""bAbsolute\x09\x09\x09if true options are reset, if false options are carried over from current level\n\x09 * @param\x09Options\x09\x09\x09\x09""a string of options to use for the travel URL\n\x09 */" },
		{ "CPP_Default_bAbsolute", "true" },
		{ "CPP_Default_Options", "" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Travel to another level\n\n@param       LevelName                       the level to open\n@param       bAbsolute                       if true options are reset, if false options are carried over from current level\n@param       Options                         a string of options to use for the travel URL" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_OpenLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "OpenLevel", nullptr, nullptr, sizeof(GameplayStatics_eventOpenLevel_Parms), Z_Construct_UFunction_UGameplayStatics_OpenLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_OpenLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_OpenLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_OpenLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_OpenLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_OpenLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_ParseOption_Statics
	{
		struct GameplayStatics_eventParseOption_Parms
		{
			FString Options;
			FString Key;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Options;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameplayStatics_ParseOption_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventParseOption_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_ParseOption_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameplayStatics_ParseOption_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventParseOption_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_ParseOption_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_ParseOption_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameplayStatics_ParseOption_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventParseOption_Parms, Options), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_ParseOption_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_ParseOption_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_ParseOption_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_ParseOption_Statics::NewProp_Options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_ParseOption_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Game Options" },
		{ "Comment", "/** \n\x09 * Find an option in the options string and return it.\n\x09 * @param Options\x09\x09The string containing the options.\n\x09 * @param Key\x09\x09\x09The key to find the value of in Options.\n\x09 * @return\x09\x09\x09\x09The value associated with Key if Key found in Options string.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Find an option in the options string and return it.\n@param Options               The string containing the options.\n@param Key                   The key to find the value of in Options.\n@return                              The value associated with Key if Key found in Options string." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_ParseOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "ParseOption", nullptr, nullptr, sizeof(GameplayStatics_eventParseOption_Parms), Z_Construct_UFunction_UGameplayStatics_ParseOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_ParseOption_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_ParseOption_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_ParseOption_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_ParseOption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_ParseOption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_PlayDialogue2D_Statics
	{
		struct GameplayStatics_eventPlayDialogue2D_Parms
		{
			const UObject* WorldContextObject;
			UDialogueWave* Dialogue;
			FDialogueContext Context;
			float VolumeMultiplier;
			float PitchMultiplier;
			float StartTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Context;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_PlayDialogue2D_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventPlayDialogue2D_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_PlayDialogue2D_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventPlayDialogue2D_Parms, PitchMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_PlayDialogue2D_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventPlayDialogue2D_Parms, VolumeMultiplier), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_PlayDialogue2D_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_PlayDialogue2D_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventPlayDialogue2D_Parms, Context), Z_Construct_UScriptStruct_FDialogueContext, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_PlayDialogue2D_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_PlayDialogue2D_Statics::NewProp_Context_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_PlayDialogue2D_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventPlayDialogue2D_Parms, Dialogue), Z_Construct_UClass_UDialogueWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_PlayDialogue2D_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_PlayDialogue2D_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventPlayDialogue2D_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_PlayDialogue2D_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_PlayDialogue2D_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_PlayDialogue2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_PlayDialogue2D_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_PlayDialogue2D_Statics::NewProp_PitchMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_PlayDialogue2D_Statics::NewProp_VolumeMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_PlayDialogue2D_Statics::NewProp_Context,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_PlayDialogue2D_Statics::NewProp_Dialogue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_PlayDialogue2D_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_PlayDialogue2D_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "Category", "Audio" },
		{ "Comment", "/**\n\x09 * Plays a dialogue directly with no attenuation, perfect for UI.\n\x09 *\n\x09 * * Fire and Forget.\n\x09 * * Not Replicated.\n\x09 * @param Dialogue - dialogue to play\n\x09 * @param Context - context the dialogue is to play in\n\x09 * @param VolumeMultiplier - Multiplied with the volume to make the sound louder or softer.\n\x09 * @param PitchMultiplier - Multiplies the pitch.\n\x09 * @param StartTime - How far in to the dialogue to begin playback at\n\x09 */" },
		{ "CPP_Default_PitchMultiplier", "1.000000" },
		{ "CPP_Default_StartTime", "0.000000" },
		{ "CPP_Default_VolumeMultiplier", "1.000000" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Plays a dialogue directly with no attenuation, perfect for UI.\n\n* Fire and Forget.\n* Not Replicated.\n@param Dialogue - dialogue to play\n@param Context - context the dialogue is to play in\n@param VolumeMultiplier - Multiplied with the volume to make the sound louder or softer.\n@param PitchMultiplier - Multiplies the pitch.\n@param StartTime - How far in to the dialogue to begin playback at" },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_PlayDialogue2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "PlayDialogue2D", nullptr, nullptr, sizeof(GameplayStatics_eventPlayDialogue2D_Parms), Z_Construct_UFunction_UGameplayStatics_PlayDialogue2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_PlayDialogue2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_PlayDialogue2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_PlayDialogue2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_PlayDialogue2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_PlayDialogue2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_PlayDialogueAtLocation_Statics
	{
		struct GameplayStatics_eventPlayDialogueAtLocation_Parms
		{
			const UObject* WorldContextObject;
			UDialogueWave* Dialogue;
			FDialogueContext Context;
			FVector Location;
			FRotator Rotation;
			float VolumeMultiplier;
			float PitchMultiplier;
			float StartTime;
			USoundAttenuation* AttenuationSettings;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttenuationSettings;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Context;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_PlayDialogueAtLocation_Statics::NewProp_AttenuationSettings = { "AttenuationSettings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventPlayDialogueAtLocation_Parms, AttenuationSettings), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_PlayDialogueAtLocation_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventPlayDialogueAtLocation_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_PlayDialogueAtLocation_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventPlayDialogueAtLocation_Parms, PitchMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_PlayDialogueAtLocation_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventPlayDialogueAtLocation_Parms, VolumeMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_PlayDialogueAtLocation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventPlayDialogueAtLocation_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_PlayDialogueAtLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventPlayDialogueAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_PlayDialogueAtLocation_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_PlayDialogueAtLocation_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventPlayDialogueAtLocation_Parms, Context), Z_Construct_UScriptStruct_FDialogueContext, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_PlayDialogueAtLocation_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_PlayDialogueAtLocation_Statics::NewProp_Context_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_PlayDialogueAtLocation_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventPlayDialogueAtLocation_Parms, Dialogue), Z_Construct_UClass_UDialogueWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_PlayDialogueAtLocation_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_PlayDialogueAtLocation_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventPlayDialogueAtLocation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_PlayDialogueAtLocation_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_PlayDialogueAtLocation_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_PlayDialogueAtLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_PlayDialogueAtLocation_Statics::NewProp_AttenuationSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_PlayDialogueAtLocation_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_PlayDialogueAtLocation_Statics::NewProp_PitchMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_PlayDialogueAtLocation_Statics::NewProp_VolumeMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_PlayDialogueAtLocation_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_PlayDialogueAtLocation_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_PlayDialogueAtLocation_Statics::NewProp_Context,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_PlayDialogueAtLocation_Statics::NewProp_Dialogue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_PlayDialogueAtLocation_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_PlayDialogueAtLocation_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "4" },
		{ "Category", "Audio" },
		{ "Comment", "/** Plays a dialogue at the given location. This is a fire and forget sound and does not travel with any actor. Replication is also not handled at this point.\n\x09 * @param Dialogue - dialogue to play\n\x09 * @param Context - context the dialogue is to play in\n\x09 * @param Location - World position to play dialogue at\n\x09 * @param Rotation - World rotation to play dialogue at\n\x09 * @param VolumeMultiplier - Volume multiplier \n\x09 * @param PitchMultiplier - Pitch multiplier\n\x09 * @param StartTime - How far in to the dialogue to begin playback at\n\x09 * @param AttenuationSettings - Override attenuation settings package to play sound with\n\x09 */" },
		{ "CPP_Default_AttenuationSettings", "None" },
		{ "CPP_Default_PitchMultiplier", "1.000000" },
		{ "CPP_Default_StartTime", "0.000000" },
		{ "CPP_Default_VolumeMultiplier", "1.000000" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Plays a dialogue at the given location. This is a fire and forget sound and does not travel with any actor. Replication is also not handled at this point.\n@param Dialogue - dialogue to play\n@param Context - context the dialogue is to play in\n@param Location - World position to play dialogue at\n@param Rotation - World rotation to play dialogue at\n@param VolumeMultiplier - Volume multiplier\n@param PitchMultiplier - Pitch multiplier\n@param StartTime - How far in to the dialogue to begin playback at\n@param AttenuationSettings - Override attenuation settings package to play sound with" },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_PlayDialogueAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "PlayDialogueAtLocation", nullptr, nullptr, sizeof(GameplayStatics_eventPlayDialogueAtLocation_Parms), Z_Construct_UFunction_UGameplayStatics_PlayDialogueAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_PlayDialogueAtLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_PlayDialogueAtLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_PlayDialogueAtLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_PlayDialogueAtLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_PlayDialogueAtLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_PlaySound2D_Statics
	{
		struct GameplayStatics_eventPlaySound2D_Parms
		{
			const UObject* WorldContextObject;
			USoundBase* Sound;
			float VolumeMultiplier;
			float PitchMultiplier;
			float StartTime;
			USoundConcurrency* ConcurrencySettings;
			AActor* OwningActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConcurrencySettings;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_PlaySound2D_Statics::NewProp_OwningActor = { "OwningActor", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventPlaySound2D_Parms, OwningActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_PlaySound2D_Statics::NewProp_ConcurrencySettings = { "ConcurrencySettings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventPlaySound2D_Parms, ConcurrencySettings), Z_Construct_UClass_USoundConcurrency_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_PlaySound2D_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventPlaySound2D_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_PlaySound2D_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventPlaySound2D_Parms, PitchMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_PlaySound2D_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventPlaySound2D_Parms, VolumeMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_PlaySound2D_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventPlaySound2D_Parms, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_PlaySound2D_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_PlaySound2D_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventPlaySound2D_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_PlaySound2D_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_PlaySound2D_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_PlaySound2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_PlaySound2D_Statics::NewProp_OwningActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_PlaySound2D_Statics::NewProp_ConcurrencySettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_PlaySound2D_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_PlaySound2D_Statics::NewProp_PitchMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_PlaySound2D_Statics::NewProp_VolumeMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_PlaySound2D_Statics::NewProp_Sound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_PlaySound2D_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_PlaySound2D_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "Audio" },
		{ "Comment", "/**\n\x09 * Plays a sound directly with no attenuation, perfect for UI sounds.\n\x09 *\n\x09 * * Fire and Forget.\n\x09 * * Not Replicated.\n\x09 * @param Sound - Sound to play.\n\x09 * @param VolumeMultiplier - Multiplied with the volume to make the sound louder or softer.\n\x09 * @param PitchMultiplier - Multiplies the pitch.\n\x09 * @param ConcurrencySettings - Override concurrency settings package to play sound with\n\x09 * @param StartTime - How far in to the sound to begin playback at\n\x09 * @param ConcurrencySettings - Override concurrency settings package to play sound with\n\x09 * @param OwningActor - The actor to use as the \"owner\" for concurrency settings purposes. Allows PlaySound calls to do a concurrency limit per owner.\n\x09 */" },
		{ "CPP_Default_ConcurrencySettings", "None" },
		{ "CPP_Default_OwningActor", "None" },
		{ "CPP_Default_PitchMultiplier", "1.000000" },
		{ "CPP_Default_StartTime", "0.000000" },
		{ "CPP_Default_VolumeMultiplier", "1.000000" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Plays a sound directly with no attenuation, perfect for UI sounds.\n\n* Fire and Forget.\n* Not Replicated.\n@param Sound - Sound to play.\n@param VolumeMultiplier - Multiplied with the volume to make the sound louder or softer.\n@param PitchMultiplier - Multiplies the pitch.\n@param ConcurrencySettings - Override concurrency settings package to play sound with\n@param StartTime - How far in to the sound to begin playback at\n@param ConcurrencySettings - Override concurrency settings package to play sound with\n@param OwningActor - The actor to use as the \"owner\" for concurrency settings purposes. Allows PlaySound calls to do a concurrency limit per owner." },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_PlaySound2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "PlaySound2D", nullptr, nullptr, sizeof(GameplayStatics_eventPlaySound2D_Parms), Z_Construct_UFunction_UGameplayStatics_PlaySound2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_PlaySound2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_PlaySound2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_PlaySound2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_PlaySound2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_PlaySound2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_PlaySoundAtLocation_Statics
	{
		struct GameplayStatics_eventPlaySoundAtLocation_Parms
		{
			const UObject* WorldContextObject;
			USoundBase* Sound;
			FVector Location;
			FRotator Rotation;
			float VolumeMultiplier;
			float PitchMultiplier;
			float StartTime;
			USoundAttenuation* AttenuationSettings;
			USoundConcurrency* ConcurrencySettings;
			AActor* OwningActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConcurrencySettings;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttenuationSettings;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_PlaySoundAtLocation_Statics::NewProp_OwningActor = { "OwningActor", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventPlaySoundAtLocation_Parms, OwningActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_PlaySoundAtLocation_Statics::NewProp_ConcurrencySettings = { "ConcurrencySettings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventPlaySoundAtLocation_Parms, ConcurrencySettings), Z_Construct_UClass_USoundConcurrency_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_PlaySoundAtLocation_Statics::NewProp_AttenuationSettings = { "AttenuationSettings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventPlaySoundAtLocation_Parms, AttenuationSettings), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_PlaySoundAtLocation_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventPlaySoundAtLocation_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_PlaySoundAtLocation_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventPlaySoundAtLocation_Parms, PitchMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_PlaySoundAtLocation_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventPlaySoundAtLocation_Parms, VolumeMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_PlaySoundAtLocation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventPlaySoundAtLocation_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_PlaySoundAtLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventPlaySoundAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_PlaySoundAtLocation_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventPlaySoundAtLocation_Parms, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_PlaySoundAtLocation_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_PlaySoundAtLocation_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventPlaySoundAtLocation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_PlaySoundAtLocation_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_PlaySoundAtLocation_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_PlaySoundAtLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_PlaySoundAtLocation_Statics::NewProp_OwningActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_PlaySoundAtLocation_Statics::NewProp_ConcurrencySettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_PlaySoundAtLocation_Statics::NewProp_AttenuationSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_PlaySoundAtLocation_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_PlaySoundAtLocation_Statics::NewProp_PitchMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_PlaySoundAtLocation_Statics::NewProp_VolumeMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_PlaySoundAtLocation_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_PlaySoundAtLocation_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_PlaySoundAtLocation_Statics::NewProp_Sound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_PlaySoundAtLocation_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_PlaySoundAtLocation_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "Category", "Audio" },
		{ "Comment", "/**\n\x09 * Plays a sound at the given location. This is a fire and forget sound and does not travel with any actor. Replication is also not handled at this point.\n\x09 * @param Sound - sound to play\n\x09 * @param Location - World position to play sound at\n\x09 * @param Rotation - World rotation to play sound at\n\x09 * @param VolumeMultiplier - Volume multiplier \n\x09 * @param PitchMultiplier - PitchMultiplier\n\x09 * @param StartTime - How far in to the sound to begin playback at\n\x09 * @param AttenuationSettings - Override attenuation settings package to play sound with\n\x09 * @param ConcurrencySettings - Override concurrency settings package to play sound with\n\x09 * @param OwningActor - The actor to use as the \"owner\" for concurrency settings purposes. Allows PlaySound calls to do a concurrency limit per owner.\n\x09 */" },
		{ "CPP_Default_AttenuationSettings", "None" },
		{ "CPP_Default_ConcurrencySettings", "None" },
		{ "CPP_Default_OwningActor", "None" },
		{ "CPP_Default_PitchMultiplier", "1.000000" },
		{ "CPP_Default_StartTime", "0.000000" },
		{ "CPP_Default_VolumeMultiplier", "1.000000" },
		{ "Keywords", "play" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Plays a sound at the given location. This is a fire and forget sound and does not travel with any actor. Replication is also not handled at this point.\n@param Sound - sound to play\n@param Location - World position to play sound at\n@param Rotation - World rotation to play sound at\n@param VolumeMultiplier - Volume multiplier\n@param PitchMultiplier - PitchMultiplier\n@param StartTime - How far in to the sound to begin playback at\n@param AttenuationSettings - Override attenuation settings package to play sound with\n@param ConcurrencySettings - Override concurrency settings package to play sound with\n@param OwningActor - The actor to use as the \"owner\" for concurrency settings purposes. Allows PlaySound calls to do a concurrency limit per owner." },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_PlaySoundAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "PlaySoundAtLocation", nullptr, nullptr, sizeof(GameplayStatics_eventPlaySoundAtLocation_Parms), Z_Construct_UFunction_UGameplayStatics_PlaySoundAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_PlaySoundAtLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_PlaySoundAtLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_PlaySoundAtLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_PlaySoundAtLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_PlaySoundAtLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_PlayWorldCameraShake_Statics
	{
		struct GameplayStatics_eventPlayWorldCameraShake_Parms
		{
			const UObject* WorldContextObject;
			TSubclassOf<UCameraShake>  Shake;
			FVector Epicenter;
			float InnerRadius;
			float OuterRadius;
			float Falloff;
			bool bOrientShakeTowardsEpicenter;
		};
		static void NewProp_bOrientShakeTowardsEpicenter_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOrientShakeTowardsEpicenter;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Falloff;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OuterRadius;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InnerRadius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Epicenter;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Shake;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameplayStatics_PlayWorldCameraShake_Statics::NewProp_bOrientShakeTowardsEpicenter_SetBit(void* Obj)
	{
		((GameplayStatics_eventPlayWorldCameraShake_Parms*)Obj)->bOrientShakeTowardsEpicenter = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_PlayWorldCameraShake_Statics::NewProp_bOrientShakeTowardsEpicenter = { "bOrientShakeTowardsEpicenter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventPlayWorldCameraShake_Parms), &Z_Construct_UFunction_UGameplayStatics_PlayWorldCameraShake_Statics::NewProp_bOrientShakeTowardsEpicenter_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_PlayWorldCameraShake_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventPlayWorldCameraShake_Parms, Falloff), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_PlayWorldCameraShake_Statics::NewProp_OuterRadius = { "OuterRadius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventPlayWorldCameraShake_Parms, OuterRadius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_PlayWorldCameraShake_Statics::NewProp_InnerRadius = { "InnerRadius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventPlayWorldCameraShake_Parms, InnerRadius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_PlayWorldCameraShake_Statics::NewProp_Epicenter = { "Epicenter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventPlayWorldCameraShake_Parms, Epicenter), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGameplayStatics_PlayWorldCameraShake_Statics::NewProp_Shake = { "Shake", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventPlayWorldCameraShake_Parms, Shake), Z_Construct_UClass_UCameraShake_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_PlayWorldCameraShake_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_PlayWorldCameraShake_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventPlayWorldCameraShake_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_PlayWorldCameraShake_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_PlayWorldCameraShake_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_PlayWorldCameraShake_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_PlayWorldCameraShake_Statics::NewProp_bOrientShakeTowardsEpicenter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_PlayWorldCameraShake_Statics::NewProp_Falloff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_PlayWorldCameraShake_Statics::NewProp_OuterRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_PlayWorldCameraShake_Statics::NewProp_InnerRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_PlayWorldCameraShake_Statics::NewProp_Epicenter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_PlayWorldCameraShake_Statics::NewProp_Shake,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_PlayWorldCameraShake_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_PlayWorldCameraShake_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Feedback" },
		{ "Comment", "/** Plays an in-world camera shake that affects all nearby local players, with distance-based attenuation. Does not replicate.\n\x09 * @param WorldContextObject - Object that we can obtain a world context from\n\x09 * @param Shake - Camera shake asset to use\n\x09 * @param Epicenter - location to place the effect in world space\n\x09 * @param InnerRadius - Cameras inside this radius are ignored\n\x09 * @param OuterRadius - Cameras outside of InnerRadius and inside this are effected\n\x09 * @param Falloff - Affects falloff of effect as it nears OuterRadius\n\x09 * @param bOrientShakeTowardsEpicenter - Changes the rotation of shake to point towards epicenter instead of forward\n\x09 */" },
		{ "CPP_Default_bOrientShakeTowardsEpicenter", "false" },
		{ "CPP_Default_Falloff", "1.000000" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Plays an in-world camera shake that affects all nearby local players, with distance-based attenuation. Does not replicate.\n@param WorldContextObject - Object that we can obtain a world context from\n@param Shake - Camera shake asset to use\n@param Epicenter - location to place the effect in world space\n@param InnerRadius - Cameras inside this radius are ignored\n@param OuterRadius - Cameras outside of InnerRadius and inside this are effected\n@param Falloff - Affects falloff of effect as it nears OuterRadius\n@param bOrientShakeTowardsEpicenter - Changes the rotation of shake to point towards epicenter instead of forward" },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_PlayWorldCameraShake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "PlayWorldCameraShake", nullptr, nullptr, sizeof(GameplayStatics_eventPlayWorldCameraShake_Parms), Z_Construct_UFunction_UGameplayStatics_PlayWorldCameraShake_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_PlayWorldCameraShake_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_PlayWorldCameraShake_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_PlayWorldCameraShake_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_PlayWorldCameraShake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_PlayWorldCameraShake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_PopSoundMixModifier_Statics
	{
		struct GameplayStatics_eventPopSoundMixModifier_Parms
		{
			const UObject* WorldContextObject;
			USoundMix* InSoundMixModifier;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSoundMixModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_PopSoundMixModifier_Statics::NewProp_InSoundMixModifier = { "InSoundMixModifier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventPopSoundMixModifier_Parms, InSoundMixModifier), Z_Construct_UClass_USoundMix_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_PopSoundMixModifier_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_PopSoundMixModifier_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventPopSoundMixModifier_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_PopSoundMixModifier_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_PopSoundMixModifier_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_PopSoundMixModifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_PopSoundMixModifier_Statics::NewProp_InSoundMixModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_PopSoundMixModifier_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_PopSoundMixModifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Pop a sound mix modifier from the audio system **/" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Pop a sound mix modifier from the audio system *" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_PopSoundMixModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "PopSoundMixModifier", nullptr, nullptr, sizeof(GameplayStatics_eventPopSoundMixModifier_Parms), Z_Construct_UFunction_UGameplayStatics_PopSoundMixModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_PopSoundMixModifier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_PopSoundMixModifier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_PopSoundMixModifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_PopSoundMixModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_PopSoundMixModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_PrimeSound_Statics
	{
		struct GameplayStatics_eventPrimeSound_Parms
		{
			USoundBase* InSound;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_PrimeSound_Statics::NewProp_InSound = { "InSound", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventPrimeSound_Parms, InSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_PrimeSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_PrimeSound_Statics::NewProp_InSound,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_PrimeSound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Primes the sound, caching the first chunk of streamed audio. **/" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Primes the sound, caching the first chunk of streamed audio. *" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_PrimeSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "PrimeSound", nullptr, nullptr, sizeof(GameplayStatics_eventPrimeSound_Parms), Z_Construct_UFunction_UGameplayStatics_PrimeSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_PrimeSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_PrimeSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_PrimeSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_PrimeSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_PrimeSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_ProjectWorldToScreen_Statics
	{
		struct GameplayStatics_eventProjectWorldToScreen_Parms
		{
			APlayerController* Player;
			FVector WorldPosition;
			FVector2D ScreenPosition;
			bool bPlayerViewportRelative;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bPlayerViewportRelative_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlayerViewportRelative;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScreenPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameplayStatics_ProjectWorldToScreen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameplayStatics_eventProjectWorldToScreen_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_ProjectWorldToScreen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventProjectWorldToScreen_Parms), &Z_Construct_UFunction_UGameplayStatics_ProjectWorldToScreen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGameplayStatics_ProjectWorldToScreen_Statics::NewProp_bPlayerViewportRelative_SetBit(void* Obj)
	{
		((GameplayStatics_eventProjectWorldToScreen_Parms*)Obj)->bPlayerViewportRelative = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_ProjectWorldToScreen_Statics::NewProp_bPlayerViewportRelative = { "bPlayerViewportRelative", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventProjectWorldToScreen_Parms), &Z_Construct_UFunction_UGameplayStatics_ProjectWorldToScreen_Statics::NewProp_bPlayerViewportRelative_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_ProjectWorldToScreen_Statics::NewProp_ScreenPosition = { "ScreenPosition", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventProjectWorldToScreen_Parms, ScreenPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_ProjectWorldToScreen_Statics::NewProp_WorldPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_ProjectWorldToScreen_Statics::NewProp_WorldPosition = { "WorldPosition", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventProjectWorldToScreen_Parms, WorldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_ProjectWorldToScreen_Statics::NewProp_WorldPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_ProjectWorldToScreen_Statics::NewProp_WorldPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_ProjectWorldToScreen_Statics::NewProp_Player_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_ProjectWorldToScreen_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventProjectWorldToScreen_Parms, Player), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_ProjectWorldToScreen_Statics::NewProp_Player_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_ProjectWorldToScreen_Statics::NewProp_Player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_ProjectWorldToScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_ProjectWorldToScreen_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_ProjectWorldToScreen_Statics::NewProp_bPlayerViewportRelative,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_ProjectWorldToScreen_Statics::NewProp_ScreenPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_ProjectWorldToScreen_Statics::NewProp_WorldPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_ProjectWorldToScreen_Statics::NewProp_Player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_ProjectWorldToScreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities" },
		{ "Comment", "/** \n\x09 * Transforms the given 3D world-space point into a its 2D screen space coordinate. \n\x09 * @param Player\x09\x09\x09Project using this player's view.\n\x09 * @param WorldPosition\x09\x09World position to project.\n\x09 * @param ScreenPosition\x09(out) Corresponding 2D position in screen space\n\x09 * @param bPlayerViewportRelative\x09Should this be relative to the player viewport subregion (useful when using player attached widgets in split screen)\n\x09 */" },
		{ "CPP_Default_bPlayerViewportRelative", "false" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Transforms the given 3D world-space point into a its 2D screen space coordinate.\n@param Player                        Project using this player's view.\n@param WorldPosition         World position to project.\n@param ScreenPosition        (out) Corresponding 2D position in screen space\n@param bPlayerViewportRelative       Should this be relative to the player viewport subregion (useful when using player attached widgets in split screen)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_ProjectWorldToScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "ProjectWorldToScreen", nullptr, nullptr, sizeof(GameplayStatics_eventProjectWorldToScreen_Parms), Z_Construct_UFunction_UGameplayStatics_ProjectWorldToScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_ProjectWorldToScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_ProjectWorldToScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_ProjectWorldToScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_ProjectWorldToScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_ProjectWorldToScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_PushSoundMixModifier_Statics
	{
		struct GameplayStatics_eventPushSoundMixModifier_Parms
		{
			const UObject* WorldContextObject;
			USoundMix* InSoundMixModifier;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSoundMixModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_PushSoundMixModifier_Statics::NewProp_InSoundMixModifier = { "InSoundMixModifier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventPushSoundMixModifier_Parms, InSoundMixModifier), Z_Construct_UClass_USoundMix_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_PushSoundMixModifier_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_PushSoundMixModifier_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventPushSoundMixModifier_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_PushSoundMixModifier_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_PushSoundMixModifier_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_PushSoundMixModifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_PushSoundMixModifier_Statics::NewProp_InSoundMixModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_PushSoundMixModifier_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_PushSoundMixModifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Push a sound mix modifier onto the audio system **/" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Push a sound mix modifier onto the audio system *" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_PushSoundMixModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "PushSoundMixModifier", nullptr, nullptr, sizeof(GameplayStatics_eventPushSoundMixModifier_Parms), Z_Construct_UFunction_UGameplayStatics_PushSoundMixModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_PushSoundMixModifier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_PushSoundMixModifier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_PushSoundMixModifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_PushSoundMixModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_PushSoundMixModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_RebaseLocalOriginOntoZero_Statics
	{
		struct GameplayStatics_eventRebaseLocalOriginOntoZero_Parms
		{
			UObject* WorldContextObject;
			FVector WorldLocation;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_RebaseLocalOriginOntoZero_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventRebaseLocalOriginOntoZero_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_RebaseLocalOriginOntoZero_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventRebaseLocalOriginOntoZero_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_RebaseLocalOriginOntoZero_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventRebaseLocalOriginOntoZero_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_RebaseLocalOriginOntoZero_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_RebaseLocalOriginOntoZero_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_RebaseLocalOriginOntoZero_Statics::NewProp_WorldLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_RebaseLocalOriginOntoZero_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_RebaseLocalOriginOntoZero_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Returns origin based position for local world location. */" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Returns origin based position for local world location." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_RebaseLocalOriginOntoZero_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "RebaseLocalOriginOntoZero", nullptr, nullptr, sizeof(GameplayStatics_eventRebaseLocalOriginOntoZero_Parms), Z_Construct_UFunction_UGameplayStatics_RebaseLocalOriginOntoZero_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_RebaseLocalOriginOntoZero_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_RebaseLocalOriginOntoZero_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_RebaseLocalOriginOntoZero_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_RebaseLocalOriginOntoZero()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_RebaseLocalOriginOntoZero_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_RebaseZeroOriginOntoLocal_Statics
	{
		struct GameplayStatics_eventRebaseZeroOriginOntoLocal_Parms
		{
			UObject* WorldContextObject;
			FVector WorldLocation;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_RebaseZeroOriginOntoLocal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventRebaseZeroOriginOntoLocal_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_RebaseZeroOriginOntoLocal_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventRebaseZeroOriginOntoLocal_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_RebaseZeroOriginOntoLocal_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventRebaseZeroOriginOntoLocal_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_RebaseZeroOriginOntoLocal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_RebaseZeroOriginOntoLocal_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_RebaseZeroOriginOntoLocal_Statics::NewProp_WorldLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_RebaseZeroOriginOntoLocal_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_RebaseZeroOriginOntoLocal_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Returns local location for origin based position. */" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Returns local location for origin based position." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_RebaseZeroOriginOntoLocal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "RebaseZeroOriginOntoLocal", nullptr, nullptr, sizeof(GameplayStatics_eventRebaseZeroOriginOntoLocal_Parms), Z_Construct_UFunction_UGameplayStatics_RebaseZeroOriginOntoLocal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_RebaseZeroOriginOntoLocal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_RebaseZeroOriginOntoLocal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_RebaseZeroOriginOntoLocal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_RebaseZeroOriginOntoLocal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_RebaseZeroOriginOntoLocal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_RemovePlayer_Statics
	{
		struct GameplayStatics_eventRemovePlayer_Parms
		{
			APlayerController* Player;
			bool bDestroyPawn;
		};
		static void NewProp_bDestroyPawn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDestroyPawn;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameplayStatics_RemovePlayer_Statics::NewProp_bDestroyPawn_SetBit(void* Obj)
	{
		((GameplayStatics_eventRemovePlayer_Parms*)Obj)->bDestroyPawn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_RemovePlayer_Statics::NewProp_bDestroyPawn = { "bDestroyPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventRemovePlayer_Parms), &Z_Construct_UFunction_UGameplayStatics_RemovePlayer_Statics::NewProp_bDestroyPawn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_RemovePlayer_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventRemovePlayer_Parms, Player), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_RemovePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_RemovePlayer_Statics::NewProp_bDestroyPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_RemovePlayer_Statics::NewProp_Player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_RemovePlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Removes a player from this game.  \n\x09 *  @param Player\x09\x09\x09The player controller of the player to be removed\n\x09 *  @param bDestroyPawn\x09\x09Whether the controlled pawn should be deleted as well\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Removes a player from this game.\n@param Player                       The player controller of the player to be removed\n@param bDestroyPawn         Whether the controlled pawn should be deleted as well" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_RemovePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "RemovePlayer", nullptr, nullptr, sizeof(GameplayStatics_eventRemovePlayer_Parms), Z_Construct_UFunction_UGameplayStatics_RemovePlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_RemovePlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_RemovePlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_RemovePlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_RemovePlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_RemovePlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_SaveGameToSlot_Statics
	{
		struct GameplayStatics_eventSaveGameToSlot_Parms
		{
			USaveGame* SaveGameObject;
			FString SlotName;
			int32 UserIndex;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UserIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SlotName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SaveGameObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameplayStatics_SaveGameToSlot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameplayStatics_eventSaveGameToSlot_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_SaveGameToSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventSaveGameToSlot_Parms), &Z_Construct_UFunction_UGameplayStatics_SaveGameToSlot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SaveGameToSlot_Statics::NewProp_UserIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameplayStatics_SaveGameToSlot_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSaveGameToSlot_Parms, UserIndex), METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SaveGameToSlot_Statics::NewProp_UserIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SaveGameToSlot_Statics::NewProp_UserIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SaveGameToSlot_Statics::NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameplayStatics_SaveGameToSlot_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSaveGameToSlot_Parms, SlotName), METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SaveGameToSlot_Statics::NewProp_SlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SaveGameToSlot_Statics::NewProp_SlotName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_SaveGameToSlot_Statics::NewProp_SaveGameObject = { "SaveGameObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSaveGameToSlot_Parms, SaveGameObject), Z_Construct_UClass_USaveGame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_SaveGameToSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SaveGameToSlot_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SaveGameToSlot_Statics::NewProp_UserIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SaveGameToSlot_Statics::NewProp_SlotName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SaveGameToSlot_Statics::NewProp_SaveGameObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SaveGameToSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveGame" },
		{ "Comment", "/** \n\x09 * Save the contents of the SaveGameObject to a platform-specific save slot/file.\n\x09 * @note This will write out all non-transient properties, the SaveGame property flag is not checked\n\x09 *\n\x09 * @param SaveGameObject\x09Object that contains data about the save game that we want to write out\n\x09 * @param SlotName\x09\x09\x09Name of save game slot to save to.\n\x09 * @param UserIndex\x09\x09\x09""For some platforms, master user index to identify the user doing the saving.\n\x09 * @return\x09\x09\x09\x09\x09Whether we successfully saved this information\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Save the contents of the SaveGameObject to a platform-specific save slot/file.\n@note This will write out all non-transient properties, the SaveGame property flag is not checked\n\n@param SaveGameObject        Object that contains data about the save game that we want to write out\n@param SlotName                      Name of save game slot to save to.\n@param UserIndex                     For some platforms, master user index to identify the user doing the saving.\n@return                                      Whether we successfully saved this information" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_SaveGameToSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "SaveGameToSlot", nullptr, nullptr, sizeof(GameplayStatics_eventSaveGameToSlot_Parms), Z_Construct_UFunction_UGameplayStatics_SaveGameToSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SaveGameToSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SaveGameToSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SaveGameToSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_SaveGameToSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_SaveGameToSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_SetBaseSoundMix_Statics
	{
		struct GameplayStatics_eventSetBaseSoundMix_Parms
		{
			const UObject* WorldContextObject;
			USoundMix* InSoundMix;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSoundMix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_SetBaseSoundMix_Statics::NewProp_InSoundMix = { "InSoundMix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSetBaseSoundMix_Parms, InSoundMix), Z_Construct_UClass_USoundMix_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SetBaseSoundMix_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_SetBaseSoundMix_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSetBaseSoundMix_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SetBaseSoundMix_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SetBaseSoundMix_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_SetBaseSoundMix_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SetBaseSoundMix_Statics::NewProp_InSoundMix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SetBaseSoundMix_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SetBaseSoundMix_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Set the sound mix of the audio system for special EQing **/" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Set the sound mix of the audio system for special EQing *" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_SetBaseSoundMix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "SetBaseSoundMix", nullptr, nullptr, sizeof(GameplayStatics_eventSetBaseSoundMix_Parms), Z_Construct_UFunction_UGameplayStatics_SetBaseSoundMix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SetBaseSoundMix_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SetBaseSoundMix_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SetBaseSoundMix_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_SetBaseSoundMix()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_SetBaseSoundMix_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_SetEnableWorldRendering_Statics
	{
		struct GameplayStatics_eventSetEnableWorldRendering_Parms
		{
			const UObject* WorldContextObject;
			bool bEnable;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameplayStatics_SetEnableWorldRendering_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((GameplayStatics_eventSetEnableWorldRendering_Parms*)Obj)->bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_SetEnableWorldRendering_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventSetEnableWorldRendering_Parms), &Z_Construct_UFunction_UGameplayStatics_SetEnableWorldRendering_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SetEnableWorldRendering_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_SetEnableWorldRendering_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSetEnableWorldRendering_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SetEnableWorldRendering_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SetEnableWorldRendering_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_SetEnableWorldRendering_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SetEnableWorldRendering_Statics::NewProp_bEnable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SetEnableWorldRendering_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SetEnableWorldRendering_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09 * Enabled rendering of the world\n\x09 * @param\x09""bEnable\x09\x09Whether the world should be rendered or not\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Enabled rendering of the world\n@param       bEnable         Whether the world should be rendered or not" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_SetEnableWorldRendering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "SetEnableWorldRendering", nullptr, nullptr, sizeof(GameplayStatics_eventSetEnableWorldRendering_Parms), Z_Construct_UFunction_UGameplayStatics_SetEnableWorldRendering_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SetEnableWorldRendering_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SetEnableWorldRendering_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SetEnableWorldRendering_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_SetEnableWorldRendering()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_SetEnableWorldRendering_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_SetForceDisableSplitscreen_Statics
	{
		struct GameplayStatics_eventSetForceDisableSplitscreen_Parms
		{
			const UObject* WorldContextObject;
			bool bDisable;
		};
		static void NewProp_bDisable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameplayStatics_SetForceDisableSplitscreen_Statics::NewProp_bDisable_SetBit(void* Obj)
	{
		((GameplayStatics_eventSetForceDisableSplitscreen_Parms*)Obj)->bDisable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_SetForceDisableSplitscreen_Statics::NewProp_bDisable = { "bDisable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventSetForceDisableSplitscreen_Parms), &Z_Construct_UFunction_UGameplayStatics_SetForceDisableSplitscreen_Statics::NewProp_bDisable_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SetForceDisableSplitscreen_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_SetForceDisableSplitscreen_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSetForceDisableSplitscreen_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SetForceDisableSplitscreen_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SetForceDisableSplitscreen_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_SetForceDisableSplitscreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SetForceDisableSplitscreen_Statics::NewProp_bDisable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SetForceDisableSplitscreen_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SetForceDisableSplitscreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "Viewport" },
		{ "Comment", "/**\n\x09 * Enables split screen\n\x09 * @param\x09""bDisable\x09\x09Whether the viewport should split screen between local players or not\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Enables split screen\n@param       bDisable                Whether the viewport should split screen between local players or not" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_SetForceDisableSplitscreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "SetForceDisableSplitscreen", nullptr, nullptr, sizeof(GameplayStatics_eventSetForceDisableSplitscreen_Parms), Z_Construct_UFunction_UGameplayStatics_SetForceDisableSplitscreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SetForceDisableSplitscreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SetForceDisableSplitscreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SetForceDisableSplitscreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_SetForceDisableSplitscreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_SetForceDisableSplitscreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_SetGamePaused_Statics
	{
		struct GameplayStatics_eventSetGamePaused_Parms
		{
			const UObject* WorldContextObject;
			bool bPaused;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bPaused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPaused;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameplayStatics_SetGamePaused_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameplayStatics_eventSetGamePaused_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_SetGamePaused_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventSetGamePaused_Parms), &Z_Construct_UFunction_UGameplayStatics_SetGamePaused_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGameplayStatics_SetGamePaused_Statics::NewProp_bPaused_SetBit(void* Obj)
	{
		((GameplayStatics_eventSetGamePaused_Parms*)Obj)->bPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_SetGamePaused_Statics::NewProp_bPaused = { "bPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventSetGamePaused_Parms), &Z_Construct_UFunction_UGameplayStatics_SetGamePaused_Statics::NewProp_bPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SetGamePaused_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_SetGamePaused_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSetGamePaused_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SetGamePaused_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SetGamePaused_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_SetGamePaused_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SetGamePaused_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SetGamePaused_Statics::NewProp_bPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SetGamePaused_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SetGamePaused_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/**\n\x09 * Sets the game's paused state\n\x09 * @param\x09""bPaused\x09\x09Whether the game should be paused or not\n\x09 * @return\x09Whether the game was successfully paused/unpaused\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Sets the game's paused state\n@param       bPaused         Whether the game should be paused or not\n@return      Whether the game was successfully paused/unpaused" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_SetGamePaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "SetGamePaused", nullptr, nullptr, sizeof(GameplayStatics_eventSetGamePaused_Parms), Z_Construct_UFunction_UGameplayStatics_SetGamePaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SetGamePaused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SetGamePaused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SetGamePaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_SetGamePaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_SetGamePaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_SetGlobalListenerFocusParameters_Statics
	{
		struct GameplayStatics_eventSetGlobalListenerFocusParameters_Parms
		{
			const UObject* WorldContextObject;
			float FocusAzimuthScale;
			float NonFocusAzimuthScale;
			float FocusDistanceScale;
			float NonFocusDistanceScale;
			float FocusVolumeScale;
			float NonFocusVolumeScale;
			float FocusPriorityScale;
			float NonFocusPriorityScale;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NonFocusPriorityScale;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FocusPriorityScale;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NonFocusVolumeScale;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FocusVolumeScale;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NonFocusDistanceScale;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FocusDistanceScale;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NonFocusAzimuthScale;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FocusAzimuthScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_SetGlobalListenerFocusParameters_Statics::NewProp_NonFocusPriorityScale = { "NonFocusPriorityScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSetGlobalListenerFocusParameters_Parms, NonFocusPriorityScale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_SetGlobalListenerFocusParameters_Statics::NewProp_FocusPriorityScale = { "FocusPriorityScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSetGlobalListenerFocusParameters_Parms, FocusPriorityScale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_SetGlobalListenerFocusParameters_Statics::NewProp_NonFocusVolumeScale = { "NonFocusVolumeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSetGlobalListenerFocusParameters_Parms, NonFocusVolumeScale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_SetGlobalListenerFocusParameters_Statics::NewProp_FocusVolumeScale = { "FocusVolumeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSetGlobalListenerFocusParameters_Parms, FocusVolumeScale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_SetGlobalListenerFocusParameters_Statics::NewProp_NonFocusDistanceScale = { "NonFocusDistanceScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSetGlobalListenerFocusParameters_Parms, NonFocusDistanceScale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_SetGlobalListenerFocusParameters_Statics::NewProp_FocusDistanceScale = { "FocusDistanceScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSetGlobalListenerFocusParameters_Parms, FocusDistanceScale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_SetGlobalListenerFocusParameters_Statics::NewProp_NonFocusAzimuthScale = { "NonFocusAzimuthScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSetGlobalListenerFocusParameters_Parms, NonFocusAzimuthScale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_SetGlobalListenerFocusParameters_Statics::NewProp_FocusAzimuthScale = { "FocusAzimuthScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSetGlobalListenerFocusParameters_Parms, FocusAzimuthScale), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SetGlobalListenerFocusParameters_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_SetGlobalListenerFocusParameters_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSetGlobalListenerFocusParameters_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SetGlobalListenerFocusParameters_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SetGlobalListenerFocusParameters_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_SetGlobalListenerFocusParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SetGlobalListenerFocusParameters_Statics::NewProp_NonFocusPriorityScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SetGlobalListenerFocusParameters_Statics::NewProp_FocusPriorityScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SetGlobalListenerFocusParameters_Statics::NewProp_NonFocusVolumeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SetGlobalListenerFocusParameters_Statics::NewProp_FocusVolumeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SetGlobalListenerFocusParameters_Statics::NewProp_NonFocusDistanceScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SetGlobalListenerFocusParameters_Statics::NewProp_FocusDistanceScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SetGlobalListenerFocusParameters_Statics::NewProp_NonFocusAzimuthScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SetGlobalListenerFocusParameters_Statics::NewProp_FocusAzimuthScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SetGlobalListenerFocusParameters_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SetGlobalListenerFocusParameters_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "Comment", "/**\n\x09* Sets the global listener focus parameters which will scale focus behavior of sounds based on their focus azimuth settings in their attenuation settings. \n\x09*\n\x09* * Fire and Forget.\n\x09* * Not Replicated.\n\x09* @param FocusAzimuthScale - An angle scale value used to scale the azimuth angle that defines where sounds are in-focus.\n\x09* @param NonFocusAzimuthScale- An angle scale value used to scale the azimuth angle that defines where sounds are out-of-focus.\n\x09* @param FocusDistanceScale - A distance scale value to use for sounds which are in-focus. Values < 1.0 will reduce perceived distance to sounds, values > 1.0 will increase perceived distance to in-focus sounds.\n\x09* @param NonFocusDistanceScale - A distance scale value to use for sounds which are out-of-focus. Values < 1.0 will reduce perceived distance to sounds, values > 1.0 will increase perceived distance to in-focus sounds.\n\x09* @param FocusVolumeScale- A volume attenuation value to use for sounds which are in-focus.\n\x09* @param NonFocusVolumeScale- A volume attenuation value to use for sounds which are out-of-focus.\n\x09* @param FocusPriorityScale - A priority scale value (> 0.0) to use for sounds which are in-focus. Values < 1.0 will reduce the priority of in-focus sounds, values > 1.0 will increase the priority of in-focus sounds.\n\x09* @param NonFocusPriorityScale - A priority scale value (> 0.0) to use for sounds which are out-of-focus. Values < 1.0 will reduce the priority of sounds out-of-focus sounds, values > 1.0 will increase the priority of out-of-focus sounds.\n\x09*/" },
		{ "CPP_Default_FocusAzimuthScale", "1.000000" },
		{ "CPP_Default_FocusDistanceScale", "1.000000" },
		{ "CPP_Default_FocusPriorityScale", "1.000000" },
		{ "CPP_Default_FocusVolumeScale", "1.000000" },
		{ "CPP_Default_NonFocusAzimuthScale", "1.000000" },
		{ "CPP_Default_NonFocusDistanceScale", "1.000000" },
		{ "CPP_Default_NonFocusPriorityScale", "1.000000" },
		{ "CPP_Default_NonFocusVolumeScale", "1.000000" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Sets the global listener focus parameters which will scale focus behavior of sounds based on their focus azimuth settings in their attenuation settings.\n\n* Fire and Forget.\n* Not Replicated.\n@param FocusAzimuthScale - An angle scale value used to scale the azimuth angle that defines where sounds are in-focus.\n@param NonFocusAzimuthScale- An angle scale value used to scale the azimuth angle that defines where sounds are out-of-focus.\n@param FocusDistanceScale - A distance scale value to use for sounds which are in-focus. Values < 1.0 will reduce perceived distance to sounds, values > 1.0 will increase perceived distance to in-focus sounds.\n@param NonFocusDistanceScale - A distance scale value to use for sounds which are out-of-focus. Values < 1.0 will reduce perceived distance to sounds, values > 1.0 will increase perceived distance to in-focus sounds.\n@param FocusVolumeScale- A volume attenuation value to use for sounds which are in-focus.\n@param NonFocusVolumeScale- A volume attenuation value to use for sounds which are out-of-focus.\n@param FocusPriorityScale - A priority scale value (> 0.0) to use for sounds which are in-focus. Values < 1.0 will reduce the priority of in-focus sounds, values > 1.0 will increase the priority of in-focus sounds.\n@param NonFocusPriorityScale - A priority scale value (> 0.0) to use for sounds which are out-of-focus. Values < 1.0 will reduce the priority of sounds out-of-focus sounds, values > 1.0 will increase the priority of out-of-focus sounds." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_SetGlobalListenerFocusParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "SetGlobalListenerFocusParameters", nullptr, nullptr, sizeof(GameplayStatics_eventSetGlobalListenerFocusParameters_Parms), Z_Construct_UFunction_UGameplayStatics_SetGlobalListenerFocusParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SetGlobalListenerFocusParameters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SetGlobalListenerFocusParameters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SetGlobalListenerFocusParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_SetGlobalListenerFocusParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_SetGlobalListenerFocusParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_SetGlobalPitchModulation_Statics
	{
		struct GameplayStatics_eventSetGlobalPitchModulation_Parms
		{
			const UObject* WorldContextObject;
			float PitchModulation;
			float TimeSec;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeSec;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchModulation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_SetGlobalPitchModulation_Statics::NewProp_TimeSec = { "TimeSec", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSetGlobalPitchModulation_Parms, TimeSec), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_SetGlobalPitchModulation_Statics::NewProp_PitchModulation = { "PitchModulation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSetGlobalPitchModulation_Parms, PitchModulation), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SetGlobalPitchModulation_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_SetGlobalPitchModulation_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSetGlobalPitchModulation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SetGlobalPitchModulation_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SetGlobalPitchModulation_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_SetGlobalPitchModulation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SetGlobalPitchModulation_Statics::NewProp_TimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SetGlobalPitchModulation_Statics::NewProp_PitchModulation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SetGlobalPitchModulation_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SetGlobalPitchModulation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "Comment", "/**\n\x09* Sets a global pitch modulation scalar that will apply to all non-UI sounds\n\x09*\n\x09* * Fire and Forget.\n\x09* * Not Replicated.\n\x09* @param PitchModulation - A pitch modulation value to globally set.\n\x09* @param TimeSec - A time value to linearly interpolate the global modulation pitch over from it's current value.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Sets a global pitch modulation scalar that will apply to all non-UI sounds\n\n* Fire and Forget.\n* Not Replicated.\n@param PitchModulation - A pitch modulation value to globally set.\n@param TimeSec - A time value to linearly interpolate the global modulation pitch over from it's current value." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_SetGlobalPitchModulation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "SetGlobalPitchModulation", nullptr, nullptr, sizeof(GameplayStatics_eventSetGlobalPitchModulation_Parms), Z_Construct_UFunction_UGameplayStatics_SetGlobalPitchModulation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SetGlobalPitchModulation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SetGlobalPitchModulation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SetGlobalPitchModulation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_SetGlobalPitchModulation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_SetGlobalPitchModulation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_SetGlobalTimeDilation_Statics
	{
		struct GameplayStatics_eventSetGlobalTimeDilation_Parms
		{
			const UObject* WorldContextObject;
			float TimeDilation;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeDilation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_SetGlobalTimeDilation_Statics::NewProp_TimeDilation = { "TimeDilation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSetGlobalTimeDilation_Parms, TimeDilation), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SetGlobalTimeDilation_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_SetGlobalTimeDilation_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSetGlobalTimeDilation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SetGlobalTimeDilation_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SetGlobalTimeDilation_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_SetGlobalTimeDilation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SetGlobalTimeDilation_Statics::NewProp_TimeDilation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SetGlobalTimeDilation_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SetGlobalTimeDilation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Time" },
		{ "Comment", "/**\n\x09 * Sets the global time dilation.\n\x09 * @param\x09TimeDilation\x09value to set the global time dilation to\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Sets the global time dilation.\n@param       TimeDilation    value to set the global time dilation to" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_SetGlobalTimeDilation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "SetGlobalTimeDilation", nullptr, nullptr, sizeof(GameplayStatics_eventSetGlobalTimeDilation_Parms), Z_Construct_UFunction_UGameplayStatics_SetGlobalTimeDilation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SetGlobalTimeDilation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SetGlobalTimeDilation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SetGlobalTimeDilation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_SetGlobalTimeDilation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_SetGlobalTimeDilation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_SetMaxAudioChannelsScaled_Statics
	{
		struct GameplayStatics_eventSetMaxAudioChannelsScaled_Parms
		{
			const UObject* WorldContextObject;
			float MaxChannelCountScale;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxChannelCountScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_SetMaxAudioChannelsScaled_Statics::NewProp_MaxChannelCountScale = { "MaxChannelCountScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSetMaxAudioChannelsScaled_Parms, MaxChannelCountScale), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SetMaxAudioChannelsScaled_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_SetMaxAudioChannelsScaled_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSetMaxAudioChannelsScaled_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SetMaxAudioChannelsScaled_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SetMaxAudioChannelsScaled_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_SetMaxAudioChannelsScaled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SetMaxAudioChannelsScaled_Statics::NewProp_MaxChannelCountScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SetMaxAudioChannelsScaled_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SetMaxAudioChannelsScaled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "Comment", "/**\n\x09 * Sets the max number of voices (also known as \"channels\") dynamically by percentage. E.g. if you want to temporarily reduce voice count by 50%, use 0.50. Later, you can return to the original max voice count by using 1.0.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Sets the max number of voices (also known as \"channels\") dynamically by percentage. E.g. if you want to temporarily reduce voice count by 50%, use 0.50. Later, you can return to the original max voice count by using 1.0." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_SetMaxAudioChannelsScaled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "SetMaxAudioChannelsScaled", nullptr, nullptr, sizeof(GameplayStatics_eventSetMaxAudioChannelsScaled_Parms), Z_Construct_UFunction_UGameplayStatics_SetMaxAudioChannelsScaled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SetMaxAudioChannelsScaled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SetMaxAudioChannelsScaled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SetMaxAudioChannelsScaled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_SetMaxAudioChannelsScaled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_SetMaxAudioChannelsScaled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_SetPlayerControllerID_Statics
	{
		struct GameplayStatics_eventSetPlayerControllerID_Parms
		{
			APlayerController* Player;
			int32 ControllerId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ControllerId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameplayStatics_SetPlayerControllerID_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSetPlayerControllerID_Parms, ControllerId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_SetPlayerControllerID_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSetPlayerControllerID_Parms, Player), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_SetPlayerControllerID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SetPlayerControllerID_Statics::NewProp_ControllerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SetPlayerControllerID_Statics::NewProp_Player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SetPlayerControllerID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/** \n\x09 * Sets what controller ID a Player should be using\n\x09 * @param Player\x09\x09\x09The player controller of the player to change the controller ID of\n\x09 * @param ControllerId\x09\x09The controller ID to assign to this player\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Sets what controller ID a Player should be using\n@param Player                        The player controller of the player to change the controller ID of\n@param ControllerId          The controller ID to assign to this player" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_SetPlayerControllerID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "SetPlayerControllerID", nullptr, nullptr, sizeof(GameplayStatics_eventSetPlayerControllerID_Parms), Z_Construct_UFunction_UGameplayStatics_SetPlayerControllerID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SetPlayerControllerID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SetPlayerControllerID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SetPlayerControllerID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_SetPlayerControllerID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_SetPlayerControllerID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_SetSoundClassDistanceScale_Statics
	{
		struct GameplayStatics_eventSetSoundClassDistanceScale_Parms
		{
			const UObject* WorldContextObject;
			USoundClass* SoundClass;
			float DistanceAttenuationScale;
			float TimeSec;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeSec;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceAttenuationScale;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_SetSoundClassDistanceScale_Statics::NewProp_TimeSec = { "TimeSec", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSetSoundClassDistanceScale_Parms, TimeSec), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_SetSoundClassDistanceScale_Statics::NewProp_DistanceAttenuationScale = { "DistanceAttenuationScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSetSoundClassDistanceScale_Parms, DistanceAttenuationScale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_SetSoundClassDistanceScale_Statics::NewProp_SoundClass = { "SoundClass", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSetSoundClassDistanceScale_Parms, SoundClass), Z_Construct_UClass_USoundClass_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SetSoundClassDistanceScale_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_SetSoundClassDistanceScale_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSetSoundClassDistanceScale_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SetSoundClassDistanceScale_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SetSoundClassDistanceScale_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_SetSoundClassDistanceScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SetSoundClassDistanceScale_Statics::NewProp_TimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SetSoundClassDistanceScale_Statics::NewProp_DistanceAttenuationScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SetSoundClassDistanceScale_Statics::NewProp_SoundClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SetSoundClassDistanceScale_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SetSoundClassDistanceScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** \n\x09* Sets attenuation distance scale value on the sound class over the given amount of time from it's current attenuation distance override value (1.0f it not overridden). \n\x09* Attenuation scale allows scaling the attenuation distance used for computing distance attenuation. \n\x09*\n\x09* * Fire and Forget.\n\x09* * Not Replicated.\n\x09* @param SoundClass - Sound class to to use to set the attenuation distance scale on.\n\x09* @param DistanceAttenuationScale - A distance attenuation scale value.\n\x09* @param TimeSec - A time value to linearly interpolate from the current distance attenuation scale value to the new value.\n\x09*/" },
		{ "CPP_Default_TimeSec", "0.000000" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Sets attenuation distance scale value on the sound class over the given amount of time from it's current attenuation distance override value (1.0f it not overridden).\nAttenuation scale allows scaling the attenuation distance used for computing distance attenuation.\n\n* Fire and Forget.\n* Not Replicated.\n@param SoundClass - Sound class to to use to set the attenuation distance scale on.\n@param DistanceAttenuationScale - A distance attenuation scale value.\n@param TimeSec - A time value to linearly interpolate from the current distance attenuation scale value to the new value." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_SetSoundClassDistanceScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "SetSoundClassDistanceScale", nullptr, nullptr, sizeof(GameplayStatics_eventSetSoundClassDistanceScale_Parms), Z_Construct_UFunction_UGameplayStatics_SetSoundClassDistanceScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SetSoundClassDistanceScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SetSoundClassDistanceScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SetSoundClassDistanceScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_SetSoundClassDistanceScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_SetSoundClassDistanceScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_SetSoundMixClassOverride_Statics
	{
		struct GameplayStatics_eventSetSoundMixClassOverride_Parms
		{
			const UObject* WorldContextObject;
			USoundMix* InSoundMixModifier;
			USoundClass* InSoundClass;
			float Volume;
			float Pitch;
			float FadeInTime;
			bool bApplyToChildren;
		};
		static void NewProp_bApplyToChildren_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bApplyToChildren;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeInTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Pitch;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Volume;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSoundClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSoundMixModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameplayStatics_SetSoundMixClassOverride_Statics::NewProp_bApplyToChildren_SetBit(void* Obj)
	{
		((GameplayStatics_eventSetSoundMixClassOverride_Parms*)Obj)->bApplyToChildren = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_SetSoundMixClassOverride_Statics::NewProp_bApplyToChildren = { "bApplyToChildren", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventSetSoundMixClassOverride_Parms), &Z_Construct_UFunction_UGameplayStatics_SetSoundMixClassOverride_Statics::NewProp_bApplyToChildren_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_SetSoundMixClassOverride_Statics::NewProp_FadeInTime = { "FadeInTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSetSoundMixClassOverride_Parms, FadeInTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_SetSoundMixClassOverride_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSetSoundMixClassOverride_Parms, Pitch), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_SetSoundMixClassOverride_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSetSoundMixClassOverride_Parms, Volume), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_SetSoundMixClassOverride_Statics::NewProp_InSoundClass = { "InSoundClass", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSetSoundMixClassOverride_Parms, InSoundClass), Z_Construct_UClass_USoundClass_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_SetSoundMixClassOverride_Statics::NewProp_InSoundMixModifier = { "InSoundMixModifier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSetSoundMixClassOverride_Parms, InSoundMixModifier), Z_Construct_UClass_USoundMix_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SetSoundMixClassOverride_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_SetSoundMixClassOverride_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSetSoundMixClassOverride_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SetSoundMixClassOverride_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SetSoundMixClassOverride_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_SetSoundMixClassOverride_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SetSoundMixClassOverride_Statics::NewProp_bApplyToChildren,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SetSoundMixClassOverride_Statics::NewProp_FadeInTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SetSoundMixClassOverride_Statics::NewProp_Pitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SetSoundMixClassOverride_Statics::NewProp_Volume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SetSoundMixClassOverride_Statics::NewProp_InSoundClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SetSoundMixClassOverride_Statics::NewProp_InSoundMixModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SetSoundMixClassOverride_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SetSoundMixClassOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Overrides the sound class adjuster in the given sound mix. If the sound class does not exist in the input sound mix, the sound class adjustment will be added to the sound mix.\n\x09 * @param InSoundMixModifier The sound mix to modify.\n\x09 * @param InSoundClass The sound class to override (or add) in the sound mix.\n\x09 * @param Volume The volume scale to set the sound class adjuster to.\n\x09 * @param Pitch The pitch scale to set the sound class adjuster to.\n\x09 * @param FadeInTime The interpolation time to use to go from the current sound class adjuster values to the new values.\n\x09 * @param bApplyToChildren Whether or not to apply this override to the sound class' children or to just the specified sound class.\n\x09 */" },
		{ "CPP_Default_bApplyToChildren", "true" },
		{ "CPP_Default_FadeInTime", "1.000000" },
		{ "CPP_Default_Pitch", "1.000000" },
		{ "CPP_Default_Volume", "1.000000" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Overrides the sound class adjuster in the given sound mix. If the sound class does not exist in the input sound mix, the sound class adjustment will be added to the sound mix.\n@param InSoundMixModifier The sound mix to modify.\n@param InSoundClass The sound class to override (or add) in the sound mix.\n@param Volume The volume scale to set the sound class adjuster to.\n@param Pitch The pitch scale to set the sound class adjuster to.\n@param FadeInTime The interpolation time to use to go from the current sound class adjuster values to the new values.\n@param bApplyToChildren Whether or not to apply this override to the sound class' children or to just the specified sound class." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_SetSoundMixClassOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "SetSoundMixClassOverride", nullptr, nullptr, sizeof(GameplayStatics_eventSetSoundMixClassOverride_Parms), Z_Construct_UFunction_UGameplayStatics_SetSoundMixClassOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SetSoundMixClassOverride_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SetSoundMixClassOverride_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SetSoundMixClassOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_SetSoundMixClassOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_SetSoundMixClassOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_SetSubtitlesEnabled_Statics
	{
		struct GameplayStatics_eventSetSubtitlesEnabled_Parms
		{
			bool bEnabled;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameplayStatics_SetSubtitlesEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((GameplayStatics_eventSetSubtitlesEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_SetSubtitlesEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventSetSubtitlesEnabled_Parms), &Z_Construct_UFunction_UGameplayStatics_SetSubtitlesEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_SetSubtitlesEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SetSubtitlesEnabled_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SetSubtitlesEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Subtitles" },
		{ "Comment", "/**\n\x09 * Will set subtitles to be enabled or disabled.\n\x09 * @param bEnabled will enable subtitle drawing if true, disable if false.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Will set subtitles to be enabled or disabled.\n@param bEnabled will enable subtitle drawing if true, disable if false." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_SetSubtitlesEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "SetSubtitlesEnabled", nullptr, nullptr, sizeof(GameplayStatics_eventSetSubtitlesEnabled_Parms), Z_Construct_UFunction_UGameplayStatics_SetSubtitlesEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SetSubtitlesEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SetSubtitlesEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SetSubtitlesEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_SetSubtitlesEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_SetSubtitlesEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_SetViewportMouseCaptureMode_Statics
	{
		struct GameplayStatics_eventSetViewportMouseCaptureMode_Parms
		{
			const UObject* WorldContextObject;
			EMouseCaptureMode MouseCaptureMode;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MouseCaptureMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MouseCaptureMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MouseCaptureMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SetViewportMouseCaptureMode_Statics::NewProp_MouseCaptureMode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameplayStatics_SetViewportMouseCaptureMode_Statics::NewProp_MouseCaptureMode = { "MouseCaptureMode", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSetViewportMouseCaptureMode_Parms, MouseCaptureMode), Z_Construct_UEnum_Engine_EMouseCaptureMode, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SetViewportMouseCaptureMode_Statics::NewProp_MouseCaptureMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SetViewportMouseCaptureMode_Statics::NewProp_MouseCaptureMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameplayStatics_SetViewportMouseCaptureMode_Statics::NewProp_MouseCaptureMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SetViewportMouseCaptureMode_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_SetViewportMouseCaptureMode_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSetViewportMouseCaptureMode_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SetViewportMouseCaptureMode_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SetViewportMouseCaptureMode_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_SetViewportMouseCaptureMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SetViewportMouseCaptureMode_Statics::NewProp_MouseCaptureMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SetViewportMouseCaptureMode_Statics::NewProp_MouseCaptureMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SetViewportMouseCaptureMode_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SetViewportMouseCaptureMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities" },
		{ "Comment", "/**\n\x09 * Sets the current viewport mouse capture mode\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Sets the current viewport mouse capture mode" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_SetViewportMouseCaptureMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "SetViewportMouseCaptureMode", nullptr, nullptr, sizeof(GameplayStatics_eventSetViewportMouseCaptureMode_Parms), Z_Construct_UFunction_UGameplayStatics_SetViewportMouseCaptureMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SetViewportMouseCaptureMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SetViewportMouseCaptureMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SetViewportMouseCaptureMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_SetViewportMouseCaptureMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_SetViewportMouseCaptureMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_SetWorldOriginLocation_Statics
	{
		struct GameplayStatics_eventSetWorldOriginLocation_Parms
		{
			const UObject* WorldContextObject;
			FIntVector NewLocation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_SetWorldOriginLocation_Statics::NewProp_NewLocation = { "NewLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSetWorldOriginLocation_Parms, NewLocation), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SetWorldOriginLocation_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_SetWorldOriginLocation_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSetWorldOriginLocation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SetWorldOriginLocation_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SetWorldOriginLocation_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_SetWorldOriginLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SetWorldOriginLocation_Statics::NewProp_NewLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SetWorldOriginLocation_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SetWorldOriginLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Requests a new location for a world origin. */" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Requests a new location for a world origin." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_SetWorldOriginLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "SetWorldOriginLocation", nullptr, nullptr, sizeof(GameplayStatics_eventSetWorldOriginLocation_Parms), Z_Construct_UFunction_UGameplayStatics_SetWorldOriginLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SetWorldOriginLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SetWorldOriginLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SetWorldOriginLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_SetWorldOriginLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_SetWorldOriginLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_SpawnDecalAtLocation_Statics
	{
		struct GameplayStatics_eventSpawnDecalAtLocation_Parms
		{
			const UObject* WorldContextObject;
			UMaterialInterface* DecalMaterial;
			FVector DecalSize;
			FVector Location;
			FRotator Rotation;
			float LifeSpan;
			UDecalComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LifeSpan;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DecalSize;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DecalMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SpawnDecalAtLocation_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnDecalAtLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnDecalAtLocation_Parms, ReturnValue), Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SpawnDecalAtLocation_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SpawnDecalAtLocation_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnDecalAtLocation_Statics::NewProp_LifeSpan = { "LifeSpan", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnDecalAtLocation_Parms, LifeSpan), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnDecalAtLocation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnDecalAtLocation_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnDecalAtLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnDecalAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnDecalAtLocation_Statics::NewProp_DecalSize = { "DecalSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnDecalAtLocation_Parms, DecalSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnDecalAtLocation_Statics::NewProp_DecalMaterial = { "DecalMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnDecalAtLocation_Parms, DecalMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SpawnDecalAtLocation_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnDecalAtLocation_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnDecalAtLocation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SpawnDecalAtLocation_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SpawnDecalAtLocation_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_SpawnDecalAtLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnDecalAtLocation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnDecalAtLocation_Statics::NewProp_LifeSpan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnDecalAtLocation_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnDecalAtLocation_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnDecalAtLocation_Statics::NewProp_DecalSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnDecalAtLocation_Statics::NewProp_DecalMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnDecalAtLocation_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SpawnDecalAtLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Decal" },
		{ "Comment", "/** Spawns a decal at the given location and rotation, fire and forget. Does not replicate.\n\x09 * @param DecalMaterial - decal's material\n\x09 * @param DecalSize - size of decal\n\x09 * @param Location - location to place the decal in world space\n\x09 * @param Rotation - rotation to place the decal in world space\x09\n\x09 * @param LifeSpan - destroy decal component after time runs out (0 = infinite)\n\x09 */" },
		{ "CPP_Default_LifeSpan", "0.000000" },
		{ "CPP_Default_Rotation", "-90.000000,0.000000,0.000000" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Spawns a decal at the given location and rotation, fire and forget. Does not replicate.\n@param DecalMaterial - decal's material\n@param DecalSize - size of decal\n@param Location - location to place the decal in world space\n@param Rotation - rotation to place the decal in world space\n@param LifeSpan - destroy decal component after time runs out (0 = infinite)" },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_SpawnDecalAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "SpawnDecalAtLocation", nullptr, nullptr, sizeof(GameplayStatics_eventSpawnDecalAtLocation_Parms), Z_Construct_UFunction_UGameplayStatics_SpawnDecalAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SpawnDecalAtLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SpawnDecalAtLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SpawnDecalAtLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_SpawnDecalAtLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_SpawnDecalAtLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_SpawnDecalAttached_Statics
	{
		struct GameplayStatics_eventSpawnDecalAttached_Parms
		{
			UMaterialInterface* DecalMaterial;
			FVector DecalSize;
			USceneComponent* AttachToComponent;
			FName AttachPointName;
			FVector Location;
			FRotator Rotation;
			TEnumAsByte<EAttachLocation::Type> LocationType;
			float LifeSpan;
			UDecalComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LifeSpan;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LocationType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttachPointName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachToComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttachToComponent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DecalSize;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DecalMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SpawnDecalAttached_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnDecalAttached_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnDecalAttached_Parms, ReturnValue), Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SpawnDecalAttached_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SpawnDecalAttached_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnDecalAttached_Statics::NewProp_LifeSpan = { "LifeSpan", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnDecalAttached_Parms, LifeSpan), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnDecalAttached_Statics::NewProp_LocationType = { "LocationType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnDecalAttached_Parms, LocationType), Z_Construct_UEnum_Engine_EAttachLocation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnDecalAttached_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnDecalAttached_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnDecalAttached_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnDecalAttached_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnDecalAttached_Statics::NewProp_AttachPointName = { "AttachPointName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnDecalAttached_Parms, AttachPointName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SpawnDecalAttached_Statics::NewProp_AttachToComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnDecalAttached_Statics::NewProp_AttachToComponent = { "AttachToComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnDecalAttached_Parms, AttachToComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SpawnDecalAttached_Statics::NewProp_AttachToComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SpawnDecalAttached_Statics::NewProp_AttachToComponent_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnDecalAttached_Statics::NewProp_DecalSize = { "DecalSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnDecalAttached_Parms, DecalSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnDecalAttached_Statics::NewProp_DecalMaterial = { "DecalMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnDecalAttached_Parms, DecalMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_SpawnDecalAttached_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnDecalAttached_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnDecalAttached_Statics::NewProp_LifeSpan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnDecalAttached_Statics::NewProp_LocationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnDecalAttached_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnDecalAttached_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnDecalAttached_Statics::NewProp_AttachPointName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnDecalAttached_Statics::NewProp_AttachToComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnDecalAttached_Statics::NewProp_DecalSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnDecalAttached_Statics::NewProp_DecalMaterial,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SpawnDecalAttached_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Decal" },
		{ "Comment", "/** Spawns a decal attached to and following the specified component. Does not replicate.\n\x09 * @param DecalMaterial - decal's material\n\x09 * @param DecalSize - size of decal\n\x09 * @param AttachComponent - Component to attach to.\n\x09 * @param AttachPointName - Optional named point within the AttachComponent to spawn the emitter at\n\x09 * @param Location - Depending on the value of Location Type this is either a relative offset from the attach component/point or an absolute world position that will be translated to a relative offset\n\x09 * @param Rotation - Depending on the value of LocationType this is either a relative offset from the attach component/point or an absolute world rotation that will be translated to a realative offset\n\x09 * @param LocationType - Specifies whether Location is a relative offset or an absolute world position\n\x09 * @param LifeSpan - destroy decal component after time runs out (0 = infinite)\n\x09 */" },
		{ "CPP_Default_AttachPointName", "None" },
		{ "CPP_Default_LifeSpan", "0.000000" },
		{ "CPP_Default_Location", "" },
		{ "CPP_Default_LocationType", "KeepRelativeOffset" },
		{ "CPP_Default_Rotation", "" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Spawns a decal attached to and following the specified component. Does not replicate.\n@param DecalMaterial - decal's material\n@param DecalSize - size of decal\n@param AttachComponent - Component to attach to.\n@param AttachPointName - Optional named point within the AttachComponent to spawn the emitter at\n@param Location - Depending on the value of Location Type this is either a relative offset from the attach component/point or an absolute world position that will be translated to a relative offset\n@param Rotation - Depending on the value of LocationType this is either a relative offset from the attach component/point or an absolute world rotation that will be translated to a realative offset\n@param LocationType - Specifies whether Location is a relative offset or an absolute world position\n@param LifeSpan - destroy decal component after time runs out (0 = infinite)" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_SpawnDecalAttached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "SpawnDecalAttached", nullptr, nullptr, sizeof(GameplayStatics_eventSpawnDecalAttached_Parms), Z_Construct_UFunction_UGameplayStatics_SpawnDecalAttached_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SpawnDecalAttached_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SpawnDecalAttached_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SpawnDecalAttached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_SpawnDecalAttached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_SpawnDecalAttached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_SpawnDialogue2D_Statics
	{
		struct GameplayStatics_eventSpawnDialogue2D_Parms
		{
			const UObject* WorldContextObject;
			UDialogueWave* Dialogue;
			FDialogueContext Context;
			float VolumeMultiplier;
			float PitchMultiplier;
			float StartTime;
			bool bAutoDestroy;
			UAudioComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_bAutoDestroy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Context;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SpawnDialogue2D_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnDialogue2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnDialogue2D_Parms, ReturnValue), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SpawnDialogue2D_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SpawnDialogue2D_Statics::NewProp_ReturnValue_MetaData)) };
	void Z_Construct_UFunction_UGameplayStatics_SpawnDialogue2D_Statics::NewProp_bAutoDestroy_SetBit(void* Obj)
	{
		((GameplayStatics_eventSpawnDialogue2D_Parms*)Obj)->bAutoDestroy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnDialogue2D_Statics::NewProp_bAutoDestroy = { "bAutoDestroy", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventSpawnDialogue2D_Parms), &Z_Construct_UFunction_UGameplayStatics_SpawnDialogue2D_Statics::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnDialogue2D_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnDialogue2D_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnDialogue2D_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnDialogue2D_Parms, PitchMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnDialogue2D_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnDialogue2D_Parms, VolumeMultiplier), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SpawnDialogue2D_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnDialogue2D_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnDialogue2D_Parms, Context), Z_Construct_UScriptStruct_FDialogueContext, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SpawnDialogue2D_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SpawnDialogue2D_Statics::NewProp_Context_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnDialogue2D_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnDialogue2D_Parms, Dialogue), Z_Construct_UClass_UDialogueWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SpawnDialogue2D_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnDialogue2D_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnDialogue2D_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SpawnDialogue2D_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SpawnDialogue2D_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_SpawnDialogue2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnDialogue2D_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnDialogue2D_Statics::NewProp_bAutoDestroy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnDialogue2D_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnDialogue2D_Statics::NewProp_PitchMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnDialogue2D_Statics::NewProp_VolumeMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnDialogue2D_Statics::NewProp_Context,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnDialogue2D_Statics::NewProp_Dialogue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnDialogue2D_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SpawnDialogue2D_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "Category", "Audio" },
		{ "Comment", "/**\n\x09 * Spawns a dialogue with no attenuation, perfect for UI.\n\x09 *\n\x09 * * Not Replicated.\n\x09 * @param Dialogue - dialogue to play\n\x09 * @param Context - context the dialogue is to play in\n\x09 * @param VolumeMultiplier - Multiplied with the volume to make the sound louder or softer.\n\x09 * @param PitchMultiplier - Multiplies the pitch.\n\x09 * @param StartTime - How far in to the dialogue to begin playback at\n\x09 * @param bAutoDestroy - Whether the returned audio component will be automatically cleaned up when the sound finishes (by completing or stopping) or whether it can be reactivated\n\x09 * @return An audio component to manipulate the spawned sound\n\x09 */" },
		{ "CPP_Default_bAutoDestroy", "true" },
		{ "CPP_Default_PitchMultiplier", "1.000000" },
		{ "CPP_Default_StartTime", "0.000000" },
		{ "CPP_Default_VolumeMultiplier", "1.000000" },
		{ "Keywords", "play" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Spawns a dialogue with no attenuation, perfect for UI.\n\n* Not Replicated.\n@param Dialogue - dialogue to play\n@param Context - context the dialogue is to play in\n@param VolumeMultiplier - Multiplied with the volume to make the sound louder or softer.\n@param PitchMultiplier - Multiplies the pitch.\n@param StartTime - How far in to the dialogue to begin playback at\n@param bAutoDestroy - Whether the returned audio component will be automatically cleaned up when the sound finishes (by completing or stopping) or whether it can be reactivated\n@return An audio component to manipulate the spawned sound" },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_SpawnDialogue2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "SpawnDialogue2D", nullptr, nullptr, sizeof(GameplayStatics_eventSpawnDialogue2D_Parms), Z_Construct_UFunction_UGameplayStatics_SpawnDialogue2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SpawnDialogue2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SpawnDialogue2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SpawnDialogue2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_SpawnDialogue2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_SpawnDialogue2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAtLocation_Statics
	{
		struct GameplayStatics_eventSpawnDialogueAtLocation_Parms
		{
			const UObject* WorldContextObject;
			UDialogueWave* Dialogue;
			FDialogueContext Context;
			FVector Location;
			FRotator Rotation;
			float VolumeMultiplier;
			float PitchMultiplier;
			float StartTime;
			USoundAttenuation* AttenuationSettings;
			bool bAutoDestroy;
			UAudioComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_bAutoDestroy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttenuationSettings;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Context;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAtLocation_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAtLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnDialogueAtLocation_Parms, ReturnValue), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAtLocation_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAtLocation_Statics::NewProp_ReturnValue_MetaData)) };
	void Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAtLocation_Statics::NewProp_bAutoDestroy_SetBit(void* Obj)
	{
		((GameplayStatics_eventSpawnDialogueAtLocation_Parms*)Obj)->bAutoDestroy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAtLocation_Statics::NewProp_bAutoDestroy = { "bAutoDestroy", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventSpawnDialogueAtLocation_Parms), &Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAtLocation_Statics::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAtLocation_Statics::NewProp_AttenuationSettings = { "AttenuationSettings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnDialogueAtLocation_Parms, AttenuationSettings), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAtLocation_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnDialogueAtLocation_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAtLocation_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnDialogueAtLocation_Parms, PitchMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAtLocation_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnDialogueAtLocation_Parms, VolumeMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAtLocation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnDialogueAtLocation_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAtLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnDialogueAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAtLocation_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAtLocation_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnDialogueAtLocation_Parms, Context), Z_Construct_UScriptStruct_FDialogueContext, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAtLocation_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAtLocation_Statics::NewProp_Context_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAtLocation_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnDialogueAtLocation_Parms, Dialogue), Z_Construct_UClass_UDialogueWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAtLocation_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAtLocation_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnDialogueAtLocation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAtLocation_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAtLocation_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAtLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAtLocation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAtLocation_Statics::NewProp_bAutoDestroy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAtLocation_Statics::NewProp_AttenuationSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAtLocation_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAtLocation_Statics::NewProp_PitchMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAtLocation_Statics::NewProp_VolumeMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAtLocation_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAtLocation_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAtLocation_Statics::NewProp_Context,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAtLocation_Statics::NewProp_Dialogue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAtLocation_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAtLocation_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "4" },
		{ "Category", "Audio" },
		{ "Comment", "/** Plays a dialogue at the given location. This is a fire and forget sound and does not travel with any actor. Replication is also not handled at this point.\n\x09 * @param Dialogue - dialogue to play\n\x09 * @param Context - context the dialogue is to play in\n\x09 * @param Location - World position to play dialogue at\n\x09 * @param Rotation - World rotation to play dialogue at\n\x09 * @param VolumeMultiplier - Volume multiplier \n\x09 * @param PitchMultiplier - PitchMultiplier\n\x09 * @param StartTime - How far in to the dialogue to begin playback at\n\x09 * @param AttenuationSettings - Override attenuation settings package to play sound with\n\x09 * @param bAutoDestroy - Whether the returned audio component will be automatically cleaned up when the sound finishes (by completing or stopping) or whether it can be reactivated\n\x09 * @return Audio Component to manipulate the playing dialogue with\n\x09 */" },
		{ "CPP_Default_AttenuationSettings", "None" },
		{ "CPP_Default_bAutoDestroy", "true" },
		{ "CPP_Default_PitchMultiplier", "1.000000" },
		{ "CPP_Default_Rotation", "" },
		{ "CPP_Default_StartTime", "0.000000" },
		{ "CPP_Default_VolumeMultiplier", "1.000000" },
		{ "Keywords", "play" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Plays a dialogue at the given location. This is a fire and forget sound and does not travel with any actor. Replication is also not handled at this point.\n@param Dialogue - dialogue to play\n@param Context - context the dialogue is to play in\n@param Location - World position to play dialogue at\n@param Rotation - World rotation to play dialogue at\n@param VolumeMultiplier - Volume multiplier\n@param PitchMultiplier - PitchMultiplier\n@param StartTime - How far in to the dialogue to begin playback at\n@param AttenuationSettings - Override attenuation settings package to play sound with\n@param bAutoDestroy - Whether the returned audio component will be automatically cleaned up when the sound finishes (by completing or stopping) or whether it can be reactivated\n@return Audio Component to manipulate the playing dialogue with" },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "SpawnDialogueAtLocation", nullptr, nullptr, sizeof(GameplayStatics_eventSpawnDialogueAtLocation_Parms), Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAtLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAtLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAtLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAtLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAtLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAttached_Statics
	{
		struct GameplayStatics_eventSpawnDialogueAttached_Parms
		{
			UDialogueWave* Dialogue;
			FDialogueContext Context;
			USceneComponent* AttachToComponent;
			FName AttachPointName;
			FVector Location;
			FRotator Rotation;
			TEnumAsByte<EAttachLocation::Type> LocationType;
			bool bStopWhenAttachedToDestroyed;
			float VolumeMultiplier;
			float PitchMultiplier;
			float StartTime;
			USoundAttenuation* AttenuationSettings;
			bool bAutoDestroy;
			UAudioComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_bAutoDestroy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttenuationSettings;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
		static void NewProp_bStopWhenAttachedToDestroyed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopWhenAttachedToDestroyed;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LocationType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttachPointName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachToComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttachToComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Context;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAttached_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAttached_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnDialogueAttached_Parms, ReturnValue), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAttached_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAttached_Statics::NewProp_ReturnValue_MetaData)) };
	void Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAttached_Statics::NewProp_bAutoDestroy_SetBit(void* Obj)
	{
		((GameplayStatics_eventSpawnDialogueAttached_Parms*)Obj)->bAutoDestroy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAttached_Statics::NewProp_bAutoDestroy = { "bAutoDestroy", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventSpawnDialogueAttached_Parms), &Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAttached_Statics::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAttached_Statics::NewProp_AttenuationSettings = { "AttenuationSettings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnDialogueAttached_Parms, AttenuationSettings), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAttached_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnDialogueAttached_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAttached_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnDialogueAttached_Parms, PitchMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAttached_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnDialogueAttached_Parms, VolumeMultiplier), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAttached_Statics::NewProp_bStopWhenAttachedToDestroyed_SetBit(void* Obj)
	{
		((GameplayStatics_eventSpawnDialogueAttached_Parms*)Obj)->bStopWhenAttachedToDestroyed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAttached_Statics::NewProp_bStopWhenAttachedToDestroyed = { "bStopWhenAttachedToDestroyed", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventSpawnDialogueAttached_Parms), &Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAttached_Statics::NewProp_bStopWhenAttachedToDestroyed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAttached_Statics::NewProp_LocationType = { "LocationType", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnDialogueAttached_Parms, LocationType), Z_Construct_UEnum_Engine_EAttachLocation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAttached_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnDialogueAttached_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAttached_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnDialogueAttached_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAttached_Statics::NewProp_AttachPointName = { "AttachPointName", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnDialogueAttached_Parms, AttachPointName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAttached_Statics::NewProp_AttachToComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAttached_Statics::NewProp_AttachToComponent = { "AttachToComponent", nullptr, (EPropertyFlags)0x0010040000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnDialogueAttached_Parms, AttachToComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAttached_Statics::NewProp_AttachToComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAttached_Statics::NewProp_AttachToComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAttached_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAttached_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnDialogueAttached_Parms, Context), Z_Construct_UScriptStruct_FDialogueContext, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAttached_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAttached_Statics::NewProp_Context_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAttached_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnDialogueAttached_Parms, Dialogue), Z_Construct_UClass_UDialogueWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAttached_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAttached_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAttached_Statics::NewProp_bAutoDestroy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAttached_Statics::NewProp_AttenuationSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAttached_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAttached_Statics::NewProp_PitchMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAttached_Statics::NewProp_VolumeMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAttached_Statics::NewProp_bStopWhenAttachedToDestroyed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAttached_Statics::NewProp_LocationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAttached_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAttached_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAttached_Statics::NewProp_AttachPointName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAttached_Statics::NewProp_AttachToComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAttached_Statics::NewProp_Context,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAttached_Statics::NewProp_Dialogue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAttached_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "Audio" },
		{ "Comment", "/** Spawns a dialogue attached to and following the specified component. This is a fire and forget sound. Replication is also not handled at this point.\n\x09 * @param Dialogue - dialogue to play\n\x09 * @param Context - context the dialogue is to play in\n\x09 * @param AttachComponent - Component to attach to.\n\x09 * @param AttachPointName - Optional named point within the AttachComponent to play the sound at\n\x09 * @param Location - Depending on the value of Location Type this is either a relative offset from the attach component/point or an absolute world position that will be translated to a relative offset\n\x09 * @param Rotation - Depending on the value of Location Type this is either a relative offset from the attach component/point or an absolute world rotation that will be translated to a relative offset\n\x09 * @param LocationType - Specifies whether Location is a relative offset or an absolute world position\n\x09 * @param bStopWhenAttachedToDestroyed - Specifies whether the sound should stop playing when the owner of the attach to component is destroyed.\n\x09 * @param VolumeMultiplier - Volume multiplier \n\x09 * @param PitchMultiplier - PitchMultiplier\x09 \n\x09 * @param StartTime - How far in to the dialogue to begin playback at\n\x09 * @param AttenuationSettings - Override attenuation settings package to play sound with\n\x09 * @param bAutoDestroy - Whether the returned audio component will be automatically cleaned up when the sound finishes (by completing or stopping) or whether it can be reactivated\n\x09 * @return Audio Component to manipulate the playing dialogue with\n\x09 */" },
		{ "CPP_Default_AttachPointName", "None" },
		{ "CPP_Default_AttenuationSettings", "None" },
		{ "CPP_Default_bAutoDestroy", "true" },
		{ "CPP_Default_bStopWhenAttachedToDestroyed", "false" },
		{ "CPP_Default_Location", "" },
		{ "CPP_Default_LocationType", "KeepRelativeOffset" },
		{ "CPP_Default_PitchMultiplier", "1.000000" },
		{ "CPP_Default_Rotation", "" },
		{ "CPP_Default_StartTime", "0.000000" },
		{ "CPP_Default_VolumeMultiplier", "1.000000" },
		{ "Keywords", "play" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Spawns a dialogue attached to and following the specified component. This is a fire and forget sound. Replication is also not handled at this point.\n@param Dialogue - dialogue to play\n@param Context - context the dialogue is to play in\n@param AttachComponent - Component to attach to.\n@param AttachPointName - Optional named point within the AttachComponent to play the sound at\n@param Location - Depending on the value of Location Type this is either a relative offset from the attach component/point or an absolute world position that will be translated to a relative offset\n@param Rotation - Depending on the value of Location Type this is either a relative offset from the attach component/point or an absolute world rotation that will be translated to a relative offset\n@param LocationType - Specifies whether Location is a relative offset or an absolute world position\n@param bStopWhenAttachedToDestroyed - Specifies whether the sound should stop playing when the owner of the attach to component is destroyed.\n@param VolumeMultiplier - Volume multiplier\n@param PitchMultiplier - PitchMultiplier\n@param StartTime - How far in to the dialogue to begin playback at\n@param AttenuationSettings - Override attenuation settings package to play sound with\n@param bAutoDestroy - Whether the returned audio component will be automatically cleaned up when the sound finishes (by completing or stopping) or whether it can be reactivated\n@return Audio Component to manipulate the playing dialogue with" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAttached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "SpawnDialogueAttached", nullptr, nullptr, sizeof(GameplayStatics_eventSpawnDialogueAttached_Parms), Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAttached_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAttached_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAttached_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAttached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAttached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAttached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAtLocation_Statics
	{
		struct GameplayStatics_eventSpawnEmitterAtLocation_Parms
		{
			const UObject* WorldContextObject;
			UParticleSystem* EmitterTemplate;
			FVector Location;
			FRotator Rotation;
			FVector Scale;
			bool bAutoDestroy;
			EPSCPoolMethod PoolingMethod;
			bool bAutoActivateSystem;
			UParticleSystemComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_bAutoActivateSystem_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoActivateSystem;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PoolingMethod;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PoolingMethod_Underlying;
		static void NewProp_bAutoDestroy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EmitterTemplate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAtLocation_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAtLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnEmitterAtLocation_Parms, ReturnValue), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAtLocation_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAtLocation_Statics::NewProp_ReturnValue_MetaData)) };
	void Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAtLocation_Statics::NewProp_bAutoActivateSystem_SetBit(void* Obj)
	{
		((GameplayStatics_eventSpawnEmitterAtLocation_Parms*)Obj)->bAutoActivateSystem = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAtLocation_Statics::NewProp_bAutoActivateSystem = { "bAutoActivateSystem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventSpawnEmitterAtLocation_Parms), &Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAtLocation_Statics::NewProp_bAutoActivateSystem_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAtLocation_Statics::NewProp_PoolingMethod = { "PoolingMethod", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnEmitterAtLocation_Parms, PoolingMethod), Z_Construct_UEnum_Engine_EPSCPoolMethod, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAtLocation_Statics::NewProp_PoolingMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAtLocation_Statics::NewProp_bAutoDestroy_SetBit(void* Obj)
	{
		((GameplayStatics_eventSpawnEmitterAtLocation_Parms*)Obj)->bAutoDestroy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAtLocation_Statics::NewProp_bAutoDestroy = { "bAutoDestroy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventSpawnEmitterAtLocation_Parms), &Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAtLocation_Statics::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAtLocation_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnEmitterAtLocation_Parms, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAtLocation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnEmitterAtLocation_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAtLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnEmitterAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAtLocation_Statics::NewProp_EmitterTemplate = { "EmitterTemplate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnEmitterAtLocation_Parms, EmitterTemplate), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAtLocation_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAtLocation_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnEmitterAtLocation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAtLocation_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAtLocation_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAtLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAtLocation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAtLocation_Statics::NewProp_bAutoActivateSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAtLocation_Statics::NewProp_PoolingMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAtLocation_Statics::NewProp_PoolingMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAtLocation_Statics::NewProp_bAutoDestroy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAtLocation_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAtLocation_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAtLocation_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAtLocation_Statics::NewProp_EmitterTemplate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAtLocation_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAtLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "Comment", "/** Plays the specified effect at the given location and rotation, fire and forget. The system will go away when the effect is complete. Does not replicate.\n\x09 * @param WorldContextObject - Object that we can obtain a world context from\n\x09 * @param EmitterTemplate - particle system to create\n\x09 * @param Location - location to place the effect in world space\n\x09 * @param Rotation - rotation to place the effect in world space\x09\n\x09 * @param Scale - scale to create the effect at\n\x09 * @param bAutoDestroy - Whether the component will automatically be destroyed when the particle system completes playing or whether it can be reactivated\n\x09 * @param PoolingMethod - Method used for pooling this component. Defaults to none.\n\x09 * @param bAutoActivate - Whether the component will be automatically activated on creation.\n\x09 */" },
		{ "CPP_Default_bAutoActivateSystem", "true" },
		{ "CPP_Default_bAutoDestroy", "true" },
		{ "CPP_Default_PoolingMethod", "None" },
		{ "CPP_Default_Rotation", "" },
		{ "CPP_Default_Scale", "1.000000,1.000000,1.000000" },
		{ "Keywords", "particle system" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Plays the specified effect at the given location and rotation, fire and forget. The system will go away when the effect is complete. Does not replicate.\n@param WorldContextObject - Object that we can obtain a world context from\n@param EmitterTemplate - particle system to create\n@param Location - location to place the effect in world space\n@param Rotation - rotation to place the effect in world space\n@param Scale - scale to create the effect at\n@param bAutoDestroy - Whether the component will automatically be destroyed when the particle system completes playing or whether it can be reactivated\n@param PoolingMethod - Method used for pooling this component. Defaults to none.\n@param bAutoActivate - Whether the component will be automatically activated on creation." },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "SpawnEmitterAtLocation", nullptr, nullptr, sizeof(GameplayStatics_eventSpawnEmitterAtLocation_Parms), Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAtLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAtLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAtLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAtLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAtLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAttached_Statics
	{
		struct GameplayStatics_eventSpawnEmitterAttached_Parms
		{
			UParticleSystem* EmitterTemplate;
			USceneComponent* AttachToComponent;
			FName AttachPointName;
			FVector Location;
			FRotator Rotation;
			FVector Scale;
			TEnumAsByte<EAttachLocation::Type> LocationType;
			bool bAutoDestroy;
			EPSCPoolMethod PoolingMethod;
			bool bAutoActivate;
			UParticleSystemComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_bAutoActivate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoActivate;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PoolingMethod;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PoolingMethod_Underlying;
		static void NewProp_bAutoDestroy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LocationType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttachPointName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachToComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttachToComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EmitterTemplate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAttached_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAttached_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnEmitterAttached_Parms, ReturnValue), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAttached_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAttached_Statics::NewProp_ReturnValue_MetaData)) };
	void Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAttached_Statics::NewProp_bAutoActivate_SetBit(void* Obj)
	{
		((GameplayStatics_eventSpawnEmitterAttached_Parms*)Obj)->bAutoActivate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAttached_Statics::NewProp_bAutoActivate = { "bAutoActivate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventSpawnEmitterAttached_Parms), &Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAttached_Statics::NewProp_bAutoActivate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAttached_Statics::NewProp_PoolingMethod = { "PoolingMethod", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnEmitterAttached_Parms, PoolingMethod), Z_Construct_UEnum_Engine_EPSCPoolMethod, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAttached_Statics::NewProp_PoolingMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAttached_Statics::NewProp_bAutoDestroy_SetBit(void* Obj)
	{
		((GameplayStatics_eventSpawnEmitterAttached_Parms*)Obj)->bAutoDestroy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAttached_Statics::NewProp_bAutoDestroy = { "bAutoDestroy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventSpawnEmitterAttached_Parms), &Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAttached_Statics::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAttached_Statics::NewProp_LocationType = { "LocationType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnEmitterAttached_Parms, LocationType), Z_Construct_UEnum_Engine_EAttachLocation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAttached_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnEmitterAttached_Parms, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAttached_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnEmitterAttached_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAttached_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnEmitterAttached_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAttached_Statics::NewProp_AttachPointName = { "AttachPointName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnEmitterAttached_Parms, AttachPointName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAttached_Statics::NewProp_AttachToComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAttached_Statics::NewProp_AttachToComponent = { "AttachToComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnEmitterAttached_Parms, AttachToComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAttached_Statics::NewProp_AttachToComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAttached_Statics::NewProp_AttachToComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAttached_Statics::NewProp_EmitterTemplate = { "EmitterTemplate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnEmitterAttached_Parms, EmitterTemplate), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAttached_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAttached_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAttached_Statics::NewProp_bAutoActivate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAttached_Statics::NewProp_PoolingMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAttached_Statics::NewProp_PoolingMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAttached_Statics::NewProp_bAutoDestroy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAttached_Statics::NewProp_LocationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAttached_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAttached_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAttached_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAttached_Statics::NewProp_AttachPointName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAttached_Statics::NewProp_AttachToComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAttached_Statics::NewProp_EmitterTemplate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAttached_Statics::Function_MetaDataParams[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "Comment", "/** Plays the specified effect attached to and following the specified component. The system will go away when the effect is complete. Does not replicate.\n\x09* @param EmitterTemplate - particle system to create\n\x09 * @param AttachComponent - Component to attach to.\n\x09 * @param AttachPointName - Optional named point within the AttachComponent to spawn the emitter at\n\x09 * @param Location - Depending on the value of LocationType this is either a relative offset from the attach component/point or an absolute world location that will be translated to a relative offset (if LocationType is KeepWorldPosition).\n\x09 * @param Rotation - Depending on the value of LocationType this is either a relative offset from the attach component/point or an absolute world rotation that will be translated to a relative offset (if LocationType is KeepWorldPosition).\n\x09 * @param Scale - Depending on the value of LocationType this is either a relative scale from the attach component or an absolute world scale that will be translated to a relative scale (if LocationType is KeepWorldPosition).\n\x09 * @param LocationType - Specifies whether Location is a relative offset or an absolute world position\n\x09 * @param bAutoDestroy - Whether the component will automatically be destroyed when the particle system completes playing or whether it can be reactivated\n\x09 * @param PoolingMethod - Method used for pooling this component. Defaults to none.\n\x09 * @param bAutoActivate - Whether the component will be automatically activated on creation.\n\x09 */" },
		{ "CPP_Default_AttachPointName", "None" },
		{ "CPP_Default_bAutoActivate", "true" },
		{ "CPP_Default_bAutoDestroy", "true" },
		{ "CPP_Default_Location", "" },
		{ "CPP_Default_LocationType", "KeepRelativeOffset" },
		{ "CPP_Default_PoolingMethod", "None" },
		{ "CPP_Default_Rotation", "" },
		{ "CPP_Default_Scale", "1.000000,1.000000,1.000000" },
		{ "Keywords", "particle system" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Plays the specified effect attached to and following the specified component. The system will go away when the effect is complete. Does not replicate.\n@param EmitterTemplate - particle system to create\n@param AttachComponent - Component to attach to.\n@param AttachPointName - Optional named point within the AttachComponent to spawn the emitter at\n@param Location - Depending on the value of LocationType this is either a relative offset from the attach component/point or an absolute world location that will be translated to a relative offset (if LocationType is KeepWorldPosition).\n@param Rotation - Depending on the value of LocationType this is either a relative offset from the attach component/point or an absolute world rotation that will be translated to a relative offset (if LocationType is KeepWorldPosition).\n@param Scale - Depending on the value of LocationType this is either a relative scale from the attach component or an absolute world scale that will be translated to a relative scale (if LocationType is KeepWorldPosition).\n@param LocationType - Specifies whether Location is a relative offset or an absolute world position\n@param bAutoDestroy - Whether the component will automatically be destroyed when the particle system completes playing or whether it can be reactivated\n@param PoolingMethod - Method used for pooling this component. Defaults to none.\n@param bAutoActivate - Whether the component will be automatically activated on creation." },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAttached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "SpawnEmitterAttached", nullptr, nullptr, sizeof(GameplayStatics_eventSpawnEmitterAttached_Parms), Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAttached_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAttached_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAttached_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAttached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAttached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAttached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAtLocation_Statics
	{
		struct GameplayStatics_eventSpawnForceFeedbackAtLocation_Parms
		{
			const UObject* WorldContextObject;
			UForceFeedbackEffect* ForceFeedbackEffect;
			FVector Location;
			FRotator Rotation;
			bool bLooping;
			float IntensityMultiplier;
			float StartTime;
			UForceFeedbackAttenuation* AttenuationSettings;
			bool bAutoDestroy;
			UForceFeedbackComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_bAutoDestroy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttenuationSettings;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IntensityMultiplier;
		static void NewProp_bLooping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLooping;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ForceFeedbackEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAtLocation_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAtLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnForceFeedbackAtLocation_Parms, ReturnValue), Z_Construct_UClass_UForceFeedbackComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAtLocation_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAtLocation_Statics::NewProp_ReturnValue_MetaData)) };
	void Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAtLocation_Statics::NewProp_bAutoDestroy_SetBit(void* Obj)
	{
		((GameplayStatics_eventSpawnForceFeedbackAtLocation_Parms*)Obj)->bAutoDestroy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAtLocation_Statics::NewProp_bAutoDestroy = { "bAutoDestroy", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventSpawnForceFeedbackAtLocation_Parms), &Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAtLocation_Statics::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAtLocation_Statics::NewProp_AttenuationSettings = { "AttenuationSettings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnForceFeedbackAtLocation_Parms, AttenuationSettings), Z_Construct_UClass_UForceFeedbackAttenuation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAtLocation_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnForceFeedbackAtLocation_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAtLocation_Statics::NewProp_IntensityMultiplier = { "IntensityMultiplier", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnForceFeedbackAtLocation_Parms, IntensityMultiplier), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAtLocation_Statics::NewProp_bLooping_SetBit(void* Obj)
	{
		((GameplayStatics_eventSpawnForceFeedbackAtLocation_Parms*)Obj)->bLooping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAtLocation_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventSpawnForceFeedbackAtLocation_Parms), &Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAtLocation_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAtLocation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnForceFeedbackAtLocation_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAtLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnForceFeedbackAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAtLocation_Statics::NewProp_ForceFeedbackEffect = { "ForceFeedbackEffect", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnForceFeedbackAtLocation_Parms, ForceFeedbackEffect), Z_Construct_UClass_UForceFeedbackEffect_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAtLocation_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAtLocation_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnForceFeedbackAtLocation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAtLocation_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAtLocation_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAtLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAtLocation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAtLocation_Statics::NewProp_bAutoDestroy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAtLocation_Statics::NewProp_AttenuationSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAtLocation_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAtLocation_Statics::NewProp_IntensityMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAtLocation_Statics::NewProp_bLooping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAtLocation_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAtLocation_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAtLocation_Statics::NewProp_ForceFeedbackEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAtLocation_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAtLocation_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "Category", "ForceFeedback" },
		{ "Comment", "/** Plays a force feedback effect at the given location. This is a fire and forget effect and does not travel with any actor. Replication is also not handled at this point.\n\x09 * @param ForceFeedbackEffect - effect to play\n\x09 * @param Location - World position to center the effect at\n\x09 * @param Rotation - World rotation to center the effect at\n\x09 * @param IntensityMultiplier - Intensity multiplier \n\x09 * @param StartTime - How far in to the feedback effect to begin playback at\n\x09 * @param AttenuationSettings - Override attenuation settings package to play effect with\n\x09 * @param bAutoDestroy - Whether the returned force feedback component will be automatically cleaned up when the feedback patern finishes (by completing or stopping) or whether it can be reactivated\n\x09 * @return Force Feedback Component to manipulate the playing feedback effect with\n\x09 */" },
		{ "CPP_Default_AttenuationSettings", "None" },
		{ "CPP_Default_bAutoDestroy", "true" },
		{ "CPP_Default_bLooping", "false" },
		{ "CPP_Default_IntensityMultiplier", "1.000000" },
		{ "CPP_Default_Rotation", "" },
		{ "CPP_Default_StartTime", "0.000000" },
		{ "Keywords", "play" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Plays a force feedback effect at the given location. This is a fire and forget effect and does not travel with any actor. Replication is also not handled at this point.\n@param ForceFeedbackEffect - effect to play\n@param Location - World position to center the effect at\n@param Rotation - World rotation to center the effect at\n@param IntensityMultiplier - Intensity multiplier\n@param StartTime - How far in to the feedback effect to begin playback at\n@param AttenuationSettings - Override attenuation settings package to play effect with\n@param bAutoDestroy - Whether the returned force feedback component will be automatically cleaned up when the feedback patern finishes (by completing or stopping) or whether it can be reactivated\n@return Force Feedback Component to manipulate the playing feedback effect with" },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "SpawnForceFeedbackAtLocation", nullptr, nullptr, sizeof(GameplayStatics_eventSpawnForceFeedbackAtLocation_Parms), Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAtLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAtLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAtLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAtLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAtLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAttached_Statics
	{
		struct GameplayStatics_eventSpawnForceFeedbackAttached_Parms
		{
			UForceFeedbackEffect* ForceFeedbackEffect;
			USceneComponent* AttachToComponent;
			FName AttachPointName;
			FVector Location;
			FRotator Rotation;
			TEnumAsByte<EAttachLocation::Type> LocationType;
			bool bStopWhenAttachedToDestroyed;
			bool bLooping;
			float IntensityMultiplier;
			float StartTime;
			UForceFeedbackAttenuation* AttenuationSettings;
			bool bAutoDestroy;
			UForceFeedbackComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_bAutoDestroy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttenuationSettings;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IntensityMultiplier;
		static void NewProp_bLooping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLooping;
		static void NewProp_bStopWhenAttachedToDestroyed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopWhenAttachedToDestroyed;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LocationType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttachPointName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachToComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttachToComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ForceFeedbackEffect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAttached_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAttached_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnForceFeedbackAttached_Parms, ReturnValue), Z_Construct_UClass_UForceFeedbackComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAttached_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAttached_Statics::NewProp_ReturnValue_MetaData)) };
	void Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAttached_Statics::NewProp_bAutoDestroy_SetBit(void* Obj)
	{
		((GameplayStatics_eventSpawnForceFeedbackAttached_Parms*)Obj)->bAutoDestroy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAttached_Statics::NewProp_bAutoDestroy = { "bAutoDestroy", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventSpawnForceFeedbackAttached_Parms), &Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAttached_Statics::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAttached_Statics::NewProp_AttenuationSettings = { "AttenuationSettings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnForceFeedbackAttached_Parms, AttenuationSettings), Z_Construct_UClass_UForceFeedbackAttenuation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAttached_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnForceFeedbackAttached_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAttached_Statics::NewProp_IntensityMultiplier = { "IntensityMultiplier", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnForceFeedbackAttached_Parms, IntensityMultiplier), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAttached_Statics::NewProp_bLooping_SetBit(void* Obj)
	{
		((GameplayStatics_eventSpawnForceFeedbackAttached_Parms*)Obj)->bLooping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAttached_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventSpawnForceFeedbackAttached_Parms), &Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAttached_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAttached_Statics::NewProp_bStopWhenAttachedToDestroyed_SetBit(void* Obj)
	{
		((GameplayStatics_eventSpawnForceFeedbackAttached_Parms*)Obj)->bStopWhenAttachedToDestroyed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAttached_Statics::NewProp_bStopWhenAttachedToDestroyed = { "bStopWhenAttachedToDestroyed", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventSpawnForceFeedbackAttached_Parms), &Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAttached_Statics::NewProp_bStopWhenAttachedToDestroyed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAttached_Statics::NewProp_LocationType = { "LocationType", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnForceFeedbackAttached_Parms, LocationType), Z_Construct_UEnum_Engine_EAttachLocation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAttached_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnForceFeedbackAttached_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAttached_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnForceFeedbackAttached_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAttached_Statics::NewProp_AttachPointName = { "AttachPointName", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnForceFeedbackAttached_Parms, AttachPointName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAttached_Statics::NewProp_AttachToComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAttached_Statics::NewProp_AttachToComponent = { "AttachToComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnForceFeedbackAttached_Parms, AttachToComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAttached_Statics::NewProp_AttachToComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAttached_Statics::NewProp_AttachToComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAttached_Statics::NewProp_ForceFeedbackEffect = { "ForceFeedbackEffect", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnForceFeedbackAttached_Parms, ForceFeedbackEffect), Z_Construct_UClass_UForceFeedbackEffect_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAttached_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAttached_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAttached_Statics::NewProp_bAutoDestroy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAttached_Statics::NewProp_AttenuationSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAttached_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAttached_Statics::NewProp_IntensityMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAttached_Statics::NewProp_bLooping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAttached_Statics::NewProp_bStopWhenAttachedToDestroyed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAttached_Statics::NewProp_LocationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAttached_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAttached_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAttached_Statics::NewProp_AttachPointName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAttached_Statics::NewProp_AttachToComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAttached_Statics::NewProp_ForceFeedbackEffect,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAttached_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "ForceFeedback" },
		{ "Comment", "/** Plays a force feedback effect attached to and following the specified component. This is a fire and forget effect. Replication is also not handled at this point.\n\x09 * @param ForceFeedbackEffect - effect to play\n\x09 * @param AttachComponent - Component to attach to.\n\x09 * @param AttachPointName - Optional named point within the AttachComponent to attach to\n\x09 * @param Location - Depending on the value of Location Type this is either a relative offset from the attach component/point or an absolute world position that will be translated to a relative offset\n\x09 * @param Rotation - Depending on the value of Location Type this is either a relative offset from the attach component/point or an absolute world rotation that will be translated to a relative offset\n\x09 * @param LocationType - Specifies whether Location is a relative offset or an absolute world position\n\x09 * @param bStopWhenAttachedToDestroyed - Specifies whether the feedback effect should stop playing when the owner of the attach to component is destroyed.\n\x09 * @param IntensityMultiplier - Intensity multiplier \n\x09 * @param StartTime - How far in to the feedback effect to begin playback at\n\x09 * @param AttenuationSettings - Override attenuation settings package to play effect with\n\x09 * @param bAutoDestroy - Whether the returned force feedback component will be automatically cleaned up when the feedback patern finishes (by completing or stopping) or whether it can be reactivated\n\x09 * @return Force Feedback Component to manipulate the playing feedback effect with\n\x09*/" },
		{ "CPP_Default_AttachPointName", "None" },
		{ "CPP_Default_AttenuationSettings", "None" },
		{ "CPP_Default_bAutoDestroy", "true" },
		{ "CPP_Default_bLooping", "false" },
		{ "CPP_Default_bStopWhenAttachedToDestroyed", "false" },
		{ "CPP_Default_IntensityMultiplier", "1.000000" },
		{ "CPP_Default_Location", "" },
		{ "CPP_Default_LocationType", "KeepRelativeOffset" },
		{ "CPP_Default_Rotation", "" },
		{ "CPP_Default_StartTime", "0.000000" },
		{ "Keywords", "play" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Plays a force feedback effect attached to and following the specified component. This is a fire and forget effect. Replication is also not handled at this point.\n@param ForceFeedbackEffect - effect to play\n@param AttachComponent - Component to attach to.\n@param AttachPointName - Optional named point within the AttachComponent to attach to\n@param Location - Depending on the value of Location Type this is either a relative offset from the attach component/point or an absolute world position that will be translated to a relative offset\n@param Rotation - Depending on the value of Location Type this is either a relative offset from the attach component/point or an absolute world rotation that will be translated to a relative offset\n@param LocationType - Specifies whether Location is a relative offset or an absolute world position\n@param bStopWhenAttachedToDestroyed - Specifies whether the feedback effect should stop playing when the owner of the attach to component is destroyed.\n@param IntensityMultiplier - Intensity multiplier\n@param StartTime - How far in to the feedback effect to begin playback at\n@param AttenuationSettings - Override attenuation settings package to play effect with\n@param bAutoDestroy - Whether the returned force feedback component will be automatically cleaned up when the feedback patern finishes (by completing or stopping) or whether it can be reactivated\n@return Force Feedback Component to manipulate the playing feedback effect with" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAttached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "SpawnForceFeedbackAttached", nullptr, nullptr, sizeof(GameplayStatics_eventSpawnForceFeedbackAttached_Parms), Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAttached_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAttached_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAttached_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAttached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAttached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAttached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_SpawnObject_Statics
	{
		struct GameplayStatics_eventSpawnObject_Parms
		{
			TSubclassOf<UObject>  ObjectClass;
			UObject* Outer;
			UObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Outer;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ObjectClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnObject_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnObject_Statics::NewProp_Outer = { "Outer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnObject_Parms, Outer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnObject_Statics::NewProp_ObjectClass = { "ObjectClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnObject_Parms, ObjectClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_SpawnObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnObject_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnObject_Statics::NewProp_Outer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnObject_Statics::NewProp_ObjectClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SpawnObject_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Spawning" },
		{ "Comment", "// --- Create Object\n" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "--- Create Object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_SpawnObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "SpawnObject", nullptr, nullptr, sizeof(GameplayStatics_eventSpawnObject_Parms), Z_Construct_UFunction_UGameplayStatics_SpawnObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SpawnObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SpawnObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SpawnObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_SpawnObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_SpawnObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_SpawnSound2D_Statics
	{
		struct GameplayStatics_eventSpawnSound2D_Parms
		{
			const UObject* WorldContextObject;
			USoundBase* Sound;
			float VolumeMultiplier;
			float PitchMultiplier;
			float StartTime;
			USoundConcurrency* ConcurrencySettings;
			bool bPersistAcrossLevelTransition;
			bool bAutoDestroy;
			UAudioComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_bAutoDestroy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy;
		static void NewProp_bPersistAcrossLevelTransition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPersistAcrossLevelTransition;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConcurrencySettings;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SpawnSound2D_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnSound2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnSound2D_Parms, ReturnValue), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SpawnSound2D_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SpawnSound2D_Statics::NewProp_ReturnValue_MetaData)) };
	void Z_Construct_UFunction_UGameplayStatics_SpawnSound2D_Statics::NewProp_bAutoDestroy_SetBit(void* Obj)
	{
		((GameplayStatics_eventSpawnSound2D_Parms*)Obj)->bAutoDestroy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnSound2D_Statics::NewProp_bAutoDestroy = { "bAutoDestroy", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventSpawnSound2D_Parms), &Z_Construct_UFunction_UGameplayStatics_SpawnSound2D_Statics::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGameplayStatics_SpawnSound2D_Statics::NewProp_bPersistAcrossLevelTransition_SetBit(void* Obj)
	{
		((GameplayStatics_eventSpawnSound2D_Parms*)Obj)->bPersistAcrossLevelTransition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnSound2D_Statics::NewProp_bPersistAcrossLevelTransition = { "bPersistAcrossLevelTransition", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventSpawnSound2D_Parms), &Z_Construct_UFunction_UGameplayStatics_SpawnSound2D_Statics::NewProp_bPersistAcrossLevelTransition_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnSound2D_Statics::NewProp_ConcurrencySettings = { "ConcurrencySettings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnSound2D_Parms, ConcurrencySettings), Z_Construct_UClass_USoundConcurrency_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnSound2D_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnSound2D_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnSound2D_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnSound2D_Parms, PitchMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnSound2D_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnSound2D_Parms, VolumeMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnSound2D_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnSound2D_Parms, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SpawnSound2D_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnSound2D_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnSound2D_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SpawnSound2D_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SpawnSound2D_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_SpawnSound2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnSound2D_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnSound2D_Statics::NewProp_bAutoDestroy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnSound2D_Statics::NewProp_bPersistAcrossLevelTransition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnSound2D_Statics::NewProp_ConcurrencySettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnSound2D_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnSound2D_Statics::NewProp_PitchMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnSound2D_Statics::NewProp_VolumeMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnSound2D_Statics::NewProp_Sound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnSound2D_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SpawnSound2D_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "Audio" },
		{ "Comment", "/**\n\x09 * Spawns a sound with no attenuation, perfect for UI sounds.\n\x09 *\n\x09 * * Not Replicated.\n\x09 * @param Sound - Sound to play.\n\x09 * @param VolumeMultiplier - Multiplied with the volume to make the sound louder or softer.\n\x09 * @param PitchMultiplier - Multiplies the pitch.\n\x09 * @param StartTime - How far in to the sound to begin playback at\n\x09 * @param ConcurrencySettings - Override concurrency settings package to play sound with\n\x09 * @param PersistAcrossLevelTransition - Whether the sound should continue to play when the map it was played in is unloaded\n\x09 * @param bAutoDestroy - Whether the returned audio component will be automatically cleaned up when the sound finishes (by completing or stopping) or whether it can be reactivated\n\x09 * @return An audio component to manipulate the spawned sound\n\x09 */" },
		{ "CPP_Default_bAutoDestroy", "true" },
		{ "CPP_Default_bPersistAcrossLevelTransition", "false" },
		{ "CPP_Default_ConcurrencySettings", "None" },
		{ "CPP_Default_PitchMultiplier", "1.000000" },
		{ "CPP_Default_StartTime", "0.000000" },
		{ "CPP_Default_VolumeMultiplier", "1.000000" },
		{ "Keywords", "play" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Spawns a sound with no attenuation, perfect for UI sounds.\n\n* Not Replicated.\n@param Sound - Sound to play.\n@param VolumeMultiplier - Multiplied with the volume to make the sound louder or softer.\n@param PitchMultiplier - Multiplies the pitch.\n@param StartTime - How far in to the sound to begin playback at\n@param ConcurrencySettings - Override concurrency settings package to play sound with\n@param PersistAcrossLevelTransition - Whether the sound should continue to play when the map it was played in is unloaded\n@param bAutoDestroy - Whether the returned audio component will be automatically cleaned up when the sound finishes (by completing or stopping) or whether it can be reactivated\n@return An audio component to manipulate the spawned sound" },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_SpawnSound2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "SpawnSound2D", nullptr, nullptr, sizeof(GameplayStatics_eventSpawnSound2D_Parms), Z_Construct_UFunction_UGameplayStatics_SpawnSound2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SpawnSound2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SpawnSound2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SpawnSound2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_SpawnSound2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_SpawnSound2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_SpawnSoundAtLocation_Statics
	{
		struct GameplayStatics_eventSpawnSoundAtLocation_Parms
		{
			const UObject* WorldContextObject;
			USoundBase* Sound;
			FVector Location;
			FRotator Rotation;
			float VolumeMultiplier;
			float PitchMultiplier;
			float StartTime;
			USoundAttenuation* AttenuationSettings;
			USoundConcurrency* ConcurrencySettings;
			bool bAutoDestroy;
			UAudioComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_bAutoDestroy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConcurrencySettings;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttenuationSettings;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SpawnSoundAtLocation_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnSoundAtLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnSoundAtLocation_Parms, ReturnValue), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SpawnSoundAtLocation_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SpawnSoundAtLocation_Statics::NewProp_ReturnValue_MetaData)) };
	void Z_Construct_UFunction_UGameplayStatics_SpawnSoundAtLocation_Statics::NewProp_bAutoDestroy_SetBit(void* Obj)
	{
		((GameplayStatics_eventSpawnSoundAtLocation_Parms*)Obj)->bAutoDestroy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnSoundAtLocation_Statics::NewProp_bAutoDestroy = { "bAutoDestroy", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventSpawnSoundAtLocation_Parms), &Z_Construct_UFunction_UGameplayStatics_SpawnSoundAtLocation_Statics::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnSoundAtLocation_Statics::NewProp_ConcurrencySettings = { "ConcurrencySettings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnSoundAtLocation_Parms, ConcurrencySettings), Z_Construct_UClass_USoundConcurrency_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnSoundAtLocation_Statics::NewProp_AttenuationSettings = { "AttenuationSettings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnSoundAtLocation_Parms, AttenuationSettings), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnSoundAtLocation_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnSoundAtLocation_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnSoundAtLocation_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnSoundAtLocation_Parms, PitchMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnSoundAtLocation_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnSoundAtLocation_Parms, VolumeMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnSoundAtLocation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnSoundAtLocation_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnSoundAtLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnSoundAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnSoundAtLocation_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnSoundAtLocation_Parms, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SpawnSoundAtLocation_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnSoundAtLocation_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnSoundAtLocation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SpawnSoundAtLocation_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SpawnSoundAtLocation_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_SpawnSoundAtLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnSoundAtLocation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnSoundAtLocation_Statics::NewProp_bAutoDestroy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnSoundAtLocation_Statics::NewProp_ConcurrencySettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnSoundAtLocation_Statics::NewProp_AttenuationSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnSoundAtLocation_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnSoundAtLocation_Statics::NewProp_PitchMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnSoundAtLocation_Statics::NewProp_VolumeMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnSoundAtLocation_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnSoundAtLocation_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnSoundAtLocation_Statics::NewProp_Sound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnSoundAtLocation_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SpawnSoundAtLocation_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "Category", "Audio" },
		{ "Comment", "/**\n\x09 * Spawns a sound at the given location. This does not travel with any actor. Replication is also not handled at this point.\n\x09 * @param Sound - sound to play\n\x09 * @param Location - World position to play sound at\n\x09 * @param Rotation - World rotation to play sound at\n\x09 * @param VolumeMultiplier - Volume multiplier \n\x09 * @param PitchMultiplier - PitchMultiplier\n\x09 * @param StartTime - How far in to the sound to begin playback at\n\x09 * @param AttenuationSettings - Override attenuation settings package to play sound with\n\x09 * @param ConcurrencySettings - Override concurrency settings package to play sound with\n\x09 * @param bAutoDestroy - Whether the returned audio component will be automatically cleaned up when the sound finishes (by completing or stopping) or whether it can be reactivated\n\x09 * @return An audio component to manipulate the spawned sound\n\x09 */" },
		{ "CPP_Default_AttenuationSettings", "None" },
		{ "CPP_Default_bAutoDestroy", "true" },
		{ "CPP_Default_ConcurrencySettings", "None" },
		{ "CPP_Default_PitchMultiplier", "1.000000" },
		{ "CPP_Default_Rotation", "" },
		{ "CPP_Default_StartTime", "0.000000" },
		{ "CPP_Default_VolumeMultiplier", "1.000000" },
		{ "Keywords", "play" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Spawns a sound at the given location. This does not travel with any actor. Replication is also not handled at this point.\n@param Sound - sound to play\n@param Location - World position to play sound at\n@param Rotation - World rotation to play sound at\n@param VolumeMultiplier - Volume multiplier\n@param PitchMultiplier - PitchMultiplier\n@param StartTime - How far in to the sound to begin playback at\n@param AttenuationSettings - Override attenuation settings package to play sound with\n@param ConcurrencySettings - Override concurrency settings package to play sound with\n@param bAutoDestroy - Whether the returned audio component will be automatically cleaned up when the sound finishes (by completing or stopping) or whether it can be reactivated\n@return An audio component to manipulate the spawned sound" },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_SpawnSoundAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "SpawnSoundAtLocation", nullptr, nullptr, sizeof(GameplayStatics_eventSpawnSoundAtLocation_Parms), Z_Construct_UFunction_UGameplayStatics_SpawnSoundAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SpawnSoundAtLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SpawnSoundAtLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SpawnSoundAtLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_SpawnSoundAtLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_SpawnSoundAtLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_SpawnSoundAttached_Statics
	{
		struct GameplayStatics_eventSpawnSoundAttached_Parms
		{
			USoundBase* Sound;
			USceneComponent* AttachToComponent;
			FName AttachPointName;
			FVector Location;
			FRotator Rotation;
			TEnumAsByte<EAttachLocation::Type> LocationType;
			bool bStopWhenAttachedToDestroyed;
			float VolumeMultiplier;
			float PitchMultiplier;
			float StartTime;
			USoundAttenuation* AttenuationSettings;
			USoundConcurrency* ConcurrencySettings;
			bool bAutoDestroy;
			UAudioComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_bAutoDestroy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConcurrencySettings;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttenuationSettings;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
		static void NewProp_bStopWhenAttachedToDestroyed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopWhenAttachedToDestroyed;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LocationType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttachPointName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachToComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttachToComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SpawnSoundAttached_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnSoundAttached_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnSoundAttached_Parms, ReturnValue), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SpawnSoundAttached_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SpawnSoundAttached_Statics::NewProp_ReturnValue_MetaData)) };
	void Z_Construct_UFunction_UGameplayStatics_SpawnSoundAttached_Statics::NewProp_bAutoDestroy_SetBit(void* Obj)
	{
		((GameplayStatics_eventSpawnSoundAttached_Parms*)Obj)->bAutoDestroy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnSoundAttached_Statics::NewProp_bAutoDestroy = { "bAutoDestroy", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventSpawnSoundAttached_Parms), &Z_Construct_UFunction_UGameplayStatics_SpawnSoundAttached_Statics::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnSoundAttached_Statics::NewProp_ConcurrencySettings = { "ConcurrencySettings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnSoundAttached_Parms, ConcurrencySettings), Z_Construct_UClass_USoundConcurrency_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnSoundAttached_Statics::NewProp_AttenuationSettings = { "AttenuationSettings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnSoundAttached_Parms, AttenuationSettings), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnSoundAttached_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnSoundAttached_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnSoundAttached_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnSoundAttached_Parms, PitchMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnSoundAttached_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnSoundAttached_Parms, VolumeMultiplier), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGameplayStatics_SpawnSoundAttached_Statics::NewProp_bStopWhenAttachedToDestroyed_SetBit(void* Obj)
	{
		((GameplayStatics_eventSpawnSoundAttached_Parms*)Obj)->bStopWhenAttachedToDestroyed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnSoundAttached_Statics::NewProp_bStopWhenAttachedToDestroyed = { "bStopWhenAttachedToDestroyed", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventSpawnSoundAttached_Parms), &Z_Construct_UFunction_UGameplayStatics_SpawnSoundAttached_Statics::NewProp_bStopWhenAttachedToDestroyed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnSoundAttached_Statics::NewProp_LocationType = { "LocationType", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnSoundAttached_Parms, LocationType), Z_Construct_UEnum_Engine_EAttachLocation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnSoundAttached_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnSoundAttached_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnSoundAttached_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnSoundAttached_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnSoundAttached_Statics::NewProp_AttachPointName = { "AttachPointName", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnSoundAttached_Parms, AttachPointName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SpawnSoundAttached_Statics::NewProp_AttachToComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnSoundAttached_Statics::NewProp_AttachToComponent = { "AttachToComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnSoundAttached_Parms, AttachToComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SpawnSoundAttached_Statics::NewProp_AttachToComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SpawnSoundAttached_Statics::NewProp_AttachToComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_SpawnSoundAttached_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSpawnSoundAttached_Parms, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_SpawnSoundAttached_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnSoundAttached_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnSoundAttached_Statics::NewProp_bAutoDestroy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnSoundAttached_Statics::NewProp_ConcurrencySettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnSoundAttached_Statics::NewProp_AttenuationSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnSoundAttached_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnSoundAttached_Statics::NewProp_PitchMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnSoundAttached_Statics::NewProp_VolumeMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnSoundAttached_Statics::NewProp_bStopWhenAttachedToDestroyed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnSoundAttached_Statics::NewProp_LocationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnSoundAttached_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnSoundAttached_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnSoundAttached_Statics::NewProp_AttachPointName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnSoundAttached_Statics::NewProp_AttachToComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SpawnSoundAttached_Statics::NewProp_Sound,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SpawnSoundAttached_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "Audio" },
		{ "Comment", "/** Plays a sound attached to and following the specified component. This is a fire and forget sound. Replication is also not handled at this point.\n\x09 * @param Sound - sound to play\n\x09 * @param AttachComponent - Component to attach to.\n\x09 * @param AttachPointName - Optional named point within the AttachComponent to play the sound at\n\x09 * @param Location - Depending on the value of Location Type this is either a relative offset from the attach component/point or an absolute world position that will be translated to a relative offset\n\x09 * @param Rotation - Depending on the value of Location Type this is either a relative offset from the attach component/point or an absolute world rotation that will be translated to a relative offset\n\x09 * @param LocationType - Specifies whether Location is a relative offset or an absolute world position\n\x09 * @param bStopWhenAttachedToDestroyed - Specifies whether the sound should stop playing when the owner of the attach to component is destroyed.\n\x09 * @param VolumeMultiplier - Volume multiplier \n\x09 * @param PitchMultiplier - PitchMultiplier\x09 \n\x09 * @param StartTime - How far in to the sound to begin playback at\n\x09 * @param AttenuationSettings - Override attenuation settings package to play sound with\n\x09 * @param ConcurrencySettings - Override concurrency settings package to play sound with\n\x09 * @param bAutoDestroy - Whether the returned audio component will be automatically cleaned up when the sound finishes (by completing or stopping) or whether it can be reactivated\n\x09 * @return An audio component to manipulate the spawned sound\n\x09 */" },
		{ "CPP_Default_AttachPointName", "None" },
		{ "CPP_Default_AttenuationSettings", "None" },
		{ "CPP_Default_bAutoDestroy", "true" },
		{ "CPP_Default_bStopWhenAttachedToDestroyed", "false" },
		{ "CPP_Default_ConcurrencySettings", "None" },
		{ "CPP_Default_Location", "" },
		{ "CPP_Default_LocationType", "KeepRelativeOffset" },
		{ "CPP_Default_PitchMultiplier", "1.000000" },
		{ "CPP_Default_Rotation", "" },
		{ "CPP_Default_StartTime", "0.000000" },
		{ "CPP_Default_VolumeMultiplier", "1.000000" },
		{ "Keywords", "play" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Plays a sound attached to and following the specified component. This is a fire and forget sound. Replication is also not handled at this point.\n@param Sound - sound to play\n@param AttachComponent - Component to attach to.\n@param AttachPointName - Optional named point within the AttachComponent to play the sound at\n@param Location - Depending on the value of Location Type this is either a relative offset from the attach component/point or an absolute world position that will be translated to a relative offset\n@param Rotation - Depending on the value of Location Type this is either a relative offset from the attach component/point or an absolute world rotation that will be translated to a relative offset\n@param LocationType - Specifies whether Location is a relative offset or an absolute world position\n@param bStopWhenAttachedToDestroyed - Specifies whether the sound should stop playing when the owner of the attach to component is destroyed.\n@param VolumeMultiplier - Volume multiplier\n@param PitchMultiplier - PitchMultiplier\n@param StartTime - How far in to the sound to begin playback at\n@param AttenuationSettings - Override attenuation settings package to play sound with\n@param ConcurrencySettings - Override concurrency settings package to play sound with\n@param bAutoDestroy - Whether the returned audio component will be automatically cleaned up when the sound finishes (by completing or stopping) or whether it can be reactivated\n@return An audio component to manipulate the spawned sound" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_SpawnSoundAttached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "SpawnSoundAttached", nullptr, nullptr, sizeof(GameplayStatics_eventSpawnSoundAttached_Parms), Z_Construct_UFunction_UGameplayStatics_SpawnSoundAttached_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SpawnSoundAttached_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SpawnSoundAttached_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SpawnSoundAttached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_SpawnSoundAttached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_SpawnSoundAttached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_SuggestProjectileVelocity_CustomArc_Statics
	{
		struct GameplayStatics_eventSuggestProjectileVelocity_CustomArc_Parms
		{
			const UObject* WorldContextObject;
			FVector OutLaunchVelocity;
			FVector StartPos;
			FVector EndPos;
			float OverrideGravityZ;
			float ArcParam;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ArcParam;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OverrideGravityZ;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndPos;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartPos;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutLaunchVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameplayStatics_SuggestProjectileVelocity_CustomArc_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameplayStatics_eventSuggestProjectileVelocity_CustomArc_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_SuggestProjectileVelocity_CustomArc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventSuggestProjectileVelocity_CustomArc_Parms), &Z_Construct_UFunction_UGameplayStatics_SuggestProjectileVelocity_CustomArc_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_SuggestProjectileVelocity_CustomArc_Statics::NewProp_ArcParam = { "ArcParam", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSuggestProjectileVelocity_CustomArc_Parms, ArcParam), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayStatics_SuggestProjectileVelocity_CustomArc_Statics::NewProp_OverrideGravityZ = { "OverrideGravityZ", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSuggestProjectileVelocity_CustomArc_Parms, OverrideGravityZ), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_SuggestProjectileVelocity_CustomArc_Statics::NewProp_EndPos = { "EndPos", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSuggestProjectileVelocity_CustomArc_Parms, EndPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_SuggestProjectileVelocity_CustomArc_Statics::NewProp_StartPos = { "StartPos", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSuggestProjectileVelocity_CustomArc_Parms, StartPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_SuggestProjectileVelocity_CustomArc_Statics::NewProp_OutLaunchVelocity = { "OutLaunchVelocity", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSuggestProjectileVelocity_CustomArc_Parms, OutLaunchVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SuggestProjectileVelocity_CustomArc_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_SuggestProjectileVelocity_CustomArc_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventSuggestProjectileVelocity_CustomArc_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SuggestProjectileVelocity_CustomArc_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SuggestProjectileVelocity_CustomArc_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_SuggestProjectileVelocity_CustomArc_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SuggestProjectileVelocity_CustomArc_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SuggestProjectileVelocity_CustomArc_Statics::NewProp_ArcParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SuggestProjectileVelocity_CustomArc_Statics::NewProp_OverrideGravityZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SuggestProjectileVelocity_CustomArc_Statics::NewProp_EndPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SuggestProjectileVelocity_CustomArc_Statics::NewProp_StartPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SuggestProjectileVelocity_CustomArc_Statics::NewProp_OutLaunchVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_SuggestProjectileVelocity_CustomArc_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_SuggestProjectileVelocity_CustomArc_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "OverrideGravityZ, ArcParam" },
		{ "Category", "Game" },
		{ "Comment", "/**\n\x09* Returns the launch velocity needed for a projectile at rest at StartPos to land on EndPos.\n\x09* Assumes a medium arc (e.g. 45 deg on level ground). Projectile velocity is variable and unconstrained.\n\x09* Does no tracing.\n\x09*\n\x09* @param OutLaunchVelocity\x09\x09\x09Returns the launch velocity required to reach the EndPos\n\x09* @param StartPos\x09\x09\x09\x09\x09Start position of the simulation\n\x09* @param EndPos\x09\x09\x09\x09\x09\x09""Desired end location for the simulation\n\x09* @param OverrideGravityZ\x09\x09\x09Optional override of WorldGravityZ\n\x09* @param ArcParam\x09\x09\x09\x09\x09""Change height of arc between 0.0-1.0 where 0.5 is the default medium arc, 0 is up, and 1 is directly toward EndPos.\n\x09*/" },
		{ "CPP_Default_ArcParam", "0.500000" },
		{ "CPP_Default_OverrideGravityZ", "0.000000" },
		{ "DisplayName", "SuggestProjectileVelocity Custom Arc" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Returns the launch velocity needed for a projectile at rest at StartPos to land on EndPos.\nAssumes a medium arc (e.g. 45 deg on level ground). Projectile velocity is variable and unconstrained.\nDoes no tracing.\n\n@param OutLaunchVelocity                      Returns the launch velocity required to reach the EndPos\n@param StartPos                                       Start position of the simulation\n@param EndPos                                         Desired end location for the simulation\n@param OverrideGravityZ                       Optional override of WorldGravityZ\n@param ArcParam                                       Change height of arc between 0.0-1.0 where 0.5 is the default medium arc, 0 is up, and 1 is directly toward EndPos." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_SuggestProjectileVelocity_CustomArc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "SuggestProjectileVelocity_CustomArc", nullptr, nullptr, sizeof(GameplayStatics_eventSuggestProjectileVelocity_CustomArc_Parms), Z_Construct_UFunction_UGameplayStatics_SuggestProjectileVelocity_CustomArc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SuggestProjectileVelocity_CustomArc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_SuggestProjectileVelocity_CustomArc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_SuggestProjectileVelocity_CustomArc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_SuggestProjectileVelocity_CustomArc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_SuggestProjectileVelocity_CustomArc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayStatics_UnloadStreamLevel_Statics
	{
		struct GameplayStatics_eventUnloadStreamLevel_Parms
		{
			const UObject* WorldContextObject;
			FName LevelName;
			FLatentActionInfo LatentInfo;
			bool bShouldBlockOnUnload;
		};
		static void NewProp_bShouldBlockOnUnload_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldBlockOnUnload;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LevelName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameplayStatics_UnloadStreamLevel_Statics::NewProp_bShouldBlockOnUnload_SetBit(void* Obj)
	{
		((GameplayStatics_eventUnloadStreamLevel_Parms*)Obj)->bShouldBlockOnUnload = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayStatics_UnloadStreamLevel_Statics::NewProp_bShouldBlockOnUnload = { "bShouldBlockOnUnload", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayStatics_eventUnloadStreamLevel_Parms), &Z_Construct_UFunction_UGameplayStatics_UnloadStreamLevel_Statics::NewProp_bShouldBlockOnUnload_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayStatics_UnloadStreamLevel_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventUnloadStreamLevel_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGameplayStatics_UnloadStreamLevel_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventUnloadStreamLevel_Parms, LevelName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_UnloadStreamLevel_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayStatics_UnloadStreamLevel_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayStatics_eventUnloadStreamLevel_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_UnloadStreamLevel_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_UnloadStreamLevel_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayStatics_UnloadStreamLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_UnloadStreamLevel_Statics::NewProp_bShouldBlockOnUnload,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_UnloadStreamLevel_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_UnloadStreamLevel_Statics::NewProp_LevelName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayStatics_UnloadStreamLevel_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayStatics_UnloadStreamLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Unload a streamed in level */" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Unload a streamed in level" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayStatics_UnloadStreamLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayStatics, nullptr, "UnloadStreamLevel", nullptr, nullptr, sizeof(GameplayStatics_eventUnloadStreamLevel_Parms), Z_Construct_UFunction_UGameplayStatics_UnloadStreamLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_UnloadStreamLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayStatics_UnloadStreamLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayStatics_UnloadStreamLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayStatics_UnloadStreamLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayStatics_UnloadStreamLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameplayStatics_NoRegister()
	{
		return UGameplayStatics::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayStatics_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayStatics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameplayStatics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameplayStatics_ActivateReverbEffect, "ActivateReverbEffect" }, // 3743589605
		{ &Z_Construct_UFunction_UGameplayStatics_ApplyDamage, "ApplyDamage" }, // 4094932131
		{ &Z_Construct_UFunction_UGameplayStatics_ApplyPointDamage, "ApplyPointDamage" }, // 2371568623
		{ &Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamage, "ApplyRadialDamage" }, // 252667629
		{ &Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamageWithFalloff, "ApplyRadialDamageWithFalloff" }, // 2207385046
		{ &Z_Construct_UFunction_UGameplayStatics_AreAnyListenersWithinRange, "AreAnyListenersWithinRange" }, // 1149068917
		{ &Z_Construct_UFunction_UGameplayStatics_AreSubtitlesEnabled, "AreSubtitlesEnabled" }, // 2811501859
		{ &Z_Construct_UFunction_UGameplayStatics_BeginDeferredActorSpawnFromClass, "BeginDeferredActorSpawnFromClass" }, // 1782289314
		{ &Z_Construct_UFunction_UGameplayStatics_BeginSpawningActorFromBlueprint, "BeginSpawningActorFromBlueprint" }, // 4208553633
		{ &Z_Construct_UFunction_UGameplayStatics_BeginSpawningActorFromClass, "BeginSpawningActorFromClass" }, // 2685687162
		{ &Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_Advanced, "Blueprint_PredictProjectilePath_Advanced" }, // 1896931772
		{ &Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType, "Blueprint_PredictProjectilePath_ByObjectType" }, // 1233163761
		{ &Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByTraceChannel, "Blueprint_PredictProjectilePath_ByTraceChannel" }, // 313636719
		{ &Z_Construct_UFunction_UGameplayStatics_BlueprintSuggestProjectileVelocity, "BlueprintSuggestProjectileVelocity" }, // 1964378765
		{ &Z_Construct_UFunction_UGameplayStatics_BreakHitResult, "BreakHitResult" }, // 2020954338
		{ &Z_Construct_UFunction_UGameplayStatics_CancelAsyncLoading, "CancelAsyncLoading" }, // 3486693799
		{ &Z_Construct_UFunction_UGameplayStatics_ClearSoundMixClassOverride, "ClearSoundMixClassOverride" }, // 2714851152
		{ &Z_Construct_UFunction_UGameplayStatics_ClearSoundMixModifiers, "ClearSoundMixModifiers" }, // 2911155364
		{ &Z_Construct_UFunction_UGameplayStatics_CreatePlayer, "CreatePlayer" }, // 2048545038
		{ &Z_Construct_UFunction_UGameplayStatics_CreateSaveGameObject, "CreateSaveGameObject" }, // 127053688
		{ &Z_Construct_UFunction_UGameplayStatics_CreateSound2D, "CreateSound2D" }, // 1549919708
		{ &Z_Construct_UFunction_UGameplayStatics_DeactivateReverbEffect, "DeactivateReverbEffect" }, // 3868906278
		{ &Z_Construct_UFunction_UGameplayStatics_DeleteGameInSlot, "DeleteGameInSlot" }, // 2706895031
		{ &Z_Construct_UFunction_UGameplayStatics_DeprojectScreenToWorld, "DeprojectScreenToWorld" }, // 850788454
		{ &Z_Construct_UFunction_UGameplayStatics_DoesSaveGameExist, "DoesSaveGameExist" }, // 3176240689
		{ &Z_Construct_UFunction_UGameplayStatics_EnableLiveStreaming, "EnableLiveStreaming" }, // 3947681690
		{ &Z_Construct_UFunction_UGameplayStatics_FindCollisionUV, "FindCollisionUV" }, // 1652974530
		{ &Z_Construct_UFunction_UGameplayStatics_FinishSpawningActor, "FinishSpawningActor" }, // 1315030264
		{ &Z_Construct_UFunction_UGameplayStatics_FlushLevelStreaming, "FlushLevelStreaming" }, // 551278555
		{ &Z_Construct_UFunction_UGameplayStatics_GetAccurateRealTime, "GetAccurateRealTime" }, // 1375228216
		{ &Z_Construct_UFunction_UGameplayStatics_GetActorArrayAverageLocation, "GetActorArrayAverageLocation" }, // 3936862673
		{ &Z_Construct_UFunction_UGameplayStatics_GetActorArrayBounds, "GetActorArrayBounds" }, // 3858381434
		{ &Z_Construct_UFunction_UGameplayStatics_GetActorOfClass, "GetActorOfClass" }, // 4146885765
		{ &Z_Construct_UFunction_UGameplayStatics_GetAllActorsOfClass, "GetAllActorsOfClass" }, // 1486550815
		{ &Z_Construct_UFunction_UGameplayStatics_GetAllActorsOfClassWithTag, "GetAllActorsOfClassWithTag" }, // 3027967554
		{ &Z_Construct_UFunction_UGameplayStatics_GetAllActorsWithInterface, "GetAllActorsWithInterface" }, // 3997805300
		{ &Z_Construct_UFunction_UGameplayStatics_GetAllActorsWithTag, "GetAllActorsWithTag" }, // 2756701351
		{ &Z_Construct_UFunction_UGameplayStatics_GetAudioTimeSeconds, "GetAudioTimeSeconds" }, // 2737251340
		{ &Z_Construct_UFunction_UGameplayStatics_GetClosestListenerLocation, "GetClosestListenerLocation" }, // 3821660743
		{ &Z_Construct_UFunction_UGameplayStatics_GetCurrentLevelName, "GetCurrentLevelName" }, // 2145085639
		{ &Z_Construct_UFunction_UGameplayStatics_GetCurrentReverbEffect, "GetCurrentReverbEffect" }, // 810703549
		{ &Z_Construct_UFunction_UGameplayStatics_GetEnableWorldRendering, "GetEnableWorldRendering" }, // 3036354219
		{ &Z_Construct_UFunction_UGameplayStatics_GetGameInstance, "GetGameInstance" }, // 1299302414
		{ &Z_Construct_UFunction_UGameplayStatics_GetGameMode, "GetGameMode" }, // 2083457252
		{ &Z_Construct_UFunction_UGameplayStatics_GetGameState, "GetGameState" }, // 2142123017
		{ &Z_Construct_UFunction_UGameplayStatics_GetGlobalTimeDilation, "GetGlobalTimeDilation" }, // 314446784
		{ &Z_Construct_UFunction_UGameplayStatics_GetIntOption, "GetIntOption" }, // 899643312
		{ &Z_Construct_UFunction_UGameplayStatics_GetKeyValue, "GetKeyValue" }, // 3579245043
		{ &Z_Construct_UFunction_UGameplayStatics_GetMaxAudioChannelCount, "GetMaxAudioChannelCount" }, // 2148251701
		{ &Z_Construct_UFunction_UGameplayStatics_GetObjectClass, "GetObjectClass" }, // 931719196
		{ &Z_Construct_UFunction_UGameplayStatics_GetPlatformName, "GetPlatformName" }, // 2731482392
		{ &Z_Construct_UFunction_UGameplayStatics_GetPlayerCameraManager, "GetPlayerCameraManager" }, // 2366155602
		{ &Z_Construct_UFunction_UGameplayStatics_GetPlayerCharacter, "GetPlayerCharacter" }, // 3585541987
		{ &Z_Construct_UFunction_UGameplayStatics_GetPlayerController, "GetPlayerController" }, // 1321540269
		{ &Z_Construct_UFunction_UGameplayStatics_GetPlayerControllerFromID, "GetPlayerControllerFromID" }, // 3285233225
		{ &Z_Construct_UFunction_UGameplayStatics_GetPlayerControllerID, "GetPlayerControllerID" }, // 1891509922
		{ &Z_Construct_UFunction_UGameplayStatics_GetPlayerPawn, "GetPlayerPawn" }, // 1812179639
		{ &Z_Construct_UFunction_UGameplayStatics_GetRealTimeSeconds, "GetRealTimeSeconds" }, // 459166210
		{ &Z_Construct_UFunction_UGameplayStatics_GetStreamingLevel, "GetStreamingLevel" }, // 3042605683
		{ &Z_Construct_UFunction_UGameplayStatics_GetSurfaceType, "GetSurfaceType" }, // 2275382530
		{ &Z_Construct_UFunction_UGameplayStatics_GetTimeSeconds, "GetTimeSeconds" }, // 3882509101
		{ &Z_Construct_UFunction_UGameplayStatics_GetUnpausedTimeSeconds, "GetUnpausedTimeSeconds" }, // 2198715761
		{ &Z_Construct_UFunction_UGameplayStatics_GetViewportMouseCaptureMode, "GetViewportMouseCaptureMode" }, // 345277443
		{ &Z_Construct_UFunction_UGameplayStatics_GetViewProjectionMatrix, "GetViewProjectionMatrix" }, // 2134932742
		{ &Z_Construct_UFunction_UGameplayStatics_GetWorldDeltaSeconds, "GetWorldDeltaSeconds" }, // 898252864
		{ &Z_Construct_UFunction_UGameplayStatics_GetWorldOriginLocation, "GetWorldOriginLocation" }, // 371498284
		{ &Z_Construct_UFunction_UGameplayStatics_GrassOverlappingSphereCount, "GrassOverlappingSphereCount" }, // 3230246873
		{ &Z_Construct_UFunction_UGameplayStatics_HasLaunchOption, "HasLaunchOption" }, // 2426784475
		{ &Z_Construct_UFunction_UGameplayStatics_HasOption, "HasOption" }, // 3628138291
		{ &Z_Construct_UFunction_UGameplayStatics_IsGamePaused, "IsGamePaused" }, // 1051248831
		{ &Z_Construct_UFunction_UGameplayStatics_IsSplitscreenForceDisabled, "IsSplitscreenForceDisabled" }, // 3315990120
		{ &Z_Construct_UFunction_UGameplayStatics_LoadGameFromSlot, "LoadGameFromSlot" }, // 1831124988
		{ &Z_Construct_UFunction_UGameplayStatics_LoadStreamLevel, "LoadStreamLevel" }, // 2510110404
		{ &Z_Construct_UFunction_UGameplayStatics_MakeHitResult, "MakeHitResult" }, // 923455289
		{ &Z_Construct_UFunction_UGameplayStatics_OpenLevel, "OpenLevel" }, // 1505891095
		{ &Z_Construct_UFunction_UGameplayStatics_ParseOption, "ParseOption" }, // 2807361072
		{ &Z_Construct_UFunction_UGameplayStatics_PlayDialogue2D, "PlayDialogue2D" }, // 2247680939
		{ &Z_Construct_UFunction_UGameplayStatics_PlayDialogueAtLocation, "PlayDialogueAtLocation" }, // 3501992535
		{ &Z_Construct_UFunction_UGameplayStatics_PlaySound2D, "PlaySound2D" }, // 2576124464
		{ &Z_Construct_UFunction_UGameplayStatics_PlaySoundAtLocation, "PlaySoundAtLocation" }, // 3369962052
		{ &Z_Construct_UFunction_UGameplayStatics_PlayWorldCameraShake, "PlayWorldCameraShake" }, // 1690724924
		{ &Z_Construct_UFunction_UGameplayStatics_PopSoundMixModifier, "PopSoundMixModifier" }, // 1284835600
		{ &Z_Construct_UFunction_UGameplayStatics_PrimeSound, "PrimeSound" }, // 2715483692
		{ &Z_Construct_UFunction_UGameplayStatics_ProjectWorldToScreen, "ProjectWorldToScreen" }, // 532835190
		{ &Z_Construct_UFunction_UGameplayStatics_PushSoundMixModifier, "PushSoundMixModifier" }, // 1826933044
		{ &Z_Construct_UFunction_UGameplayStatics_RebaseLocalOriginOntoZero, "RebaseLocalOriginOntoZero" }, // 3797957096
		{ &Z_Construct_UFunction_UGameplayStatics_RebaseZeroOriginOntoLocal, "RebaseZeroOriginOntoLocal" }, // 1795854311
		{ &Z_Construct_UFunction_UGameplayStatics_RemovePlayer, "RemovePlayer" }, // 1243997555
		{ &Z_Construct_UFunction_UGameplayStatics_SaveGameToSlot, "SaveGameToSlot" }, // 3038427393
		{ &Z_Construct_UFunction_UGameplayStatics_SetBaseSoundMix, "SetBaseSoundMix" }, // 1540971921
		{ &Z_Construct_UFunction_UGameplayStatics_SetEnableWorldRendering, "SetEnableWorldRendering" }, // 3160403265
		{ &Z_Construct_UFunction_UGameplayStatics_SetForceDisableSplitscreen, "SetForceDisableSplitscreen" }, // 3907355737
		{ &Z_Construct_UFunction_UGameplayStatics_SetGamePaused, "SetGamePaused" }, // 7792138
		{ &Z_Construct_UFunction_UGameplayStatics_SetGlobalListenerFocusParameters, "SetGlobalListenerFocusParameters" }, // 959338855
		{ &Z_Construct_UFunction_UGameplayStatics_SetGlobalPitchModulation, "SetGlobalPitchModulation" }, // 897266557
		{ &Z_Construct_UFunction_UGameplayStatics_SetGlobalTimeDilation, "SetGlobalTimeDilation" }, // 1857426317
		{ &Z_Construct_UFunction_UGameplayStatics_SetMaxAudioChannelsScaled, "SetMaxAudioChannelsScaled" }, // 4119320233
		{ &Z_Construct_UFunction_UGameplayStatics_SetPlayerControllerID, "SetPlayerControllerID" }, // 1015091538
		{ &Z_Construct_UFunction_UGameplayStatics_SetSoundClassDistanceScale, "SetSoundClassDistanceScale" }, // 291733536
		{ &Z_Construct_UFunction_UGameplayStatics_SetSoundMixClassOverride, "SetSoundMixClassOverride" }, // 3013138082
		{ &Z_Construct_UFunction_UGameplayStatics_SetSubtitlesEnabled, "SetSubtitlesEnabled" }, // 2257623982
		{ &Z_Construct_UFunction_UGameplayStatics_SetViewportMouseCaptureMode, "SetViewportMouseCaptureMode" }, // 1748715601
		{ &Z_Construct_UFunction_UGameplayStatics_SetWorldOriginLocation, "SetWorldOriginLocation" }, // 1711148557
		{ &Z_Construct_UFunction_UGameplayStatics_SpawnDecalAtLocation, "SpawnDecalAtLocation" }, // 4214233321
		{ &Z_Construct_UFunction_UGameplayStatics_SpawnDecalAttached, "SpawnDecalAttached" }, // 773567050
		{ &Z_Construct_UFunction_UGameplayStatics_SpawnDialogue2D, "SpawnDialogue2D" }, // 2810202029
		{ &Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAtLocation, "SpawnDialogueAtLocation" }, // 2867219613
		{ &Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAttached, "SpawnDialogueAttached" }, // 3037833816
		{ &Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAtLocation, "SpawnEmitterAtLocation" }, // 1751341912
		{ &Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAttached, "SpawnEmitterAttached" }, // 1968486076
		{ &Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAtLocation, "SpawnForceFeedbackAtLocation" }, // 2488541352
		{ &Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAttached, "SpawnForceFeedbackAttached" }, // 145050695
		{ &Z_Construct_UFunction_UGameplayStatics_SpawnObject, "SpawnObject" }, // 3227051548
		{ &Z_Construct_UFunction_UGameplayStatics_SpawnSound2D, "SpawnSound2D" }, // 1818761485
		{ &Z_Construct_UFunction_UGameplayStatics_SpawnSoundAtLocation, "SpawnSoundAtLocation" }, // 3161131214
		{ &Z_Construct_UFunction_UGameplayStatics_SpawnSoundAttached, "SpawnSoundAttached" }, // 558221287
		{ &Z_Construct_UFunction_UGameplayStatics_SuggestProjectileVelocity_CustomArc, "SuggestProjectileVelocity_CustomArc" }, // 4214114150
		{ &Z_Construct_UFunction_UGameplayStatics_UnloadStreamLevel, "UnloadStreamLevel" }, // 3382252057
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayStatics_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Static class with useful gameplay utility functions that can be called from both Blueprint and C++ */" },
		{ "IncludePath", "Kismet/GameplayStatics.h" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStatics.h" },
		{ "ToolTip", "Static class with useful gameplay utility functions that can be called from both Blueprint and C++" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayStatics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayStatics>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameplayStatics_Statics::ClassParams = {
		&UGameplayStatics::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGameplayStatics_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayStatics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayStatics()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameplayStatics_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameplayStatics, 1446355020);
	template<> ENGINE_API UClass* StaticClass<UGameplayStatics>()
	{
		return UGameplayStatics::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameplayStatics(Z_Construct_UClass_UGameplayStatics, &UGameplayStatics::StaticClass, TEXT("/Script/Engine"), TEXT("UGameplayStatics"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayStatics);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
