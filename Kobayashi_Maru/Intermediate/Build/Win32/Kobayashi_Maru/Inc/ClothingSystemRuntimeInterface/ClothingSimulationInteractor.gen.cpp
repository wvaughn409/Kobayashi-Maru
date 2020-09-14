// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClothingSystemRuntimeInterface/Public/ClothingSimulationInteractor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothingSimulationInteractor() {}
// Cross Module References
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothingSimulationInteractor_NoRegister();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothingSimulationInteractor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(UClothingSimulationInteractor::execDisableGravityOverride)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableGravityOverride();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UClothingSimulationInteractor::execEnableGravityOverride)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InVector);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableGravityOverride(Z_Param_Out_InVector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UClothingSimulationInteractor::execSetAnimDriveSpringStiffness)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InStiffness);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAnimDriveSpringStiffness(Z_Param_InStiffness);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UClothingSimulationInteractor::execClothConfigUpdated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClothConfigUpdated();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UClothingSimulationInteractor::execPhysicsAssetUpdated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PhysicsAssetUpdated();
		P_NATIVE_END;
	}
	void UClothingSimulationInteractor::StaticRegisterNativesUClothingSimulationInteractor()
	{
		UClass* Class = UClothingSimulationInteractor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClothConfigUpdated", &UClothingSimulationInteractor::execClothConfigUpdated },
			{ "DisableGravityOverride", &UClothingSimulationInteractor::execDisableGravityOverride },
			{ "EnableGravityOverride", &UClothingSimulationInteractor::execEnableGravityOverride },
			{ "PhysicsAssetUpdated", &UClothingSimulationInteractor::execPhysicsAssetUpdated },
			{ "SetAnimDriveSpringStiffness", &UClothingSimulationInteractor::execSetAnimDriveSpringStiffness },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UClothingSimulationInteractor_ClothConfigUpdated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClothingSimulationInteractor_ClothConfigUpdated_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "Comment", "// Called to update the cloth config without restarting the simulation\n" },
		{ "ModuleRelativePath", "Public/ClothingSimulationInteractor.h" },
		{ "ToolTip", "Called to update the cloth config without restarting the simulation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UClothingSimulationInteractor_ClothConfigUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClothingSimulationInteractor, nullptr, "ClothConfigUpdated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UClothingSimulationInteractor_ClothConfigUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_ClothConfigUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UClothingSimulationInteractor_ClothConfigUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UClothingSimulationInteractor_ClothConfigUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UClothingSimulationInteractor_DisableGravityOverride_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClothingSimulationInteractor_DisableGravityOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "Comment", "// Disable any currently set gravity override\n" },
		{ "ModuleRelativePath", "Public/ClothingSimulationInteractor.h" },
		{ "ToolTip", "Disable any currently set gravity override" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UClothingSimulationInteractor_DisableGravityOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClothingSimulationInteractor, nullptr, "DisableGravityOverride", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UClothingSimulationInteractor_DisableGravityOverride_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_DisableGravityOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UClothingSimulationInteractor_DisableGravityOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UClothingSimulationInteractor_DisableGravityOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UClothingSimulationInteractor_EnableGravityOverride_Statics
	{
		struct ClothingSimulationInteractor_eventEnableGravityOverride_Parms
		{
			FVector InVector;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InVector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClothingSimulationInteractor_EnableGravityOverride_Statics::NewProp_InVector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UClothingSimulationInteractor_EnableGravityOverride_Statics::NewProp_InVector = { "InVector", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ClothingSimulationInteractor_eventEnableGravityOverride_Parms, InVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UClothingSimulationInteractor_EnableGravityOverride_Statics::NewProp_InVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_EnableGravityOverride_Statics::NewProp_InVector_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClothingSimulationInteractor_EnableGravityOverride_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClothingSimulationInteractor_EnableGravityOverride_Statics::NewProp_InVector,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClothingSimulationInteractor_EnableGravityOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "Comment", "// Set a new gravity override and enable the override\n" },
		{ "ModuleRelativePath", "Public/ClothingSimulationInteractor.h" },
		{ "ToolTip", "Set a new gravity override and enable the override" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UClothingSimulationInteractor_EnableGravityOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClothingSimulationInteractor, nullptr, "EnableGravityOverride", nullptr, nullptr, sizeof(ClothingSimulationInteractor_eventEnableGravityOverride_Parms), Z_Construct_UFunction_UClothingSimulationInteractor_EnableGravityOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_EnableGravityOverride_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UClothingSimulationInteractor_EnableGravityOverride_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_EnableGravityOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UClothingSimulationInteractor_EnableGravityOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UClothingSimulationInteractor_EnableGravityOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UClothingSimulationInteractor_PhysicsAssetUpdated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClothingSimulationInteractor_PhysicsAssetUpdated_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "Comment", "// Called to update collision status without restarting the simulation\n" },
		{ "ModuleRelativePath", "Public/ClothingSimulationInteractor.h" },
		{ "ToolTip", "Called to update collision status without restarting the simulation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UClothingSimulationInteractor_PhysicsAssetUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClothingSimulationInteractor, nullptr, "PhysicsAssetUpdated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UClothingSimulationInteractor_PhysicsAssetUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_PhysicsAssetUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UClothingSimulationInteractor_PhysicsAssetUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UClothingSimulationInteractor_PhysicsAssetUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UClothingSimulationInteractor_SetAnimDriveSpringStiffness_Statics
	{
		struct ClothingSimulationInteractor_eventSetAnimDriveSpringStiffness_Parms
		{
			float InStiffness;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InStiffness;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UClothingSimulationInteractor_SetAnimDriveSpringStiffness_Statics::NewProp_InStiffness = { "InStiffness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ClothingSimulationInteractor_eventSetAnimDriveSpringStiffness_Parms, InStiffness), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClothingSimulationInteractor_SetAnimDriveSpringStiffness_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClothingSimulationInteractor_SetAnimDriveSpringStiffness_Statics::NewProp_InStiffness,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClothingSimulationInteractor_SetAnimDriveSpringStiffness_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "Comment", "// Set the stiffness of the spring force for the animation drive\n" },
		{ "ModuleRelativePath", "Public/ClothingSimulationInteractor.h" },
		{ "ToolTip", "Set the stiffness of the spring force for the animation drive" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UClothingSimulationInteractor_SetAnimDriveSpringStiffness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClothingSimulationInteractor, nullptr, "SetAnimDriveSpringStiffness", nullptr, nullptr, sizeof(ClothingSimulationInteractor_eventSetAnimDriveSpringStiffness_Parms), Z_Construct_UFunction_UClothingSimulationInteractor_SetAnimDriveSpringStiffness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_SetAnimDriveSpringStiffness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UClothingSimulationInteractor_SetAnimDriveSpringStiffness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_SetAnimDriveSpringStiffness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UClothingSimulationInteractor_SetAnimDriveSpringStiffness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UClothingSimulationInteractor_SetAnimDriveSpringStiffness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UClothingSimulationInteractor_NoRegister()
	{
		return UClothingSimulationInteractor::StaticClass();
	}
	struct Z_Construct_UClass_UClothingSimulationInteractor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClothingSimulationInteractor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UClothingSimulationInteractor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UClothingSimulationInteractor_ClothConfigUpdated, "ClothConfigUpdated" }, // 3670234292
		{ &Z_Construct_UFunction_UClothingSimulationInteractor_DisableGravityOverride, "DisableGravityOverride" }, // 1639602375
		{ &Z_Construct_UFunction_UClothingSimulationInteractor_EnableGravityOverride, "EnableGravityOverride" }, // 4222943995
		{ &Z_Construct_UFunction_UClothingSimulationInteractor_PhysicsAssetUpdated, "PhysicsAssetUpdated" }, // 2884637067
		{ &Z_Construct_UFunction_UClothingSimulationInteractor_SetAnimDriveSpringStiffness, "SetAnimDriveSpringStiffness" }, // 3535293056
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothingSimulationInteractor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * If a clothing simulation is able to be interacted with at runtime then a derived\n * interactor should be created, and at least the basic API implemented for that\n * simulation.\n * Only write to the simulation and context during the call to Sync, as that is\n * guaranteed to be a safe place to access this data.\n */" },
		{ "IncludePath", "ClothingSimulationInteractor.h" },
		{ "ModuleRelativePath", "Public/ClothingSimulationInteractor.h" },
		{ "ToolTip", "If a clothing simulation is able to be interacted with at runtime then a derived\ninteractor should be created, and at least the basic API implemented for that\nsimulation.\nOnly write to the simulation and context during the call to Sync, as that is\nguaranteed to be a safe place to access this data." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClothingSimulationInteractor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothingSimulationInteractor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UClothingSimulationInteractor_Statics::ClassParams = {
		&UClothingSimulationInteractor::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UClothingSimulationInteractor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClothingSimulationInteractor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClothingSimulationInteractor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UClothingSimulationInteractor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UClothingSimulationInteractor, 3411279448);
	template<> CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* StaticClass<UClothingSimulationInteractor>()
	{
		return UClothingSimulationInteractor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UClothingSimulationInteractor(Z_Construct_UClass_UClothingSimulationInteractor, &UClothingSimulationInteractor::StaticClass, TEXT("/Script/ClothingSystemRuntimeInterface"), TEXT("UClothingSimulationInteractor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothingSimulationInteractor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
