// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/NiagaraCommon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraCommon() {}
// Cross Module References
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraLegacyTrailWidthMode();
	UPackage* Z_Construct_UPackage__Script_Niagara();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraIterationSource();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraScriptGroup();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraScriptUsage();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraScriptCompileStatus();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraInputNodeUsage();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraDataSetType();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraAgeUpdateMode();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraSimTarget();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraDefaultMode();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraTickBehavior();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraRandInfo();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraUserParameterBinding();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariable();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScriptVariableBinding();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableDataInterfaceBinding();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableInfo();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface_NoRegister();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FVMFunctionSpecifier();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraStatScope();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraFunctionSignature();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraTypeDefinition();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataSetProperties();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataSetID();
// End Cross Module References
	static UEnum* ENiagaraLegacyTrailWidthMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraLegacyTrailWidthMode, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraLegacyTrailWidthMode"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraLegacyTrailWidthMode>()
	{
		return ENiagaraLegacyTrailWidthMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraLegacyTrailWidthMode(ENiagaraLegacyTrailWidthMode_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraLegacyTrailWidthMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraLegacyTrailWidthMode_Hash() { return 2338239247U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraLegacyTrailWidthMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraLegacyTrailWidthMode"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraLegacyTrailWidthMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraLegacyTrailWidthMode::FromCentre", (int64)ENiagaraLegacyTrailWidthMode::FromCentre },
				{ "ENiagaraLegacyTrailWidthMode::FromFirst", (int64)ENiagaraLegacyTrailWidthMode::FromFirst },
				{ "ENiagaraLegacyTrailWidthMode::FromSecond", (int64)ENiagaraLegacyTrailWidthMode::FromSecond },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** \nControls the way that the width scale property affects animation trails. \nOnly used for Legacy Anim Trail support when converting from Cascade to Niagara.\n*/" },
				{ "FromCentre.Name", "ENiagaraLegacyTrailWidthMode::FromCentre" },
				{ "FromFirst.Name", "ENiagaraLegacyTrailWidthMode::FromFirst" },
				{ "FromSecond.Name", "ENiagaraLegacyTrailWidthMode::FromSecond" },
				{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
				{ "ToolTip", "Controls the way that the width scale property affects animation trails.\nOnly used for Legacy Anim Trail support when converting from Cascade to Niagara." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraLegacyTrailWidthMode",
				"ENiagaraLegacyTrailWidthMode",
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
	static UEnum* ENiagaraIterationSource_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraIterationSource, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraIterationSource"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraIterationSource>()
	{
		return ENiagaraIterationSource_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraIterationSource(ENiagaraIterationSource_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraIterationSource"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraIterationSource_Hash() { return 532396635U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraIterationSource()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraIterationSource"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraIterationSource_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraIterationSource::Particles", (int64)ENiagaraIterationSource::Particles },
				{ "ENiagaraIterationSource::DataInterface", (int64)ENiagaraIterationSource::DataInterface },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "DataInterface.Name", "ENiagaraIterationSource::DataInterface" },
				{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
				{ "Particles.Name", "ENiagaraIterationSource::Particles" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraIterationSource",
				"ENiagaraIterationSource",
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
	static UEnum* ENiagaraScriptGroup_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraScriptGroup, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraScriptGroup"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraScriptGroup>()
	{
		return ENiagaraScriptGroup_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraScriptGroup(ENiagaraScriptGroup_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraScriptGroup"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraScriptGroup_Hash() { return 1961732592U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraScriptGroup()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraScriptGroup"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraScriptGroup_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraScriptGroup::Particle", (int64)ENiagaraScriptGroup::Particle },
				{ "ENiagaraScriptGroup::Emitter", (int64)ENiagaraScriptGroup::Emitter },
				{ "ENiagaraScriptGroup::System", (int64)ENiagaraScriptGroup::System },
				{ "ENiagaraScriptGroup::Max", (int64)ENiagaraScriptGroup::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Emitter.Name", "ENiagaraScriptGroup::Emitter" },
				{ "Max.Name", "ENiagaraScriptGroup::Max" },
				{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
				{ "Particle.Name", "ENiagaraScriptGroup::Particle" },
				{ "System.Name", "ENiagaraScriptGroup::System" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraScriptGroup",
				"ENiagaraScriptGroup",
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
	static UEnum* ENiagaraScriptUsage_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraScriptUsage, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraScriptUsage"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraScriptUsage>()
	{
		return ENiagaraScriptUsage_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraScriptUsage(ENiagaraScriptUsage_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraScriptUsage"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraScriptUsage_Hash() { return 1767801311U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraScriptUsage()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraScriptUsage"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraScriptUsage_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraScriptUsage::Function", (int64)ENiagaraScriptUsage::Function },
				{ "ENiagaraScriptUsage::Module", (int64)ENiagaraScriptUsage::Module },
				{ "ENiagaraScriptUsage::DynamicInput", (int64)ENiagaraScriptUsage::DynamicInput },
				{ "ENiagaraScriptUsage::ParticleSpawnScript", (int64)ENiagaraScriptUsage::ParticleSpawnScript },
				{ "ENiagaraScriptUsage::ParticleSpawnScriptInterpolated", (int64)ENiagaraScriptUsage::ParticleSpawnScriptInterpolated },
				{ "ENiagaraScriptUsage::ParticleUpdateScript", (int64)ENiagaraScriptUsage::ParticleUpdateScript },
				{ "ENiagaraScriptUsage::ParticleEventScript", (int64)ENiagaraScriptUsage::ParticleEventScript },
				{ "ENiagaraScriptUsage::ParticleSimulationStageScript", (int64)ENiagaraScriptUsage::ParticleSimulationStageScript },
				{ "ENiagaraScriptUsage::ParticleGPUComputeScript", (int64)ENiagaraScriptUsage::ParticleGPUComputeScript },
				{ "ENiagaraScriptUsage::EmitterSpawnScript", (int64)ENiagaraScriptUsage::EmitterSpawnScript },
				{ "ENiagaraScriptUsage::EmitterUpdateScript", (int64)ENiagaraScriptUsage::EmitterUpdateScript },
				{ "ENiagaraScriptUsage::SystemSpawnScript", (int64)ENiagaraScriptUsage::SystemSpawnScript },
				{ "ENiagaraScriptUsage::SystemUpdateScript", (int64)ENiagaraScriptUsage::SystemUpdateScript },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** Defines different usages for a niagara script. */" },
				{ "DynamicInput.Comment", "/** The script defines a dynamic input for use in particle, emitter, or system scripts. */" },
				{ "DynamicInput.Name", "ENiagaraScriptUsage::DynamicInput" },
				{ "DynamicInput.ToolTip", "The script defines a dynamic input for use in particle, emitter, or system scripts." },
				{ "EmitterSpawnScript.Comment", "/** The script is called once when the emitter spawns. */" },
				{ "EmitterSpawnScript.Name", "ENiagaraScriptUsage::EmitterSpawnScript" },
				{ "EmitterSpawnScript.ToolTip", "The script is called once when the emitter spawns." },
				{ "EmitterUpdateScript.Comment", "/** The script is called every frame to tick the emitter. */" },
				{ "EmitterUpdateScript.Name", "ENiagaraScriptUsage::EmitterUpdateScript" },
				{ "EmitterUpdateScript.ToolTip", "The script is called every frame to tick the emitter." },
				{ "Function.Comment", "/** The script defines a function for use in modules. */" },
				{ "Function.Name", "ENiagaraScriptUsage::Function" },
				{ "Function.ToolTip", "The script defines a function for use in modules." },
				{ "Module.Comment", "/** The script defines a module for use in particle, emitter, or system scripts. */" },
				{ "Module.Name", "ENiagaraScriptUsage::Module" },
				{ "Module.ToolTip", "The script defines a module for use in particle, emitter, or system scripts." },
				{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
				{ "ParticleEventScript.Comment", "/** The script is called to update particles in response to an event. */" },
				{ "ParticleEventScript.Name", "ENiagaraScriptUsage::ParticleEventScript" },
				{ "ParticleEventScript.ToolTip", "The script is called to update particles in response to an event." },
				{ "ParticleGPUComputeScript.Comment", "/** The script is called to update particles on the GPU. */" },
				{ "ParticleGPUComputeScript.Hidden", "" },
				{ "ParticleGPUComputeScript.Name", "ENiagaraScriptUsage::ParticleGPUComputeScript" },
				{ "ParticleGPUComputeScript.ToolTip", "The script is called to update particles on the GPU." },
				{ "ParticleSimulationStageScript.Comment", "/** The script is called as a particle simulation stage. */" },
				{ "ParticleSimulationStageScript.Name", "ENiagaraScriptUsage::ParticleSimulationStageScript" },
				{ "ParticleSimulationStageScript.ToolTip", "The script is called as a particle simulation stage." },
				{ "ParticleSpawnScript.Comment", "/** The script is called when spawning particles. */" },
				{ "ParticleSpawnScript.Name", "ENiagaraScriptUsage::ParticleSpawnScript" },
				{ "ParticleSpawnScript.ToolTip", "The script is called when spawning particles." },
				{ "ParticleSpawnScriptInterpolated.Comment", "/** Particle spawn script that handles intra-frame spawning and also pulls in the update script. */" },
				{ "ParticleSpawnScriptInterpolated.Hidden", "" },
				{ "ParticleSpawnScriptInterpolated.Name", "ENiagaraScriptUsage::ParticleSpawnScriptInterpolated" },
				{ "ParticleSpawnScriptInterpolated.ToolTip", "Particle spawn script that handles intra-frame spawning and also pulls in the update script." },
				{ "ParticleUpdateScript.Comment", "/** The script is called to update particles every frame. */" },
				{ "ParticleUpdateScript.Name", "ENiagaraScriptUsage::ParticleUpdateScript" },
				{ "ParticleUpdateScript.ToolTip", "The script is called to update particles every frame." },
				{ "SystemSpawnScript.Comment", "/** The script is called once when the system spawns. */" },
				{ "SystemSpawnScript.Name", "ENiagaraScriptUsage::SystemSpawnScript" },
				{ "SystemSpawnScript.ToolTip", "The script is called once when the system spawns." },
				{ "SystemUpdateScript.Comment", "/** The script is called every frame to tick the system. */" },
				{ "SystemUpdateScript.Name", "ENiagaraScriptUsage::SystemUpdateScript" },
				{ "SystemUpdateScript.ToolTip", "The script is called every frame to tick the system." },
				{ "ToolTip", "Defines different usages for a niagara script." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraScriptUsage",
				"ENiagaraScriptUsage",
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
	static UEnum* ENiagaraScriptCompileStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraScriptCompileStatus, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraScriptCompileStatus"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraScriptCompileStatus>()
	{
		return ENiagaraScriptCompileStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraScriptCompileStatus(ENiagaraScriptCompileStatus_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraScriptCompileStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraScriptCompileStatus_Hash() { return 3541552882U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraScriptCompileStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraScriptCompileStatus"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraScriptCompileStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraScriptCompileStatus::NCS_Unknown", (int64)ENiagaraScriptCompileStatus::NCS_Unknown },
				{ "ENiagaraScriptCompileStatus::NCS_Dirty", (int64)ENiagaraScriptCompileStatus::NCS_Dirty },
				{ "ENiagaraScriptCompileStatus::NCS_Error", (int64)ENiagaraScriptCompileStatus::NCS_Error },
				{ "ENiagaraScriptCompileStatus::NCS_UpToDate", (int64)ENiagaraScriptCompileStatus::NCS_UpToDate },
				{ "ENiagaraScriptCompileStatus::NCS_BeingCreated", (int64)ENiagaraScriptCompileStatus::NCS_BeingCreated },
				{ "ENiagaraScriptCompileStatus::NCS_UpToDateWithWarnings", (int64)ENiagaraScriptCompileStatus::NCS_UpToDateWithWarnings },
				{ "ENiagaraScriptCompileStatus::NCS_ComputeUpToDateWithWarnings", (int64)ENiagaraScriptCompileStatus::NCS_ComputeUpToDateWithWarnings },
				{ "ENiagaraScriptCompileStatus::NCS_MAX", (int64)ENiagaraScriptCompileStatus::NCS_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/**\n* Enumerates states a Niagara script can be in.\n*/" },
				{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
				{ "NCS_BeingCreated.Comment", "/** Niagara script is in the process of being created for the first time. */" },
				{ "NCS_BeingCreated.Name", "ENiagaraScriptCompileStatus::NCS_BeingCreated" },
				{ "NCS_BeingCreated.ToolTip", "Niagara script is in the process of being created for the first time." },
				{ "NCS_ComputeUpToDateWithWarnings.Comment", "/** Niagara script has been compiled for compute since it was last modified. There are warnings. */" },
				{ "NCS_ComputeUpToDateWithWarnings.Name", "ENiagaraScriptCompileStatus::NCS_ComputeUpToDateWithWarnings" },
				{ "NCS_ComputeUpToDateWithWarnings.ToolTip", "Niagara script has been compiled for compute since it was last modified. There are warnings." },
				{ "NCS_Dirty.Comment", "/** Niagara script has been modified but not recompiled. */" },
				{ "NCS_Dirty.Name", "ENiagaraScriptCompileStatus::NCS_Dirty" },
				{ "NCS_Dirty.ToolTip", "Niagara script has been modified but not recompiled." },
				{ "NCS_Error.Comment", "/** Niagara script tried but failed to be compiled. */" },
				{ "NCS_Error.Name", "ENiagaraScriptCompileStatus::NCS_Error" },
				{ "NCS_Error.ToolTip", "Niagara script tried but failed to be compiled." },
				{ "NCS_MAX.Name", "ENiagaraScriptCompileStatus::NCS_MAX" },
				{ "NCS_Unknown.Comment", "/** Niagara script is in an unknown state. */" },
				{ "NCS_Unknown.Name", "ENiagaraScriptCompileStatus::NCS_Unknown" },
				{ "NCS_Unknown.ToolTip", "Niagara script is in an unknown state." },
				{ "NCS_UpToDate.Comment", "/** Niagara script has been compiled since it was last modified. */" },
				{ "NCS_UpToDate.Name", "ENiagaraScriptCompileStatus::NCS_UpToDate" },
				{ "NCS_UpToDate.ToolTip", "Niagara script has been compiled since it was last modified." },
				{ "NCS_UpToDateWithWarnings.Comment", "/** Niagara script has been compiled since it was last modified. There are warnings. */" },
				{ "NCS_UpToDateWithWarnings.Name", "ENiagaraScriptCompileStatus::NCS_UpToDateWithWarnings" },
				{ "NCS_UpToDateWithWarnings.ToolTip", "Niagara script has been compiled since it was last modified. There are warnings." },
				{ "ToolTip", "Enumerates states a Niagara script can be in." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraScriptCompileStatus",
				"ENiagaraScriptCompileStatus",
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
	static UEnum* ENiagaraInputNodeUsage_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraInputNodeUsage, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraInputNodeUsage"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraInputNodeUsage>()
	{
		return ENiagaraInputNodeUsage_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraInputNodeUsage(ENiagaraInputNodeUsage_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraInputNodeUsage"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraInputNodeUsage_Hash() { return 862457800U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraInputNodeUsage()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraInputNodeUsage"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraInputNodeUsage_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraInputNodeUsage::Undefined", (int64)ENiagaraInputNodeUsage::Undefined },
				{ "ENiagaraInputNodeUsage::Parameter", (int64)ENiagaraInputNodeUsage::Parameter },
				{ "ENiagaraInputNodeUsage::Attribute", (int64)ENiagaraInputNodeUsage::Attribute },
				{ "ENiagaraInputNodeUsage::SystemConstant", (int64)ENiagaraInputNodeUsage::SystemConstant },
				{ "ENiagaraInputNodeUsage::TranslatorConstant", (int64)ENiagaraInputNodeUsage::TranslatorConstant },
				{ "ENiagaraInputNodeUsage::RapidIterationParameter", (int64)ENiagaraInputNodeUsage::RapidIterationParameter },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Attribute.Name", "ENiagaraInputNodeUsage::Attribute" },
				{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
				{ "Parameter.Name", "ENiagaraInputNodeUsage::Parameter" },
				{ "RapidIterationParameter.Name", "ENiagaraInputNodeUsage::RapidIterationParameter" },
				{ "SystemConstant.Name", "ENiagaraInputNodeUsage::SystemConstant" },
				{ "TranslatorConstant.Name", "ENiagaraInputNodeUsage::TranslatorConstant" },
				{ "Undefined.Hidden", "" },
				{ "Undefined.Name", "ENiagaraInputNodeUsage::Undefined" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraInputNodeUsage",
				"ENiagaraInputNodeUsage",
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
	static UEnum* ENiagaraDataSetType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDataSetType, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraDataSetType"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraDataSetType>()
	{
		return ENiagaraDataSetType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraDataSetType(ENiagaraDataSetType_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraDataSetType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraDataSetType_Hash() { return 4144712424U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraDataSetType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraDataSetType"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraDataSetType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraDataSetType::ParticleData", (int64)ENiagaraDataSetType::ParticleData },
				{ "ENiagaraDataSetType::Shared", (int64)ENiagaraDataSetType::Shared },
				{ "ENiagaraDataSetType::Event", (int64)ENiagaraDataSetType::Event },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Event.Name", "ENiagaraDataSetType::Event" },
				{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
				{ "ParticleData.Name", "ENiagaraDataSetType::ParticleData" },
				{ "Shared.Name", "ENiagaraDataSetType::Shared" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraDataSetType",
				"ENiagaraDataSetType",
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
	static UEnum* ENiagaraAgeUpdateMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraAgeUpdateMode, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraAgeUpdateMode"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraAgeUpdateMode>()
	{
		return ENiagaraAgeUpdateMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraAgeUpdateMode(ENiagaraAgeUpdateMode_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraAgeUpdateMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraAgeUpdateMode_Hash() { return 3142043861U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraAgeUpdateMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraAgeUpdateMode"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraAgeUpdateMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraAgeUpdateMode::TickDeltaTime", (int64)ENiagaraAgeUpdateMode::TickDeltaTime },
				{ "ENiagaraAgeUpdateMode::DesiredAge", (int64)ENiagaraAgeUpdateMode::DesiredAge },
				{ "ENiagaraAgeUpdateMode::DesiredAgeNoSeek", (int64)ENiagaraAgeUpdateMode::DesiredAgeNoSeek },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** Defines modes for updating the component's age. */" },
				{ "DesiredAge.Comment", "/** Update the age by seeking to the DesiredAge. To prevent major perf loss, we clamp to MaxClampTime*/" },
				{ "DesiredAge.Name", "ENiagaraAgeUpdateMode::DesiredAge" },
				{ "DesiredAge.ToolTip", "Update the age by seeking to the DesiredAge. To prevent major perf loss, we clamp to MaxClampTime" },
				{ "DesiredAgeNoSeek.Comment", "/** Update the age by tracking changes to the desired age, but when the desired age goes backwards in time,\n\x09or jumps forwards in time by more than a few steps, the system is reset and simulated forward by a single step.\n\x09This mode is useful for continuous effects controlled by sequencer. */" },
				{ "DesiredAgeNoSeek.Name", "ENiagaraAgeUpdateMode::DesiredAgeNoSeek" },
				{ "DesiredAgeNoSeek.ToolTip", "Update the age by tracking changes to the desired age, but when the desired age goes backwards in time,\n      or jumps forwards in time by more than a few steps, the system is reset and simulated forward by a single step.\n      This mode is useful for continuous effects controlled by sequencer." },
				{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
				{ "TickDeltaTime.Comment", "/** Update the age using the delta time supplied to the component tick function. */" },
				{ "TickDeltaTime.Name", "ENiagaraAgeUpdateMode::TickDeltaTime" },
				{ "TickDeltaTime.ToolTip", "Update the age using the delta time supplied to the component tick function." },
				{ "ToolTip", "Defines modes for updating the component's age." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraAgeUpdateMode",
				"ENiagaraAgeUpdateMode",
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
	static UEnum* ENiagaraSimTarget_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraSimTarget, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraSimTarget"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraSimTarget>()
	{
		return ENiagaraSimTarget_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraSimTarget(ENiagaraSimTarget_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraSimTarget"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraSimTarget_Hash() { return 2709382565U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraSimTarget()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraSimTarget"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraSimTarget_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraSimTarget::CPUSim", (int64)ENiagaraSimTarget::CPUSim },
				{ "ENiagaraSimTarget::GPUComputeSim", (int64)ENiagaraSimTarget::GPUComputeSim },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "CPUSim.Name", "ENiagaraSimTarget::CPUSim" },
				{ "GPUComputeSim.Name", "ENiagaraSimTarget::GPUComputeSim" },
				{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraSimTarget",
				"ENiagaraSimTarget",
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
	static UEnum* ENiagaraDefaultMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDefaultMode, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraDefaultMode"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraDefaultMode>()
	{
		return ENiagaraDefaultMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraDefaultMode(ENiagaraDefaultMode_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraDefaultMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraDefaultMode_Hash() { return 3964227720U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraDefaultMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraDefaultMode"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraDefaultMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraDefaultMode::Value", (int64)ENiagaraDefaultMode::Value },
				{ "ENiagaraDefaultMode::Binding", (int64)ENiagaraDefaultMode::Binding },
				{ "ENiagaraDefaultMode::Custom", (int64)ENiagaraDefaultMode::Custom },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Binding.Comment", "// Default initialize using a dropdown widget in the Selected Details panel. \n" },
				{ "Binding.Name", "ENiagaraDefaultMode::Binding" },
				{ "Binding.ToolTip", "Default initialize using a dropdown widget in the Selected Details panel." },
				{ "Comment", "// TODO: Custom will eventually mean that the default value or binding will be overridden by a subgraph default, i.e. expose it to a \"Initialize variable\" node. \n// TODO: Should we add an \"Uninitialized\" entry, or is that too much friction? \n" },
				{ "Custom.Comment", "// Default initialization is done using a sub-graph.\n" },
				{ "Custom.Name", "ENiagaraDefaultMode::Custom" },
				{ "Custom.ToolTip", "Default initialization is done using a sub-graph." },
				{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
				{ "ToolTip", "TODO: Custom will eventually mean that the default value or binding will be overridden by a subgraph default, i.e. expose it to a \"Initialize variable\" node.\nTODO: Should we add an \"Uninitialized\" entry, or is that too much friction?" },
				{ "Value.Comment", "// Default initialize using a value widget in the Selected Details panel. \n" },
				{ "Value.Name", "ENiagaraDefaultMode::Value" },
				{ "Value.ToolTip", "Default initialize using a value widget in the Selected Details panel." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraDefaultMode",
				"ENiagaraDefaultMode",
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
	static UEnum* ENiagaraTickBehavior_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraTickBehavior, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraTickBehavior"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraTickBehavior>()
	{
		return ENiagaraTickBehavior_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraTickBehavior(ENiagaraTickBehavior_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraTickBehavior"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraTickBehavior_Hash() { return 2091919925U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraTickBehavior()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraTickBehavior"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraTickBehavior_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraTickBehavior::UsePrereqs", (int64)ENiagaraTickBehavior::UsePrereqs },
				{ "ENiagaraTickBehavior::UseComponentTickGroup", (int64)ENiagaraTickBehavior::UseComponentTickGroup },
				{ "ENiagaraTickBehavior::ForceTickFirst", (int64)ENiagaraTickBehavior::ForceTickFirst },
				{ "ENiagaraTickBehavior::ForceTickLast", (int64)ENiagaraTickBehavior::ForceTickLast },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** Niagara ticking behaviour */" },
				{ "ForceTickFirst.Comment", "/** Niagara will tick in the first tick group (default is TG_PrePhysics). */" },
				{ "ForceTickFirst.Name", "ENiagaraTickBehavior::ForceTickFirst" },
				{ "ForceTickFirst.ToolTip", "Niagara will tick in the first tick group (default is TG_PrePhysics)." },
				{ "ForceTickLast.Comment", "/** Niagara will tick in the last tick group (default is TG_LastDemotable). */" },
				{ "ForceTickLast.Name", "ENiagaraTickBehavior::ForceTickLast" },
				{ "ForceTickLast.ToolTip", "Niagara will tick in the last tick group (default is TG_LastDemotable)." },
				{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
				{ "ToolTip", "Niagara ticking behaviour" },
				{ "UseComponentTickGroup.Comment", "/** Niagara will ignore prereqs (attachments / data interface dependencies) and use the tick group set on the component. */" },
				{ "UseComponentTickGroup.Name", "ENiagaraTickBehavior::UseComponentTickGroup" },
				{ "UseComponentTickGroup.ToolTip", "Niagara will ignore prereqs (attachments / data interface dependencies) and use the tick group set on the component." },
				{ "UsePrereqs.Comment", "/** Niagara will tick after all prereqs have ticked for attachements / data interfaces, this is the safest option. */" },
				{ "UsePrereqs.Name", "ENiagaraTickBehavior::UsePrereqs" },
				{ "UsePrereqs.ToolTip", "Niagara will tick after all prereqs have ticked for attachements / data interfaces, this is the safest option." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraTickBehavior",
				"ENiagaraTickBehavior",
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
class UScriptStruct* FNiagaraRandInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraRandInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraRandInfo, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraRandInfo"), sizeof(FNiagaraRandInfo), Get_Z_Construct_UScriptStruct_FNiagaraRandInfo_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraRandInfo>()
{
	return FNiagaraRandInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraRandInfo(FNiagaraRandInfo::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraRandInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraRandInfo
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraRandInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraRandInfo")),new UScriptStruct::TCppStructOps<FNiagaraRandInfo>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraRandInfo;
	struct Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Seed3_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Seed3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Seed2_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Seed2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Seed1_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Seed1;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraRandInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::NewProp_Seed3_MetaData[] = {
		{ "Category", "Random" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::NewProp_Seed3 = { "Seed3", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraRandInfo, Seed3), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::NewProp_Seed3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::NewProp_Seed3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::NewProp_Seed2_MetaData[] = {
		{ "Category", "Random" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::NewProp_Seed2 = { "Seed2", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraRandInfo, Seed2), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::NewProp_Seed2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::NewProp_Seed2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::NewProp_Seed1_MetaData[] = {
		{ "Category", "Random" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::NewProp_Seed1 = { "Seed1", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraRandInfo, Seed1), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::NewProp_Seed1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::NewProp_Seed1_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::NewProp_Seed3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::NewProp_Seed2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::NewProp_Seed1,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraRandInfo",
		sizeof(FNiagaraRandInfo),
		alignof(FNiagaraRandInfo),
		Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraRandInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraRandInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraRandInfo"), sizeof(FNiagaraRandInfo), Get_Z_Construct_UScriptStruct_FNiagaraRandInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraRandInfo_Hash() { return 2682871438U; }
class UScriptStruct* FNiagaraUserParameterBinding::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraUserParameterBinding_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraUserParameterBinding, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraUserParameterBinding"), sizeof(FNiagaraUserParameterBinding), Get_Z_Construct_UScriptStruct_FNiagaraUserParameterBinding_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraUserParameterBinding>()
{
	return FNiagaraUserParameterBinding::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraUserParameterBinding(FNiagaraUserParameterBinding::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraUserParameterBinding"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraUserParameterBinding
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraUserParameterBinding()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraUserParameterBinding")),new UScriptStruct::TCppStructOps<FNiagaraUserParameterBinding>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraUserParameterBinding;
	struct Z_Construct_UScriptStruct_FNiagaraUserParameterBinding_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Parameter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraUserParameterBinding_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraUserParameterBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraUserParameterBinding>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraUserParameterBinding_Statics::NewProp_Parameter_MetaData[] = {
		{ "Category", "User Parameter" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraUserParameterBinding_Statics::NewProp_Parameter = { "Parameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraUserParameterBinding, Parameter), Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraUserParameterBinding_Statics::NewProp_Parameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraUserParameterBinding_Statics::NewProp_Parameter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraUserParameterBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraUserParameterBinding_Statics::NewProp_Parameter,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraUserParameterBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraUserParameterBinding",
		sizeof(FNiagaraUserParameterBinding),
		alignof(FNiagaraUserParameterBinding),
		Z_Construct_UScriptStruct_FNiagaraUserParameterBinding_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraUserParameterBinding_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraUserParameterBinding_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraUserParameterBinding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraUserParameterBinding()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraUserParameterBinding_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraUserParameterBinding"), sizeof(FNiagaraUserParameterBinding), Get_Z_Construct_UScriptStruct_FNiagaraUserParameterBinding_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraUserParameterBinding_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraUserParameterBinding_Hash() { return 1054982215U; }
class UScriptStruct* FNiagaraScriptVariableBinding::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraScriptVariableBinding_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraScriptVariableBinding, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraScriptVariableBinding"), sizeof(FNiagaraScriptVariableBinding), Get_Z_Construct_UScriptStruct_FNiagaraScriptVariableBinding_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraScriptVariableBinding>()
{
	return FNiagaraScriptVariableBinding::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraScriptVariableBinding(FNiagaraScriptVariableBinding::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraScriptVariableBinding"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraScriptVariableBinding
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraScriptVariableBinding()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraScriptVariableBinding")),new UScriptStruct::TCppStructOps<FNiagaraScriptVariableBinding>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraScriptVariableBinding;
	struct Z_Construct_UScriptStruct_FNiagaraScriptVariableBinding_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptVariableBinding_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Primarily a wrapper around an FName to be used for customizations in the Selected Details panel \n    to select a default binding to initialize module inputs. The customization implementation\n    is FNiagaraScriptVariableBindingCustomization. */" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "Primarily a wrapper around an FName to be used for customizations in the Selected Details panel\n   to select a default binding to initialize module inputs. The customization implementation\n   is FNiagaraScriptVariableBindingCustomization." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraScriptVariableBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraScriptVariableBinding>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptVariableBinding_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraScriptVariableBinding_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraScriptVariableBinding, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptVariableBinding_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptVariableBinding_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraScriptVariableBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptVariableBinding_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraScriptVariableBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraScriptVariableBinding",
		sizeof(FNiagaraScriptVariableBinding),
		alignof(FNiagaraScriptVariableBinding),
		Z_Construct_UScriptStruct_FNiagaraScriptVariableBinding_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptVariableBinding_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptVariableBinding_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptVariableBinding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScriptVariableBinding()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraScriptVariableBinding_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraScriptVariableBinding"), sizeof(FNiagaraScriptVariableBinding), Get_Z_Construct_UScriptStruct_FNiagaraScriptVariableBinding_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraScriptVariableBinding_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraScriptVariableBinding_Hash() { return 2302638061U; }
class UScriptStruct* FNiagaraVariableDataInterfaceBinding::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraVariableDataInterfaceBinding_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraVariableDataInterfaceBinding, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraVariableDataInterfaceBinding"), sizeof(FNiagaraVariableDataInterfaceBinding), Get_Z_Construct_UScriptStruct_FNiagaraVariableDataInterfaceBinding_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraVariableDataInterfaceBinding>()
{
	return FNiagaraVariableDataInterfaceBinding::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraVariableDataInterfaceBinding(FNiagaraVariableDataInterfaceBinding::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraVariableDataInterfaceBinding"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraVariableDataInterfaceBinding
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraVariableDataInterfaceBinding()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraVariableDataInterfaceBinding")),new UScriptStruct::TCppStructOps<FNiagaraVariableDataInterfaceBinding>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraVariableDataInterfaceBinding;
	struct Z_Construct_UScriptStruct_FNiagaraVariableDataInterfaceBinding_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundVariable_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoundVariable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableDataInterfaceBinding_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraVariableDataInterfaceBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraVariableDataInterfaceBinding>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableDataInterfaceBinding_Statics::NewProp_BoundVariable_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableDataInterfaceBinding_Statics::NewProp_BoundVariable = { "BoundVariable", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVariableDataInterfaceBinding, BoundVariable), Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableDataInterfaceBinding_Statics::NewProp_BoundVariable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableDataInterfaceBinding_Statics::NewProp_BoundVariable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraVariableDataInterfaceBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableDataInterfaceBinding_Statics::NewProp_BoundVariable,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraVariableDataInterfaceBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraVariableDataInterfaceBinding",
		sizeof(FNiagaraVariableDataInterfaceBinding),
		alignof(FNiagaraVariableDataInterfaceBinding),
		Z_Construct_UScriptStruct_FNiagaraVariableDataInterfaceBinding_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableDataInterfaceBinding_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableDataInterfaceBinding_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableDataInterfaceBinding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableDataInterfaceBinding()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraVariableDataInterfaceBinding_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraVariableDataInterfaceBinding"), sizeof(FNiagaraVariableDataInterfaceBinding), Get_Z_Construct_UScriptStruct_FNiagaraVariableDataInterfaceBinding_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraVariableDataInterfaceBinding_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraVariableDataInterfaceBinding_Hash() { return 280704072U; }
class UScriptStruct* FNiagaraVariableAttributeBinding::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraVariableAttributeBinding"), sizeof(FNiagaraVariableAttributeBinding), Get_Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraVariableAttributeBinding>()
{
	return FNiagaraVariableAttributeBinding::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraVariableAttributeBinding(FNiagaraVariableAttributeBinding::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraVariableAttributeBinding"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraVariableAttributeBinding
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraVariableAttributeBinding()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraVariableAttributeBinding")),new UScriptStruct::TCppStructOps<FNiagaraVariableAttributeBinding>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraVariableAttributeBinding;
	struct Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultValueIfNonExistent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultValueIfNonExistent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataSetVariable_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DataSetVariable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundVariable_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoundVariable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraVariableAttributeBinding>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_DefaultValueIfNonExistent_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_DefaultValueIfNonExistent = { "DefaultValueIfNonExistent", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVariableAttributeBinding, DefaultValueIfNonExistent), Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_DefaultValueIfNonExistent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_DefaultValueIfNonExistent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_DataSetVariable_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_DataSetVariable = { "DataSetVariable", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVariableAttributeBinding, DataSetVariable), Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_DataSetVariable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_DataSetVariable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_BoundVariable_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_BoundVariable = { "BoundVariable", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVariableAttributeBinding, BoundVariable), Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_BoundVariable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_BoundVariable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_DefaultValueIfNonExistent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_DataSetVariable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_BoundVariable,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraVariableAttributeBinding",
		sizeof(FNiagaraVariableAttributeBinding),
		alignof(FNiagaraVariableAttributeBinding),
		Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraVariableAttributeBinding"), sizeof(FNiagaraVariableAttributeBinding), Get_Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Hash() { return 1143249236U; }
class UScriptStruct* FNiagaraVariableInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraVariableInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraVariableInfo, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraVariableInfo"), sizeof(FNiagaraVariableInfo), Get_Z_Construct_UScriptStruct_FNiagaraVariableInfo_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraVariableInfo>()
{
	return FNiagaraVariableInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraVariableInfo(FNiagaraVariableInfo::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraVariableInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraVariableInfo
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraVariableInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraVariableInfo")),new UScriptStruct::TCppStructOps<FNiagaraVariableInfo>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraVariableInfo;
	struct Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataInterface_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DataInterface;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Definition_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Definition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Variable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Defines all you need to know about a variable.*/" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "Defines all you need to know about a variable." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraVariableInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::NewProp_DataInterface_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::NewProp_DataInterface = { "DataInterface", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVariableInfo, DataInterface), Z_Construct_UClass_UNiagaraDataInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::NewProp_DataInterface_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::NewProp_DataInterface_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::NewProp_Definition_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::NewProp_Definition = { "Definition", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVariableInfo, Definition), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::NewProp_Definition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::NewProp_Definition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::NewProp_Variable_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVariableInfo, Variable), Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::NewProp_Variable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::NewProp_Variable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::NewProp_DataInterface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::NewProp_Definition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::NewProp_Variable,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraVariableInfo",
		sizeof(FNiagaraVariableInfo),
		alignof(FNiagaraVariableInfo),
		Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraVariableInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraVariableInfo"), sizeof(FNiagaraVariableInfo), Get_Z_Construct_UScriptStruct_FNiagaraVariableInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraVariableInfo_Hash() { return 4148622547U; }
class UScriptStruct* FNiagaraSystemUpdateContext::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraSystemUpdateContext"), sizeof(FNiagaraSystemUpdateContext), Get_Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraSystemUpdateContext>()
{
	return FNiagaraSystemUpdateContext::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraSystemUpdateContext(FNiagaraSystemUpdateContext::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraSystemUpdateContext"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraSystemUpdateContext
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraSystemUpdateContext()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraSystemUpdateContext")),new UScriptStruct::TCppStructOps<FNiagaraSystemUpdateContext>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraSystemUpdateContext;
	struct Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SystemSimsToDestroy_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SystemSimsToDestroy;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SystemSimsToDestroy_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentsToReInit_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ComponentsToReInit;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ComponentsToReInit_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentsToReset_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ComponentsToReset;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ComponentsToReset_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\nHelper for reseting/reinitializing Niagara systems currently active when they are being edited. \nCan be used inside a scope with Systems being reinitialized on destruction or you can store the context and use CommitUpdate() to trigger reinitialization.\nFor example, this can be split between PreEditChange and PostEditChange to ensure problematic data is not modified during execution of a system.\nThis can be made a UPROPERTY() to ensure safey in cases where a GC could be possible between Add() and CommitUpdate().\n*/" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "Helper for reseting/reinitializing Niagara systems currently active when they are being edited.\nCan be used inside a scope with Systems being reinitialized on destruction or you can store the context and use CommitUpdate() to trigger reinitialization.\nFor example, this can be split between PreEditChange and PostEditChange to ensure problematic data is not modified during execution of a system.\nThis can be made a UPROPERTY() to ensure safey in cases where a GC could be possible between Add() and CommitUpdate()." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraSystemUpdateContext>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_SystemSimsToDestroy_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_SystemSimsToDestroy = { "SystemSimsToDestroy", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraSystemUpdateContext, SystemSimsToDestroy), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_SystemSimsToDestroy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_SystemSimsToDestroy_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_SystemSimsToDestroy_Inner = { "SystemSimsToDestroy", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_ComponentsToReInit_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_ComponentsToReInit = { "ComponentsToReInit", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraSystemUpdateContext, ComponentsToReInit), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_ComponentsToReInit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_ComponentsToReInit_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_ComponentsToReInit_Inner = { "ComponentsToReInit", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_ComponentsToReset_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_ComponentsToReset = { "ComponentsToReset", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraSystemUpdateContext, ComponentsToReset), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_ComponentsToReset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_ComponentsToReset_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_ComponentsToReset_Inner = { "ComponentsToReset", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_SystemSimsToDestroy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_SystemSimsToDestroy_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_ComponentsToReInit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_ComponentsToReInit_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_ComponentsToReset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_ComponentsToReset_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraSystemUpdateContext",
		sizeof(FNiagaraSystemUpdateContext),
		alignof(FNiagaraSystemUpdateContext),
		Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraSystemUpdateContext"), sizeof(FNiagaraSystemUpdateContext), Get_Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Hash() { return 2140675790U; }
class UScriptStruct* FVMExternalFunctionBindingInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo, Z_Construct_UPackage__Script_Niagara(), TEXT("VMExternalFunctionBindingInfo"), sizeof(FVMExternalFunctionBindingInfo), Get_Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FVMExternalFunctionBindingInfo>()
{
	return FVMExternalFunctionBindingInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVMExternalFunctionBindingInfo(FVMExternalFunctionBindingInfo::StaticStruct, TEXT("/Script/Niagara"), TEXT("VMExternalFunctionBindingInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFVMExternalFunctionBindingInfo
{
	FScriptStruct_Niagara_StaticRegisterNativesFVMExternalFunctionBindingInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VMExternalFunctionBindingInfo")),new UScriptStruct::TCppStructOps<FVMExternalFunctionBindingInfo>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFVMExternalFunctionBindingInfo;
	struct Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Specifiers_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Specifiers;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Specifiers_Key_KeyProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Specifiers_ValueProp;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionSpecifiers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FunctionSpecifiers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FunctionSpecifiers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumOutputs_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumOutputs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputParamLocations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InputParamLocations;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InputParamLocations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OwnerName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVMExternalFunctionBindingInfo>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_Specifiers_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_Specifiers = { "Specifiers", nullptr, (EPropertyFlags)0x0040000820000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMExternalFunctionBindingInfo, Specifiers_DEPRECATED), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_Specifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_Specifiers_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_Specifiers_Key_KeyProp = { "Specifiers_Key", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_Specifiers_ValueProp = { "Specifiers", nullptr, (EPropertyFlags)0x0000000820000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_FunctionSpecifiers_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_FunctionSpecifiers = { "FunctionSpecifiers", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMExternalFunctionBindingInfo, FunctionSpecifiers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_FunctionSpecifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_FunctionSpecifiers_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_FunctionSpecifiers_Inner = { "FunctionSpecifiers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVMFunctionSpecifier, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_NumOutputs_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_NumOutputs = { "NumOutputs", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMExternalFunctionBindingInfo, NumOutputs), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_NumOutputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_NumOutputs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_InputParamLocations_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_InputParamLocations = { "InputParamLocations", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMExternalFunctionBindingInfo, InputParamLocations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_InputParamLocations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_InputParamLocations_MetaData)) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_InputParamLocations_Inner = { "InputParamLocations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_OwnerName_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_OwnerName = { "OwnerName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMExternalFunctionBindingInfo, OwnerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_OwnerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_OwnerName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMExternalFunctionBindingInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_Specifiers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_Specifiers_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_Specifiers_ValueProp,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_FunctionSpecifiers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_FunctionSpecifiers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_NumOutputs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_InputParamLocations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_InputParamLocations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_OwnerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"VMExternalFunctionBindingInfo",
		sizeof(FVMExternalFunctionBindingInfo),
		alignof(FVMExternalFunctionBindingInfo),
		Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VMExternalFunctionBindingInfo"), sizeof(FVMExternalFunctionBindingInfo), Get_Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Hash() { return 2983115872U; }
class UScriptStruct* FVMFunctionSpecifier::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FVMFunctionSpecifier_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVMFunctionSpecifier, Z_Construct_UPackage__Script_Niagara(), TEXT("VMFunctionSpecifier"), sizeof(FVMFunctionSpecifier), Get_Z_Construct_UScriptStruct_FVMFunctionSpecifier_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FVMFunctionSpecifier>()
{
	return FVMFunctionSpecifier::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVMFunctionSpecifier(FVMFunctionSpecifier::StaticStruct, TEXT("/Script/Niagara"), TEXT("VMFunctionSpecifier"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFVMFunctionSpecifier
{
	FScriptStruct_Niagara_StaticRegisterNativesFVMFunctionSpecifier()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VMFunctionSpecifier")),new UScriptStruct::TCppStructOps<FVMFunctionSpecifier>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFVMFunctionSpecifier;
	struct Z_Construct_UScriptStruct_FVMFunctionSpecifier_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMFunctionSpecifier_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVMFunctionSpecifier_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVMFunctionSpecifier>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMFunctionSpecifier_Statics::NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMFunctionSpecifier_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMFunctionSpecifier, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMFunctionSpecifier_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMFunctionSpecifier_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMFunctionSpecifier_Statics::NewProp_Key_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMFunctionSpecifier_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMFunctionSpecifier, Key), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMFunctionSpecifier_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMFunctionSpecifier_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVMFunctionSpecifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMFunctionSpecifier_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMFunctionSpecifier_Statics::NewProp_Key,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVMFunctionSpecifier_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"VMFunctionSpecifier",
		sizeof(FVMFunctionSpecifier),
		alignof(FVMFunctionSpecifier),
		Z_Construct_UScriptStruct_FVMFunctionSpecifier_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMFunctionSpecifier_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVMFunctionSpecifier_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMFunctionSpecifier_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVMFunctionSpecifier()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVMFunctionSpecifier_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VMFunctionSpecifier"), sizeof(FVMFunctionSpecifier), Get_Z_Construct_UScriptStruct_FVMFunctionSpecifier_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVMFunctionSpecifier_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVMFunctionSpecifier_Hash() { return 2803513937U; }
class UScriptStruct* FNiagaraStatScope::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraStatScope_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraStatScope, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraStatScope"), sizeof(FNiagaraStatScope), Get_Z_Construct_UScriptStruct_FNiagaraStatScope_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraStatScope>()
{
	return FNiagaraStatScope::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraStatScope(FNiagaraStatScope::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraStatScope"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraStatScope
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraStatScope()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraStatScope")),new UScriptStruct::TCppStructOps<FNiagaraStatScope>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraStatScope;
	struct Z_Construct_UScriptStruct_FNiagaraStatScope_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendlyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FriendlyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FullName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraStatScope_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraStatScope_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraStatScope>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraStatScope_Statics::NewProp_FriendlyName_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraStatScope_Statics::NewProp_FriendlyName = { "FriendlyName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraStatScope, FriendlyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraStatScope_Statics::NewProp_FriendlyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraStatScope_Statics::NewProp_FriendlyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraStatScope_Statics::NewProp_FullName_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraStatScope_Statics::NewProp_FullName = { "FullName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraStatScope, FullName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraStatScope_Statics::NewProp_FullName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraStatScope_Statics::NewProp_FullName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraStatScope_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraStatScope_Statics::NewProp_FriendlyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraStatScope_Statics::NewProp_FullName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraStatScope_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraStatScope",
		sizeof(FNiagaraStatScope),
		alignof(FNiagaraStatScope),
		Z_Construct_UScriptStruct_FNiagaraStatScope_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraStatScope_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraStatScope_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraStatScope_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraStatScope()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraStatScope_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraStatScope"), sizeof(FNiagaraStatScope), Get_Z_Construct_UScriptStruct_FNiagaraStatScope_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraStatScope_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraStatScope_Hash() { return 3024034687U; }
class UScriptStruct* FNiagaraScriptDataInterfaceCompileInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraScriptDataInterfaceCompileInfo"), sizeof(FNiagaraScriptDataInterfaceCompileInfo), Get_Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraScriptDataInterfaceCompileInfo>()
{
	return FNiagaraScriptDataInterfaceCompileInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo(FNiagaraScriptDataInterfaceCompileInfo::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraScriptDataInterfaceCompileInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraScriptDataInterfaceCompileInfo
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraScriptDataInterfaceCompileInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraScriptDataInterfaceCompileInfo")),new UScriptStruct::TCppStructOps<FNiagaraScriptDataInterfaceCompileInfo>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraScriptDataInterfaceCompileInfo;
	struct Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPlaceholder_MetaData[];
#endif
		static void NewProp_bIsPlaceholder_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPlaceholder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegisteredParameterMapWrite_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RegisteredParameterMapWrite;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegisteredParameterMapRead_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RegisteredParameterMapRead;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegisteredFunctions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RegisteredFunctions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RegisteredFunctions_Inner;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserPtrIdx_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UserPtrIdx;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraScriptDataInterfaceCompileInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_bIsPlaceholder_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_bIsPlaceholder_SetBit(void* Obj)
	{
		((FNiagaraScriptDataInterfaceCompileInfo*)Obj)->bIsPlaceholder = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_bIsPlaceholder = { "bIsPlaceholder", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNiagaraScriptDataInterfaceCompileInfo), &Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_bIsPlaceholder_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_bIsPlaceholder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_bIsPlaceholder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_RegisteredParameterMapWrite_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_RegisteredParameterMapWrite = { "RegisteredParameterMapWrite", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraScriptDataInterfaceCompileInfo, RegisteredParameterMapWrite), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_RegisteredParameterMapWrite_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_RegisteredParameterMapWrite_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_RegisteredParameterMapRead_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_RegisteredParameterMapRead = { "RegisteredParameterMapRead", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraScriptDataInterfaceCompileInfo, RegisteredParameterMapRead), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_RegisteredParameterMapRead_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_RegisteredParameterMapRead_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_RegisteredFunctions_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_RegisteredFunctions = { "RegisteredFunctions", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraScriptDataInterfaceCompileInfo, RegisteredFunctions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_RegisteredFunctions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_RegisteredFunctions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_RegisteredFunctions_Inner = { "RegisteredFunctions", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNiagaraFunctionSignature, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraScriptDataInterfaceCompileInfo, Type), Z_Construct_UScriptStruct_FNiagaraTypeDefinition, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_UserPtrIdx_MetaData[] = {
		{ "Comment", "/** Index of the user pointer for this data interface. */" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "Index of the user pointer for this data interface." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_UserPtrIdx = { "UserPtrIdx", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraScriptDataInterfaceCompileInfo, UserPtrIdx), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_UserPtrIdx_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_UserPtrIdx_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraScriptDataInterfaceCompileInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_bIsPlaceholder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_RegisteredParameterMapWrite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_RegisteredParameterMapRead,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_RegisteredFunctions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_RegisteredFunctions_Inner,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_UserPtrIdx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraScriptDataInterfaceCompileInfo",
		sizeof(FNiagaraScriptDataInterfaceCompileInfo),
		alignof(FNiagaraScriptDataInterfaceCompileInfo),
		Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraScriptDataInterfaceCompileInfo"), sizeof(FNiagaraScriptDataInterfaceCompileInfo), Get_Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Hash() { return 3508347021U; }
class UScriptStruct* FNiagaraScriptDataInterfaceInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraScriptDataInterfaceInfo"), sizeof(FNiagaraScriptDataInterfaceInfo), Get_Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraScriptDataInterfaceInfo>()
{
	return FNiagaraScriptDataInterfaceInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraScriptDataInterfaceInfo(FNiagaraScriptDataInterfaceInfo::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraScriptDataInterfaceInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraScriptDataInterfaceInfo
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraScriptDataInterfaceInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraScriptDataInterfaceInfo")),new UScriptStruct::TCppStructOps<FNiagaraScriptDataInterfaceInfo>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraScriptDataInterfaceInfo;
	struct Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegisteredParameterMapWrite_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RegisteredParameterMapWrite;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegisteredParameterMapRead_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RegisteredParameterMapRead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserPtrIdx_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UserPtrIdx;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataInterface_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DataInterface;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraScriptDataInterfaceInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_RegisteredParameterMapWrite_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_RegisteredParameterMapWrite = { "RegisteredParameterMapWrite", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraScriptDataInterfaceInfo, RegisteredParameterMapWrite), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_RegisteredParameterMapWrite_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_RegisteredParameterMapWrite_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_RegisteredParameterMapRead_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_RegisteredParameterMapRead = { "RegisteredParameterMapRead", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraScriptDataInterfaceInfo, RegisteredParameterMapRead), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_RegisteredParameterMapRead_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_RegisteredParameterMapRead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraScriptDataInterfaceInfo, Type), Z_Construct_UScriptStruct_FNiagaraTypeDefinition, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_UserPtrIdx_MetaData[] = {
		{ "Comment", "/** Index of the user pointer for this data interface. */" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "Index of the user pointer for this data interface." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_UserPtrIdx = { "UserPtrIdx", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraScriptDataInterfaceInfo, UserPtrIdx), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_UserPtrIdx_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_UserPtrIdx_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraScriptDataInterfaceInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_DataInterface_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_DataInterface = { "DataInterface", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraScriptDataInterfaceInfo, DataInterface), Z_Construct_UClass_UNiagaraDataInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_DataInterface_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_DataInterface_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_RegisteredParameterMapWrite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_RegisteredParameterMapRead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_UserPtrIdx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_DataInterface,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraScriptDataInterfaceInfo",
		sizeof(FNiagaraScriptDataInterfaceInfo),
		alignof(FNiagaraScriptDataInterfaceInfo),
		Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraScriptDataInterfaceInfo"), sizeof(FNiagaraScriptDataInterfaceInfo), Get_Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Hash() { return 2392102557U; }
class UScriptStruct* FNiagaraFunctionSignature::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraFunctionSignature, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraFunctionSignature"), sizeof(FNiagaraFunctionSignature), Get_Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraFunctionSignature>()
{
	return FNiagaraFunctionSignature::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraFunctionSignature(FNiagaraFunctionSignature::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraFunctionSignature"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraFunctionSignature
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraFunctionSignature()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraFunctionSignature")),new UScriptStruct::TCppStructOps<FNiagaraFunctionSignature>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraFunctionSignature;
	struct Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Description;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionSpecifiers_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_FunctionSpecifiers;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FunctionSpecifiers_Key_KeyProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FunctionSpecifiers_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWriteFunction_MetaData[];
#endif
		static void NewProp_bWriteFunction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWriteFunction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsGPU_MetaData[];
#endif
		static void NewProp_bSupportsGPU_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsGPU;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsCPU_MetaData[];
#endif
		static void NewProp_bSupportsCPU_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsCPU;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_FunctionVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExperimentalMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ExperimentalMessage;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExperimental_MetaData[];
#endif
		static void NewProp_bExperimental_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExperimental;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMemberFunction_MetaData[];
#endif
		static void NewProp_bMemberFunction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMemberFunction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRequiresContext_MetaData[];
#endif
		static void NewProp_bRequiresContext_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRequiresContext;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OwnerName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Outputs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Outputs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Outputs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inputs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Inputs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Inputs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraFunctionSignature>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Description_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "SkipForCompileHash", "TRUE" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraFunctionSignature, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Description_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_FunctionSpecifiers_MetaData[] = {
		{ "Comment", "/** Function specifiers verified at bind time. */" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "Function specifiers verified at bind time." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_FunctionSpecifiers = { "FunctionSpecifiers", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraFunctionSignature, FunctionSpecifiers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_FunctionSpecifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_FunctionSpecifiers_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_FunctionSpecifiers_Key_KeyProp = { "FunctionSpecifiers_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_FunctionSpecifiers_ValueProp = { "FunctionSpecifiers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bWriteFunction_MetaData[] = {
		{ "Comment", "/** Writes to the variable this is bound to */" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "Writes to the variable this is bound to" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bWriteFunction_SetBit(void* Obj)
	{
		((FNiagaraFunctionSignature*)Obj)->bWriteFunction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bWriteFunction = { "bWriteFunction", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNiagaraFunctionSignature), &Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bWriteFunction_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bWriteFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bWriteFunction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bSupportsGPU_MetaData[] = {
		{ "Comment", "/** Support running on the GPU. */" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "Support running on the GPU." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bSupportsGPU_SetBit(void* Obj)
	{
		((FNiagaraFunctionSignature*)Obj)->bSupportsGPU = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bSupportsGPU = { "bSupportsGPU", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNiagaraFunctionSignature), &Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bSupportsGPU_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bSupportsGPU_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bSupportsGPU_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bSupportsCPU_MetaData[] = {
		{ "Comment", "/** Support running on the CPU. */" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "Support running on the CPU." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bSupportsCPU_SetBit(void* Obj)
	{
		((FNiagaraFunctionSignature*)Obj)->bSupportsCPU = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bSupportsCPU = { "bSupportsCPU", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNiagaraFunctionSignature), &Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bSupportsCPU_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bSupportsCPU_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bSupportsCPU_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_FunctionVersion_MetaData[] = {
		{ "Comment", "/** Per function version, it is up to the discretion of the function as to what the version means. */" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "Per function version, it is up to the discretion of the function as to what the version means." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_FunctionVersion = { "FunctionVersion", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraFunctionSignature, FunctionVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_FunctionVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_FunctionVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_ExperimentalMessage_MetaData[] = {
		{ "Category", "Script" },
		{ "Comment", "/** The message to display when a function is marked experimental. */" },
		{ "EditCondition", "bExperimental" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "MultiLine", "TRUE" },
		{ "SkipForCompileHash", "TRUE" },
		{ "ToolTip", "The message to display when a function is marked experimental." },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_ExperimentalMessage = { "ExperimentalMessage", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraFunctionSignature, ExperimentalMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_ExperimentalMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_ExperimentalMessage_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bExperimental_MetaData[] = {
		{ "Comment", "/** Is this function experimental? */" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "Is this function experimental?" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bExperimental_SetBit(void* Obj)
	{
		((FNiagaraFunctionSignature*)Obj)->bExperimental = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bExperimental = { "bExperimental", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNiagaraFunctionSignature), &Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bExperimental_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bExperimental_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bExperimental_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bMemberFunction_MetaData[] = {
		{ "Comment", "/** True if this is the signature for a \"member\" function of a data interface. If this is true, the first input is the owner. */" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "True if this is the signature for a \"member\" function of a data interface. If this is true, the first input is the owner." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bMemberFunction_SetBit(void* Obj)
	{
		((FNiagaraFunctionSignature*)Obj)->bMemberFunction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bMemberFunction = { "bMemberFunction", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNiagaraFunctionSignature), &Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bMemberFunction_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bMemberFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bMemberFunction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bRequiresContext_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bRequiresContext_SetBit(void* Obj)
	{
		((FNiagaraFunctionSignature*)Obj)->bRequiresContext = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bRequiresContext = { "bRequiresContext", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNiagaraFunctionSignature), &Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bRequiresContext_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bRequiresContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bRequiresContext_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_OwnerName_MetaData[] = {
		{ "Comment", "/** Id of the owner is this is a member function. */" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "Id of the owner is this is a member function." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_OwnerName = { "OwnerName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraFunctionSignature, OwnerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_OwnerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_OwnerName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Outputs_MetaData[] = {
		{ "Comment", "/** Input parameters of this function. */" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "Input parameters of this function." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Outputs = { "Outputs", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraFunctionSignature, Outputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Outputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Outputs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Outputs_Inner = { "Outputs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Inputs_MetaData[] = {
		{ "Comment", "/** Input parameters to this function. */" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "Input parameters to this function." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Inputs = { "Inputs", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraFunctionSignature, Inputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Inputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Inputs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Inputs_Inner = { "Inputs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Name_MetaData[] = {
		{ "Comment", "/** Name of the function. */" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "Name of the function." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraFunctionSignature, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Description,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_FunctionSpecifiers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_FunctionSpecifiers_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_FunctionSpecifiers_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bWriteFunction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bSupportsGPU,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bSupportsCPU,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_FunctionVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_ExperimentalMessage,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bExperimental,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bMemberFunction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bRequiresContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_OwnerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Outputs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Outputs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Inputs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Inputs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraFunctionSignature",
		sizeof(FNiagaraFunctionSignature),
		alignof(FNiagaraFunctionSignature),
		Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraFunctionSignature()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraFunctionSignature"), sizeof(FNiagaraFunctionSignature), Get_Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Hash() { return 3213204436U; }
class UScriptStruct* FNiagaraScriptDataUsageInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraScriptDataUsageInfo"), sizeof(FNiagaraScriptDataUsageInfo), Get_Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraScriptDataUsageInfo>()
{
	return FNiagaraScriptDataUsageInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraScriptDataUsageInfo(FNiagaraScriptDataUsageInfo::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraScriptDataUsageInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraScriptDataUsageInfo
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraScriptDataUsageInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraScriptDataUsageInfo")),new UScriptStruct::TCppStructOps<FNiagaraScriptDataUsageInfo>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraScriptDataUsageInfo;
	struct Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReadsAttributeData_MetaData[];
#endif
		static void NewProp_bReadsAttributeData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReadsAttributeData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct containing usage information about a script. Things such as whether it reads attribute data, reads or writes events data etc.*/" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "Struct containing usage information about a script. Things such as whether it reads attribute data, reads or writes events data etc." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraScriptDataUsageInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo_Statics::NewProp_bReadsAttributeData_MetaData[] = {
		{ "Comment", "/** If true, this script reads attribute data. */" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "If true, this script reads attribute data." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo_Statics::NewProp_bReadsAttributeData_SetBit(void* Obj)
	{
		((FNiagaraScriptDataUsageInfo*)Obj)->bReadsAttributeData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo_Statics::NewProp_bReadsAttributeData = { "bReadsAttributeData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNiagaraScriptDataUsageInfo), &Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo_Statics::NewProp_bReadsAttributeData_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo_Statics::NewProp_bReadsAttributeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo_Statics::NewProp_bReadsAttributeData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo_Statics::NewProp_bReadsAttributeData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraScriptDataUsageInfo",
		sizeof(FNiagaraScriptDataUsageInfo),
		alignof(FNiagaraScriptDataUsageInfo),
		Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraScriptDataUsageInfo"), sizeof(FNiagaraScriptDataUsageInfo), Get_Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo_Hash() { return 3059028941U; }
class UScriptStruct* FNiagaraDataSetProperties::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDataSetProperties, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraDataSetProperties"), sizeof(FNiagaraDataSetProperties), Get_Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraDataSetProperties>()
{
	return FNiagaraDataSetProperties::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraDataSetProperties(FNiagaraDataSetProperties::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraDataSetProperties"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraDataSetProperties
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraDataSetProperties()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraDataSetProperties")),new UScriptStruct::TCppStructOps<FNiagaraDataSetProperties>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraDataSetProperties;
	struct Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Variables_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Variables;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Variables_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraDataSetProperties>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Statics::NewProp_Variables_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Statics::NewProp_Variables = { "Variables", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraDataSetProperties, Variables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Statics::NewProp_Variables_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Statics::NewProp_Variables_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Statics::NewProp_Variables_Inner = { "Variables", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "Data Set" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraDataSetProperties, ID), Z_Construct_UScriptStruct_FNiagaraDataSetID, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Statics::NewProp_ID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Statics::NewProp_Variables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Statics::NewProp_Variables_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Statics::NewProp_ID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraDataSetProperties",
		sizeof(FNiagaraDataSetProperties),
		alignof(FNiagaraDataSetProperties),
		Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataSetProperties()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraDataSetProperties"), sizeof(FNiagaraDataSetProperties), Get_Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Hash() { return 1767706965U; }
class UScriptStruct* FNiagaraDataSetID::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraDataSetID_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDataSetID, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraDataSetID"), sizeof(FNiagaraDataSetID), Get_Z_Construct_UScriptStruct_FNiagaraDataSetID_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraDataSetID>()
{
	return FNiagaraDataSetID::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraDataSetID(FNiagaraDataSetID::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraDataSetID"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraDataSetID
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraDataSetID()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraDataSetID")),new UScriptStruct::TCppStructOps<FNiagaraDataSetID>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraDataSetID;
	struct Z_Construct_UScriptStruct_FNiagaraDataSetID_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDataSetID_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraDataSetID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraDataSetID>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDataSetID_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraDataSetID_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraDataSetID, Type), Z_Construct_UEnum_Niagara_ENiagaraDataSetType, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDataSetID_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataSetID_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraDataSetID_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDataSetID_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Data Set" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraDataSetID_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraDataSetID, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDataSetID_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataSetID_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraDataSetID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataSetID_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataSetID_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataSetID_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraDataSetID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraDataSetID",
		sizeof(FNiagaraDataSetID),
		alignof(FNiagaraDataSetID),
		Z_Construct_UScriptStruct_FNiagaraDataSetID_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataSetID_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDataSetID_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataSetID_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataSetID()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraDataSetID_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraDataSetID"), sizeof(FNiagaraDataSetID), Get_Z_Construct_UScriptStruct_FNiagaraDataSetID_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraDataSetID_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraDataSetID_Hash() { return 4251099152U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
