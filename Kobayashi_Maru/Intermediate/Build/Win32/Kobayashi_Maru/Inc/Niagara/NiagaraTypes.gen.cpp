// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/NiagaraTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraTypes() {}
// Cross Module References
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraParameterPanelCategory();
	UPackage* Z_Construct_UPackage__Script_Niagara();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraScriptParameterUsage();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraParameterScope();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraExecutionState();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraExecutionStateSource();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraNumericOutputTypeSelectionMode();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariable();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableBase();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraTypeDefinition();
	COREUOBJECT_API UClass* Z_Construct_UClass_UEnum();
	COREUOBJECT_API UClass* Z_Construct_UClass_UStruct();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableMetaData();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraParameterScopeInfo();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraID();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSpawnInfo();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraMatrix();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraTestStruct();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraTestStructInner();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraParameterMap();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraNumeric();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraBool();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraInt32();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraFloat();
// End Cross Module References
	static UEnum* ENiagaraParameterPanelCategory_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraParameterPanelCategory, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraParameterPanelCategory"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraParameterPanelCategory>()
	{
		return ENiagaraParameterPanelCategory_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraParameterPanelCategory(ENiagaraParameterPanelCategory_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraParameterPanelCategory"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraParameterPanelCategory_Hash() { return 4141394295U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraParameterPanelCategory()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraParameterPanelCategory"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraParameterPanelCategory_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraParameterPanelCategory::Input", (int64)ENiagaraParameterPanelCategory::Input },
				{ "ENiagaraParameterPanelCategory::Attributes", (int64)ENiagaraParameterPanelCategory::Attributes },
				{ "ENiagaraParameterPanelCategory::Output", (int64)ENiagaraParameterPanelCategory::Output },
				{ "ENiagaraParameterPanelCategory::Local", (int64)ENiagaraParameterPanelCategory::Local },
				{ "ENiagaraParameterPanelCategory::User", (int64)ENiagaraParameterPanelCategory::User },
				{ "ENiagaraParameterPanelCategory::Engine", (int64)ENiagaraParameterPanelCategory::Engine },
				{ "ENiagaraParameterPanelCategory::Owner", (int64)ENiagaraParameterPanelCategory::Owner },
				{ "ENiagaraParameterPanelCategory::System", (int64)ENiagaraParameterPanelCategory::System },
				{ "ENiagaraParameterPanelCategory::Emitter", (int64)ENiagaraParameterPanelCategory::Emitter },
				{ "ENiagaraParameterPanelCategory::Particles", (int64)ENiagaraParameterPanelCategory::Particles },
				{ "ENiagaraParameterPanelCategory::ScriptTransient", (int64)ENiagaraParameterPanelCategory::ScriptTransient },
				{ "ENiagaraParameterPanelCategory::StaticSwitch", (int64)ENiagaraParameterPanelCategory::StaticSwitch },
				{ "ENiagaraParameterPanelCategory::None", (int64)ENiagaraParameterPanelCategory::None },
				{ "ENiagaraParameterPanelCategory::Num", (int64)ENiagaraParameterPanelCategory::Num },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Attributes.DisplayName", "Input Attributes" },
				{ "Attributes.Name", "ENiagaraParameterPanelCategory::Attributes" },
				{ "Emitter.Comment", "/** Parameter is an attribute of the owning emitter payload. It is persistent across frames and initialized in the Emitter Spawn stage of the stack.*/" },
				{ "Emitter.DisplayName", "Emitter" },
				{ "Emitter.Name", "ENiagaraParameterPanelCategory::Emitter" },
				{ "Emitter.ToolTip", "Parameter is an attribute of the owning emitter payload. It is persistent across frames and initialized in the Emitter Spawn stage of the stack." },
				{ "Engine.Comment", "/** Parameter provided by the engine. These are explicitly defined by the engine codebase and read-only. */" },
				{ "Engine.DisplayName", "Engine (Generic)" },
				{ "Engine.Hidden", "" },
				{ "Engine.Name", "ENiagaraParameterPanelCategory::Engine" },
				{ "Engine.ToolTip", "Parameter provided by the engine. These are explicitly defined by the engine codebase and read-only." },
				{ "Input.Comment", "/** Parameter that is an input argument into this graph.*/" },
				{ "Input.DisplayName", "Module Inputs" },
				{ "Input.Name", "ENiagaraParameterPanelCategory::Input" },
				{ "Input.ToolTip", "Parameter that is an input argument into this graph." },
				{ "Local.Comment", "/** Parameter is initialized at the start of this script and is only used within the context of this script. It is invisible to the parent stage stack.*/" },
				{ "Local.DisplayName", "Local" },
				{ "Local.Name", "ENiagaraParameterPanelCategory::Local" },
				{ "Local.ToolTip", "Parameter is initialized at the start of this script and is only used within the context of this script. It is invisible to the parent stage stack." },
				{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
				{ "None.Comment", "// insert new categories before\n" },
				{ "None.Hidden", "" },
				{ "None.Name", "ENiagaraParameterPanelCategory::None" },
				{ "None.ToolTip", "insert new categories before" },
				{ "Num.Hidden", "" },
				{ "Num.Name", "ENiagaraParameterPanelCategory::Num" },
				{ "Output.Comment", "/** Parameter is output to the owning stack stage from this script, but is only meaningful if bound elsewhere in the stage.*/" },
				{ "Output.DisplayName", "Output Attributes" },
				{ "Output.Name", "ENiagaraParameterPanelCategory::Output" },
				{ "Output.ToolTip", "Parameter is output to the owning stack stage from this script, but is only meaningful if bound elsewhere in the stage." },
				{ "Owner.Comment", "/** Parameter provided by the engine focused on the owning component. These are explicitly defined by the engine codebase and read-only.*/" },
				{ "Owner.DisplayName", "Engine (Owner)" },
				{ "Owner.Hidden", "" },
				{ "Owner.Name", "ENiagaraParameterPanelCategory::Owner" },
				{ "Owner.ToolTip", "Parameter provided by the engine focused on the owning component. These are explicitly defined by the engine codebase and read-only." },
				{ "Particles.Comment", "/** Parameter is an attribute of the owning particle payload. It is persistent across frames and initialized in the Particle Spawn stage of the stack.*/" },
				{ "Particles.DisplayName", "Particles" },
				{ "Particles.Name", "ENiagaraParameterPanelCategory::Particles" },
				{ "Particles.ToolTip", "Parameter is an attribute of the owning particle payload. It is persistent across frames and initialized in the Particle Spawn stage of the stack." },
				{ "ScriptTransient.Comment", "/** Parameter is initialized at the start of this stage and can be shared amongst other modules within this stack stage, but is not persistent across runs or from stack stage to stack stage.*/" },
				{ "ScriptTransient.DisplayName", "Stage (Transient)" },
				{ "ScriptTransient.Name", "ENiagaraParameterPanelCategory::ScriptTransient" },
				{ "ScriptTransient.ToolTip", "Parameter is initialized at the start of this stage and can be shared amongst other modules within this stack stage, but is not persistent across runs or from stack stage to stack stage." },
				{ "StaticSwitch.DisplayName", "Static Switch" },
				{ "StaticSwitch.Name", "ENiagaraParameterPanelCategory::StaticSwitch" },
				{ "System.Comment", "/** Parameter is an attribute of the owning system payload. It is persistent across frames and initialized in the System Spawn stage of the stack.*/" },
				{ "System.DisplayName", "System" },
				{ "System.Name", "ENiagaraParameterPanelCategory::System" },
				{ "System.ToolTip", "Parameter is an attribute of the owning system payload. It is persistent across frames and initialized in the System Spawn stage of the stack." },
				{ "User.Comment", "/** Parameter that is exposed to the owning component for editing and are read-only when used in the graph*/" },
				{ "User.DisplayName", "User" },
				{ "User.Name", "ENiagaraParameterPanelCategory::User" },
				{ "User.ToolTip", "Parameter that is exposed to the owning component for editing and are read-only when used in the graph" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraParameterPanelCategory",
				"ENiagaraParameterPanelCategory",
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
	static UEnum* ENiagaraScriptParameterUsage_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraScriptParameterUsage, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraScriptParameterUsage"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraScriptParameterUsage>()
	{
		return ENiagaraScriptParameterUsage_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraScriptParameterUsage(ENiagaraScriptParameterUsage_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraScriptParameterUsage"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraScriptParameterUsage_Hash() { return 996642093U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraScriptParameterUsage()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraScriptParameterUsage"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraScriptParameterUsage_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraScriptParameterUsage::Input", (int64)ENiagaraScriptParameterUsage::Input },
				{ "ENiagaraScriptParameterUsage::Output", (int64)ENiagaraScriptParameterUsage::Output },
				{ "ENiagaraScriptParameterUsage::Local", (int64)ENiagaraScriptParameterUsage::Local },
				{ "ENiagaraScriptParameterUsage::InputOutput", (int64)ENiagaraScriptParameterUsage::InputOutput },
				{ "ENiagaraScriptParameterUsage::InitialValueInput", (int64)ENiagaraScriptParameterUsage::InitialValueInput },
				{ "ENiagaraScriptParameterUsage::None", (int64)ENiagaraScriptParameterUsage::None },
				{ "ENiagaraScriptParameterUsage::Num", (int64)ENiagaraScriptParameterUsage::Num },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "InitialValueInput.Name", "ENiagaraScriptParameterUsage::InitialValueInput" },
				{ "Input.Name", "ENiagaraScriptParameterUsage::Input" },
				{ "InputOutput.Name", "ENiagaraScriptParameterUsage::InputOutput" },
				{ "Local.Name", "ENiagaraScriptParameterUsage::Local" },
				{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
				{ "None.Comment", "// insert new script parameter usages before\n" },
				{ "None.Hidden", "" },
				{ "None.Name", "ENiagaraScriptParameterUsage::None" },
				{ "None.ToolTip", "insert new script parameter usages before" },
				{ "Num.Hidden", "" },
				{ "Num.Name", "ENiagaraScriptParameterUsage::Num" },
				{ "Output.Name", "ENiagaraScriptParameterUsage::Output" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraScriptParameterUsage",
				"ENiagaraScriptParameterUsage",
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
	static UEnum* ENiagaraParameterScope_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraParameterScope, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraParameterScope"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraParameterScope>()
	{
		return ENiagaraParameterScope_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraParameterScope(ENiagaraParameterScope_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraParameterScope"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraParameterScope_Hash() { return 2950199611U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraParameterScope()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraParameterScope"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraParameterScope_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraParameterScope::Input", (int64)ENiagaraParameterScope::Input },
				{ "ENiagaraParameterScope::User", (int64)ENiagaraParameterScope::User },
				{ "ENiagaraParameterScope::Engine", (int64)ENiagaraParameterScope::Engine },
				{ "ENiagaraParameterScope::Owner", (int64)ENiagaraParameterScope::Owner },
				{ "ENiagaraParameterScope::System", (int64)ENiagaraParameterScope::System },
				{ "ENiagaraParameterScope::Emitter", (int64)ENiagaraParameterScope::Emitter },
				{ "ENiagaraParameterScope::Particles", (int64)ENiagaraParameterScope::Particles },
				{ "ENiagaraParameterScope::ScriptPersistent", (int64)ENiagaraParameterScope::ScriptPersistent },
				{ "ENiagaraParameterScope::ScriptTransient", (int64)ENiagaraParameterScope::ScriptTransient },
				{ "ENiagaraParameterScope::Local", (int64)ENiagaraParameterScope::Local },
				{ "ENiagaraParameterScope::Custom", (int64)ENiagaraParameterScope::Custom },
				{ "ENiagaraParameterScope::DISPLAY_ONLY_StaticSwitch", (int64)ENiagaraParameterScope::DISPLAY_ONLY_StaticSwitch },
				{ "ENiagaraParameterScope::Output", (int64)ENiagaraParameterScope::Output },
				{ "ENiagaraParameterScope::None", (int64)ENiagaraParameterScope::None },
				{ "ENiagaraParameterScope::Num", (int64)ENiagaraParameterScope::Num },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Custom.Comment", "//Convenience markup for ScopeToString functions, only use in conjunction with ENiagaraScriptParameterUsage::Local.\n" },
				{ "Custom.Hidden", "" },
				{ "Custom.Name", "ENiagaraParameterScope::Custom" },
				{ "Custom.ToolTip", "Convenience markup for ScopeToString functions, only use in conjunction with ENiagaraScriptParameterUsage::Local." },
				{ "DISPLAY_ONLY_StaticSwitch.Comment", "//Convenience markup for expressing parameters using legacy editor mode to freetype namespace and name.\n" },
				{ "DISPLAY_ONLY_StaticSwitch.DisplayName", "Static Switch" },
				{ "DISPLAY_ONLY_StaticSwitch.Hidden", "" },
				{ "DISPLAY_ONLY_StaticSwitch.Name", "ENiagaraParameterScope::DISPLAY_ONLY_StaticSwitch" },
				{ "DISPLAY_ONLY_StaticSwitch.ToolTip", "Convenience markup for expressing parameters using legacy editor mode to freetype namespace and name." },
				{ "Emitter.Comment", "/** Parameter is an attribute of the owning emitter payload. It is persistent across frames and initialized in the Emitter Spawn stage of the stack.*/" },
				{ "Emitter.DisplayName", "Emitter" },
				{ "Emitter.Name", "ENiagaraParameterScope::Emitter" },
				{ "Emitter.ToolTip", "Parameter is an attribute of the owning emitter payload. It is persistent across frames and initialized in the Emitter Spawn stage of the stack." },
				{ "Engine.Comment", "/** Parameter provided by the engine. These are explicitly defined by the engine codebase and read-only. */" },
				{ "Engine.DisplayName", "Engine (Generic)" },
				{ "Engine.Hidden", "" },
				{ "Engine.Name", "ENiagaraParameterScope::Engine" },
				{ "Engine.ToolTip", "Parameter provided by the engine. These are explicitly defined by the engine codebase and read-only." },
				{ "Input.Comment", "/** Parameter that is an input argument into this graph.*/" },
				{ "Input.DisplayName", "Input" },
				{ "Input.Name", "ENiagaraParameterScope::Input" },
				{ "Input.ToolTip", "Parameter that is an input argument into this graph." },
				{ "Local.Comment", "/** Parameter is initialized at the start of this script and is only used within the context of this script. It is invisible to the parent stage stack.*/" },
				{ "Local.DisplayName", "Local" },
				{ "Local.Name", "ENiagaraParameterScope::Local" },
				{ "Local.ToolTip", "Parameter is initialized at the start of this script and is only used within the context of this script. It is invisible to the parent stage stack." },
				{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
				{ "None.Comment", "// insert new scopes before\n" },
				{ "None.Hidden", "" },
				{ "None.Name", "ENiagaraParameterScope::None" },
				{ "None.ToolTip", "insert new scopes before" },
				{ "Num.Hidden", "" },
				{ "Num.Name", "ENiagaraParameterScope::Num" },
				{ "Output.Comment", "/** Parameter is output to the owning stack stage from this script, but is only meaningful if bound elsewhere in the stage.*/" },
				{ "Output.DisplayName", "Output" },
				{ "Output.Name", "ENiagaraParameterScope::Output" },
				{ "Output.ToolTip", "Parameter is output to the owning stack stage from this script, but is only meaningful if bound elsewhere in the stage." },
				{ "Owner.Comment", "/** Parameter provided by the engine focused on the owning component. These are explicitly defined by the engine codebase and read-only.*/" },
				{ "Owner.DisplayName", "Engine (Owner)" },
				{ "Owner.Hidden", "" },
				{ "Owner.Name", "ENiagaraParameterScope::Owner" },
				{ "Owner.ToolTip", "Parameter provided by the engine focused on the owning component. These are explicitly defined by the engine codebase and read-only." },
				{ "Particles.Comment", "/** Parameter is an attribute of the owning particle payload. It is persistent across frames and initialized in the Particle Spawn stage of the stack.*/" },
				{ "Particles.DisplayName", "Particles" },
				{ "Particles.Name", "ENiagaraParameterScope::Particles" },
				{ "Particles.ToolTip", "Parameter is an attribute of the owning particle payload. It is persistent across frames and initialized in the Particle Spawn stage of the stack." },
				{ "ScriptPersistent.Comment", "/** Parameter is initialized in the appropriate spawn stage for the stack. It is persistent from frame to frame. For example, if used consistently in an Emitter stage, this parameter will turn into an emitter attribute. Similarly, if used in a Particle stage, it will turn into a particle attribute.*/" },
				{ "ScriptPersistent.DisplayName", "Stage (Persistent)" },
				{ "ScriptPersistent.Hidden", "" },
				{ "ScriptPersistent.Name", "ENiagaraParameterScope::ScriptPersistent" },
				{ "ScriptPersistent.ToolTip", "Parameter is initialized in the appropriate spawn stage for the stack. It is persistent from frame to frame. For example, if used consistently in an Emitter stage, this parameter will turn into an emitter attribute. Similarly, if used in a Particle stage, it will turn into a particle attribute." },
				{ "ScriptTransient.Comment", "/** Parameter is initialized at the start of this stage and can be shared amongst other modules within this stack stage, but is not persistent across runs or from stack stage to stack stage.*/" },
				{ "ScriptTransient.DisplayName", "Stage (Transient)" },
				{ "ScriptTransient.Name", "ENiagaraParameterScope::ScriptTransient" },
				{ "ScriptTransient.ToolTip", "Parameter is initialized at the start of this stage and can be shared amongst other modules within this stack stage, but is not persistent across runs or from stack stage to stack stage." },
				{ "System.Comment", "/** Parameter is an attribute of the owning system payload. It is persistent across frames and initialized in the System Spawn stage of the stack.*/" },
				{ "System.DisplayName", "System" },
				{ "System.Name", "ENiagaraParameterScope::System" },
				{ "System.ToolTip", "Parameter is an attribute of the owning system payload. It is persistent across frames and initialized in the System Spawn stage of the stack." },
				{ "User.Comment", "/** Parameter that is exposed to the owning component for editing and are read-only when used in the graph*/" },
				{ "User.DisplayName", "User" },
				{ "User.Name", "ENiagaraParameterScope::User" },
				{ "User.ToolTip", "Parameter that is exposed to the owning component for editing and are read-only when used in the graph" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraParameterScope",
				"ENiagaraParameterScope",
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
	static UEnum* ENiagaraExecutionState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraExecutionState, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraExecutionState"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraExecutionState>()
	{
		return ENiagaraExecutionState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraExecutionState(ENiagaraExecutionState_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraExecutionState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraExecutionState_Hash() { return 150759736U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraExecutionState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraExecutionState"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraExecutionState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraExecutionState::Active", (int64)ENiagaraExecutionState::Active },
				{ "ENiagaraExecutionState::Inactive", (int64)ENiagaraExecutionState::Inactive },
				{ "ENiagaraExecutionState::InactiveClear", (int64)ENiagaraExecutionState::InactiveClear },
				{ "ENiagaraExecutionState::Complete", (int64)ENiagaraExecutionState::Complete },
				{ "ENiagaraExecutionState::Disabled", (int64)ENiagaraExecutionState::Disabled },
				{ "ENiagaraExecutionState::Num", (int64)ENiagaraExecutionState::Num },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Active.Comment", "/**  Run all scripts. Allow spawning.*/" },
				{ "Active.Name", "ENiagaraExecutionState::Active" },
				{ "Active.ToolTip", "Run all scripts. Allow spawning." },
				{ "Complete.Comment", "/** Complete. When the system or all emitters are complete the effect is considered finished. */" },
				{ "Complete.Name", "ENiagaraExecutionState::Complete" },
				{ "Complete.ToolTip", "Complete. When the system or all emitters are complete the effect is considered finished." },
				{ "Disabled.Comment", "/** Emitter only. Emitter is disabled. Will not tick or render again until a full re initialization of the system. */" },
				{ "Disabled.Hidden", "" },
				{ "Disabled.Name", "ENiagaraExecutionState::Disabled" },
				{ "Disabled.ToolTip", "Emitter only. Emitter is disabled. Will not tick or render again until a full re initialization of the system." },
				{ "Inactive.Comment", "/** Run all scripts but suppress any new spawning.*/" },
				{ "Inactive.Name", "ENiagaraExecutionState::Inactive" },
				{ "Inactive.ToolTip", "Run all scripts but suppress any new spawning." },
				{ "InactiveClear.Comment", "/** Clear all existing particles and move to inactive.*/" },
				{ "InactiveClear.Name", "ENiagaraExecutionState::InactiveClear" },
				{ "InactiveClear.ToolTip", "Clear all existing particles and move to inactive." },
				{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
				{ "Num.Comment", "// insert new states before\n" },
				{ "Num.Hidden", "" },
				{ "Num.Name", "ENiagaraExecutionState::Num" },
				{ "Num.ToolTip", "insert new states before" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraExecutionState",
				"ENiagaraExecutionState",
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
	static UEnum* ENiagaraExecutionStateSource_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraExecutionStateSource, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraExecutionStateSource"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraExecutionStateSource>()
	{
		return ENiagaraExecutionStateSource_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraExecutionStateSource(ENiagaraExecutionStateSource_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraExecutionStateSource"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraExecutionStateSource_Hash() { return 1038896584U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraExecutionStateSource()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraExecutionStateSource"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraExecutionStateSource_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraExecutionStateSource::Scalability", (int64)ENiagaraExecutionStateSource::Scalability },
				{ "ENiagaraExecutionStateSource::Internal", (int64)ENiagaraExecutionStateSource::Internal },
				{ "ENiagaraExecutionStateSource::Owner", (int64)ENiagaraExecutionStateSource::Owner },
				{ "ENiagaraExecutionStateSource::InternalCompletion", (int64)ENiagaraExecutionStateSource::InternalCompletion },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** \nThe source from which a script execution state was set. Used to allow scalability etc to change the state but only if the state has not been defined by something with higher precedence. \nIf this changes, all scripts must be recompiled by bumping the NiagaraCustomVersion\n*/" },
				{ "Internal.Comment", "//State set by Scalability logic. Lowest precedence.\n" },
				{ "Internal.Name", "ENiagaraExecutionStateSource::Internal" },
				{ "Internal.ToolTip", "State set by Scalability logic. Lowest precedence." },
				{ "InternalCompletion.Comment", "//State requested by the owner. Takes precedence over everything but internal completion logic.\n" },
				{ "InternalCompletion.Name", "ENiagaraExecutionStateSource::InternalCompletion" },
				{ "InternalCompletion.ToolTip", "State requested by the owner. Takes precedence over everything but internal completion logic." },
				{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
				{ "Owner.Comment", "//Misc internal state. For example becoming inactive after we finish our set loops.\n" },
				{ "Owner.Name", "ENiagaraExecutionStateSource::Owner" },
				{ "Owner.ToolTip", "Misc internal state. For example becoming inactive after we finish our set loops." },
				{ "Scalability.Name", "ENiagaraExecutionStateSource::Scalability" },
				{ "ToolTip", "The source from which a script execution state was set. Used to allow scalability etc to change the state but only if the state has not been defined by something with higher precedence.\nIf this changes, all scripts must be recompiled by bumping the NiagaraCustomVersion" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraExecutionStateSource",
				"ENiagaraExecutionStateSource",
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
	static UEnum* ENiagaraNumericOutputTypeSelectionMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraNumericOutputTypeSelectionMode, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraNumericOutputTypeSelectionMode"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraNumericOutputTypeSelectionMode>()
	{
		return ENiagaraNumericOutputTypeSelectionMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraNumericOutputTypeSelectionMode(ENiagaraNumericOutputTypeSelectionMode_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraNumericOutputTypeSelectionMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraNumericOutputTypeSelectionMode_Hash() { return 1120488850U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraNumericOutputTypeSelectionMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraNumericOutputTypeSelectionMode"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraNumericOutputTypeSelectionMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraNumericOutputTypeSelectionMode::None", (int64)ENiagaraNumericOutputTypeSelectionMode::None },
				{ "ENiagaraNumericOutputTypeSelectionMode::Largest", (int64)ENiagaraNumericOutputTypeSelectionMode::Largest },
				{ "ENiagaraNumericOutputTypeSelectionMode::Smallest", (int64)ENiagaraNumericOutputTypeSelectionMode::Smallest },
				{ "ENiagaraNumericOutputTypeSelectionMode::Scalar", (int64)ENiagaraNumericOutputTypeSelectionMode::Scalar },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** Defines different modes for selecting the output numeric type of a function or operation based on the types of the inputs. */" },
				{ "Largest.Comment", "/** Select the largest of the numeric inputs. */" },
				{ "Largest.Name", "ENiagaraNumericOutputTypeSelectionMode::Largest" },
				{ "Largest.ToolTip", "Select the largest of the numeric inputs." },
				{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
				{ "None.Comment", "/** Output type selection not supported. */" },
				{ "None.Hidden", "" },
				{ "None.Name", "ENiagaraNumericOutputTypeSelectionMode::None" },
				{ "None.ToolTip", "Output type selection not supported." },
				{ "Scalar.Comment", "/** Selects the base scalar type for this numeric inputs. */" },
				{ "Scalar.Name", "ENiagaraNumericOutputTypeSelectionMode::Scalar" },
				{ "Scalar.ToolTip", "Selects the base scalar type for this numeric inputs." },
				{ "Smallest.Comment", "/** Select the smallest of the numeric inputs. */" },
				{ "Smallest.Name", "ENiagaraNumericOutputTypeSelectionMode::Smallest" },
				{ "Smallest.ToolTip", "Select the smallest of the numeric inputs." },
				{ "ToolTip", "Defines different modes for selecting the output numeric type of a function or operation based on the types of the inputs." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraNumericOutputTypeSelectionMode",
				"ENiagaraNumericOutputTypeSelectionMode",
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
class UScriptStruct* FNiagaraVariable::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraVariable_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraVariable, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraVariable"), sizeof(FNiagaraVariable), Get_Z_Construct_UScriptStruct_FNiagaraVariable_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraVariable>()
{
	return FNiagaraVariable::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraVariable(FNiagaraVariable::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraVariable"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraVariable
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraVariable()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraVariable")),new UScriptStruct::TCppStructOps<FNiagaraVariable>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraVariable;
	struct Z_Construct_UScriptStruct_FNiagaraVariable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VarData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VarData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VarData_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariable_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraVariable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraVariable>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariable_Statics::NewProp_VarData_MetaData[] = {
		{ "Comment", "//This gets serialized but do we need to worry about endianness doing things like this? If not, where does that get handled?\n//TODO: Remove storage here entirely and move everything to an FNiagaraParameterStore.\n" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "SkipForCompileHash", "true" },
		{ "ToolTip", "This gets serialized but do we need to worry about endianness doing things like this? If not, where does that get handled?\nTODO: Remove storage here entirely and move everything to an FNiagaraParameterStore." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraVariable_Statics::NewProp_VarData = { "VarData", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVariable, VarData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariable_Statics::NewProp_VarData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariable_Statics::NewProp_VarData_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraVariable_Statics::NewProp_VarData_Inner = { "VarData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraVariable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariable_Statics::NewProp_VarData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariable_Statics::NewProp_VarData_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraVariable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		Z_Construct_UScriptStruct_FNiagaraVariableBase,
		&NewStructOps,
		"NiagaraVariable",
		sizeof(FNiagaraVariable),
		alignof(FNiagaraVariable),
		Z_Construct_UScriptStruct_FNiagaraVariable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariable()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraVariable_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraVariable"), sizeof(FNiagaraVariable), Get_Z_Construct_UScriptStruct_FNiagaraVariable_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraVariable_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraVariable_Hash() { return 3617007905U; }
class UScriptStruct* FNiagaraVariableBase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraVariableBase_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraVariableBase, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraVariableBase"), sizeof(FNiagaraVariableBase), Get_Z_Construct_UScriptStruct_FNiagaraVariableBase_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraVariableBase>()
{
	return FNiagaraVariableBase::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraVariableBase(FNiagaraVariableBase::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraVariableBase"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraVariableBase
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraVariableBase()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraVariableBase")),new UScriptStruct::TCppStructOps<FNiagaraVariableBase>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraVariableBase;
	struct Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TypeDef_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TypeDef;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//////////////////////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraVariableBase>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::NewProp_TypeDef_MetaData[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::NewProp_TypeDef = { "TypeDef", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVariableBase, TypeDef), Z_Construct_UScriptStruct_FNiagaraTypeDefinition, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::NewProp_TypeDef_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::NewProp_TypeDef_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVariableBase, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::NewProp_TypeDef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraVariableBase",
		sizeof(FNiagaraVariableBase),
		alignof(FNiagaraVariableBase),
		Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableBase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraVariableBase_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraVariableBase"), sizeof(FNiagaraVariableBase), Get_Z_Construct_UScriptStruct_FNiagaraVariableBase_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraVariableBase_Hash() { return 1956853411U; }
class UScriptStruct* FNiagaraTypeDefinition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraTypeDefinition, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraTypeDefinition"), sizeof(FNiagaraTypeDefinition), Get_Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraTypeDefinition>()
{
	return FNiagaraTypeDefinition::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraTypeDefinition(FNiagaraTypeDefinition::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraTypeDefinition"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraTypeDefinition
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraTypeDefinition()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraTypeDefinition")),new UScriptStruct::TCppStructOps<FNiagaraTypeDefinition>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraTypeDefinition;
	struct Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enum_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Enum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Struct_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Struct;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnderlyingType_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_UnderlyingType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassStructOrEnum_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClassStructOrEnum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraTypeDefinition>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_Enum_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_Enum = { "Enum", nullptr, (EPropertyFlags)0x0040000820000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraTypeDefinition, Enum_DEPRECATED), Z_Construct_UClass_UEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_Enum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_Enum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_Struct_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_Struct = { "Struct", nullptr, (EPropertyFlags)0x0040000820000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraTypeDefinition, Struct_DEPRECATED), Z_Construct_UClass_UStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_Struct_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_Struct_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_UnderlyingType_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "// See enumeration FUnderlyingType for possible values\n" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "See enumeration FUnderlyingType for possible values" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_UnderlyingType = { "UnderlyingType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraTypeDefinition, UnderlyingType), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_UnderlyingType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_UnderlyingType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_ClassStructOrEnum_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/*\n\x09Underlying type for this variable, use FUnderlyingType to determine type without casting\n\x09This can be a UClass, UStruct or UEnum.  Pointing to something like the struct for an FVector, etc.\n\x09In occasional situations this may be a UClass when we're dealing with DataInterface etc.\n\x09*/" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "Underlying type for this variable, use FUnderlyingType to determine type without casting\nThis can be a UClass, UStruct or UEnum.  Pointing to something like the struct for an FVector, etc.\nIn occasional situations this may be a UClass when we're dealing with DataInterface etc." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_ClassStructOrEnum = { "ClassStructOrEnum", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraTypeDefinition, ClassStructOrEnum), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_ClassStructOrEnum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_ClassStructOrEnum_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_Enum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_Struct,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_UnderlyingType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_ClassStructOrEnum,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraTypeDefinition",
		sizeof(FNiagaraTypeDefinition),
		alignof(FNiagaraTypeDefinition),
		Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraTypeDefinition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraTypeDefinition"), sizeof(FNiagaraTypeDefinition), Get_Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Hash() { return 567897189U; }
class UScriptStruct* FNiagaraVariableMetaData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraVariableMetaData, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraVariableMetaData"), sizeof(FNiagaraVariableMetaData), Get_Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraVariableMetaData>()
{
	return FNiagaraVariableMetaData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraVariableMetaData(FNiagaraVariableMetaData::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraVariableMetaData"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraVariableMetaData
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraVariableMetaData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraVariableMetaData")),new UScriptStruct::TCppStructOps<FNiagaraVariableMetaData>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraVariableMetaData;
	struct Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseLegacyNameString_MetaData[];
#endif
		static void NewProp_bUseLegacyNameString_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseLegacyNameString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCreatedInSystemEditor_MetaData[];
#endif
		static void NewProp_bCreatedInSystemEditor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreatedInSystemEditor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedNamespacelessVariableName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CachedNamespacelessVariableName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOutputIsPersistent_MetaData[];
#endif
		static void NewProp_bOutputIsPersistent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOutputIsPersistent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAddedToNodeGraphDeepCopy_MetaData[];
#endif
		static void NewProp_bAddedToNodeGraphDeepCopy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAddedToNodeGraphDeepCopy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticSwitchDefaultValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StaticSwitchDefaultValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsStaticSwitch_MetaData[];
#endif
		static void NewProp_bIsStaticSwitch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsStaticSwitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Usage_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Usage;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Usage_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScopeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ScopeName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyMetaData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PropertyMetaData;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PropertyMetaData_Key_KeyProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PropertyMetaData_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibleCondition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VisibleCondition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditCondition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditCondition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInlineEditConditionToggle_MetaData[];
#endif
		static void NewProp_bInlineEditConditionToggle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInlineEditConditionToggle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorSortPriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EditorSortPriority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAdvancedDisplay_MetaData[];
#endif
		static void NewProp_bAdvancedDisplay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAdvancedDisplay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_CategoryName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Description;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraVariableMetaData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bUseLegacyNameString_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "SkipForCompileHash", "true" },
		{ "ToolTip", "Enable using a legacy custom name string." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bUseLegacyNameString_SetBit(void* Obj)
	{
		((FNiagaraVariableMetaData*)Obj)->bUseLegacyNameString = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bUseLegacyNameString = { "bUseLegacyNameString", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNiagaraVariableMetaData), &Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bUseLegacyNameString_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bUseLegacyNameString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bUseLegacyNameString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bCreatedInSystemEditor_MetaData[] = {
		{ "Comment", "/** Track if the associated parameter was created in the Emitter/System editor. Used to determine whether the associated parameter can be deleted from the Emitter/System editor. */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "SkipForCompileHash", "true" },
		{ "ToolTip", "Track if the associated parameter was created in the Emitter/System editor. Used to determine whether the associated parameter can be deleted from the Emitter/System editor." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bCreatedInSystemEditor_SetBit(void* Obj)
	{
		((FNiagaraVariableMetaData*)Obj)->bCreatedInSystemEditor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bCreatedInSystemEditor = { "bCreatedInSystemEditor", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNiagaraVariableMetaData), &Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bCreatedInSystemEditor_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bCreatedInSystemEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bCreatedInSystemEditor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_CachedNamespacelessVariableName_MetaData[] = {
		{ "Comment", "/** Namespace-less name for associated FNiagaraVariable. Edited directly by user and then used to generate full Name of associated FNiagaraVariable. */" },
		{ "DisplayName", "Property Name" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "SkipForCompileHash", "true" },
		{ "ToolTip", "Namespace-less name for associated FNiagaraVariable. Edited directly by user and then used to generate full Name of associated FNiagaraVariable." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_CachedNamespacelessVariableName = { "CachedNamespacelessVariableName", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVariableMetaData, CachedNamespacelessVariableName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_CachedNamespacelessVariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_CachedNamespacelessVariableName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bOutputIsPersistent_MetaData[] = {
		{ "Comment", "/** Only valid if Usage is Output. Marks the associated FNiagaraVariable as Persistent across script runs and therefore should be retained in the Dataset during compilation/translation. */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "SkipForCompileHash", "true" },
		{ "ToolTip", "Only valid if Usage is Output. Marks the associated FNiagaraVariable as Persistent across script runs and therefore should be retained in the Dataset during compilation/translation." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bOutputIsPersistent_SetBit(void* Obj)
	{
		((FNiagaraVariableMetaData*)Obj)->bOutputIsPersistent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bOutputIsPersistent = { "bOutputIsPersistent", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNiagaraVariableMetaData), &Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bOutputIsPersistent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bOutputIsPersistent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bOutputIsPersistent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bAddedToNodeGraphDeepCopy_MetaData[] = {
		{ "Comment", "/** Transient data to mark variables set in the node graph deep copy as having been derived from a module namespace parameter default. */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "SkipForCompileHash", "true" },
		{ "ToolTip", "Transient data to mark variables set in the node graph deep copy as having been derived from a module namespace parameter default." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bAddedToNodeGraphDeepCopy_SetBit(void* Obj)
	{
		((FNiagaraVariableMetaData*)Obj)->bAddedToNodeGraphDeepCopy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bAddedToNodeGraphDeepCopy = { "bAddedToNodeGraphDeepCopy", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNiagaraVariableMetaData), &Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bAddedToNodeGraphDeepCopy_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bAddedToNodeGraphDeepCopy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bAddedToNodeGraphDeepCopy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_StaticSwitchDefaultValue_MetaData[] = {
		{ "Comment", "/** The default value to use when creating new pins or stack entries for a static switch parameter */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "The default value to use when creating new pins or stack entries for a static switch parameter" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_StaticSwitchDefaultValue = { "StaticSwitchDefaultValue", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVariableMetaData, StaticSwitchDefaultValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_StaticSwitchDefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_StaticSwitchDefaultValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bIsStaticSwitch_MetaData[] = {
		{ "Comment", "/** This is a read-only variable that designates if the metadata is tied to a static switch or not. */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "This is a read-only variable that designates if the metadata is tied to a static switch or not." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bIsStaticSwitch_SetBit(void* Obj)
	{
		((FNiagaraVariableMetaData*)Obj)->bIsStaticSwitch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bIsStaticSwitch = { "bIsStaticSwitch", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNiagaraVariableMetaData), &Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bIsStaticSwitch_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bIsStaticSwitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bIsStaticSwitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_Usage_MetaData[] = {
		{ "Comment", "/** Defines the usage of a variable as an argument or output relative to the script. */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "SkipForCompileHash", "true" },
		{ "ToolTip", "Defines the usage of a variable as an argument or output relative to the script." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_Usage = { "Usage", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVariableMetaData, Usage), Z_Construct_UEnum_Niagara_ENiagaraScriptParameterUsage, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_Usage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_Usage_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_Usage_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_ScopeName_MetaData[] = {
		{ "Comment", "/** Defines the scope of a variable that is an input to a script. Used to lookup registered scope infos and resolve the actual ENiagaraParameterScope and Namespace string to use. */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "SkipForCompileHash", "true" },
		{ "ToolTip", "Defines the scope of a variable that is an input to a script. Used to lookup registered scope infos and resolve the actual ENiagaraParameterScope and Namespace string to use." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_ScopeName = { "ScopeName", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVariableMetaData, ScopeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_ScopeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_ScopeName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_PropertyMetaData_MetaData[] = {
		{ "Category", "Variable" },
		{ "DisplayName", "Property Metadata" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "SkipForCompileHash", "true" },
		{ "ToolTip", "Property Metadata" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_PropertyMetaData = { "PropertyMetaData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVariableMetaData, PropertyMetaData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_PropertyMetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_PropertyMetaData_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_PropertyMetaData_Key_KeyProp = { "PropertyMetaData_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_PropertyMetaData_ValueProp = { "PropertyMetaData", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_VisibleCondition_MetaData[] = {
		{ "Category", "Variable" },
		{ "Comment", "/** Declares the associated input should be conditionally visible based on the value of another input. */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "SkipForCompileHash", "true" },
		{ "ToolTip", "Declares the associated input should be conditionally visible based on the value of another input." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_VisibleCondition = { "VisibleCondition", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVariableMetaData, VisibleCondition), Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_VisibleCondition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_VisibleCondition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_EditCondition_MetaData[] = {
		{ "Category", "Variable" },
		{ "Comment", "/** Declares the associated input should be conditionally editable based on the value of another input. */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "SkipForCompileHash", "true" },
		{ "ToolTip", "Declares the associated input should be conditionally editable based on the value of another input." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_EditCondition = { "EditCondition", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVariableMetaData, EditCondition), Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_EditCondition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_EditCondition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bInlineEditConditionToggle_MetaData[] = {
		{ "Category", "Variable" },
		{ "Comment", "/** Declares the associated input is used as an inline edit condition toggle, so it should be hidden and edited as a \n\x09""checkbox inline with the input which was designated as its edit condition. */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "SkipForCompileHash", "true" },
		{ "ToolTip", "Declares the associated input is used as an inline edit condition toggle, so it should be hidden and edited as a\n      checkbox inline with the input which was designated as its edit condition." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bInlineEditConditionToggle_SetBit(void* Obj)
	{
		((FNiagaraVariableMetaData*)Obj)->bInlineEditConditionToggle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bInlineEditConditionToggle = { "bInlineEditConditionToggle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNiagaraVariableMetaData), &Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bInlineEditConditionToggle_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bInlineEditConditionToggle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bInlineEditConditionToggle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_EditorSortPriority_MetaData[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "SkipForCompileHash", "true" },
		{ "ToolTip", "Affects the sort order in the editor stacks. Use a smaller number to push it to the top. Defaults to zero." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_EditorSortPriority = { "EditorSortPriority", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVariableMetaData, EditorSortPriority), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_EditorSortPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_EditorSortPriority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bAdvancedDisplay_MetaData[] = {
		{ "Category", "Variable" },
		{ "Comment", "/** Declares that this input is advanced and should only be visible if expanded inputs have been expanded. */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "SkipForCompileHash", "true" },
		{ "ToolTip", "Declares that this input is advanced and should only be visible if expanded inputs have been expanded." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bAdvancedDisplay_SetBit(void* Obj)
	{
		((FNiagaraVariableMetaData*)Obj)->bAdvancedDisplay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bAdvancedDisplay = { "bAdvancedDisplay", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNiagaraVariableMetaData), &Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bAdvancedDisplay_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bAdvancedDisplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bAdvancedDisplay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_CategoryName_MetaData[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "SkipForCompileHash", "true" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVariableMetaData, CategoryName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_CategoryName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_CategoryName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "MultiLine", "TRUE" },
		{ "SkipForCompileHash", "true" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVariableMetaData, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_Description_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bUseLegacyNameString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bCreatedInSystemEditor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_CachedNamespacelessVariableName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bOutputIsPersistent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bAddedToNodeGraphDeepCopy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_StaticSwitchDefaultValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bIsStaticSwitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_Usage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_Usage_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_ScopeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_PropertyMetaData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_PropertyMetaData_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_PropertyMetaData_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_VisibleCondition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_EditCondition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bInlineEditConditionToggle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_EditorSortPriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bAdvancedDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_CategoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_Description,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraVariableMetaData",
		sizeof(FNiagaraVariableMetaData),
		alignof(FNiagaraVariableMetaData),
		Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableMetaData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraVariableMetaData"), sizeof(FNiagaraVariableMetaData), Get_Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Hash() { return 4050146197U; }
class UScriptStruct* FNiagaraParameterScopeInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraParameterScopeInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraParameterScopeInfo, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraParameterScopeInfo"), sizeof(FNiagaraParameterScopeInfo), Get_Z_Construct_UScriptStruct_FNiagaraParameterScopeInfo_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraParameterScopeInfo>()
{
	return FNiagaraParameterScopeInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraParameterScopeInfo(FNiagaraParameterScopeInfo::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraParameterScopeInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraParameterScopeInfo
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraParameterScopeInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraParameterScopeInfo")),new UScriptStruct::TCppStructOps<FNiagaraParameterScopeInfo>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraParameterScopeInfo;
	struct Z_Construct_UScriptStruct_FNiagaraParameterScopeInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NamespaceString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NamespaceString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scope_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Scope;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Scope_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraParameterScopeInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraParameterScopeInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraParameterScopeInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraParameterScopeInfo_Statics::NewProp_NamespaceString_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraParameterScopeInfo_Statics::NewProp_NamespaceString = { "NamespaceString", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraParameterScopeInfo, NamespaceString), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraParameterScopeInfo_Statics::NewProp_NamespaceString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterScopeInfo_Statics::NewProp_NamespaceString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraParameterScopeInfo_Statics::NewProp_Scope_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraParameterScopeInfo_Statics::NewProp_Scope = { "Scope", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraParameterScopeInfo, Scope), Z_Construct_UEnum_Niagara_ENiagaraParameterScope, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraParameterScopeInfo_Statics::NewProp_Scope_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterScopeInfo_Statics::NewProp_Scope_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNiagaraParameterScopeInfo_Statics::NewProp_Scope_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraParameterScopeInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterScopeInfo_Statics::NewProp_NamespaceString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterScopeInfo_Statics::NewProp_Scope,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterScopeInfo_Statics::NewProp_Scope_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraParameterScopeInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraParameterScopeInfo",
		sizeof(FNiagaraParameterScopeInfo),
		alignof(FNiagaraParameterScopeInfo),
		Z_Construct_UScriptStruct_FNiagaraParameterScopeInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterScopeInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraParameterScopeInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterScopeInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraParameterScopeInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraParameterScopeInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraParameterScopeInfo"), sizeof(FNiagaraParameterScopeInfo), Get_Z_Construct_UScriptStruct_FNiagaraParameterScopeInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraParameterScopeInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraParameterScopeInfo_Hash() { return 2002844970U; }
class UScriptStruct* FNiagaraInputConditionMetadata::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraInputConditionMetadata"), sizeof(FNiagaraInputConditionMetadata), Get_Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraInputConditionMetadata>()
{
	return FNiagaraInputConditionMetadata::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraInputConditionMetadata(FNiagaraInputConditionMetadata::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraInputConditionMetadata"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraInputConditionMetadata
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraInputConditionMetadata()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraInputConditionMetadata")),new UScriptStruct::TCppStructOps<FNiagaraInputConditionMetadata>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraInputConditionMetadata;
	struct Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TargetValues;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TargetValues_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InputName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Defines options for conditionally editing and showing script inputs in the UI. */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "Defines options for conditionally editing and showing script inputs in the UI." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraInputConditionMetadata>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::NewProp_TargetValues_MetaData[] = {
		{ "Category", "Input Condition" },
		{ "Comment", "/** The list of target values which will satisfy the input condition.  If this is empty it's assumed to be a single value of \"true\" for matching bool inputs. */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "The list of target values which will satisfy the input condition.  If this is empty it's assumed to be a single value of \"true\" for matching bool inputs." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::NewProp_TargetValues = { "TargetValues", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraInputConditionMetadata, TargetValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::NewProp_TargetValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::NewProp_TargetValues_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::NewProp_TargetValues_Inner = { "TargetValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::NewProp_InputName_MetaData[] = {
		{ "Category", "Input Condition" },
		{ "Comment", "/** The name of the input to use for matching the target values. */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "The name of the input to use for matching the target values." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraInputConditionMetadata, InputName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::NewProp_InputName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::NewProp_InputName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::NewProp_TargetValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::NewProp_TargetValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::NewProp_InputName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraInputConditionMetadata",
		sizeof(FNiagaraInputConditionMetadata),
		alignof(FNiagaraInputConditionMetadata),
		Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraInputConditionMetadata"), sizeof(FNiagaraInputConditionMetadata), Get_Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Hash() { return 1954708610U; }
class UScriptStruct* FNiagaraCompileHashVisitorDebugInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraCompileHashVisitorDebugInfo"), sizeof(FNiagaraCompileHashVisitorDebugInfo), Get_Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraCompileHashVisitorDebugInfo>()
{
	return FNiagaraCompileHashVisitorDebugInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo(FNiagaraCompileHashVisitorDebugInfo::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraCompileHashVisitorDebugInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraCompileHashVisitorDebugInfo
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraCompileHashVisitorDebugInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraCompileHashVisitorDebugInfo")),new UScriptStruct::TCppStructOps<FNiagaraCompileHashVisitorDebugInfo>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraCompileHashVisitorDebugInfo;
	struct Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PropertyValues;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PropertyValues_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyKeys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PropertyKeys;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PropertyKeys_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraCompileHashVisitorDebugInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::NewProp_PropertyValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::NewProp_PropertyValues = { "PropertyValues", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraCompileHashVisitorDebugInfo, PropertyValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::NewProp_PropertyValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::NewProp_PropertyValues_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::NewProp_PropertyValues_Inner = { "PropertyValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::NewProp_PropertyKeys_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::NewProp_PropertyKeys = { "PropertyKeys", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraCompileHashVisitorDebugInfo, PropertyKeys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::NewProp_PropertyKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::NewProp_PropertyKeys_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::NewProp_PropertyKeys_Inner = { "PropertyKeys", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::NewProp_Object_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraCompileHashVisitorDebugInfo, Object), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::NewProp_Object_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::NewProp_PropertyValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::NewProp_PropertyValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::NewProp_PropertyKeys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::NewProp_PropertyKeys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::NewProp_Object,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraCompileHashVisitorDebugInfo",
		sizeof(FNiagaraCompileHashVisitorDebugInfo),
		alignof(FNiagaraCompileHashVisitorDebugInfo),
		Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraCompileHashVisitorDebugInfo"), sizeof(FNiagaraCompileHashVisitorDebugInfo), Get_Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Hash() { return 1248961964U; }
class UScriptStruct* FNiagaraTypeLayoutInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraTypeLayoutInfo"), sizeof(FNiagaraTypeLayoutInfo), Get_Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraTypeLayoutInfo>()
{
	return FNiagaraTypeLayoutInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraTypeLayoutInfo(FNiagaraTypeLayoutInfo::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraTypeLayoutInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraTypeLayoutInfo
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraTypeLayoutInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraTypeLayoutInfo")),new UScriptStruct::TCppStructOps<FNiagaraTypeLayoutInfo>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraTypeLayoutInfo;
	struct Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Int32ComponentRegisterOffsets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Int32ComponentRegisterOffsets;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Int32ComponentRegisterOffsets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Int32ComponentByteOffsets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Int32ComponentByteOffsets;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Int32ComponentByteOffsets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatComponentRegisterOffsets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FloatComponentRegisterOffsets;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_FloatComponentRegisterOffsets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatComponentByteOffsets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FloatComponentByteOffsets;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_FloatComponentByteOffsets_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Information about how this type should be laid out in an FNiagaraDataSet */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "Information about how this type should be laid out in an FNiagaraDataSet" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraTypeLayoutInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_Int32ComponentRegisterOffsets_MetaData[] = {
		{ "Comment", "/** Offset into register table for each int32 component. */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "Offset into register table for each int32 component." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_Int32ComponentRegisterOffsets = { "Int32ComponentRegisterOffsets", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraTypeLayoutInfo, Int32ComponentRegisterOffsets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_Int32ComponentRegisterOffsets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_Int32ComponentRegisterOffsets_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_Int32ComponentRegisterOffsets_Inner = { "Int32ComponentRegisterOffsets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_Int32ComponentByteOffsets_MetaData[] = {
		{ "Comment", "/** Byte offset of each int32 component in a structured layout. */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "Byte offset of each int32 component in a structured layout." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_Int32ComponentByteOffsets = { "Int32ComponentByteOffsets", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraTypeLayoutInfo, Int32ComponentByteOffsets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_Int32ComponentByteOffsets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_Int32ComponentByteOffsets_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_Int32ComponentByteOffsets_Inner = { "Int32ComponentByteOffsets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_FloatComponentRegisterOffsets_MetaData[] = {
		{ "Comment", "/** Offset into register table for each float component. */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "Offset into register table for each float component." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_FloatComponentRegisterOffsets = { "FloatComponentRegisterOffsets", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraTypeLayoutInfo, FloatComponentRegisterOffsets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_FloatComponentRegisterOffsets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_FloatComponentRegisterOffsets_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_FloatComponentRegisterOffsets_Inner = { "FloatComponentRegisterOffsets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_FloatComponentByteOffsets_MetaData[] = {
		{ "Comment", "/** Byte offset of each float component in a structured layout. */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "Byte offset of each float component in a structured layout." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_FloatComponentByteOffsets = { "FloatComponentByteOffsets", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraTypeLayoutInfo, FloatComponentByteOffsets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_FloatComponentByteOffsets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_FloatComponentByteOffsets_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_FloatComponentByteOffsets_Inner = { "FloatComponentByteOffsets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_Int32ComponentRegisterOffsets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_Int32ComponentRegisterOffsets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_Int32ComponentByteOffsets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_Int32ComponentByteOffsets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_FloatComponentRegisterOffsets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_FloatComponentRegisterOffsets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_FloatComponentByteOffsets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_FloatComponentByteOffsets_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraTypeLayoutInfo",
		sizeof(FNiagaraTypeLayoutInfo),
		alignof(FNiagaraTypeLayoutInfo),
		Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraTypeLayoutInfo"), sizeof(FNiagaraTypeLayoutInfo), Get_Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Hash() { return 4201509653U; }
class UScriptStruct* FNiagaraID::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraID_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraID, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraID"), sizeof(FNiagaraID), Get_Z_Construct_UScriptStruct_FNiagaraID_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraID>()
{
	return FNiagaraID::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraID(FNiagaraID::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraID"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraID
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraID()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraID")),new UScriptStruct::TCppStructOps<FNiagaraID>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraID;
	struct Z_Construct_UScriptStruct_FNiagaraID_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcquireTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AcquireTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraID_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Niagara ID" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraID>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraID_Statics::NewProp_AcquireTag_MetaData[] = {
		{ "Category", "ID" },
		{ "Comment", "/** \n\x09""A unique tag for when this ID was acquired. \n\x09""Allows us to differentiate between particles when one dies and another reuses it's Index.\n\x09*/" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "A unique tag for when this ID was acquired.\nAllows us to differentiate between particles when one dies and another reuses it's Index." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraID_Statics::NewProp_AcquireTag = { "AcquireTag", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraID, AcquireTag), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraID_Statics::NewProp_AcquireTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraID_Statics::NewProp_AcquireTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraID_Statics::NewProp_Index_MetaData[] = {
		{ "Category", "ID" },
		{ "Comment", "/** \n\x09Index in the indirection table for this particle. Allows fast access to this particles data.\n\x09Is always unique among currently living particles but will be reused after the particle dies.\n\x09*/" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "Index in the indirection table for this particle. Allows fast access to this particles data.\nIs always unique among currently living particles but will be reused after the particle dies." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraID_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraID, Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraID_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraID_Statics::NewProp_Index_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraID_Statics::NewProp_AcquireTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraID_Statics::NewProp_Index,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraID",
		sizeof(FNiagaraID),
		alignof(FNiagaraID),
		Z_Construct_UScriptStruct_FNiagaraID_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraID_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraID_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraID_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraID()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraID_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraID"), sizeof(FNiagaraID), Get_Z_Construct_UScriptStruct_FNiagaraID_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraID_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraID_Hash() { return 1266770565U; }
class UScriptStruct* FNiagaraSpawnInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraSpawnInfo, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraSpawnInfo"), sizeof(FNiagaraSpawnInfo), Get_Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraSpawnInfo>()
{
	return FNiagaraSpawnInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraSpawnInfo(FNiagaraSpawnInfo::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraSpawnInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraSpawnInfo
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraSpawnInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraSpawnInfo")),new UScriptStruct::TCppStructOps<FNiagaraSpawnInfo>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraSpawnInfo;
	struct Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SpawnGroup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntervalDt_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IntervalDt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpStartDt_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InterpStartDt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Data controlling the spawning of particles */" },
		{ "DisplayName", "Spawn Info" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "NiagaraClearEachFrame", "true" },
		{ "ToolTip", "Data controlling the spawning of particles" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraSpawnInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewProp_SpawnGroup_MetaData[] = {
		{ "Category", "SpawnInfo" },
		{ "Comment", "/**\n\x09 * An integer used to identify this spawn info.\n\x09 * Typically this is unused.\n\x09 * An example usage is when using multiple spawn modules to spawn from multiple discreet locations.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "An integer used to identify this spawn info.\nTypically this is unused.\nAn example usage is when using multiple spawn modules to spawn from multiple discreet locations." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewProp_SpawnGroup = { "SpawnGroup", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraSpawnInfo, SpawnGroup), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewProp_SpawnGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewProp_SpawnGroup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewProp_IntervalDt_MetaData[] = {
		{ "Category", "SpawnInfo" },
		{ "Comment", "/** The sub frame delta time between each particle. */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "The sub frame delta time between each particle." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewProp_IntervalDt = { "IntervalDt", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraSpawnInfo, IntervalDt), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewProp_IntervalDt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewProp_IntervalDt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewProp_InterpStartDt_MetaData[] = {
		{ "Category", "SpawnInfo" },
		{ "Comment", "/** The sub frame delta time at which to spawn the first particle. */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "The sub frame delta time at which to spawn the first particle." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewProp_InterpStartDt = { "InterpStartDt", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraSpawnInfo, InterpStartDt), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewProp_InterpStartDt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewProp_InterpStartDt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewProp_Count_MetaData[] = {
		{ "Category", "SpawnInfo" },
		{ "Comment", "/** How many particles to spawn. */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "How many particles to spawn." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraSpawnInfo, Count), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewProp_Count_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewProp_SpawnGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewProp_IntervalDt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewProp_InterpStartDt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewProp_Count,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraSpawnInfo",
		sizeof(FNiagaraSpawnInfo),
		alignof(FNiagaraSpawnInfo),
		Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSpawnInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraSpawnInfo"), sizeof(FNiagaraSpawnInfo), Get_Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Hash() { return 4206202581U; }
class UScriptStruct* FNiagaraMatrix::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraMatrix_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraMatrix, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraMatrix"), sizeof(FNiagaraMatrix), Get_Z_Construct_UScriptStruct_FNiagaraMatrix_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraMatrix>()
{
	return FNiagaraMatrix::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraMatrix(FNiagaraMatrix::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraMatrix"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraMatrix
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraMatrix()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraMatrix")),new UScriptStruct::TCppStructOps<FNiagaraMatrix>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraMatrix;
	struct Z_Construct_UScriptStruct_FNiagaraMatrix_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Row3_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Row3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Row2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Row2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Row1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Row1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Row0_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Row0;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::Struct_MetaDataParams[] = {
		{ "DisplayName", "Matrix" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraMatrix>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewProp_Row3_MetaData[] = {
		{ "Category", "NiagaraMatrix" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewProp_Row3 = { "Row3", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraMatrix, Row3), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewProp_Row3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewProp_Row3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewProp_Row2_MetaData[] = {
		{ "Category", "NiagaraMatrix" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewProp_Row2 = { "Row2", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraMatrix, Row2), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewProp_Row2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewProp_Row2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewProp_Row1_MetaData[] = {
		{ "Category", "NiagaraMatrix" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewProp_Row1 = { "Row1", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraMatrix, Row1), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewProp_Row1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewProp_Row1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewProp_Row0_MetaData[] = {
		{ "Category", "NiagaraMatrix" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewProp_Row0 = { "Row0", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraMatrix, Row0), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewProp_Row0_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewProp_Row0_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewProp_Row3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewProp_Row2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewProp_Row1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewProp_Row0,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraMatrix",
		sizeof(FNiagaraMatrix),
		alignof(FNiagaraMatrix),
		Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraMatrix()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraMatrix_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraMatrix"), sizeof(FNiagaraMatrix), Get_Z_Construct_UScriptStruct_FNiagaraMatrix_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraMatrix_Hash() { return 2744625674U; }
class UScriptStruct* FNiagaraTestStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraTestStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraTestStruct, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraTestStruct"), sizeof(FNiagaraTestStruct), Get_Z_Construct_UScriptStruct_FNiagaraTestStruct_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraTestStruct>()
{
	return FNiagaraTestStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraTestStruct(FNiagaraTestStruct::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraTestStruct"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraTestStruct
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraTestStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraTestStruct")),new UScriptStruct::TCppStructOps<FNiagaraTestStruct>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraTestStruct;
	struct Z_Construct_UScriptStruct_FNiagaraTestStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InnerStruct2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InnerStruct2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InnerStruct1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InnerStruct1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vector2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vector2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vector1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vector1;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraTestStruct_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraTestStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraTestStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraTestStruct_Statics::NewProp_InnerStruct2_MetaData[] = {
		{ "Category", "TestStruct" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraTestStruct_Statics::NewProp_InnerStruct2 = { "InnerStruct2", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraTestStruct, InnerStruct2), Z_Construct_UScriptStruct_FNiagaraTestStructInner, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraTestStruct_Statics::NewProp_InnerStruct2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraTestStruct_Statics::NewProp_InnerStruct2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraTestStruct_Statics::NewProp_InnerStruct1_MetaData[] = {
		{ "Category", "TestStruct" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraTestStruct_Statics::NewProp_InnerStruct1 = { "InnerStruct1", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraTestStruct, InnerStruct1), Z_Construct_UScriptStruct_FNiagaraTestStructInner, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraTestStruct_Statics::NewProp_InnerStruct1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraTestStruct_Statics::NewProp_InnerStruct1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraTestStruct_Statics::NewProp_Vector2_MetaData[] = {
		{ "Category", "TestStruct" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraTestStruct_Statics::NewProp_Vector2 = { "Vector2", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraTestStruct, Vector2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraTestStruct_Statics::NewProp_Vector2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraTestStruct_Statics::NewProp_Vector2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraTestStruct_Statics::NewProp_Vector1_MetaData[] = {
		{ "Category", "TestStruct" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraTestStruct_Statics::NewProp_Vector1 = { "Vector1", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraTestStruct, Vector1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraTestStruct_Statics::NewProp_Vector1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraTestStruct_Statics::NewProp_Vector1_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraTestStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraTestStruct_Statics::NewProp_InnerStruct2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraTestStruct_Statics::NewProp_InnerStruct1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraTestStruct_Statics::NewProp_Vector2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraTestStruct_Statics::NewProp_Vector1,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraTestStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraTestStruct",
		sizeof(FNiagaraTestStruct),
		alignof(FNiagaraTestStruct),
		Z_Construct_UScriptStruct_FNiagaraTestStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraTestStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraTestStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraTestStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraTestStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraTestStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraTestStruct"), sizeof(FNiagaraTestStruct), Get_Z_Construct_UScriptStruct_FNiagaraTestStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraTestStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraTestStruct_Hash() { return 601898244U; }
class UScriptStruct* FNiagaraTestStructInner::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraTestStructInner_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraTestStructInner, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraTestStructInner"), sizeof(FNiagaraTestStructInner), Get_Z_Construct_UScriptStruct_FNiagaraTestStructInner_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraTestStructInner>()
{
	return FNiagaraTestStructInner::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraTestStructInner(FNiagaraTestStructInner::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraTestStructInner"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraTestStructInner
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraTestStructInner()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraTestStructInner")),new UScriptStruct::TCppStructOps<FNiagaraTestStructInner>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraTestStructInner;
	struct Z_Construct_UScriptStruct_FNiagaraTestStructInner_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InnerVector2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InnerVector2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InnerVector1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InnerVector1;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraTestStructInner_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraTestStructInner_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraTestStructInner>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraTestStructInner_Statics::NewProp_InnerVector2_MetaData[] = {
		{ "Category", "TestStruct" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraTestStructInner_Statics::NewProp_InnerVector2 = { "InnerVector2", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraTestStructInner, InnerVector2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraTestStructInner_Statics::NewProp_InnerVector2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraTestStructInner_Statics::NewProp_InnerVector2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraTestStructInner_Statics::NewProp_InnerVector1_MetaData[] = {
		{ "Category", "TestStruct" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraTestStructInner_Statics::NewProp_InnerVector1 = { "InnerVector1", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraTestStructInner, InnerVector1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraTestStructInner_Statics::NewProp_InnerVector1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraTestStructInner_Statics::NewProp_InnerVector1_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraTestStructInner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraTestStructInner_Statics::NewProp_InnerVector2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraTestStructInner_Statics::NewProp_InnerVector1,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraTestStructInner_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraTestStructInner",
		sizeof(FNiagaraTestStructInner),
		alignof(FNiagaraTestStructInner),
		Z_Construct_UScriptStruct_FNiagaraTestStructInner_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraTestStructInner_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraTestStructInner_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraTestStructInner_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraTestStructInner()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraTestStructInner_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraTestStructInner"), sizeof(FNiagaraTestStructInner), Get_Z_Construct_UScriptStruct_FNiagaraTestStructInner_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraTestStructInner_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraTestStructInner_Hash() { return 3430501151U; }
class UScriptStruct* FNiagaraParameterMap::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraParameterMap_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraParameterMap, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraParameterMap"), sizeof(FNiagaraParameterMap), Get_Z_Construct_UScriptStruct_FNiagaraParameterMap_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraParameterMap>()
{
	return FNiagaraParameterMap::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraParameterMap(FNiagaraParameterMap::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraParameterMap"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraParameterMap
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraParameterMap()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraParameterMap")),new UScriptStruct::TCppStructOps<FNiagaraParameterMap>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraParameterMap;
	struct Z_Construct_UScriptStruct_FNiagaraParameterMap_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraParameterMap_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraParameterMap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraParameterMap>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraParameterMap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraParameterMap",
		sizeof(FNiagaraParameterMap),
		alignof(FNiagaraParameterMap),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraParameterMap_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterMap_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraParameterMap()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraParameterMap_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraParameterMap"), sizeof(FNiagaraParameterMap), Get_Z_Construct_UScriptStruct_FNiagaraParameterMap_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraParameterMap_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraParameterMap_Hash() { return 3384528110U; }
class UScriptStruct* FNiagaraNumeric::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraNumeric_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraNumeric, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraNumeric"), sizeof(FNiagaraNumeric), Get_Z_Construct_UScriptStruct_FNiagaraNumeric_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraNumeric>()
{
	return FNiagaraNumeric::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraNumeric(FNiagaraNumeric::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraNumeric"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraNumeric
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraNumeric()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraNumeric")),new UScriptStruct::TCppStructOps<FNiagaraNumeric>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraNumeric;
	struct Z_Construct_UScriptStruct_FNiagaraNumeric_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraNumeric_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraNumeric_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraNumeric>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraNumeric_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraNumeric",
		sizeof(FNiagaraNumeric),
		alignof(FNiagaraNumeric),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraNumeric_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraNumeric_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraNumeric()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraNumeric_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraNumeric"), sizeof(FNiagaraNumeric), Get_Z_Construct_UScriptStruct_FNiagaraNumeric_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraNumeric_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraNumeric_Hash() { return 325443120U; }
class UScriptStruct* FNiagaraBool::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraBool_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraBool, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraBool"), sizeof(FNiagaraBool), Get_Z_Construct_UScriptStruct_FNiagaraBool_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraBool>()
{
	return FNiagaraBool::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraBool(FNiagaraBool::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraBool"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraBool
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraBool()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraBool")),new UScriptStruct::TCppStructOps<FNiagaraBool>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraBool;
	struct Z_Construct_UScriptStruct_FNiagaraBool_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraBool_Statics::Struct_MetaDataParams[] = {
		{ "DisplayName", "bool" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraBool_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraBool>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraBool_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "// Must be either FNiagaraBool::True or FNiagaraBool::False.\n" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "Must be either FNiagaraBool::True or FNiagaraBool::False." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraBool_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraBool, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraBool_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBool_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraBool_Statics::NewProp_Value,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraBool_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraBool",
		sizeof(FNiagaraBool),
		alignof(FNiagaraBool),
		Z_Construct_UScriptStruct_FNiagaraBool_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBool_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraBool_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBool_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraBool()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraBool_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraBool"), sizeof(FNiagaraBool), Get_Z_Construct_UScriptStruct_FNiagaraBool_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraBool_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraBool_Hash() { return 652397531U; }
class UScriptStruct* FNiagaraInt32::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraInt32_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraInt32, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraInt32"), sizeof(FNiagaraInt32), Get_Z_Construct_UScriptStruct_FNiagaraInt32_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraInt32>()
{
	return FNiagaraInt32::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraInt32(FNiagaraInt32::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraInt32"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraInt32
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraInt32()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraInt32")),new UScriptStruct::TCppStructOps<FNiagaraInt32>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraInt32;
	struct Z_Construct_UScriptStruct_FNiagaraInt32_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraInt32_Statics::Struct_MetaDataParams[] = {
		{ "DisplayName", "int32" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraInt32_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraInt32>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraInt32_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraInt32_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraInt32, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraInt32_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraInt32_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraInt32_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraInt32_Statics::NewProp_Value,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraInt32_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraInt32",
		sizeof(FNiagaraInt32),
		alignof(FNiagaraInt32),
		Z_Construct_UScriptStruct_FNiagaraInt32_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraInt32_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraInt32_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraInt32_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraInt32()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraInt32_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraInt32"), sizeof(FNiagaraInt32), Get_Z_Construct_UScriptStruct_FNiagaraInt32_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraInt32_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraInt32_Hash() { return 2315255228U; }
class UScriptStruct* FNiagaraFloat::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraFloat_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraFloat, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraFloat"), sizeof(FNiagaraFloat), Get_Z_Construct_UScriptStruct_FNiagaraFloat_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraFloat>()
{
	return FNiagaraFloat::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraFloat(FNiagaraFloat::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraFloat"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraFloat
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraFloat()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraFloat")),new UScriptStruct::TCppStructOps<FNiagaraFloat>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraFloat;
	struct Z_Construct_UScriptStruct_FNiagaraFloat_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraFloat_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// basic type struct definitions\n" },
		{ "DisplayName", "float" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "basic type struct definitions" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraFloat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraFloat>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraFloat_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraFloat, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraFloat_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFloat_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFloat_Statics::NewProp_Value,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraFloat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraFloat",
		sizeof(FNiagaraFloat),
		alignof(FNiagaraFloat),
		Z_Construct_UScriptStruct_FNiagaraFloat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFloat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraFloat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFloat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraFloat()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraFloat_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraFloat"), sizeof(FNiagaraFloat), Get_Z_Construct_UScriptStruct_FNiagaraFloat_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraFloat_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraFloat_Hash() { return 1602806732U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
