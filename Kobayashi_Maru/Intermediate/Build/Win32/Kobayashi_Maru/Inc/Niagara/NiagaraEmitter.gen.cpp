// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraEmitter.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraEmitter() {}
// Cross Module References
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_EParticleAllocationMode();
	UPackage* Z_Construct_UPackage__Script_Niagara();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_EScriptExecutionMode();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEventScriptProperties();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraScript_NoRegister();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraEmitter_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraEmitter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSimulationStageBase_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraRendererProperties_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraEditorDataBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraScriptSourceBase_NoRegister();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverrides();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraPlatformSet();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraSimTarget();
// End Cross Module References
	static UEnum* EParticleAllocationMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_EParticleAllocationMode, Z_Construct_UPackage__Script_Niagara(), TEXT("EParticleAllocationMode"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<EParticleAllocationMode>()
	{
		return EParticleAllocationMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EParticleAllocationMode(EParticleAllocationMode_StaticEnum, TEXT("/Script/Niagara"), TEXT("EParticleAllocationMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_EParticleAllocationMode_Hash() { return 3084202294U; }
	UEnum* Z_Construct_UEnum_Niagara_EParticleAllocationMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EParticleAllocationMode"), 0, Get_Z_Construct_UEnum_Niagara_EParticleAllocationMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EParticleAllocationMode::AutomaticEstimate", (int64)EParticleAllocationMode::AutomaticEstimate },
				{ "EParticleAllocationMode::ManualEstimate", (int64)EParticleAllocationMode::ManualEstimate },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AutomaticEstimate.Comment", "/** This mode tries to estimate the max particle count at runtime by using previous simulations as reference.*/" },
				{ "AutomaticEstimate.Name", "EParticleAllocationMode::AutomaticEstimate" },
				{ "AutomaticEstimate.ToolTip", "This mode tries to estimate the max particle count at runtime by using previous simulations as reference." },
				{ "ManualEstimate.Comment", "/** This mode is useful if the particle count can vary wildly at runtime (e.g. due to user parameters) and a lot of reallocations happen.*/" },
				{ "ManualEstimate.Name", "EParticleAllocationMode::ManualEstimate" },
				{ "ManualEstimate.ToolTip", "This mode is useful if the particle count can vary wildly at runtime (e.g. due to user parameters) and a lot of reallocations happen." },
				{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"EParticleAllocationMode",
				"EParticleAllocationMode",
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
	static UEnum* EScriptExecutionMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_EScriptExecutionMode, Z_Construct_UPackage__Script_Niagara(), TEXT("EScriptExecutionMode"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<EScriptExecutionMode>()
	{
		return EScriptExecutionMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EScriptExecutionMode(EScriptExecutionMode_StaticEnum, TEXT("/Script/Niagara"), TEXT("EScriptExecutionMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_EScriptExecutionMode_Hash() { return 2452903699U; }
	UEnum* Z_Construct_UEnum_Niagara_EScriptExecutionMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EScriptExecutionMode"), 0, Get_Z_Construct_UEnum_Niagara_EScriptExecutionMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EScriptExecutionMode::EveryParticle", (int64)EScriptExecutionMode::EveryParticle },
				{ "EScriptExecutionMode::SpawnedParticles", (int64)EScriptExecutionMode::SpawnedParticles },
				{ "EScriptExecutionMode::SingleParticle", (int64)EScriptExecutionMode::SingleParticle },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "EveryParticle.Comment", "/** The event script is run on every existing particle in the emitter.*/" },
				{ "EveryParticle.Name", "EScriptExecutionMode::EveryParticle" },
				{ "EveryParticle.ToolTip", "The event script is run on every existing particle in the emitter." },
				{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
				{ "SingleParticle.Comment", "/** The event script is run only on the particle whose int32 ParticleIndex is specified in the event payload.*/" },
				{ "SingleParticle.Hidden", "" },
				{ "SingleParticle.Name", "EScriptExecutionMode::SingleParticle" },
				{ "SingleParticle.ToolTip", "The event script is run only on the particle whose int32 ParticleIndex is specified in the event payload." },
				{ "SpawnedParticles.Comment", "/** The event script is run only on the particles that were spawned in response to the current event in the emitter.*/" },
				{ "SpawnedParticles.Name", "EScriptExecutionMode::SpawnedParticles" },
				{ "SpawnedParticles.ToolTip", "The event script is run only on the particles that were spawned in response to the current event in the emitter." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"EScriptExecutionMode",
				"EScriptExecutionMode",
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
class UScriptStruct* FNiagaraDetailsLevelScaleOverrides::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraDetailsLevelScaleOverrides"), sizeof(FNiagaraDetailsLevelScaleOverrides), Get_Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraDetailsLevelScaleOverrides>()
{
	return FNiagaraDetailsLevelScaleOverrides::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides(FNiagaraDetailsLevelScaleOverrides::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraDetailsLevelScaleOverrides"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraDetailsLevelScaleOverrides
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraDetailsLevelScaleOverrides()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraDetailsLevelScaleOverrides")),new UScriptStruct::TCppStructOps<FNiagaraDetailsLevelScaleOverrides>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraDetailsLevelScaleOverrides;
	struct Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cine_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Cine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Epic_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Epic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_High_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_High;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Medium_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Medium;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Low_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Low;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Legacy struct for spawn count scale overrides. This is now done in FNiagaraEmitterScalabilityOverrides*/" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Legacy struct for spawn count scale overrides. This is now done in FNiagaraEmitterScalabilityOverrides" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraDetailsLevelScaleOverrides>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::NewProp_Cine_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::NewProp_Cine = { "Cine", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraDetailsLevelScaleOverrides, Cine), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::NewProp_Cine_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::NewProp_Cine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::NewProp_Epic_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::NewProp_Epic = { "Epic", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraDetailsLevelScaleOverrides, Epic), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::NewProp_Epic_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::NewProp_Epic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::NewProp_High_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::NewProp_High = { "High", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraDetailsLevelScaleOverrides, High), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::NewProp_High_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::NewProp_High_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::NewProp_Medium_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::NewProp_Medium = { "Medium", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraDetailsLevelScaleOverrides, Medium), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::NewProp_Medium_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::NewProp_Medium_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::NewProp_Low_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::NewProp_Low = { "Low", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraDetailsLevelScaleOverrides, Low), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::NewProp_Low_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::NewProp_Low_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::NewProp_Cine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::NewProp_Epic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::NewProp_High,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::NewProp_Medium,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::NewProp_Low,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraDetailsLevelScaleOverrides",
		sizeof(FNiagaraDetailsLevelScaleOverrides),
		alignof(FNiagaraDetailsLevelScaleOverrides),
		Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraDetailsLevelScaleOverrides"), sizeof(FNiagaraDetailsLevelScaleOverrides), Get_Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Hash() { return 4155116776U; }
class UScriptStruct* FNiagaraEventScriptProperties::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraEventScriptProperties, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraEventScriptProperties"), sizeof(FNiagaraEventScriptProperties), Get_Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraEventScriptProperties>()
{
	return FNiagaraEventScriptProperties::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraEventScriptProperties(FNiagaraEventScriptProperties::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraEventScriptProperties"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraEventScriptProperties
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraEventScriptProperties()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraEventScriptProperties")),new UScriptStruct::TCppStructOps<FNiagaraEventScriptProperties>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraEventScriptProperties;
	struct Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinSpawnNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_MinSpawnNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRandomSpawnNumber_MetaData[];
#endif
		static void NewProp_bRandomSpawnNumber_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRandomSpawnNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceEventName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SourceEventName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceEmitterID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceEmitterID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxEventsPerFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_MaxEventsPerFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_SpawnNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExecutionMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ExecutionMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ExecutionMode_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraEventScriptProperties>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_MinSpawnNumber_MetaData[] = {
		{ "Category", "Event Handler Options" },
		{ "Comment", "/** The minimum spawn number when random spawn is used. Spawn Number is used as the maximum range. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "The minimum spawn number when random spawn is used. Spawn Number is used as the maximum range." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_MinSpawnNumber = { "MinSpawnNumber", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraEventScriptProperties, MinSpawnNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_MinSpawnNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_MinSpawnNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_bRandomSpawnNumber_MetaData[] = {
		{ "Category", "Event Handler Options" },
		{ "Comment", "/** Whether using a random spawn number. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Whether using a random spawn number." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_bRandomSpawnNumber_SetBit(void* Obj)
	{
		((FNiagaraEventScriptProperties*)Obj)->bRandomSpawnNumber = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_bRandomSpawnNumber = { "bRandomSpawnNumber", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNiagaraEventScriptProperties), &Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_bRandomSpawnNumber_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_bRandomSpawnNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_bRandomSpawnNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_SourceEventName_MetaData[] = {
		{ "Category", "Event Handler Options" },
		{ "Comment", "/** The name of the event generated. This will be \"Collision\" for collision events and the Event Name field on the DataSetWrite node in the module graph for others.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "The name of the event generated. This will be \"Collision\" for collision events and the Event Name field on the DataSetWrite node in the module graph for others." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_SourceEventName = { "SourceEventName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraEventScriptProperties, SourceEventName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_SourceEventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_SourceEventName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_SourceEmitterID_MetaData[] = {
		{ "Category", "Event Handler Options" },
		{ "Comment", "/** Id of the Emitter Handle that generated the event. If all zeroes, the event generator is assumed to be this emitter.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Id of the Emitter Handle that generated the event. If all zeroes, the event generator is assumed to be this emitter." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_SourceEmitterID = { "SourceEmitterID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraEventScriptProperties, SourceEmitterID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_SourceEmitterID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_SourceEmitterID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_MaxEventsPerFrame_MetaData[] = {
		{ "Category", "Event Handler Options" },
		{ "Comment", "/** Controls how many events are consumed by this event handler. If there are more events generated than this value, they will be ignored.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Controls how many events are consumed by this event handler. If there are more events generated than this value, they will be ignored." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_MaxEventsPerFrame = { "MaxEventsPerFrame", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraEventScriptProperties, MaxEventsPerFrame), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_MaxEventsPerFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_MaxEventsPerFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_SpawnNumber_MetaData[] = {
		{ "Category", "Event Handler Options" },
		{ "Comment", "/** Controls whether or not particles are spawned as a result of handling the event. Only valid for EScriptExecutionMode::SpawnedParticles. If Random Spawn Number is used, this will act as the maximum spawn range. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Controls whether or not particles are spawned as a result of handling the event. Only valid for EScriptExecutionMode::SpawnedParticles. If Random Spawn Number is used, this will act as the maximum spawn range." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_SpawnNumber = { "SpawnNumber", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraEventScriptProperties, SpawnNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_SpawnNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_SpawnNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_ExecutionMode_MetaData[] = {
		{ "Category", "Event Handler Options" },
		{ "Comment", "/** Controls which particles have the event script run on them.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Controls which particles have the event script run on them." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_ExecutionMode = { "ExecutionMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraEventScriptProperties, ExecutionMode), Z_Construct_UEnum_Niagara_EScriptExecutionMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_ExecutionMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_ExecutionMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_ExecutionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_MinSpawnNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_bRandomSpawnNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_SourceEventName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_SourceEmitterID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_MaxEventsPerFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_SpawnNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_ExecutionMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_ExecutionMode_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties,
		&NewStructOps,
		"NiagaraEventScriptProperties",
		sizeof(FNiagaraEventScriptProperties),
		alignof(FNiagaraEventScriptProperties),
		Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEventScriptProperties()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraEventScriptProperties"), sizeof(FNiagaraEventScriptProperties), Get_Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Hash() { return 2472923302U; }
class UScriptStruct* FNiagaraEmitterScriptProperties::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraEmitterScriptProperties"), sizeof(FNiagaraEmitterScriptProperties), Get_Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraEmitterScriptProperties>()
{
	return FNiagaraEmitterScriptProperties::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraEmitterScriptProperties(FNiagaraEmitterScriptProperties::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraEmitterScriptProperties"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraEmitterScriptProperties
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraEmitterScriptProperties()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraEmitterScriptProperties")),new UScriptStruct::TCppStructOps<FNiagaraEmitterScriptProperties>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraEmitterScriptProperties;
	struct Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventGenerators_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EventGenerators;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventGenerators_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventReceivers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EventReceivers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventReceivers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Script_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Script;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraEmitterScriptProperties>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::NewProp_EventGenerators_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::NewProp_EventGenerators = { "EventGenerators", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraEmitterScriptProperties, EventGenerators), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::NewProp_EventGenerators_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::NewProp_EventGenerators_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::NewProp_EventGenerators_Inner = { "EventGenerators", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::NewProp_EventReceivers_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::NewProp_EventReceivers = { "EventReceivers", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraEmitterScriptProperties, EventReceivers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::NewProp_EventReceivers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::NewProp_EventReceivers_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::NewProp_EventReceivers_Inner = { "EventReceivers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::NewProp_Script_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::NewProp_Script = { "Script", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraEmitterScriptProperties, Script), Z_Construct_UClass_UNiagaraScript_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::NewProp_Script_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::NewProp_Script_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::NewProp_EventGenerators,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::NewProp_EventGenerators_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::NewProp_EventReceivers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::NewProp_EventReceivers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::NewProp_Script,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraEmitterScriptProperties",
		sizeof(FNiagaraEmitterScriptProperties),
		alignof(FNiagaraEmitterScriptProperties),
		Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraEmitterScriptProperties"), sizeof(FNiagaraEmitterScriptProperties), Get_Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Hash() { return 917048812U; }
class UScriptStruct* FNiagaraEventGeneratorProperties::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraEventGeneratorProperties"), sizeof(FNiagaraEventGeneratorProperties), Get_Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraEventGeneratorProperties>()
{
	return FNiagaraEventGeneratorProperties::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraEventGeneratorProperties(FNiagaraEventGeneratorProperties::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraEventGeneratorProperties"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraEventGeneratorProperties
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraEventGeneratorProperties()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraEventGeneratorProperties")),new UScriptStruct::TCppStructOps<FNiagaraEventGeneratorProperties>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraEventGeneratorProperties;
	struct Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataSetCompiledData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DataSetCompiledData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxEventsPerFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxEventsPerFrame;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraEventGeneratorProperties>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics::NewProp_DataSetCompiledData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics::NewProp_DataSetCompiledData = { "DataSetCompiledData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraEventGeneratorProperties, DataSetCompiledData), Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics::NewProp_DataSetCompiledData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics::NewProp_DataSetCompiledData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics::NewProp_ID_MetaData[] = {
		{ "Comment", "//TODO - More complex allocation so that we can grow dynamically if more space is needed ?\n" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "TODO - More complex allocation so that we can grow dynamically if more space is needed ?" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraEventGeneratorProperties, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics::NewProp_MaxEventsPerFrame_MetaData[] = {
		{ "Category", "Event Receiver" },
		{ "Comment", "/** Max Number of Events that can be generated per frame. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Max Number of Events that can be generated per frame." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics::NewProp_MaxEventsPerFrame = { "MaxEventsPerFrame", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraEventGeneratorProperties, MaxEventsPerFrame), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics::NewProp_MaxEventsPerFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics::NewProp_MaxEventsPerFrame_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics::NewProp_DataSetCompiledData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics::NewProp_MaxEventsPerFrame,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraEventGeneratorProperties",
		sizeof(FNiagaraEventGeneratorProperties),
		alignof(FNiagaraEventGeneratorProperties),
		Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraEventGeneratorProperties"), sizeof(FNiagaraEventGeneratorProperties), Get_Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Hash() { return 3883852784U; }
class UScriptStruct* FNiagaraEventReceiverProperties::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraEventReceiverProperties"), sizeof(FNiagaraEventReceiverProperties), Get_Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraEventReceiverProperties>()
{
	return FNiagaraEventReceiverProperties::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraEventReceiverProperties(FNiagaraEventReceiverProperties::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraEventReceiverProperties"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraEventReceiverProperties
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraEventReceiverProperties()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraEventReceiverProperties")),new UScriptStruct::TCppStructOps<FNiagaraEventReceiverProperties>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraEventReceiverProperties;
	struct Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceEmitter_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SourceEmitter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceEventGenerator_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SourceEventGenerator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//TODO: Event action that spawns other whole Systems?\n//One that calls a BP exposed delegate?\n" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "TODO: Event action that spawns other whole Systems?\nOne that calls a BP exposed delegate?" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraEventReceiverProperties>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics::NewProp_SourceEmitter_MetaData[] = {
		{ "Category", "Event Receiver" },
		{ "Comment", "/** The name of the emitter from which the Event Generator is taken. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "The name of the emitter from which the Event Generator is taken." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics::NewProp_SourceEmitter = { "SourceEmitter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraEventReceiverProperties, SourceEmitter), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics::NewProp_SourceEmitter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics::NewProp_SourceEmitter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics::NewProp_SourceEventGenerator_MetaData[] = {
		{ "Category", "Event Receiver" },
		{ "Comment", "/** The name of the EventGenerator to bind to. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "The name of the EventGenerator to bind to." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics::NewProp_SourceEventGenerator = { "SourceEventGenerator", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraEventReceiverProperties, SourceEventGenerator), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics::NewProp_SourceEventGenerator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics::NewProp_SourceEventGenerator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Event Receiver" },
		{ "Comment", "/** The name of this receiver. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "The name of this receiver." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraEventReceiverProperties, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics::NewProp_SourceEmitter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics::NewProp_SourceEventGenerator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraEventReceiverProperties",
		sizeof(FNiagaraEventReceiverProperties),
		alignof(FNiagaraEventReceiverProperties),
		Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraEventReceiverProperties"), sizeof(FNiagaraEventReceiverProperties), Get_Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Hash() { return 1842753078U; }
	void UNiagaraEmitter::StaticRegisterNativesUNiagaraEmitter()
	{
	}
	UClass* Z_Construct_UClass_UNiagaraEmitter_NoRegister()
	{
		return UNiagaraEmitter::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraEmitter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentAtLastMerge_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentAtLastMerge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Parent;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SharedEventGeneratorIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SharedEventGeneratorIds;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SharedEventGeneratorIds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GPUComputeScript_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GPUComputeScript;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimulationStages_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SimulationStages;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SimulationStages_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventHandlerScriptProps_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EventHandlerScriptProps;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventHandlerScriptProps_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RendererProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RendererProperties;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RendererProperties_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueEmitterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UniqueEmitterName;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EditorData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChangeId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChangeId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentScratchPadScripts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ParentScratchPadScripts;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentScratchPadScripts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScratchPadScripts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ScratchPadScripts;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ScratchPadScripts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TemplateAssetDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_TemplateAssetDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsTemplateAsset_MetaData[];
#endif
		static void NewProp_bIsTemplateAsset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsTemplateAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExposeToLibrary_MetaData[];
#endif
		static void NewProp_bExposeToLibrary_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExposeToLibrary;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailImageOutOfDate_MetaData[];
#endif
		static void NewProp_ThumbnailImageOutOfDate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ThumbnailImageOutOfDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThumbnailImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBakeOutRapidIteration_MetaData[];
#endif
		static void NewProp_bBakeOutRapidIteration_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBakeOutRapidIteration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GraphSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GraphSource;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLimitDeltaTime_MetaData[];
#endif
		static void NewProp_bLimitDeltaTime_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLimitDeltaTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDeprecatedShaderStagesEnabled_MetaData[];
#endif
		static void NewProp_bDeprecatedShaderStagesEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDeprecatedShaderStagesEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSimulationStagesEnabled_MetaData[];
#endif
		static void NewProp_bSimulationStagesEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSimulationStagesEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnStages_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_SpawnStages;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_SpawnStages_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxUpdateIterations_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_MaxUpdateIterations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultShaderStageIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_DefaultShaderStageIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDeltaTimePerTick_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDeltaTimePerTick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRequiresPersistentIDs_MetaData[];
#endif
		static void NewProp_bRequiresPersistentIDs_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRequiresPersistentIDs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideGlobalSpawnCountScale_MetaData[];
#endif
		static void NewProp_bOverrideGlobalSpawnCountScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideGlobalSpawnCountScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseMaxDetailLevel_MetaData[];
#endif
		static void NewProp_bUseMaxDetailLevel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseMaxDetailLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseMinDetailLevel_MetaData[];
#endif
		static void NewProp_bUseMinDetailLevel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseMinDetailLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFixedBounds_MetaData[];
#endif
		static void NewProp_bFixedBounds_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFixedBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInterpolatedSpawning_MetaData[];
#endif
		static void NewProp_bInterpolatedSpawning_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInterpolatedSpawning;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScalabilityOverrides_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScalabilityOverrides;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Platforms_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Platforms;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalSpawnCountScaleOverrides_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GlobalSpawnCountScaleOverrides;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDetailLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxDetailLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDetailLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinDetailLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FixedBounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FixedBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SimTarget;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SimTarget_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmitterUpdateScriptProps_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EmitterUpdateScriptProps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmitterSpawnScriptProps_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EmitterSpawnScriptProps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnScriptProps_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnScriptProps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateScriptProps_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UpdateScriptProps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreAllocationCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PreAllocationCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllocationMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AllocationMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AllocationMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomSeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RandomSeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDeterminism_MetaData[];
#endif
		static void NewProp_bDeterminism_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDeterminism;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLocalSpace_MetaData[];
#endif
		static void NewProp_bLocalSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLocalSpace;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraEmitter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n *\x09UNiagaraEmitter stores the attributes of an FNiagaraEmitterInstance\n *\x09that need to be serialized and are used for its initialization \n */" },
		{ "IncludePath", "NiagaraEmitter.h" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "UNiagaraEmitter stores the attributes of an FNiagaraEmitterInstance\nthat need to be serialized and are used for its initialization" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ParentAtLastMerge_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ParentAtLastMerge = { "ParentAtLastMerge", nullptr, (EPropertyFlags)0x0040000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, ParentAtLastMerge), Z_Construct_UClass_UNiagaraEmitter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ParentAtLastMerge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ParentAtLastMerge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_Parent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0040000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, Parent), Z_Construct_UClass_UNiagaraEmitter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_Parent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SharedEventGeneratorIds_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SharedEventGeneratorIds = { "SharedEventGeneratorIds", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, SharedEventGeneratorIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SharedEventGeneratorIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SharedEventGeneratorIds_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SharedEventGeneratorIds_Inner = { "SharedEventGeneratorIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_GPUComputeScript_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_GPUComputeScript = { "GPUComputeScript", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, GPUComputeScript), Z_Construct_UClass_UNiagaraScript_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_GPUComputeScript_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_GPUComputeScript_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SimulationStages_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "NiagaraNoMerge", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SimulationStages = { "SimulationStages", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, SimulationStages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SimulationStages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SimulationStages_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SimulationStages_Inner = { "SimulationStages", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UNiagaraSimulationStageBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_EventHandlerScriptProps_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "NiagaraNoMerge", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_EventHandlerScriptProps = { "EventHandlerScriptProps", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, EventHandlerScriptProps), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_EventHandlerScriptProps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_EventHandlerScriptProps_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_EventHandlerScriptProps_Inner = { "EventHandlerScriptProps", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNiagaraEventScriptProperties, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_RendererProperties_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_RendererProperties = { "RendererProperties", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, RendererProperties), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_RendererProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_RendererProperties_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_RendererProperties_Inner = { "RendererProperties", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UNiagaraRendererProperties_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_UniqueEmitterName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_UniqueEmitterName = { "UniqueEmitterName", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, UniqueEmitterName), METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_UniqueEmitterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_UniqueEmitterName_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_EditorData_MetaData[] = {
		{ "Comment", "/** Data used by the editor to maintain UI state etc.. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Data used by the editor to maintain UI state etc.." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_EditorData = { "EditorData", nullptr, (EPropertyFlags)0x0040000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, EditorData), Z_Construct_UClass_UNiagaraEditorDataBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_EditorData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_EditorData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ChangeId_MetaData[] = {
		{ "Comment", "/** Adjusted every time that we compile this emitter. Lets us know that we might differ from any cached versions.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Adjusted every time that we compile this emitter. Lets us know that we might differ from any cached versions." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ChangeId = { "ChangeId", nullptr, (EPropertyFlags)0x0040000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, ChangeId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ChangeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ChangeId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ParentScratchPadScripts_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ParentScratchPadScripts = { "ParentScratchPadScripts", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, ParentScratchPadScripts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ParentScratchPadScripts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ParentScratchPadScripts_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ParentScratchPadScripts_Inner = { "ParentScratchPadScripts", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UNiagaraScript_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ScratchPadScripts_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ScratchPadScripts = { "ScratchPadScripts", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, ScratchPadScripts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ScratchPadScripts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ScratchPadScripts_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ScratchPadScripts_Inner = { "ScratchPadScripts", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UNiagaraScript_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_TemplateAssetDescription_MetaData[] = {
		{ "Category", "Asset Options" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_TemplateAssetDescription = { "TemplateAssetDescription", nullptr, (EPropertyFlags)0x0010050800000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, TemplateAssetDescription), METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_TemplateAssetDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_TemplateAssetDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bIsTemplateAsset_MetaData[] = {
		{ "Category", "Asset Options" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bIsTemplateAsset_SetBit(void* Obj)
	{
		((UNiagaraEmitter*)Obj)->bIsTemplateAsset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bIsTemplateAsset = { "bIsTemplateAsset", nullptr, (EPropertyFlags)0x0010050800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNiagaraEmitter), &Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bIsTemplateAsset_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bIsTemplateAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bIsTemplateAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bExposeToLibrary_MetaData[] = {
		{ "Category", "Asset Options" },
		{ "Comment", "/* If this emitter is exposed to the library. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "If this emitter is exposed to the library." },
	};
#endif
	void Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bExposeToLibrary_SetBit(void* Obj)
	{
		((UNiagaraEmitter*)Obj)->bExposeToLibrary = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bExposeToLibrary = { "bExposeToLibrary", nullptr, (EPropertyFlags)0x0010050800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNiagaraEmitter), &Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bExposeToLibrary_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bExposeToLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bExposeToLibrary_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ThumbnailImageOutOfDate_MetaData[] = {
		{ "Comment", "/** Internal: Indicates the thumbnail image is out of date.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Internal: Indicates the thumbnail image is out of date." },
	};
#endif
	void Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ThumbnailImageOutOfDate_SetBit(void* Obj)
	{
		((UNiagaraEmitter*)Obj)->ThumbnailImageOutOfDate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ThumbnailImageOutOfDate = { "ThumbnailImageOutOfDate", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNiagaraEmitter), &Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ThumbnailImageOutOfDate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ThumbnailImageOutOfDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ThumbnailImageOutOfDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ThumbnailImage_MetaData[] = {
		{ "Comment", "/** Internal: The thumbnail image.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Internal: The thumbnail image." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ThumbnailImage = { "ThumbnailImage", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, ThumbnailImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ThumbnailImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ThumbnailImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bBakeOutRapidIteration_MetaData[] = {
		{ "Category", "Emitter" },
		{ "Comment", "/** Should we enable rapid iteration removal if the system is also set to remove rapid iteration parameters on compile? This value defaults to true.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Should we enable rapid iteration removal if the system is also set to remove rapid iteration parameters on compile? This value defaults to true." },
	};
#endif
	void Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bBakeOutRapidIteration_SetBit(void* Obj)
	{
		((UNiagaraEmitter*)Obj)->bBakeOutRapidIteration = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bBakeOutRapidIteration = { "bBakeOutRapidIteration", nullptr, (EPropertyFlags)0x0010040800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNiagaraEmitter), &Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bBakeOutRapidIteration_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bBakeOutRapidIteration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bBakeOutRapidIteration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_GraphSource_MetaData[] = {
		{ "Comment", "/** 'Source' data/graphs for the scripts used by this emitter. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "'Source' data/graphs for the scripts used by this emitter." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_GraphSource = { "GraphSource", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, GraphSource), Z_Construct_UClass_UNiagaraScriptSourceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_GraphSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_GraphSource_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bLimitDeltaTime_MetaData[] = {
		{ "Category", "Emitter" },
		{ "Comment", "/** Whether to limit the max tick delta time or not. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Whether to limit the max tick delta time or not." },
	};
#endif
	void Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bLimitDeltaTime_SetBit(void* Obj)
	{
		((UNiagaraEmitter*)Obj)->bLimitDeltaTime = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bLimitDeltaTime = { "bLimitDeltaTime", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNiagaraEmitter), &Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bLimitDeltaTime_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bLimitDeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bLimitDeltaTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bDeprecatedShaderStagesEnabled_MetaData[] = {
		{ "Category", "Simulation Stages" },
		{ "Comment", "/** Get whether or not to use shader stages. */" },
		{ "DisplayName", "Enable Deprecated Shader Stages (Experimental GPU Only)" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Get whether or not to use shader stages." },
	};
#endif
	void Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bDeprecatedShaderStagesEnabled_SetBit(void* Obj)
	{
		((UNiagaraEmitter*)Obj)->bDeprecatedShaderStagesEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bDeprecatedShaderStagesEnabled = { "bDeprecatedShaderStagesEnabled", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNiagaraEmitter), &Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bDeprecatedShaderStagesEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bDeprecatedShaderStagesEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bDeprecatedShaderStagesEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bSimulationStagesEnabled_MetaData[] = {
		{ "Category", "Simulation Stages" },
		{ "Comment", "/** Get whether or not to use simulation stages. */" },
		{ "DisplayName", "Enable Simulation Stages (Experimental GPU Only)" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Get whether or not to use simulation stages." },
	};
#endif
	void Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bSimulationStagesEnabled_SetBit(void* Obj)
	{
		((UNiagaraEmitter*)Obj)->bSimulationStagesEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bSimulationStagesEnabled = { "bSimulationStagesEnabled", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNiagaraEmitter), &Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bSimulationStagesEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bSimulationStagesEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bSimulationStagesEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SpawnStages_MetaData[] = {
		{ "Category", "Simulation Stages" },
		{ "Comment", "/** Get whether or not shaderstages spwn. */" },
		{ "DisplayAfter", "MaxUpdateIterations" },
		{ "EditCondition", "bDeprecatedShaderStagesEnabled" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Get whether or not shaderstages spwn." },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SpawnStages = { "SpawnStages", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, SpawnStages), METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SpawnStages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SpawnStages_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SpawnStages_ElementProp = { "SpawnStages", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_MaxUpdateIterations_MetaData[] = {
		{ "Category", "Simulation Stages" },
		{ "Comment", "/** Get the number of shader stages that we fire off. */" },
		{ "DisplayAfter", "DefaultShaderStageIndex" },
		{ "EditCondition", "bDeprecatedShaderStagesEnabled" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Get the number of shader stages that we fire off." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_MaxUpdateIterations = { "MaxUpdateIterations", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, MaxUpdateIterations), METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_MaxUpdateIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_MaxUpdateIterations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_DefaultShaderStageIndex_MetaData[] = {
		{ "Category", "Simulation Stages" },
		{ "Comment", "/** Get the default shader stage index. */" },
		{ "DisplayAfter", "bDeprecatedShaderStagesEnabled" },
		{ "EditCondition", "bDeprecatedShaderStagesEnabled" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Get the default shader stage index." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_DefaultShaderStageIndex = { "DefaultShaderStageIndex", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, DefaultShaderStageIndex), METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_DefaultShaderStageIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_DefaultShaderStageIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_MaxDeltaTimePerTick_MetaData[] = {
		{ "Category", "Emitter" },
		{ "Comment", "/** Limits the delta time per tick to prevent simulation spikes due to frame lags. */" },
		{ "EditCondition", "bLimitDeltaTime" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Limits the delta time per tick to prevent simulation spikes due to frame lags." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_MaxDeltaTimePerTick = { "MaxDeltaTimePerTick", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, MaxDeltaTimePerTick), METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_MaxDeltaTimePerTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_MaxDeltaTimePerTick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bRequiresPersistentIDs_MetaData[] = {
		{ "Category", "Emitter" },
		{ "Comment", "/** Do particles in this emitter require a persistent ID? */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Do particles in this emitter require a persistent ID?" },
	};
#endif
	void Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bRequiresPersistentIDs_SetBit(void* Obj)
	{
		((UNiagaraEmitter*)Obj)->bRequiresPersistentIDs = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bRequiresPersistentIDs = { "bRequiresPersistentIDs", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNiagaraEmitter), &Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bRequiresPersistentIDs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bRequiresPersistentIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bRequiresPersistentIDs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bOverrideGlobalSpawnCountScale_MetaData[] = {
		{ "Comment", "/** Legacy bool to control overriding the global spawn count scales. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Legacy bool to control overriding the global spawn count scales." },
	};
#endif
	void Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bOverrideGlobalSpawnCountScale_SetBit(void* Obj)
	{
		((UNiagaraEmitter*)Obj)->bOverrideGlobalSpawnCountScale_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bOverrideGlobalSpawnCountScale = { "bOverrideGlobalSpawnCountScale", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNiagaraEmitter), &Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bOverrideGlobalSpawnCountScale_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bOverrideGlobalSpawnCountScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bOverrideGlobalSpawnCountScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bUseMaxDetailLevel_MetaData[] = {
		{ "Comment", "/** Whether to use the min detail or not. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Whether to use the min detail or not." },
	};
#endif
	void Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bUseMaxDetailLevel_SetBit(void* Obj)
	{
		((UNiagaraEmitter*)Obj)->bUseMaxDetailLevel_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bUseMaxDetailLevel = { "bUseMaxDetailLevel", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNiagaraEmitter), &Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bUseMaxDetailLevel_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bUseMaxDetailLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bUseMaxDetailLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bUseMinDetailLevel_MetaData[] = {
		{ "Comment", "/** Whether to use the min detail or not. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Whether to use the min detail or not." },
	};
#endif
	void Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bUseMinDetailLevel_SetBit(void* Obj)
	{
		((UNiagaraEmitter*)Obj)->bUseMinDetailLevel_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bUseMinDetailLevel = { "bUseMinDetailLevel", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNiagaraEmitter), &Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bUseMinDetailLevel_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bUseMinDetailLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bUseMinDetailLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bFixedBounds_MetaData[] = {
		{ "Category", "Emitter" },
		{ "Comment", "/** Whether or not fixed bounds are enabled. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Whether or not fixed bounds are enabled." },
	};
#endif
	void Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bFixedBounds_SetBit(void* Obj)
	{
		((UNiagaraEmitter*)Obj)->bFixedBounds = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bFixedBounds = { "bFixedBounds", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNiagaraEmitter), &Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bFixedBounds_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bFixedBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bFixedBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bInterpolatedSpawning_MetaData[] = {
		{ "Category", "Emitter" },
		{ "Comment", "/** When enabled, this will spawn using interpolated parameter values and perform a partial update at spawn time. This adds significant additional cost for spawning but will produce much smoother spawning for high spawn rates, erratic frame rates and fast moving emitters. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "When enabled, this will spawn using interpolated parameter values and perform a partial update at spawn time. This adds significant additional cost for spawning but will produce much smoother spawning for high spawn rates, erratic frame rates and fast moving emitters." },
	};
#endif
	void Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bInterpolatedSpawning_SetBit(void* Obj)
	{
		((UNiagaraEmitter*)Obj)->bInterpolatedSpawning = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bInterpolatedSpawning = { "bInterpolatedSpawning", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNiagaraEmitter), &Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bInterpolatedSpawning_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bInterpolatedSpawning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bInterpolatedSpawning_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ScalabilityOverrides_MetaData[] = {
		{ "Category", "Scalability" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ScalabilityOverrides = { "ScalabilityOverrides", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, ScalabilityOverrides), Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverrides, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ScalabilityOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ScalabilityOverrides_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_Platforms_MetaData[] = {
		{ "Category", "Scalability" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_Platforms = { "Platforms", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, Platforms), Z_Construct_UScriptStruct_FNiagaraPlatformSet, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_Platforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_Platforms_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_GlobalSpawnCountScaleOverrides_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_GlobalSpawnCountScaleOverrides = { "GlobalSpawnCountScaleOverrides", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, GlobalSpawnCountScaleOverrides_DEPRECATED), Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_GlobalSpawnCountScaleOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_GlobalSpawnCountScaleOverrides_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_MaxDetailLevel_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_MaxDetailLevel = { "MaxDetailLevel", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, MaxDetailLevel_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_MaxDetailLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_MaxDetailLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_MinDetailLevel_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_MinDetailLevel = { "MinDetailLevel", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, MinDetailLevel_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_MinDetailLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_MinDetailLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_FixedBounds_MetaData[] = {
		{ "Category", "Emitter" },
		{ "Comment", "/** The fixed bounding box value. bFixedBounds is the condition whether the fixed bounds can be edited. */" },
		{ "EditCondition", "bFixedBounds" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "The fixed bounding box value. bFixedBounds is the condition whether the fixed bounds can be edited." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_FixedBounds = { "FixedBounds", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, FixedBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_FixedBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_FixedBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SimTarget_MetaData[] = {
		{ "Category", "Emitter" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SimTarget = { "SimTarget", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, SimTarget), Z_Construct_UEnum_Niagara_ENiagaraSimTarget, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SimTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SimTarget_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SimTarget_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_EmitterUpdateScriptProps_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_EmitterUpdateScriptProps = { "EmitterUpdateScriptProps", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, EmitterUpdateScriptProps), Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_EmitterUpdateScriptProps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_EmitterUpdateScriptProps_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_EmitterSpawnScriptProps_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_EmitterSpawnScriptProps = { "EmitterSpawnScriptProps", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, EmitterSpawnScriptProps), Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_EmitterSpawnScriptProps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_EmitterSpawnScriptProps_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SpawnScriptProps_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SpawnScriptProps = { "SpawnScriptProps", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, SpawnScriptProps), Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SpawnScriptProps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SpawnScriptProps_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_UpdateScriptProps_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_UpdateScriptProps = { "UpdateScriptProps", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, UpdateScriptProps), Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_UpdateScriptProps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_UpdateScriptProps_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_PreAllocationCount_MetaData[] = {
		{ "Category", "Emitter" },
		{ "Comment", "/** \n\x09The emitter will allocate at least this many particles on it's first tick.\n\x09This can aid performance by avoiding many allocations as an emitter ramps up to it's max size.\n\x09*/" },
		{ "EditCondition", "AllocationMode == EParticleAllocationMode::ManualEstimate" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "The emitter will allocate at least this many particles on it's first tick.\nThis can aid performance by avoiding many allocations as an emitter ramps up to it's max size." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_PreAllocationCount = { "PreAllocationCount", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, PreAllocationCount), METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_PreAllocationCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_PreAllocationCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_AllocationMode_MetaData[] = {
		{ "Category", "Emitter" },
		{ "Comment", "/**\n\x09The emitter needs to allocate memory for the particles each tick.\n\x09To prevent reallocations, the emitter should allocate as much memory as is needed for the max particle count.\n\x09This setting controls if the allocation size should be automatically determined or manually entered.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "The emitter needs to allocate memory for the particles each tick.\nTo prevent reallocations, the emitter should allocate as much memory as is needed for the max particle count.\nThis setting controls if the allocation size should be automatically determined or manually entered." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_AllocationMode = { "AllocationMode", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, AllocationMode), Z_Construct_UEnum_Niagara_EParticleAllocationMode, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_AllocationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_AllocationMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_AllocationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_RandomSeed_MetaData[] = {
		{ "Category", "Emitter" },
		{ "Comment", "/** An emitter-based seed for the deterministic random number generator. */" },
		{ "EditCondition", "bDeterminism" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "An emitter-based seed for the deterministic random number generator." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, RandomSeed), METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_RandomSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_RandomSeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bDeterminism_MetaData[] = {
		{ "Category", "Emitter" },
		{ "Comment", "/** Toggles whether to globally make the random number generator be deterministic or non-deterministic. Any random calculation that is set to the emitter defaults will inherit this value. It is still possible to tweak individual random to be deterministic or not. In this case deterministic means that it will return the same results for the same configuration of the emitter as long as delta time is not variable. Any changes to the emitter's individual scripts will adjust the results. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Toggles whether to globally make the random number generator be deterministic or non-deterministic. Any random calculation that is set to the emitter defaults will inherit this value. It is still possible to tweak individual random to be deterministic or not. In this case deterministic means that it will return the same results for the same configuration of the emitter as long as delta time is not variable. Any changes to the emitter's individual scripts will adjust the results." },
	};
#endif
	void Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bDeterminism_SetBit(void* Obj)
	{
		((UNiagaraEmitter*)Obj)->bDeterminism = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bDeterminism = { "bDeterminism", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNiagaraEmitter), &Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bDeterminism_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bDeterminism_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bDeterminism_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bLocalSpace_MetaData[] = {
		{ "Category", "Emitter" },
		{ "Comment", "/** Toggles whether or not the particles within this emitter are relative to the emitter origin or in global space. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Toggles whether or not the particles within this emitter are relative to the emitter origin or in global space." },
	};
#endif
	void Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bLocalSpace_SetBit(void* Obj)
	{
		((UNiagaraEmitter*)Obj)->bLocalSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bLocalSpace = { "bLocalSpace", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNiagaraEmitter), &Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bLocalSpace_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bLocalSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bLocalSpace_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraEmitter_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ParentAtLastMerge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_Parent,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SharedEventGeneratorIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SharedEventGeneratorIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_GPUComputeScript,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SimulationStages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SimulationStages_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_EventHandlerScriptProps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_EventHandlerScriptProps_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_RendererProperties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_RendererProperties_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_UniqueEmitterName,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_EditorData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ChangeId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ParentScratchPadScripts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ParentScratchPadScripts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ScratchPadScripts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ScratchPadScripts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_TemplateAssetDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bIsTemplateAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bExposeToLibrary,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ThumbnailImageOutOfDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ThumbnailImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bBakeOutRapidIteration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_GraphSource,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bLimitDeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bDeprecatedShaderStagesEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bSimulationStagesEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SpawnStages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SpawnStages_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_MaxUpdateIterations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_DefaultShaderStageIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_MaxDeltaTimePerTick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bRequiresPersistentIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bOverrideGlobalSpawnCountScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bUseMaxDetailLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bUseMinDetailLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bFixedBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bInterpolatedSpawning,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ScalabilityOverrides,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_Platforms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_GlobalSpawnCountScaleOverrides,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_MaxDetailLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_MinDetailLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_FixedBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SimTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SimTarget_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_EmitterUpdateScriptProps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_EmitterSpawnScriptProps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SpawnScriptProps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_UpdateScriptProps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_PreAllocationCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_AllocationMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_AllocationMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_RandomSeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bDeterminism,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bLocalSpace,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraEmitter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraEmitter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraEmitter_Statics::ClassParams = {
		&UNiagaraEmitter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraEmitter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraEmitter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraEmitter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraEmitter, 1957408993);
	template<> NIAGARA_API UClass* StaticClass<UNiagaraEmitter>()
	{
		return UNiagaraEmitter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraEmitter(Z_Construct_UClass_UNiagaraEmitter, &UNiagaraEmitter::StaticClass, TEXT("/Script/Niagara"), TEXT("UNiagaraEmitter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraEmitter);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UNiagaraEmitter)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
