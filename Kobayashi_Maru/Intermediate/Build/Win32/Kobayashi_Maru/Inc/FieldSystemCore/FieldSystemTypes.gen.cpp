// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FieldSystemCore/Public/Field/FieldSystemTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFieldSystemTypes() {}
// Cross Module References
	FIELDSYSTEMCORE_API UEnum* Z_Construct_UEnum_FieldSystemCore_EFieldPhysicsDefaultFields();
	UPackage* Z_Construct_UPackage__Script_FieldSystemCore();
	FIELDSYSTEMCORE_API UEnum* Z_Construct_UEnum_FieldSystemCore_EFieldPhysicsType();
	FIELDSYSTEMCORE_API UEnum* Z_Construct_UEnum_FieldSystemCore_EFieldFalloffType();
	FIELDSYSTEMCORE_API UEnum* Z_Construct_UEnum_FieldSystemCore_EFieldResolutionType();
	FIELDSYSTEMCORE_API UEnum* Z_Construct_UEnum_FieldSystemCore_EFieldCullingOperationType();
	FIELDSYSTEMCORE_API UEnum* Z_Construct_UEnum_FieldSystemCore_EFieldOperationType();
	FIELDSYSTEMCORE_API UEnum* Z_Construct_UEnum_FieldSystemCore_ESetMaskConditionType();
// End Cross Module References
	static UEnum* EFieldPhysicsDefaultFields_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FieldSystemCore_EFieldPhysicsDefaultFields, Z_Construct_UPackage__Script_FieldSystemCore(), TEXT("EFieldPhysicsDefaultFields"));
		}
		return Singleton;
	}
	template<> FIELDSYSTEMCORE_API UEnum* StaticEnum<EFieldPhysicsDefaultFields>()
	{
		return EFieldPhysicsDefaultFields_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFieldPhysicsDefaultFields(EFieldPhysicsDefaultFields_StaticEnum, TEXT("/Script/FieldSystemCore"), TEXT("EFieldPhysicsDefaultFields"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FieldSystemCore_EFieldPhysicsDefaultFields_Hash() { return 1860152884U; }
	UEnum* Z_Construct_UEnum_FieldSystemCore_EFieldPhysicsDefaultFields()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FieldSystemCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFieldPhysicsDefaultFields"), 0, Get_Z_Construct_UEnum_FieldSystemCore_EFieldPhysicsDefaultFields_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Field_RadialIntMask", (int64)Field_RadialIntMask },
				{ "Field_RadialFalloff", (int64)Field_RadialFalloff },
				{ "Field_UniformVector", (int64)Field_UniformVector },
				{ "Field_RadialVector", (int64)Field_RadialVector },
				{ "Field_RadialVectorFalloff", (int64)Field_RadialVectorFalloff },
				{ "Field_EFieldPhysicsDefaultFields_Max", (int64)Field_EFieldPhysicsDefaultFields_Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n*\n*/" },
				{ "Field_EFieldPhysicsDefaultFields_Max.Comment", "/**\n*\n*///~~~\n//256th entry\n" },
				{ "Field_EFieldPhysicsDefaultFields_Max.Hidden", "" },
				{ "Field_EFieldPhysicsDefaultFields_Max.Name", "Field_EFieldPhysicsDefaultFields_Max" },
				{ "Field_EFieldPhysicsDefaultFields_Max.ToolTip", "//256th entry" },
				{ "Field_RadialFalloff.Comment", "/**\n*\n*/" },
				{ "Field_RadialFalloff.DisplayName", "RadialFalloff" },
				{ "Field_RadialFalloff.Name", "Field_RadialFalloff" },
				{ "Field_RadialIntMask.Comment", "/**\n*\n*/" },
				{ "Field_RadialIntMask.DisplayName", "RadialIntMask" },
				{ "Field_RadialIntMask.Name", "Field_RadialIntMask" },
				{ "Field_RadialVector.Comment", "/**\n*\n*/" },
				{ "Field_RadialVector.DisplayName", "RadialVector" },
				{ "Field_RadialVector.Name", "Field_RadialVector" },
				{ "Field_RadialVectorFalloff.Comment", "/**\n*\n*/" },
				{ "Field_RadialVectorFalloff.DisplayName", "RadialVectorFalloff" },
				{ "Field_RadialVectorFalloff.Name", "Field_RadialVectorFalloff" },
				{ "Field_UniformVector.Comment", "/**\n*\n*/" },
				{ "Field_UniformVector.DisplayName", "UniformVector" },
				{ "Field_UniformVector.Name", "Field_UniformVector" },
				{ "ModuleRelativePath", "Public/Field/FieldSystemTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FieldSystemCore,
				nullptr,
				"EFieldPhysicsDefaultFields",
				"EFieldPhysicsDefaultFields",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EFieldPhysicsType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FieldSystemCore_EFieldPhysicsType, Z_Construct_UPackage__Script_FieldSystemCore(), TEXT("EFieldPhysicsType"));
		}
		return Singleton;
	}
	template<> FIELDSYSTEMCORE_API UEnum* StaticEnum<EFieldPhysicsType>()
	{
		return EFieldPhysicsType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFieldPhysicsType(EFieldPhysicsType_StaticEnum, TEXT("/Script/FieldSystemCore"), TEXT("EFieldPhysicsType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FieldSystemCore_EFieldPhysicsType_Hash() { return 2038237087U; }
	UEnum* Z_Construct_UEnum_FieldSystemCore_EFieldPhysicsType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FieldSystemCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFieldPhysicsType"), 0, Get_Z_Construct_UEnum_FieldSystemCore_EFieldPhysicsType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Field_None", (int64)Field_None },
				{ "Field_DynamicState", (int64)Field_DynamicState },
				{ "Field_LinearForce", (int64)Field_LinearForce },
				{ "Field_ExternalClusterStrain", (int64)Field_ExternalClusterStrain },
				{ "Field_Kill", (int64)Field_Kill },
				{ "Field_LinearVelocity", (int64)Field_LinearVelocity },
				{ "Field_AngularVelociy", (int64)Field_AngularVelociy },
				{ "Field_AngularTorque", (int64)Field_AngularTorque },
				{ "Field_InternalClusterStrain", (int64)Field_InternalClusterStrain },
				{ "Field_DisableThreshold", (int64)Field_DisableThreshold },
				{ "Field_SleepingThreshold", (int64)Field_SleepingThreshold },
				{ "Field_PositionStatic", (int64)Field_PositionStatic },
				{ "Field_PositionAnimated", (int64)Field_PositionAnimated },
				{ "Field_PositionTarget", (int64)Field_PositionTarget },
				{ "Field_DynamicConstraint", (int64)Field_DynamicConstraint },
				{ "Field_CollisionGroup", (int64)Field_CollisionGroup },
				{ "Field_ActivateDisabled", (int64)Field_ActivateDisabled },
				{ "Field_PhysicsType_Max", (int64)Field_PhysicsType_Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n*\n*/" },
				{ "Field_ActivateDisabled.Comment", "/**\n*\n*/" },
				{ "Field_ActivateDisabled.DisplayName", "ActivateDisabled" },
				{ "Field_ActivateDisabled.Name", "Field_ActivateDisabled" },
				{ "Field_AngularTorque.Comment", "/**\n*\n*/" },
				{ "Field_AngularTorque.DisplayName", "AngularTorque" },
				{ "Field_AngularTorque.Name", "Field_AngularTorque" },
				{ "Field_AngularVelociy.Comment", "/**\n*\n*/" },
				{ "Field_AngularVelociy.DisplayName", "AngularVelocity" },
				{ "Field_AngularVelociy.Name", "Field_AngularVelociy" },
				{ "Field_CollisionGroup.Comment", "/**\n*\n*/" },
				{ "Field_CollisionGroup.DisplayName", "CollisionGroup" },
				{ "Field_CollisionGroup.Name", "Field_CollisionGroup" },
				{ "Field_DisableThreshold.Comment", "/**\n*\n*/" },
				{ "Field_DisableThreshold.DisplayName", "DisableThreshold" },
				{ "Field_DisableThreshold.Name", "Field_DisableThreshold" },
				{ "Field_DynamicConstraint.Comment", "/**\n*\n*/" },
				{ "Field_DynamicConstraint.DisplayName", "DynamicConstraint" },
				{ "Field_DynamicConstraint.Name", "Field_DynamicConstraint" },
				{ "Field_DynamicState.Comment", "/**\n*\n*/" },
				{ "Field_DynamicState.DisplayName", "DynamicState" },
				{ "Field_DynamicState.Name", "Field_DynamicState" },
				{ "Field_ExternalClusterStrain.Comment", "/**\n*\n*/" },
				{ "Field_ExternalClusterStrain.DisplayName", "ExternalClusterStrain" },
				{ "Field_ExternalClusterStrain.Name", "Field_ExternalClusterStrain" },
				{ "Field_InternalClusterStrain.Comment", "/**\n*\n*/" },
				{ "Field_InternalClusterStrain.DisplayName", "InternalClusterStrain" },
				{ "Field_InternalClusterStrain.Name", "Field_InternalClusterStrain" },
				{ "Field_Kill.Comment", "/**\n*\n*/" },
				{ "Field_Kill.DisplayName", "Kill" },
				{ "Field_Kill.Name", "Field_Kill" },
				{ "Field_LinearForce.Comment", "/**\n*\n*/" },
				{ "Field_LinearForce.DisplayName", "LinearForce" },
				{ "Field_LinearForce.Name", "Field_LinearForce" },
				{ "Field_LinearVelocity.Comment", "/**\n*\n*/" },
				{ "Field_LinearVelocity.DisplayName", "LinearVelocity" },
				{ "Field_LinearVelocity.Name", "Field_LinearVelocity" },
				{ "Field_None.Comment", "/**\n*\n*/" },
				{ "Field_None.Hidden", "" },
				{ "Field_None.Name", "Field_None" },
				{ "Field_PhysicsType_Max.Comment", "/**\n*\n*///~~~\n//256th entry\n" },
				{ "Field_PhysicsType_Max.Hidden", "" },
				{ "Field_PhysicsType_Max.Name", "Field_PhysicsType_Max" },
				{ "Field_PhysicsType_Max.ToolTip", "//256th entry" },
				{ "Field_PositionAnimated.Comment", "/**\n*\n*/" },
				{ "Field_PositionAnimated.DisplayName", "PositionAnimated" },
				{ "Field_PositionAnimated.Name", "Field_PositionAnimated" },
				{ "Field_PositionStatic.Comment", "/**\n*\n*/" },
				{ "Field_PositionStatic.DisplayName", "PositionStatic" },
				{ "Field_PositionStatic.Name", "Field_PositionStatic" },
				{ "Field_PositionTarget.Comment", "/**\n*\n*/" },
				{ "Field_PositionTarget.DisplayName", "PositionTarget" },
				{ "Field_PositionTarget.Name", "Field_PositionTarget" },
				{ "Field_SleepingThreshold.Comment", "/**\n*\n*/" },
				{ "Field_SleepingThreshold.DisplayName", "SleepingThreshold" },
				{ "Field_SleepingThreshold.Name", "Field_SleepingThreshold" },
				{ "ModuleRelativePath", "Public/Field/FieldSystemTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FieldSystemCore,
				nullptr,
				"EFieldPhysicsType",
				"EFieldPhysicsType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EFieldFalloffType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FieldSystemCore_EFieldFalloffType, Z_Construct_UPackage__Script_FieldSystemCore(), TEXT("EFieldFalloffType"));
		}
		return Singleton;
	}
	template<> FIELDSYSTEMCORE_API UEnum* StaticEnum<EFieldFalloffType>()
	{
		return EFieldFalloffType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFieldFalloffType(EFieldFalloffType_StaticEnum, TEXT("/Script/FieldSystemCore"), TEXT("EFieldFalloffType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FieldSystemCore_EFieldFalloffType_Hash() { return 3742509445U; }
	UEnum* Z_Construct_UEnum_FieldSystemCore_EFieldFalloffType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FieldSystemCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFieldFalloffType"), 0, Get_Z_Construct_UEnum_FieldSystemCore_EFieldFalloffType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Field_FallOff_None", (int64)Field_FallOff_None },
				{ "Field_Falloff_Linear", (int64)Field_Falloff_Linear },
				{ "Field_Falloff_Inverse", (int64)Field_Falloff_Inverse },
				{ "Field_Falloff_Squared", (int64)Field_Falloff_Squared },
				{ "Field_Falloff_Logarithmic", (int64)Field_Falloff_Logarithmic },
				{ "Field_Falloff_Max", (int64)Field_Falloff_Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n*\n*/" },
				{ "Field_Falloff_Inverse.Comment", "/**\n*\n*/" },
				{ "Field_Falloff_Inverse.DisplayName", "Inverse" },
				{ "Field_Falloff_Inverse.Name", "Field_Falloff_Inverse" },
				{ "Field_Falloff_Linear.Comment", "/**\n*\n*/" },
				{ "Field_Falloff_Linear.DisplayName", "Linear" },
				{ "Field_Falloff_Linear.Name", "Field_Falloff_Linear" },
				{ "Field_Falloff_Logarithmic.Comment", "/**\n*\n*/" },
				{ "Field_Falloff_Logarithmic.DisplayName", "Logarithmic" },
				{ "Field_Falloff_Logarithmic.Name", "Field_Falloff_Logarithmic" },
				{ "Field_Falloff_Max.Comment", "/**\n*\n*///~~~\n//256th entry\n" },
				{ "Field_Falloff_Max.Hidden", "" },
				{ "Field_Falloff_Max.Name", "Field_Falloff_Max" },
				{ "Field_Falloff_Max.ToolTip", "//256th entry" },
				{ "Field_FallOff_None.Comment", "/**\n*\n*/" },
				{ "Field_FallOff_None.DisplayName", "None" },
				{ "Field_FallOff_None.Name", "Field_FallOff_None" },
				{ "Field_Falloff_Squared.Comment", "/**\n*\n*/" },
				{ "Field_Falloff_Squared.DisplayName", "Squared" },
				{ "Field_Falloff_Squared.Name", "Field_Falloff_Squared" },
				{ "ModuleRelativePath", "Public/Field/FieldSystemTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FieldSystemCore,
				nullptr,
				"EFieldFalloffType",
				"EFieldFalloffType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EFieldResolutionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FieldSystemCore_EFieldResolutionType, Z_Construct_UPackage__Script_FieldSystemCore(), TEXT("EFieldResolutionType"));
		}
		return Singleton;
	}
	template<> FIELDSYSTEMCORE_API UEnum* StaticEnum<EFieldResolutionType>()
	{
		return EFieldResolutionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFieldResolutionType(EFieldResolutionType_StaticEnum, TEXT("/Script/FieldSystemCore"), TEXT("EFieldResolutionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FieldSystemCore_EFieldResolutionType_Hash() { return 1508759168U; }
	UEnum* Z_Construct_UEnum_FieldSystemCore_EFieldResolutionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FieldSystemCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFieldResolutionType"), 0, Get_Z_Construct_UEnum_FieldSystemCore_EFieldResolutionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Field_Resolution_Minimal", (int64)Field_Resolution_Minimal },
				{ "Field_Resolution_DisabledParents", (int64)Field_Resolution_DisabledParents },
				{ "Field_Resolution_Maximum", (int64)Field_Resolution_Maximum },
				{ "Field_Resolution_Max", (int64)Field_Resolution_Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n*\n*/" },
				{ "Field_Resolution_DisabledParents.Comment", "/**\n*\n*/" },
				{ "Field_Resolution_DisabledParents.DisplayName", "Minimal Plus Disabled Parents" },
				{ "Field_Resolution_DisabledParents.Name", "Field_Resolution_DisabledParents" },
				{ "Field_Resolution_Max.Comment", "/**\n*\n*///~~~\n//256th entry\n" },
				{ "Field_Resolution_Max.Hidden", "" },
				{ "Field_Resolution_Max.Name", "Field_Resolution_Max" },
				{ "Field_Resolution_Max.ToolTip", "//256th entry" },
				{ "Field_Resolution_Maximum.Comment", "/**\n*\n*/" },
				{ "Field_Resolution_Maximum.DisplayName", "Maximum" },
				{ "Field_Resolution_Maximum.Name", "Field_Resolution_Maximum" },
				{ "Field_Resolution_Minimal.Comment", "/**\n*\n*/" },
				{ "Field_Resolution_Minimal.DisplayName", "Minimal" },
				{ "Field_Resolution_Minimal.Name", "Field_Resolution_Minimal" },
				{ "ModuleRelativePath", "Public/Field/FieldSystemTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FieldSystemCore,
				nullptr,
				"EFieldResolutionType",
				"EFieldResolutionType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EFieldCullingOperationType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FieldSystemCore_EFieldCullingOperationType, Z_Construct_UPackage__Script_FieldSystemCore(), TEXT("EFieldCullingOperationType"));
		}
		return Singleton;
	}
	template<> FIELDSYSTEMCORE_API UEnum* StaticEnum<EFieldCullingOperationType>()
	{
		return EFieldCullingOperationType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFieldCullingOperationType(EFieldCullingOperationType_StaticEnum, TEXT("/Script/FieldSystemCore"), TEXT("EFieldCullingOperationType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FieldSystemCore_EFieldCullingOperationType_Hash() { return 3031195777U; }
	UEnum* Z_Construct_UEnum_FieldSystemCore_EFieldCullingOperationType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FieldSystemCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFieldCullingOperationType"), 0, Get_Z_Construct_UEnum_FieldSystemCore_EFieldCullingOperationType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Field_Culling_Inside", (int64)Field_Culling_Inside },
				{ "Field_Culling_Outside", (int64)Field_Culling_Outside },
				{ "Field_Culling_Operation_Max", (int64)Field_Culling_Operation_Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n*\n*/" },
				{ "Field_Culling_Inside.Comment", "/**\n*\n*/" },
				{ "Field_Culling_Inside.DisplayName", "Inside" },
				{ "Field_Culling_Inside.Name", "Field_Culling_Inside" },
				{ "Field_Culling_Operation_Max.Comment", "/**\n*\n*///~~~\n//256th entry\n" },
				{ "Field_Culling_Operation_Max.Hidden", "" },
				{ "Field_Culling_Operation_Max.Name", "Field_Culling_Operation_Max" },
				{ "Field_Culling_Operation_Max.ToolTip", "//256th entry" },
				{ "Field_Culling_Outside.Comment", "/**\n*\n*/" },
				{ "Field_Culling_Outside.DisplayName", "Outside" },
				{ "Field_Culling_Outside.Name", "Field_Culling_Outside" },
				{ "ModuleRelativePath", "Public/Field/FieldSystemTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FieldSystemCore,
				nullptr,
				"EFieldCullingOperationType",
				"EFieldCullingOperationType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EFieldOperationType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FieldSystemCore_EFieldOperationType, Z_Construct_UPackage__Script_FieldSystemCore(), TEXT("EFieldOperationType"));
		}
		return Singleton;
	}
	template<> FIELDSYSTEMCORE_API UEnum* StaticEnum<EFieldOperationType>()
	{
		return EFieldOperationType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFieldOperationType(EFieldOperationType_StaticEnum, TEXT("/Script/FieldSystemCore"), TEXT("EFieldOperationType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FieldSystemCore_EFieldOperationType_Hash() { return 2622558911U; }
	UEnum* Z_Construct_UEnum_FieldSystemCore_EFieldOperationType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FieldSystemCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFieldOperationType"), 0, Get_Z_Construct_UEnum_FieldSystemCore_EFieldOperationType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Field_Multiply", (int64)Field_Multiply },
				{ "Field_Divide", (int64)Field_Divide },
				{ "Field_Add", (int64)Field_Add },
				{ "Field_Substract", (int64)Field_Substract },
				{ "Field_Operation_Max", (int64)Field_Operation_Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n*\n*/" },
				{ "Field_Add.Comment", "/**\n*\n*/" },
				{ "Field_Add.DisplayName", "Add" },
				{ "Field_Add.Name", "Field_Add" },
				{ "Field_Divide.Comment", "/**\n*\n*/" },
				{ "Field_Divide.DisplayName", "Divide" },
				{ "Field_Divide.Name", "Field_Divide" },
				{ "Field_Multiply.Comment", "/**\n*\n*/" },
				{ "Field_Multiply.DisplayName", "Multiply" },
				{ "Field_Multiply.Name", "Field_Multiply" },
				{ "Field_Operation_Max.Comment", "/**\n*\n*///~~~\n//256th entry\n" },
				{ "Field_Operation_Max.Hidden", "" },
				{ "Field_Operation_Max.Name", "Field_Operation_Max" },
				{ "Field_Operation_Max.ToolTip", "//256th entry" },
				{ "Field_Substract.Comment", "/**\n*\n*/" },
				{ "Field_Substract.DisplayName", "Subtract" },
				{ "Field_Substract.Name", "Field_Substract" },
				{ "ModuleRelativePath", "Public/Field/FieldSystemTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FieldSystemCore,
				nullptr,
				"EFieldOperationType",
				"EFieldOperationType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESetMaskConditionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FieldSystemCore_ESetMaskConditionType, Z_Construct_UPackage__Script_FieldSystemCore(), TEXT("ESetMaskConditionType"));
		}
		return Singleton;
	}
	template<> FIELDSYSTEMCORE_API UEnum* StaticEnum<ESetMaskConditionType>()
	{
		return ESetMaskConditionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESetMaskConditionType(ESetMaskConditionType_StaticEnum, TEXT("/Script/FieldSystemCore"), TEXT("ESetMaskConditionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FieldSystemCore_ESetMaskConditionType_Hash() { return 142206567U; }
	UEnum* Z_Construct_UEnum_FieldSystemCore_ESetMaskConditionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FieldSystemCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESetMaskConditionType"), 0, Get_Z_Construct_UEnum_FieldSystemCore_ESetMaskConditionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Field_Set_Always", (int64)Field_Set_Always },
				{ "Field_Set_IFF_NOT_Interior", (int64)Field_Set_IFF_NOT_Interior },
				{ "Field_Set_IFF_NOT_Exterior", (int64)Field_Set_IFF_NOT_Exterior },
				{ "Field_MaskCondition_Max", (int64)Field_MaskCondition_Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n*\n*/" },
				{ "Field_MaskCondition_Max.Comment", "/**\n*\n*///~~~\n//256th entry\n" },
				{ "Field_MaskCondition_Max.Hidden", "" },
				{ "Field_MaskCondition_Max.Name", "Field_MaskCondition_Max" },
				{ "Field_MaskCondition_Max.ToolTip", "//256th entry" },
				{ "Field_Set_Always.Comment", "/**\n*\n*/" },
				{ "Field_Set_Always.DisplayName", "Always" },
				{ "Field_Set_Always.Name", "Field_Set_Always" },
				{ "Field_Set_IFF_NOT_Exterior.Comment", "/**\n*\n*/" },
				{ "Field_Set_IFF_NOT_Exterior.DisplayName", "IFF NOT Exterior" },
				{ "Field_Set_IFF_NOT_Exterior.Name", "Field_Set_IFF_NOT_Exterior" },
				{ "Field_Set_IFF_NOT_Interior.Comment", "/**\n*\n*/" },
				{ "Field_Set_IFF_NOT_Interior.DisplayName", "IFF NOT Interior" },
				{ "Field_Set_IFF_NOT_Interior.Name", "Field_Set_IFF_NOT_Interior" },
				{ "ModuleRelativePath", "Public/Field/FieldSystemTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FieldSystemCore,
				nullptr,
				"ESetMaskConditionType",
				"ESetMaskConditionType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
