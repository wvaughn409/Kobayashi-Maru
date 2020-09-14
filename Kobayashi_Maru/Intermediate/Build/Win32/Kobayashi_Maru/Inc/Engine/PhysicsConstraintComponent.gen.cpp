// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/PhysicsEngine/PhysicsConstraintComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsConstraintComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsConstraintComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsConstraintComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAngularDriveMode();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAngularConstraintMotion();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EConstraintFrame();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELinearConstraintMotion();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintInstance();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_ConstraintBrokenSignature__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsConstraintTemplate_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FConstrainComponentPropName();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPhysicsConstraintComponent::execIsBroken)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsBroken();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsConstraintComponent::execGetConstraintForce)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutLinearForce);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutAngularForce);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetConstraintForce(Z_Param_Out_OutLinearForce,Z_Param_Out_OutAngularForce);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsConstraintComponent::execSetDisableCollision)
	{
		P_GET_UBOOL(Z_Param_bDisableCollision);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDisableCollision(Z_Param_bDisableCollision);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsConstraintComponent::execSetConstraintReferenceOrientation)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Frame);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PriAxis);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_SecAxis);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetConstraintReferenceOrientation(EConstraintFrame::Type(Z_Param_Frame),Z_Param_Out_PriAxis,Z_Param_Out_SecAxis);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsConstraintComponent::execSetConstraintReferencePosition)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Frame);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_RefPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetConstraintReferencePosition(EConstraintFrame::Type(Z_Param_Frame),Z_Param_Out_RefPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsConstraintComponent::execSetConstraintReferenceFrame)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Frame);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_RefFrame);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetConstraintReferenceFrame(EConstraintFrame::Type(Z_Param_Frame),Z_Param_Out_RefFrame);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsConstraintComponent::execGetCurrentSwing2)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentSwing2();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsConstraintComponent::execGetCurrentSwing1)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentSwing1();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsConstraintComponent::execGetCurrentTwist)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentTwist();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsConstraintComponent::execSetAngularBreakable)
	{
		P_GET_UBOOL(Z_Param_bAngularBreakable);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AngularBreakThreshold);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAngularBreakable(Z_Param_bAngularBreakable,Z_Param_AngularBreakThreshold);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsConstraintComponent::execSetLinearBreakable)
	{
		P_GET_UBOOL(Z_Param_bLinearBreakable);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LinearBreakThreshold);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLinearBreakable(Z_Param_bLinearBreakable,Z_Param_LinearBreakThreshold);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsConstraintComponent::execSetAngularTwistLimit)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_ConstraintType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TwistLimitAngle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAngularTwistLimit(EAngularConstraintMotion(Z_Param_ConstraintType),Z_Param_TwistLimitAngle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsConstraintComponent::execSetAngularSwing2Limit)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_MotionType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Swing2LimitAngle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAngularSwing2Limit(EAngularConstraintMotion(Z_Param_MotionType),Z_Param_Swing2LimitAngle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsConstraintComponent::execSetAngularSwing1Limit)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_MotionType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Swing1LimitAngle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAngularSwing1Limit(EAngularConstraintMotion(Z_Param_MotionType),Z_Param_Swing1LimitAngle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsConstraintComponent::execSetLinearZLimit)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_ConstraintType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LimitSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLinearZLimit(ELinearConstraintMotion(Z_Param_ConstraintType),Z_Param_LimitSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsConstraintComponent::execSetLinearYLimit)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_ConstraintType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LimitSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLinearYLimit(ELinearConstraintMotion(Z_Param_ConstraintType),Z_Param_LimitSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsConstraintComponent::execSetLinearXLimit)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_ConstraintType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LimitSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLinearXLimit(ELinearConstraintMotion(Z_Param_ConstraintType),Z_Param_LimitSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsConstraintComponent::execSetAngularDriveParams)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_PositionStrength);
		P_GET_PROPERTY(FFloatProperty,Z_Param_VelocityStrength);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InForceLimit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAngularDriveParams(Z_Param_PositionStrength,Z_Param_VelocityStrength,Z_Param_InForceLimit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsConstraintComponent::execSetAngularVelocityTarget)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InVelTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAngularVelocityTarget(Z_Param_Out_InVelTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsConstraintComponent::execSetAngularOrientationTarget)
	{
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_InPosTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAngularOrientationTarget(Z_Param_Out_InPosTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsConstraintComponent::execSetLinearDriveParams)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_PositionStrength);
		P_GET_PROPERTY(FFloatProperty,Z_Param_VelocityStrength);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InForceLimit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLinearDriveParams(Z_Param_PositionStrength,Z_Param_VelocityStrength,Z_Param_InForceLimit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsConstraintComponent::execSetLinearVelocityTarget)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InVelTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLinearVelocityTarget(Z_Param_Out_InVelTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsConstraintComponent::execSetLinearPositionTarget)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InPosTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLinearPositionTarget(Z_Param_Out_InPosTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsConstraintComponent::execSetAngularDriveMode)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_DriveMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAngularDriveMode(EAngularDriveMode::Type(Z_Param_DriveMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsConstraintComponent::execSetAngularVelocityDriveSLERP)
	{
		P_GET_UBOOL(Z_Param_bEnableSLERP);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAngularVelocityDriveSLERP(Z_Param_bEnableSLERP);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsConstraintComponent::execSetAngularVelocityDriveTwistAndSwing)
	{
		P_GET_UBOOL(Z_Param_bEnableTwistDrive);
		P_GET_UBOOL(Z_Param_bEnableSwingDrive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAngularVelocityDriveTwistAndSwing(Z_Param_bEnableTwistDrive,Z_Param_bEnableSwingDrive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsConstraintComponent::execSetAngularVelocityDrive)
	{
		P_GET_UBOOL(Z_Param_bEnableSwingDrive);
		P_GET_UBOOL(Z_Param_bEnableTwistDrive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAngularVelocityDrive(Z_Param_bEnableSwingDrive,Z_Param_bEnableTwistDrive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsConstraintComponent::execSetOrientationDriveSLERP)
	{
		P_GET_UBOOL(Z_Param_bEnableSLERP);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOrientationDriveSLERP(Z_Param_bEnableSLERP);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsConstraintComponent::execSetOrientationDriveTwistAndSwing)
	{
		P_GET_UBOOL(Z_Param_bEnableTwistDrive);
		P_GET_UBOOL(Z_Param_bEnableSwingDrive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOrientationDriveTwistAndSwing(Z_Param_bEnableTwistDrive,Z_Param_bEnableSwingDrive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsConstraintComponent::execSetAngularOrientationDrive)
	{
		P_GET_UBOOL(Z_Param_bEnableSwingDrive);
		P_GET_UBOOL(Z_Param_bEnableTwistDrive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAngularOrientationDrive(Z_Param_bEnableSwingDrive,Z_Param_bEnableTwistDrive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsConstraintComponent::execSetLinearVelocityDrive)
	{
		P_GET_UBOOL(Z_Param_bEnableDriveX);
		P_GET_UBOOL(Z_Param_bEnableDriveY);
		P_GET_UBOOL(Z_Param_bEnableDriveZ);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLinearVelocityDrive(Z_Param_bEnableDriveX,Z_Param_bEnableDriveY,Z_Param_bEnableDriveZ);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsConstraintComponent::execSetLinearPositionDrive)
	{
		P_GET_UBOOL(Z_Param_bEnableDriveX);
		P_GET_UBOOL(Z_Param_bEnableDriveY);
		P_GET_UBOOL(Z_Param_bEnableDriveZ);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLinearPositionDrive(Z_Param_bEnableDriveX,Z_Param_bEnableDriveY,Z_Param_bEnableDriveZ);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsConstraintComponent::execBreakConstraint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BreakConstraint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsConstraintComponent::execSetConstrainedComponents)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component1);
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName1);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component2);
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName2);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetConstrainedComponents(Z_Param_Component1,Z_Param_BoneName1,Z_Param_Component2,Z_Param_BoneName2);
		P_NATIVE_END;
	}
	void UPhysicsConstraintComponent::StaticRegisterNativesUPhysicsConstraintComponent()
	{
		UClass* Class = UPhysicsConstraintComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BreakConstraint", &UPhysicsConstraintComponent::execBreakConstraint },
			{ "GetConstraintForce", &UPhysicsConstraintComponent::execGetConstraintForce },
			{ "GetCurrentSwing1", &UPhysicsConstraintComponent::execGetCurrentSwing1 },
			{ "GetCurrentSwing2", &UPhysicsConstraintComponent::execGetCurrentSwing2 },
			{ "GetCurrentTwist", &UPhysicsConstraintComponent::execGetCurrentTwist },
			{ "IsBroken", &UPhysicsConstraintComponent::execIsBroken },
			{ "SetAngularBreakable", &UPhysicsConstraintComponent::execSetAngularBreakable },
			{ "SetAngularDriveMode", &UPhysicsConstraintComponent::execSetAngularDriveMode },
			{ "SetAngularDriveParams", &UPhysicsConstraintComponent::execSetAngularDriveParams },
			{ "SetAngularOrientationDrive", &UPhysicsConstraintComponent::execSetAngularOrientationDrive },
			{ "SetAngularOrientationTarget", &UPhysicsConstraintComponent::execSetAngularOrientationTarget },
			{ "SetAngularSwing1Limit", &UPhysicsConstraintComponent::execSetAngularSwing1Limit },
			{ "SetAngularSwing2Limit", &UPhysicsConstraintComponent::execSetAngularSwing2Limit },
			{ "SetAngularTwistLimit", &UPhysicsConstraintComponent::execSetAngularTwistLimit },
			{ "SetAngularVelocityDrive", &UPhysicsConstraintComponent::execSetAngularVelocityDrive },
			{ "SetAngularVelocityDriveSLERP", &UPhysicsConstraintComponent::execSetAngularVelocityDriveSLERP },
			{ "SetAngularVelocityDriveTwistAndSwing", &UPhysicsConstraintComponent::execSetAngularVelocityDriveTwistAndSwing },
			{ "SetAngularVelocityTarget", &UPhysicsConstraintComponent::execSetAngularVelocityTarget },
			{ "SetConstrainedComponents", &UPhysicsConstraintComponent::execSetConstrainedComponents },
			{ "SetConstraintReferenceFrame", &UPhysicsConstraintComponent::execSetConstraintReferenceFrame },
			{ "SetConstraintReferenceOrientation", &UPhysicsConstraintComponent::execSetConstraintReferenceOrientation },
			{ "SetConstraintReferencePosition", &UPhysicsConstraintComponent::execSetConstraintReferencePosition },
			{ "SetDisableCollision", &UPhysicsConstraintComponent::execSetDisableCollision },
			{ "SetLinearBreakable", &UPhysicsConstraintComponent::execSetLinearBreakable },
			{ "SetLinearDriveParams", &UPhysicsConstraintComponent::execSetLinearDriveParams },
			{ "SetLinearPositionDrive", &UPhysicsConstraintComponent::execSetLinearPositionDrive },
			{ "SetLinearPositionTarget", &UPhysicsConstraintComponent::execSetLinearPositionTarget },
			{ "SetLinearVelocityDrive", &UPhysicsConstraintComponent::execSetLinearVelocityDrive },
			{ "SetLinearVelocityTarget", &UPhysicsConstraintComponent::execSetLinearVelocityTarget },
			{ "SetLinearXLimit", &UPhysicsConstraintComponent::execSetLinearXLimit },
			{ "SetLinearYLimit", &UPhysicsConstraintComponent::execSetLinearYLimit },
			{ "SetLinearZLimit", &UPhysicsConstraintComponent::execSetLinearZLimit },
			{ "SetOrientationDriveSLERP", &UPhysicsConstraintComponent::execSetOrientationDriveSLERP },
			{ "SetOrientationDriveTwistAndSwing", &UPhysicsConstraintComponent::execSetOrientationDriveTwistAndSwing },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPhysicsConstraintComponent_BreakConstraint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_BreakConstraint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "/** Break this constraint */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Break this constraint" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_BreakConstraint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "BreakConstraint", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_BreakConstraint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_BreakConstraint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_BreakConstraint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_BreakConstraint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraintForce_Statics
	{
		struct PhysicsConstraintComponent_eventGetConstraintForce_Parms
		{
			FVector OutLinearForce;
			FVector OutAngularForce;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutAngularForce;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutLinearForce;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraintForce_Statics::NewProp_OutAngularForce = { "OutAngularForce", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventGetConstraintForce_Parms, OutAngularForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraintForce_Statics::NewProp_OutLinearForce = { "OutLinearForce", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventGetConstraintForce_Parms, OutLinearForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraintForce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraintForce_Statics::NewProp_OutAngularForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraintForce_Statics::NewProp_OutLinearForce,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraintForce_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "// Retrieve the constraint force most recently applied to maintain this constraint. Returns 0 forces if the constraint is not initialized or broken.\n" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Retrieve the constraint force most recently applied to maintain this constraint. Returns 0 forces if the constraint is not initialized or broken." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraintForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "GetConstraintForce", nullptr, nullptr, sizeof(PhysicsConstraintComponent_eventGetConstraintForce_Parms), Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraintForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraintForce_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraintForce_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraintForce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraintForce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraintForce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing1_Statics
	{
		struct PhysicsConstraintComponent_eventGetCurrentSwing1_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing1_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventGetCurrentSwing1_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing1_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing1_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing1_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "/** Gets the current Swing1 of the constraint */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Gets the current Swing1 of the constraint" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "GetCurrentSwing1", nullptr, nullptr, sizeof(PhysicsConstraintComponent_eventGetCurrentSwing1_Parms), Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing1_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing1_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing1_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing1_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing1()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing1_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing2_Statics
	{
		struct PhysicsConstraintComponent_eventGetCurrentSwing2_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing2_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventGetCurrentSwing2_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing2_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing2_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "/** Gets the current Swing2 of the constraint */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Gets the current Swing2 of the constraint" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "GetCurrentSwing2", nullptr, nullptr, sizeof(PhysicsConstraintComponent_eventGetCurrentSwing2_Parms), Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing2_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentTwist_Statics
	{
		struct PhysicsConstraintComponent_eventGetCurrentTwist_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentTwist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventGetCurrentTwist_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentTwist_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentTwist_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentTwist_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "/** Gets the current Angular Twist of the constraint */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Gets the current Angular Twist of the constraint" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentTwist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "GetCurrentTwist", nullptr, nullptr, sizeof(PhysicsConstraintComponent_eventGetCurrentTwist_Parms), Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentTwist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentTwist_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentTwist_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentTwist_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentTwist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentTwist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsConstraintComponent_IsBroken_Statics
	{
		struct PhysicsConstraintComponent_eventIsBroken_Parms
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
	void Z_Construct_UFunction_UPhysicsConstraintComponent_IsBroken_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PhysicsConstraintComponent_eventIsBroken_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_IsBroken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PhysicsConstraintComponent_eventIsBroken_Parms), &Z_Construct_UFunction_UPhysicsConstraintComponent_IsBroken_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_IsBroken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_IsBroken_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_IsBroken_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "// Retrieve the status of constraint being broken.\n" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Retrieve the status of constraint being broken." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_IsBroken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "IsBroken", nullptr, nullptr, sizeof(PhysicsConstraintComponent_eventIsBroken_Parms), Z_Construct_UFunction_UPhysicsConstraintComponent_IsBroken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_IsBroken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_IsBroken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_IsBroken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_IsBroken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_IsBroken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularBreakable_Statics
	{
		struct PhysicsConstraintComponent_eventSetAngularBreakable_Parms
		{
			bool bAngularBreakable;
			float AngularBreakThreshold;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngularBreakThreshold;
		static void NewProp_bAngularBreakable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAngularBreakable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularBreakable_Statics::NewProp_AngularBreakThreshold = { "AngularBreakThreshold", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetAngularBreakable_Parms, AngularBreakThreshold), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularBreakable_Statics::NewProp_bAngularBreakable_SetBit(void* Obj)
	{
		((PhysicsConstraintComponent_eventSetAngularBreakable_Parms*)Obj)->bAngularBreakable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularBreakable_Statics::NewProp_bAngularBreakable = { "bAngularBreakable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PhysicsConstraintComponent_eventSetAngularBreakable_Parms), &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularBreakable_Statics::NewProp_bAngularBreakable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularBreakable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularBreakable_Statics::NewProp_AngularBreakThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularBreakable_Statics::NewProp_bAngularBreakable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularBreakable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "/** Sets the Angular Breakable properties\n\x09*\x09@param bAngularBreakable\x09\x09Whether it is possible to break the joint with angular force\n\x09*\x09@param AngularBreakThreshold\x09Torque needed to break the joint\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Sets the Angular Breakable properties\n     @param bAngularBreakable                Whether it is possible to break the joint with angular force\n     @param AngularBreakThreshold    Torque needed to break the joint" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularBreakable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "SetAngularBreakable", nullptr, nullptr, sizeof(PhysicsConstraintComponent_eventSetAngularBreakable_Parms), Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularBreakable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularBreakable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularBreakable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularBreakable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularBreakable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularBreakable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveMode_Statics
	{
		struct PhysicsConstraintComponent_eventSetAngularDriveMode_Parms
		{
			TEnumAsByte<EAngularDriveMode::Type> DriveMode;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DriveMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveMode_Statics::NewProp_DriveMode = { "DriveMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetAngularDriveMode_Parms, DriveMode), Z_Construct_UEnum_Engine_EAngularDriveMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveMode_Statics::NewProp_DriveMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "/** Switches the angular drive mode between SLERP and Twist And Swing\n\x09*\n\x09*\x09@param DriveMode\x09The angular drive mode to use. SLERP uses shortest spherical path, but will not work if any angular constraints are locked. Twist and Swing decomposes the path into the different angular degrees of freedom but may experience gimbal lock\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Switches the angular drive mode between SLERP and Twist And Swing\n\n     @param DriveMode        The angular drive mode to use. SLERP uses shortest spherical path, but will not work if any angular constraints are locked. Twist and Swing decomposes the path into the different angular degrees of freedom but may experience gimbal lock" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "SetAngularDriveMode", nullptr, nullptr, sizeof(PhysicsConstraintComponent_eventSetAngularDriveMode_Parms), Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveParams_Statics
	{
		struct PhysicsConstraintComponent_eventSetAngularDriveParams_Parms
		{
			float PositionStrength;
			float VelocityStrength;
			float InForceLimit;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InForceLimit;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VelocityStrength;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PositionStrength;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveParams_Statics::NewProp_InForceLimit = { "InForceLimit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetAngularDriveParams_Parms, InForceLimit), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveParams_Statics::NewProp_VelocityStrength = { "VelocityStrength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetAngularDriveParams_Parms, VelocityStrength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveParams_Statics::NewProp_PositionStrength = { "PositionStrength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetAngularDriveParams_Parms, PositionStrength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveParams_Statics::NewProp_InForceLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveParams_Statics::NewProp_VelocityStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveParams_Statics::NewProp_PositionStrength,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveParams_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "/** Sets the drive params for the angular drive. \n\x09 *\x09@param PositionStrength\x09\x09Positional strength for the drive (stiffness)\n\x09 *\x09@param VelocityStrength \x09Velocity strength of the drive (damping)\n\x09 *\x09@param InForceLimit\x09Max force applied by the drive\n\x09 */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Sets the drive params for the angular drive.\n    @param PositionStrength         Positional strength for the drive (stiffness)\n    @param VelocityStrength         Velocity strength of the drive (damping)\n    @param InForceLimit     Max force applied by the drive" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "SetAngularDriveParams", nullptr, nullptr, sizeof(PhysicsConstraintComponent_eventSetAngularDriveParams_Parms), Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationDrive_Statics
	{
		struct PhysicsConstraintComponent_eventSetAngularOrientationDrive_Parms
		{
			bool bEnableSwingDrive;
			bool bEnableTwistDrive;
		};
		static void NewProp_bEnableTwistDrive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableTwistDrive;
		static void NewProp_bEnableSwingDrive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableSwingDrive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationDrive_Statics::NewProp_bEnableTwistDrive_SetBit(void* Obj)
	{
		((PhysicsConstraintComponent_eventSetAngularOrientationDrive_Parms*)Obj)->bEnableTwistDrive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationDrive_Statics::NewProp_bEnableTwistDrive = { "bEnableTwistDrive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PhysicsConstraintComponent_eventSetAngularOrientationDrive_Parms), &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationDrive_Statics::NewProp_bEnableTwistDrive_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationDrive_Statics::NewProp_bEnableSwingDrive_SetBit(void* Obj)
	{
		((PhysicsConstraintComponent_eventSetAngularOrientationDrive_Parms*)Obj)->bEnableSwingDrive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationDrive_Statics::NewProp_bEnableSwingDrive = { "bEnableSwingDrive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PhysicsConstraintComponent_eventSetAngularOrientationDrive_Parms), &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationDrive_Statics::NewProp_bEnableSwingDrive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationDrive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationDrive_Statics::NewProp_bEnableTwistDrive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationDrive_Statics::NewProp_bEnableSwingDrive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationDrive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "/** Enables/Disables angular orientation drive. Only relevant if the AngularDriveMode is set to Twist and Swing \n\x09 *\x09\n\x09 *\x09@param bEnableSwingDrive\x09Indicates whether the drive for the swing axis should be enabled. Only relevant if the AngularDriveMode is set to Twist and Swing\n\x09 *\x09@param bEnableTwistDrive\x09Indicates whether the drive for the twist axis should be enabled. Only relevant if the AngularDriveMode is set to Twist and Swing\n\x09 */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use SetOrientationDriveTwistAndSwing instead." },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Enables/Disables angular orientation drive. Only relevant if the AngularDriveMode is set to Twist and Swing\n\n    @param bEnableSwingDrive        Indicates whether the drive for the swing axis should be enabled. Only relevant if the AngularDriveMode is set to Twist and Swing\n    @param bEnableTwistDrive        Indicates whether the drive for the twist axis should be enabled. Only relevant if the AngularDriveMode is set to Twist and Swing" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationDrive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "SetAngularOrientationDrive", nullptr, nullptr, sizeof(PhysicsConstraintComponent_eventSetAngularOrientationDrive_Parms), Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationDrive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationDrive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationDrive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationDrive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationDrive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationDrive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationTarget_Statics
	{
		struct PhysicsConstraintComponent_eventSetAngularOrientationTarget_Parms
		{
			FRotator InPosTarget;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPosTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPosTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationTarget_Statics::NewProp_InPosTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationTarget_Statics::NewProp_InPosTarget = { "InPosTarget", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetAngularOrientationTarget_Parms, InPosTarget), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationTarget_Statics::NewProp_InPosTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationTarget_Statics::NewProp_InPosTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationTarget_Statics::NewProp_InPosTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "/** Sets the target orientation for the angular drive. \n\x09 *\x09@param InPosTarget\x09\x09Target orientation\n\x09 */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Sets the target orientation for the angular drive.\n    @param InPosTarget              Target orientation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "SetAngularOrientationTarget", nullptr, nullptr, sizeof(PhysicsConstraintComponent_eventSetAngularOrientationTarget_Parms), Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing1Limit_Statics
	{
		struct PhysicsConstraintComponent_eventSetAngularSwing1Limit_Parms
		{
			TEnumAsByte<EAngularConstraintMotion> MotionType;
			float Swing1LimitAngle;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Swing1LimitAngle;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MotionType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing1Limit_Statics::NewProp_Swing1LimitAngle = { "Swing1LimitAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetAngularSwing1Limit_Parms, Swing1LimitAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing1Limit_Statics::NewProp_MotionType = { "MotionType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetAngularSwing1Limit_Parms, MotionType), Z_Construct_UEnum_Engine_EAngularConstraintMotion, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing1Limit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing1Limit_Statics::NewProp_Swing1LimitAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing1Limit_Statics::NewProp_MotionType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing1Limit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "/** Sets the Angular Swing1 Motion Type\n\x09*\x09@param ConstraintType\x09New Constraint Type\n\x09*\x09@param Swing1LimitAngle\x09Size of limit in degrees\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Sets the Angular Swing1 Motion Type\n     @param ConstraintType   New Constraint Type\n     @param Swing1LimitAngle Size of limit in degrees" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing1Limit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "SetAngularSwing1Limit", nullptr, nullptr, sizeof(PhysicsConstraintComponent_eventSetAngularSwing1Limit_Parms), Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing1Limit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing1Limit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing1Limit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing1Limit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing1Limit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing1Limit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing2Limit_Statics
	{
		struct PhysicsConstraintComponent_eventSetAngularSwing2Limit_Parms
		{
			TEnumAsByte<EAngularConstraintMotion> MotionType;
			float Swing2LimitAngle;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Swing2LimitAngle;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MotionType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing2Limit_Statics::NewProp_Swing2LimitAngle = { "Swing2LimitAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetAngularSwing2Limit_Parms, Swing2LimitAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing2Limit_Statics::NewProp_MotionType = { "MotionType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetAngularSwing2Limit_Parms, MotionType), Z_Construct_UEnum_Engine_EAngularConstraintMotion, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing2Limit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing2Limit_Statics::NewProp_Swing2LimitAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing2Limit_Statics::NewProp_MotionType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing2Limit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "/** Sets the Angular Swing2 Motion Type\n\x09*\x09@param ConstraintType\x09New Constraint Type\n\x09*\x09@param Swing2LimitAngle\x09Size of limit in degrees\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Sets the Angular Swing2 Motion Type\n     @param ConstraintType   New Constraint Type\n     @param Swing2LimitAngle Size of limit in degrees" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing2Limit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "SetAngularSwing2Limit", nullptr, nullptr, sizeof(PhysicsConstraintComponent_eventSetAngularSwing2Limit_Parms), Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing2Limit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing2Limit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing2Limit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing2Limit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing2Limit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing2Limit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularTwistLimit_Statics
	{
		struct PhysicsConstraintComponent_eventSetAngularTwistLimit_Parms
		{
			TEnumAsByte<EAngularConstraintMotion> ConstraintType;
			float TwistLimitAngle;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TwistLimitAngle;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ConstraintType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularTwistLimit_Statics::NewProp_TwistLimitAngle = { "TwistLimitAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetAngularTwistLimit_Parms, TwistLimitAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularTwistLimit_Statics::NewProp_ConstraintType = { "ConstraintType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetAngularTwistLimit_Parms, ConstraintType), Z_Construct_UEnum_Engine_EAngularConstraintMotion, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularTwistLimit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularTwistLimit_Statics::NewProp_TwistLimitAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularTwistLimit_Statics::NewProp_ConstraintType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularTwistLimit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "/** Sets the Angular Twist Motion Type\n\x09*\x09@param ConstraintType\x09New Constraint Type\n\x09*\x09@param TwistLimitAngle\x09Size of limit in degrees\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Sets the Angular Twist Motion Type\n     @param ConstraintType   New Constraint Type\n     @param TwistLimitAngle  Size of limit in degrees" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularTwistLimit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "SetAngularTwistLimit", nullptr, nullptr, sizeof(PhysicsConstraintComponent_eventSetAngularTwistLimit_Parms), Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularTwistLimit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularTwistLimit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularTwistLimit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularTwistLimit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularTwistLimit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularTwistLimit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDrive_Statics
	{
		struct PhysicsConstraintComponent_eventSetAngularVelocityDrive_Parms
		{
			bool bEnableSwingDrive;
			bool bEnableTwistDrive;
		};
		static void NewProp_bEnableTwistDrive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableTwistDrive;
		static void NewProp_bEnableSwingDrive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableSwingDrive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDrive_Statics::NewProp_bEnableTwistDrive_SetBit(void* Obj)
	{
		((PhysicsConstraintComponent_eventSetAngularVelocityDrive_Parms*)Obj)->bEnableTwistDrive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDrive_Statics::NewProp_bEnableTwistDrive = { "bEnableTwistDrive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PhysicsConstraintComponent_eventSetAngularVelocityDrive_Parms), &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDrive_Statics::NewProp_bEnableTwistDrive_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDrive_Statics::NewProp_bEnableSwingDrive_SetBit(void* Obj)
	{
		((PhysicsConstraintComponent_eventSetAngularVelocityDrive_Parms*)Obj)->bEnableSwingDrive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDrive_Statics::NewProp_bEnableSwingDrive = { "bEnableSwingDrive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PhysicsConstraintComponent_eventSetAngularVelocityDrive_Parms), &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDrive_Statics::NewProp_bEnableSwingDrive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDrive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDrive_Statics::NewProp_bEnableTwistDrive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDrive_Statics::NewProp_bEnableSwingDrive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDrive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use SetAngularVelocityDriveTwistAndSwing instead." },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDrive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "SetAngularVelocityDrive", nullptr, nullptr, sizeof(PhysicsConstraintComponent_eventSetAngularVelocityDrive_Parms), Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDrive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDrive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDrive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDrive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDrive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDrive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveSLERP_Statics
	{
		struct PhysicsConstraintComponent_eventSetAngularVelocityDriveSLERP_Parms
		{
			bool bEnableSLERP;
		};
		static void NewProp_bEnableSLERP_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableSLERP;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveSLERP_Statics::NewProp_bEnableSLERP_SetBit(void* Obj)
	{
		((PhysicsConstraintComponent_eventSetAngularVelocityDriveSLERP_Parms*)Obj)->bEnableSLERP = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveSLERP_Statics::NewProp_bEnableSLERP = { "bEnableSLERP", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PhysicsConstraintComponent_eventSetAngularVelocityDriveSLERP_Parms), &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveSLERP_Statics::NewProp_bEnableSLERP_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveSLERP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveSLERP_Statics::NewProp_bEnableSLERP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveSLERP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "/** Enables/Disables the angular velocity slerp drive. Only relevant if the AngularDriveMode is set to SLERP\n\x09*\n\x09*\x09@param bEnableSLERP     \x09Indicates whether the SLERP drive should be enabled. Only relevant if the AngularDriveMode is set to SLERP\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Enables/Disables the angular velocity slerp drive. Only relevant if the AngularDriveMode is set to SLERP\n\n     @param bEnableSLERP             Indicates whether the SLERP drive should be enabled. Only relevant if the AngularDriveMode is set to SLERP" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveSLERP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "SetAngularVelocityDriveSLERP", nullptr, nullptr, sizeof(PhysicsConstraintComponent_eventSetAngularVelocityDriveSLERP_Parms), Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveSLERP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveSLERP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveSLERP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveSLERP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveSLERP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveSLERP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveTwistAndSwing_Statics
	{
		struct PhysicsConstraintComponent_eventSetAngularVelocityDriveTwistAndSwing_Parms
		{
			bool bEnableTwistDrive;
			bool bEnableSwingDrive;
		};
		static void NewProp_bEnableSwingDrive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableSwingDrive;
		static void NewProp_bEnableTwistDrive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableTwistDrive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveTwistAndSwing_Statics::NewProp_bEnableSwingDrive_SetBit(void* Obj)
	{
		((PhysicsConstraintComponent_eventSetAngularVelocityDriveTwistAndSwing_Parms*)Obj)->bEnableSwingDrive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveTwistAndSwing_Statics::NewProp_bEnableSwingDrive = { "bEnableSwingDrive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PhysicsConstraintComponent_eventSetAngularVelocityDriveTwistAndSwing_Parms), &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveTwistAndSwing_Statics::NewProp_bEnableSwingDrive_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveTwistAndSwing_Statics::NewProp_bEnableTwistDrive_SetBit(void* Obj)
	{
		((PhysicsConstraintComponent_eventSetAngularVelocityDriveTwistAndSwing_Parms*)Obj)->bEnableTwistDrive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveTwistAndSwing_Statics::NewProp_bEnableTwistDrive = { "bEnableTwistDrive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PhysicsConstraintComponent_eventSetAngularVelocityDriveTwistAndSwing_Parms), &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveTwistAndSwing_Statics::NewProp_bEnableTwistDrive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveTwistAndSwing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveTwistAndSwing_Statics::NewProp_bEnableSwingDrive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveTwistAndSwing_Statics::NewProp_bEnableTwistDrive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveTwistAndSwing_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "/** Enables/Disables angular velocity twist and swing drive. Only relevant if the AngularDriveMode is set to Twist and Swing\n\x09*\n\x09*\x09@param bEnableSwingDrive\x09Indicates whether the drive for the swing axis should be enabled. Only relevant if the AngularDriveMode is set to Twist and Swing\n\x09*\x09@param bEnableTwistDrive\x09Indicates whether the drive for the twist axis should be enabled. Only relevant if the AngularDriveMode is set to Twist and Swing\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Enables/Disables angular velocity twist and swing drive. Only relevant if the AngularDriveMode is set to Twist and Swing\n\n     @param bEnableSwingDrive        Indicates whether the drive for the swing axis should be enabled. Only relevant if the AngularDriveMode is set to Twist and Swing\n     @param bEnableTwistDrive        Indicates whether the drive for the twist axis should be enabled. Only relevant if the AngularDriveMode is set to Twist and Swing" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveTwistAndSwing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "SetAngularVelocityDriveTwistAndSwing", nullptr, nullptr, sizeof(PhysicsConstraintComponent_eventSetAngularVelocityDriveTwistAndSwing_Parms), Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveTwistAndSwing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveTwistAndSwing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveTwistAndSwing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveTwistAndSwing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveTwistAndSwing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveTwistAndSwing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityTarget_Statics
	{
		struct PhysicsConstraintComponent_eventSetAngularVelocityTarget_Parms
		{
			FVector InVelTarget;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InVelTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InVelTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityTarget_Statics::NewProp_InVelTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityTarget_Statics::NewProp_InVelTarget = { "InVelTarget", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetAngularVelocityTarget_Parms, InVelTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityTarget_Statics::NewProp_InVelTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityTarget_Statics::NewProp_InVelTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityTarget_Statics::NewProp_InVelTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "/** Sets the target velocity for the angular drive. \n\x09 *\x09@param InVelTarget\x09\x09Target velocity\n\x09 */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Sets the target velocity for the angular drive.\n    @param InVelTarget              Target velocity" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "SetAngularVelocityTarget", nullptr, nullptr, sizeof(PhysicsConstraintComponent_eventSetAngularVelocityTarget_Parms), Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents_Statics
	{
		struct PhysicsConstraintComponent_eventSetConstrainedComponents_Parms
		{
			UPrimitiveComponent* Component1;
			FName BoneName1;
			UPrimitiveComponent* Component2;
			FName BoneName2;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component2;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component1;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents_Statics::NewProp_BoneName2 = { "BoneName2", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetConstrainedComponents_Parms, BoneName2), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents_Statics::NewProp_Component2_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents_Statics::NewProp_Component2 = { "Component2", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetConstrainedComponents_Parms, Component2), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents_Statics::NewProp_Component2_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents_Statics::NewProp_Component2_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents_Statics::NewProp_BoneName1 = { "BoneName1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetConstrainedComponents_Parms, BoneName1), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents_Statics::NewProp_Component1_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents_Statics::NewProp_Component1 = { "Component1", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetConstrainedComponents_Parms, Component1), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents_Statics::NewProp_Component1_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents_Statics::NewProp_Component1_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents_Statics::NewProp_BoneName2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents_Statics::NewProp_Component2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents_Statics::NewProp_BoneName1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents_Statics::NewProp_Component1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "/** Directly specify component to connect. Will update frames based on current position. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Directly specify component to connect. Will update frames based on current position." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "SetConstrainedComponents", nullptr, nullptr, sizeof(PhysicsConstraintComponent_eventSetConstrainedComponents_Parms), Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceFrame_Statics
	{
		struct PhysicsConstraintComponent_eventSetConstraintReferenceFrame_Parms
		{
			TEnumAsByte<EConstraintFrame::Type> Frame;
			FTransform RefFrame;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RefFrame;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Frame;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceFrame_Statics::NewProp_RefFrame_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceFrame_Statics::NewProp_RefFrame = { "RefFrame", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetConstraintReferenceFrame_Parms, RefFrame), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceFrame_Statics::NewProp_RefFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceFrame_Statics::NewProp_RefFrame_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceFrame_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetConstraintReferenceFrame_Parms, Frame), Z_Construct_UEnum_Engine_EConstraintFrame, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceFrame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceFrame_Statics::NewProp_RefFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceFrame_Statics::NewProp_Frame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "// Pass in reference frame in. If the constraint is currently active, this will set its active local pose. Otherwise the change will take affect in InitConstraint. \n" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Pass in reference frame in. If the constraint is currently active, this will set its active local pose. Otherwise the change will take affect in InitConstraint." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "SetConstraintReferenceFrame", nullptr, nullptr, sizeof(PhysicsConstraintComponent_eventSetConstraintReferenceFrame_Parms), Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation_Statics
	{
		struct PhysicsConstraintComponent_eventSetConstraintReferenceOrientation_Parms
		{
			TEnumAsByte<EConstraintFrame::Type> Frame;
			FVector PriAxis;
			FVector SecAxis;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SecAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PriAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PriAxis;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Frame;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation_Statics::NewProp_SecAxis_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation_Statics::NewProp_SecAxis = { "SecAxis", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetConstraintReferenceOrientation_Parms, SecAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation_Statics::NewProp_SecAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation_Statics::NewProp_SecAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation_Statics::NewProp_PriAxis_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation_Statics::NewProp_PriAxis = { "PriAxis", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetConstraintReferenceOrientation_Parms, PriAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation_Statics::NewProp_PriAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation_Statics::NewProp_PriAxis_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetConstraintReferenceOrientation_Parms, Frame), Z_Construct_UEnum_Engine_EConstraintFrame, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation_Statics::NewProp_SecAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation_Statics::NewProp_PriAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation_Statics::NewProp_Frame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "// Pass in reference orientation in (maintains reference position). If the constraint is currently active, this will set its active local pose. Otherwise the change will take affect in InitConstraint.\n" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Pass in reference orientation in (maintains reference position). If the constraint is currently active, this will set its active local pose. Otherwise the change will take affect in InitConstraint." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "SetConstraintReferenceOrientation", nullptr, nullptr, sizeof(PhysicsConstraintComponent_eventSetConstraintReferenceOrientation_Parms), Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferencePosition_Statics
	{
		struct PhysicsConstraintComponent_eventSetConstraintReferencePosition_Parms
		{
			TEnumAsByte<EConstraintFrame::Type> Frame;
			FVector RefPosition;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RefPosition;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Frame;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferencePosition_Statics::NewProp_RefPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferencePosition_Statics::NewProp_RefPosition = { "RefPosition", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetConstraintReferencePosition_Parms, RefPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferencePosition_Statics::NewProp_RefPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferencePosition_Statics::NewProp_RefPosition_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferencePosition_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetConstraintReferencePosition_Parms, Frame), Z_Construct_UEnum_Engine_EConstraintFrame, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferencePosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferencePosition_Statics::NewProp_RefPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferencePosition_Statics::NewProp_Frame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferencePosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "// Pass in reference position in (maintains reference orientation). If the constraint is currently active, this will set its active local pose. Otherwise the change will take affect in InitConstraint.\n" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Pass in reference position in (maintains reference orientation). If the constraint is currently active, this will set its active local pose. Otherwise the change will take affect in InitConstraint." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferencePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "SetConstraintReferencePosition", nullptr, nullptr, sizeof(PhysicsConstraintComponent_eventSetConstraintReferencePosition_Parms), Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferencePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferencePosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferencePosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferencePosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferencePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferencePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetDisableCollision_Statics
	{
		struct PhysicsConstraintComponent_eventSetDisableCollision_Parms
		{
			bool bDisableCollision;
		};
		static void NewProp_bDisableCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableCollision;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPhysicsConstraintComponent_SetDisableCollision_Statics::NewProp_bDisableCollision_SetBit(void* Obj)
	{
		((PhysicsConstraintComponent_eventSetDisableCollision_Parms*)Obj)->bDisableCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetDisableCollision_Statics::NewProp_bDisableCollision = { "bDisableCollision", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PhysicsConstraintComponent_eventSetDisableCollision_Parms), &Z_Construct_UFunction_UPhysicsConstraintComponent_SetDisableCollision_Statics::NewProp_bDisableCollision_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetDisableCollision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetDisableCollision_Statics::NewProp_bDisableCollision,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetDisableCollision_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "// If true, the collision between the two rigid bodies of the constraint will be disabled.\n" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "If true, the collision between the two rigid bodies of the constraint will be disabled." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetDisableCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "SetDisableCollision", nullptr, nullptr, sizeof(PhysicsConstraintComponent_eventSetDisableCollision_Parms), Z_Construct_UFunction_UPhysicsConstraintComponent_SetDisableCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetDisableCollision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetDisableCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetDisableCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetDisableCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetDisableCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearBreakable_Statics
	{
		struct PhysicsConstraintComponent_eventSetLinearBreakable_Parms
		{
			bool bLinearBreakable;
			float LinearBreakThreshold;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LinearBreakThreshold;
		static void NewProp_bLinearBreakable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLinearBreakable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearBreakable_Statics::NewProp_LinearBreakThreshold = { "LinearBreakThreshold", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetLinearBreakable_Parms, LinearBreakThreshold), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearBreakable_Statics::NewProp_bLinearBreakable_SetBit(void* Obj)
	{
		((PhysicsConstraintComponent_eventSetLinearBreakable_Parms*)Obj)->bLinearBreakable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearBreakable_Statics::NewProp_bLinearBreakable = { "bLinearBreakable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PhysicsConstraintComponent_eventSetLinearBreakable_Parms), &Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearBreakable_Statics::NewProp_bLinearBreakable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearBreakable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearBreakable_Statics::NewProp_LinearBreakThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearBreakable_Statics::NewProp_bLinearBreakable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearBreakable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "/** Sets the Linear Breakable properties\n\x09*\x09@param bLinearBreakable\x09\x09Whether it is possible to break the joint with linear force\n\x09*\x09@param LinearBreakThreshold\x09""Force needed to break the joint\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Sets the Linear Breakable properties\n     @param bLinearBreakable         Whether it is possible to break the joint with linear force\n     @param LinearBreakThreshold     Force needed to break the joint" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearBreakable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "SetLinearBreakable", nullptr, nullptr, sizeof(PhysicsConstraintComponent_eventSetLinearBreakable_Parms), Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearBreakable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearBreakable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearBreakable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearBreakable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearBreakable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearBreakable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearDriveParams_Statics
	{
		struct PhysicsConstraintComponent_eventSetLinearDriveParams_Parms
		{
			float PositionStrength;
			float VelocityStrength;
			float InForceLimit;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InForceLimit;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VelocityStrength;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PositionStrength;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearDriveParams_Statics::NewProp_InForceLimit = { "InForceLimit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetLinearDriveParams_Parms, InForceLimit), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearDriveParams_Statics::NewProp_VelocityStrength = { "VelocityStrength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetLinearDriveParams_Parms, VelocityStrength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearDriveParams_Statics::NewProp_PositionStrength = { "PositionStrength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetLinearDriveParams_Parms, PositionStrength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearDriveParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearDriveParams_Statics::NewProp_InForceLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearDriveParams_Statics::NewProp_VelocityStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearDriveParams_Statics::NewProp_PositionStrength,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearDriveParams_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "/** Sets the drive params for the linear drive. \n\x09 *\x09@param PositionStrength\x09\x09Positional strength for the drive (stiffness)\n\x09 *\x09@param VelocityStrength \x09Velocity strength of the drive (damping)\n\x09 *\x09@param InForceLimit\x09Max force applied by the drive\n\x09 */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Sets the drive params for the linear drive.\n    @param PositionStrength         Positional strength for the drive (stiffness)\n    @param VelocityStrength         Velocity strength of the drive (damping)\n    @param InForceLimit     Max force applied by the drive" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearDriveParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "SetLinearDriveParams", nullptr, nullptr, sizeof(PhysicsConstraintComponent_eventSetLinearDriveParams_Parms), Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearDriveParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearDriveParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearDriveParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearDriveParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearDriveParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearDriveParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive_Statics
	{
		struct PhysicsConstraintComponent_eventSetLinearPositionDrive_Parms
		{
			bool bEnableDriveX;
			bool bEnableDriveY;
			bool bEnableDriveZ;
		};
		static void NewProp_bEnableDriveZ_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableDriveZ;
		static void NewProp_bEnableDriveY_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableDriveY;
		static void NewProp_bEnableDriveX_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableDriveX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive_Statics::NewProp_bEnableDriveZ_SetBit(void* Obj)
	{
		((PhysicsConstraintComponent_eventSetLinearPositionDrive_Parms*)Obj)->bEnableDriveZ = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive_Statics::NewProp_bEnableDriveZ = { "bEnableDriveZ", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PhysicsConstraintComponent_eventSetLinearPositionDrive_Parms), &Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive_Statics::NewProp_bEnableDriveZ_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive_Statics::NewProp_bEnableDriveY_SetBit(void* Obj)
	{
		((PhysicsConstraintComponent_eventSetLinearPositionDrive_Parms*)Obj)->bEnableDriveY = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive_Statics::NewProp_bEnableDriveY = { "bEnableDriveY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PhysicsConstraintComponent_eventSetLinearPositionDrive_Parms), &Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive_Statics::NewProp_bEnableDriveY_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive_Statics::NewProp_bEnableDriveX_SetBit(void* Obj)
	{
		((PhysicsConstraintComponent_eventSetLinearPositionDrive_Parms*)Obj)->bEnableDriveX = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive_Statics::NewProp_bEnableDriveX = { "bEnableDriveX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PhysicsConstraintComponent_eventSetLinearPositionDrive_Parms), &Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive_Statics::NewProp_bEnableDriveX_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive_Statics::NewProp_bEnableDriveZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive_Statics::NewProp_bEnableDriveY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive_Statics::NewProp_bEnableDriveX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "/** Enables/Disables linear position drive \n\x09 *\x09\n\x09 *\x09@param bEnableDriveX\x09Indicates whether the drive for the X-Axis should be enabled\n\x09 *\x09@param bEnableDriveY\x09Indicates whether the drive for the Y-Axis should be enabled\n\x09 *\x09@param bEnableDriveZ\x09Indicates whether the drive for the Z-Axis should be enabled\n\x09 */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Enables/Disables linear position drive\n\n    @param bEnableDriveX    Indicates whether the drive for the X-Axis should be enabled\n    @param bEnableDriveY    Indicates whether the drive for the Y-Axis should be enabled\n    @param bEnableDriveZ    Indicates whether the drive for the Z-Axis should be enabled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "SetLinearPositionDrive", nullptr, nullptr, sizeof(PhysicsConstraintComponent_eventSetLinearPositionDrive_Parms), Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionTarget_Statics
	{
		struct PhysicsConstraintComponent_eventSetLinearPositionTarget_Parms
		{
			FVector InPosTarget;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPosTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPosTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionTarget_Statics::NewProp_InPosTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionTarget_Statics::NewProp_InPosTarget = { "InPosTarget", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetLinearPositionTarget_Parms, InPosTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionTarget_Statics::NewProp_InPosTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionTarget_Statics::NewProp_InPosTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionTarget_Statics::NewProp_InPosTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "/** Sets the target position for the linear drive. \n\x09 *\x09@param InPosTarget\x09\x09Target position\n\x09 */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Sets the target position for the linear drive.\n    @param InPosTarget              Target position" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "SetLinearPositionTarget", nullptr, nullptr, sizeof(PhysicsConstraintComponent_eventSetLinearPositionTarget_Parms), Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive_Statics
	{
		struct PhysicsConstraintComponent_eventSetLinearVelocityDrive_Parms
		{
			bool bEnableDriveX;
			bool bEnableDriveY;
			bool bEnableDriveZ;
		};
		static void NewProp_bEnableDriveZ_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableDriveZ;
		static void NewProp_bEnableDriveY_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableDriveY;
		static void NewProp_bEnableDriveX_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableDriveX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive_Statics::NewProp_bEnableDriveZ_SetBit(void* Obj)
	{
		((PhysicsConstraintComponent_eventSetLinearVelocityDrive_Parms*)Obj)->bEnableDriveZ = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive_Statics::NewProp_bEnableDriveZ = { "bEnableDriveZ", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PhysicsConstraintComponent_eventSetLinearVelocityDrive_Parms), &Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive_Statics::NewProp_bEnableDriveZ_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive_Statics::NewProp_bEnableDriveY_SetBit(void* Obj)
	{
		((PhysicsConstraintComponent_eventSetLinearVelocityDrive_Parms*)Obj)->bEnableDriveY = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive_Statics::NewProp_bEnableDriveY = { "bEnableDriveY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PhysicsConstraintComponent_eventSetLinearVelocityDrive_Parms), &Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive_Statics::NewProp_bEnableDriveY_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive_Statics::NewProp_bEnableDriveX_SetBit(void* Obj)
	{
		((PhysicsConstraintComponent_eventSetLinearVelocityDrive_Parms*)Obj)->bEnableDriveX = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive_Statics::NewProp_bEnableDriveX = { "bEnableDriveX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PhysicsConstraintComponent_eventSetLinearVelocityDrive_Parms), &Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive_Statics::NewProp_bEnableDriveX_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive_Statics::NewProp_bEnableDriveZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive_Statics::NewProp_bEnableDriveY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive_Statics::NewProp_bEnableDriveX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "/** Enables/Disables linear position drive \n\x09 *\x09\n\x09 *\x09@param bEnableDriveX\x09Indicates whether the drive for the X-Axis should be enabled\n\x09 *\x09@param bEnableDriveY\x09Indicates whether the drive for the Y-Axis should be enabled\n\x09 *\x09@param bEnableDriveZ\x09Indicates whether the drive for the Z-Axis should be enabled\n\x09 */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Enables/Disables linear position drive\n\n    @param bEnableDriveX    Indicates whether the drive for the X-Axis should be enabled\n    @param bEnableDriveY    Indicates whether the drive for the Y-Axis should be enabled\n    @param bEnableDriveZ    Indicates whether the drive for the Z-Axis should be enabled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "SetLinearVelocityDrive", nullptr, nullptr, sizeof(PhysicsConstraintComponent_eventSetLinearVelocityDrive_Parms), Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityTarget_Statics
	{
		struct PhysicsConstraintComponent_eventSetLinearVelocityTarget_Parms
		{
			FVector InVelTarget;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InVelTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InVelTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityTarget_Statics::NewProp_InVelTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityTarget_Statics::NewProp_InVelTarget = { "InVelTarget", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetLinearVelocityTarget_Parms, InVelTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityTarget_Statics::NewProp_InVelTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityTarget_Statics::NewProp_InVelTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityTarget_Statics::NewProp_InVelTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "/** Sets the target velocity for the linear drive. \n\x09 *\x09@param InVelTarget\x09\x09Target velocity\n\x09 */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Sets the target velocity for the linear drive.\n    @param InVelTarget              Target velocity" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "SetLinearVelocityTarget", nullptr, nullptr, sizeof(PhysicsConstraintComponent_eventSetLinearVelocityTarget_Parms), Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearXLimit_Statics
	{
		struct PhysicsConstraintComponent_eventSetLinearXLimit_Parms
		{
			TEnumAsByte<ELinearConstraintMotion> ConstraintType;
			float LimitSize;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LimitSize;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ConstraintType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearXLimit_Statics::NewProp_LimitSize = { "LimitSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetLinearXLimit_Parms, LimitSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearXLimit_Statics::NewProp_ConstraintType = { "ConstraintType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetLinearXLimit_Parms, ConstraintType), Z_Construct_UEnum_Engine_ELinearConstraintMotion, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearXLimit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearXLimit_Statics::NewProp_LimitSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearXLimit_Statics::NewProp_ConstraintType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearXLimit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "/** Sets the LinearX Motion Type\n\x09*\x09@param ConstraintType\x09New Constraint Type\n\x09*\x09@param LimitSize\x09\x09Size of limit\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Sets the LinearX Motion Type\n     @param ConstraintType   New Constraint Type\n     @param LimitSize                Size of limit" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearXLimit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "SetLinearXLimit", nullptr, nullptr, sizeof(PhysicsConstraintComponent_eventSetLinearXLimit_Parms), Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearXLimit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearXLimit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearXLimit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearXLimit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearXLimit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearXLimit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearYLimit_Statics
	{
		struct PhysicsConstraintComponent_eventSetLinearYLimit_Parms
		{
			TEnumAsByte<ELinearConstraintMotion> ConstraintType;
			float LimitSize;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LimitSize;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ConstraintType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearYLimit_Statics::NewProp_LimitSize = { "LimitSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetLinearYLimit_Parms, LimitSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearYLimit_Statics::NewProp_ConstraintType = { "ConstraintType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetLinearYLimit_Parms, ConstraintType), Z_Construct_UEnum_Engine_ELinearConstraintMotion, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearYLimit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearYLimit_Statics::NewProp_LimitSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearYLimit_Statics::NewProp_ConstraintType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearYLimit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "/** Sets the LinearY Motion Type\n\x09*\x09@param ConstraintType\x09New Constraint Type\n\x09*\x09@param LimitSize\x09\x09Size of limit\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Sets the LinearY Motion Type\n     @param ConstraintType   New Constraint Type\n     @param LimitSize                Size of limit" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearYLimit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "SetLinearYLimit", nullptr, nullptr, sizeof(PhysicsConstraintComponent_eventSetLinearYLimit_Parms), Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearYLimit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearYLimit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearYLimit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearYLimit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearYLimit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearYLimit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearZLimit_Statics
	{
		struct PhysicsConstraintComponent_eventSetLinearZLimit_Parms
		{
			TEnumAsByte<ELinearConstraintMotion> ConstraintType;
			float LimitSize;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LimitSize;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ConstraintType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearZLimit_Statics::NewProp_LimitSize = { "LimitSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetLinearZLimit_Parms, LimitSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearZLimit_Statics::NewProp_ConstraintType = { "ConstraintType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetLinearZLimit_Parms, ConstraintType), Z_Construct_UEnum_Engine_ELinearConstraintMotion, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearZLimit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearZLimit_Statics::NewProp_LimitSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearZLimit_Statics::NewProp_ConstraintType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearZLimit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "/** Sets the LinearZ Motion Type\n\x09*\x09@param ConstraintType\x09New Constraint Type\n\x09*\x09@param LimitSize\x09\x09Size of limit\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Sets the LinearZ Motion Type\n     @param ConstraintType   New Constraint Type\n     @param LimitSize                Size of limit" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearZLimit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "SetLinearZLimit", nullptr, nullptr, sizeof(PhysicsConstraintComponent_eventSetLinearZLimit_Parms), Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearZLimit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearZLimit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearZLimit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearZLimit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearZLimit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearZLimit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveSLERP_Statics
	{
		struct PhysicsConstraintComponent_eventSetOrientationDriveSLERP_Parms
		{
			bool bEnableSLERP;
		};
		static void NewProp_bEnableSLERP_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableSLERP;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveSLERP_Statics::NewProp_bEnableSLERP_SetBit(void* Obj)
	{
		((PhysicsConstraintComponent_eventSetOrientationDriveSLERP_Parms*)Obj)->bEnableSLERP = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveSLERP_Statics::NewProp_bEnableSLERP = { "bEnableSLERP", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PhysicsConstraintComponent_eventSetOrientationDriveSLERP_Parms), &Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveSLERP_Statics::NewProp_bEnableSLERP_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveSLERP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveSLERP_Statics::NewProp_bEnableSLERP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveSLERP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "/** Enables/Disables the angular orientation slerp drive. Only relevant if the AngularDriveMode is set to SLERP\n\x09*\n\x09*\x09@param bEnableSLERP     \x09Indicates whether the SLERP drive should be enabled. Only relevant if the AngularDriveMode is set to SLERP\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Enables/Disables the angular orientation slerp drive. Only relevant if the AngularDriveMode is set to SLERP\n\n     @param bEnableSLERP             Indicates whether the SLERP drive should be enabled. Only relevant if the AngularDriveMode is set to SLERP" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveSLERP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "SetOrientationDriveSLERP", nullptr, nullptr, sizeof(PhysicsConstraintComponent_eventSetOrientationDriveSLERP_Parms), Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveSLERP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveSLERP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveSLERP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveSLERP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveSLERP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveSLERP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveTwistAndSwing_Statics
	{
		struct PhysicsConstraintComponent_eventSetOrientationDriveTwistAndSwing_Parms
		{
			bool bEnableTwistDrive;
			bool bEnableSwingDrive;
		};
		static void NewProp_bEnableSwingDrive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableSwingDrive;
		static void NewProp_bEnableTwistDrive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableTwistDrive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveTwistAndSwing_Statics::NewProp_bEnableSwingDrive_SetBit(void* Obj)
	{
		((PhysicsConstraintComponent_eventSetOrientationDriveTwistAndSwing_Parms*)Obj)->bEnableSwingDrive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveTwistAndSwing_Statics::NewProp_bEnableSwingDrive = { "bEnableSwingDrive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PhysicsConstraintComponent_eventSetOrientationDriveTwistAndSwing_Parms), &Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveTwistAndSwing_Statics::NewProp_bEnableSwingDrive_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveTwistAndSwing_Statics::NewProp_bEnableTwistDrive_SetBit(void* Obj)
	{
		((PhysicsConstraintComponent_eventSetOrientationDriveTwistAndSwing_Parms*)Obj)->bEnableTwistDrive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveTwistAndSwing_Statics::NewProp_bEnableTwistDrive = { "bEnableTwistDrive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PhysicsConstraintComponent_eventSetOrientationDriveTwistAndSwing_Parms), &Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveTwistAndSwing_Statics::NewProp_bEnableTwistDrive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveTwistAndSwing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveTwistAndSwing_Statics::NewProp_bEnableSwingDrive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveTwistAndSwing_Statics::NewProp_bEnableTwistDrive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveTwistAndSwing_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "/** Enables/Disables angular orientation drive. Only relevant if the AngularDriveMode is set to Twist and Swing\n\x09*\n\x09*\x09@param bEnableSwingDrive\x09Indicates whether the drive for the swing axis should be enabled. Only relevant if the AngularDriveMode is set to Twist and Swing\n\x09*\x09@param bEnableTwistDrive\x09Indicates whether the drive for the twist axis should be enabled. Only relevant if the AngularDriveMode is set to Twist and Swing\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Enables/Disables angular orientation drive. Only relevant if the AngularDriveMode is set to Twist and Swing\n\n     @param bEnableSwingDrive        Indicates whether the drive for the swing axis should be enabled. Only relevant if the AngularDriveMode is set to Twist and Swing\n     @param bEnableTwistDrive        Indicates whether the drive for the twist axis should be enabled. Only relevant if the AngularDriveMode is set to Twist and Swing" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveTwistAndSwing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "SetOrientationDriveTwistAndSwing", nullptr, nullptr, sizeof(PhysicsConstraintComponent_eventSetOrientationDriveTwistAndSwing_Parms), Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveTwistAndSwing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveTwistAndSwing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveTwistAndSwing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveTwistAndSwing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveTwistAndSwing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveTwistAndSwing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPhysicsConstraintComponent_NoRegister()
	{
		return UPhysicsConstraintComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPhysicsConstraintComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstraintInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConstraintInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnConstraintBroken_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConstraintBroken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstraintSetup_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConstraintSetup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentName2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ComponentName2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstraintActor2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConstraintActor2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentName1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ComponentName1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstraintActor1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConstraintActor1;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhysicsConstraintComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPhysicsConstraintComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_BreakConstraint, "BreakConstraint" }, // 3026009164
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraintForce, "GetConstraintForce" }, // 2092373584
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing1, "GetCurrentSwing1" }, // 3464347135
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing2, "GetCurrentSwing2" }, // 2441997123
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentTwist, "GetCurrentTwist" }, // 1683848940
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_IsBroken, "IsBroken" }, // 3604720272
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularBreakable, "SetAngularBreakable" }, // 737615139
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveMode, "SetAngularDriveMode" }, // 3229619790
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveParams, "SetAngularDriveParams" }, // 2341476889
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationDrive, "SetAngularOrientationDrive" }, // 4224923457
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationTarget, "SetAngularOrientationTarget" }, // 3619131457
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing1Limit, "SetAngularSwing1Limit" }, // 416648219
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing2Limit, "SetAngularSwing2Limit" }, // 2210041298
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularTwistLimit, "SetAngularTwistLimit" }, // 4090604022
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDrive, "SetAngularVelocityDrive" }, // 3277181796
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveSLERP, "SetAngularVelocityDriveSLERP" }, // 607152596
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveTwistAndSwing, "SetAngularVelocityDriveTwistAndSwing" }, // 2571468356
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityTarget, "SetAngularVelocityTarget" }, // 1244655668
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents, "SetConstrainedComponents" }, // 2565430462
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceFrame, "SetConstraintReferenceFrame" }, // 3435291795
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation, "SetConstraintReferenceOrientation" }, // 1402662590
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferencePosition, "SetConstraintReferencePosition" }, // 1424063614
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetDisableCollision, "SetDisableCollision" }, // 1570267727
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearBreakable, "SetLinearBreakable" }, // 1953527520
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearDriveParams, "SetLinearDriveParams" }, // 894798577
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive, "SetLinearPositionDrive" }, // 368763692
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionTarget, "SetLinearPositionTarget" }, // 1432424166
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive, "SetLinearVelocityDrive" }, // 979946200
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityTarget, "SetLinearVelocityTarget" }, // 515539057
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearXLimit, "SetLinearXLimit" }, // 3963171754
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearYLimit, "SetLinearYLimit" }, // 234344801
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearZLimit, "SetLinearZLimit" }, // 2550302429
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveSLERP, "SetOrientationDriveSLERP" }, // 878557451
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveTwistAndSwing, "SetOrientationDriveTwistAndSwing" }, // 523924903
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Physics" },
		{ "Comment", "/**\n *\x09This is effectively a joint that allows you to connect 2 rigid bodies together. You can create different types of joints using the various parameters of this component.\n */" },
		{ "HideCategories", "Activation Components|Activation Physics Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ShowCategories", "Physics|Components|PhysicsConstraint" },
		{ "ToolTip", "This is effectively a joint that allows you to connect 2 rigid bodies together. You can create different types of joints using the various parameters of this component." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ConstraintInstance_MetaData[] = {
		{ "Category", "ConstraintComponent" },
		{ "Comment", "/** All constraint settings */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "All constraint settings" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ConstraintInstance = { "ConstraintInstance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsConstraintComponent, ConstraintInstance), Z_Construct_UScriptStruct_FConstraintInstance, METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ConstraintInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ConstraintInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_OnConstraintBroken_MetaData[] = {
		{ "Comment", "/** Notification when constraint is broken. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Notification when constraint is broken." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_OnConstraintBroken = { "OnConstraintBroken", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsConstraintComponent, OnConstraintBroken), Z_Construct_UDelegateFunction_Engine_ConstraintBrokenSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_OnConstraintBroken_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_OnConstraintBroken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ConstraintSetup_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ConstraintSetup = { "ConstraintSetup", nullptr, (EPropertyFlags)0x0012000020080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsConstraintComponent, ConstraintSetup_DEPRECATED), Z_Construct_UClass_UPhysicsConstraintTemplate_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ConstraintSetup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ConstraintSetup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ComponentName2_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "/** \n\x09 *\x09Name of second component property to constrain. If Actor2 is NULL, will look within Owner. \n\x09 *\x09If this is NULL, will use RootComponent of Actor2\n\x09 */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Name of second component property to constrain. If Actor2 is NULL, will look within Owner.\nIf this is NULL, will use RootComponent of Actor2" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ComponentName2 = { "ComponentName2", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsConstraintComponent, ComponentName2), Z_Construct_UScriptStruct_FConstrainComponentPropName, METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ComponentName2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ComponentName2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ConstraintActor2_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "/** Pointer to second Actor to constrain. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Pointer to second Actor to constrain." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ConstraintActor2 = { "ConstraintActor2", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsConstraintComponent, ConstraintActor2), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ConstraintActor2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ConstraintActor2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ComponentName1_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "/** \n\x09 *\x09Name of first component property to constrain. If Actor1 is NULL, will look within Owner.\n\x09 *\x09If this is NULL, will use RootComponent of Actor1\n\x09 */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Name of first component property to constrain. If Actor1 is NULL, will look within Owner.\nIf this is NULL, will use RootComponent of Actor1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ComponentName1 = { "ComponentName1", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsConstraintComponent, ComponentName1), Z_Construct_UScriptStruct_FConstrainComponentPropName, METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ComponentName1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ComponentName1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ConstraintActor1_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "/** Pointer to first Actor to constrain.  */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Pointer to first Actor to constrain." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ConstraintActor1 = { "ConstraintActor1", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsConstraintComponent, ConstraintActor1), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ConstraintActor1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ConstraintActor1_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhysicsConstraintComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ConstraintInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_OnConstraintBroken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ConstraintSetup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ComponentName2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ConstraintActor2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ComponentName1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ConstraintActor1,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhysicsConstraintComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicsConstraintComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPhysicsConstraintComponent_Statics::ClassParams = {
		&UPhysicsConstraintComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPhysicsConstraintComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhysicsConstraintComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPhysicsConstraintComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPhysicsConstraintComponent, 4152420742);
	template<> ENGINE_API UClass* StaticClass<UPhysicsConstraintComponent>()
	{
		return UPhysicsConstraintComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPhysicsConstraintComponent(Z_Construct_UClass_UPhysicsConstraintComponent, &UPhysicsConstraintComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UPhysicsConstraintComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsConstraintComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
