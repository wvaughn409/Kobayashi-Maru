// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphRuntime/Public/RBF/RBFSolver.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRBFSolver() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_ERBFNormalizeMethod();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_ERBFDistanceMethod();
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_ERBFFunctionType();
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_ERBFSolverType();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRBFParams();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBoneAxis();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRBFTarget();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRBFEntry();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
// End Cross Module References
	static UEnum* ERBFNormalizeMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_ERBFNormalizeMethod, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("ERBFNormalizeMethod"));
		}
		return Singleton;
	}
	template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<ERBFNormalizeMethod>()
	{
		return ERBFNormalizeMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERBFNormalizeMethod(ERBFNormalizeMethod_StaticEnum, TEXT("/Script/AnimGraphRuntime"), TEXT("ERBFNormalizeMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AnimGraphRuntime_ERBFNormalizeMethod_Hash() { return 522941001U; }
	UEnum* Z_Construct_UEnum_AnimGraphRuntime_ERBFNormalizeMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERBFNormalizeMethod"), 0, Get_Z_Construct_UEnum_AnimGraphRuntime_ERBFNormalizeMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERBFNormalizeMethod::OnlyNormalizeAboveOne", (int64)ERBFNormalizeMethod::OnlyNormalizeAboveOne },
				{ "ERBFNormalizeMethod::AlwaysNormalize", (int64)ERBFNormalizeMethod::AlwaysNormalize },
				{ "ERBFNormalizeMethod::NormalizeWithinMedian", (int64)ERBFNormalizeMethod::NormalizeWithinMedian },
				{ "ERBFNormalizeMethod::NoNormalization", (int64)ERBFNormalizeMethod::NoNormalization },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AlwaysNormalize.Comment", "/** \n\x09\x09""Always normalize. \n\x09\x09Zero distribution weights stay zero.\n\x09*/" },
				{ "AlwaysNormalize.Name", "ERBFNormalizeMethod::AlwaysNormalize" },
				{ "AlwaysNormalize.ToolTip", "Always normalize.\nZero distribution weights stay zero." },
				{ "Comment", "/** Method to normalize weights */" },
				{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
				{ "NoNormalization.Comment", "/** \n\x09\x09""Don't normalize at all. This should only be used with\n\x09\x09the interpolative method, if it is known that all input\n\x09\x09values will be within the area bounded by the targets.\n\x09*/" },
				{ "NoNormalization.Name", "ERBFNormalizeMethod::NoNormalization" },
				{ "NoNormalization.ToolTip", "Don't normalize at all. This should only be used with\nthe interpolative method, if it is known that all input\nvalues will be within the area bounded by the targets." },
				{ "NormalizeWithinMedian.Comment", "/** \n\x09\x09Normalize only within reference median. The median\n\x09\x09is a cone with a minimum and maximum angle within\n\x09\x09which the value will be interpolated between \n\x09\x09non-normalized and normalized. This helps to define\n\x09\x09the volume in which normalization is always required.\n\x09*/" },
				{ "NormalizeWithinMedian.Name", "ERBFNormalizeMethod::NormalizeWithinMedian" },
				{ "NormalizeWithinMedian.ToolTip", "Normalize only within reference median. The median\nis a cone with a minimum and maximum angle within\nwhich the value will be interpolated between\nnon-normalized and normalized. This helps to define\nthe volume in which normalization is always required." },
				{ "OnlyNormalizeAboveOne.Comment", "/** Only normalize above one */" },
				{ "OnlyNormalizeAboveOne.Name", "ERBFNormalizeMethod::OnlyNormalizeAboveOne" },
				{ "OnlyNormalizeAboveOne.ToolTip", "Only normalize above one" },
				{ "ToolTip", "Method to normalize weights" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				nullptr,
				"ERBFNormalizeMethod",
				"ERBFNormalizeMethod",
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
	static UEnum* ERBFDistanceMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_ERBFDistanceMethod, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("ERBFDistanceMethod"));
		}
		return Singleton;
	}
	template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<ERBFDistanceMethod>()
	{
		return ERBFDistanceMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERBFDistanceMethod(ERBFDistanceMethod_StaticEnum, TEXT("/Script/AnimGraphRuntime"), TEXT("ERBFDistanceMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AnimGraphRuntime_ERBFDistanceMethod_Hash() { return 1625670440U; }
	UEnum* Z_Construct_UEnum_AnimGraphRuntime_ERBFDistanceMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERBFDistanceMethod"), 0, Get_Z_Construct_UEnum_AnimGraphRuntime_ERBFDistanceMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERBFDistanceMethod::Euclidean", (int64)ERBFDistanceMethod::Euclidean },
				{ "ERBFDistanceMethod::Quaternion", (int64)ERBFDistanceMethod::Quaternion },
				{ "ERBFDistanceMethod::SwingAngle", (int64)ERBFDistanceMethod::SwingAngle },
				{ "ERBFDistanceMethod::TwistAngle", (int64)ERBFDistanceMethod::TwistAngle },
				{ "ERBFDistanceMethod::DefaultMethod", (int64)ERBFDistanceMethod::DefaultMethod },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** Method for determining distance from input to targets */" },
				{ "DefaultMethod.Comment", "/** Uses the setting of the parent container */" },
				{ "DefaultMethod.Name", "ERBFDistanceMethod::DefaultMethod" },
				{ "DefaultMethod.ToolTip", "Uses the setting of the parent container" },
				{ "Euclidean.Comment", "/** Standard n-dimensional distance measure */" },
				{ "Euclidean.Name", "ERBFDistanceMethod::Euclidean" },
				{ "Euclidean.ToolTip", "Standard n-dimensional distance measure" },
				{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
				{ "Quaternion.Comment", "/** Treat inputs as quaternion */" },
				{ "Quaternion.Name", "ERBFDistanceMethod::Quaternion" },
				{ "Quaternion.ToolTip", "Treat inputs as quaternion" },
				{ "SwingAngle.Comment", "/** Treat inputs as quaternion, and find distance between rotated TwistAxis direction */" },
				{ "SwingAngle.Name", "ERBFDistanceMethod::SwingAngle" },
				{ "SwingAngle.ToolTip", "Treat inputs as quaternion, and find distance between rotated TwistAxis direction" },
				{ "ToolTip", "Method for determining distance from input to targets" },
				{ "TwistAngle.Comment", "/** Treat inputs as quaternion, and find distance between rotations around the TwistAxis direction */" },
				{ "TwistAngle.Name", "ERBFDistanceMethod::TwistAngle" },
				{ "TwistAngle.ToolTip", "Treat inputs as quaternion, and find distance between rotations around the TwistAxis direction" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				nullptr,
				"ERBFDistanceMethod",
				"ERBFDistanceMethod",
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
	static UEnum* ERBFFunctionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_ERBFFunctionType, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("ERBFFunctionType"));
		}
		return Singleton;
	}
	template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<ERBFFunctionType>()
	{
		return ERBFFunctionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERBFFunctionType(ERBFFunctionType_StaticEnum, TEXT("/Script/AnimGraphRuntime"), TEXT("ERBFFunctionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AnimGraphRuntime_ERBFFunctionType_Hash() { return 3208275929U; }
	UEnum* Z_Construct_UEnum_AnimGraphRuntime_ERBFFunctionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERBFFunctionType"), 0, Get_Z_Construct_UEnum_AnimGraphRuntime_ERBFFunctionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERBFFunctionType::Gaussian", (int64)ERBFFunctionType::Gaussian },
				{ "ERBFFunctionType::Exponential", (int64)ERBFFunctionType::Exponential },
				{ "ERBFFunctionType::Linear", (int64)ERBFFunctionType::Linear },
				{ "ERBFFunctionType::Cubic", (int64)ERBFFunctionType::Cubic },
				{ "ERBFFunctionType::Quintic", (int64)ERBFFunctionType::Quintic },
				{ "ERBFFunctionType::DefaultFunction", (int64)ERBFFunctionType::DefaultFunction },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** Function to use for each target falloff */" },
				{ "Cubic.Name", "ERBFFunctionType::Cubic" },
				{ "DefaultFunction.Comment", "/** Uses the setting of the parent container */" },
				{ "DefaultFunction.Name", "ERBFFunctionType::DefaultFunction" },
				{ "DefaultFunction.ToolTip", "Uses the setting of the parent container" },
				{ "Exponential.Name", "ERBFFunctionType::Exponential" },
				{ "Gaussian.Name", "ERBFFunctionType::Gaussian" },
				{ "Linear.Name", "ERBFFunctionType::Linear" },
				{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
				{ "Quintic.Name", "ERBFFunctionType::Quintic" },
				{ "ToolTip", "Function to use for each target falloff" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				nullptr,
				"ERBFFunctionType",
				"ERBFFunctionType",
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
	static UEnum* ERBFSolverType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_ERBFSolverType, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("ERBFSolverType"));
		}
		return Singleton;
	}
	template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<ERBFSolverType>()
	{
		return ERBFSolverType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERBFSolverType(ERBFSolverType_StaticEnum, TEXT("/Script/AnimGraphRuntime"), TEXT("ERBFSolverType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AnimGraphRuntime_ERBFSolverType_Hash() { return 3302225530U; }
	UEnum* Z_Construct_UEnum_AnimGraphRuntime_ERBFSolverType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERBFSolverType"), 0, Get_Z_Construct_UEnum_AnimGraphRuntime_ERBFSolverType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERBFSolverType::Additive", (int64)ERBFSolverType::Additive },
				{ "ERBFSolverType::Interpolative", (int64)ERBFSolverType::Interpolative },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Additive.Comment", "/** The additive solver sums up contributions from each target. It's faster\n\x09    but may require more targets for a good coverage, and requires the \n\x09\x09normalization step to be performed for smooth results.\n\x09*/" },
				{ "Additive.Name", "ERBFSolverType::Additive" },
				{ "Additive.ToolTip", "The additive solver sums up contributions from each target. It's faster\n          but may require more targets for a good coverage, and requires the\n              normalization step to be performed for smooth results." },
				{ "Comment", "/** The solver type to use. The two solvers have different requirements. */" },
				{ "Interpolative.Comment", "/** The interpolative solver interpolates the values from each target based\n\x09\x09on distance. As long as the input values are within the area bounded by\n\x09\x09the targets, the interpolation is well-behaved and return weight values \n\x09\x09within the 0% - 100% limit with no normalization required. \n\x09\x09Interpolation also gives smoother results, with fewer targets, than additive\n\x09\x09""but at a higher computational cost.\n\x09*/" },
				{ "Interpolative.Name", "ERBFSolverType::Interpolative" },
				{ "Interpolative.ToolTip", "The interpolative solver interpolates the values from each target based\n              on distance. As long as the input values are within the area bounded by\n              the targets, the interpolation is well-behaved and return weight values\n              within the 0% - 100% limit with no normalization required.\n              Interpolation also gives smoother results, with fewer targets, than additive\n              but at a higher computational cost." },
				{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
				{ "ToolTip", "The solver type to use. The two solvers have different requirements." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				nullptr,
				"ERBFSolverType",
				"ERBFSolverType",
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
class UScriptStruct* FRBFParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FRBFParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRBFParams, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("RBFParams"), sizeof(FRBFParams), Get_Z_Construct_UScriptStruct_FRBFParams_Hash());
	}
	return Singleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FRBFParams>()
{
	return FRBFParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRBFParams(FRBFParams::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("RBFParams"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFRBFParams
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFRBFParams()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RBFParams")),new UScriptStruct::TCppStructOps<FRBFParams>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFRBFParams;
	struct Z_Construct_UScriptStruct_FRBFParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MedianMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MedianMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MedianMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MedianMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MedianReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MedianReference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalizeMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NormalizeMethod;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NormalizeMethod_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeightThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeightThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TwistAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TwistAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DistanceMethod;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DistanceMethod_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Function_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Function;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Function_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SolverType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SolverType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SolverType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetDimensions_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetDimensions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRBFParams_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Parameters used by RBF solver */" },
		{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
		{ "ToolTip", "Parameters used by RBF solver" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRBFParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRBFParams>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_MedianMax_MetaData[] = {
		{ "Category", "RBFData" },
		{ "Comment", "/** Maximum distance used for median */" },
		{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
		{ "ToolTip", "Maximum distance used for median" },
		{ "UIMax", "90" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_MedianMax = { "MedianMax", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRBFParams, MedianMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_MedianMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_MedianMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_MedianMin_MetaData[] = {
		{ "Category", "RBFData" },
		{ "Comment", "/** Minimum distance used for median */" },
		{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
		{ "ToolTip", "Minimum distance used for median" },
		{ "UIMax", "90" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_MedianMin = { "MedianMin", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRBFParams, MedianMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_MedianMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_MedianMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_MedianReference_MetaData[] = {
		{ "Category", "RBFData" },
		{ "Comment", "/** Rotation or position of median (used for normalization) */" },
		{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
		{ "ToolTip", "Rotation or position of median (used for normalization)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_MedianReference = { "MedianReference", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRBFParams, MedianReference), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_MedianReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_MedianReference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_NormalizeMethod_MetaData[] = {
		{ "Category", "RBFData" },
		{ "Comment", "/** Method to use for normalizing the weight */" },
		{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
		{ "ToolTip", "Method to use for normalizing the weight" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_NormalizeMethod = { "NormalizeMethod", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRBFParams, NormalizeMethod), Z_Construct_UEnum_AnimGraphRuntime_ERBFNormalizeMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_NormalizeMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_NormalizeMethod_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_NormalizeMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_WeightThreshold_MetaData[] = {
		{ "Category", "RBFData" },
		{ "Comment", "/** Weight below which we shouldn't bother returning a contribution from a target */" },
		{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
		{ "ToolTip", "Weight below which we shouldn't bother returning a contribution from a target" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_WeightThreshold = { "WeightThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRBFParams, WeightThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_WeightThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_WeightThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_TwistAxis_MetaData[] = {
		{ "Category", "RBFData" },
		{ "Comment", "/** Axis to use when DistanceMethod is SwingAngle */" },
		{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
		{ "ToolTip", "Axis to use when DistanceMethod is SwingAngle" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_TwistAxis = { "TwistAxis", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRBFParams, TwistAxis), Z_Construct_UEnum_Engine_EBoneAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_TwistAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_TwistAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_DistanceMethod_MetaData[] = {
		{ "Category", "RBFData" },
		{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_DistanceMethod = { "DistanceMethod", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRBFParams, DistanceMethod), Z_Construct_UEnum_AnimGraphRuntime_ERBFDistanceMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_DistanceMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_DistanceMethod_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_DistanceMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_Function_MetaData[] = {
		{ "Category", "RBFData" },
		{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_Function = { "Function", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRBFParams, Function), Z_Construct_UEnum_AnimGraphRuntime_ERBFFunctionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_Function_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_Function_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_Function_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "RBFData" },
		{ "Comment", "/** Default radius for each target. \n\x09*/" },
		{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
		{ "ToolTip", "Default radius for each target." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRBFParams, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_SolverType_MetaData[] = {
		{ "Category", "RBFData" },
		{ "Comment", "/** Specifies the type of solver to use. The additive solver requires normalization, for the\n\x09\x09most part, whereas the Interpolative solver is not as reliant on it. The interpolative\n\x09\x09solver also has smoother blending, whereas the additive solver requires more targets but\n\x09\x09has a more precise control over the influence of each target.\n\x09*/" },
		{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
		{ "ToolTip", "Specifies the type of solver to use. The additive solver requires normalization, for the\n              most part, whereas the Interpolative solver is not as reliant on it. The interpolative\n              solver also has smoother blending, whereas the additive solver requires more targets but\n              has a more precise control over the influence of each target." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_SolverType = { "SolverType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRBFParams, SolverType), Z_Construct_UEnum_AnimGraphRuntime_ERBFSolverType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_SolverType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_SolverType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_SolverType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_TargetDimensions_MetaData[] = {
		{ "Comment", "/** How many dimensions input data has */" },
		{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
		{ "ToolTip", "How many dimensions input data has" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_TargetDimensions = { "TargetDimensions", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRBFParams, TargetDimensions), METADATA_PARAMS(Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_TargetDimensions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_TargetDimensions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRBFParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_MedianMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_MedianMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_MedianReference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_NormalizeMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_NormalizeMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_WeightThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_TwistAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_DistanceMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_DistanceMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_Function,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_Function_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_SolverType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_SolverType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_TargetDimensions,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRBFParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		nullptr,
		&NewStructOps,
		"RBFParams",
		sizeof(FRBFParams),
		alignof(FRBFParams),
		Z_Construct_UScriptStruct_FRBFParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRBFParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRBFParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRBFParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRBFParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRBFParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RBFParams"), sizeof(FRBFParams), Get_Z_Construct_UScriptStruct_FRBFParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRBFParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRBFParams_Hash() { return 2550695466U; }
class UScriptStruct* FRBFTarget::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FRBFTarget_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRBFTarget, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("RBFTarget"), sizeof(FRBFTarget), Get_Z_Construct_UScriptStruct_FRBFTarget_Hash());
	}
	return Singleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FRBFTarget>()
{
	return FRBFTarget::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRBFTarget(FRBFTarget::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("RBFTarget"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFRBFTarget
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFRBFTarget()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RBFTarget")),new UScriptStruct::TCppStructOps<FRBFTarget>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFRBFTarget;
	struct Z_Construct_UScriptStruct_FRBFTarget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FunctionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FunctionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DistanceMethod;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DistanceMethod_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bApplyCustomCurve_MetaData[];
#endif
		static void NewProp_bApplyCustomCurve_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bApplyCustomCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScaleFactor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRBFTarget_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Data about a particular target in the RBF, including scaling factor */" },
		{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
		{ "ToolTip", "Data about a particular target in the RBF, including scaling factor" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRBFTarget_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRBFTarget>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_FunctionType_MetaData[] = {
		{ "Category", "RBFData" },
		{ "Comment", "/** Override the falloff function used to smooth the distance from this target to\n\x09\x09the input. Ignored if the solver type is Interpolative. */" },
		{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
		{ "ToolTip", "Override the falloff function used to smooth the distance from this target to\n              the input. Ignored if the solver type is Interpolative." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_FunctionType = { "FunctionType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRBFTarget, FunctionType), Z_Construct_UEnum_AnimGraphRuntime_ERBFFunctionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_FunctionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_FunctionType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_FunctionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_DistanceMethod_MetaData[] = {
		{ "Category", "RBFData" },
		{ "Comment", "/** Override the distance method used to calculate the distance from this target to\n\x09\x09the input. Ignored if the solver type is Interpolative. */" },
		{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
		{ "ToolTip", "Override the distance method used to calculate the distance from this target to\n              the input. Ignored if the solver type is Interpolative." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_DistanceMethod = { "DistanceMethod", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRBFTarget, DistanceMethod), Z_Construct_UEnum_AnimGraphRuntime_ERBFDistanceMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_DistanceMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_DistanceMethod_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_DistanceMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_CustomCurve_MetaData[] = {
		{ "Category", "RBFData" },
		{ "Comment", "/** Custom curve to apply to activation of this target, if bApplyCustomCurve is true.\n\x09\x09Ignored if the solver type is Interpolative. */" },
		{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
		{ "ToolTip", "Custom curve to apply to activation of this target, if bApplyCustomCurve is true.\n              Ignored if the solver type is Interpolative." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_CustomCurve = { "CustomCurve", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRBFTarget, CustomCurve), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_CustomCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_CustomCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_bApplyCustomCurve_MetaData[] = {
		{ "Category", "RBFData" },
		{ "Comment", "/** Whether we want to apply an additional custom curve when activating this target. \n\x09    Ignored if the solver type is Interpolative. \n\x09*/" },
		{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
		{ "ToolTip", "Whether we want to apply an additional custom curve when activating this target.\n          Ignored if the solver type is Interpolative." },
	};
#endif
	void Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_bApplyCustomCurve_SetBit(void* Obj)
	{
		((FRBFTarget*)Obj)->bApplyCustomCurve = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_bApplyCustomCurve = { "bApplyCustomCurve", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRBFTarget), &Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_bApplyCustomCurve_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_bApplyCustomCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_bApplyCustomCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_ScaleFactor_MetaData[] = {
		{ "Category", "RBFData" },
		{ "Comment", "/** How large the influence of this target. */" },
		{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
		{ "ToolTip", "How large the influence of this target." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_ScaleFactor = { "ScaleFactor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRBFTarget, ScaleFactor), METADATA_PARAMS(Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_ScaleFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_ScaleFactor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRBFTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_FunctionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_FunctionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_DistanceMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_DistanceMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_CustomCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_bApplyCustomCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_ScaleFactor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRBFTarget_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FRBFEntry,
		&NewStructOps,
		"RBFTarget",
		sizeof(FRBFTarget),
		alignof(FRBFTarget),
		Z_Construct_UScriptStruct_FRBFTarget_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRBFTarget_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRBFTarget_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRBFTarget_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRBFTarget()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRBFTarget_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RBFTarget"), sizeof(FRBFTarget), Get_Z_Construct_UScriptStruct_FRBFTarget_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRBFTarget_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRBFTarget_Hash() { return 917964428U; }
class UScriptStruct* FRBFEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FRBFEntry_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRBFEntry, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("RBFEntry"), sizeof(FRBFEntry), Get_Z_Construct_UScriptStruct_FRBFEntry_Hash());
	}
	return Singleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FRBFEntry>()
{
	return FRBFEntry::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRBFEntry(FRBFEntry::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("RBFEntry"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFRBFEntry
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFRBFEntry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RBFEntry")),new UScriptStruct::TCppStructOps<FRBFEntry>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFRBFEntry;
	struct Z_Construct_UScriptStruct_FRBFEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Values_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRBFEntry_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct storing a particular entry within the RBF */" },
		{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
		{ "ToolTip", "Struct storing a particular entry within the RBF" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRBFEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRBFEntry>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRBFEntry_Statics::NewProp_Values_MetaData[] = {
		{ "Category", "RBFData" },
		{ "Comment", "/** Set of values for this target, size must be TargetDimensions  */" },
		{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
		{ "ToolTip", "Set of values for this target, size must be TargetDimensions" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRBFEntry_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRBFEntry, Values), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRBFEntry_Statics::NewProp_Values_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRBFEntry_Statics::NewProp_Values_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRBFEntry_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRBFEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRBFEntry_Statics::NewProp_Values,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRBFEntry_Statics::NewProp_Values_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRBFEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		nullptr,
		&NewStructOps,
		"RBFEntry",
		sizeof(FRBFEntry),
		alignof(FRBFEntry),
		Z_Construct_UScriptStruct_FRBFEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRBFEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRBFEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRBFEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRBFEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRBFEntry_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RBFEntry"), sizeof(FRBFEntry), Get_Z_Construct_UScriptStruct_FRBFEntry_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRBFEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRBFEntry_Hash() { return 3607484424U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
