// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CompleteRPG/Public/FaunaSpawnerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFaunaSpawnerComponent() {}
// Cross Module References
	COMPLETERPG_API UEnum* Z_Construct_UEnum_CompleteRPG_EFaunaSpawnerState();
	UPackage* Z_Construct_UPackage__Script_CompleteRPG();
	COMPLETERPG_API UClass* Z_Construct_UClass_UFaunaSpawnerComponent_NoRegister();
	COMPLETERPG_API UClass* Z_Construct_UClass_UFaunaSpawnerComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COMPLETERPG_API UClass* Z_Construct_UClass_UFaunaCreatureInfo_NoRegister();
// End Cross Module References
	static UEnum* EFaunaSpawnerState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CompleteRPG_EFaunaSpawnerState, Z_Construct_UPackage__Script_CompleteRPG(), TEXT("EFaunaSpawnerState"));
		}
		return Singleton;
	}
	template<> COMPLETERPG_API UEnum* StaticEnum<EFaunaSpawnerState>()
	{
		return EFaunaSpawnerState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFaunaSpawnerState(EFaunaSpawnerState_StaticEnum, TEXT("/Script/CompleteRPG"), TEXT("EFaunaSpawnerState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CompleteRPG_EFaunaSpawnerState_Hash() { return 2682680215U; }
	UEnum* Z_Construct_UEnum_CompleteRPG_EFaunaSpawnerState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CompleteRPG();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFaunaSpawnerState"), 0, Get_Z_Construct_UEnum_CompleteRPG_EFaunaSpawnerState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFaunaSpawnerState::Dormant", (int64)EFaunaSpawnerState::Dormant },
				{ "EFaunaSpawnerState::Spawning", (int64)EFaunaSpawnerState::Spawning },
				{ "EFaunaSpawnerState::NotSpawning", (int64)EFaunaSpawnerState::NotSpawning },
				{ "EFaunaSpawnerState::Populated", (int64)EFaunaSpawnerState::Populated },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Dormant.Name", "EFaunaSpawnerState::Dormant" },
				{ "ModuleRelativePath", "Public/FaunaSpawnerComponent.h" },
				{ "NotSpawning.Name", "EFaunaSpawnerState::NotSpawning" },
				{ "Populated.Name", "EFaunaSpawnerState::Populated" },
				{ "Spawning.Name", "EFaunaSpawnerState::Spawning" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CompleteRPG,
				nullptr,
				"EFaunaSpawnerState",
				"EFaunaSpawnerState",
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
	void UFaunaSpawnerComponent::StaticRegisterNativesUFaunaSpawnerComponent()
	{
	}
	UClass* Z_Construct_UClass_UFaunaSpawnerComponent_NoRegister()
	{
		return UFaunaSpawnerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFaunaSpawnerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveInstances_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActiveInstances;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActiveInstances_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetInstanceCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetInstanceCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreatureInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CreatureInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFaunaSpawnerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CompleteRPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFaunaSpawnerComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Component responsible for spawning fauna based upon defined creature info\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "FaunaSpawnerComponent.h" },
		{ "ModuleRelativePath", "Public/FaunaSpawnerComponent.h" },
		{ "ToolTip", "Component responsible for spawning fauna based upon defined creature info" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFaunaSpawnerComponent_Statics::NewProp_ActiveInstances_MetaData[] = {
		{ "Comment", "/** Currently active instances, filled when we spawn fauna */" },
		{ "ModuleRelativePath", "Public/FaunaSpawnerComponent.h" },
		{ "ToolTip", "Currently active instances, filled when we spawn fauna" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFaunaSpawnerComponent_Statics::NewProp_ActiveInstances = { "ActiveInstances", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFaunaSpawnerComponent, ActiveInstances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFaunaSpawnerComponent_Statics::NewProp_ActiveInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFaunaSpawnerComponent_Statics::NewProp_ActiveInstances_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFaunaSpawnerComponent_Statics::NewProp_ActiveInstances_Inner = { "ActiveInstances", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFaunaSpawnerComponent_Statics::NewProp_TargetInstanceCount_MetaData[] = {
		{ "Comment", "/** Number of instances we want to spawn in total */" },
		{ "ModuleRelativePath", "Public/FaunaSpawnerComponent.h" },
		{ "ToolTip", "Number of instances we want to spawn in total" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFaunaSpawnerComponent_Statics::NewProp_TargetInstanceCount = { "TargetInstanceCount", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFaunaSpawnerComponent, TargetInstanceCount), METADATA_PARAMS(Z_Construct_UClass_UFaunaSpawnerComponent_Statics::NewProp_TargetInstanceCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFaunaSpawnerComponent_Statics::NewProp_TargetInstanceCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFaunaSpawnerComponent_Statics::NewProp_State_MetaData[] = {
		{ "Comment", "/** State to enable spawning - enabled/disabled by random CreatureSpawnChance */" },
		{ "ModuleRelativePath", "Public/FaunaSpawnerComponent.h" },
		{ "ToolTip", "State to enable spawning - enabled/disabled by random CreatureSpawnChance" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFaunaSpawnerComponent_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFaunaSpawnerComponent, State), Z_Construct_UEnum_CompleteRPG_EFaunaSpawnerState, METADATA_PARAMS(Z_Construct_UClass_UFaunaSpawnerComponent_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFaunaSpawnerComponent_Statics::NewProp_State_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFaunaSpawnerComponent_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFaunaSpawnerComponent_Statics::NewProp_CreatureInfo_MetaData[] = {
		{ "Comment", "/** Data describing the fauna to spawn */" },
		{ "ModuleRelativePath", "Public/FaunaSpawnerComponent.h" },
		{ "ToolTip", "Data describing the fauna to spawn" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFaunaSpawnerComponent_Statics::NewProp_CreatureInfo = { "CreatureInfo", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFaunaSpawnerComponent, CreatureInfo), Z_Construct_UClass_UFaunaCreatureInfo_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFaunaSpawnerComponent_Statics::NewProp_CreatureInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFaunaSpawnerComponent_Statics::NewProp_CreatureInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFaunaSpawnerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFaunaSpawnerComponent_Statics::NewProp_ActiveInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFaunaSpawnerComponent_Statics::NewProp_ActiveInstances_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFaunaSpawnerComponent_Statics::NewProp_TargetInstanceCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFaunaSpawnerComponent_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFaunaSpawnerComponent_Statics::NewProp_State_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFaunaSpawnerComponent_Statics::NewProp_CreatureInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFaunaSpawnerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFaunaSpawnerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFaunaSpawnerComponent_Statics::ClassParams = {
		&UFaunaSpawnerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFaunaSpawnerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFaunaSpawnerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFaunaSpawnerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFaunaSpawnerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFaunaSpawnerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFaunaSpawnerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFaunaSpawnerComponent, 3676933486);
	template<> COMPLETERPG_API UClass* StaticClass<UFaunaSpawnerComponent>()
	{
		return UFaunaSpawnerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFaunaSpawnerComponent(Z_Construct_UClass_UFaunaSpawnerComponent, &UFaunaSpawnerComponent::StaticClass, TEXT("/Script/CompleteRPG"), TEXT("UFaunaSpawnerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFaunaSpawnerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
