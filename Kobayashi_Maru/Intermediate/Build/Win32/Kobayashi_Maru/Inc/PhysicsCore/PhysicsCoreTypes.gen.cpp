// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhysicsCore/Public/PhysicsCoreTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsCoreTypes() {}
// Cross Module References
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EChaosBufferMode();
	UPackage* Z_Construct_UPackage__Script_PhysicsCore();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EChaosThreadingMode();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EChaosSolverTickMode();
// End Cross Module References
	static UEnum* EChaosBufferMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PhysicsCore_EChaosBufferMode, Z_Construct_UPackage__Script_PhysicsCore(), TEXT("EChaosBufferMode"));
		}
		return Singleton;
	}
	template<> PHYSICSCORE_API UEnum* StaticEnum<EChaosBufferMode>()
	{
		return EChaosBufferMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EChaosBufferMode(EChaosBufferMode_StaticEnum, TEXT("/Script/PhysicsCore"), TEXT("EChaosBufferMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PhysicsCore_EChaosBufferMode_Hash() { return 344236417U; }
	UEnum* Z_Construct_UEnum_PhysicsCore_EChaosBufferMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PhysicsCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EChaosBufferMode"), 0, Get_Z_Construct_UEnum_PhysicsCore_EChaosBufferMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EChaosBufferMode::Double", (int64)EChaosBufferMode::Double },
				{ "EChaosBufferMode::Triple", (int64)EChaosBufferMode::Triple },
				{ "EChaosBufferMode::Num", (int64)EChaosBufferMode::Num },
				{ "EChaosBufferMode::Invalid", (int64)EChaosBufferMode::Invalid },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Double.Name", "EChaosBufferMode::Double" },
				{ "Invalid.Hidden", "" },
				{ "Invalid.Name", "EChaosBufferMode::Invalid" },
				{ "ModuleRelativePath", "Public/PhysicsCoreTypes.h" },
				{ "Num.Hidden", "" },
				{ "Num.Name", "EChaosBufferMode::Num" },
				{ "Triple.Name", "EChaosBufferMode::Triple" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PhysicsCore,
				nullptr,
				"EChaosBufferMode",
				"EChaosBufferMode",
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
	static UEnum* EChaosThreadingMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PhysicsCore_EChaosThreadingMode, Z_Construct_UPackage__Script_PhysicsCore(), TEXT("EChaosThreadingMode"));
		}
		return Singleton;
	}
	template<> PHYSICSCORE_API UEnum* StaticEnum<EChaosThreadingMode>()
	{
		return EChaosThreadingMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EChaosThreadingMode(EChaosThreadingMode_StaticEnum, TEXT("/Script/PhysicsCore"), TEXT("EChaosThreadingMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PhysicsCore_EChaosThreadingMode_Hash() { return 3422734159U; }
	UEnum* Z_Construct_UEnum_PhysicsCore_EChaosThreadingMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PhysicsCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EChaosThreadingMode"), 0, Get_Z_Construct_UEnum_PhysicsCore_EChaosThreadingMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EChaosThreadingMode::DedicatedThread", (int64)EChaosThreadingMode::DedicatedThread },
				{ "EChaosThreadingMode::TaskGraph", (int64)EChaosThreadingMode::TaskGraph },
				{ "EChaosThreadingMode::SingleThread", (int64)EChaosThreadingMode::SingleThread },
				{ "EChaosThreadingMode::Num", (int64)EChaosThreadingMode::Num },
				{ "EChaosThreadingMode::Invalid", (int64)EChaosThreadingMode::Invalid },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "DedicatedThread.Hidden", "" },
				{ "DedicatedThread.Name", "EChaosThreadingMode::DedicatedThread" },
				{ "Invalid.Hidden", "" },
				{ "Invalid.Name", "EChaosThreadingMode::Invalid" },
				{ "ModuleRelativePath", "Public/PhysicsCoreTypes.h" },
				{ "Num.Hidden", "" },
				{ "Num.Name", "EChaosThreadingMode::Num" },
				{ "SingleThread.Name", "EChaosThreadingMode::SingleThread" },
				{ "TaskGraph.Name", "EChaosThreadingMode::TaskGraph" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PhysicsCore,
				nullptr,
				"EChaosThreadingMode",
				"EChaosThreadingMode",
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
	static UEnum* EChaosSolverTickMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PhysicsCore_EChaosSolverTickMode, Z_Construct_UPackage__Script_PhysicsCore(), TEXT("EChaosSolverTickMode"));
		}
		return Singleton;
	}
	template<> PHYSICSCORE_API UEnum* StaticEnum<EChaosSolverTickMode>()
	{
		return EChaosSolverTickMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EChaosSolverTickMode(EChaosSolverTickMode_StaticEnum, TEXT("/Script/PhysicsCore"), TEXT("EChaosSolverTickMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PhysicsCore_EChaosSolverTickMode_Hash() { return 4318231U; }
	UEnum* Z_Construct_UEnum_PhysicsCore_EChaosSolverTickMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PhysicsCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EChaosSolverTickMode"), 0, Get_Z_Construct_UEnum_PhysicsCore_EChaosSolverTickMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EChaosSolverTickMode::Fixed", (int64)EChaosSolverTickMode::Fixed },
				{ "EChaosSolverTickMode::Variable", (int64)EChaosSolverTickMode::Variable },
				{ "EChaosSolverTickMode::VariableCapped", (int64)EChaosSolverTickMode::VariableCapped },
				{ "EChaosSolverTickMode::VariableCappedWithTarget", (int64)EChaosSolverTickMode::VariableCappedWithTarget },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Fixed.Name", "EChaosSolverTickMode::Fixed" },
				{ "ModuleRelativePath", "Public/PhysicsCoreTypes.h" },
				{ "Variable.Name", "EChaosSolverTickMode::Variable" },
				{ "VariableCapped.Name", "EChaosSolverTickMode::VariableCapped" },
				{ "VariableCappedWithTarget.Name", "EChaosSolverTickMode::VariableCappedWithTarget" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PhysicsCore,
				nullptr,
				"EChaosSolverTickMode",
				"EChaosSolverTickMode",
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
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
