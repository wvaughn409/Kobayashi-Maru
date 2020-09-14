// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/NiagaraEditorDataBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraEditorDataBase() {}
// Cross Module References
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraGraphViewSettings();
	UPackage* Z_Construct_UPackage__Script_Niagara();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraEditorDataBase_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraEditorDataBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FNiagaraGraphViewSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraGraphViewSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraGraphViewSettings, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraGraphViewSettings"), sizeof(FNiagaraGraphViewSettings), Get_Z_Construct_UScriptStruct_FNiagaraGraphViewSettings_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraGraphViewSettings>()
{
	return FNiagaraGraphViewSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraGraphViewSettings(FNiagaraGraphViewSettings::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraGraphViewSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraGraphViewSettings
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraGraphViewSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraGraphViewSettings")),new UScriptStruct::TCppStructOps<FNiagaraGraphViewSettings>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraGraphViewSettings;
	struct Z_Construct_UScriptStruct_FNiagaraGraphViewSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsValid_MetaData[];
#endif
		static void NewProp_bIsValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Zoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Zoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraGraphViewSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraEditorDataBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraGraphViewSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraGraphViewSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraGraphViewSettings_Statics::NewProp_bIsValid_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraEditorDataBase.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraGraphViewSettings_Statics::NewProp_bIsValid_SetBit(void* Obj)
	{
		((FNiagaraGraphViewSettings*)Obj)->bIsValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraGraphViewSettings_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNiagaraGraphViewSettings), &Z_Construct_UScriptStruct_FNiagaraGraphViewSettings_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraGraphViewSettings_Statics::NewProp_bIsValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraGraphViewSettings_Statics::NewProp_bIsValid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraGraphViewSettings_Statics::NewProp_Zoom_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraEditorDataBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraGraphViewSettings_Statics::NewProp_Zoom = { "Zoom", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraGraphViewSettings, Zoom), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraGraphViewSettings_Statics::NewProp_Zoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraGraphViewSettings_Statics::NewProp_Zoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraGraphViewSettings_Statics::NewProp_Location_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraEditorDataBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraGraphViewSettings_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraGraphViewSettings, Location), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraGraphViewSettings_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraGraphViewSettings_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraGraphViewSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraGraphViewSettings_Statics::NewProp_bIsValid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraGraphViewSettings_Statics::NewProp_Zoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraGraphViewSettings_Statics::NewProp_Location,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraGraphViewSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraGraphViewSettings",
		sizeof(FNiagaraGraphViewSettings),
		alignof(FNiagaraGraphViewSettings),
		Z_Construct_UScriptStruct_FNiagaraGraphViewSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraGraphViewSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraGraphViewSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraGraphViewSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraGraphViewSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraGraphViewSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraGraphViewSettings"), sizeof(FNiagaraGraphViewSettings), Get_Z_Construct_UScriptStruct_FNiagaraGraphViewSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraGraphViewSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraGraphViewSettings_Hash() { return 409283741U; }
	void UNiagaraEditorDataBase::StaticRegisterNativesUNiagaraEditorDataBase()
	{
	}
	UClass* Z_Construct_UClass_UNiagaraEditorDataBase_NoRegister()
	{
		return UNiagaraEditorDataBase::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraEditorDataBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraEditorDataBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEditorDataBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A base class for editor only data which supports post loading from the runtime owner object. */" },
		{ "IncludePath", "NiagaraEditorDataBase.h" },
		{ "ModuleRelativePath", "Public/NiagaraEditorDataBase.h" },
		{ "ToolTip", "A base class for editor only data which supports post loading from the runtime owner object." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraEditorDataBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraEditorDataBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraEditorDataBase_Statics::ClassParams = {
		&UNiagaraEditorDataBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraEditorDataBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEditorDataBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraEditorDataBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraEditorDataBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraEditorDataBase, 225048689);
	template<> NIAGARA_API UClass* StaticClass<UNiagaraEditorDataBase>()
	{
		return UNiagaraEditorDataBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraEditorDataBase(Z_Construct_UClass_UNiagaraEditorDataBase, &UNiagaraEditorDataBase::StaticClass, TEXT("/Script/Niagara"), TEXT("UNiagaraEditorDataBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraEditorDataBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
