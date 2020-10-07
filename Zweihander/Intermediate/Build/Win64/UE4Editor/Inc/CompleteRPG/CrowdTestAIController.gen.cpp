// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CompleteRPG/Public/CrowdTestAIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrowdTestAIController() {}
// Cross Module References
	COMPLETERPG_API UClass* Z_Construct_UClass_ACrowdTestAIController_NoRegister();
	COMPLETERPG_API UClass* Z_Construct_UClass_ACrowdTestAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_CompleteRPG();
	COMPLETERPG_API UClass* Z_Construct_UClass_UFlockCrowdFollowingComponent_NoRegister();
// End Cross Module References
	void ACrowdTestAIController::StaticRegisterNativesACrowdTestAIController()
	{
	}
	UClass* Z_Construct_UClass_ACrowdTestAIController_NoRegister()
	{
		return ACrowdTestAIController::StaticClass();
	}
	struct Z_Construct_UClass_ACrowdTestAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyFlockCrowdFollowingComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyFlockCrowdFollowingComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPlayerVisible_MetaData[];
#endif
		static void NewProp_bPlayerVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlayerVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerLookUpDown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayerLookUpDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerLookLeftRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayerLookLeftRight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACrowdTestAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_CompleteRPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrowdTestAIController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CrowdTestAIController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CrowdTestAIController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrowdTestAIController_Statics::NewProp_MyFlockCrowdFollowingComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CrowdTestAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACrowdTestAIController_Statics::NewProp_MyFlockCrowdFollowingComponent = { "MyFlockCrowdFollowingComponent", nullptr, (EPropertyFlags)0x0020080000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACrowdTestAIController, MyFlockCrowdFollowingComponent), Z_Construct_UClass_UFlockCrowdFollowingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACrowdTestAIController_Statics::NewProp_MyFlockCrowdFollowingComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACrowdTestAIController_Statics::NewProp_MyFlockCrowdFollowingComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrowdTestAIController_Statics::NewProp_bPlayerVisible_MetaData[] = {
		{ "Category", "Player Tracking" },
		{ "ModuleRelativePath", "Public/CrowdTestAIController.h" },
	};
#endif
	void Z_Construct_UClass_ACrowdTestAIController_Statics::NewProp_bPlayerVisible_SetBit(void* Obj)
	{
		((ACrowdTestAIController*)Obj)->bPlayerVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACrowdTestAIController_Statics::NewProp_bPlayerVisible = { "bPlayerVisible", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACrowdTestAIController), &Z_Construct_UClass_ACrowdTestAIController_Statics::NewProp_bPlayerVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACrowdTestAIController_Statics::NewProp_bPlayerVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACrowdTestAIController_Statics::NewProp_bPlayerVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrowdTestAIController_Statics::NewProp_PlayerLookUpDown_MetaData[] = {
		{ "Category", "Player Tracking" },
		{ "ModuleRelativePath", "Public/CrowdTestAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACrowdTestAIController_Statics::NewProp_PlayerLookUpDown = { "PlayerLookUpDown", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACrowdTestAIController, PlayerLookUpDown), METADATA_PARAMS(Z_Construct_UClass_ACrowdTestAIController_Statics::NewProp_PlayerLookUpDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACrowdTestAIController_Statics::NewProp_PlayerLookUpDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrowdTestAIController_Statics::NewProp_PlayerLookLeftRight_MetaData[] = {
		{ "Category", "Player Tracking" },
		{ "Comment", "// End of AActor interface\n" },
		{ "ModuleRelativePath", "Public/CrowdTestAIController.h" },
		{ "ToolTip", "End of AActor interface" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACrowdTestAIController_Statics::NewProp_PlayerLookLeftRight = { "PlayerLookLeftRight", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACrowdTestAIController, PlayerLookLeftRight), METADATA_PARAMS(Z_Construct_UClass_ACrowdTestAIController_Statics::NewProp_PlayerLookLeftRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACrowdTestAIController_Statics::NewProp_PlayerLookLeftRight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACrowdTestAIController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrowdTestAIController_Statics::NewProp_MyFlockCrowdFollowingComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrowdTestAIController_Statics::NewProp_bPlayerVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrowdTestAIController_Statics::NewProp_PlayerLookUpDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrowdTestAIController_Statics::NewProp_PlayerLookLeftRight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACrowdTestAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACrowdTestAIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACrowdTestAIController_Statics::ClassParams = {
		&ACrowdTestAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACrowdTestAIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACrowdTestAIController_Statics::PropPointers),
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACrowdTestAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACrowdTestAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACrowdTestAIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACrowdTestAIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACrowdTestAIController, 1334138432);
	template<> COMPLETERPG_API UClass* StaticClass<ACrowdTestAIController>()
	{
		return ACrowdTestAIController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACrowdTestAIController(Z_Construct_UClass_ACrowdTestAIController, &ACrowdTestAIController::StaticClass, TEXT("/Script/CompleteRPG"), TEXT("ACrowdTestAIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACrowdTestAIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
