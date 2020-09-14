// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FieldSystemEngine/Public/Field/FieldSystemComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFieldSystemComponent() {}
// Cross Module References
	FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_UFieldSystemComponent_NoRegister();
	FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_UFieldSystemComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_FieldSystemEngine();
	FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_UFieldNodeBase_NoRegister();
	FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_UFieldSystemMetaData_NoRegister();
	FIELDSYSTEMCORE_API UEnum* Z_Construct_UEnum_FieldSystemCore_EFieldPhysicsType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_AChaosSolverActor_NoRegister();
	FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_UFieldSystem_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UFieldSystemComponent::execAddFieldCommand)
	{
		P_GET_UBOOL(Z_Param_Enabled);
		P_GET_PROPERTY(FByteProperty,Z_Param_Target);
		P_GET_OBJECT(UFieldSystemMetaData,Z_Param_MetaData);
		P_GET_OBJECT(UFieldNodeBase,Z_Param_Field);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddFieldCommand(Z_Param_Enabled,EFieldPhysicsType(Z_Param_Target),Z_Param_MetaData,Z_Param_Field);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFieldSystemComponent::execResetFieldSystem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetFieldSystem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFieldSystemComponent::execApplyPhysicsField)
	{
		P_GET_UBOOL(Z_Param_Enabled);
		P_GET_PROPERTY(FByteProperty,Z_Param_Target);
		P_GET_OBJECT(UFieldSystemMetaData,Z_Param_MetaData);
		P_GET_OBJECT(UFieldNodeBase,Z_Param_Field);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyPhysicsField(Z_Param_Enabled,EFieldPhysicsType(Z_Param_Target),Z_Param_MetaData,Z_Param_Field);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFieldSystemComponent::execApplyStrainField)
	{
		P_GET_UBOOL(Z_Param_Enabled);
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Magnitude);
		P_GET_PROPERTY(FIntProperty,Z_Param_Iterations);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyStrainField(Z_Param_Enabled,Z_Param_Position,Z_Param_Radius,Z_Param_Magnitude,Z_Param_Iterations);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFieldSystemComponent::execApplyUniformVectorFalloffForce)
	{
		P_GET_UBOOL(Z_Param_Enabled);
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_GET_STRUCT(FVector,Z_Param_Direction);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Magnitude);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyUniformVectorFalloffForce(Z_Param_Enabled,Z_Param_Position,Z_Param_Direction,Z_Param_Radius,Z_Param_Magnitude);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFieldSystemComponent::execApplyRadialVectorFalloffForce)
	{
		P_GET_UBOOL(Z_Param_Enabled);
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Magnitude);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyRadialVectorFalloffForce(Z_Param_Enabled,Z_Param_Position,Z_Param_Radius,Z_Param_Magnitude);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFieldSystemComponent::execApplyRadialForce)
	{
		P_GET_UBOOL(Z_Param_Enabled);
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Magnitude);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyRadialForce(Z_Param_Enabled,Z_Param_Position,Z_Param_Magnitude);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFieldSystemComponent::execApplyStayDynamicField)
	{
		P_GET_UBOOL(Z_Param_Enabled);
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyStayDynamicField(Z_Param_Enabled,Z_Param_Position,Z_Param_Radius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFieldSystemComponent::execApplyLinearForce)
	{
		P_GET_UBOOL(Z_Param_Enabled);
		P_GET_STRUCT(FVector,Z_Param_Direction);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Magnitude);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyLinearForce(Z_Param_Enabled,Z_Param_Direction,Z_Param_Magnitude);
		P_NATIVE_END;
	}
	void UFieldSystemComponent::StaticRegisterNativesUFieldSystemComponent()
	{
		UClass* Class = UFieldSystemComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddFieldCommand", &UFieldSystemComponent::execAddFieldCommand },
			{ "ApplyLinearForce", &UFieldSystemComponent::execApplyLinearForce },
			{ "ApplyPhysicsField", &UFieldSystemComponent::execApplyPhysicsField },
			{ "ApplyRadialForce", &UFieldSystemComponent::execApplyRadialForce },
			{ "ApplyRadialVectorFalloffForce", &UFieldSystemComponent::execApplyRadialVectorFalloffForce },
			{ "ApplyStayDynamicField", &UFieldSystemComponent::execApplyStayDynamicField },
			{ "ApplyStrainField", &UFieldSystemComponent::execApplyStrainField },
			{ "ApplyUniformVectorFalloffForce", &UFieldSystemComponent::execApplyUniformVectorFalloffForce },
			{ "ResetFieldSystem", &UFieldSystemComponent::execResetFieldSystem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFieldSystemComponent_AddFieldCommand_Statics
	{
		struct FieldSystemComponent_eventAddFieldCommand_Parms
		{
			bool Enabled;
			TEnumAsByte<EFieldPhysicsType> Target;
			UFieldSystemMetaData* MetaData;
			UFieldNodeBase* Field;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Field_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Field;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetaData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MetaData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Target;
		static void NewProp_Enabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFieldSystemComponent_AddFieldCommand_Statics::NewProp_Field_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFieldSystemComponent_AddFieldCommand_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FieldSystemComponent_eventAddFieldCommand_Parms, Field), Z_Construct_UClass_UFieldNodeBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFieldSystemComponent_AddFieldCommand_Statics::NewProp_Field_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldSystemComponent_AddFieldCommand_Statics::NewProp_Field_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFieldSystemComponent_AddFieldCommand_Statics::NewProp_MetaData_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFieldSystemComponent_AddFieldCommand_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FieldSystemComponent_eventAddFieldCommand_Parms, MetaData), Z_Construct_UClass_UFieldSystemMetaData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFieldSystemComponent_AddFieldCommand_Statics::NewProp_MetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldSystemComponent_AddFieldCommand_Statics::NewProp_MetaData_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFieldSystemComponent_AddFieldCommand_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FieldSystemComponent_eventAddFieldCommand_Parms, Target), Z_Construct_UEnum_FieldSystemCore_EFieldPhysicsType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFieldSystemComponent_AddFieldCommand_Statics::NewProp_Enabled_SetBit(void* Obj)
	{
		((FieldSystemComponent_eventAddFieldCommand_Parms*)Obj)->Enabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFieldSystemComponent_AddFieldCommand_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FieldSystemComponent_eventAddFieldCommand_Parms), &Z_Construct_UFunction_UFieldSystemComponent_AddFieldCommand_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFieldSystemComponent_AddFieldCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_AddFieldCommand_Statics::NewProp_Field,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_AddFieldCommand_Statics::NewProp_MetaData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_AddFieldCommand_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_AddFieldCommand_Statics::NewProp_Enabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFieldSystemComponent_AddFieldCommand_Statics::Function_MetaDataParams[] = {
		{ "Category", "Field Construction" },
		{ "Comment", "/**\n\x09*  ApplyPhysicsField\n\x09*/" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemComponent.h" },
		{ "ToolTip", "ApplyPhysicsField" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFieldSystemComponent_AddFieldCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFieldSystemComponent, nullptr, "AddFieldCommand", nullptr, nullptr, sizeof(FieldSystemComponent_eventAddFieldCommand_Parms), Z_Construct_UFunction_UFieldSystemComponent_AddFieldCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldSystemComponent_AddFieldCommand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFieldSystemComponent_AddFieldCommand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldSystemComponent_AddFieldCommand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFieldSystemComponent_AddFieldCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFieldSystemComponent_AddFieldCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFieldSystemComponent_ApplyLinearForce_Statics
	{
		struct FieldSystemComponent_eventApplyLinearForce_Parms
		{
			bool Enabled;
			FVector Direction;
			float Magnitude;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Direction;
		static void NewProp_Enabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyLinearForce_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FieldSystemComponent_eventApplyLinearForce_Parms, Magnitude), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyLinearForce_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FieldSystemComponent_eventApplyLinearForce_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFieldSystemComponent_ApplyLinearForce_Statics::NewProp_Enabled_SetBit(void* Obj)
	{
		((FieldSystemComponent_eventApplyLinearForce_Parms*)Obj)->Enabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyLinearForce_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FieldSystemComponent_eventApplyLinearForce_Parms), &Z_Construct_UFunction_UFieldSystemComponent_ApplyLinearForce_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFieldSystemComponent_ApplyLinearForce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyLinearForce_Statics::NewProp_Magnitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyLinearForce_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyLinearForce_Statics::NewProp_Enabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFieldSystemComponent_ApplyLinearForce_Statics::Function_MetaDataParams[] = {
		{ "Category", "Field" },
		{ "Comment", "/**\n\x09*  ApplyLinearForce\n\x09*    This function will dispatch a command to the physics thread to apply\n\x09*    a uniform linear force on each particle within the simulation.\n\x09*\n\x09*    @param Enabled : Is this force enabled for evaluation. \n\x09*    @param Direction : The direction of the linear force\n\x09*    @param Magnitude : The size of the linear force.\n\x09*\n\x09*/" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemComponent.h" },
		{ "ToolTip", "ApplyLinearForce\n  This function will dispatch a command to the physics thread to apply\n  a uniform linear force on each particle within the simulation.\n\n  @param Enabled : Is this force enabled for evaluation.\n  @param Direction : The direction of the linear force\n  @param Magnitude : The size of the linear force." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFieldSystemComponent_ApplyLinearForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFieldSystemComponent, nullptr, "ApplyLinearForce", nullptr, nullptr, sizeof(FieldSystemComponent_eventApplyLinearForce_Parms), Z_Construct_UFunction_UFieldSystemComponent_ApplyLinearForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldSystemComponent_ApplyLinearForce_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFieldSystemComponent_ApplyLinearForce_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldSystemComponent_ApplyLinearForce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFieldSystemComponent_ApplyLinearForce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFieldSystemComponent_ApplyLinearForce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFieldSystemComponent_ApplyPhysicsField_Statics
	{
		struct FieldSystemComponent_eventApplyPhysicsField_Parms
		{
			bool Enabled;
			TEnumAsByte<EFieldPhysicsType> Target;
			UFieldSystemMetaData* MetaData;
			UFieldNodeBase* Field;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Field_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Field;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetaData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MetaData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Target;
		static void NewProp_Enabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFieldSystemComponent_ApplyPhysicsField_Statics::NewProp_Field_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyPhysicsField_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FieldSystemComponent_eventApplyPhysicsField_Parms, Field), Z_Construct_UClass_UFieldNodeBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFieldSystemComponent_ApplyPhysicsField_Statics::NewProp_Field_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldSystemComponent_ApplyPhysicsField_Statics::NewProp_Field_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFieldSystemComponent_ApplyPhysicsField_Statics::NewProp_MetaData_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyPhysicsField_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FieldSystemComponent_eventApplyPhysicsField_Parms, MetaData), Z_Construct_UClass_UFieldSystemMetaData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFieldSystemComponent_ApplyPhysicsField_Statics::NewProp_MetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldSystemComponent_ApplyPhysicsField_Statics::NewProp_MetaData_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyPhysicsField_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FieldSystemComponent_eventApplyPhysicsField_Parms, Target), Z_Construct_UEnum_FieldSystemCore_EFieldPhysicsType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFieldSystemComponent_ApplyPhysicsField_Statics::NewProp_Enabled_SetBit(void* Obj)
	{
		((FieldSystemComponent_eventApplyPhysicsField_Parms*)Obj)->Enabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyPhysicsField_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FieldSystemComponent_eventApplyPhysicsField_Parms), &Z_Construct_UFunction_UFieldSystemComponent_ApplyPhysicsField_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFieldSystemComponent_ApplyPhysicsField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyPhysicsField_Statics::NewProp_Field,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyPhysicsField_Statics::NewProp_MetaData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyPhysicsField_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyPhysicsField_Statics::NewProp_Enabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFieldSystemComponent_ApplyPhysicsField_Statics::Function_MetaDataParams[] = {
		{ "Category", "Field" },
		{ "Comment", "/**\n\x09*  ApplyPhysicsField\n\x09*    This function will dispatch a command to the physics thread to apply\n\x09*    a generic evaluation of a user defined field network. See documentation,\n\x09*    for examples of how to recreate variations of the above generic\n\x09*    fields using field networks\n\x09*\n\x09*    (https://wiki.it.epicgames.net/display/~Brice.Criswell/Fields)\n\x09*\n\x09*    @param Enabled : Is this force enabled for evaluation.\n\x09*    @param EFieldPhysicsType : Type of field supported by the solver.\n\x09*    @param UFieldSystemMetaData : Meta data used to assist in evaluation\n\x09*    @param UFieldNodeBase : Base evaluation node for the field network.\n\x09*\n\x09*/" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemComponent.h" },
		{ "ToolTip", "ApplyPhysicsField\n  This function will dispatch a command to the physics thread to apply\n  a generic evaluation of a user defined field network. See documentation,\n  for examples of how to recreate variations of the above generic\n  fields using field networks\n\n  (https://wiki.it.epicgames.net/display/~Brice.Criswell/Fields)\n\n  @param Enabled : Is this force enabled for evaluation.\n  @param EFieldPhysicsType : Type of field supported by the solver.\n  @param UFieldSystemMetaData : Meta data used to assist in evaluation\n  @param UFieldNodeBase : Base evaluation node for the field network." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFieldSystemComponent_ApplyPhysicsField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFieldSystemComponent, nullptr, "ApplyPhysicsField", nullptr, nullptr, sizeof(FieldSystemComponent_eventApplyPhysicsField_Parms), Z_Construct_UFunction_UFieldSystemComponent_ApplyPhysicsField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldSystemComponent_ApplyPhysicsField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFieldSystemComponent_ApplyPhysicsField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldSystemComponent_ApplyPhysicsField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFieldSystemComponent_ApplyPhysicsField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFieldSystemComponent_ApplyPhysicsField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialForce_Statics
	{
		struct FieldSystemComponent_eventApplyRadialForce_Parms
		{
			bool Enabled;
			FVector Position;
			float Magnitude;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static void NewProp_Enabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialForce_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FieldSystemComponent_eventApplyRadialForce_Parms, Magnitude), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialForce_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FieldSystemComponent_eventApplyRadialForce_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialForce_Statics::NewProp_Enabled_SetBit(void* Obj)
	{
		((FieldSystemComponent_eventApplyRadialForce_Parms*)Obj)->Enabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialForce_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FieldSystemComponent_eventApplyRadialForce_Parms), &Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialForce_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialForce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialForce_Statics::NewProp_Magnitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialForce_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialForce_Statics::NewProp_Enabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialForce_Statics::Function_MetaDataParams[] = {
		{ "Category", "Field" },
		{ "Comment", "/**\n\x09*  ApplyRadialForce\n\x09*    This function will dispatch a command to the physics thread to apply\n\x09*    a linear force that points away from a position.\n\x09*\n\x09*    @param Enabled : Is this force enabled for evaluation.\n\x09*    @param Position : The origin point of the force\n\x09*    @param Magnitude : The size of the linear force.\n\x09*\n\x09*/" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemComponent.h" },
		{ "ToolTip", "ApplyRadialForce\n  This function will dispatch a command to the physics thread to apply\n  a linear force that points away from a position.\n\n  @param Enabled : Is this force enabled for evaluation.\n  @param Position : The origin point of the force\n  @param Magnitude : The size of the linear force." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFieldSystemComponent, nullptr, "ApplyRadialForce", nullptr, nullptr, sizeof(FieldSystemComponent_eventApplyRadialForce_Parms), Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialForce_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialForce_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialForce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialForce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialForce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialVectorFalloffForce_Statics
	{
		struct FieldSystemComponent_eventApplyRadialVectorFalloffForce_Parms
		{
			bool Enabled;
			FVector Position;
			float Radius;
			float Magnitude;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static void NewProp_Enabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialVectorFalloffForce_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FieldSystemComponent_eventApplyRadialVectorFalloffForce_Parms, Magnitude), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialVectorFalloffForce_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FieldSystemComponent_eventApplyRadialVectorFalloffForce_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialVectorFalloffForce_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FieldSystemComponent_eventApplyRadialVectorFalloffForce_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialVectorFalloffForce_Statics::NewProp_Enabled_SetBit(void* Obj)
	{
		((FieldSystemComponent_eventApplyRadialVectorFalloffForce_Parms*)Obj)->Enabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialVectorFalloffForce_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FieldSystemComponent_eventApplyRadialVectorFalloffForce_Parms), &Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialVectorFalloffForce_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialVectorFalloffForce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialVectorFalloffForce_Statics::NewProp_Magnitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialVectorFalloffForce_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialVectorFalloffForce_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialVectorFalloffForce_Statics::NewProp_Enabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialVectorFalloffForce_Statics::Function_MetaDataParams[] = {
		{ "Category", "Field" },
		{ "Comment", "/**\n\x09*  ApplyRadialVectorFalloffForce\n\x09*    This function will dispatch a command to the physics thread to apply\n\x09*    a linear force from a position in space. The force vector is weaker as\n\x09*    it moves away from the center. \n\x09*\n\x09*    @param Enabled : Is this force enabled for evaluation.\n\x09*    @param Position : The origin point of the force\n\x09*    @param Radius : Radial influence from the position, positions further away are weaker.\n\x09*    @param Magnitude : The size of the linear force.\n\x09*\n\x09*/" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemComponent.h" },
		{ "ToolTip", "ApplyRadialVectorFalloffForce\n  This function will dispatch a command to the physics thread to apply\n  a linear force from a position in space. The force vector is weaker as\n  it moves away from the center.\n\n  @param Enabled : Is this force enabled for evaluation.\n  @param Position : The origin point of the force\n  @param Radius : Radial influence from the position, positions further away are weaker.\n  @param Magnitude : The size of the linear force." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialVectorFalloffForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFieldSystemComponent, nullptr, "ApplyRadialVectorFalloffForce", nullptr, nullptr, sizeof(FieldSystemComponent_eventApplyRadialVectorFalloffForce_Parms), Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialVectorFalloffForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialVectorFalloffForce_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialVectorFalloffForce_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialVectorFalloffForce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialVectorFalloffForce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialVectorFalloffForce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFieldSystemComponent_ApplyStayDynamicField_Statics
	{
		struct FieldSystemComponent_eventApplyStayDynamicField_Parms
		{
			bool Enabled;
			FVector Position;
			float Radius;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static void NewProp_Enabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyStayDynamicField_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FieldSystemComponent_eventApplyStayDynamicField_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyStayDynamicField_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FieldSystemComponent_eventApplyStayDynamicField_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFieldSystemComponent_ApplyStayDynamicField_Statics::NewProp_Enabled_SetBit(void* Obj)
	{
		((FieldSystemComponent_eventApplyStayDynamicField_Parms*)Obj)->Enabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyStayDynamicField_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FieldSystemComponent_eventApplyStayDynamicField_Parms), &Z_Construct_UFunction_UFieldSystemComponent_ApplyStayDynamicField_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFieldSystemComponent_ApplyStayDynamicField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyStayDynamicField_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyStayDynamicField_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyStayDynamicField_Statics::NewProp_Enabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFieldSystemComponent_ApplyStayDynamicField_Statics::Function_MetaDataParams[] = {
		{ "Category", "Field" },
		{ "Comment", "/**\n\x09*  ApplyStayDynamicField\n\x09*    This function will dispatch a command to the physics thread to apply\n\x09*    a kinematic to dynamic state change for the particles within the field.\n\x09*\n\x09*    @param Enabled : Is this force enabled for evaluation.\n\x09*    @param Position : The location of the command\n\x09*    @param Radius : Radial influence from the position\n\x09*\n\x09*/" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemComponent.h" },
		{ "ToolTip", "ApplyStayDynamicField\n  This function will dispatch a command to the physics thread to apply\n  a kinematic to dynamic state change for the particles within the field.\n\n  @param Enabled : Is this force enabled for evaluation.\n  @param Position : The location of the command\n  @param Radius : Radial influence from the position" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFieldSystemComponent_ApplyStayDynamicField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFieldSystemComponent, nullptr, "ApplyStayDynamicField", nullptr, nullptr, sizeof(FieldSystemComponent_eventApplyStayDynamicField_Parms), Z_Construct_UFunction_UFieldSystemComponent_ApplyStayDynamicField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldSystemComponent_ApplyStayDynamicField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFieldSystemComponent_ApplyStayDynamicField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldSystemComponent_ApplyStayDynamicField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFieldSystemComponent_ApplyStayDynamicField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFieldSystemComponent_ApplyStayDynamicField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFieldSystemComponent_ApplyStrainField_Statics
	{
		struct FieldSystemComponent_eventApplyStrainField_Parms
		{
			bool Enabled;
			FVector Position;
			float Radius;
			float Magnitude;
			int32 Iterations;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Iterations;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static void NewProp_Enabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyStrainField_Statics::NewProp_Iterations = { "Iterations", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FieldSystemComponent_eventApplyStrainField_Parms, Iterations), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyStrainField_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FieldSystemComponent_eventApplyStrainField_Parms, Magnitude), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyStrainField_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FieldSystemComponent_eventApplyStrainField_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyStrainField_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FieldSystemComponent_eventApplyStrainField_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFieldSystemComponent_ApplyStrainField_Statics::NewProp_Enabled_SetBit(void* Obj)
	{
		((FieldSystemComponent_eventApplyStrainField_Parms*)Obj)->Enabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyStrainField_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FieldSystemComponent_eventApplyStrainField_Parms), &Z_Construct_UFunction_UFieldSystemComponent_ApplyStrainField_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFieldSystemComponent_ApplyStrainField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyStrainField_Statics::NewProp_Iterations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyStrainField_Statics::NewProp_Magnitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyStrainField_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyStrainField_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyStrainField_Statics::NewProp_Enabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFieldSystemComponent_ApplyStrainField_Statics::Function_MetaDataParams[] = {
		{ "Category", "Field" },
		{ "Comment", "/**\n\x09*  ApplyStrainField\n\x09*    This function will dispatch a command to the physics thread to apply\n\x09*    a strain field on a clustered set of geometry. This is used to trigger a \n\x09*    breaking even within the solver.\n\x09*\n\x09*    @param Enabled : Is this force enabled for evaluation.\n\x09*    @param Position : The origin point of the force\n\x09*    @param Radius : Radial influence from the position, positions further away are weaker.\n\x09*    @param Magnitude : The size of the linear force.\n\x09*    @param Iterations : Levels of evaluation into the cluster hierarchy.\n\x09*\n\x09*/" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemComponent.h" },
		{ "ToolTip", "ApplyStrainField\n  This function will dispatch a command to the physics thread to apply\n  a strain field on a clustered set of geometry. This is used to trigger a\n  breaking even within the solver.\n\n  @param Enabled : Is this force enabled for evaluation.\n  @param Position : The origin point of the force\n  @param Radius : Radial influence from the position, positions further away are weaker.\n  @param Magnitude : The size of the linear force.\n  @param Iterations : Levels of evaluation into the cluster hierarchy." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFieldSystemComponent_ApplyStrainField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFieldSystemComponent, nullptr, "ApplyStrainField", nullptr, nullptr, sizeof(FieldSystemComponent_eventApplyStrainField_Parms), Z_Construct_UFunction_UFieldSystemComponent_ApplyStrainField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldSystemComponent_ApplyStrainField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFieldSystemComponent_ApplyStrainField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldSystemComponent_ApplyStrainField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFieldSystemComponent_ApplyStrainField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFieldSystemComponent_ApplyStrainField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce_Statics
	{
		struct FieldSystemComponent_eventApplyUniformVectorFalloffForce_Parms
		{
			bool Enabled;
			FVector Position;
			FVector Direction;
			float Radius;
			float Magnitude;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static void NewProp_Enabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FieldSystemComponent_eventApplyUniformVectorFalloffForce_Parms, Magnitude), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FieldSystemComponent_eventApplyUniformVectorFalloffForce_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FieldSystemComponent_eventApplyUniformVectorFalloffForce_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FieldSystemComponent_eventApplyUniformVectorFalloffForce_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce_Statics::NewProp_Enabled_SetBit(void* Obj)
	{
		((FieldSystemComponent_eventApplyUniformVectorFalloffForce_Parms*)Obj)->Enabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FieldSystemComponent_eventApplyUniformVectorFalloffForce_Parms), &Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce_Statics::NewProp_Magnitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce_Statics::NewProp_Enabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce_Statics::Function_MetaDataParams[] = {
		{ "Category", "Field" },
		{ "Comment", "/**\n\x09*  ApplyUniformVectorFalloffForce\n\x09*    This function will dispatch a command to the physics thread to apply\n\x09*    a linear force in a uniform direction. The force vector is weaker as\n\x09*    it moves away from the center.\n\x09*\n\x09*    @param Enabled : Is this force enabled for evaluation.\n\x09*    @param Position : The origin point of the force\n\x09*    @param Direction : The direction of the linear force\n\x09*    @param Radius : Radial influence from the position, positions further away are weaker.\n\x09*    @param Magnitude : The size of the linear force.\n\x09*\n\x09*/" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemComponent.h" },
		{ "ToolTip", "ApplyUniformVectorFalloffForce\n  This function will dispatch a command to the physics thread to apply\n  a linear force in a uniform direction. The force vector is weaker as\n  it moves away from the center.\n\n  @param Enabled : Is this force enabled for evaluation.\n  @param Position : The origin point of the force\n  @param Direction : The direction of the linear force\n  @param Radius : Radial influence from the position, positions further away are weaker.\n  @param Magnitude : The size of the linear force." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFieldSystemComponent, nullptr, "ApplyUniformVectorFalloffForce", nullptr, nullptr, sizeof(FieldSystemComponent_eventApplyUniformVectorFalloffForce_Parms), Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFieldSystemComponent_ResetFieldSystem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFieldSystemComponent_ResetFieldSystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Field Construction" },
		{ "Comment", "/**\n\x09*  ClearFieldSystem\n\x09*/" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemComponent.h" },
		{ "ToolTip", "ClearFieldSystem" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFieldSystemComponent_ResetFieldSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFieldSystemComponent, nullptr, "ResetFieldSystem", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFieldSystemComponent_ResetFieldSystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldSystemComponent_ResetFieldSystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFieldSystemComponent_ResetFieldSystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFieldSystemComponent_ResetFieldSystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFieldSystemComponent_NoRegister()
	{
		return UFieldSystemComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFieldSystemComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SupportedSolvers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SupportedSolvers;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_SupportedSolvers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FieldSystem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFieldSystemComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FieldSystemEngine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFieldSystemComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFieldSystemComponent_AddFieldCommand, "AddFieldCommand" }, // 420511094
		{ &Z_Construct_UFunction_UFieldSystemComponent_ApplyLinearForce, "ApplyLinearForce" }, // 2321436483
		{ &Z_Construct_UFunction_UFieldSystemComponent_ApplyPhysicsField, "ApplyPhysicsField" }, // 1911088948
		{ &Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialForce, "ApplyRadialForce" }, // 439216392
		{ &Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialVectorFalloffForce, "ApplyRadialVectorFalloffForce" }, // 2949444586
		{ &Z_Construct_UFunction_UFieldSystemComponent_ApplyStayDynamicField, "ApplyStayDynamicField" }, // 3073625697
		{ &Z_Construct_UFunction_UFieldSystemComponent_ApplyStrainField, "ApplyStrainField" }, // 1935550365
		{ &Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce, "ApplyUniformVectorFalloffForce" }, // 3632926865
		{ &Z_Construct_UFunction_UFieldSystemComponent_ResetFieldSystem, "ResetFieldSystem" }, // 1139207381
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFieldSystemComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "Comment", "/**\n*\x09""FieldSystemComponent\n*/" },
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "Field/FieldSystemComponent.h" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemComponent.h" },
		{ "ToolTip", "FieldSystemComponent" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFieldSystemComponent_Statics::NewProp_SupportedSolvers_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/** List of solvers this field will affect. An empty list makes this field affect all solvers. */" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemComponent.h" },
		{ "ToolTip", "List of solvers this field will affect. An empty list makes this field affect all solvers." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFieldSystemComponent_Statics::NewProp_SupportedSolvers = { "SupportedSolvers", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFieldSystemComponent, SupportedSolvers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFieldSystemComponent_Statics::NewProp_SupportedSolvers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFieldSystemComponent_Statics::NewProp_SupportedSolvers_MetaData)) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFieldSystemComponent_Statics::NewProp_SupportedSolvers_Inner = { "SupportedSolvers", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AChaosSolverActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFieldSystemComponent_Statics::NewProp_FieldSystem_MetaData[] = {
		{ "Category", "Field" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFieldSystemComponent_Statics::NewProp_FieldSystem = { "FieldSystem", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFieldSystemComponent, FieldSystem), Z_Construct_UClass_UFieldSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFieldSystemComponent_Statics::NewProp_FieldSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFieldSystemComponent_Statics::NewProp_FieldSystem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFieldSystemComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFieldSystemComponent_Statics::NewProp_SupportedSolvers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFieldSystemComponent_Statics::NewProp_SupportedSolvers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFieldSystemComponent_Statics::NewProp_FieldSystem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFieldSystemComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFieldSystemComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFieldSystemComponent_Statics::ClassParams = {
		&UFieldSystemComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFieldSystemComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFieldSystemComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFieldSystemComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFieldSystemComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFieldSystemComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFieldSystemComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFieldSystemComponent, 4118088850);
	template<> FIELDSYSTEMENGINE_API UClass* StaticClass<UFieldSystemComponent>()
	{
		return UFieldSystemComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFieldSystemComponent(Z_Construct_UClass_UFieldSystemComponent, &UFieldSystemComponent::StaticClass, TEXT("/Script/FieldSystemEngine"), TEXT("UFieldSystemComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFieldSystemComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
