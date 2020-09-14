// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosNiagara/Classes/NiagaraDataInterfaceChaosDestruction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceChaosDestruction() {}
// Cross Module References
	CHAOSNIAGARA_API UEnum* Z_Construct_UEnum_ChaosNiagara_ELocationZToSpawnEnum();
	UPackage* Z_Construct_UPackage__Script_ChaosNiagara();
	CHAOSNIAGARA_API UEnum* Z_Construct_UEnum_ChaosNiagara_ELocationYToSpawnEnum();
	CHAOSNIAGARA_API UEnum* Z_Construct_UEnum_ChaosNiagara_ELocationXToSpawnEnum();
	CHAOSNIAGARA_API UEnum* Z_Construct_UEnum_ChaosNiagara_ELocationFilteringModeEnum();
	CHAOSNIAGARA_API UEnum* Z_Construct_UEnum_ChaosNiagara_EDataSourceTypeEnum();
	CHAOSNIAGARA_API UEnum* Z_Construct_UEnum_ChaosNiagara_EDebugTypeEnum();
	CHAOSNIAGARA_API UEnum* Z_Construct_UEnum_ChaosNiagara_ERandomVelocityGenerationTypeEnum();
	CHAOSNIAGARA_API UEnum* Z_Construct_UEnum_ChaosNiagara_EDataSortTypeEnum();
	CHAOSNIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FChaosDestructionEvent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	CHAOSNIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_NoRegister();
	CHAOSNIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_AChaosSolverActor_NoRegister();
// End Cross Module References
	static UEnum* ELocationZToSpawnEnum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ChaosNiagara_ELocationZToSpawnEnum, Z_Construct_UPackage__Script_ChaosNiagara(), TEXT("ELocationZToSpawnEnum"));
		}
		return Singleton;
	}
	template<> CHAOSNIAGARA_API UEnum* StaticEnum<ELocationZToSpawnEnum>()
	{
		return ELocationZToSpawnEnum_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELocationZToSpawnEnum(ELocationZToSpawnEnum_StaticEnum, TEXT("/Script/ChaosNiagara"), TEXT("ELocationZToSpawnEnum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ChaosNiagara_ELocationZToSpawnEnum_Hash() { return 1524158700U; }
	UEnum* Z_Construct_UEnum_ChaosNiagara_ELocationZToSpawnEnum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ChaosNiagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELocationZToSpawnEnum"), 0, Get_Z_Construct_UEnum_ChaosNiagara_ELocationZToSpawnEnum_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELocationZToSpawnEnum::ChaosNiagara_LocationZToSpawn_None", (int64)ELocationZToSpawnEnum::ChaosNiagara_LocationZToSpawn_None },
				{ "ELocationZToSpawnEnum::ChaosNiagara_LocationZToSpawn_Min", (int64)ELocationZToSpawnEnum::ChaosNiagara_LocationZToSpawn_Min },
				{ "ELocationZToSpawnEnum::ChaosNiagara_LocationZToSpawn_Max", (int64)ELocationZToSpawnEnum::ChaosNiagara_LocationZToSpawn_Max },
				{ "ELocationZToSpawnEnum::ChaosNiagara_LocationZToSpawn_MinMax", (int64)ELocationZToSpawnEnum::ChaosNiagara_LocationZToSpawn_MinMax },
				{ "ELocationZToSpawnEnum::ChaosNiagara_Max", (int64)ELocationZToSpawnEnum::ChaosNiagara_Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ChaosNiagara_LocationZToSpawn_Max.DisplayName", "LocationZ <= Max" },
				{ "ChaosNiagara_LocationZToSpawn_Max.Name", "ELocationZToSpawnEnum::ChaosNiagara_LocationZToSpawn_Max" },
				{ "ChaosNiagara_LocationZToSpawn_Min.DisplayName", "Min <= LocationZ" },
				{ "ChaosNiagara_LocationZToSpawn_Min.Name", "ELocationZToSpawnEnum::ChaosNiagara_LocationZToSpawn_Min" },
				{ "ChaosNiagara_LocationZToSpawn_MinMax.DisplayName", "Min <= LocationZ <= Max" },
				{ "ChaosNiagara_LocationZToSpawn_MinMax.Name", "ELocationZToSpawnEnum::ChaosNiagara_LocationZToSpawn_MinMax" },
				{ "ChaosNiagara_LocationZToSpawn_None.DisplayName", "None" },
				{ "ChaosNiagara_LocationZToSpawn_None.Name", "ELocationZToSpawnEnum::ChaosNiagara_LocationZToSpawn_None" },
				{ "ChaosNiagara_Max.Comment", "//~~~\n//256th entry\n" },
				{ "ChaosNiagara_Max.Hidden", "" },
				{ "ChaosNiagara_Max.Name", "ELocationZToSpawnEnum::ChaosNiagara_Max" },
				{ "ChaosNiagara_Max.ToolTip", "256th entry" },
				{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceChaosDestruction.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ChaosNiagara,
				nullptr,
				"ELocationZToSpawnEnum",
				"ELocationZToSpawnEnum",
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
	static UEnum* ELocationYToSpawnEnum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ChaosNiagara_ELocationYToSpawnEnum, Z_Construct_UPackage__Script_ChaosNiagara(), TEXT("ELocationYToSpawnEnum"));
		}
		return Singleton;
	}
	template<> CHAOSNIAGARA_API UEnum* StaticEnum<ELocationYToSpawnEnum>()
	{
		return ELocationYToSpawnEnum_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELocationYToSpawnEnum(ELocationYToSpawnEnum_StaticEnum, TEXT("/Script/ChaosNiagara"), TEXT("ELocationYToSpawnEnum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ChaosNiagara_ELocationYToSpawnEnum_Hash() { return 2118383632U; }
	UEnum* Z_Construct_UEnum_ChaosNiagara_ELocationYToSpawnEnum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ChaosNiagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELocationYToSpawnEnum"), 0, Get_Z_Construct_UEnum_ChaosNiagara_ELocationYToSpawnEnum_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELocationYToSpawnEnum::ChaosNiagara_LocationYToSpawn_None", (int64)ELocationYToSpawnEnum::ChaosNiagara_LocationYToSpawn_None },
				{ "ELocationYToSpawnEnum::ChaosNiagara_LocationYToSpawn_Min", (int64)ELocationYToSpawnEnum::ChaosNiagara_LocationYToSpawn_Min },
				{ "ELocationYToSpawnEnum::ChaosNiagara_LocationYToSpawn_Max", (int64)ELocationYToSpawnEnum::ChaosNiagara_LocationYToSpawn_Max },
				{ "ELocationYToSpawnEnum::ChaosNiagara_LocationYToSpawn_MinMax", (int64)ELocationYToSpawnEnum::ChaosNiagara_LocationYToSpawn_MinMax },
				{ "ELocationYToSpawnEnum::ChaosNiagara_Max", (int64)ELocationYToSpawnEnum::ChaosNiagara_Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ChaosNiagara_LocationYToSpawn_Max.DisplayName", "LocationY <= Max" },
				{ "ChaosNiagara_LocationYToSpawn_Max.Name", "ELocationYToSpawnEnum::ChaosNiagara_LocationYToSpawn_Max" },
				{ "ChaosNiagara_LocationYToSpawn_Min.DisplayName", "Min <= LocationY" },
				{ "ChaosNiagara_LocationYToSpawn_Min.Name", "ELocationYToSpawnEnum::ChaosNiagara_LocationYToSpawn_Min" },
				{ "ChaosNiagara_LocationYToSpawn_MinMax.DisplayName", "Min <= LocationY <= Max" },
				{ "ChaosNiagara_LocationYToSpawn_MinMax.Name", "ELocationYToSpawnEnum::ChaosNiagara_LocationYToSpawn_MinMax" },
				{ "ChaosNiagara_LocationYToSpawn_None.DisplayName", "None" },
				{ "ChaosNiagara_LocationYToSpawn_None.Name", "ELocationYToSpawnEnum::ChaosNiagara_LocationYToSpawn_None" },
				{ "ChaosNiagara_Max.Comment", "//~~~\n//256th entry\n" },
				{ "ChaosNiagara_Max.Hidden", "" },
				{ "ChaosNiagara_Max.Name", "ELocationYToSpawnEnum::ChaosNiagara_Max" },
				{ "ChaosNiagara_Max.ToolTip", "256th entry" },
				{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceChaosDestruction.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ChaosNiagara,
				nullptr,
				"ELocationYToSpawnEnum",
				"ELocationYToSpawnEnum",
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
	static UEnum* ELocationXToSpawnEnum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ChaosNiagara_ELocationXToSpawnEnum, Z_Construct_UPackage__Script_ChaosNiagara(), TEXT("ELocationXToSpawnEnum"));
		}
		return Singleton;
	}
	template<> CHAOSNIAGARA_API UEnum* StaticEnum<ELocationXToSpawnEnum>()
	{
		return ELocationXToSpawnEnum_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELocationXToSpawnEnum(ELocationXToSpawnEnum_StaticEnum, TEXT("/Script/ChaosNiagara"), TEXT("ELocationXToSpawnEnum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ChaosNiagara_ELocationXToSpawnEnum_Hash() { return 3092266262U; }
	UEnum* Z_Construct_UEnum_ChaosNiagara_ELocationXToSpawnEnum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ChaosNiagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELocationXToSpawnEnum"), 0, Get_Z_Construct_UEnum_ChaosNiagara_ELocationXToSpawnEnum_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELocationXToSpawnEnum::ChaosNiagara_LocationXToSpawn_None", (int64)ELocationXToSpawnEnum::ChaosNiagara_LocationXToSpawn_None },
				{ "ELocationXToSpawnEnum::ChaosNiagara_LocationXToSpawn_Min", (int64)ELocationXToSpawnEnum::ChaosNiagara_LocationXToSpawn_Min },
				{ "ELocationXToSpawnEnum::ChaosNiagara_LocationXToSpawn_Max", (int64)ELocationXToSpawnEnum::ChaosNiagara_LocationXToSpawn_Max },
				{ "ELocationXToSpawnEnum::ChaosNiagara_LocationXToSpawn_MinMax", (int64)ELocationXToSpawnEnum::ChaosNiagara_LocationXToSpawn_MinMax },
				{ "ELocationXToSpawnEnum::ChaosNiagara_Max", (int64)ELocationXToSpawnEnum::ChaosNiagara_Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ChaosNiagara_LocationXToSpawn_Max.DisplayName", "LocationX <= Max" },
				{ "ChaosNiagara_LocationXToSpawn_Max.Name", "ELocationXToSpawnEnum::ChaosNiagara_LocationXToSpawn_Max" },
				{ "ChaosNiagara_LocationXToSpawn_Min.DisplayName", "Min <= LocationX" },
				{ "ChaosNiagara_LocationXToSpawn_Min.Name", "ELocationXToSpawnEnum::ChaosNiagara_LocationXToSpawn_Min" },
				{ "ChaosNiagara_LocationXToSpawn_MinMax.DisplayName", "Min <= LocationX <= Max" },
				{ "ChaosNiagara_LocationXToSpawn_MinMax.Name", "ELocationXToSpawnEnum::ChaosNiagara_LocationXToSpawn_MinMax" },
				{ "ChaosNiagara_LocationXToSpawn_None.DisplayName", "None" },
				{ "ChaosNiagara_LocationXToSpawn_None.Name", "ELocationXToSpawnEnum::ChaosNiagara_LocationXToSpawn_None" },
				{ "ChaosNiagara_Max.Comment", "//~~~\n//256th entry\n" },
				{ "ChaosNiagara_Max.Hidden", "" },
				{ "ChaosNiagara_Max.Name", "ELocationXToSpawnEnum::ChaosNiagara_Max" },
				{ "ChaosNiagara_Max.ToolTip", "256th entry" },
				{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceChaosDestruction.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ChaosNiagara,
				nullptr,
				"ELocationXToSpawnEnum",
				"ELocationXToSpawnEnum",
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
	static UEnum* ELocationFilteringModeEnum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ChaosNiagara_ELocationFilteringModeEnum, Z_Construct_UPackage__Script_ChaosNiagara(), TEXT("ELocationFilteringModeEnum"));
		}
		return Singleton;
	}
	template<> CHAOSNIAGARA_API UEnum* StaticEnum<ELocationFilteringModeEnum>()
	{
		return ELocationFilteringModeEnum_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELocationFilteringModeEnum(ELocationFilteringModeEnum_StaticEnum, TEXT("/Script/ChaosNiagara"), TEXT("ELocationFilteringModeEnum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ChaosNiagara_ELocationFilteringModeEnum_Hash() { return 3360198698U; }
	UEnum* Z_Construct_UEnum_ChaosNiagara_ELocationFilteringModeEnum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ChaosNiagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELocationFilteringModeEnum"), 0, Get_Z_Construct_UEnum_ChaosNiagara_ELocationFilteringModeEnum_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELocationFilteringModeEnum::ChaosNiagara_LocationFilteringMode_Inclusive", (int64)ELocationFilteringModeEnum::ChaosNiagara_LocationFilteringMode_Inclusive },
				{ "ELocationFilteringModeEnum::ChaosNiagara_LocationFilteringMode_Exclusive", (int64)ELocationFilteringModeEnum::ChaosNiagara_LocationFilteringMode_Exclusive },
				{ "ELocationFilteringModeEnum::ChaosNiagara_Max", (int64)ELocationFilteringModeEnum::ChaosNiagara_Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ChaosNiagara_LocationFilteringMode_Exclusive.DisplayName", "Exclusive" },
				{ "ChaosNiagara_LocationFilteringMode_Exclusive.Name", "ELocationFilteringModeEnum::ChaosNiagara_LocationFilteringMode_Exclusive" },
				{ "ChaosNiagara_LocationFilteringMode_Inclusive.DisplayName", "Inclusive" },
				{ "ChaosNiagara_LocationFilteringMode_Inclusive.Name", "ELocationFilteringModeEnum::ChaosNiagara_LocationFilteringMode_Inclusive" },
				{ "ChaosNiagara_Max.Comment", "//~~~\n//256th entry\n" },
				{ "ChaosNiagara_Max.Hidden", "" },
				{ "ChaosNiagara_Max.Name", "ELocationFilteringModeEnum::ChaosNiagara_Max" },
				{ "ChaosNiagara_Max.ToolTip", "256th entry" },
				{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceChaosDestruction.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ChaosNiagara,
				nullptr,
				"ELocationFilteringModeEnum",
				"ELocationFilteringModeEnum",
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
	static UEnum* EDataSourceTypeEnum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ChaosNiagara_EDataSourceTypeEnum, Z_Construct_UPackage__Script_ChaosNiagara(), TEXT("EDataSourceTypeEnum"));
		}
		return Singleton;
	}
	template<> CHAOSNIAGARA_API UEnum* StaticEnum<EDataSourceTypeEnum>()
	{
		return EDataSourceTypeEnum_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDataSourceTypeEnum(EDataSourceTypeEnum_StaticEnum, TEXT("/Script/ChaosNiagara"), TEXT("EDataSourceTypeEnum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ChaosNiagara_EDataSourceTypeEnum_Hash() { return 1013081696U; }
	UEnum* Z_Construct_UEnum_ChaosNiagara_EDataSourceTypeEnum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ChaosNiagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDataSourceTypeEnum"), 0, Get_Z_Construct_UEnum_ChaosNiagara_EDataSourceTypeEnum_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDataSourceTypeEnum::ChaosNiagara_DataSourceType_Collision", (int64)EDataSourceTypeEnum::ChaosNiagara_DataSourceType_Collision },
				{ "EDataSourceTypeEnum::ChaosNiagara_DataSourceType_Breaking", (int64)EDataSourceTypeEnum::ChaosNiagara_DataSourceType_Breaking },
				{ "EDataSourceTypeEnum::ChaosNiagara_DataSourceType_Trailing", (int64)EDataSourceTypeEnum::ChaosNiagara_DataSourceType_Trailing },
				{ "EDataSourceTypeEnum::ChaosNiagara_Max", (int64)EDataSourceTypeEnum::ChaosNiagara_Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ChaosNiagara_DataSourceType_Breaking.DisplayName", "Breaking Data" },
				{ "ChaosNiagara_DataSourceType_Breaking.Name", "EDataSourceTypeEnum::ChaosNiagara_DataSourceType_Breaking" },
				{ "ChaosNiagara_DataSourceType_Collision.DisplayName", "Collision Data" },
				{ "ChaosNiagara_DataSourceType_Collision.Name", "EDataSourceTypeEnum::ChaosNiagara_DataSourceType_Collision" },
				{ "ChaosNiagara_DataSourceType_Trailing.DisplayName", "Trailing Data" },
				{ "ChaosNiagara_DataSourceType_Trailing.Name", "EDataSourceTypeEnum::ChaosNiagara_DataSourceType_Trailing" },
				{ "ChaosNiagara_Max.Comment", "//~~~\n//256th entry\n" },
				{ "ChaosNiagara_Max.Hidden", "" },
				{ "ChaosNiagara_Max.Name", "EDataSourceTypeEnum::ChaosNiagara_Max" },
				{ "ChaosNiagara_Max.ToolTip", "256th entry" },
				{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceChaosDestruction.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ChaosNiagara,
				nullptr,
				"EDataSourceTypeEnum",
				"EDataSourceTypeEnum",
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
	static UEnum* EDebugTypeEnum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ChaosNiagara_EDebugTypeEnum, Z_Construct_UPackage__Script_ChaosNiagara(), TEXT("EDebugTypeEnum"));
		}
		return Singleton;
	}
	template<> CHAOSNIAGARA_API UEnum* StaticEnum<EDebugTypeEnum>()
	{
		return EDebugTypeEnum_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDebugTypeEnum(EDebugTypeEnum_StaticEnum, TEXT("/Script/ChaosNiagara"), TEXT("EDebugTypeEnum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ChaosNiagara_EDebugTypeEnum_Hash() { return 3521837262U; }
	UEnum* Z_Construct_UEnum_ChaosNiagara_EDebugTypeEnum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ChaosNiagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDebugTypeEnum"), 0, Get_Z_Construct_UEnum_ChaosNiagara_EDebugTypeEnum_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDebugTypeEnum::ChaosNiagara_DebugType_NoDebug", (int64)EDebugTypeEnum::ChaosNiagara_DebugType_NoDebug },
				{ "EDebugTypeEnum::ChaosNiagara_DebugType_ColorBySolver", (int64)EDebugTypeEnum::ChaosNiagara_DebugType_ColorBySolver },
				{ "EDebugTypeEnum::ChaosNiagara_DebugType_ColorByParticleIndex", (int64)EDebugTypeEnum::ChaosNiagara_DebugType_ColorByParticleIndex },
				{ "EDebugTypeEnum::ChaosNiagara_Max", (int64)EDebugTypeEnum::ChaosNiagara_Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ChaosNiagara_DebugType_ColorByParticleIndex.DisplayName", "Color by ParticleIndex" },
				{ "ChaosNiagara_DebugType_ColorByParticleIndex.Name", "EDebugTypeEnum::ChaosNiagara_DebugType_ColorByParticleIndex" },
				{ "ChaosNiagara_DebugType_ColorBySolver.DisplayName", "Color by Solver" },
				{ "ChaosNiagara_DebugType_ColorBySolver.Name", "EDebugTypeEnum::ChaosNiagara_DebugType_ColorBySolver" },
				{ "ChaosNiagara_DebugType_NoDebug.DisplayName", "No Debug" },
				{ "ChaosNiagara_DebugType_NoDebug.Name", "EDebugTypeEnum::ChaosNiagara_DebugType_NoDebug" },
				{ "ChaosNiagara_Max.Comment", "//~~~\n//256th entry\n" },
				{ "ChaosNiagara_Max.Hidden", "" },
				{ "ChaosNiagara_Max.Name", "EDebugTypeEnum::ChaosNiagara_Max" },
				{ "ChaosNiagara_Max.ToolTip", "256th entry" },
				{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceChaosDestruction.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ChaosNiagara,
				nullptr,
				"EDebugTypeEnum",
				"EDebugTypeEnum",
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
	static UEnum* ERandomVelocityGenerationTypeEnum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ChaosNiagara_ERandomVelocityGenerationTypeEnum, Z_Construct_UPackage__Script_ChaosNiagara(), TEXT("ERandomVelocityGenerationTypeEnum"));
		}
		return Singleton;
	}
	template<> CHAOSNIAGARA_API UEnum* StaticEnum<ERandomVelocityGenerationTypeEnum>()
	{
		return ERandomVelocityGenerationTypeEnum_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERandomVelocityGenerationTypeEnum(ERandomVelocityGenerationTypeEnum_StaticEnum, TEXT("/Script/ChaosNiagara"), TEXT("ERandomVelocityGenerationTypeEnum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ChaosNiagara_ERandomVelocityGenerationTypeEnum_Hash() { return 112014755U; }
	UEnum* Z_Construct_UEnum_ChaosNiagara_ERandomVelocityGenerationTypeEnum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ChaosNiagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERandomVelocityGenerationTypeEnum"), 0, Get_Z_Construct_UEnum_ChaosNiagara_ERandomVelocityGenerationTypeEnum_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERandomVelocityGenerationTypeEnum::ChaosNiagara_RandomVelocityGenerationType_RandomDistribution", (int64)ERandomVelocityGenerationTypeEnum::ChaosNiagara_RandomVelocityGenerationType_RandomDistribution },
				{ "ERandomVelocityGenerationTypeEnum::ChaosNiagara_RandomVelocityGenerationType_RandomDistributionWithStreamers", (int64)ERandomVelocityGenerationTypeEnum::ChaosNiagara_RandomVelocityGenerationType_RandomDistributionWithStreamers },
				{ "ERandomVelocityGenerationTypeEnum::ChaosNiagara_RandomVelocityGenerationType_CollisionNormalBased", (int64)ERandomVelocityGenerationTypeEnum::ChaosNiagara_RandomVelocityGenerationType_CollisionNormalBased },
				{ "ERandomVelocityGenerationTypeEnum::ChaosNiagara_Max", (int64)ERandomVelocityGenerationTypeEnum::ChaosNiagara_Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ChaosNiagara_Max.Comment", "//\x09""ChaosNiagara_RandomVelocityGenerationType_NRandomSpread UMETA(DisplayName = \"N Random Spread\"),\n//~~~\n//256th entry\n" },
				{ "ChaosNiagara_Max.Hidden", "" },
				{ "ChaosNiagara_Max.Name", "ERandomVelocityGenerationTypeEnum::ChaosNiagara_Max" },
				{ "ChaosNiagara_Max.ToolTip", "ChaosNiagara_RandomVelocityGenerationType_NRandomSpread UMETA(DisplayName = \"N Random Spread\"),\n256th entry" },
				{ "ChaosNiagara_RandomVelocityGenerationType_CollisionNormalBased.DisplayName", "Collision Normal Based (Collision Data Only)" },
				{ "ChaosNiagara_RandomVelocityGenerationType_CollisionNormalBased.Name", "ERandomVelocityGenerationTypeEnum::ChaosNiagara_RandomVelocityGenerationType_CollisionNormalBased" },
				{ "ChaosNiagara_RandomVelocityGenerationType_RandomDistribution.DisplayName", "Random Distribution" },
				{ "ChaosNiagara_RandomVelocityGenerationType_RandomDistribution.Name", "ERandomVelocityGenerationTypeEnum::ChaosNiagara_RandomVelocityGenerationType_RandomDistribution" },
				{ "ChaosNiagara_RandomVelocityGenerationType_RandomDistributionWithStreamers.DisplayName", "Random Distribution with Streamers" },
				{ "ChaosNiagara_RandomVelocityGenerationType_RandomDistributionWithStreamers.Name", "ERandomVelocityGenerationTypeEnum::ChaosNiagara_RandomVelocityGenerationType_RandomDistributionWithStreamers" },
				{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceChaosDestruction.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ChaosNiagara,
				nullptr,
				"ERandomVelocityGenerationTypeEnum",
				"ERandomVelocityGenerationTypeEnum",
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
	static UEnum* EDataSortTypeEnum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ChaosNiagara_EDataSortTypeEnum, Z_Construct_UPackage__Script_ChaosNiagara(), TEXT("EDataSortTypeEnum"));
		}
		return Singleton;
	}
	template<> CHAOSNIAGARA_API UEnum* StaticEnum<EDataSortTypeEnum>()
	{
		return EDataSortTypeEnum_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDataSortTypeEnum(EDataSortTypeEnum_StaticEnum, TEXT("/Script/ChaosNiagara"), TEXT("EDataSortTypeEnum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ChaosNiagara_EDataSortTypeEnum_Hash() { return 2677748628U; }
	UEnum* Z_Construct_UEnum_ChaosNiagara_EDataSortTypeEnum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ChaosNiagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDataSortTypeEnum"), 0, Get_Z_Construct_UEnum_ChaosNiagara_EDataSortTypeEnum_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDataSortTypeEnum::ChaosNiagara_DataSortType_NoSorting", (int64)EDataSortTypeEnum::ChaosNiagara_DataSortType_NoSorting },
				{ "EDataSortTypeEnum::ChaosNiagara_DataSortType_RandomShuffle", (int64)EDataSortTypeEnum::ChaosNiagara_DataSortType_RandomShuffle },
				{ "EDataSortTypeEnum::ChaosNiagara_DataSortType_SortByMassMaxToMin", (int64)EDataSortTypeEnum::ChaosNiagara_DataSortType_SortByMassMaxToMin },
				{ "EDataSortTypeEnum::ChaosNiagara_DataSortType_SortByMassMinToMax", (int64)EDataSortTypeEnum::ChaosNiagara_DataSortType_SortByMassMinToMax },
				{ "EDataSortTypeEnum::ChaosNiagara_Max", (int64)EDataSortTypeEnum::ChaosNiagara_Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ChaosNiagara_DataSortType_NoSorting.DisplayName", "No Sorting" },
				{ "ChaosNiagara_DataSortType_NoSorting.Name", "EDataSortTypeEnum::ChaosNiagara_DataSortType_NoSorting" },
				{ "ChaosNiagara_DataSortType_RandomShuffle.DisplayName", "Random Shuffle" },
				{ "ChaosNiagara_DataSortType_RandomShuffle.Name", "EDataSortTypeEnum::ChaosNiagara_DataSortType_RandomShuffle" },
				{ "ChaosNiagara_DataSortType_SortByMassMaxToMin.DisplayName", "Sort by Mass - Max to Min" },
				{ "ChaosNiagara_DataSortType_SortByMassMaxToMin.Name", "EDataSortTypeEnum::ChaosNiagara_DataSortType_SortByMassMaxToMin" },
				{ "ChaosNiagara_DataSortType_SortByMassMinToMax.DisplayName", "Sort by Mass - Min to Max" },
				{ "ChaosNiagara_DataSortType_SortByMassMinToMax.Name", "EDataSortTypeEnum::ChaosNiagara_DataSortType_SortByMassMinToMax" },
				{ "ChaosNiagara_Max.Comment", "//~~~\n//256th entry\n" },
				{ "ChaosNiagara_Max.Hidden", "" },
				{ "ChaosNiagara_Max.Name", "EDataSortTypeEnum::ChaosNiagara_Max" },
				{ "ChaosNiagara_Max.ToolTip", "256th entry" },
				{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceChaosDestruction.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ChaosNiagara,
				nullptr,
				"EDataSortTypeEnum",
				"EDataSortTypeEnum",
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
class UScriptStruct* FChaosDestructionEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CHAOSNIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FChaosDestructionEvent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosDestructionEvent, Z_Construct_UPackage__Script_ChaosNiagara(), TEXT("ChaosDestructionEvent"), sizeof(FChaosDestructionEvent), Get_Z_Construct_UScriptStruct_FChaosDestructionEvent_Hash());
	}
	return Singleton;
}
template<> CHAOSNIAGARA_API UScriptStruct* StaticStruct<FChaosDestructionEvent>()
{
	return FChaosDestructionEvent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChaosDestructionEvent(FChaosDestructionEvent::StaticStruct, TEXT("/Script/ChaosNiagara"), TEXT("ChaosDestructionEvent"), false, nullptr, nullptr);
static struct FScriptStruct_ChaosNiagara_StaticRegisterNativesFChaosDestructionEvent
{
	FScriptStruct_ChaosNiagara_StaticRegisterNativesFChaosDestructionEvent()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ChaosDestructionEvent")),new UScriptStruct::TCppStructOps<FChaosDestructionEvent>);
	}
} ScriptStruct_ChaosNiagara_StaticRegisterNativesFChaosDestructionEvent;
	struct Z_Construct_UScriptStruct_FChaosDestructionEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ParticleID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtentMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExtentMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtentMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExtentMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AngularVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Velocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosDestructionEvent_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceChaosDestruction.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChaosDestructionEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosDestructionEvent>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosDestructionEvent_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Chaos Destruction Event" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceChaosDestruction.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosDestructionEvent_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosDestructionEvent, Type), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosDestructionEvent_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosDestructionEvent_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosDestructionEvent_Statics::NewProp_Time_MetaData[] = {
		{ "Category", "Chaos Destruction Event" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceChaosDestruction.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosDestructionEvent_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosDestructionEvent, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosDestructionEvent_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosDestructionEvent_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosDestructionEvent_Statics::NewProp_ParticleID_MetaData[] = {
		{ "Category", "Chaos Destruction Event" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceChaosDestruction.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosDestructionEvent_Statics::NewProp_ParticleID = { "ParticleID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosDestructionEvent, ParticleID), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosDestructionEvent_Statics::NewProp_ParticleID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosDestructionEvent_Statics::NewProp_ParticleID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosDestructionEvent_Statics::NewProp_ExtentMax_MetaData[] = {
		{ "Category", "Chaos Destruction Event" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceChaosDestruction.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosDestructionEvent_Statics::NewProp_ExtentMax = { "ExtentMax", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosDestructionEvent, ExtentMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosDestructionEvent_Statics::NewProp_ExtentMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosDestructionEvent_Statics::NewProp_ExtentMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosDestructionEvent_Statics::NewProp_ExtentMin_MetaData[] = {
		{ "Category", "Chaos Destruction Event" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceChaosDestruction.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosDestructionEvent_Statics::NewProp_ExtentMin = { "ExtentMin", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosDestructionEvent, ExtentMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosDestructionEvent_Statics::NewProp_ExtentMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosDestructionEvent_Statics::NewProp_ExtentMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosDestructionEvent_Statics::NewProp_AngularVelocity_MetaData[] = {
		{ "Category", "Chaos Destruction Event" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceChaosDestruction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosDestructionEvent_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosDestructionEvent, AngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosDestructionEvent_Statics::NewProp_AngularVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosDestructionEvent_Statics::NewProp_AngularVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosDestructionEvent_Statics::NewProp_Velocity_MetaData[] = {
		{ "Category", "Chaos Destruction Event" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceChaosDestruction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosDestructionEvent_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosDestructionEvent, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosDestructionEvent_Statics::NewProp_Velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosDestructionEvent_Statics::NewProp_Velocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosDestructionEvent_Statics::NewProp_Normal_MetaData[] = {
		{ "Category", "Chaos Destruction Event" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceChaosDestruction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosDestructionEvent_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosDestructionEvent, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosDestructionEvent_Statics::NewProp_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosDestructionEvent_Statics::NewProp_Normal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosDestructionEvent_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "Chaos Destruction Event" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceChaosDestruction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosDestructionEvent_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosDestructionEvent, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosDestructionEvent_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosDestructionEvent_Statics::NewProp_Position_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosDestructionEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosDestructionEvent_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosDestructionEvent_Statics::NewProp_Time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosDestructionEvent_Statics::NewProp_ParticleID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosDestructionEvent_Statics::NewProp_ExtentMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosDestructionEvent_Statics::NewProp_ExtentMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosDestructionEvent_Statics::NewProp_AngularVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosDestructionEvent_Statics::NewProp_Velocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosDestructionEvent_Statics::NewProp_Normal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosDestructionEvent_Statics::NewProp_Position,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosDestructionEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosNiagara,
		nullptr,
		&NewStructOps,
		"ChaosDestructionEvent",
		sizeof(FChaosDestructionEvent),
		alignof(FChaosDestructionEvent),
		Z_Construct_UScriptStruct_FChaosDestructionEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosDestructionEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosDestructionEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosDestructionEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChaosDestructionEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChaosDestructionEvent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ChaosNiagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChaosDestructionEvent"), sizeof(FChaosDestructionEvent), Get_Z_Construct_UScriptStruct_FChaosDestructionEvent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChaosDestructionEvent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChaosDestructionEvent_Hash() { return 3173790008U; }
	void UNiagaraDataInterfaceChaosDestruction::StaticRegisterNativesUNiagaraDataInterfaceChaosDestruction()
	{
	}
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_NoRegister()
	{
		return UNiagaraDataInterfaceChaosDestruction::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeStampOfLastProcessedData_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStampOfLastProcessedData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SolverTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SolverTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastSpawnTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastSpawnTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastSpawnedPointID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LastSpawnedPointID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DebugType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DebugType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxLatency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxLatency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FinalVelocityMagnitudeMinMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FinalVelocityMagnitudeMinMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VelocityOffsetMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VelocityOffsetMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VelocityOffsetMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VelocityOffsetMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpreadAngleMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpreadAngleMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomVelocityMagnitudeMinMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RandomVelocityMagnitudeMinMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomVelocityGenerationType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RandomVelocityGenerationType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RandomVelocityGenerationType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InheritedVelocityMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InheritedVelocityMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomPositionMagnitudeMinMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RandomPositionMagnitudeMinMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGetExternalTrailingData_MetaData[];
#endif
		static void NewProp_bGetExternalTrailingData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGetExternalTrailingData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGetExternalBreakingData_MetaData[];
#endif
		static void NewProp_bGetExternalBreakingData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGetExternalBreakingData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChaosBreakingMaterialSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_ChaosBreakingMaterialSet;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChaosBreakingMaterialSet_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bApplyMaterialsFilter_MetaData[];
#endif
		static void NewProp_bApplyMaterialsFilter_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bApplyMaterialsFilter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDataPerCell_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxDataPerCell;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpatialHashVolumeCellSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpatialHashVolumeCellSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpatialHashVolumeMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpatialHashVolumeMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpatialHashVolumeMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpatialHashVolumeMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoSpatialHash_MetaData[];
#endif
		static void NewProp_DoSpatialHash_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DoSpatialHash;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGetExternalCollisionData_MetaData[];
#endif
		static void NewProp_bGetExternalCollisionData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGetExternalCollisionData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataSortingType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DataSortingType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DataSortingType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationZToSpawnMinMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocationZToSpawnMinMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationZToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LocationZToSpawn;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LocationZToSpawn_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationYToSpawnMinMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocationYToSpawnMinMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationYToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LocationYToSpawn;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LocationYToSpawn_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationXToSpawnMinMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocationXToSpawnMinMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationXToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LocationXToSpawn;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LocationXToSpawn_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationFilteringMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LocationFilteringMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LocationFilteringMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurfaceTypeToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SurfaceTypeToSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SolverTimeToSpawnMinMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SolverTimeToSpawnMinMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeToSpawnMinMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VolumeToSpawnMinMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtentMaxToSpawnMinMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExtentMaxToSpawnMinMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtentMinToSpawnMinMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExtentMinToSpawnMinMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MassToSpawnMinMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MassToSpawnMinMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedToSpawnMinMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpeedToSpawnMinMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpulseToSpawnMinMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImpulseToSpawnMinMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnChance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnChance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnMultiplierMinMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnMultiplierMinMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoSpawn_MetaData[];
#endif
		static void NewProp_DoSpawn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DoSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxNumberOfDataEntriesToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxNumberOfDataEntriesToSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataProcessFrequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DataProcessFrequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataSourceType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DataSourceType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DataSourceType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChaosSolverActorSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_ChaosSolverActorSet;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChaosSolverActorSet_ElementProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosNiagara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::Class_MetaDataParams[] = {
		{ "Category", "Chaos Niagara" },
		{ "Comment", "/** Data Interface allowing sampling of Chaos Destruction data. */" },
		{ "DisplayName", "Chaos Destruction Data" },
		{ "IncludePath", "NiagaraDataInterfaceChaosDestruction.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceChaosDestruction.h" },
		{ "ToolTip", "Data Interface allowing sampling of Chaos Destruction data." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_TimeStampOfLastProcessedData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceChaosDestruction.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_TimeStampOfLastProcessedData = { "TimeStampOfLastProcessedData", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceChaosDestruction, TimeStampOfLastProcessedData), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_TimeStampOfLastProcessedData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_TimeStampOfLastProcessedData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_SolverTime_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceChaosDestruction.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_SolverTime = { "SolverTime", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceChaosDestruction, SolverTime), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_SolverTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_SolverTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_LastSpawnTime_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceChaosDestruction.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_LastSpawnTime = { "LastSpawnTime", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceChaosDestruction, LastSpawnTime), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_LastSpawnTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_LastSpawnTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_LastSpawnedPointID_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceChaosDestruction.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_LastSpawnedPointID = { "LastSpawnedPointID", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceChaosDestruction, LastSpawnedPointID), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_LastSpawnedPointID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_LastSpawnedPointID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_DebugType_MetaData[] = {
		{ "Category", "Debug Settings" },
		{ "Comment", "/* Debug visualization method */" },
		{ "DisplayName", "Debug Visualization" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceChaosDestruction.h" },
		{ "ToolTip", "Debug visualization method" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_DebugType = { "DebugType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceChaosDestruction, DebugType), Z_Construct_UEnum_ChaosNiagara_EDebugTypeEnum, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_DebugType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_DebugType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_DebugType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_MaxLatency_MetaData[] = {
		{ "Category", "Spawn Settings" },
		{ "DisplayName", "Max Latency" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceChaosDestruction.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_MaxLatency = { "MaxLatency", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceChaosDestruction, MaxLatency), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_MaxLatency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_MaxLatency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_FinalVelocityMagnitudeMinMax_MetaData[] = {
		{ "Category", "Velocity Settings" },
		{ "Comment", "/* Clamp particles velocity */" },
		{ "DisplayName", "Final Velocity Magnitude Maximum" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceChaosDestruction.h" },
		{ "ToolTip", "Clamp particles velocity" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_FinalVelocityMagnitudeMinMax = { "FinalVelocityMagnitudeMinMax", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceChaosDestruction, FinalVelocityMagnitudeMinMax), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_FinalVelocityMagnitudeMinMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_FinalVelocityMagnitudeMinMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_VelocityOffsetMax_MetaData[] = {
		{ "Category", "Velocity Settings" },
		{ "Comment", "/* Max Offset value added to spawned particles velocity */" },
		{ "DisplayName", "Velocity Offset Max" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceChaosDestruction.h" },
		{ "ToolTip", "Max Offset value added to spawned particles velocity" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_VelocityOffsetMax = { "VelocityOffsetMax", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceChaosDestruction, VelocityOffsetMax), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_VelocityOffsetMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_VelocityOffsetMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_VelocityOffsetMin_MetaData[] = {
		{ "Category", "Velocity Settings" },
		{ "Comment", "/* Min Offset value added to spawned particles velocity */" },
		{ "DisplayName", "Velocity Offset Min" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceChaosDestruction.h" },
		{ "ToolTip", "Min Offset value added to spawned particles velocity" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_VelocityOffsetMin = { "VelocityOffsetMin", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceChaosDestruction, VelocityOffsetMin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_VelocityOffsetMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_VelocityOffsetMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_SpreadAngleMax_MetaData[] = {
		{ "Category", "Velocity Settings - Collision Normal Based Velocity Model" },
		{ "Comment", "/**/" },
		{ "DisplayName", "Spread Angle Max [Degrees]" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceChaosDestruction.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_SpreadAngleMax = { "SpreadAngleMax", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceChaosDestruction, SpreadAngleMax), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_SpreadAngleMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_SpreadAngleMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_RandomVelocityMagnitudeMinMax_MetaData[] = {
		{ "Category", "Velocity Settings" },
		{ "Comment", "/* Every particles will be spawned with random velocity with magnitude in the range of [RandomVelocityMagnitudeMin, RandomVelocityMagnitudeMax] */" },
		{ "DisplayName", "Velocity Random Magnitude Min/Max" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceChaosDestruction.h" },
		{ "ToolTip", "Every particles will be spawned with random velocity with magnitude in the range of [RandomVelocityMagnitudeMin, RandomVelocityMagnitudeMax]" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_RandomVelocityMagnitudeMinMax = { "RandomVelocityMagnitudeMinMax", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceChaosDestruction, RandomVelocityMagnitudeMinMax), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_RandomVelocityMagnitudeMinMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_RandomVelocityMagnitudeMinMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_RandomVelocityGenerationType_MetaData[] = {
		{ "Category", "Velocity Settings - Random Generation" },
		{ "Comment", "/**\n\x09* The method used to create the random velocities for the newly spawned particles\n\x09*/" },
		{ "DisplayName", "Velocity Model" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceChaosDestruction.h" },
		{ "ToolTip", "The method used to create the random velocities for the newly spawned particles" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_RandomVelocityGenerationType = { "RandomVelocityGenerationType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceChaosDestruction, RandomVelocityGenerationType), Z_Construct_UEnum_ChaosNiagara_ERandomVelocityGenerationTypeEnum, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_RandomVelocityGenerationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_RandomVelocityGenerationType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_RandomVelocityGenerationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_InheritedVelocityMultiplier_MetaData[] = {
		{ "Category", "Velocity Settings - Inherited Velocity" },
		{ "Comment", "/* How much of the collision velocity gets inherited */" },
		{ "DisplayName", "Inherited Velocity Multiplier" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceChaosDestruction.h" },
		{ "ToolTip", "How much of the collision velocity gets inherited" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_InheritedVelocityMultiplier = { "InheritedVelocityMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceChaosDestruction, InheritedVelocityMultiplier), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_InheritedVelocityMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_InheritedVelocityMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_RandomPositionMagnitudeMinMax_MetaData[] = {
		{ "Category", "Spawn Position Settings" },
		{ "Comment", "/* Random displacement value for the particle spawn position */" },
		{ "DisplayName", "Position Random Spread Magnitude Min/Max" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceChaosDestruction.h" },
		{ "ToolTip", "Random displacement value for the particle spawn position" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_RandomPositionMagnitudeMinMax = { "RandomPositionMagnitudeMinMax", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceChaosDestruction, RandomPositionMagnitudeMinMax), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_RandomPositionMagnitudeMinMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_RandomPositionMagnitudeMinMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_bGetExternalTrailingData_MetaData[] = {
		{ "Category", "Trailing Data Settings" },
		{ "Comment", "/* TODO: Explanatory comment */" },
		{ "DisplayName", "Get External Trailing Mesh and Physical Data" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceChaosDestruction.h" },
		{ "ToolTip", "TODO: Explanatory comment" },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_bGetExternalTrailingData_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceChaosDestruction*)Obj)->bGetExternalTrailingData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_bGetExternalTrailingData = { "bGetExternalTrailingData", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNiagaraDataInterfaceChaosDestruction), &Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_bGetExternalTrailingData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_bGetExternalTrailingData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_bGetExternalTrailingData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_bGetExternalBreakingData_MetaData[] = {
		{ "Category", "Breaking Data Settings" },
		{ "Comment", "/* TODO: Explanatory comment */" },
		{ "DisplayName", "Get External Breaking Mesh and Physical Data" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceChaosDestruction.h" },
		{ "ToolTip", "TODO: Explanatory comment" },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_bGetExternalBreakingData_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceChaosDestruction*)Obj)->bGetExternalBreakingData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_bGetExternalBreakingData = { "bGetExternalBreakingData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNiagaraDataInterfaceChaosDestruction), &Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_bGetExternalBreakingData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_bGetExternalBreakingData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_bGetExternalBreakingData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_ChaosBreakingMaterialSet_MetaData[] = {
		{ "Category", "Breaking Data Settings" },
		{ "Comment", "/* TODO: Explanatory comment */" },
		{ "DisplayName", "Breaking Filtered Materials" },
		{ "EditCondition", "bApplyMaterialsFilter" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceChaosDestruction.h" },
		{ "ToolTip", "TODO: Explanatory comment" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_ChaosBreakingMaterialSet = { "ChaosBreakingMaterialSet", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceChaosDestruction, ChaosBreakingMaterialSet), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_ChaosBreakingMaterialSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_ChaosBreakingMaterialSet_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_ChaosBreakingMaterialSet_ElementProp = { "ChaosBreakingMaterialSet", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_bApplyMaterialsFilter_MetaData[] = {
		{ "Category", "Breaking Data Settings" },
		{ "Comment", "/* Materials Filter */" },
		{ "DisplayName", "Apply Materials Filter" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceChaosDestruction.h" },
		{ "ToolTip", "Materials Filter" },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_bApplyMaterialsFilter_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceChaosDestruction*)Obj)->bApplyMaterialsFilter = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_bApplyMaterialsFilter = { "bApplyMaterialsFilter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNiagaraDataInterfaceChaosDestruction), &Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_bApplyMaterialsFilter_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_bApplyMaterialsFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_bApplyMaterialsFilter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_MaxDataPerCell_MetaData[] = {
		{ "Category", "SpatialHash Settings" },
		{ "DisplayName", "Max Number of Collision/Breaking Per Cell" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceChaosDestruction.h" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_MaxDataPerCell = { "MaxDataPerCell", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceChaosDestruction, MaxDataPerCell), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_MaxDataPerCell_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_MaxDataPerCell_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_SpatialHashVolumeCellSize_MetaData[] = {
		{ "Category", "SpatialHash Settings" },
		{ "Comment", "/* SpatialHash volume resolution */" },
		{ "DisplayName", "SpatialHash Volume CellSize" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceChaosDestruction.h" },
		{ "ToolTip", "SpatialHash volume resolution" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_SpatialHashVolumeCellSize = { "SpatialHashVolumeCellSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceChaosDestruction, SpatialHashVolumeCellSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_SpatialHashVolumeCellSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_SpatialHashVolumeCellSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_SpatialHashVolumeMax_MetaData[] = {
		{ "Category", "SpatialHash Settings" },
		{ "Comment", "/* SpatialHash volume max */" },
		{ "DisplayName", "SpatialHash Volume Max" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceChaosDestruction.h" },
		{ "ToolTip", "SpatialHash volume max" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_SpatialHashVolumeMax = { "SpatialHashVolumeMax", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceChaosDestruction, SpatialHashVolumeMax), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_SpatialHashVolumeMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_SpatialHashVolumeMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_SpatialHashVolumeMin_MetaData[] = {
		{ "Category", "SpatialHash Settings" },
		{ "Comment", "/* SpatialHash volume min */" },
		{ "DisplayName", "SpatialHash Volume Min" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceChaosDestruction.h" },
		{ "ToolTip", "SpatialHash volume min" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_SpatialHashVolumeMin = { "SpatialHashVolumeMin", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceChaosDestruction, SpatialHashVolumeMin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_SpatialHashVolumeMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_SpatialHashVolumeMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_DoSpatialHash_MetaData[] = {
		{ "Category", "Collision Data Settings" },
		{ "Comment", "/*  */" },
		{ "DisplayName", "Spatial Hash Collision/Breaking Data" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceChaosDestruction.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_DoSpatialHash_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceChaosDestruction*)Obj)->DoSpatialHash = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_DoSpatialHash = { "DoSpatialHash", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNiagaraDataInterfaceChaosDestruction), &Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_DoSpatialHash_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_DoSpatialHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_DoSpatialHash_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_bGetExternalCollisionData_MetaData[] = {
		{ "Category", "Collision Data Settings" },
		{ "Comment", "/* TODO: Explanatory comment */" },
		{ "DisplayName", "Get External Collision Mesh and Physical Data" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceChaosDestruction.h" },
		{ "ToolTip", "TODO: Explanatory comment" },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_bGetExternalCollisionData_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceChaosDestruction*)Obj)->bGetExternalCollisionData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_bGetExternalCollisionData = { "bGetExternalCollisionData", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNiagaraDataInterfaceChaosDestruction), &Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_bGetExternalCollisionData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_bGetExternalCollisionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_bGetExternalCollisionData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_DataSortingType_MetaData[] = {
		{ "Category", "Spawn Settings - Sorting Solver Data" },
		{ "Comment", "/**\n\x09* Sorting method to sort the collision data\n\x09*/" },
		{ "DisplayName", "Sorting Method" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceChaosDestruction.h" },
		{ "ToolTip", "Sorting method to sort the collision data" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_DataSortingType = { "DataSortingType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceChaosDestruction, DataSortingType), Z_Construct_UEnum_ChaosNiagara_EDataSortTypeEnum, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_DataSortingType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_DataSortingType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_DataSortingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_LocationZToSpawnMinMax_MetaData[] = {
		{ "Category", "Spawn Settings - Thresholds to Spawn" },
		{ "Comment", "/* Min/Max LocationX to spawn particles */" },
		{ "DisplayName", "Min/Max LocationZ To Spawn Particles" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceChaosDestruction.h" },
		{ "ToolTip", "Min/Max LocationX to spawn particles" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_LocationZToSpawnMinMax = { "LocationZToSpawnMinMax", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceChaosDestruction, LocationZToSpawnMinMax), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_LocationZToSpawnMinMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_LocationZToSpawnMinMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_LocationZToSpawn_MetaData[] = {
		{ "Category", "Spawn Settings - Thresholds to Spawn" },
		{ "Comment", "/* How to use LocationZ to filter */" },
		{ "DisplayName", "LocationZ To Spawn Particles" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceChaosDestruction.h" },
		{ "ToolTip", "How to use LocationZ to filter" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_LocationZToSpawn = { "LocationZToSpawn", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceChaosDestruction, LocationZToSpawn), Z_Construct_UEnum_ChaosNiagara_ELocationZToSpawnEnum, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_LocationZToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_LocationZToSpawn_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_LocationZToSpawn_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_LocationYToSpawnMinMax_MetaData[] = {
		{ "Category", "Spawn Settings - Thresholds to Spawn" },
		{ "Comment", "/* Min/Max LocationY to spawn particles */" },
		{ "DisplayName", "Min/Max LocationY To Spawn Particles" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceChaosDestruction.h" },
		{ "ToolTip", "Min/Max LocationY to spawn particles" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_LocationYToSpawnMinMax = { "LocationYToSpawnMinMax", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceChaosDestruction, LocationYToSpawnMinMax), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_LocationYToSpawnMinMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_LocationYToSpawnMinMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_LocationYToSpawn_MetaData[] = {
		{ "Category", "Spawn Settings - Thresholds to Spawn" },
		{ "Comment", "/* How to use LocationY to filter */" },
		{ "DisplayName", "LocationY To Spawn Particles" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceChaosDestruction.h" },
		{ "ToolTip", "How to use LocationY to filter" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_LocationYToSpawn = { "LocationYToSpawn", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceChaosDestruction, LocationYToSpawn), Z_Construct_UEnum_ChaosNiagara_ELocationYToSpawnEnum, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_LocationYToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_LocationYToSpawn_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_LocationYToSpawn_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_LocationXToSpawnMinMax_MetaData[] = {
		{ "Category", "Spawn Settings - Thresholds to Spawn" },
		{ "Comment", "/* Min/Max LocationX to spawn particles */" },
		{ "DisplayName", "Min/Max LocationX To Spawn Particles" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceChaosDestruction.h" },
		{ "ToolTip", "Min/Max LocationX to spawn particles" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_LocationXToSpawnMinMax = { "LocationXToSpawnMinMax", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceChaosDestruction, LocationXToSpawnMinMax), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_LocationXToSpawnMinMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_LocationXToSpawnMinMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_LocationXToSpawn_MetaData[] = {
		{ "Category", "Spawn Settings - Thresholds to Spawn" },
		{ "Comment", "/* How to use LocationX to filter */" },
		{ "DisplayName", "LocationX To Spawn Particles" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceChaosDestruction.h" },
		{ "ToolTip", "How to use LocationX to filter" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_LocationXToSpawn = { "LocationXToSpawn", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceChaosDestruction, LocationXToSpawn), Z_Construct_UEnum_ChaosNiagara_ELocationXToSpawnEnum, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_LocationXToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_LocationXToSpawn_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_LocationXToSpawn_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_LocationFilteringMode_MetaData[] = {
		{ "Category", "Spawn Settings - Thresholds to Spawn" },
		{ "Comment", "/* Location Filtering Mode */" },
		{ "DisplayName", "Location Filtering Mode" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceChaosDestruction.h" },
		{ "ToolTip", "Location Filtering Mode" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_LocationFilteringMode = { "LocationFilteringMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceChaosDestruction, LocationFilteringMode), Z_Construct_UEnum_ChaosNiagara_ELocationFilteringModeEnum, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_LocationFilteringMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_LocationFilteringMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_LocationFilteringMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_SurfaceTypeToSpawn_MetaData[] = {
		{ "Category", "Spawn Settings - Thresholds to Spawn" },
		{ "Comment", "/* SurfaceType to spawn particles */" },
		{ "DisplayName", "SurfaceType To Spawn Particles" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceChaosDestruction.h" },
		{ "ToolTip", "SurfaceType to spawn particles" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_SurfaceTypeToSpawn = { "SurfaceTypeToSpawn", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceChaosDestruction, SurfaceTypeToSpawn), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_SurfaceTypeToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_SurfaceTypeToSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_SolverTimeToSpawnMinMax_MetaData[] = {
		{ "Category", "Spawn Settings - Thresholds to Spawn" },
		{ "Comment", "/* Min/Max solver time mass to spawn particles */" },
		{ "DisplayName", "Min/Max SolverTime To Spawn Particles" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceChaosDestruction.h" },
		{ "ToolTip", "Min/Max solver time mass to spawn particles" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_SolverTimeToSpawnMinMax = { "SolverTimeToSpawnMinMax", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceChaosDestruction, SolverTimeToSpawnMinMax), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_SolverTimeToSpawnMinMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_SolverTimeToSpawnMinMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_VolumeToSpawnMinMax_MetaData[] = {
		{ "Category", "Spawn Settings - Thresholds to Spawn" },
		{ "Comment", "/* Min/Max volume to spawn particles */" },
		{ "DisplayName", "Min/Max Volume To Spawn Particles" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceChaosDestruction.h" },
		{ "ToolTip", "Min/Max volume to spawn particles" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_VolumeToSpawnMinMax = { "VolumeToSpawnMinMax", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceChaosDestruction, VolumeToSpawnMinMax), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_VolumeToSpawnMinMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_VolumeToSpawnMinMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_ExtentMaxToSpawnMinMax_MetaData[] = {
		{ "Category", "Spawn Settings - Thresholds to Spawn" },
		{ "Comment", "/* Min/Max ExtentMax to spawn particles */" },
		{ "DisplayName", "Min/Max ExtentMax To Spawn Particles" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceChaosDestruction.h" },
		{ "ToolTip", "Min/Max ExtentMax to spawn particles" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_ExtentMaxToSpawnMinMax = { "ExtentMaxToSpawnMinMax", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceChaosDestruction, ExtentMaxToSpawnMinMax), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_ExtentMaxToSpawnMinMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_ExtentMaxToSpawnMinMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_ExtentMinToSpawnMinMax_MetaData[] = {
		{ "Category", "Spawn Settings - Thresholds to Spawn" },
		{ "Comment", "/* Min/Max ExtentMin to spawn particles */" },
		{ "DisplayName", "Min/Max ExtentMin To Spawn Particles" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceChaosDestruction.h" },
		{ "ToolTip", "Min/Max ExtentMin to spawn particles" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_ExtentMinToSpawnMinMax = { "ExtentMinToSpawnMinMax", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceChaosDestruction, ExtentMinToSpawnMinMax), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_ExtentMinToSpawnMinMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_ExtentMinToSpawnMinMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_MassToSpawnMinMax_MetaData[] = {
		{ "Category", "Spawn Settings - Thresholds to Spawn" },
		{ "Comment", "/* Min/Max mass to spawn particles */" },
		{ "DisplayName", "Min/Max Mass To Spawn Particles" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceChaosDestruction.h" },
		{ "ToolTip", "Min/Max mass to spawn particles" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_MassToSpawnMinMax = { "MassToSpawnMinMax", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceChaosDestruction, MassToSpawnMinMax), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_MassToSpawnMinMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_MassToSpawnMinMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_SpeedToSpawnMinMax_MetaData[] = {
		{ "Category", "Spawn Settings - Thresholds to Spawn" },
		{ "Comment", "/* Min/Max speed to spawn particles */" },
		{ "DisplayName", "Min/Max Speed To Spawn Particles" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceChaosDestruction.h" },
		{ "ToolTip", "Min/Max speed to spawn particles" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_SpeedToSpawnMinMax = { "SpeedToSpawnMinMax", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceChaosDestruction, SpeedToSpawnMinMax), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_SpeedToSpawnMinMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_SpeedToSpawnMinMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_ImpulseToSpawnMinMax_MetaData[] = {
		{ "Category", "Spawn Settings - Thresholds to Spawn" },
		{ "Comment", "/* Min/Max collision accumulated impulse to spawn particles */" },
		{ "DisplayName", "Min/Max Collision Impulse To Spawn Particles" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceChaosDestruction.h" },
		{ "ToolTip", "Min/Max collision accumulated impulse to spawn particles" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_ImpulseToSpawnMinMax = { "ImpulseToSpawnMinMax", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceChaosDestruction, ImpulseToSpawnMinMax), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_ImpulseToSpawnMinMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_ImpulseToSpawnMinMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_SpawnChance_MetaData[] = {
		{ "Category", "Spawn Settings" },
		{ "Comment", "/* For every collision random number of particles will be spawned in the range of [SpawnMultiplierMin, SpawnMultiplierMax]  */" },
		{ "DisplayName", "Chance to Spawn" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceChaosDestruction.h" },
		{ "ToolTip", "For every collision random number of particles will be spawned in the range of [SpawnMultiplierMin, SpawnMultiplierMax]" },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_SpawnChance = { "SpawnChance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceChaosDestruction, SpawnChance), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_SpawnChance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_SpawnChance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_SpawnMultiplierMinMax_MetaData[] = {
		{ "Category", "Spawn Settings" },
		{ "Comment", "/* For every collision random number of particles will be spawned in the range of [SpawnMultiplierMin, SpawnMultiplierMax]  */" },
		{ "DisplayName", "Spawn Count Min/Max" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceChaosDestruction.h" },
		{ "ToolTip", "For every collision random number of particles will be spawned in the range of [SpawnMultiplierMin, SpawnMultiplierMax]" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_SpawnMultiplierMinMax = { "SpawnMultiplierMinMax", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceChaosDestruction, SpawnMultiplierMinMax), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_SpawnMultiplierMinMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_SpawnMultiplierMinMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_DoSpawn_MetaData[] = {
		{ "Category", "Spawn Settings" },
		{ "Comment", "/* Turn on/off particle spawning */" },
		{ "DisplayName", "Spawn Particles" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceChaosDestruction.h" },
		{ "ToolTip", "Turn on/off particle spawning" },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_DoSpawn_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceChaosDestruction*)Obj)->DoSpawn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_DoSpawn = { "DoSpawn", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNiagaraDataInterfaceChaosDestruction), &Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_DoSpawn_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_DoSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_DoSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_MaxNumberOfDataEntriesToSpawn_MetaData[] = {
		{ "Category", "Solver Data" },
		{ "Comment", "/* Maximum number of collision/breaking/trailing entry used for spawning particles every time data from the physics solver gets processed */" },
		{ "DisplayName", "Max Number of Data to Spawn Particles" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceChaosDestruction.h" },
		{ "ToolTip", "Maximum number of collision/breaking/trailing entry used for spawning particles every time data from the physics solver gets processed" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_MaxNumberOfDataEntriesToSpawn = { "MaxNumberOfDataEntriesToSpawn", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceChaosDestruction, MaxNumberOfDataEntriesToSpawn), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_MaxNumberOfDataEntriesToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_MaxNumberOfDataEntriesToSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_DataProcessFrequency_MetaData[] = {
		{ "Category", "Solver Data" },
		{ "Comment", "/* Number of times the RBD collision data gets processed every second */" },
		{ "DisplayName", "Data Process Frequency" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceChaosDestruction.h" },
		{ "ToolTip", "Number of times the RBD collision data gets processed every second" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_DataProcessFrequency = { "DataProcessFrequency", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceChaosDestruction, DataProcessFrequency), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_DataProcessFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_DataProcessFrequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_DataSourceType_MetaData[] = {
		{ "Category", "Solver Data" },
		{ "Comment", "/* */" },
		{ "DisplayName", "Data Source" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceChaosDestruction.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_DataSourceType = { "DataSourceType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceChaosDestruction, DataSourceType), Z_Construct_UEnum_ChaosNiagara_EDataSourceTypeEnum, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_DataSourceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_DataSourceType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_DataSourceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_ChaosSolverActorSet_MetaData[] = {
		{ "Category", "Solver" },
		{ "Comment", "/* Chaos Solver */" },
		{ "DisplayName", "Chaos Solver" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceChaosDestruction.h" },
		{ "ToolTip", "Chaos Solver" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_ChaosSolverActorSet = { "ChaosSolverActorSet", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceChaosDestruction, ChaosSolverActorSet), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_ChaosSolverActorSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_ChaosSolverActorSet_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_ChaosSolverActorSet_ElementProp = { "ChaosSolverActorSet", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AChaosSolverActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_TimeStampOfLastProcessedData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_SolverTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_LastSpawnTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_LastSpawnedPointID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_DebugType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_DebugType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_MaxLatency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_FinalVelocityMagnitudeMinMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_VelocityOffsetMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_VelocityOffsetMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_SpreadAngleMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_RandomVelocityMagnitudeMinMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_RandomVelocityGenerationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_RandomVelocityGenerationType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_InheritedVelocityMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_RandomPositionMagnitudeMinMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_bGetExternalTrailingData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_bGetExternalBreakingData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_ChaosBreakingMaterialSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_ChaosBreakingMaterialSet_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_bApplyMaterialsFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_MaxDataPerCell,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_SpatialHashVolumeCellSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_SpatialHashVolumeMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_SpatialHashVolumeMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_DoSpatialHash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_bGetExternalCollisionData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_DataSortingType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_DataSortingType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_LocationZToSpawnMinMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_LocationZToSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_LocationZToSpawn_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_LocationYToSpawnMinMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_LocationYToSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_LocationYToSpawn_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_LocationXToSpawnMinMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_LocationXToSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_LocationXToSpawn_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_LocationFilteringMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_LocationFilteringMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_SurfaceTypeToSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_SolverTimeToSpawnMinMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_VolumeToSpawnMinMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_ExtentMaxToSpawnMinMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_ExtentMinToSpawnMinMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_MassToSpawnMinMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_SpeedToSpawnMinMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_ImpulseToSpawnMinMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_SpawnChance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_SpawnMultiplierMinMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_DoSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_MaxNumberOfDataEntriesToSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_DataProcessFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_DataSourceType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_DataSourceType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_ChaosSolverActorSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::NewProp_ChaosSolverActorSet_ElementProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceChaosDestruction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::ClassParams = {
		&UNiagaraDataInterfaceChaosDestruction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraDataInterfaceChaosDestruction, 2904249332);
	template<> CHAOSNIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceChaosDestruction>()
	{
		return UNiagaraDataInterfaceChaosDestruction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraDataInterfaceChaosDestruction(Z_Construct_UClass_UNiagaraDataInterfaceChaosDestruction, &UNiagaraDataInterfaceChaosDestruction::StaticClass, TEXT("/Script/ChaosNiagara"), TEXT("UNiagaraDataInterfaceChaosDestruction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceChaosDestruction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
