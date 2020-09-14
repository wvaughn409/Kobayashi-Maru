// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraEffectType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraEffectType() {}
// Cross Module References
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraScalabilityUpdateFrequency();
	UPackage* Z_Construct_UPackage__Script_Niagara();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraCullReaction();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverrides();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverride();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettings();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettingsArray();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraPlatformSet();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettingsArray();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraEffectType_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraEffectType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* ENiagaraScalabilityUpdateFrequency_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraScalabilityUpdateFrequency, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraScalabilityUpdateFrequency"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraScalabilityUpdateFrequency>()
	{
		return ENiagaraScalabilityUpdateFrequency_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraScalabilityUpdateFrequency(ENiagaraScalabilityUpdateFrequency_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraScalabilityUpdateFrequency"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraScalabilityUpdateFrequency_Hash() { return 4233431187U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraScalabilityUpdateFrequency()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraScalabilityUpdateFrequency"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraScalabilityUpdateFrequency_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraScalabilityUpdateFrequency::SpawnOnly", (int64)ENiagaraScalabilityUpdateFrequency::SpawnOnly },
				{ "ENiagaraScalabilityUpdateFrequency::Low", (int64)ENiagaraScalabilityUpdateFrequency::Low },
				{ "ENiagaraScalabilityUpdateFrequency::Medium", (int64)ENiagaraScalabilityUpdateFrequency::Medium },
				{ "ENiagaraScalabilityUpdateFrequency::High", (int64)ENiagaraScalabilityUpdateFrequency::High },
				{ "ENiagaraScalabilityUpdateFrequency::Continuous", (int64)ENiagaraScalabilityUpdateFrequency::Continuous },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** Controls how often should we update scalability states for these effects. */" },
				{ "Continuous.Comment", "/** Scalability will be checked every frame. */" },
				{ "Continuous.Name", "ENiagaraScalabilityUpdateFrequency::Continuous" },
				{ "Continuous.ToolTip", "Scalability will be checked every frame." },
				{ "High.Comment", "/** Scalability will be checked regularly. */" },
				{ "High.Name", "ENiagaraScalabilityUpdateFrequency::High" },
				{ "High.ToolTip", "Scalability will be checked regularly." },
				{ "Low.Comment", "/** Scalability will be checked infrequently.*/" },
				{ "Low.Name", "ENiagaraScalabilityUpdateFrequency::Low" },
				{ "Low.ToolTip", "Scalability will be checked infrequently." },
				{ "Medium.Comment", "/** Scalability will be occasionally. */" },
				{ "Medium.Name", "ENiagaraScalabilityUpdateFrequency::Medium" },
				{ "Medium.ToolTip", "Scalability will be occasionally." },
				{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
				{ "SpawnOnly.Comment", "/** Scalability will be checked only on spawn. */" },
				{ "SpawnOnly.Name", "ENiagaraScalabilityUpdateFrequency::SpawnOnly" },
				{ "SpawnOnly.ToolTip", "Scalability will be checked only on spawn." },
				{ "ToolTip", "Controls how often should we update scalability states for these effects." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraScalabilityUpdateFrequency",
				"ENiagaraScalabilityUpdateFrequency",
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
	static UEnum* ENiagaraCullReaction_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraCullReaction, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraCullReaction"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraCullReaction>()
	{
		return ENiagaraCullReaction_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraCullReaction(ENiagaraCullReaction_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraCullReaction"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraCullReaction_Hash() { return 599041119U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraCullReaction()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraCullReaction"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraCullReaction_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraCullReaction::Deactivate", (int64)ENiagaraCullReaction::Deactivate },
				{ "ENiagaraCullReaction::DeactivateImmediate", (int64)ENiagaraCullReaction::DeactivateImmediate },
				{ "ENiagaraCullReaction::DeactivateResume", (int64)ENiagaraCullReaction::DeactivateResume },
				{ "ENiagaraCullReaction::DeactivateImmediateResume", (int64)ENiagaraCullReaction::DeactivateImmediateResume },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** Controls what action is taken by a Niagara system that fails it's cull checks. */" },
				{ "Deactivate.Comment", "/** The system instance will be deactivated. Particles will be allowed to die naturally. It will not be reactivated automatically by the scalability system. */" },
				{ "Deactivate.DisplayName", "Kill" },
				{ "Deactivate.Name", "ENiagaraCullReaction::Deactivate" },
				{ "Deactivate.ToolTip", "The system instance will be deactivated. Particles will be allowed to die naturally. It will not be reactivated automatically by the scalability system." },
				{ "DeactivateImmediate.Comment", "/** The system instance will be deactivated and particles killed immediately. It will not be reactivated automatically by the scalability system. */" },
				{ "DeactivateImmediate.DisplayName", "Kill and Clear" },
				{ "DeactivateImmediate.Name", "ENiagaraCullReaction::DeactivateImmediate" },
				{ "DeactivateImmediate.ToolTip", "The system instance will be deactivated and particles killed immediately. It will not be reactivated automatically by the scalability system." },
				{ "DeactivateImmediateResume.Comment", "/** The system instance will be deactivated and particles killed immediately. Will reactivate when it passes cull tests again. */" },
				{ "DeactivateImmediateResume.DisplayName", "Asleep and Clear" },
				{ "DeactivateImmediateResume.Name", "ENiagaraCullReaction::DeactivateImmediateResume" },
				{ "DeactivateImmediateResume.ToolTip", "The system instance will be deactivated and particles killed immediately. Will reactivate when it passes cull tests again." },
				{ "DeactivateResume.Comment", "/** The system instance will be deactivated. Particles will be allowed to die naturally. Will reactivate when it passes cull tests again. */" },
				{ "DeactivateResume.DisplayName", "Asleep" },
				{ "DeactivateResume.Name", "ENiagaraCullReaction::DeactivateResume" },
				{ "DeactivateResume.ToolTip", "The system instance will be deactivated. Particles will be allowed to die naturally. Will reactivate when it passes cull tests again." },
				{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
				{ "ToolTip", "Controls what action is taken by a Niagara system that fails it's cull checks." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraCullReaction",
				"ENiagaraCullReaction",
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
class UScriptStruct* FNiagaraEmitterScalabilityOverrides::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverrides_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverrides, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraEmitterScalabilityOverrides"), sizeof(FNiagaraEmitterScalabilityOverrides), Get_Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverrides_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraEmitterScalabilityOverrides>()
{
	return FNiagaraEmitterScalabilityOverrides::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraEmitterScalabilityOverrides(FNiagaraEmitterScalabilityOverrides::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraEmitterScalabilityOverrides"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraEmitterScalabilityOverrides
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraEmitterScalabilityOverrides()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraEmitterScalabilityOverrides")),new UScriptStruct::TCppStructOps<FNiagaraEmitterScalabilityOverrides>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraEmitterScalabilityOverrides;
	struct Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverrides_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Overrides_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Overrides;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Overrides_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverrides_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Container struct for an array of emitter scalability overrides. Enables details customization and data validation. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "Container struct for an array of emitter scalability overrides. Enables details customization and data validation." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverrides_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraEmitterScalabilityOverrides>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverrides_Statics::NewProp_Overrides_MetaData[] = {
		{ "Category", "Override" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverrides_Statics::NewProp_Overrides = { "Overrides", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraEmitterScalabilityOverrides, Overrides), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverrides_Statics::NewProp_Overrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverrides_Statics::NewProp_Overrides_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverrides_Statics::NewProp_Overrides_Inner = { "Overrides", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverride, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverrides_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverrides_Statics::NewProp_Overrides,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverrides_Statics::NewProp_Overrides_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverrides_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraEmitterScalabilityOverrides",
		sizeof(FNiagaraEmitterScalabilityOverrides),
		alignof(FNiagaraEmitterScalabilityOverrides),
		Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverrides_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverrides_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverrides_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverrides_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverrides()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverrides_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraEmitterScalabilityOverrides"), sizeof(FNiagaraEmitterScalabilityOverrides), Get_Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverrides_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverrides_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverrides_Hash() { return 572642695U; }
class UScriptStruct* FNiagaraEmitterScalabilityOverride::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverride_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverride, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraEmitterScalabilityOverride"), sizeof(FNiagaraEmitterScalabilityOverride), Get_Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverride_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraEmitterScalabilityOverride>()
{
	return FNiagaraEmitterScalabilityOverride::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraEmitterScalabilityOverride(FNiagaraEmitterScalabilityOverride::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraEmitterScalabilityOverride"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraEmitterScalabilityOverride
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraEmitterScalabilityOverride()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraEmitterScalabilityOverride")),new UScriptStruct::TCppStructOps<FNiagaraEmitterScalabilityOverride>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraEmitterScalabilityOverride;
	struct Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverride_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideSpawnCountScale_MetaData[];
#endif
		static void NewProp_bOverrideSpawnCountScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideSpawnCountScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverride_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverride_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraEmitterScalabilityOverride>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverride_Statics::NewProp_bOverrideSpawnCountScale_MetaData[] = {
		{ "Category", "Override" },
		{ "Comment", "//Controls whether spawn count scale should be overridden.\n" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "Controls whether spawn count scale should be overridden." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverride_Statics::NewProp_bOverrideSpawnCountScale_SetBit(void* Obj)
	{
		((FNiagaraEmitterScalabilityOverride*)Obj)->bOverrideSpawnCountScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverride_Statics::NewProp_bOverrideSpawnCountScale = { "bOverrideSpawnCountScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNiagaraEmitterScalabilityOverride), &Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverride_Statics::NewProp_bOverrideSpawnCountScale_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverride_Statics::NewProp_bOverrideSpawnCountScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverride_Statics::NewProp_bOverrideSpawnCountScale_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverride_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverride_Statics::NewProp_bOverrideSpawnCountScale,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverride_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettings,
		&NewStructOps,
		"NiagaraEmitterScalabilityOverride",
		sizeof(FNiagaraEmitterScalabilityOverride),
		alignof(FNiagaraEmitterScalabilityOverride),
		Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverride_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverride_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverride_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverride_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverride()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverride_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraEmitterScalabilityOverride"), sizeof(FNiagaraEmitterScalabilityOverride), Get_Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverride_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverride_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverride_Hash() { return 4093796575U; }
class UScriptStruct* FNiagaraEmitterScalabilitySettingsArray::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettingsArray_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettingsArray, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraEmitterScalabilitySettingsArray"), sizeof(FNiagaraEmitterScalabilitySettingsArray), Get_Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettingsArray_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraEmitterScalabilitySettingsArray>()
{
	return FNiagaraEmitterScalabilitySettingsArray::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraEmitterScalabilitySettingsArray(FNiagaraEmitterScalabilitySettingsArray::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraEmitterScalabilitySettingsArray"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraEmitterScalabilitySettingsArray
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraEmitterScalabilitySettingsArray()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraEmitterScalabilitySettingsArray")),new UScriptStruct::TCppStructOps<FNiagaraEmitterScalabilitySettingsArray>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraEmitterScalabilitySettingsArray;
	struct Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettingsArray_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Settings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettingsArray_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Container struct for an array of emitter scalability settings. Enables details customization and data validation. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "Container struct for an array of emitter scalability settings. Enables details customization and data validation." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettingsArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraEmitterScalabilitySettingsArray>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettingsArray_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "Scalability" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettingsArray_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraEmitterScalabilitySettingsArray, Settings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettingsArray_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettingsArray_Statics::NewProp_Settings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettingsArray_Statics::NewProp_Settings_Inner = { "Settings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettingsArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettingsArray_Statics::NewProp_Settings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettingsArray_Statics::NewProp_Settings_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettingsArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraEmitterScalabilitySettingsArray",
		sizeof(FNiagaraEmitterScalabilitySettingsArray),
		alignof(FNiagaraEmitterScalabilitySettingsArray),
		Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettingsArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettingsArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettingsArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettingsArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettingsArray()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettingsArray_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraEmitterScalabilitySettingsArray"), sizeof(FNiagaraEmitterScalabilitySettingsArray), Get_Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettingsArray_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettingsArray_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettingsArray_Hash() { return 781899662U; }
class UScriptStruct* FNiagaraEmitterScalabilitySettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettings, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraEmitterScalabilitySettings"), sizeof(FNiagaraEmitterScalabilitySettings), Get_Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettings_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraEmitterScalabilitySettings>()
{
	return FNiagaraEmitterScalabilitySettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraEmitterScalabilitySettings(FNiagaraEmitterScalabilitySettings::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraEmitterScalabilitySettings"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraEmitterScalabilitySettings
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraEmitterScalabilitySettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraEmitterScalabilitySettings")),new UScriptStruct::TCppStructOps<FNiagaraEmitterScalabilitySettings>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraEmitterScalabilitySettings;
	struct Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnCountScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnCountScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bScaleSpawnCount_MetaData[];
#endif
		static void NewProp_bScaleSpawnCount_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bScaleSpawnCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Platforms_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Platforms;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Scalability settings for Niagara Emitters on a particular platform set. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "Scalability settings for Niagara Emitters on a particular platform set." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraEmitterScalabilitySettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettings_Statics::NewProp_SpawnCountScale_MetaData[] = {
		{ "Category", "Scalability" },
		{ "Comment", "/** Scale factor applied to spawn counts for this emitter. */" },
		{ "EditCondition", "bScaleSpawnCount" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "Scale factor applied to spawn counts for this emitter." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettings_Statics::NewProp_SpawnCountScale = { "SpawnCountScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraEmitterScalabilitySettings, SpawnCountScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettings_Statics::NewProp_SpawnCountScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettings_Statics::NewProp_SpawnCountScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettings_Statics::NewProp_bScaleSpawnCount_MetaData[] = {
		{ "Category", "Scalability" },
		{ "Comment", "/** Enable spawn count scaling */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "Enable spawn count scaling" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettings_Statics::NewProp_bScaleSpawnCount_SetBit(void* Obj)
	{
		((FNiagaraEmitterScalabilitySettings*)Obj)->bScaleSpawnCount = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettings_Statics::NewProp_bScaleSpawnCount = { "bScaleSpawnCount", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNiagaraEmitterScalabilitySettings), &Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettings_Statics::NewProp_bScaleSpawnCount_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettings_Statics::NewProp_bScaleSpawnCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettings_Statics::NewProp_bScaleSpawnCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettings_Statics::NewProp_Platforms_MetaData[] = {
		{ "Category", "Scalability" },
		{ "Comment", "/** The platforms on which these settings are active (unless overridden). */" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "The platforms on which these settings are active (unless overridden)." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettings_Statics::NewProp_Platforms = { "Platforms", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraEmitterScalabilitySettings, Platforms), Z_Construct_UScriptStruct_FNiagaraPlatformSet, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettings_Statics::NewProp_Platforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettings_Statics::NewProp_Platforms_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettings_Statics::NewProp_SpawnCountScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettings_Statics::NewProp_bScaleSpawnCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettings_Statics::NewProp_Platforms,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraEmitterScalabilitySettings",
		sizeof(FNiagaraEmitterScalabilitySettings),
		alignof(FNiagaraEmitterScalabilitySettings),
		Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraEmitterScalabilitySettings"), sizeof(FNiagaraEmitterScalabilitySettings), Get_Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettings_Hash() { return 2666318919U; }
class UScriptStruct* FNiagaraSystemScalabilityOverrides::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraSystemScalabilityOverrides"), sizeof(FNiagaraSystemScalabilityOverrides), Get_Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraSystemScalabilityOverrides>()
{
	return FNiagaraSystemScalabilityOverrides::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraSystemScalabilityOverrides(FNiagaraSystemScalabilityOverrides::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraSystemScalabilityOverrides"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraSystemScalabilityOverrides
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraSystemScalabilityOverrides()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraSystemScalabilityOverrides")),new UScriptStruct::TCppStructOps<FNiagaraSystemScalabilityOverrides>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraSystemScalabilityOverrides;
	struct Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Overrides_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Overrides;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Overrides_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Container struct for an array of system scalability overrides. Enables details customization and data validation. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "Container struct for an array of system scalability overrides. Enables details customization and data validation." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraSystemScalabilityOverrides>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides_Statics::NewProp_Overrides_MetaData[] = {
		{ "Category", "Override" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides_Statics::NewProp_Overrides = { "Overrides", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraSystemScalabilityOverrides, Overrides), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides_Statics::NewProp_Overrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides_Statics::NewProp_Overrides_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides_Statics::NewProp_Overrides_Inner = { "Overrides", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides_Statics::NewProp_Overrides,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides_Statics::NewProp_Overrides_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraSystemScalabilityOverrides",
		sizeof(FNiagaraSystemScalabilityOverrides),
		alignof(FNiagaraSystemScalabilityOverrides),
		Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraSystemScalabilityOverrides"), sizeof(FNiagaraSystemScalabilityOverrides), Get_Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides_Hash() { return 4168740493U; }
class UScriptStruct* FNiagaraSystemScalabilityOverride::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraSystemScalabilityOverride"), sizeof(FNiagaraSystemScalabilityOverride), Get_Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraSystemScalabilityOverride>()
{
	return FNiagaraSystemScalabilityOverride::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraSystemScalabilityOverride(FNiagaraSystemScalabilityOverride::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraSystemScalabilityOverride"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraSystemScalabilityOverride
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraSystemScalabilityOverride()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraSystemScalabilityOverride")),new UScriptStruct::TCppStructOps<FNiagaraSystemScalabilityOverride>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraSystemScalabilityOverride;
	struct Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideTimeSinceRendererSettings_MetaData[];
#endif
		static void NewProp_bOverrideTimeSinceRendererSettings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideTimeSinceRendererSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideInstanceCountSettings_MetaData[];
#endif
		static void NewProp_bOverrideInstanceCountSettings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideInstanceCountSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideDistanceSettings_MetaData[];
#endif
		static void NewProp_bOverrideDistanceSettings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideDistanceSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraSystemScalabilityOverride>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics::NewProp_bOverrideTimeSinceRendererSettings_MetaData[] = {
		{ "Category", "Override" },
		{ "Comment", "/** Controls whether we override the visibility culling settings. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "Controls whether we override the visibility culling settings." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics::NewProp_bOverrideTimeSinceRendererSettings_SetBit(void* Obj)
	{
		((FNiagaraSystemScalabilityOverride*)Obj)->bOverrideTimeSinceRendererSettings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics::NewProp_bOverrideTimeSinceRendererSettings = { "bOverrideTimeSinceRendererSettings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNiagaraSystemScalabilityOverride), &Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics::NewProp_bOverrideTimeSinceRendererSettings_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics::NewProp_bOverrideTimeSinceRendererSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics::NewProp_bOverrideTimeSinceRendererSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics::NewProp_bOverrideInstanceCountSettings_MetaData[] = {
		{ "Category", "Override" },
		{ "Comment", "/** Controls whether we override the instance count culling settings. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "Controls whether we override the instance count culling settings." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics::NewProp_bOverrideInstanceCountSettings_SetBit(void* Obj)
	{
		((FNiagaraSystemScalabilityOverride*)Obj)->bOverrideInstanceCountSettings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics::NewProp_bOverrideInstanceCountSettings = { "bOverrideInstanceCountSettings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNiagaraSystemScalabilityOverride), &Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics::NewProp_bOverrideInstanceCountSettings_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics::NewProp_bOverrideInstanceCountSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics::NewProp_bOverrideInstanceCountSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics::NewProp_bOverrideDistanceSettings_MetaData[] = {
		{ "Category", "Override" },
		{ "Comment", "/** Controls whether we override the distance culling settings. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "Controls whether we override the distance culling settings." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics::NewProp_bOverrideDistanceSettings_SetBit(void* Obj)
	{
		((FNiagaraSystemScalabilityOverride*)Obj)->bOverrideDistanceSettings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics::NewProp_bOverrideDistanceSettings = { "bOverrideDistanceSettings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNiagaraSystemScalabilityOverride), &Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics::NewProp_bOverrideDistanceSettings_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics::NewProp_bOverrideDistanceSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics::NewProp_bOverrideDistanceSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics::NewProp_bOverrideTimeSinceRendererSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics::NewProp_bOverrideInstanceCountSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics::NewProp_bOverrideDistanceSettings,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings,
		&NewStructOps,
		"NiagaraSystemScalabilityOverride",
		sizeof(FNiagaraSystemScalabilityOverride),
		alignof(FNiagaraSystemScalabilityOverride),
		Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraSystemScalabilityOverride"), sizeof(FNiagaraSystemScalabilityOverride), Get_Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Hash() { return 2403850376U; }
class UScriptStruct* FNiagaraSystemScalabilitySettingsArray::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettingsArray_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettingsArray, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraSystemScalabilitySettingsArray"), sizeof(FNiagaraSystemScalabilitySettingsArray), Get_Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettingsArray_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraSystemScalabilitySettingsArray>()
{
	return FNiagaraSystemScalabilitySettingsArray::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraSystemScalabilitySettingsArray(FNiagaraSystemScalabilitySettingsArray::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraSystemScalabilitySettingsArray"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraSystemScalabilitySettingsArray
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraSystemScalabilitySettingsArray()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraSystemScalabilitySettingsArray")),new UScriptStruct::TCppStructOps<FNiagaraSystemScalabilitySettingsArray>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraSystemScalabilitySettingsArray;
	struct Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettingsArray_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Settings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettingsArray_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Container struct for an array of system scalability settings. Enables details customization and data validation. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "Container struct for an array of system scalability settings. Enables details customization and data validation." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettingsArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraSystemScalabilitySettingsArray>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettingsArray_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "Scalability" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettingsArray_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraSystemScalabilitySettingsArray, Settings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettingsArray_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettingsArray_Statics::NewProp_Settings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettingsArray_Statics::NewProp_Settings_Inner = { "Settings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettingsArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettingsArray_Statics::NewProp_Settings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettingsArray_Statics::NewProp_Settings_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettingsArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraSystemScalabilitySettingsArray",
		sizeof(FNiagaraSystemScalabilitySettingsArray),
		alignof(FNiagaraSystemScalabilitySettingsArray),
		Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettingsArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettingsArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettingsArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettingsArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettingsArray()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettingsArray_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraSystemScalabilitySettingsArray"), sizeof(FNiagaraSystemScalabilitySettingsArray), Get_Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettingsArray_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettingsArray_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettingsArray_Hash() { return 176630226U; }
class UScriptStruct* FNiagaraSystemScalabilitySettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraSystemScalabilitySettings"), sizeof(FNiagaraSystemScalabilitySettings), Get_Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraSystemScalabilitySettings>()
{
	return FNiagaraSystemScalabilitySettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraSystemScalabilitySettings(FNiagaraSystemScalabilitySettings::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraSystemScalabilitySettings"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraSystemScalabilitySettings
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraSystemScalabilitySettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraSystemScalabilitySettings")),new UScriptStruct::TCppStructOps<FNiagaraSystemScalabilitySettings>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraSystemScalabilitySettings;
	struct Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTimeWithoutRender_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxTimeWithoutRender;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxInstances_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxInstances;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCullByMaxTimeWithoutRender_MetaData[];
#endif
		static void NewProp_bCullByMaxTimeWithoutRender_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCullByMaxTimeWithoutRender;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCullMaxInstanceCount_MetaData[];
#endif
		static void NewProp_bCullMaxInstanceCount_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCullMaxInstanceCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCullByDistance_MetaData[];
#endif
		static void NewProp_bCullByDistance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCullByDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Platforms_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Platforms;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Scalability settings for Niagara Systems for a particular platform set (unless overridden). */" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "Scalability settings for Niagara Systems for a particular platform set (unless overridden)." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraSystemScalabilitySettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_MaxTimeWithoutRender_MetaData[] = {
		{ "Category", "Scalability" },
		{ "Comment", "/** Effects will be culled if they go more than this length of time without being rendered. */" },
		{ "EditCondition", "bCullByMaxTimeWithoutRender" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "Effects will be culled if they go more than this length of time without being rendered." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_MaxTimeWithoutRender = { "MaxTimeWithoutRender", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraSystemScalabilitySettings, MaxTimeWithoutRender), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_MaxTimeWithoutRender_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_MaxTimeWithoutRender_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_MaxInstances_MetaData[] = {
		{ "Category", "Scalability" },
		{ "Comment", "/** Effects of this type will fail to spawn when total active instance count exceeds this number. */" },
		{ "EditCondition", "bCullMaxInstanceCount" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "Effects of this type will fail to spawn when total active instance count exceeds this number." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_MaxInstances = { "MaxInstances", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraSystemScalabilitySettings, MaxInstances), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_MaxInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_MaxInstances_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_MaxDistance_MetaData[] = {
		{ "Category", "Scalability" },
		{ "Comment", "/** Effects of this type are culled beyond this distance. */" },
		{ "EditCondition", "bCullByDistance" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "Effects of this type are culled beyond this distance." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraSystemScalabilitySettings, MaxDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_MaxDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_MaxDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_bCullByMaxTimeWithoutRender_MetaData[] = {
		{ "Category", "Scalability" },
		{ "Comment", "/** Controls whether visibility culling is enabled. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "Controls whether visibility culling is enabled." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_bCullByMaxTimeWithoutRender_SetBit(void* Obj)
	{
		((FNiagaraSystemScalabilitySettings*)Obj)->bCullByMaxTimeWithoutRender = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_bCullByMaxTimeWithoutRender = { "bCullByMaxTimeWithoutRender", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNiagaraSystemScalabilitySettings), &Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_bCullByMaxTimeWithoutRender_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_bCullByMaxTimeWithoutRender_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_bCullByMaxTimeWithoutRender_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_bCullMaxInstanceCount_MetaData[] = {
		{ "Category", "Scalability" },
		{ "Comment", "/** Controls whether instance count culling is enabled. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "Controls whether instance count culling is enabled." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_bCullMaxInstanceCount_SetBit(void* Obj)
	{
		((FNiagaraSystemScalabilitySettings*)Obj)->bCullMaxInstanceCount = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_bCullMaxInstanceCount = { "bCullMaxInstanceCount", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNiagaraSystemScalabilitySettings), &Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_bCullMaxInstanceCount_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_bCullMaxInstanceCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_bCullMaxInstanceCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_bCullByDistance_MetaData[] = {
		{ "Category", "Scalability" },
		{ "Comment", "/** Controls whether distance culling is enabled. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "Controls whether distance culling is enabled." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_bCullByDistance_SetBit(void* Obj)
	{
		((FNiagaraSystemScalabilitySettings*)Obj)->bCullByDistance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_bCullByDistance = { "bCullByDistance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNiagaraSystemScalabilitySettings), &Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_bCullByDistance_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_bCullByDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_bCullByDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_Platforms_MetaData[] = {
		{ "Category", "Scalability" },
		{ "Comment", "/** The platforms on which these settings are active (unless overridden). */" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "The platforms on which these settings are active (unless overridden)." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_Platforms = { "Platforms", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraSystemScalabilitySettings, Platforms), Z_Construct_UScriptStruct_FNiagaraPlatformSet, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_Platforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_Platforms_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_MaxTimeWithoutRender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_MaxInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_MaxDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_bCullByMaxTimeWithoutRender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_bCullMaxInstanceCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_bCullByDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_Platforms,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraSystemScalabilitySettings",
		sizeof(FNiagaraSystemScalabilitySettings),
		alignof(FNiagaraSystemScalabilitySettings),
		Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraSystemScalabilitySettings"), sizeof(FNiagaraSystemScalabilitySettings), Get_Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Hash() { return 436371198U; }
	void UNiagaraEffectType::StaticRegisterNativesUNiagaraEffectType()
	{
	}
	UClass* Z_Construct_UClass_UNiagaraEffectType_NoRegister()
	{
		return UNiagaraEffectType::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraEffectType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmitterScalabilitySettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EmitterScalabilitySettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SystemScalabilitySettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SystemScalabilitySettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetailLevelScalabilitySettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DetailLevelScalabilitySettings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DetailLevelScalabilitySettings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CullReaction_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CullReaction;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CullReaction_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateFrequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_UpdateFrequency;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_UpdateFrequency_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraEffectType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEffectType_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Contains settings and working data shared among many NiagaraSystems that share some commonality of type. For example ImpactFX vs EnvironmentalFX. */" },
		{ "IncludePath", "NiagaraEffectType.h" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "Contains settings and working data shared among many NiagaraSystems that share some commonality of type. For example ImpactFX vs EnvironmentalFX." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEffectType_Statics::NewProp_EmitterScalabilitySettings_MetaData[] = {
		{ "Category", "Effect Type" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraEffectType_Statics::NewProp_EmitterScalabilitySettings = { "EmitterScalabilitySettings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEffectType, EmitterScalabilitySettings), Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettingsArray, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEffectType_Statics::NewProp_EmitterScalabilitySettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEffectType_Statics::NewProp_EmitterScalabilitySettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEffectType_Statics::NewProp_SystemScalabilitySettings_MetaData[] = {
		{ "Category", "Effect Type" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraEffectType_Statics::NewProp_SystemScalabilitySettings = { "SystemScalabilitySettings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEffectType, SystemScalabilitySettings), Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettingsArray, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEffectType_Statics::NewProp_SystemScalabilitySettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEffectType_Statics::NewProp_SystemScalabilitySettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEffectType_Statics::NewProp_DetailLevelScalabilitySettings_MetaData[] = {
		{ "Comment", "/** Cull settings to use at each detail level. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "Cull settings to use at each detail level." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraEffectType_Statics::NewProp_DetailLevelScalabilitySettings = { "DetailLevelScalabilitySettings", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEffectType, DetailLevelScalabilitySettings_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEffectType_Statics::NewProp_DetailLevelScalabilitySettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEffectType_Statics::NewProp_DetailLevelScalabilitySettings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraEffectType_Statics::NewProp_DetailLevelScalabilitySettings_Inner = { "DetailLevelScalabilitySettings", nullptr, (EPropertyFlags)0x0000000020000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEffectType_Statics::NewProp_CullReaction_MetaData[] = {
		{ "Category", "Effect Type" },
		{ "Comment", "/** How effects of this type react when they fail the cull checks. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "How effects of this type react when they fail the cull checks." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraEffectType_Statics::NewProp_CullReaction = { "CullReaction", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEffectType, CullReaction), Z_Construct_UEnum_Niagara_ENiagaraCullReaction, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEffectType_Statics::NewProp_CullReaction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEffectType_Statics::NewProp_CullReaction_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UNiagaraEffectType_Statics::NewProp_CullReaction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEffectType_Statics::NewProp_UpdateFrequency_MetaData[] = {
		{ "Category", "Effect Type" },
		{ "Comment", "/** How regularly effects of this type are checked for scalability. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "How regularly effects of this type are checked for scalability." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraEffectType_Statics::NewProp_UpdateFrequency = { "UpdateFrequency", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEffectType, UpdateFrequency), Z_Construct_UEnum_Niagara_ENiagaraScalabilityUpdateFrequency, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEffectType_Statics::NewProp_UpdateFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEffectType_Statics::NewProp_UpdateFrequency_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UNiagaraEffectType_Statics::NewProp_UpdateFrequency_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraEffectType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEffectType_Statics::NewProp_EmitterScalabilitySettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEffectType_Statics::NewProp_SystemScalabilitySettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEffectType_Statics::NewProp_DetailLevelScalabilitySettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEffectType_Statics::NewProp_DetailLevelScalabilitySettings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEffectType_Statics::NewProp_CullReaction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEffectType_Statics::NewProp_CullReaction_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEffectType_Statics::NewProp_UpdateFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEffectType_Statics::NewProp_UpdateFrequency_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraEffectType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraEffectType>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraEffectType_Statics::ClassParams = {
		&UNiagaraEffectType::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraEffectType_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEffectType_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraEffectType_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEffectType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraEffectType()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraEffectType_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraEffectType, 3594467350);
	template<> NIAGARA_API UClass* StaticClass<UNiagaraEffectType>()
	{
		return UNiagaraEffectType::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraEffectType(Z_Construct_UClass_UNiagaraEffectType, &UNiagaraEffectType::StaticClass, TEXT("/Script/Niagara"), TEXT("UNiagaraEffectType"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraEffectType);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
