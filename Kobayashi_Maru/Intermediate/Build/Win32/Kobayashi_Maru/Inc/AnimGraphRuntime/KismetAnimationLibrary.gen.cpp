// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphRuntime/Public/KismetAnimationLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKismetAnimationLibrary() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_UKismetAnimationLibrary_NoRegister();
	ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_UKismetAnimationLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPositionHistory();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_EEasingFuncType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERelativeTransformSpace();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	DEFINE_FUNCTION(UKismetAnimationLibrary::execK2_EndProfilingTimer)
	{
		P_GET_UBOOL(Z_Param_bLog);
		P_GET_PROPERTY(FStrProperty,Z_Param_LogPrefix);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UKismetAnimationLibrary::K2_EndProfilingTimer(Z_Param_bLog,Z_Param_LogPrefix);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetAnimationLibrary::execK2_StartProfilingTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UKismetAnimationLibrary::K2_StartProfilingTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetAnimationLibrary::execK2_CalculateVelocityFromSockets)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_Component);
		P_GET_PROPERTY(FNameProperty,Z_Param_SocketOrBoneName);
		P_GET_PROPERTY(FNameProperty,Z_Param_ReferenceSocketOrBone);
		P_GET_PROPERTY(FByteProperty,Z_Param_SocketSpace);
		P_GET_STRUCT(FVector,Z_Param_OffsetInBoneSpace);
		P_GET_STRUCT_REF(FPositionHistory,Z_Param_Out_History);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumberOfSamples);
		P_GET_PROPERTY(FFloatProperty,Z_Param_VelocityMin);
		P_GET_PROPERTY(FFloatProperty,Z_Param_VelocityMax);
		P_GET_ENUM(EEasingFuncType,Z_Param_EasingType);
		P_GET_STRUCT_REF(FRuntimeFloatCurve,Z_Param_Out_CustomCurve);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UKismetAnimationLibrary::K2_CalculateVelocityFromSockets(Z_Param_DeltaSeconds,Z_Param_Component,Z_Param_SocketOrBoneName,Z_Param_ReferenceSocketOrBone,ERelativeTransformSpace(Z_Param_SocketSpace),Z_Param_OffsetInBoneSpace,Z_Param_Out_History,Z_Param_NumberOfSamples,Z_Param_VelocityMin,Z_Param_VelocityMax,EEasingFuncType(Z_Param_EasingType),Z_Param_Out_CustomCurve);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetAnimationLibrary::execK2_CalculateVelocityFromPositionHistory)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_GET_STRUCT_REF(FPositionHistory,Z_Param_Out_History);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumberOfSamples);
		P_GET_PROPERTY(FFloatProperty,Z_Param_VelocityMin);
		P_GET_PROPERTY(FFloatProperty,Z_Param_VelocityMax);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UKismetAnimationLibrary::K2_CalculateVelocityFromPositionHistory(Z_Param_DeltaSeconds,Z_Param_Position,Z_Param_Out_History,Z_Param_NumberOfSamples,Z_Param_VelocityMin,Z_Param_VelocityMax);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetAnimationLibrary::execK2_MakePerlinNoiseAndRemap)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RangeOutMin);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RangeOutMax);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UKismetAnimationLibrary::K2_MakePerlinNoiseAndRemap(Z_Param_Value,Z_Param_RangeOutMin,Z_Param_RangeOutMax);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetAnimationLibrary::execK2_MakePerlinNoiseVectorAndRemap)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_X);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Y);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Z);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RangeOutMinX);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RangeOutMaxX);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RangeOutMinY);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RangeOutMaxY);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RangeOutMinZ);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RangeOutMaxZ);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UKismetAnimationLibrary::K2_MakePerlinNoiseVectorAndRemap(Z_Param_X,Z_Param_Y,Z_Param_Z,Z_Param_RangeOutMinX,Z_Param_RangeOutMaxX,Z_Param_RangeOutMinY,Z_Param_RangeOutMaxY,Z_Param_RangeOutMinZ,Z_Param_RangeOutMaxZ);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetAnimationLibrary::execK2_DirectionBetweenSockets)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_Component);
		P_GET_PROPERTY(FNameProperty,Z_Param_SocketOrBoneNameFrom);
		P_GET_PROPERTY(FNameProperty,Z_Param_SocketOrBoneNameTo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UKismetAnimationLibrary::K2_DirectionBetweenSockets(Z_Param_Component,Z_Param_SocketOrBoneNameFrom,Z_Param_SocketOrBoneNameTo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetAnimationLibrary::execK2_DistanceBetweenTwoSocketsAndMapRange)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_Component);
		P_GET_PROPERTY(FNameProperty,Z_Param_SocketOrBoneNameA);
		P_GET_PROPERTY(FByteProperty,Z_Param_SocketSpaceA);
		P_GET_PROPERTY(FNameProperty,Z_Param_SocketOrBoneNameB);
		P_GET_PROPERTY(FByteProperty,Z_Param_SocketSpaceB);
		P_GET_UBOOL(Z_Param_bRemapRange);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InRangeMin);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InRangeMax);
		P_GET_PROPERTY(FFloatProperty,Z_Param_OutRangeMin);
		P_GET_PROPERTY(FFloatProperty,Z_Param_OutRangeMax);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UKismetAnimationLibrary::K2_DistanceBetweenTwoSocketsAndMapRange(Z_Param_Component,Z_Param_SocketOrBoneNameA,ERelativeTransformSpace(Z_Param_SocketSpaceA),Z_Param_SocketOrBoneNameB,ERelativeTransformSpace(Z_Param_SocketSpaceB),Z_Param_bRemapRange,Z_Param_InRangeMin,Z_Param_InRangeMax,Z_Param_OutRangeMin,Z_Param_OutRangeMax);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetAnimationLibrary::execK2_LookAt)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_CurrentTransform);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TargetPosition);
		P_GET_STRUCT(FVector,Z_Param_LookAtVector);
		P_GET_UBOOL(Z_Param_bUseUpVector);
		P_GET_STRUCT(FVector,Z_Param_UpVector);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ClampConeInDegree);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UKismetAnimationLibrary::K2_LookAt(Z_Param_Out_CurrentTransform,Z_Param_Out_TargetPosition,Z_Param_LookAtVector,Z_Param_bUseUpVector,Z_Param_UpVector,Z_Param_ClampConeInDegree);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetAnimationLibrary::execK2_TwoBoneIK)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_RootPos);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_JointPos);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_EndPos);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_JointTarget);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Effector);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutJointPos);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutEndPos);
		P_GET_UBOOL(Z_Param_bAllowStretching);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartStretchRatio);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxStretchScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		UKismetAnimationLibrary::K2_TwoBoneIK(Z_Param_Out_RootPos,Z_Param_Out_JointPos,Z_Param_Out_EndPos,Z_Param_Out_JointTarget,Z_Param_Out_Effector,Z_Param_Out_OutJointPos,Z_Param_Out_OutEndPos,Z_Param_bAllowStretching,Z_Param_StartStretchRatio,Z_Param_MaxStretchScale);
		P_NATIVE_END;
	}
	void UKismetAnimationLibrary::StaticRegisterNativesUKismetAnimationLibrary()
	{
		UClass* Class = UKismetAnimationLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "K2_CalculateVelocityFromPositionHistory", &UKismetAnimationLibrary::execK2_CalculateVelocityFromPositionHistory },
			{ "K2_CalculateVelocityFromSockets", &UKismetAnimationLibrary::execK2_CalculateVelocityFromSockets },
			{ "K2_DirectionBetweenSockets", &UKismetAnimationLibrary::execK2_DirectionBetweenSockets },
			{ "K2_DistanceBetweenTwoSocketsAndMapRange", &UKismetAnimationLibrary::execK2_DistanceBetweenTwoSocketsAndMapRange },
			{ "K2_EndProfilingTimer", &UKismetAnimationLibrary::execK2_EndProfilingTimer },
			{ "K2_LookAt", &UKismetAnimationLibrary::execK2_LookAt },
			{ "K2_MakePerlinNoiseAndRemap", &UKismetAnimationLibrary::execK2_MakePerlinNoiseAndRemap },
			{ "K2_MakePerlinNoiseVectorAndRemap", &UKismetAnimationLibrary::execK2_MakePerlinNoiseVectorAndRemap },
			{ "K2_StartProfilingTimer", &UKismetAnimationLibrary::execK2_StartProfilingTimer },
			{ "K2_TwoBoneIK", &UKismetAnimationLibrary::execK2_TwoBoneIK },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory_Statics
	{
		struct KismetAnimationLibrary_eventK2_CalculateVelocityFromPositionHistory_Parms
		{
			float DeltaSeconds;
			FVector Position;
			FPositionHistory History;
			int32 NumberOfSamples;
			float VelocityMin;
			float VelocityMax;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VelocityMax;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VelocityMin;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfSamples;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_History;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_CalculateVelocityFromPositionHistory_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory_Statics::NewProp_VelocityMax = { "VelocityMax", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_CalculateVelocityFromPositionHistory_Parms, VelocityMax), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory_Statics::NewProp_VelocityMin = { "VelocityMin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_CalculateVelocityFromPositionHistory_Parms, VelocityMin), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory_Statics::NewProp_NumberOfSamples = { "NumberOfSamples", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_CalculateVelocityFromPositionHistory_Parms, NumberOfSamples), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory_Statics::NewProp_History = { "History", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_CalculateVelocityFromPositionHistory_Parms, History), Z_Construct_UScriptStruct_FPositionHistory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_CalculateVelocityFromPositionHistory_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_CalculateVelocityFromPositionHistory_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory_Statics::NewProp_VelocityMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory_Statics::NewProp_VelocityMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory_Statics::NewProp_NumberOfSamples,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory_Statics::NewProp_History,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Animation" },
		{ "Comment", "/** \n\x09 *\x09This function calculates the velocity of a position changing over time.\n\x09 *\x09You need to hook up a valid PositionHistory variable to this for storage.\n\x09 *\n\x09 *\x09@param DeltaSeconds The time passed in seconds\n\x09 *\x09@param Position The position to track over time.\n\x09 *\x09@param History The history to use for storage.\n\x09 *\x09@param NumberOfSamples The number of samples to use for the history. The higher the number of samples - the smoother the velocity changes.\n\x09 *\x09@param VelocityMin The minimum velocity to use for normalization (if both min and max are set to 0, normalization is turned off)\n\x09 *\x09@param VelocityMax The maximum velocity to use for normalization (if both min and max are set to 0, normalization is turned off)\n\x09 */" },
		{ "DisplayName", "Calculate Velocity From Position History" },
		{ "ModuleRelativePath", "Public/KismetAnimationLibrary.h" },
		{ "NumberOfSamples", "16" },
		{ "ScriptName", "CalculateVelocityFromPositionHistory" },
		{ "ToolTip", "This function calculates the velocity of a position changing over time.\nYou need to hook up a valid PositionHistory variable to this for storage.\n\n@param DeltaSeconds The time passed in seconds\n@param Position The position to track over time.\n@param History The history to use for storage.\n@param NumberOfSamples The number of samples to use for the history. The higher the number of samples - the smoother the velocity changes.\n@param VelocityMin The minimum velocity to use for normalization (if both min and max are set to 0, normalization is turned off)\n@param VelocityMax The maximum velocity to use for normalization (if both min and max are set to 0, normalization is turned off)" },
		{ "VelocityMax", "128.f" },
		{ "VelocityMin", "0.f" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetAnimationLibrary, nullptr, "K2_CalculateVelocityFromPositionHistory", nullptr, nullptr, sizeof(KismetAnimationLibrary_eventK2_CalculateVelocityFromPositionHistory_Parms), Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics
	{
		struct KismetAnimationLibrary_eventK2_CalculateVelocityFromSockets_Parms
		{
			float DeltaSeconds;
			USkeletalMeshComponent* Component;
			FName SocketOrBoneName;
			FName ReferenceSocketOrBone;
			TEnumAsByte<ERelativeTransformSpace> SocketSpace;
			FVector OffsetInBoneSpace;
			FPositionHistory History;
			int32 NumberOfSamples;
			float VelocityMin;
			float VelocityMax;
			EEasingFuncType EasingType;
			FRuntimeFloatCurve CustomCurve;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomCurve;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EasingType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EasingType_Underlying;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VelocityMax;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VelocityMin;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfSamples;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_History;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OffsetInBoneSpace;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SocketSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReferenceSocketOrBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReferenceSocketOrBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketOrBoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SocketOrBoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_CalculateVelocityFromSockets_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_CustomCurve_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_CustomCurve = { "CustomCurve", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_CalculateVelocityFromSockets_Parms, CustomCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_CustomCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_CustomCurve_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_EasingType = { "EasingType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_CalculateVelocityFromSockets_Parms, EasingType), Z_Construct_UEnum_AnimGraphRuntime_EEasingFuncType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_EasingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_VelocityMax = { "VelocityMax", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_CalculateVelocityFromSockets_Parms, VelocityMax), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_VelocityMin = { "VelocityMin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_CalculateVelocityFromSockets_Parms, VelocityMin), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_NumberOfSamples = { "NumberOfSamples", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_CalculateVelocityFromSockets_Parms, NumberOfSamples), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_History = { "History", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_CalculateVelocityFromSockets_Parms, History), Z_Construct_UScriptStruct_FPositionHistory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_OffsetInBoneSpace = { "OffsetInBoneSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_CalculateVelocityFromSockets_Parms, OffsetInBoneSpace), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_SocketSpace = { "SocketSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_CalculateVelocityFromSockets_Parms, SocketSpace), Z_Construct_UEnum_Engine_ERelativeTransformSpace, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_ReferenceSocketOrBone_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_ReferenceSocketOrBone = { "ReferenceSocketOrBone", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_CalculateVelocityFromSockets_Parms, ReferenceSocketOrBone), METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_ReferenceSocketOrBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_ReferenceSocketOrBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_SocketOrBoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_SocketOrBoneName = { "SocketOrBoneName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_CalculateVelocityFromSockets_Parms, SocketOrBoneName), METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_SocketOrBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_SocketOrBoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_CalculateVelocityFromSockets_Parms, Component), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_CalculateVelocityFromSockets_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_CustomCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_EasingType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_EasingType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_VelocityMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_VelocityMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_NumberOfSamples,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_History,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_OffsetInBoneSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_SocketSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_ReferenceSocketOrBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_SocketOrBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_Component,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Animation" },
		{ "Comment", "/** \n\x09 *\x09This function calculates the velocity of an offset position on a bone / socket over time.\n\x09 *\x09The bone's / socket's motion can be expressed within a reference frame (another bone / socket). \n\x09 *\x09You need to hook up a valid PositionHistory variable to this for storage.\n\x09 *\n\x09 *\x09@param DeltaSeconds The time passed in seconds\n\x09 *\x09@param Component The skeletal component to look for the bones / sockets\n\x09 *\x09@param SocketOrBoneName The name of the bone / socket to track.\n\x09 *\x09@param ReferenceSocketOrBone The name of the bone / socket to use as a frame of reference (or None if no frame of reference == world space).\n\x09 *\x09@param SocketSpace The space to use for the two sockets / bones\n\x09 *\x09@param OffsetInBoneSpace The relative position in the space of the bone / socket to track over time.\n\x09 *\x09@param History The history to use for storage.\n\x09 *\x09@param NumberOfSamples The number of samples to use for the history. The higher the number of samples - the smoother the velocity changes.\n\x09 *\x09@param VelocityMin The minimum velocity to use for normalization (if both min and max are set to 0, normalization is turned off)\n\x09 *\x09@param VelocityMax The maximum velocity to use for normalization (if both min and max are set to 0, normalization is turned off)\n\x09 *\x09@param EasingType The easing function to use\n\x09 *\x09@param CustomCurve The curve to use if the easing type is \"Custom\"\n\x09 */" },
		{ "DisplayName", "Calculate Velocity From Sockets" },
		{ "ModuleRelativePath", "Public/KismetAnimationLibrary.h" },
		{ "NumberOfSamples", "16" },
		{ "ScriptName", "CalculateVelocityFromSockets" },
		{ "ToolTip", "This function calculates the velocity of an offset position on a bone / socket over time.\nThe bone's / socket's motion can be expressed within a reference frame (another bone / socket).\nYou need to hook up a valid PositionHistory variable to this for storage.\n\n@param DeltaSeconds The time passed in seconds\n@param Component The skeletal component to look for the bones / sockets\n@param SocketOrBoneName The name of the bone / socket to track.\n@param ReferenceSocketOrBone The name of the bone / socket to use as a frame of reference (or None if no frame of reference == world space).\n@param SocketSpace The space to use for the two sockets / bones\n@param OffsetInBoneSpace The relative position in the space of the bone / socket to track over time.\n@param History The history to use for storage.\n@param NumberOfSamples The number of samples to use for the history. The higher the number of samples - the smoother the velocity changes.\n@param VelocityMin The minimum velocity to use for normalization (if both min and max are set to 0, normalization is turned off)\n@param VelocityMax The maximum velocity to use for normalization (if both min and max are set to 0, normalization is turned off)\n@param EasingType The easing function to use\n@param CustomCurve The curve to use if the easing type is \"Custom\"" },
		{ "VelocityMax", "128.f" },
		{ "VelocityMin", "0.f" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetAnimationLibrary, nullptr, "K2_CalculateVelocityFromSockets", nullptr, nullptr, sizeof(KismetAnimationLibrary_eventK2_CalculateVelocityFromSockets_Parms), Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics
	{
		struct KismetAnimationLibrary_eventK2_DirectionBetweenSockets_Parms
		{
			const USkeletalMeshComponent* Component;
			FName SocketOrBoneNameFrom;
			FName SocketOrBoneNameTo;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketOrBoneNameTo_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SocketOrBoneNameTo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketOrBoneNameFrom_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SocketOrBoneNameFrom;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_DirectionBetweenSockets_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::NewProp_SocketOrBoneNameTo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::NewProp_SocketOrBoneNameTo = { "SocketOrBoneNameTo", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_DirectionBetweenSockets_Parms, SocketOrBoneNameTo), METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::NewProp_SocketOrBoneNameTo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::NewProp_SocketOrBoneNameTo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::NewProp_SocketOrBoneNameFrom_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::NewProp_SocketOrBoneNameFrom = { "SocketOrBoneNameFrom", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_DirectionBetweenSockets_Parms, SocketOrBoneNameFrom), METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::NewProp_SocketOrBoneNameFrom_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::NewProp_SocketOrBoneNameFrom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_DirectionBetweenSockets_Parms, Component), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::NewProp_SocketOrBoneNameTo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::NewProp_SocketOrBoneNameFrom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::NewProp_Component,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Animation" },
		{ "Comment", "/**\n\x09 *\x09""Computes the direction between two bones / sockets.\n\x09 *\n\x09 *\x09@param Component The skeletal component to look for the sockets / bones within\n\x09 *\x09@param SocketOrBoneNameFrom The name of the first socket / bone\n\x09 *\x09@param SocketOrBoneNameTo The name of the second socket / bone\n\x09 */" },
		{ "DisplayName", "Get Direction Between Sockets" },
		{ "ModuleRelativePath", "Public/KismetAnimationLibrary.h" },
		{ "ScriptName", "DirectionBetweenSockets" },
		{ "ToolTip", "Computes the direction between two bones / sockets.\n\n@param Component The skeletal component to look for the sockets / bones within\n@param SocketOrBoneNameFrom The name of the first socket / bone\n@param SocketOrBoneNameTo The name of the second socket / bone" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetAnimationLibrary, nullptr, "K2_DirectionBetweenSockets", nullptr, nullptr, sizeof(KismetAnimationLibrary_eventK2_DirectionBetweenSockets_Parms), Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics
	{
		struct KismetAnimationLibrary_eventK2_DistanceBetweenTwoSocketsAndMapRange_Parms
		{
			const USkeletalMeshComponent* Component;
			FName SocketOrBoneNameA;
			TEnumAsByte<ERelativeTransformSpace> SocketSpaceA;
			FName SocketOrBoneNameB;
			TEnumAsByte<ERelativeTransformSpace> SocketSpaceB;
			bool bRemapRange;
			float InRangeMin;
			float InRangeMax;
			float OutRangeMin;
			float OutRangeMax;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutRangeMax;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutRangeMin;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InRangeMax;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InRangeMin;
		static void NewProp_bRemapRange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRemapRange;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SocketSpaceB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketOrBoneNameB_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SocketOrBoneNameB;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SocketSpaceA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketOrBoneNameA_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SocketOrBoneNameA;
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_DistanceBetweenTwoSocketsAndMapRange_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_OutRangeMax = { "OutRangeMax", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_DistanceBetweenTwoSocketsAndMapRange_Parms, OutRangeMax), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_OutRangeMin = { "OutRangeMin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_DistanceBetweenTwoSocketsAndMapRange_Parms, OutRangeMin), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_InRangeMax = { "InRangeMax", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_DistanceBetweenTwoSocketsAndMapRange_Parms, InRangeMax), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_InRangeMin = { "InRangeMin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_DistanceBetweenTwoSocketsAndMapRange_Parms, InRangeMin), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_bRemapRange_SetBit(void* Obj)
	{
		((KismetAnimationLibrary_eventK2_DistanceBetweenTwoSocketsAndMapRange_Parms*)Obj)->bRemapRange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_bRemapRange = { "bRemapRange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KismetAnimationLibrary_eventK2_DistanceBetweenTwoSocketsAndMapRange_Parms), &Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_bRemapRange_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_SocketSpaceB = { "SocketSpaceB", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_DistanceBetweenTwoSocketsAndMapRange_Parms, SocketSpaceB), Z_Construct_UEnum_Engine_ERelativeTransformSpace, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_SocketOrBoneNameB_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_SocketOrBoneNameB = { "SocketOrBoneNameB", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_DistanceBetweenTwoSocketsAndMapRange_Parms, SocketOrBoneNameB), METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_SocketOrBoneNameB_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_SocketOrBoneNameB_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_SocketSpaceA = { "SocketSpaceA", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_DistanceBetweenTwoSocketsAndMapRange_Parms, SocketSpaceA), Z_Construct_UEnum_Engine_ERelativeTransformSpace, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_SocketOrBoneNameA_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_SocketOrBoneNameA = { "SocketOrBoneNameA", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_DistanceBetweenTwoSocketsAndMapRange_Parms, SocketOrBoneNameA), METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_SocketOrBoneNameA_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_SocketOrBoneNameA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_DistanceBetweenTwoSocketsAndMapRange_Parms, Component), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_OutRangeMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_OutRangeMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_InRangeMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_InRangeMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_bRemapRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_SocketSpaceB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_SocketOrBoneNameB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_SocketSpaceA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_SocketOrBoneNameA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_Component,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::Function_MetaDataParams[] = {
		{ "bRemapRange", "false" },
		{ "Category", "Utilities|Animation" },
		{ "Comment", "/**\n\x09 *\x09""Computes the distance between two bones / sockets and can remap the range.\n\x09 *\n\x09 *\x09@param Component The skeletal component to look for the sockets / bones within\n\x09 *\x09@param SocketOrBoneNameA The name of the first socket / bone\n\x09 *\x09@param SocketSpaceA The space for the first socket / bone\n\x09 *\x09@param SocketOrBoneNameB The name of the second socket / bone\n\x09 *\x09@param SocketSpaceB The space for the second socket / bone\n\x09 *\x09@param bRemapRange If set to true, the distance will be remapped using the range parameters\n\x09 *\x09@param InRangeMin The minimum for the input range (commonly == 0.0)\n\x09 *\x09@param InRangeMax The maximum for the input range (the max expected distance)\n\x09 *\x09@param OutRangeMin The minimum for the output range (commonly == 0.0)\n\x09 *\x09@param OutRangeMax The maximum for the output range (commonly == 1.0)\n\x09 */" },
		{ "DisplayName", "Get Distance Between Two Sockets" },
		{ "ModuleRelativePath", "Public/KismetAnimationLibrary.h" },
		{ "ScriptName", "DistanceBetweenSockets" },
		{ "ToolTip", "Computes the distance between two bones / sockets and can remap the range.\n\n@param Component The skeletal component to look for the sockets / bones within\n@param SocketOrBoneNameA The name of the first socket / bone\n@param SocketSpaceA The space for the first socket / bone\n@param SocketOrBoneNameB The name of the second socket / bone\n@param SocketSpaceB The space for the second socket / bone\n@param bRemapRange If set to true, the distance will be remapped using the range parameters\n@param InRangeMin The minimum for the input range (commonly == 0.0)\n@param InRangeMax The maximum for the input range (the max expected distance)\n@param OutRangeMin The minimum for the output range (commonly == 0.0)\n@param OutRangeMax The maximum for the output range (commonly == 1.0)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetAnimationLibrary, nullptr, "K2_DistanceBetweenTwoSocketsAndMapRange", nullptr, nullptr, sizeof(KismetAnimationLibrary_eventK2_DistanceBetweenTwoSocketsAndMapRange_Parms), Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetAnimationLibrary_K2_EndProfilingTimer_Statics
	{
		struct KismetAnimationLibrary_eventK2_EndProfilingTimer_Parms
		{
			bool bLog;
			FString LogPrefix;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LogPrefix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LogPrefix;
		static void NewProp_bLog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLog;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_EndProfilingTimer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_EndProfilingTimer_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_EndProfilingTimer_Statics::NewProp_LogPrefix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_EndProfilingTimer_Statics::NewProp_LogPrefix = { "LogPrefix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_EndProfilingTimer_Parms, LogPrefix), METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_EndProfilingTimer_Statics::NewProp_LogPrefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_EndProfilingTimer_Statics::NewProp_LogPrefix_MetaData)) };
	void Z_Construct_UFunction_UKismetAnimationLibrary_K2_EndProfilingTimer_Statics::NewProp_bLog_SetBit(void* Obj)
	{
		((KismetAnimationLibrary_eventK2_EndProfilingTimer_Parms*)Obj)->bLog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_EndProfilingTimer_Statics::NewProp_bLog = { "bLog", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KismetAnimationLibrary_eventK2_EndProfilingTimer_Parms), &Z_Construct_UFunction_UKismetAnimationLibrary_K2_EndProfilingTimer_Statics::NewProp_bLog_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetAnimationLibrary_K2_EndProfilingTimer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_EndProfilingTimer_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_EndProfilingTimer_Statics::NewProp_LogPrefix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_EndProfilingTimer_Statics::NewProp_bLog,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_EndProfilingTimer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Animation" },
		{ "Comment", "/**\n\x09 *\x09This function ends measuring a profiling bracket and optionally logs the result\n\x09 *\n\x09 *  @param bLog If set to true the result is logged to the OutputLog\n\x09 *  @param LogPrefix A prefix to use for the log\n\x09 *  @result The time spent in milliseconds\n\x09 */" },
		{ "CPP_Default_bLog", "true" },
		{ "CPP_Default_LogPrefix", "" },
		{ "DisplayName", "End Profiling Timer" },
		{ "ModuleRelativePath", "Public/KismetAnimationLibrary.h" },
		{ "ToolTip", "This function ends measuring a profiling bracket and optionally logs the result\n\n@param bLog If set to true the result is logged to the OutputLog\n@param LogPrefix A prefix to use for the log\n@result The time spent in milliseconds" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_EndProfilingTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetAnimationLibrary, nullptr, "K2_EndProfilingTimer", nullptr, nullptr, sizeof(KismetAnimationLibrary_eventK2_EndProfilingTimer_Parms), Z_Construct_UFunction_UKismetAnimationLibrary_K2_EndProfilingTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_EndProfilingTimer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_EndProfilingTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_EndProfilingTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetAnimationLibrary_K2_EndProfilingTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetAnimationLibrary_K2_EndProfilingTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics
	{
		struct KismetAnimationLibrary_eventK2_LookAt_Parms
		{
			FTransform CurrentTransform;
			FVector TargetPosition;
			FVector LookAtVector;
			bool bUseUpVector;
			FVector UpVector;
			float ClampConeInDegree;
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClampConeInDegree;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UpVector;
		static void NewProp_bUseUpVector_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseUpVector;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LookAtVector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_LookAt_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::NewProp_ClampConeInDegree = { "ClampConeInDegree", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_LookAt_Parms, ClampConeInDegree), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::NewProp_UpVector = { "UpVector", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_LookAt_Parms, UpVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::NewProp_bUseUpVector_SetBit(void* Obj)
	{
		((KismetAnimationLibrary_eventK2_LookAt_Parms*)Obj)->bUseUpVector = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::NewProp_bUseUpVector = { "bUseUpVector", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KismetAnimationLibrary_eventK2_LookAt_Parms), &Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::NewProp_bUseUpVector_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::NewProp_LookAtVector = { "LookAtVector", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_LookAt_Parms, LookAtVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::NewProp_TargetPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::NewProp_TargetPosition = { "TargetPosition", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_LookAt_Parms, TargetPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::NewProp_TargetPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::NewProp_TargetPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::NewProp_CurrentTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::NewProp_CurrentTransform = { "CurrentTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_LookAt_Parms, CurrentTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::NewProp_CurrentTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::NewProp_CurrentTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::NewProp_ClampConeInDegree,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::NewProp_UpVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::NewProp_bUseUpVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::NewProp_LookAtVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::NewProp_TargetPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::NewProp_CurrentTransform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::Function_MetaDataParams[] = {
		{ "bUseUpVector", "false" },
		{ "Category", "Utilities|Animation" },
		{ "Comment", "/**\n\x09 *\x09""Computes the transform which is \"looking\" at target position with a local axis.\n\x09 *\n\x09 *\x09@param CurrentTransform The input transform to modify\n\x09 *\x09@param TargetPosition The position this transform should look at\n\x09 *\x09@param LookAtVector The local vector to align with the target\n\x09 *\x09@param bUseUpVector If set to true the lookat will also perform a twist rotation\n\x09 *\x09@param UpVector The position to use for the upvector target (only used is bUseUpVector is turned on)\n\x09 *\x09@param ClampConeInDegree A limit for only allowing the lookat to rotate as much as defined by the float value\n\x09 */" },
		{ "DisplayName", "Look At Function" },
		{ "ModuleRelativePath", "Public/KismetAnimationLibrary.h" },
		{ "ScriptName", "LookAt" },
		{ "ToolTip", "Computes the transform which is \"looking\" at target position with a local axis.\n\n@param CurrentTransform The input transform to modify\n@param TargetPosition The position this transform should look at\n@param LookAtVector The local vector to align with the target\n@param bUseUpVector If set to true the lookat will also perform a twist rotation\n@param UpVector The position to use for the upvector target (only used is bUseUpVector is turned on)\n@param ClampConeInDegree A limit for only allowing the lookat to rotate as much as defined by the float value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetAnimationLibrary, nullptr, "K2_LookAt", nullptr, nullptr, sizeof(KismetAnimationLibrary_eventK2_LookAt_Parms), Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Statics
	{
		struct KismetAnimationLibrary_eventK2_MakePerlinNoiseAndRemap_Parms
		{
			float Value;
			float RangeOutMin;
			float RangeOutMax;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RangeOutMax;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RangeOutMin;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_MakePerlinNoiseAndRemap_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Statics::NewProp_RangeOutMax = { "RangeOutMax", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_MakePerlinNoiseAndRemap_Parms, RangeOutMax), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Statics::NewProp_RangeOutMin = { "RangeOutMin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_MakePerlinNoiseAndRemap_Parms, RangeOutMin), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_MakePerlinNoiseAndRemap_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Statics::NewProp_RangeOutMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Statics::NewProp_RangeOutMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Animation" },
		{ "Comment", "/**\n\x09 *\x09This function creates perlin noise for a single float and then range map to RangeOut\n\x09 *\n\x09 *\x09@param Value The input value for the noise function\n\x09 *\x09@param RangeOutMin The minimum for the output range\n\x09 *\x09@param RangeOutMax The maximum for the output range\n\x09 */" },
		{ "DisplayName", "Make Perlin Noise and Remap" },
		{ "ModuleRelativePath", "Public/KismetAnimationLibrary.h" },
		{ "RangeOutMaxX", "1.f" },
		{ "RangeOutMaxY", "1.f" },
		{ "RangeOutMaxZ", "1.f" },
		{ "RangeOutMinX", "-1.f" },
		{ "RangeOutMinY", "-1.f" },
		{ "RangeOutMinZ", "-1.f" },
		{ "ScriptName", "MakeFloatFromPerlinNoise" },
		{ "ToolTip", "This function creates perlin noise for a single float and then range map to RangeOut\n\n@param Value The input value for the noise function\n@param RangeOutMin The minimum for the output range\n@param RangeOutMax The maximum for the output range" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetAnimationLibrary, nullptr, "K2_MakePerlinNoiseAndRemap", nullptr, nullptr, sizeof(KismetAnimationLibrary_eventK2_MakePerlinNoiseAndRemap_Parms), Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics
	{
		struct KismetAnimationLibrary_eventK2_MakePerlinNoiseVectorAndRemap_Parms
		{
			float X;
			float Y;
			float Z;
			float RangeOutMinX;
			float RangeOutMaxX;
			float RangeOutMinY;
			float RangeOutMaxY;
			float RangeOutMinZ;
			float RangeOutMaxZ;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RangeOutMaxZ;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RangeOutMinZ;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RangeOutMaxY;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RangeOutMinY;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RangeOutMaxX;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RangeOutMinX;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Z;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Y;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_X;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_MakePerlinNoiseVectorAndRemap_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::NewProp_RangeOutMaxZ = { "RangeOutMaxZ", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_MakePerlinNoiseVectorAndRemap_Parms, RangeOutMaxZ), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::NewProp_RangeOutMinZ = { "RangeOutMinZ", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_MakePerlinNoiseVectorAndRemap_Parms, RangeOutMinZ), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::NewProp_RangeOutMaxY = { "RangeOutMaxY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_MakePerlinNoiseVectorAndRemap_Parms, RangeOutMaxY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::NewProp_RangeOutMinY = { "RangeOutMinY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_MakePerlinNoiseVectorAndRemap_Parms, RangeOutMinY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::NewProp_RangeOutMaxX = { "RangeOutMaxX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_MakePerlinNoiseVectorAndRemap_Parms, RangeOutMaxX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::NewProp_RangeOutMinX = { "RangeOutMinX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_MakePerlinNoiseVectorAndRemap_Parms, RangeOutMinX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_MakePerlinNoiseVectorAndRemap_Parms, Z), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_MakePerlinNoiseVectorAndRemap_Parms, Y), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_MakePerlinNoiseVectorAndRemap_Parms, X), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::NewProp_RangeOutMaxZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::NewProp_RangeOutMinZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::NewProp_RangeOutMaxY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::NewProp_RangeOutMinY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::NewProp_RangeOutMaxX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::NewProp_RangeOutMinX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::NewProp_Z,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::NewProp_Y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::NewProp_X,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Animation" },
		{ "Comment", "/** \n\x09 *\x09This function creates perlin noise from input X, Y, Z, and then range map to RangeOut, and out put to OutX, OutY, OutZ\n\x09 *\n\x09 *\x09@param X The x component for the input position of the noise\n\x09 *\x09@param Y The y component for the input position of the noise\n\x09 *\x09@param Z The z component for the input position of the noise\n\x09 *\x09@param RangeOutMinX The minimum for the output range for the x component\n\x09 *\x09@param RangeOutMaxX The maximum for the output range for the x component\n\x09 *\x09@param RangeOutMinY The minimum for the output range for the y component\n\x09 *\x09@param RangeOutMaxY The maximum for the output range for the y component\n\x09 *\x09@param RangeOutMinZ The minimum for the output range for the z component\n\x09 *\x09@param RangeOutMaxZ The maximum for the output range for the z component\n\x09 */" },
		{ "DisplayName", "Make Perlin Noise Vector and Remap" },
		{ "ModuleRelativePath", "Public/KismetAnimationLibrary.h" },
		{ "RangeOutMaxX", "1.f" },
		{ "RangeOutMaxY", "1.f" },
		{ "RangeOutMaxZ", "1.f" },
		{ "RangeOutMinX", "-1.f" },
		{ "RangeOutMinY", "-1.f" },
		{ "RangeOutMinZ", "-1.f" },
		{ "ScriptName", "MakeVectorFromPerlinNoise" },
		{ "ToolTip", "This function creates perlin noise from input X, Y, Z, and then range map to RangeOut, and out put to OutX, OutY, OutZ\n\n@param X The x component for the input position of the noise\n@param Y The y component for the input position of the noise\n@param Z The z component for the input position of the noise\n@param RangeOutMinX The minimum for the output range for the x component\n@param RangeOutMaxX The maximum for the output range for the x component\n@param RangeOutMinY The minimum for the output range for the y component\n@param RangeOutMaxY The maximum for the output range for the y component\n@param RangeOutMinZ The minimum for the output range for the z component\n@param RangeOutMaxZ The maximum for the output range for the z component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetAnimationLibrary, nullptr, "K2_MakePerlinNoiseVectorAndRemap", nullptr, nullptr, sizeof(KismetAnimationLibrary_eventK2_MakePerlinNoiseVectorAndRemap_Parms), Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetAnimationLibrary_K2_StartProfilingTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_StartProfilingTimer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Animation" },
		{ "Comment", "/**\n\x09 *\x09This function starts measuring the time for a profiling bracket\n\x09 */" },
		{ "DisplayName", "Start Profiling Timer" },
		{ "ModuleRelativePath", "Public/KismetAnimationLibrary.h" },
		{ "ToolTip", "This function starts measuring the time for a profiling bracket" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_StartProfilingTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetAnimationLibrary, nullptr, "K2_StartProfilingTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_StartProfilingTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_StartProfilingTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetAnimationLibrary_K2_StartProfilingTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetAnimationLibrary_K2_StartProfilingTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics
	{
		struct KismetAnimationLibrary_eventK2_TwoBoneIK_Parms
		{
			FVector RootPos;
			FVector JointPos;
			FVector EndPos;
			FVector JointTarget;
			FVector Effector;
			FVector OutJointPos;
			FVector OutEndPos;
			bool bAllowStretching;
			float StartStretchRatio;
			float MaxStretchScale;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxStretchScale;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartStretchRatio;
		static void NewProp_bAllowStretching_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowStretching;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutEndPos;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutJointPos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Effector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Effector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JointTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_JointTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndPos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndPos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JointPos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_JointPos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootPos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RootPos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_MaxStretchScale = { "MaxStretchScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_TwoBoneIK_Parms, MaxStretchScale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_StartStretchRatio = { "StartStretchRatio", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_TwoBoneIK_Parms, StartStretchRatio), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_bAllowStretching_SetBit(void* Obj)
	{
		((KismetAnimationLibrary_eventK2_TwoBoneIK_Parms*)Obj)->bAllowStretching = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_bAllowStretching = { "bAllowStretching", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KismetAnimationLibrary_eventK2_TwoBoneIK_Parms), &Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_bAllowStretching_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_OutEndPos = { "OutEndPos", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_TwoBoneIK_Parms, OutEndPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_OutJointPos = { "OutJointPos", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_TwoBoneIK_Parms, OutJointPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_Effector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_Effector = { "Effector", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_TwoBoneIK_Parms, Effector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_Effector_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_Effector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_JointTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_JointTarget = { "JointTarget", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_TwoBoneIK_Parms, JointTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_JointTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_JointTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_EndPos_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_EndPos = { "EndPos", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_TwoBoneIK_Parms, EndPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_EndPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_EndPos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_JointPos_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_JointPos = { "JointPos", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_TwoBoneIK_Parms, JointPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_JointPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_JointPos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_RootPos_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_RootPos = { "RootPos", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_TwoBoneIK_Parms, RootPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_RootPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_RootPos_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_MaxStretchScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_StartStretchRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_bAllowStretching,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_OutEndPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_OutJointPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_Effector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_JointTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_EndPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_JointPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_RootPos,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::Function_MetaDataParams[] = {
		{ "bAllowStretching", "false" },
		{ "Category", "Utilities|Animation" },
		{ "Comment", "/**\n\x09 *\x09""Computes the transform for two bones using inverse kinematics.\n\x09 *\n\x09 *\x09@param RootPos The input root position of the two bone chain\n\x09 *\x09@param JointPos The input center (elbow) position of the two bone chain\n\x09 *\x09@param EndPos The input end (wrist) position of the two bone chain\n\x09 *\x09@param JointTarget The IK target for the write to reach\n\x09 *\x09@param Effector The position of the target effector for the IK Chain.\n\x09 *\x09@param OutJointPos The resulting position for the center (elbow)\n\x09 *\x09@param OutEndPos The resulting position for the end (wrist)\n\x09 *\x09@param bAllowStretching If set to true the bones are allowed to stretch\n\x09 *\x09@param StartStretchRatio The ratio at which the bones should start to stretch. The higher the value, the later the stretching wil start.\n\x09 *\x09@param MaxStretchScale The maximum multiplier for the stretch to reach.\n\x09 */" },
		{ "DisplayName", "Two Bone IK Function" },
		{ "MaxStretchScale", "1.2" },
		{ "ModuleRelativePath", "Public/KismetAnimationLibrary.h" },
		{ "ScriptName", "TwoBoneIK" },
		{ "StartStretchRatio", "1.0" },
		{ "ToolTip", "Computes the transform for two bones using inverse kinematics.\n\n@param RootPos The input root position of the two bone chain\n@param JointPos The input center (elbow) position of the two bone chain\n@param EndPos The input end (wrist) position of the two bone chain\n@param JointTarget The IK target for the write to reach\n@param Effector The position of the target effector for the IK Chain.\n@param OutJointPos The resulting position for the center (elbow)\n@param OutEndPos The resulting position for the end (wrist)\n@param bAllowStretching If set to true the bones are allowed to stretch\n@param StartStretchRatio The ratio at which the bones should start to stretch. The higher the value, the later the stretching wil start.\n@param MaxStretchScale The maximum multiplier for the stretch to reach." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetAnimationLibrary, nullptr, "K2_TwoBoneIK", nullptr, nullptr, sizeof(KismetAnimationLibrary_eventK2_TwoBoneIK_Parms), Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UKismetAnimationLibrary_NoRegister()
	{
		return UKismetAnimationLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UKismetAnimationLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKismetAnimationLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKismetAnimationLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory, "K2_CalculateVelocityFromPositionHistory" }, // 4233611933
		{ &Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets, "K2_CalculateVelocityFromSockets" }, // 735977364
		{ &Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets, "K2_DirectionBetweenSockets" }, // 2459733289
		{ &Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange, "K2_DistanceBetweenTwoSocketsAndMapRange" }, // 4251696070
		{ &Z_Construct_UFunction_UKismetAnimationLibrary_K2_EndProfilingTimer, "K2_EndProfilingTimer" }, // 1578437302
		{ &Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt, "K2_LookAt" }, // 103790014
		{ &Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap, "K2_MakePerlinNoiseAndRemap" }, // 31942421
		{ &Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap, "K2_MakePerlinNoiseVectorAndRemap" }, // 4095483196
		{ &Z_Construct_UFunction_UKismetAnimationLibrary_K2_StartProfilingTimer, "K2_StartProfilingTimer" }, // 793250208
		{ &Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK, "K2_TwoBoneIK" }, // 2385124552
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKismetAnimationLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09""A library of the most common animation blueprint functions.\n */" },
		{ "DocumentationPolicy", "Strict" },
		{ "IncludePath", "KismetAnimationLibrary.h" },
		{ "ModuleRelativePath", "Public/KismetAnimationLibrary.h" },
		{ "ScriptName", "AnimGraphLibrary" },
		{ "ToolTip", "A library of the most common animation blueprint functions." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKismetAnimationLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKismetAnimationLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKismetAnimationLibrary_Statics::ClassParams = {
		&UKismetAnimationLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UKismetAnimationLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKismetAnimationLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKismetAnimationLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKismetAnimationLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKismetAnimationLibrary, 1963055047);
	template<> ANIMGRAPHRUNTIME_API UClass* StaticClass<UKismetAnimationLibrary>()
	{
		return UKismetAnimationLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKismetAnimationLibrary(Z_Construct_UClass_UKismetAnimationLibrary, &UKismetAnimationLibrary::StaticClass, TEXT("/Script/AnimGraphRuntime"), TEXT("UKismetAnimationLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKismetAnimationLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
