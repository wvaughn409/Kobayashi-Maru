// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraShader/Public/NiagaraShared.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraShared() {}
// Cross Module References
	NIAGARASHADER_API UFunction* Z_Construct_UDelegateFunction_NiagaraShader_OnNiagaraScriptCompilationComplete__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_NiagaraShader();
	NIAGARASHADER_API UEnum* Z_Construct_UEnum_NiagaraShader_FNiagaraCompileEventSeverity();
	NIAGARASHADER_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo();
	NIAGARASHADER_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction();
	NIAGARASHADER_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraCompileEvent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_NiagaraShader_OnNiagaraScriptCompilationComplete__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_NiagaraShader_OnNiagaraScriptCompilationComplete__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraShared.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NiagaraShader_OnNiagaraScriptCompilationComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NiagaraShader, nullptr, "OnNiagaraScriptCompilationComplete__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_NiagaraShader_OnNiagaraScriptCompilationComplete__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NiagaraShader_OnNiagaraScriptCompilationComplete__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_NiagaraShader_OnNiagaraScriptCompilationComplete__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_NiagaraShader_OnNiagaraScriptCompilationComplete__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* FNiagaraCompileEventSeverity_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NiagaraShader_FNiagaraCompileEventSeverity, Z_Construct_UPackage__Script_NiagaraShader(), TEXT("FNiagaraCompileEventSeverity"));
		}
		return Singleton;
	}
	template<> NIAGARASHADER_API UEnum* StaticEnum<FNiagaraCompileEventSeverity>()
	{
		return FNiagaraCompileEventSeverity_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_FNiagaraCompileEventSeverity(FNiagaraCompileEventSeverity_StaticEnum, TEXT("/Script/NiagaraShader"), TEXT("FNiagaraCompileEventSeverity"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_NiagaraShader_FNiagaraCompileEventSeverity_Hash() { return 1764971149U; }
	UEnum* Z_Construct_UEnum_NiagaraShader_FNiagaraCompileEventSeverity()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_NiagaraShader();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("FNiagaraCompileEventSeverity"), 0, Get_Z_Construct_UEnum_NiagaraShader_FNiagaraCompileEventSeverity_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "FNiagaraCompileEventSeverity::Log", (int64)FNiagaraCompileEventSeverity::Log },
				{ "FNiagaraCompileEventSeverity::Warning", (int64)FNiagaraCompileEventSeverity::Warning },
				{ "FNiagaraCompileEventSeverity::Error", (int64)FNiagaraCompileEventSeverity::Error },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** Defines the compile event types for translation/compilation.*/" },
				{ "Error.Name", "FNiagaraCompileEventSeverity::Error" },
				{ "Log.Name", "FNiagaraCompileEventSeverity::Log" },
				{ "ModuleRelativePath", "Public/NiagaraShared.h" },
				{ "ToolTip", "Defines the compile event types for translation/compilation." },
				{ "Warning.Name", "FNiagaraCompileEventSeverity::Warning" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_NiagaraShader,
				nullptr,
				"FNiagaraCompileEventSeverity",
				"FNiagaraCompileEventSeverity",
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
class UScriptStruct* FNiagaraDataInterfaceGPUParamInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARASHADER_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo, Z_Construct_UPackage__Script_NiagaraShader(), TEXT("NiagaraDataInterfaceGPUParamInfo"), sizeof(FNiagaraDataInterfaceGPUParamInfo), Get_Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Hash());
	}
	return Singleton;
}
template<> NIAGARASHADER_API UScriptStruct* StaticStruct<FNiagaraDataInterfaceGPUParamInfo>()
{
	return FNiagaraDataInterfaceGPUParamInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo(FNiagaraDataInterfaceGPUParamInfo::StaticStruct, TEXT("/Script/NiagaraShader"), TEXT("NiagaraDataInterfaceGPUParamInfo"), false, nullptr, nullptr);
static struct FScriptStruct_NiagaraShader_StaticRegisterNativesFNiagaraDataInterfaceGPUParamInfo
{
	FScriptStruct_NiagaraShader_StaticRegisterNativesFNiagaraDataInterfaceGPUParamInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraDataInterfaceGPUParamInfo")),new UScriptStruct::TCppStructOps<FNiagaraDataInterfaceGPUParamInfo>);
	}
} ScriptStruct_NiagaraShader_StaticRegisterNativesFNiagaraDataInterfaceGPUParamInfo;
	struct Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneratedFunctions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GeneratedFunctions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GeneratedFunctions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DIClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DIClassName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataInterfaceHLSLSymbol_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DataInterfaceHLSLSymbol;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Data coming from that translator that describes parameters needed for each data interface.\n*/" },
		{ "ModuleRelativePath", "Public/NiagaraShared.h" },
		{ "ToolTip", "Data coming from that translator that describes parameters needed for each data interface." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraDataInterfaceGPUParamInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::NewProp_GeneratedFunctions_MetaData[] = {
		{ "Comment", "/** Information about all the functions generated by the translator for this data interface. */" },
		{ "ModuleRelativePath", "Public/NiagaraShared.h" },
		{ "ToolTip", "Information about all the functions generated by the translator for this data interface." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::NewProp_GeneratedFunctions = { "GeneratedFunctions", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraDataInterfaceGPUParamInfo, GeneratedFunctions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::NewProp_GeneratedFunctions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::NewProp_GeneratedFunctions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::NewProp_GeneratedFunctions_Inner = { "GeneratedFunctions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::NewProp_DIClassName_MetaData[] = {
		{ "Comment", "/** Name of the class for this data interface. Used for constructing the correct parameters struct. */" },
		{ "ModuleRelativePath", "Public/NiagaraShared.h" },
		{ "ToolTip", "Name of the class for this data interface. Used for constructing the correct parameters struct." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::NewProp_DIClassName = { "DIClassName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraDataInterfaceGPUParamInfo, DIClassName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::NewProp_DIClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::NewProp_DIClassName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::NewProp_DataInterfaceHLSLSymbol_MetaData[] = {
		{ "Comment", "/** Symbol of this DI in the hlsl. Used for binding parameters. */" },
		{ "ModuleRelativePath", "Public/NiagaraShared.h" },
		{ "ToolTip", "Symbol of this DI in the hlsl. Used for binding parameters." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::NewProp_DataInterfaceHLSLSymbol = { "DataInterfaceHLSLSymbol", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraDataInterfaceGPUParamInfo, DataInterfaceHLSLSymbol), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::NewProp_DataInterfaceHLSLSymbol_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::NewProp_DataInterfaceHLSLSymbol_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::NewProp_GeneratedFunctions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::NewProp_GeneratedFunctions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::NewProp_DIClassName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::NewProp_DataInterfaceHLSLSymbol,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraShader,
		nullptr,
		&NewStructOps,
		"NiagaraDataInterfaceGPUParamInfo",
		sizeof(FNiagaraDataInterfaceGPUParamInfo),
		alignof(FNiagaraDataInterfaceGPUParamInfo),
		Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_NiagaraShader();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraDataInterfaceGPUParamInfo"), sizeof(FNiagaraDataInterfaceGPUParamInfo), Get_Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Hash() { return 1069035743U; }
class UScriptStruct* FNiagaraDataInterfaceGeneratedFunction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARASHADER_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction, Z_Construct_UPackage__Script_NiagaraShader(), TEXT("NiagaraDataInterfaceGeneratedFunction"), sizeof(FNiagaraDataInterfaceGeneratedFunction), Get_Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction_Hash());
	}
	return Singleton;
}
template<> NIAGARASHADER_API UScriptStruct* StaticStruct<FNiagaraDataInterfaceGeneratedFunction>()
{
	return FNiagaraDataInterfaceGeneratedFunction::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction(FNiagaraDataInterfaceGeneratedFunction::StaticStruct, TEXT("/Script/NiagaraShader"), TEXT("NiagaraDataInterfaceGeneratedFunction"), false, nullptr, nullptr);
static struct FScriptStruct_NiagaraShader_StaticRegisterNativesFNiagaraDataInterfaceGeneratedFunction
{
	FScriptStruct_NiagaraShader_StaticRegisterNativesFNiagaraDataInterfaceGeneratedFunction()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraDataInterfaceGeneratedFunction")),new UScriptStruct::TCppStructOps<FNiagaraDataInterfaceGeneratedFunction>);
	}
} ScriptStruct_NiagaraShader_StaticRegisterNativesFNiagaraDataInterfaceGeneratedFunction;
	struct Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Information about a data interface function generated by the translator.\n*/" },
		{ "ModuleRelativePath", "Public/NiagaraShared.h" },
		{ "ToolTip", "Information about a data interface function generated by the translator." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraDataInterfaceGeneratedFunction>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraShader,
		nullptr,
		&NewStructOps,
		"NiagaraDataInterfaceGeneratedFunction",
		sizeof(FNiagaraDataInterfaceGeneratedFunction),
		alignof(FNiagaraDataInterfaceGeneratedFunction),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_NiagaraShader();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraDataInterfaceGeneratedFunction"), sizeof(FNiagaraDataInterfaceGeneratedFunction), Get_Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction_Hash() { return 1702175591U; }
class UScriptStruct* FNiagaraCompileEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARASHADER_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraCompileEvent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraCompileEvent, Z_Construct_UPackage__Script_NiagaraShader(), TEXT("NiagaraCompileEvent"), sizeof(FNiagaraCompileEvent), Get_Z_Construct_UScriptStruct_FNiagaraCompileEvent_Hash());
	}
	return Singleton;
}
template<> NIAGARASHADER_API UScriptStruct* StaticStruct<FNiagaraCompileEvent>()
{
	return FNiagaraCompileEvent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraCompileEvent(FNiagaraCompileEvent::StaticStruct, TEXT("/Script/NiagaraShader"), TEXT("NiagaraCompileEvent"), false, nullptr, nullptr);
static struct FScriptStruct_NiagaraShader_StaticRegisterNativesFNiagaraCompileEvent
{
	FScriptStruct_NiagaraShader_StaticRegisterNativesFNiagaraCompileEvent()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraCompileEvent")),new UScriptStruct::TCppStructOps<FNiagaraCompileEvent>);
	}
} ScriptStruct_NiagaraShader_StaticRegisterNativesFNiagaraCompileEvent;
	struct Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StackGuids_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StackGuids;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StackGuids_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PinGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NodeGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Severity_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Severity;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Severity_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Records necessary information to give UI cues for errors/logs/warnings during compile.*/" },
		{ "ModuleRelativePath", "Public/NiagaraShared.h" },
		{ "ToolTip", "Records necessary information to give UI cues for errors/logs/warnings during compile." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraCompileEvent>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_StackGuids_MetaData[] = {
		{ "Comment", "/** The compile stack frame of node id's*/" },
		{ "ModuleRelativePath", "Public/NiagaraShared.h" },
		{ "ToolTip", "The compile stack frame of node id's" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_StackGuids = { "StackGuids", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraCompileEvent, StackGuids), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_StackGuids_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_StackGuids_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_StackGuids_Inner = { "StackGuids", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_PinGuid_MetaData[] = {
		{ "Comment", "/** The pin persistent id that generated the compile event*/" },
		{ "ModuleRelativePath", "Public/NiagaraShared.h" },
		{ "ToolTip", "The pin persistent id that generated the compile event" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_PinGuid = { "PinGuid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraCompileEvent, PinGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_PinGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_PinGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_NodeGuid_MetaData[] = {
		{ "Comment", "/** The node guid that generated the compile event*/" },
		{ "ModuleRelativePath", "Public/NiagaraShared.h" },
		{ "ToolTip", "The node guid that generated the compile event" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_NodeGuid = { "NodeGuid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraCompileEvent, NodeGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_NodeGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_NodeGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_Message_MetaData[] = {
		{ "Comment", "/* The message itself*/" },
		{ "ModuleRelativePath", "Public/NiagaraShared.h" },
		{ "ToolTip", "The message itself" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraCompileEvent, Message), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_Message_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_Severity_MetaData[] = {
		{ "Comment", "/** Whether or not this is an error, warning, or info*/" },
		{ "ModuleRelativePath", "Public/NiagaraShared.h" },
		{ "ToolTip", "Whether or not this is an error, warning, or info" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_Severity = { "Severity", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraCompileEvent, Severity), Z_Construct_UEnum_NiagaraShader_FNiagaraCompileEventSeverity, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_Severity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_Severity_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_Severity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_StackGuids,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_StackGuids_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_PinGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_NodeGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_Severity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_Severity_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraShader,
		nullptr,
		&NewStructOps,
		"NiagaraCompileEvent",
		sizeof(FNiagaraCompileEvent),
		alignof(FNiagaraCompileEvent),
		Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraCompileEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraCompileEvent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_NiagaraShader();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraCompileEvent"), sizeof(FNiagaraCompileEvent), Get_Z_Construct_UScriptStruct_FNiagaraCompileEvent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraCompileEvent_Hash() { return 340897510U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
