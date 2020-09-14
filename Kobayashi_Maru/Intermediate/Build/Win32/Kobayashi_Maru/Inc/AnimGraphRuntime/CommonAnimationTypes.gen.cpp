// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphRuntime/Public/CommonAnimationTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonAnimationTypes() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_ERotationComponent();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_EEasingFuncType();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRotationRetargetingInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	static UEnum* ERotationComponent_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_ERotationComponent, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("ERotationComponent"));
		}
		return Singleton;
	}
	template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<ERotationComponent>()
	{
		return ERotationComponent_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERotationComponent(ERotationComponent_StaticEnum, TEXT("/Script/AnimGraphRuntime"), TEXT("ERotationComponent"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AnimGraphRuntime_ERotationComponent_Hash() { return 3609068695U; }
	UEnum* Z_Construct_UEnum_AnimGraphRuntime_ERotationComponent()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERotationComponent"), 0, Get_Z_Construct_UEnum_AnimGraphRuntime_ERotationComponent_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERotationComponent::EulerX", (int64)ERotationComponent::EulerX },
				{ "ERotationComponent::EulerY", (int64)ERotationComponent::EulerY },
				{ "ERotationComponent::EulerZ", (int64)ERotationComponent::EulerZ },
				{ "ERotationComponent::QuaternionAngle", (int64)ERotationComponent::QuaternionAngle },
				{ "ERotationComponent::SwingAngle", (int64)ERotationComponent::SwingAngle },
				{ "ERotationComponent::TwistAngle", (int64)ERotationComponent::TwistAngle },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "// A rotational component. This is used for retargeting, for example.\n" },
				{ "EulerX.Comment", "// Using the X component of the Euler rotation\n" },
				{ "EulerX.Name", "ERotationComponent::EulerX" },
				{ "EulerX.ToolTip", "Using the X component of the Euler rotation" },
				{ "EulerY.Comment", "// Using the Y component of the Euler rotation\n" },
				{ "EulerY.Name", "ERotationComponent::EulerY" },
				{ "EulerY.ToolTip", "Using the Y component of the Euler rotation" },
				{ "EulerZ.Comment", "// Using the Z component of the Euler rotation\n" },
				{ "EulerZ.Name", "ERotationComponent::EulerZ" },
				{ "EulerZ.ToolTip", "Using the Z component of the Euler rotation" },
				{ "ModuleRelativePath", "Public/CommonAnimationTypes.h" },
				{ "QuaternionAngle.Comment", "// Using the angle of the quaternion\n" },
				{ "QuaternionAngle.Name", "ERotationComponent::QuaternionAngle" },
				{ "QuaternionAngle.ToolTip", "Using the angle of the quaternion" },
				{ "SwingAngle.Comment", "// Using the angle of the swing quaternion\n" },
				{ "SwingAngle.Name", "ERotationComponent::SwingAngle" },
				{ "SwingAngle.ToolTip", "Using the angle of the swing quaternion" },
				{ "ToolTip", "A rotational component. This is used for retargeting, for example." },
				{ "TwistAngle.Comment", "// Using the angle of the twist quaternion\n" },
				{ "TwistAngle.Name", "ERotationComponent::TwistAngle" },
				{ "TwistAngle.ToolTip", "Using the angle of the twist quaternion" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				nullptr,
				"ERotationComponent",
				"ERotationComponent",
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
	static UEnum* EEasingFuncType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_EEasingFuncType, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("EEasingFuncType"));
		}
		return Singleton;
	}
	template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<EEasingFuncType>()
	{
		return EEasingFuncType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEasingFuncType(EEasingFuncType_StaticEnum, TEXT("/Script/AnimGraphRuntime"), TEXT("EEasingFuncType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AnimGraphRuntime_EEasingFuncType_Hash() { return 2130448670U; }
	UEnum* Z_Construct_UEnum_AnimGraphRuntime_EEasingFuncType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEasingFuncType"), 0, Get_Z_Construct_UEnum_AnimGraphRuntime_EEasingFuncType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEasingFuncType::Linear", (int64)EEasingFuncType::Linear },
				{ "EEasingFuncType::Sinusoidal", (int64)EEasingFuncType::Sinusoidal },
				{ "EEasingFuncType::Cubic", (int64)EEasingFuncType::Cubic },
				{ "EEasingFuncType::QuadraticInOut", (int64)EEasingFuncType::QuadraticInOut },
				{ "EEasingFuncType::CubicInOut", (int64)EEasingFuncType::CubicInOut },
				{ "EEasingFuncType::HermiteCubic", (int64)EEasingFuncType::HermiteCubic },
				{ "EEasingFuncType::QuarticInOut", (int64)EEasingFuncType::QuarticInOut },
				{ "EEasingFuncType::QuinticInOut", (int64)EEasingFuncType::QuinticInOut },
				{ "EEasingFuncType::CircularIn", (int64)EEasingFuncType::CircularIn },
				{ "EEasingFuncType::CircularOut", (int64)EEasingFuncType::CircularOut },
				{ "EEasingFuncType::CircularInOut", (int64)EEasingFuncType::CircularInOut },
				{ "EEasingFuncType::ExpIn", (int64)EEasingFuncType::ExpIn },
				{ "EEasingFuncType::ExpOut", (int64)EEasingFuncType::ExpOut },
				{ "EEasingFuncType::ExpInOut", (int64)EEasingFuncType::ExpInOut },
				{ "EEasingFuncType::CustomCurve", (int64)EEasingFuncType::CustomCurve },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "CircularIn.Comment", "// Circular easing (only in)\n" },
				{ "CircularIn.Name", "EEasingFuncType::CircularIn" },
				{ "CircularIn.ToolTip", "Circular easing (only in)" },
				{ "CircularInOut.Comment", "// Circular easing (in and out)\n" },
				{ "CircularInOut.Name", "EEasingFuncType::CircularInOut" },
				{ "CircularInOut.ToolTip", "Circular easing (in and out)" },
				{ "CircularOut.Comment", "// Circular easing (only out)\n" },
				{ "CircularOut.Name", "EEasingFuncType::CircularOut" },
				{ "CircularOut.ToolTip", "Circular easing (only out)" },
				{ "Comment", "/**\n *\x09""An easing type defining how to ease float values.\n */" },
				{ "Cubic.Comment", "// Cubic version of the value (only in)\n" },
				{ "Cubic.Name", "EEasingFuncType::Cubic" },
				{ "Cubic.ToolTip", "Cubic version of the value (only in)" },
				{ "CubicInOut.Comment", "// Cubic version of the value (in and out)\n" },
				{ "CubicInOut.Name", "EEasingFuncType::CubicInOut" },
				{ "CubicInOut.ToolTip", "Cubic version of the value (in and out)" },
				{ "CustomCurve.Comment", "// Custom - based on an optional Curve\n" },
				{ "CustomCurve.Name", "EEasingFuncType::CustomCurve" },
				{ "CustomCurve.ToolTip", "Custom - based on an optional Curve" },
				{ "ExpIn.Comment", "// Exponential easing (only in)\n" },
				{ "ExpIn.Name", "EEasingFuncType::ExpIn" },
				{ "ExpIn.ToolTip", "Exponential easing (only in)" },
				{ "ExpInOut.Comment", "// Exponential easing (in and out)\n" },
				{ "ExpInOut.Name", "EEasingFuncType::ExpInOut" },
				{ "ExpInOut.ToolTip", "Exponential easing (in and out)" },
				{ "ExpOut.Comment", "// Exponential easing (only out)\n" },
				{ "ExpOut.Name", "EEasingFuncType::ExpOut" },
				{ "ExpOut.ToolTip", "Exponential easing (only out)" },
				{ "HermiteCubic.Comment", "// Easing using a cubic hermite function\n" },
				{ "HermiteCubic.Name", "EEasingFuncType::HermiteCubic" },
				{ "HermiteCubic.ToolTip", "Easing using a cubic hermite function" },
				{ "Linear.Comment", "// Linear easing (no change to the value)\n" },
				{ "Linear.Name", "EEasingFuncType::Linear" },
				{ "Linear.ToolTip", "Linear easing (no change to the value)" },
				{ "ModuleRelativePath", "Public/CommonAnimationTypes.h" },
				{ "QuadraticInOut.Comment", "// Quadratic version of the value (in and out)\n" },
				{ "QuadraticInOut.Name", "EEasingFuncType::QuadraticInOut" },
				{ "QuadraticInOut.ToolTip", "Quadratic version of the value (in and out)" },
				{ "QuarticInOut.Comment", "// Quartic version of the value (in and out)\n" },
				{ "QuarticInOut.Name", "EEasingFuncType::QuarticInOut" },
				{ "QuarticInOut.ToolTip", "Quartic version of the value (in and out)" },
				{ "QuinticInOut.Comment", "// Quintic version of the value (in and out)\n" },
				{ "QuinticInOut.Name", "EEasingFuncType::QuinticInOut" },
				{ "QuinticInOut.ToolTip", "Quintic version of the value (in and out)" },
				{ "Sinusoidal.Comment", "// Easing using a sinus function\n" },
				{ "Sinusoidal.Name", "EEasingFuncType::Sinusoidal" },
				{ "Sinusoidal.ToolTip", "Easing using a sinus function" },
				{ "ToolTip", "An easing type defining how to ease float values." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				nullptr,
				"EEasingFuncType",
				"EEasingFuncType",
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
class UScriptStruct* FRotationRetargetingInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FRotationRetargetingInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRotationRetargetingInfo, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("RotationRetargetingInfo"), sizeof(FRotationRetargetingInfo), Get_Z_Construct_UScriptStruct_FRotationRetargetingInfo_Hash());
	}
	return Singleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FRotationRetargetingInfo>()
{
	return FRotationRetargetingInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRotationRetargetingInfo(FRotationRetargetingInfo::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("RotationRetargetingInfo"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFRotationRetargetingInfo
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFRotationRetargetingInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RotationRetargetingInfo")),new UScriptStruct::TCppStructOps<FRotationRetargetingInfo>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFRotationRetargetingInfo;
	struct Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bClamp_MetaData[];
#endif
		static void NewProp_bClamp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EasingWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EasingWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFlipEasing_MetaData[];
#endif
		static void NewProp_bFlipEasing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFlipEasing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EasingType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EasingType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EasingType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetMaximum_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetMaximum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetMinimum_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetMinimum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceMaximum_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SourceMaximum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceMinimum_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SourceMinimum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseAbsoluteAngle_MetaData[];
#endif
		static void NewProp_bUseAbsoluteAngle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseAbsoluteAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TwistAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TwistAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RotationComponent;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RotationComponent_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Source;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09The FRotationRetargetingInfo is used to provide all of the \n *\x09settings required to perform rotational retargeting on a single\n *\x09transform.\n */" },
		{ "ModuleRelativePath", "Public/CommonAnimationTypes.h" },
		{ "ToolTip", "The FRotationRetargetingInfo is used to provide all of the\nsettings required to perform rotational retargeting on a single\ntransform." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRotationRetargetingInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_bClamp_MetaData[] = {
		{ "Category", "FRotationRetargetingInfo" },
		{ "Comment", "// If set to true the value for the easing will be clamped between 0.0 and 1.0\n" },
		{ "ModuleRelativePath", "Public/CommonAnimationTypes.h" },
		{ "ToolTip", "If set to true the value for the easing will be clamped between 0.0 and 1.0" },
	};
#endif
	void Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_bClamp_SetBit(void* Obj)
	{
		((FRotationRetargetingInfo*)Obj)->bClamp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_bClamp = { "bClamp", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRotationRetargetingInfo), &Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_bClamp_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_bClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_bClamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_EasingWeight_MetaData[] = {
		{ "Category", "FRotationRetargetingInfo" },
		{ "Comment", "// The amount of easing to apply (value should be 0.0 to 1.0)\n" },
		{ "ModuleRelativePath", "Public/CommonAnimationTypes.h" },
		{ "ToolTip", "The amount of easing to apply (value should be 0.0 to 1.0)" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_EasingWeight = { "EasingWeight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRotationRetargetingInfo, EasingWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_EasingWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_EasingWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_bFlipEasing_MetaData[] = {
		{ "Category", "FRotationRetargetingInfo" },
		{ "Comment", "// If set to true the interpolation value for the easing will be flipped (1.0 - Value)\n" },
		{ "ModuleRelativePath", "Public/CommonAnimationTypes.h" },
		{ "ToolTip", "If set to true the interpolation value for the easing will be flipped (1.0 - Value)" },
	};
#endif
	void Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_bFlipEasing_SetBit(void* Obj)
	{
		((FRotationRetargetingInfo*)Obj)->bFlipEasing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_bFlipEasing = { "bFlipEasing", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRotationRetargetingInfo), &Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_bFlipEasing_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_bFlipEasing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_bFlipEasing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_CustomCurve_MetaData[] = {
		{ "Category", "FRotationRetargetingInfo" },
		{ "Comment", "/** Custom curve mapping to apply if bApplyCustomCurve is true */" },
		{ "ModuleRelativePath", "Public/CommonAnimationTypes.h" },
		{ "ToolTip", "Custom curve mapping to apply if bApplyCustomCurve is true" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_CustomCurve = { "CustomCurve", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRotationRetargetingInfo, CustomCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_CustomCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_CustomCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_EasingType_MetaData[] = {
		{ "Category", "FRotationRetargetingInfo" },
		{ "Comment", "// The easing to use - pick linear if you don't want to apply any easing\n" },
		{ "ModuleRelativePath", "Public/CommonAnimationTypes.h" },
		{ "ToolTip", "The easing to use - pick linear if you don't want to apply any easing" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_EasingType = { "EasingType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRotationRetargetingInfo, EasingType), Z_Construct_UEnum_AnimGraphRuntime_EEasingFuncType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_EasingType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_EasingType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_EasingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_TargetMaximum_MetaData[] = {
		{ "Category", "FRotationRetargetingInfo" },
		{ "Comment", "// The target value of the target angle in degrees (can be the same as SourceMaximum)\n" },
		{ "ModuleRelativePath", "Public/CommonAnimationTypes.h" },
		{ "ToolTip", "The target value of the target angle in degrees (can be the same as SourceMaximum)" },
		{ "UIMax", "90.0" },
		{ "UIMin", "-90.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_TargetMaximum = { "TargetMaximum", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRotationRetargetingInfo, TargetMaximum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_TargetMaximum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_TargetMaximum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_TargetMinimum_MetaData[] = {
		{ "Category", "FRotationRetargetingInfo" },
		{ "Comment", "// The minimum value of the target angle in degrees (can be the same as SourceMinimum)\n" },
		{ "ModuleRelativePath", "Public/CommonAnimationTypes.h" },
		{ "ToolTip", "The minimum value of the target angle in degrees (can be the same as SourceMinimum)" },
		{ "UIMax", "90.0" },
		{ "UIMin", "-90.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_TargetMinimum = { "TargetMinimum", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRotationRetargetingInfo, TargetMinimum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_TargetMinimum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_TargetMinimum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_SourceMaximum_MetaData[] = {
		{ "Category", "FRotationRetargetingInfo" },
		{ "Comment", "// The maximum value of the source angle in degrees\n" },
		{ "ModuleRelativePath", "Public/CommonAnimationTypes.h" },
		{ "ToolTip", "The maximum value of the source angle in degrees" },
		{ "UIMax", "90.0" },
		{ "UIMin", "-90.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_SourceMaximum = { "SourceMaximum", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRotationRetargetingInfo, SourceMaximum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_SourceMaximum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_SourceMaximum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_SourceMinimum_MetaData[] = {
		{ "Category", "FRotationRetargetingInfo" },
		{ "Comment", "// The minimum value of the source angle in degrees\n" },
		{ "ModuleRelativePath", "Public/CommonAnimationTypes.h" },
		{ "ToolTip", "The minimum value of the source angle in degrees" },
		{ "UIMax", "90.0" },
		{ "UIMin", "-90.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_SourceMinimum = { "SourceMinimum", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRotationRetargetingInfo, SourceMinimum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_SourceMinimum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_SourceMinimum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_bUseAbsoluteAngle_MetaData[] = {
		{ "Category", "FRotationRetargetingInfo" },
		{ "Comment", "// If set to true the angle will be always positive, thus resulting in mirrored rotation both ways\n" },
		{ "ModuleRelativePath", "Public/CommonAnimationTypes.h" },
		{ "ToolTip", "If set to true the angle will be always positive, thus resulting in mirrored rotation both ways" },
	};
#endif
	void Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_bUseAbsoluteAngle_SetBit(void* Obj)
	{
		((FRotationRetargetingInfo*)Obj)->bUseAbsoluteAngle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_bUseAbsoluteAngle = { "bUseAbsoluteAngle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRotationRetargetingInfo), &Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_bUseAbsoluteAngle_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_bUseAbsoluteAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_bUseAbsoluteAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_TwistAxis_MetaData[] = {
		{ "Category", "FRotationRetargetingInfo" },
		{ "Comment", "// In case the rotation component is SwingAngle or TwistAngle this vector is used as the twist axis\n" },
		{ "ModuleRelativePath", "Public/CommonAnimationTypes.h" },
		{ "ToolTip", "In case the rotation component is SwingAngle or TwistAngle this vector is used as the twist axis" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_TwistAxis = { "TwistAxis", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRotationRetargetingInfo, TwistAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_TwistAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_TwistAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_RotationComponent_MetaData[] = {
		{ "Category", "FRotationRetargetingInfo" },
		{ "Comment", "// The rotation component to perform retargeting with\n" },
		{ "ModuleRelativePath", "Public/CommonAnimationTypes.h" },
		{ "ToolTip", "The rotation component to perform retargeting with" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_RotationComponent = { "RotationComponent", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRotationRetargetingInfo, RotationComponent), Z_Construct_UEnum_AnimGraphRuntime_ERotationComponent, METADATA_PARAMS(Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_RotationComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_RotationComponent_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_RotationComponent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_Target_MetaData[] = {
		{ "Category", "FRotationRetargetingInfo" },
		{ "Comment", "// The target transform to project the rotation. In most cases this is the same as Source\n" },
		{ "ModuleRelativePath", "Public/CommonAnimationTypes.h" },
		{ "ToolTip", "The target transform to project the rotation. In most cases this is the same as Source" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRotationRetargetingInfo, Target), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_Source_MetaData[] = {
		{ "Category", "FRotationRetargetingInfo" },
		{ "Comment", "// The source transform of the frame of reference. The rotation is made relative to this space\n" },
		{ "ModuleRelativePath", "Public/CommonAnimationTypes.h" },
		{ "ToolTip", "The source transform of the frame of reference. The rotation is made relative to this space" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRotationRetargetingInfo, Source), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_Source_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "FRotationRetargetingInfo" },
		{ "Comment", "// Set to true this enables retargeting\n" },
		{ "ModuleRelativePath", "Public/CommonAnimationTypes.h" },
		{ "ToolTip", "Set to true this enables retargeting" },
	};
#endif
	void Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FRotationRetargetingInfo*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRotationRetargetingInfo), &Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_bEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_bClamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_EasingWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_bFlipEasing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_CustomCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_EasingType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_EasingType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_TargetMaximum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_TargetMinimum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_SourceMaximum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_SourceMinimum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_bUseAbsoluteAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_TwistAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_RotationComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_RotationComponent_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_Source,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_bEnabled,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		nullptr,
		&NewStructOps,
		"RotationRetargetingInfo",
		sizeof(FRotationRetargetingInfo),
		alignof(FRotationRetargetingInfo),
		Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRotationRetargetingInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRotationRetargetingInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RotationRetargetingInfo"), sizeof(FRotationRetargetingInfo), Get_Z_Construct_UScriptStruct_FRotationRetargetingInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRotationRetargetingInfo_Hash() { return 1278051262U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
