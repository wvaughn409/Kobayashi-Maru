// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraEmitterHandle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraEmitterHandle() {}
// Cross Module References
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEmitterHandle();
	UPackage* Z_Construct_UPackage__Script_Niagara();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraEmitter_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
class UScriptStruct* FNiagaraEmitterHandle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraEmitterHandle, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraEmitterHandle"), sizeof(FNiagaraEmitterHandle), Get_Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraEmitterHandle>()
{
	return FNiagaraEmitterHandle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraEmitterHandle(FNiagaraEmitterHandle::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraEmitterHandle"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraEmitterHandle
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraEmitterHandle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraEmitterHandle")),new UScriptStruct::TCppStructOps<FNiagaraEmitterHandle>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraEmitterHandle;
	struct Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Instance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instance;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastMergedSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LastMergedSource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Source;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsEnabled_MetaData[];
#endif
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_IdName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** \n * Stores emitter information within the context of a System.\n */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitterHandle.h" },
		{ "ToolTip", "Stores emitter information within the context of a System." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraEmitterHandle>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_Instance_MetaData[] = {
		{ "Comment", "/** The copied instance of the emitter this handle references. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitterHandle.h" },
		{ "ToolTip", "The copied instance of the emitter this handle references." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraEmitterHandle, Instance), Z_Construct_UClass_UNiagaraEmitter_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_Instance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_Instance_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_LastMergedSource_MetaData[] = {
		{ "Comment", "/** An unmodified copy of the emitter this handle references for use when merging change from the source emitter. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitterHandle.h" },
		{ "ToolTip", "An unmodified copy of the emitter this handle references for use when merging change from the source emitter." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_LastMergedSource = { "LastMergedSource", nullptr, (EPropertyFlags)0x0040000820000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraEmitterHandle, LastMergedSource_DEPRECATED), Z_Construct_UClass_UNiagaraEmitter_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_LastMergedSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_LastMergedSource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_Source_MetaData[] = {
		{ "Comment", "/** The source emitter this emitter handle was built from. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitterHandle.h" },
		{ "ToolTip", "The source emitter this emitter handle was built from." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0040000820000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraEmitterHandle, Source_DEPRECATED), Z_Construct_UClass_UNiagaraEmitter_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_Source_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_Name_MetaData[] = {
		{ "Comment", "/** The display name for this emitter in the System. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitterHandle.h" },
		{ "ToolTip", "The display name for this emitter in the System." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraEmitterHandle, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_bIsEnabled_MetaData[] = {
		{ "Comment", "/** Whether or not this emitter is enabled within the System.  Disabled emitters aren't simulated. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitterHandle.h" },
		{ "ToolTip", "Whether or not this emitter is enabled within the System.  Disabled emitters aren't simulated." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((FNiagaraEmitterHandle*)Obj)->bIsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNiagaraEmitterHandle), &Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_bIsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_bIsEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_IdName_MetaData[] = {
		{ "Category", "Emitter ID" },
		{ "Comment", "// HACK!  Data sets used to use the emitter name, but this isn't guaranteed to be unique.  This is a temporary hack\n// to allow the data sets to continue work with using names, but that code needs to be refactored to use the id defined here.\n" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitterHandle.h" },
		{ "ToolTip", "HACK!  Data sets used to use the emitter name, but this isn't guaranteed to be unique.  This is a temporary hack\nto allow the data sets to continue work with using names, but that code needs to be refactored to use the id defined here." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_IdName = { "IdName", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraEmitterHandle, IdName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_IdName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_IdName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "Emitter ID" },
		{ "Comment", "/** The id of this emitter handle. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitterHandle.h" },
		{ "ToolTip", "The id of this emitter handle." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraEmitterHandle, Id), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_Id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_Instance,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_LastMergedSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_Source,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_bIsEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_IdName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_Id,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraEmitterHandle",
		sizeof(FNiagaraEmitterHandle),
		alignof(FNiagaraEmitterHandle),
		Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEmitterHandle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraEmitterHandle"), sizeof(FNiagaraEmitterHandle), Get_Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Hash() { return 3602425596U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
