// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/NiagaraSimulationStageBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraSimulationStageBase() {}
// Cross Module References
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSimulationStageBase_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSimulationStageBase();
	NIAGARACORE_API UClass* Z_Construct_UClass_UNiagaraMergeable();
	UPackage* Z_Construct_UPackage__Script_Niagara();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraScript_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSimulationStageGeneric_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSimulationStageGeneric();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableDataInterfaceBinding();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraIterationSource();
// End Cross Module References
	void UNiagaraSimulationStageBase::StaticRegisterNativesUNiagaraSimulationStageBase()
	{
	}
	UClass* Z_Construct_UClass_UNiagaraSimulationStageBase_NoRegister()
	{
		return UNiagaraSimulationStageBase::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraSimulationStageBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimulationStageName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SimulationStageName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Script_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Script;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraMergeable,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* A base class for niagara simulation stages.  This class should be derived to add stage specific information.\n*/" },
		{ "IncludePath", "NiagaraSimulationStageBase.h" },
		{ "ModuleRelativePath", "Public/NiagaraSimulationStageBase.h" },
		{ "ToolTip", "A base class for niagara simulation stages.  This class should be derived to add stage specific information." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::NewProp_SimulationStageName_MetaData[] = {
		{ "Category", "Simulation Stage" },
		{ "ModuleRelativePath", "Public/NiagaraSimulationStageBase.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::NewProp_SimulationStageName = { "SimulationStageName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSimulationStageBase, SimulationStageName), METADATA_PARAMS(Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::NewProp_SimulationStageName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::NewProp_SimulationStageName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::NewProp_Script_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraSimulationStageBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::NewProp_Script = { "Script", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSimulationStageBase, Script), Z_Construct_UClass_UNiagaraScript_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::NewProp_Script_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::NewProp_Script_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::NewProp_SimulationStageName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::NewProp_Script,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraSimulationStageBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::ClassParams = {
		&UNiagaraSimulationStageBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraSimulationStageBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraSimulationStageBase, 2033356703);
	template<> NIAGARA_API UClass* StaticClass<UNiagaraSimulationStageBase>()
	{
		return UNiagaraSimulationStageBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraSimulationStageBase(Z_Construct_UClass_UNiagaraSimulationStageBase, &UNiagaraSimulationStageBase::StaticClass, TEXT("/Script/Niagara"), TEXT("UNiagaraSimulationStageBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraSimulationStageBase);
	void UNiagaraSimulationStageGeneric::StaticRegisterNativesUNiagaraSimulationStageGeneric()
	{
	}
	UClass* Z_Construct_UClass_UNiagaraSimulationStageGeneric_NoRegister()
	{
		return UNiagaraSimulationStageGeneric::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataInterface_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DataInterface;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSpawnOnly_MetaData[];
#endif
		static void NewProp_bSpawnOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSpawnOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Iterations_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Iterations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IterationSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_IterationSource;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_IterationSource_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraSimulationStageBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Generic Simulation Stage" },
		{ "IncludePath", "NiagaraSimulationStageBase.h" },
		{ "ModuleRelativePath", "Public/NiagaraSimulationStageBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_DataInterface_MetaData[] = {
		{ "Category", "Simulation Stage" },
		{ "editcondition", "IterationSource == ENiagaraIterationSource::DataInterface" },
		{ "ModuleRelativePath", "Public/NiagaraSimulationStageBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_DataInterface = { "DataInterface", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSimulationStageGeneric, DataInterface), Z_Construct_UScriptStruct_FNiagaraVariableDataInterfaceBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_DataInterface_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_DataInterface_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bSpawnOnly_MetaData[] = {
		{ "Category", "Simulation Stage" },
		{ "DisplayName", "Emitter Reset Only" },
		{ "EditCondition", "IterationSource == ENiagaraIterationSource::DataInterface" },
		{ "ModuleRelativePath", "Public/NiagaraSimulationStageBase.h" },
		{ "Tooltip", "When enabled the stage will only run on the first tick after the emitter is reset, only valid for data interface iteration stages" },
	};
#endif
	void Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bSpawnOnly_SetBit(void* Obj)
	{
		((UNiagaraSimulationStageGeneric*)Obj)->bSpawnOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bSpawnOnly = { "bSpawnOnly", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNiagaraSimulationStageGeneric), &Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bSpawnOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bSpawnOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bSpawnOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_Iterations_MetaData[] = {
		{ "Category", "Simulation Stage" },
		{ "ModuleRelativePath", "Public/NiagaraSimulationStageBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_Iterations = { "Iterations", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSimulationStageGeneric, Iterations), METADATA_PARAMS(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_Iterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_Iterations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_IterationSource_MetaData[] = {
		{ "Category", "Simulation Stage" },
		{ "Comment", "/** Determine which elements this script is iterating over. You are not allowed to */" },
		{ "ModuleRelativePath", "Public/NiagaraSimulationStageBase.h" },
		{ "ToolTip", "Determine which elements this script is iterating over. You are not allowed to" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_IterationSource = { "IterationSource", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSimulationStageGeneric, IterationSource), Z_Construct_UEnum_Niagara_ENiagaraIterationSource, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_IterationSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_IterationSource_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_IterationSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_DataInterface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bSpawnOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_Iterations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_IterationSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_IterationSource_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraSimulationStageGeneric>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::ClassParams = {
		&UNiagaraSimulationStageGeneric::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraSimulationStageGeneric()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraSimulationStageGeneric, 793731895);
	template<> NIAGARA_API UClass* StaticClass<UNiagaraSimulationStageGeneric>()
	{
		return UNiagaraSimulationStageGeneric::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraSimulationStageGeneric(Z_Construct_UClass_UNiagaraSimulationStageGeneric, &UNiagaraSimulationStageGeneric::StaticClass, TEXT("/Script/Niagara"), TEXT("UNiagaraSimulationStageGeneric"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraSimulationStageGeneric);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
