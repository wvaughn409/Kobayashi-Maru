// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/SkeletalMeshActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeletalMeshActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ASkeletalMeshActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ASkeletalMeshActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMatineeAnimInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASkeletalMeshActor::execOnRep_ReplicatedMaterial1)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ReplicatedMaterial1();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASkeletalMeshActor::execOnRep_ReplicatedMaterial0)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ReplicatedMaterial0();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASkeletalMeshActor::execOnRep_ReplicatedPhysAsset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ReplicatedPhysAsset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASkeletalMeshActor::execOnRep_ReplicatedMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ReplicatedMesh();
		P_NATIVE_END;
	}
	void ASkeletalMeshActor::StaticRegisterNativesASkeletalMeshActor()
	{
		UClass* Class = ASkeletalMeshActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_ReplicatedMaterial0", &ASkeletalMeshActor::execOnRep_ReplicatedMaterial0 },
			{ "OnRep_ReplicatedMaterial1", &ASkeletalMeshActor::execOnRep_ReplicatedMaterial1 },
			{ "OnRep_ReplicatedMesh", &ASkeletalMeshActor::execOnRep_ReplicatedMesh },
			{ "OnRep_ReplicatedPhysAsset", &ASkeletalMeshActor::execOnRep_ReplicatedPhysAsset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASkeletalMeshActor_OnRep_ReplicatedMaterial0_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASkeletalMeshActor_OnRep_ReplicatedMaterial0_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/SkeletalMeshActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASkeletalMeshActor_OnRep_ReplicatedMaterial0_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASkeletalMeshActor, nullptr, "OnRep_ReplicatedMaterial0", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASkeletalMeshActor_OnRep_ReplicatedMaterial0_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASkeletalMeshActor_OnRep_ReplicatedMaterial0_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASkeletalMeshActor_OnRep_ReplicatedMaterial0()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASkeletalMeshActor_OnRep_ReplicatedMaterial0_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASkeletalMeshActor_OnRep_ReplicatedMaterial1_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASkeletalMeshActor_OnRep_ReplicatedMaterial1_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/SkeletalMeshActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASkeletalMeshActor_OnRep_ReplicatedMaterial1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASkeletalMeshActor, nullptr, "OnRep_ReplicatedMaterial1", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASkeletalMeshActor_OnRep_ReplicatedMaterial1_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASkeletalMeshActor_OnRep_ReplicatedMaterial1_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASkeletalMeshActor_OnRep_ReplicatedMaterial1()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASkeletalMeshActor_OnRep_ReplicatedMaterial1_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASkeletalMeshActor_OnRep_ReplicatedMesh_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASkeletalMeshActor_OnRep_ReplicatedMesh_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Replication Notification Callbacks */" },
		{ "ModuleRelativePath", "Classes/Animation/SkeletalMeshActor.h" },
		{ "ToolTip", "Replication Notification Callbacks" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASkeletalMeshActor_OnRep_ReplicatedMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASkeletalMeshActor, nullptr, "OnRep_ReplicatedMesh", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASkeletalMeshActor_OnRep_ReplicatedMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASkeletalMeshActor_OnRep_ReplicatedMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASkeletalMeshActor_OnRep_ReplicatedMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASkeletalMeshActor_OnRep_ReplicatedMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASkeletalMeshActor_OnRep_ReplicatedPhysAsset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASkeletalMeshActor_OnRep_ReplicatedPhysAsset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/SkeletalMeshActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASkeletalMeshActor_OnRep_ReplicatedPhysAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASkeletalMeshActor, nullptr, "OnRep_ReplicatedPhysAsset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASkeletalMeshActor_OnRep_ReplicatedPhysAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASkeletalMeshActor_OnRep_ReplicatedPhysAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASkeletalMeshActor_OnRep_ReplicatedPhysAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASkeletalMeshActor_OnRep_ReplicatedPhysAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASkeletalMeshActor_NoRegister()
	{
		return ASkeletalMeshActor::StaticClass();
	}
	struct Z_Construct_UClass_ASkeletalMeshActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicatedMaterial1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReplicatedMaterial1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicatedMaterial0_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReplicatedMaterial0;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicatedPhysAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReplicatedPhysAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicatedMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReplicatedMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWakeOnLevelStart_MetaData[];
#endif
		static void NewProp_bWakeOnLevelStart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWakeOnLevelStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldDoAnimNotifies_MetaData[];
#endif
		static void NewProp_bShouldDoAnimNotifies_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldDoAnimNotifies;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASkeletalMeshActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASkeletalMeshActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASkeletalMeshActor_OnRep_ReplicatedMaterial0, "OnRep_ReplicatedMaterial0" }, // 1452091104
		{ &Z_Construct_UFunction_ASkeletalMeshActor_OnRep_ReplicatedMaterial1, "OnRep_ReplicatedMaterial1" }, // 1049650234
		{ &Z_Construct_UFunction_ASkeletalMeshActor_OnRep_ReplicatedMesh, "OnRep_ReplicatedMesh" }, // 411431709
		{ &Z_Construct_UFunction_ASkeletalMeshActor_OnRep_ReplicatedPhysAsset, "OnRep_ReplicatedPhysAsset" }, // 4258148730
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASkeletalMeshActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ChildCanTick", "" },
		{ "ClassGroupNames", "ISkeletalMeshes" },
		{ "Comment", "/**\n * SkeletalMeshActor is an instance of a USkeletalMesh in the world.\n * Skeletal meshes are deformable meshes that can be animated and change their geometry at run-time.\n * Skeletal meshes dragged into the level from the Content Browser are automatically converted to StaticMeshActors.\n * \n * @see https://docs.unrealengine.com/latest/INT/Engine/Content/Types/SkeletalMeshes/\n * @see USkeletalMesh\n */" },
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "Animation/SkeletalMeshActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "IsConversionRoot", "true" },
		{ "ModuleRelativePath", "Classes/Animation/SkeletalMeshActor.h" },
		{ "ToolTip", "SkeletalMeshActor is an instance of a USkeletalMesh in the world.\nSkeletal meshes are deformable meshes that can be animated and change their geometry at run-time.\nSkeletal meshes dragged into the level from the Content Browser are automatically converted to StaticMeshActors.\n\n@see https://docs.unrealengine.com/latest/INT/Engine/Content/Types/SkeletalMeshes/\n@see USkeletalMesh" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASkeletalMeshActor_Statics::NewProp_ReplicatedMaterial1_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/SkeletalMeshActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASkeletalMeshActor_Statics::NewProp_ReplicatedMaterial1 = { "ReplicatedMaterial1", "OnRep_ReplicatedMaterial1", (EPropertyFlags)0x0010000100000020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASkeletalMeshActor, ReplicatedMaterial1), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASkeletalMeshActor_Statics::NewProp_ReplicatedMaterial1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASkeletalMeshActor_Statics::NewProp_ReplicatedMaterial1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASkeletalMeshActor_Statics::NewProp_ReplicatedMaterial0_MetaData[] = {
		{ "Comment", "/** used to replicate the material in index 0 */" },
		{ "ModuleRelativePath", "Classes/Animation/SkeletalMeshActor.h" },
		{ "ToolTip", "used to replicate the material in index 0" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASkeletalMeshActor_Statics::NewProp_ReplicatedMaterial0 = { "ReplicatedMaterial0", "OnRep_ReplicatedMaterial0", (EPropertyFlags)0x0010000100000020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASkeletalMeshActor, ReplicatedMaterial0), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASkeletalMeshActor_Statics::NewProp_ReplicatedMaterial0_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASkeletalMeshActor_Statics::NewProp_ReplicatedMaterial0_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASkeletalMeshActor_Statics::NewProp_ReplicatedPhysAsset_MetaData[] = {
		{ "Comment", "/** Used to replicate physics asset to clients */" },
		{ "ModuleRelativePath", "Classes/Animation/SkeletalMeshActor.h" },
		{ "ToolTip", "Used to replicate physics asset to clients" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASkeletalMeshActor_Statics::NewProp_ReplicatedPhysAsset = { "ReplicatedPhysAsset", "OnRep_ReplicatedPhysAsset", (EPropertyFlags)0x0010000100002020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASkeletalMeshActor, ReplicatedPhysAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASkeletalMeshActor_Statics::NewProp_ReplicatedPhysAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASkeletalMeshActor_Statics::NewProp_ReplicatedPhysAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASkeletalMeshActor_Statics::NewProp_ReplicatedMesh_MetaData[] = {
		{ "Comment", "/** Used to replicate mesh to clients */" },
		{ "ModuleRelativePath", "Classes/Animation/SkeletalMeshActor.h" },
		{ "ToolTip", "Used to replicate mesh to clients" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASkeletalMeshActor_Statics::NewProp_ReplicatedMesh = { "ReplicatedMesh", "OnRep_ReplicatedMesh", (EPropertyFlags)0x0010000100002020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASkeletalMeshActor, ReplicatedMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASkeletalMeshActor_Statics::NewProp_ReplicatedMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASkeletalMeshActor_Statics::NewProp_ReplicatedMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASkeletalMeshActor_Statics::NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SkeletalMeshActor" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Mesh,Components|SkeletalMesh,Animation,Physics" },
		{ "ModuleRelativePath", "Classes/Animation/SkeletalMeshActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASkeletalMeshActor_Statics::NewProp_SkeletalMeshComponent = { "SkeletalMeshComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASkeletalMeshActor, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASkeletalMeshActor_Statics::NewProp_SkeletalMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASkeletalMeshActor_Statics::NewProp_SkeletalMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASkeletalMeshActor_Statics::NewProp_bWakeOnLevelStart_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/SkeletalMeshActor.h" },
	};
#endif
	void Z_Construct_UClass_ASkeletalMeshActor_Statics::NewProp_bWakeOnLevelStart_SetBit(void* Obj)
	{
		((ASkeletalMeshActor*)Obj)->bWakeOnLevelStart_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASkeletalMeshActor_Statics::NewProp_bWakeOnLevelStart = { "bWakeOnLevelStart", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ASkeletalMeshActor), &Z_Construct_UClass_ASkeletalMeshActor_Statics::NewProp_bWakeOnLevelStart_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASkeletalMeshActor_Statics::NewProp_bWakeOnLevelStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASkeletalMeshActor_Statics::NewProp_bWakeOnLevelStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASkeletalMeshActor_Statics::NewProp_bShouldDoAnimNotifies_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Whether or not this actor should respond to anim notifies - CURRENTLY ONLY AFFECTS PlayParticleEffect NOTIFIES**/" },
		{ "ModuleRelativePath", "Classes/Animation/SkeletalMeshActor.h" },
		{ "ToolTip", "Whether or not this actor should respond to anim notifies - CURRENTLY ONLY AFFECTS PlayParticleEffect NOTIFIES*" },
	};
#endif
	void Z_Construct_UClass_ASkeletalMeshActor_Statics::NewProp_bShouldDoAnimNotifies_SetBit(void* Obj)
	{
		((ASkeletalMeshActor*)Obj)->bShouldDoAnimNotifies = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASkeletalMeshActor_Statics::NewProp_bShouldDoAnimNotifies = { "bShouldDoAnimNotifies", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ASkeletalMeshActor), &Z_Construct_UClass_ASkeletalMeshActor_Statics::NewProp_bShouldDoAnimNotifies_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASkeletalMeshActor_Statics::NewProp_bShouldDoAnimNotifies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASkeletalMeshActor_Statics::NewProp_bShouldDoAnimNotifies_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASkeletalMeshActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkeletalMeshActor_Statics::NewProp_ReplicatedMaterial1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkeletalMeshActor_Statics::NewProp_ReplicatedMaterial0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkeletalMeshActor_Statics::NewProp_ReplicatedPhysAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkeletalMeshActor_Statics::NewProp_ReplicatedMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkeletalMeshActor_Statics::NewProp_SkeletalMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkeletalMeshActor_Statics::NewProp_bWakeOnLevelStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkeletalMeshActor_Statics::NewProp_bShouldDoAnimNotifies,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASkeletalMeshActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMatineeAnimInterface_NoRegister, (int32)VTABLE_OFFSET(ASkeletalMeshActor, IMatineeAnimInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASkeletalMeshActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASkeletalMeshActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASkeletalMeshActor_Statics::ClassParams = {
		&ASkeletalMeshActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASkeletalMeshActor_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASkeletalMeshActor_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASkeletalMeshActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASkeletalMeshActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASkeletalMeshActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASkeletalMeshActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASkeletalMeshActor, 2416455038);
	template<> ENGINE_API UClass* StaticClass<ASkeletalMeshActor>()
	{
		return ASkeletalMeshActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASkeletalMeshActor(Z_Construct_UClass_ASkeletalMeshActor, &ASkeletalMeshActor::StaticClass, TEXT("/Script/Engine"), TEXT("ASkeletalMeshActor"), false, nullptr, nullptr, nullptr);

	void ASkeletalMeshActor::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ReplicatedMesh(TEXT("ReplicatedMesh"));
		static const FName Name_ReplicatedPhysAsset(TEXT("ReplicatedPhysAsset"));
		static const FName Name_ReplicatedMaterial0(TEXT("ReplicatedMaterial0"));
		static const FName Name_ReplicatedMaterial1(TEXT("ReplicatedMaterial1"));

		const bool bIsValid = true
			&& Name_ReplicatedMesh == ClassReps[(int32)ENetFields_Private::ReplicatedMesh].Property->GetFName()
			&& Name_ReplicatedPhysAsset == ClassReps[(int32)ENetFields_Private::ReplicatedPhysAsset].Property->GetFName()
			&& Name_ReplicatedMaterial0 == ClassReps[(int32)ENetFields_Private::ReplicatedMaterial0].Property->GetFName()
			&& Name_ReplicatedMaterial1 == ClassReps[(int32)ENetFields_Private::ReplicatedMaterial1].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASkeletalMeshActor"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASkeletalMeshActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
