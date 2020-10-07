// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CompleteRPG/Public/Raven.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRaven() {}
// Cross Module References
	COMPLETERPG_API UClass* Z_Construct_UClass_ARaven_NoRegister();
	COMPLETERPG_API UClass* Z_Construct_UClass_ARaven();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CompleteRPG();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void ARaven::StaticRegisterNativesARaven()
	{
	}
	UClass* Z_Construct_UClass_ARaven_NoRegister()
	{
		return ARaven::StaticClass();
	}
	struct Z_Construct_UClass_ARaven_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BirdMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BirdMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WindStrength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindDirectionNormalized_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WindDirectionNormalized;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YawFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_YawFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnAngleRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TurnAngleRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialRotationFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitialRotationFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLocRandomRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetLocRandomRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomSeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RandomSeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseRandomSeed_MetaData[];
#endif
		static void NewProp_bUseRandomSeed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseRandomSeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARaven_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CompleteRPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARaven_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Raven.h" },
		{ "ModuleRelativePath", "Public/Raven.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARaven_Statics::NewProp_BirdMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Raven.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARaven_Statics::NewProp_BirdMesh = { "BirdMesh", nullptr, (EPropertyFlags)0x001000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARaven, BirdMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARaven_Statics::NewProp_BirdMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARaven_Statics::NewProp_BirdMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARaven_Statics::NewProp_WindStrength_MetaData[] = {
		{ "Category", "Raven" },
		{ "ModuleRelativePath", "Public/Raven.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARaven_Statics::NewProp_WindStrength = { "WindStrength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARaven, WindStrength), METADATA_PARAMS(Z_Construct_UClass_ARaven_Statics::NewProp_WindStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARaven_Statics::NewProp_WindStrength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARaven_Statics::NewProp_WindDirectionNormalized_MetaData[] = {
		{ "Category", "Raven" },
		{ "ModuleRelativePath", "Public/Raven.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARaven_Statics::NewProp_WindDirectionNormalized = { "WindDirectionNormalized", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARaven, WindDirectionNormalized), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ARaven_Statics::NewProp_WindDirectionNormalized_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARaven_Statics::NewProp_WindDirectionNormalized_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARaven_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Raven" },
		{ "Comment", "/* The Speed the bird flys around */" },
		{ "ModuleRelativePath", "Public/Raven.h" },
		{ "ToolTip", "The Speed the bird flys around" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARaven_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARaven, Speed), METADATA_PARAMS(Z_Construct_UClass_ARaven_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARaven_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARaven_Statics::NewProp_YawFactor_MetaData[] = {
		{ "Category", "Raven" },
		{ "ModuleRelativePath", "Public/Raven.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARaven_Statics::NewProp_YawFactor = { "YawFactor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARaven, YawFactor), METADATA_PARAMS(Z_Construct_UClass_ARaven_Statics::NewProp_YawFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARaven_Statics::NewProp_YawFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARaven_Statics::NewProp_TurnAngleRange_MetaData[] = {
		{ "Category", "Raven" },
		{ "Comment", "/* Range of the angle the bird titles */" },
		{ "ModuleRelativePath", "Public/Raven.h" },
		{ "ToolTip", "Range of the angle the bird titles" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARaven_Statics::NewProp_TurnAngleRange = { "TurnAngleRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARaven, TurnAngleRange), METADATA_PARAMS(Z_Construct_UClass_ARaven_Statics::NewProp_TurnAngleRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARaven_Statics::NewProp_TurnAngleRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARaven_Statics::NewProp_TargetThreshold_MetaData[] = {
		{ "Category", "Raven" },
		{ "ModuleRelativePath", "Public/Raven.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARaven_Statics::NewProp_TargetThreshold = { "TargetThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARaven, TargetThreshold), METADATA_PARAMS(Z_Construct_UClass_ARaven_Statics::NewProp_TargetThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARaven_Statics::NewProp_TargetThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARaven_Statics::NewProp_InitialRotationFactor_MetaData[] = {
		{ "Category", "Raven" },
		{ "ModuleRelativePath", "Public/Raven.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARaven_Statics::NewProp_InitialRotationFactor = { "InitialRotationFactor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARaven, InitialRotationFactor), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ARaven_Statics::NewProp_InitialRotationFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARaven_Statics::NewProp_InitialRotationFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARaven_Statics::NewProp_TargetLocRandomRange_MetaData[] = {
		{ "Category", "Raven" },
		{ "Comment", "/* Range of the random bird target destination relative to initial position */" },
		{ "ModuleRelativePath", "Public/Raven.h" },
		{ "ToolTip", "Range of the random bird target destination relative to initial position" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARaven_Statics::NewProp_TargetLocRandomRange = { "TargetLocRandomRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARaven, TargetLocRandomRange), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ARaven_Statics::NewProp_TargetLocRandomRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARaven_Statics::NewProp_TargetLocRandomRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARaven_Statics::NewProp_RotationRate_MetaData[] = {
		{ "Category", "Raven" },
		{ "ModuleRelativePath", "Public/Raven.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARaven_Statics::NewProp_RotationRate = { "RotationRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARaven, RotationRate), METADATA_PARAMS(Z_Construct_UClass_ARaven_Statics::NewProp_RotationRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARaven_Statics::NewProp_RotationRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARaven_Statics::NewProp_RandomSeed_MetaData[] = {
		{ "Category", "Raven" },
		{ "ModuleRelativePath", "Public/Raven.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARaven_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARaven, RandomSeed), METADATA_PARAMS(Z_Construct_UClass_ARaven_Statics::NewProp_RandomSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARaven_Statics::NewProp_RandomSeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARaven_Statics::NewProp_bUseRandomSeed_MetaData[] = {
		{ "Category", "Raven" },
		{ "ModuleRelativePath", "Public/Raven.h" },
	};
#endif
	void Z_Construct_UClass_ARaven_Statics::NewProp_bUseRandomSeed_SetBit(void* Obj)
	{
		((ARaven*)Obj)->bUseRandomSeed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARaven_Statics::NewProp_bUseRandomSeed = { "bUseRandomSeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARaven), &Z_Construct_UClass_ARaven_Statics::NewProp_bUseRandomSeed_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARaven_Statics::NewProp_bUseRandomSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARaven_Statics::NewProp_bUseRandomSeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARaven_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARaven_Statics::NewProp_BirdMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARaven_Statics::NewProp_WindStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARaven_Statics::NewProp_WindDirectionNormalized,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARaven_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARaven_Statics::NewProp_YawFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARaven_Statics::NewProp_TurnAngleRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARaven_Statics::NewProp_TargetThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARaven_Statics::NewProp_InitialRotationFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARaven_Statics::NewProp_TargetLocRandomRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARaven_Statics::NewProp_RotationRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARaven_Statics::NewProp_RandomSeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARaven_Statics::NewProp_bUseRandomSeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARaven_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARaven>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARaven_Statics::ClassParams = {
		&ARaven::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARaven_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARaven_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARaven_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARaven_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARaven()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARaven_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARaven, 840184079);
	template<> COMPLETERPG_API UClass* StaticClass<ARaven>()
	{
		return ARaven::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARaven(Z_Construct_UClass_ARaven, &ARaven::StaticClass, TEXT("/Script/CompleteRPG"), TEXT("ARaven"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARaven);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
