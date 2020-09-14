// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhysXVehicles/Public/WheeledVehicle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWheeledVehicle() {}
// Cross Module References
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_AWheeledVehicle_NoRegister();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_AWheeledVehicle();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_PhysXVehicles();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UWheeledVehicleMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void AWheeledVehicle::StaticRegisterNativesAWheeledVehicle()
	{
	}
	UClass* Z_Construct_UClass_AWheeledVehicle_NoRegister()
	{
		return AWheeledVehicle::StaticClass();
	}
	struct Z_Construct_UClass_AWheeledVehicle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehicleMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VehicleMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWheeledVehicle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_PhysXVehicles,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWheeledVehicle_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * WheeledVehicle is the base wheeled vehicle pawn actor.\n * By default it uses UWheeledVehicleMovementComponent4W for its simulation, but this can be overridden by inheriting from the class and modifying its constructor like so:\n * Super(ObjectInitializer.SetDefaultSubobjectClass<UMyMovement>(VehicleMovementComponentName))\n * Where UMyMovement is the new movement type that inherits from UWheeledVehicleMovementComponent\n * \n * @see https://docs.unrealengine.com/latest/INT/Engine/Physics/Vehicles/VehicleUserGuide/\n * @see UWheeledVehicleMovementComponent4W\n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "WheeledVehicle.h" },
		{ "ModuleRelativePath", "Public/WheeledVehicle.h" },
		{ "ToolTip", "WheeledVehicle is the base wheeled vehicle pawn actor.\nBy default it uses UWheeledVehicleMovementComponent4W for its simulation, but this can be overridden by inheriting from the class and modifying its constructor like so:\nSuper(ObjectInitializer.SetDefaultSubobjectClass<UMyMovement>(VehicleMovementComponentName))\nWhere UMyMovement is the new movement type that inherits from UWheeledVehicleMovementComponent\n\n@see https://docs.unrealengine.com/latest/INT/Engine/Physics/Vehicles/VehicleUserGuide/\n@see UWheeledVehicleMovementComponent4W" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWheeledVehicle_Statics::NewProp_VehicleMovement_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Vehicle" },
		{ "Comment", "/** vehicle simulation component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WheeledVehicle.h" },
		{ "ToolTip", "vehicle simulation component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWheeledVehicle_Statics::NewProp_VehicleMovement = { "VehicleMovement", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWheeledVehicle, VehicleMovement), Z_Construct_UClass_UWheeledVehicleMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWheeledVehicle_Statics::NewProp_VehicleMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWheeledVehicle_Statics::NewProp_VehicleMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWheeledVehicle_Statics::NewProp_Mesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Vehicle" },
		{ "Comment", "/**  The main skeletal mesh associated with this Vehicle */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WheeledVehicle.h" },
		{ "ToolTip", "The main skeletal mesh associated with this Vehicle" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWheeledVehicle_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWheeledVehicle, Mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWheeledVehicle_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWheeledVehicle_Statics::NewProp_Mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWheeledVehicle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWheeledVehicle_Statics::NewProp_VehicleMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWheeledVehicle_Statics::NewProp_Mesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWheeledVehicle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWheeledVehicle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWheeledVehicle_Statics::ClassParams = {
		&AWheeledVehicle::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AWheeledVehicle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AWheeledVehicle_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AWheeledVehicle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWheeledVehicle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWheeledVehicle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWheeledVehicle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWheeledVehicle, 3328046678);
	template<> PHYSXVEHICLES_API UClass* StaticClass<AWheeledVehicle>()
	{
		return AWheeledVehicle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWheeledVehicle(Z_Construct_UClass_AWheeledVehicle, &AWheeledVehicle::StaticClass, TEXT("/Script/PhysXVehicles"), TEXT("AWheeledVehicle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWheeledVehicle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
