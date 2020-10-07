// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CompleteRPG/Public/CrowdTestChar.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrowdTestChar() {}
// Cross Module References
	COMPLETERPG_API UClass* Z_Construct_UClass_ACrowdTestChar_NoRegister();
	COMPLETERPG_API UClass* Z_Construct_UClass_ACrowdTestChar();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_CompleteRPG();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream();
	COMPLETERPG_API UClass* Z_Construct_UClass_AFlockManager_NoRegister();
// End Cross Module References
	void ACrowdTestChar::StaticRegisterNativesACrowdTestChar()
	{
	}
	UClass* Z_Construct_UClass_ACrowdTestChar_NoRegister()
	{
		return ACrowdTestChar::StaticClass();
	}
	struct Z_Construct_UClass_ACrowdTestChar_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Antlers_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Antlers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AntlerMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AntlerMeshes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HindScaleVariance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HindScaleVariance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HindBaseScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HindBaseScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HartScaleVariance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HartScaleVariance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HartBaseScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HartBaseScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMale_MetaData[];
#endif
		static void NewProp_bMale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomStream_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RandomStream;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlockManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FlockManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoRegisterWithFlockManager_MetaData[];
#endif
		static void NewProp_bAutoRegisterWithFlockManager_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoRegisterWithFlockManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACrowdTestChar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_CompleteRPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrowdTestChar_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** One agent in a crowd */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CrowdTestChar.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CrowdTestChar.h" },
		{ "ToolTip", "One agent in a crowd" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrowdTestChar_Statics::NewProp_Antlers_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CrowdTestChar.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACrowdTestChar_Statics::NewProp_Antlers = { "Antlers", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACrowdTestChar, Antlers), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACrowdTestChar_Statics::NewProp_Antlers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACrowdTestChar_Statics::NewProp_Antlers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrowdTestChar_Statics::NewProp_AntlerMeshes_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrowdTestChar.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACrowdTestChar_Statics::NewProp_AntlerMeshes = { "AntlerMeshes", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(AntlerMeshes, ACrowdTestChar), STRUCT_OFFSET(ACrowdTestChar, AntlerMeshes), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACrowdTestChar_Statics::NewProp_AntlerMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACrowdTestChar_Statics::NewProp_AntlerMeshes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrowdTestChar_Statics::NewProp_SkeletalMeshes_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrowdTestChar.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACrowdTestChar_Statics::NewProp_SkeletalMeshes = { "SkeletalMeshes", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(SkeletalMeshes, ACrowdTestChar), STRUCT_OFFSET(ACrowdTestChar, SkeletalMeshes), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACrowdTestChar_Statics::NewProp_SkeletalMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACrowdTestChar_Statics::NewProp_SkeletalMeshes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrowdTestChar_Statics::NewProp_HindScaleVariance_MetaData[] = {
		{ "Category", "Scale Variation" },
		{ "ModuleRelativePath", "Public/CrowdTestChar.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACrowdTestChar_Statics::NewProp_HindScaleVariance = { "HindScaleVariance", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACrowdTestChar, HindScaleVariance), METADATA_PARAMS(Z_Construct_UClass_ACrowdTestChar_Statics::NewProp_HindScaleVariance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACrowdTestChar_Statics::NewProp_HindScaleVariance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrowdTestChar_Statics::NewProp_HindBaseScale_MetaData[] = {
		{ "Category", "Scale Variation" },
		{ "ModuleRelativePath", "Public/CrowdTestChar.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACrowdTestChar_Statics::NewProp_HindBaseScale = { "HindBaseScale", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACrowdTestChar, HindBaseScale), METADATA_PARAMS(Z_Construct_UClass_ACrowdTestChar_Statics::NewProp_HindBaseScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACrowdTestChar_Statics::NewProp_HindBaseScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrowdTestChar_Statics::NewProp_HartScaleVariance_MetaData[] = {
		{ "Category", "Scale Variation" },
		{ "ModuleRelativePath", "Public/CrowdTestChar.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACrowdTestChar_Statics::NewProp_HartScaleVariance = { "HartScaleVariance", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACrowdTestChar, HartScaleVariance), METADATA_PARAMS(Z_Construct_UClass_ACrowdTestChar_Statics::NewProp_HartScaleVariance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACrowdTestChar_Statics::NewProp_HartScaleVariance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrowdTestChar_Statics::NewProp_HartBaseScale_MetaData[] = {
		{ "Category", "Scale Variation" },
		{ "ModuleRelativePath", "Public/CrowdTestChar.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACrowdTestChar_Statics::NewProp_HartBaseScale = { "HartBaseScale", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACrowdTestChar, HartBaseScale), METADATA_PARAMS(Z_Construct_UClass_ACrowdTestChar_Statics::NewProp_HartBaseScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACrowdTestChar_Statics::NewProp_HartBaseScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrowdTestChar_Statics::NewProp_bMale_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrowdTestChar.h" },
	};
#endif
	void Z_Construct_UClass_ACrowdTestChar_Statics::NewProp_bMale_SetBit(void* Obj)
	{
		((ACrowdTestChar*)Obj)->bMale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACrowdTestChar_Statics::NewProp_bMale = { "bMale", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACrowdTestChar), &Z_Construct_UClass_ACrowdTestChar_Statics::NewProp_bMale_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACrowdTestChar_Statics::NewProp_bMale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACrowdTestChar_Statics::NewProp_bMale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrowdTestChar_Statics::NewProp_RandomStream_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrowdTestChar.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACrowdTestChar_Statics::NewProp_RandomStream = { "RandomStream", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACrowdTestChar, RandomStream), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(Z_Construct_UClass_ACrowdTestChar_Statics::NewProp_RandomStream_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACrowdTestChar_Statics::NewProp_RandomStream_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrowdTestChar_Statics::NewProp_FlockManager_MetaData[] = {
		{ "Category", "Flock" },
		{ "Comment", "/** Flock Manager to register to (only if bAutoRegisterWithFlockManager = true) */" },
		{ "ModuleRelativePath", "Public/CrowdTestChar.h" },
		{ "ToolTip", "Flock Manager to register to (only if bAutoRegisterWithFlockManager = true)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACrowdTestChar_Statics::NewProp_FlockManager = { "FlockManager", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACrowdTestChar, FlockManager), Z_Construct_UClass_AFlockManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACrowdTestChar_Statics::NewProp_FlockManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACrowdTestChar_Statics::NewProp_FlockManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrowdTestChar_Statics::NewProp_bAutoRegisterWithFlockManager_MetaData[] = {
		{ "Category", "Flock" },
		{ "Comment", "/** Auto register with the specified flock manager, or to a specific flock manager if specified */" },
		{ "ModuleRelativePath", "Public/CrowdTestChar.h" },
		{ "ToolTip", "Auto register with the specified flock manager, or to a specific flock manager if specified" },
	};
#endif
	void Z_Construct_UClass_ACrowdTestChar_Statics::NewProp_bAutoRegisterWithFlockManager_SetBit(void* Obj)
	{
		((ACrowdTestChar*)Obj)->bAutoRegisterWithFlockManager = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACrowdTestChar_Statics::NewProp_bAutoRegisterWithFlockManager = { "bAutoRegisterWithFlockManager", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACrowdTestChar), &Z_Construct_UClass_ACrowdTestChar_Statics::NewProp_bAutoRegisterWithFlockManager_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACrowdTestChar_Statics::NewProp_bAutoRegisterWithFlockManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACrowdTestChar_Statics::NewProp_bAutoRegisterWithFlockManager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACrowdTestChar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrowdTestChar_Statics::NewProp_Antlers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrowdTestChar_Statics::NewProp_AntlerMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrowdTestChar_Statics::NewProp_SkeletalMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrowdTestChar_Statics::NewProp_HindScaleVariance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrowdTestChar_Statics::NewProp_HindBaseScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrowdTestChar_Statics::NewProp_HartScaleVariance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrowdTestChar_Statics::NewProp_HartBaseScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrowdTestChar_Statics::NewProp_bMale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrowdTestChar_Statics::NewProp_RandomStream,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrowdTestChar_Statics::NewProp_FlockManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrowdTestChar_Statics::NewProp_bAutoRegisterWithFlockManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACrowdTestChar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACrowdTestChar>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACrowdTestChar_Statics::ClassParams = {
		&ACrowdTestChar::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACrowdTestChar_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACrowdTestChar_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACrowdTestChar_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACrowdTestChar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACrowdTestChar()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACrowdTestChar_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACrowdTestChar, 3680004388);
	template<> COMPLETERPG_API UClass* StaticClass<ACrowdTestChar>()
	{
		return ACrowdTestChar::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACrowdTestChar(Z_Construct_UClass_ACrowdTestChar, &ACrowdTestChar::StaticClass, TEXT("/Script/CompleteRPG"), TEXT("ACrowdTestChar"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACrowdTestChar);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
