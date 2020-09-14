// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialInstance.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialInstance() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFontParameterValue();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialParameterInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue();
	ENGINE_API UClass* Z_Construct_UClass_URuntimeVirtualTexture_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTextureParameterValue();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVectorParameterValue();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FScalarParameterValue();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData();
	ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColorAtlas_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialCachedParameters();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStaticParameterSet();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
// End Cross Module References
class UScriptStruct* FFontParameterValue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FFontParameterValue_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFontParameterValue, Z_Construct_UPackage__Script_Engine(), TEXT("FontParameterValue"), sizeof(FFontParameterValue), Get_Z_Construct_UScriptStruct_FFontParameterValue_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FFontParameterValue>()
{
	return FFontParameterValue::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFontParameterValue(FFontParameterValue::StaticStruct, TEXT("/Script/Engine"), TEXT("FontParameterValue"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFFontParameterValue
{
	FScriptStruct_Engine_StaticRegisterNativesFFontParameterValue()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FontParameterValue")),new UScriptStruct::TCppStructOps<FFontParameterValue>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFFontParameterValue;
	struct Z_Construct_UScriptStruct_FFontParameterValue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpressionGUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExpressionGUID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FontPage_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FontPage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FontValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FontValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParameterInfo;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontParameterValue_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Editable font parameter. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
		{ "ToolTip", "Editable font parameter." },
	};
#endif
	void* Z_Construct_UScriptStruct_FFontParameterValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFontParameterValue>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontParameterValue_Statics::NewProp_ExpressionGUID_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFontParameterValue_Statics::NewProp_ExpressionGUID = { "ExpressionGUID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFontParameterValue, ExpressionGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FFontParameterValue_Statics::NewProp_ExpressionGUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFontParameterValue_Statics::NewProp_ExpressionGUID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontParameterValue_Statics::NewProp_FontPage_MetaData[] = {
		{ "Category", "FontParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFontParameterValue_Statics::NewProp_FontPage = { "FontPage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFontParameterValue, FontPage), METADATA_PARAMS(Z_Construct_UScriptStruct_FFontParameterValue_Statics::NewProp_FontPage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFontParameterValue_Statics::NewProp_FontPage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontParameterValue_Statics::NewProp_FontValue_MetaData[] = {
		{ "Category", "FontParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFontParameterValue_Statics::NewProp_FontValue = { "FontValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFontParameterValue, FontValue), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFontParameterValue_Statics::NewProp_FontValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFontParameterValue_Statics::NewProp_FontValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontParameterValue_Statics::NewProp_ParameterInfo_MetaData[] = {
		{ "Category", "FontParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFontParameterValue_Statics::NewProp_ParameterInfo = { "ParameterInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFontParameterValue, ParameterInfo), Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FFontParameterValue_Statics::NewProp_ParameterInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFontParameterValue_Statics::NewProp_ParameterInfo_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontParameterValue_Statics::NewProp_ParameterName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFontParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFontParameterValue, ParameterName_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FFontParameterValue_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFontParameterValue_Statics::NewProp_ParameterName_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFontParameterValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontParameterValue_Statics::NewProp_ExpressionGUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontParameterValue_Statics::NewProp_FontPage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontParameterValue_Statics::NewProp_FontValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontParameterValue_Statics::NewProp_ParameterInfo,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontParameterValue_Statics::NewProp_ParameterName,
#endif // WITH_EDITORONLY_DATA
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFontParameterValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"FontParameterValue",
		sizeof(FFontParameterValue),
		alignof(FFontParameterValue),
		Z_Construct_UScriptStruct_FFontParameterValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFontParameterValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFontParameterValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFontParameterValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFontParameterValue()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFontParameterValue_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FontParameterValue"), sizeof(FFontParameterValue), Get_Z_Construct_UScriptStruct_FFontParameterValue_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFontParameterValue_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFontParameterValue_Hash() { return 1289981299U; }
class UScriptStruct* FRuntimeVirtualTextureParameterValue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue, Z_Construct_UPackage__Script_Engine(), TEXT("RuntimeVirtualTextureParameterValue"), sizeof(FRuntimeVirtualTextureParameterValue), Get_Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRuntimeVirtualTextureParameterValue>()
{
	return FRuntimeVirtualTextureParameterValue::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRuntimeVirtualTextureParameterValue(FRuntimeVirtualTextureParameterValue::StaticStruct, TEXT("/Script/Engine"), TEXT("RuntimeVirtualTextureParameterValue"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFRuntimeVirtualTextureParameterValue
{
	FScriptStruct_Engine_StaticRegisterNativesFRuntimeVirtualTextureParameterValue()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RuntimeVirtualTextureParameterValue")),new UScriptStruct::TCppStructOps<FRuntimeVirtualTextureParameterValue>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFRuntimeVirtualTextureParameterValue;
	struct Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpressionGUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExpressionGUID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParameterValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParameterInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Editable runtime virtual texture parameter. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
		{ "ToolTip", "Editable runtime virtual texture parameter." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeVirtualTextureParameterValue>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Statics::NewProp_ExpressionGUID_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Statics::NewProp_ExpressionGUID = { "ExpressionGUID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimeVirtualTextureParameterValue, ExpressionGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Statics::NewProp_ExpressionGUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Statics::NewProp_ExpressionGUID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Statics::NewProp_ParameterValue_MetaData[] = {
		{ "Category", "RuntimeVirtualTextureParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimeVirtualTextureParameterValue, ParameterValue), Z_Construct_UClass_URuntimeVirtualTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Statics::NewProp_ParameterValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Statics::NewProp_ParameterValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Statics::NewProp_ParameterInfo_MetaData[] = {
		{ "Category", "RuntimeVirtualTextureParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Statics::NewProp_ParameterInfo = { "ParameterInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimeVirtualTextureParameterValue, ParameterInfo), Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Statics::NewProp_ParameterInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Statics::NewProp_ParameterInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Statics::NewProp_ExpressionGUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Statics::NewProp_ParameterValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Statics::NewProp_ParameterInfo,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"RuntimeVirtualTextureParameterValue",
		sizeof(FRuntimeVirtualTextureParameterValue),
		alignof(FRuntimeVirtualTextureParameterValue),
		Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RuntimeVirtualTextureParameterValue"), sizeof(FRuntimeVirtualTextureParameterValue), Get_Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Hash() { return 2546098586U; }
class UScriptStruct* FTextureParameterValue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FTextureParameterValue_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTextureParameterValue, Z_Construct_UPackage__Script_Engine(), TEXT("TextureParameterValue"), sizeof(FTextureParameterValue), Get_Z_Construct_UScriptStruct_FTextureParameterValue_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTextureParameterValue>()
{
	return FTextureParameterValue::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTextureParameterValue(FTextureParameterValue::StaticStruct, TEXT("/Script/Engine"), TEXT("TextureParameterValue"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFTextureParameterValue
{
	FScriptStruct_Engine_StaticRegisterNativesFTextureParameterValue()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TextureParameterValue")),new UScriptStruct::TCppStructOps<FTextureParameterValue>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFTextureParameterValue;
	struct Z_Construct_UScriptStruct_FTextureParameterValue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpressionGUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExpressionGUID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParameterValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParameterInfo;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureParameterValue_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Editable texture parameter. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
		{ "ToolTip", "Editable texture parameter." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTextureParameterValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTextureParameterValue>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureParameterValue_Statics::NewProp_ExpressionGUID_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTextureParameterValue_Statics::NewProp_ExpressionGUID = { "ExpressionGUID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextureParameterValue, ExpressionGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureParameterValue_Statics::NewProp_ExpressionGUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureParameterValue_Statics::NewProp_ExpressionGUID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureParameterValue_Statics::NewProp_ParameterValue_MetaData[] = {
		{ "Category", "TextureParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTextureParameterValue_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextureParameterValue, ParameterValue), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureParameterValue_Statics::NewProp_ParameterValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureParameterValue_Statics::NewProp_ParameterValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureParameterValue_Statics::NewProp_ParameterInfo_MetaData[] = {
		{ "Category", "TextureParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTextureParameterValue_Statics::NewProp_ParameterInfo = { "ParameterInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextureParameterValue, ParameterInfo), Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureParameterValue_Statics::NewProp_ParameterInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureParameterValue_Statics::NewProp_ParameterInfo_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureParameterValue_Statics::NewProp_ParameterName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTextureParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextureParameterValue, ParameterName_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureParameterValue_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureParameterValue_Statics::NewProp_ParameterName_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTextureParameterValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureParameterValue_Statics::NewProp_ExpressionGUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureParameterValue_Statics::NewProp_ParameterValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureParameterValue_Statics::NewProp_ParameterInfo,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureParameterValue_Statics::NewProp_ParameterName,
#endif // WITH_EDITORONLY_DATA
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTextureParameterValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"TextureParameterValue",
		sizeof(FTextureParameterValue),
		alignof(FTextureParameterValue),
		Z_Construct_UScriptStruct_FTextureParameterValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureParameterValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureParameterValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureParameterValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTextureParameterValue()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTextureParameterValue_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TextureParameterValue"), sizeof(FTextureParameterValue), Get_Z_Construct_UScriptStruct_FTextureParameterValue_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTextureParameterValue_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTextureParameterValue_Hash() { return 1799018823U; }
class UScriptStruct* FVectorParameterValue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FVectorParameterValue_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVectorParameterValue, Z_Construct_UPackage__Script_Engine(), TEXT("VectorParameterValue"), sizeof(FVectorParameterValue), Get_Z_Construct_UScriptStruct_FVectorParameterValue_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FVectorParameterValue>()
{
	return FVectorParameterValue::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVectorParameterValue(FVectorParameterValue::StaticStruct, TEXT("/Script/Engine"), TEXT("VectorParameterValue"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFVectorParameterValue
{
	FScriptStruct_Engine_StaticRegisterNativesFVectorParameterValue()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VectorParameterValue")),new UScriptStruct::TCppStructOps<FVectorParameterValue>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFVectorParameterValue;
	struct Z_Construct_UScriptStruct_FVectorParameterValue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpressionGUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExpressionGUID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParameterValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParameterInfo;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVectorParameterValue_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Editable vector parameter. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
		{ "ToolTip", "Editable vector parameter." },
	};
#endif
	void* Z_Construct_UScriptStruct_FVectorParameterValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVectorParameterValue>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVectorParameterValue_Statics::NewProp_ExpressionGUID_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVectorParameterValue_Statics::NewProp_ExpressionGUID = { "ExpressionGUID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVectorParameterValue, ExpressionGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FVectorParameterValue_Statics::NewProp_ExpressionGUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorParameterValue_Statics::NewProp_ExpressionGUID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVectorParameterValue_Statics::NewProp_ParameterValue_MetaData[] = {
		{ "Category", "VectorParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVectorParameterValue_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVectorParameterValue, ParameterValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FVectorParameterValue_Statics::NewProp_ParameterValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorParameterValue_Statics::NewProp_ParameterValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVectorParameterValue_Statics::NewProp_ParameterInfo_MetaData[] = {
		{ "Category", "VectorParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVectorParameterValue_Statics::NewProp_ParameterInfo = { "ParameterInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVectorParameterValue, ParameterInfo), Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FVectorParameterValue_Statics::NewProp_ParameterInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorParameterValue_Statics::NewProp_ParameterInfo_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVectorParameterValue_Statics::NewProp_ParameterName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVectorParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVectorParameterValue, ParameterName_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FVectorParameterValue_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorParameterValue_Statics::NewProp_ParameterName_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVectorParameterValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVectorParameterValue_Statics::NewProp_ExpressionGUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVectorParameterValue_Statics::NewProp_ParameterValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVectorParameterValue_Statics::NewProp_ParameterInfo,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVectorParameterValue_Statics::NewProp_ParameterName,
#endif // WITH_EDITORONLY_DATA
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVectorParameterValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"VectorParameterValue",
		sizeof(FVectorParameterValue),
		alignof(FVectorParameterValue),
		Z_Construct_UScriptStruct_FVectorParameterValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorParameterValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVectorParameterValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorParameterValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVectorParameterValue()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVectorParameterValue_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VectorParameterValue"), sizeof(FVectorParameterValue), Get_Z_Construct_UScriptStruct_FVectorParameterValue_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVectorParameterValue_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVectorParameterValue_Hash() { return 1317405163U; }
class UScriptStruct* FScalarParameterValue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FScalarParameterValue_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FScalarParameterValue, Z_Construct_UPackage__Script_Engine(), TEXT("ScalarParameterValue"), sizeof(FScalarParameterValue), Get_Z_Construct_UScriptStruct_FScalarParameterValue_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FScalarParameterValue>()
{
	return FScalarParameterValue::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FScalarParameterValue(FScalarParameterValue::StaticStruct, TEXT("/Script/Engine"), TEXT("ScalarParameterValue"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFScalarParameterValue
{
	FScriptStruct_Engine_StaticRegisterNativesFScalarParameterValue()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ScalarParameterValue")),new UScriptStruct::TCppStructOps<FScalarParameterValue>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFScalarParameterValue;
	struct Z_Construct_UScriptStruct_FScalarParameterValue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpressionGUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExpressionGUID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ParameterValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParameterInfo;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtlasData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AtlasData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScalarParameterValue_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FScalarParameterValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScalarParameterValue>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScalarParameterValue_Statics::NewProp_ExpressionGUID_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScalarParameterValue_Statics::NewProp_ExpressionGUID = { "ExpressionGUID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScalarParameterValue, ExpressionGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FScalarParameterValue_Statics::NewProp_ExpressionGUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScalarParameterValue_Statics::NewProp_ExpressionGUID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScalarParameterValue_Statics::NewProp_ParameterValue_MetaData[] = {
		{ "Category", "ScalarParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FScalarParameterValue_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScalarParameterValue, ParameterValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FScalarParameterValue_Statics::NewProp_ParameterValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScalarParameterValue_Statics::NewProp_ParameterValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScalarParameterValue_Statics::NewProp_ParameterInfo_MetaData[] = {
		{ "Category", "ScalarParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScalarParameterValue_Statics::NewProp_ParameterInfo = { "ParameterInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScalarParameterValue, ParameterInfo), Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FScalarParameterValue_Statics::NewProp_ParameterInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScalarParameterValue_Statics::NewProp_ParameterInfo_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScalarParameterValue_Statics::NewProp_AtlasData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScalarParameterValue_Statics::NewProp_AtlasData = { "AtlasData", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScalarParameterValue, AtlasData), Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData, METADATA_PARAMS(Z_Construct_UScriptStruct_FScalarParameterValue_Statics::NewProp_AtlasData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScalarParameterValue_Statics::NewProp_AtlasData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScalarParameterValue_Statics::NewProp_ParameterName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FScalarParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScalarParameterValue, ParameterName_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FScalarParameterValue_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScalarParameterValue_Statics::NewProp_ParameterName_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScalarParameterValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScalarParameterValue_Statics::NewProp_ExpressionGUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScalarParameterValue_Statics::NewProp_ParameterValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScalarParameterValue_Statics::NewProp_ParameterInfo,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScalarParameterValue_Statics::NewProp_AtlasData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScalarParameterValue_Statics::NewProp_ParameterName,
#endif // WITH_EDITORONLY_DATA
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScalarParameterValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ScalarParameterValue",
		sizeof(FScalarParameterValue),
		alignof(FScalarParameterValue),
		Z_Construct_UScriptStruct_FScalarParameterValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScalarParameterValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FScalarParameterValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScalarParameterValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FScalarParameterValue()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FScalarParameterValue_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ScalarParameterValue"), sizeof(FScalarParameterValue), Get_Z_Construct_UScriptStruct_FScalarParameterValue_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FScalarParameterValue_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FScalarParameterValue_Hash() { return 3011441126U; }
class UScriptStruct* FScalarParameterAtlasInstanceData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData, Z_Construct_UPackage__Script_Engine(), TEXT("ScalarParameterAtlasInstanceData"), sizeof(FScalarParameterAtlasInstanceData), Get_Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FScalarParameterAtlasInstanceData>()
{
	return FScalarParameterAtlasInstanceData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FScalarParameterAtlasInstanceData(FScalarParameterAtlasInstanceData::StaticStruct, TEXT("/Script/Engine"), TEXT("ScalarParameterAtlasInstanceData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFScalarParameterAtlasInstanceData
{
	FScriptStruct_Engine_StaticRegisterNativesFScalarParameterAtlasInstanceData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ScalarParameterAtlasInstanceData")),new UScriptStruct::TCppStructOps<FScalarParameterAtlasInstanceData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFScalarParameterAtlasInstanceData;
	struct Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Atlas_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Atlas;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Curve_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Curve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsUsedAsAtlasPosition_MetaData[];
#endif
		static void NewProp_bIsUsedAsAtlasPosition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsUsedAsAtlasPosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Editable scalar parameter. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
		{ "ToolTip", "Editable scalar parameter." },
	};
#endif
	void* Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScalarParameterAtlasInstanceData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics::NewProp_Atlas_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics::NewProp_Atlas = { "Atlas", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScalarParameterAtlasInstanceData, Atlas), Z_Construct_UClass_UCurveLinearColorAtlas_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics::NewProp_Atlas_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics::NewProp_Atlas_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics::NewProp_Curve_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScalarParameterAtlasInstanceData, Curve), Z_Construct_UClass_UCurveLinearColor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics::NewProp_Curve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics::NewProp_Curve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics::NewProp_bIsUsedAsAtlasPosition_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics::NewProp_bIsUsedAsAtlasPosition_SetBit(void* Obj)
	{
		((FScalarParameterAtlasInstanceData*)Obj)->bIsUsedAsAtlasPosition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics::NewProp_bIsUsedAsAtlasPosition = { "bIsUsedAsAtlasPosition", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FScalarParameterAtlasInstanceData), &Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics::NewProp_bIsUsedAsAtlasPosition_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics::NewProp_bIsUsedAsAtlasPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics::NewProp_bIsUsedAsAtlasPosition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics::NewProp_Atlas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics::NewProp_Curve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics::NewProp_bIsUsedAsAtlasPosition,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ScalarParameterAtlasInstanceData",
		sizeof(FScalarParameterAtlasInstanceData),
		alignof(FScalarParameterAtlasInstanceData),
		Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ScalarParameterAtlasInstanceData"), sizeof(FScalarParameterAtlasInstanceData), Get_Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Hash() { return 2966167477U; }
	void UMaterialInstance::StaticRegisterNativesUMaterialInstance()
	{
	}
	UClass* Z_Construct_UClass_UMaterialInstance_NoRegister()
	{
		return UMaterialInstance::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedReferencedTextures_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CachedReferencedTextures;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CachedReferencedTextures_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedLayerParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedLayerParameters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StaticParameters;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReferencedTextureGuids_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReferencedTextureGuids;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReferencedTextureGuids_Inner;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BasePropertyOverrides_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BasePropertyOverrides;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideBaseProperties_MetaData[];
#endif
		static void NewProp_bOverrideBaseProperties_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideBaseProperties;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FontParameterValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FontParameterValues;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FontParameterValues_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RuntimeVirtualTextureParameterValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RuntimeVirtualTextureParameterValues;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RuntimeVirtualTextureParameterValues_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureParameterValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TextureParameterValues;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextureParameterValues_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VectorParameterValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VectorParameterValues;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VectorParameterValues_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScalarParameterValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ScalarParameterValues;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScalarParameterValues_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideSubsurfaceProfile_MetaData[];
#endif
		static void NewProp_bOverrideSubsurfaceProfile_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideSubsurfaceProfile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasStaticPermutationResource_MetaData[];
#endif
		static void NewProp_bHasStaticPermutationResource_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasStaticPermutationResource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Parent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicalMaterialMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhysicalMaterialMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhysMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Thumbnail" },
		{ "IncludePath", "Materials/MaterialInstance.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialInstance_Statics::NewProp_CachedReferencedTextures_MetaData[] = {
		{ "Comment", "/**\n\x09 * Cached texture references from all expressions in the material (including nested functions).\n\x09 * This is used to link uniform texture expressions which were stored in the DDC with the UTextures that they reference.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
		{ "ToolTip", "Cached texture references from all expressions in the material (including nested functions).\nThis is used to link uniform texture expressions which were stored in the DDC with the UTextures that they reference." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_CachedReferencedTextures = { "CachedReferencedTextures", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialInstance, CachedReferencedTextures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialInstance_Statics::NewProp_CachedReferencedTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInstance_Statics::NewProp_CachedReferencedTextures_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_CachedReferencedTextures_Inner = { "CachedReferencedTextures", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialInstance_Statics::NewProp_CachedLayerParameters_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_CachedLayerParameters = { "CachedLayerParameters", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialInstance, CachedLayerParameters), Z_Construct_UScriptStruct_FMaterialCachedParameters, METADATA_PARAMS(Z_Construct_UClass_UMaterialInstance_Statics::NewProp_CachedLayerParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInstance_Statics::NewProp_CachedLayerParameters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialInstance_Statics::NewProp_StaticParameters_MetaData[] = {
		{ "Comment", "/** Static parameter values that are overridden in this instance. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
		{ "ToolTip", "Static parameter values that are overridden in this instance." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_StaticParameters = { "StaticParameters", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialInstance, StaticParameters), Z_Construct_UScriptStruct_FStaticParameterSet, METADATA_PARAMS(Z_Construct_UClass_UMaterialInstance_Statics::NewProp_StaticParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInstance_Statics::NewProp_StaticParameters_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialInstance_Statics::NewProp_ReferencedTextureGuids_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_ReferencedTextureGuids = { "ReferencedTextureGuids", nullptr, (EPropertyFlags)0x0040000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialInstance, ReferencedTextureGuids), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialInstance_Statics::NewProp_ReferencedTextureGuids_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInstance_Statics::NewProp_ReferencedTextureGuids_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_ReferencedTextureGuids_Inner = { "ReferencedTextureGuids", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialInstance_Statics::NewProp_BasePropertyOverrides_MetaData[] = {
		{ "Category", "MaterialInstance" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_BasePropertyOverrides = { "BasePropertyOverrides", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialInstance, BasePropertyOverrides), Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides, METADATA_PARAMS(Z_Construct_UClass_UMaterialInstance_Statics::NewProp_BasePropertyOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInstance_Statics::NewProp_BasePropertyOverrides_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialInstance_Statics::NewProp_bOverrideBaseProperties_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMaterialInstance_Statics::NewProp_bOverrideBaseProperties_SetBit(void* Obj)
	{
		((UMaterialInstance*)Obj)->bOverrideBaseProperties_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_bOverrideBaseProperties = { "bOverrideBaseProperties", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMaterialInstance), &Z_Construct_UClass_UMaterialInstance_Statics::NewProp_bOverrideBaseProperties_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialInstance_Statics::NewProp_bOverrideBaseProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInstance_Statics::NewProp_bOverrideBaseProperties_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialInstance_Statics::NewProp_FontParameterValues_MetaData[] = {
		{ "Category", "MaterialInstance" },
		{ "Comment", "/** Font parameters. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
		{ "ToolTip", "Font parameters." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_FontParameterValues = { "FontParameterValues", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialInstance, FontParameterValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialInstance_Statics::NewProp_FontParameterValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInstance_Statics::NewProp_FontParameterValues_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_FontParameterValues_Inner = { "FontParameterValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFontParameterValue, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialInstance_Statics::NewProp_RuntimeVirtualTextureParameterValues_MetaData[] = {
		{ "Category", "MaterialInstance" },
		{ "Comment", "/** RuntimeVirtualTexture parameters. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
		{ "ToolTip", "RuntimeVirtualTexture parameters." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_RuntimeVirtualTextureParameterValues = { "RuntimeVirtualTextureParameterValues", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialInstance, RuntimeVirtualTextureParameterValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialInstance_Statics::NewProp_RuntimeVirtualTextureParameterValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInstance_Statics::NewProp_RuntimeVirtualTextureParameterValues_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_RuntimeVirtualTextureParameterValues_Inner = { "RuntimeVirtualTextureParameterValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialInstance_Statics::NewProp_TextureParameterValues_MetaData[] = {
		{ "Category", "MaterialInstance" },
		{ "Comment", "/** Texture parameters. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
		{ "ToolTip", "Texture parameters." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_TextureParameterValues = { "TextureParameterValues", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialInstance, TextureParameterValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialInstance_Statics::NewProp_TextureParameterValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInstance_Statics::NewProp_TextureParameterValues_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_TextureParameterValues_Inner = { "TextureParameterValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTextureParameterValue, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialInstance_Statics::NewProp_VectorParameterValues_MetaData[] = {
		{ "Category", "MaterialInstance" },
		{ "Comment", "/** Vector parameters. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
		{ "ToolTip", "Vector parameters." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_VectorParameterValues = { "VectorParameterValues", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialInstance, VectorParameterValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialInstance_Statics::NewProp_VectorParameterValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInstance_Statics::NewProp_VectorParameterValues_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_VectorParameterValues_Inner = { "VectorParameterValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVectorParameterValue, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialInstance_Statics::NewProp_ScalarParameterValues_MetaData[] = {
		{ "Category", "MaterialInstance" },
		{ "Comment", "/** Scalar parameters. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
		{ "ToolTip", "Scalar parameters." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_ScalarParameterValues = { "ScalarParameterValues", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialInstance, ScalarParameterValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialInstance_Statics::NewProp_ScalarParameterValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInstance_Statics::NewProp_ScalarParameterValues_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_ScalarParameterValues_Inner = { "ScalarParameterValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FScalarParameterValue, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialInstance_Statics::NewProp_bOverrideSubsurfaceProfile_MetaData[] = {
		{ "Category", "MaterialInstance" },
		{ "Comment", "/** Defines if SubsurfaceProfile from this instance is used or it uses the parent one. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
		{ "ToolTip", "Defines if SubsurfaceProfile from this instance is used or it uses the parent one." },
	};
#endif
	void Z_Construct_UClass_UMaterialInstance_Statics::NewProp_bOverrideSubsurfaceProfile_SetBit(void* Obj)
	{
		((UMaterialInstance*)Obj)->bOverrideSubsurfaceProfile = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_bOverrideSubsurfaceProfile = { "bOverrideSubsurfaceProfile", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterialInstance), &Z_Construct_UClass_UMaterialInstance_Statics::NewProp_bOverrideSubsurfaceProfile_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialInstance_Statics::NewProp_bOverrideSubsurfaceProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInstance_Statics::NewProp_bOverrideSubsurfaceProfile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialInstance_Statics::NewProp_bHasStaticPermutationResource_MetaData[] = {
		{ "Comment", "/**\n\x09 * Indicates whether the instance has static permutation resources (which are required when static parameters are present) \n\x09 * Read directly from the rendering thread, can only be modified with the use of a FMaterialUpdateContext.\n\x09 * When true, StaticPermutationMaterialResources will always be valid and non-null.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
		{ "ToolTip", "Indicates whether the instance has static permutation resources (which are required when static parameters are present)\nRead directly from the rendering thread, can only be modified with the use of a FMaterialUpdateContext.\nWhen true, StaticPermutationMaterialResources will always be valid and non-null." },
	};
#endif
	void Z_Construct_UClass_UMaterialInstance_Statics::NewProp_bHasStaticPermutationResource_SetBit(void* Obj)
	{
		((UMaterialInstance*)Obj)->bHasStaticPermutationResource = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_bHasStaticPermutationResource = { "bHasStaticPermutationResource", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterialInstance), &Z_Construct_UClass_UMaterialInstance_Statics::NewProp_bHasStaticPermutationResource_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialInstance_Statics::NewProp_bHasStaticPermutationResource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInstance_Statics::NewProp_bHasStaticPermutationResource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialInstance_Statics::NewProp_Parent_MetaData[] = {
		{ "Category", "MaterialInstance" },
		{ "Comment", "/** Parent material. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
		{ "ToolTip", "Parent material." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010010000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialInstance, Parent), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialInstance_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInstance_Statics::NewProp_Parent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialInstance_Statics::NewProp_PhysicalMaterialMap_MetaData[] = {
		{ "ArraySizeEnum", "/Script/Engine.EPhysicalMaterialMaskColor" },
		{ "Category", "PhysicalMaterialMask" },
		{ "Comment", "/** Physical material map used with physical material mask, when it exists.*/" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
		{ "ToolTip", "Physical material map used with physical material mask, when it exists." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_PhysicalMaterialMap = { "PhysicalMaterialMap", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(PhysicalMaterialMap, UMaterialInstance), STRUCT_OFFSET(UMaterialInstance, PhysicalMaterialMap), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialInstance_Statics::NewProp_PhysicalMaterialMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInstance_Statics::NewProp_PhysicalMaterialMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialInstance_Statics::NewProp_PhysMaterial_MetaData[] = {
		{ "Category", "MaterialInstance" },
		{ "Comment", "/** Physical material to use for this graphics material. Used for sounds, effects etc.*/" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
		{ "ToolTip", "Physical material to use for this graphics material. Used for sounds, effects etc." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_PhysMaterial = { "PhysMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialInstance, PhysMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialInstance_Statics::NewProp_PhysMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInstance_Statics::NewProp_PhysMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_CachedReferencedTextures,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_CachedReferencedTextures_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_CachedLayerParameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_StaticParameters,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_ReferencedTextureGuids,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_ReferencedTextureGuids_Inner,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_BasePropertyOverrides,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_bOverrideBaseProperties,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_FontParameterValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_FontParameterValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_RuntimeVirtualTextureParameterValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_RuntimeVirtualTextureParameterValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_TextureParameterValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_TextureParameterValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_VectorParameterValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_VectorParameterValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_ScalarParameterValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_ScalarParameterValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_bOverrideSubsurfaceProfile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_bHasStaticPermutationResource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_Parent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_PhysicalMaterialMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_PhysMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialInstance_Statics::ClassParams = {
		&UMaterialInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInstance_Statics::PropPointers),
		0,
		0x008800A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialInstance, 2677202546);
	template<> ENGINE_API UClass* StaticClass<UMaterialInstance>()
	{
		return UMaterialInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialInstance(Z_Construct_UClass_UMaterialInstance, &UMaterialInstance::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialInstance);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMaterialInstance)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
