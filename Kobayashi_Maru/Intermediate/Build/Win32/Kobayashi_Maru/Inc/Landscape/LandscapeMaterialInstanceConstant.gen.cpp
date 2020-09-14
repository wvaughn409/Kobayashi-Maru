// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Landscape/Classes/LandscapeMaterialInstanceConstant.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeMaterialInstanceConstant() {}
// Cross Module References
	LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo();
	UPackage* Z_Construct_UPackage__Script_Landscape();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeMaterialInstanceConstant_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeMaterialInstanceConstant();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceConstant();
// End Cross Module References
class UScriptStruct* FLandscapeMaterialTextureStreamingInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LANDSCAPE_API uint32 Get_Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo, Z_Construct_UPackage__Script_Landscape(), TEXT("LandscapeMaterialTextureStreamingInfo"), sizeof(FLandscapeMaterialTextureStreamingInfo), Get_Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo_Hash());
	}
	return Singleton;
}
template<> LANDSCAPE_API UScriptStruct* StaticStruct<FLandscapeMaterialTextureStreamingInfo>()
{
	return FLandscapeMaterialTextureStreamingInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo(FLandscapeMaterialTextureStreamingInfo::StaticStruct, TEXT("/Script/Landscape"), TEXT("LandscapeMaterialTextureStreamingInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Landscape_StaticRegisterNativesFLandscapeMaterialTextureStreamingInfo
{
	FScriptStruct_Landscape_StaticRegisterNativesFLandscapeMaterialTextureStreamingInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LandscapeMaterialTextureStreamingInfo")),new UScriptStruct::TCppStructOps<FLandscapeMaterialTextureStreamingInfo>);
	}
} ScriptStruct_Landscape_StaticRegisterNativesFLandscapeMaterialTextureStreamingInfo;
	struct Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TexelFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TexelFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TextureName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/LandscapeMaterialInstanceConstant.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapeMaterialTextureStreamingInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo_Statics::NewProp_TexelFactor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeMaterialInstanceConstant.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo_Statics::NewProp_TexelFactor = { "TexelFactor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeMaterialTextureStreamingInfo, TexelFactor), METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo_Statics::NewProp_TexelFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo_Statics::NewProp_TexelFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo_Statics::NewProp_TextureName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeMaterialInstanceConstant.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo_Statics::NewProp_TextureName = { "TextureName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeMaterialTextureStreamingInfo, TextureName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo_Statics::NewProp_TextureName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo_Statics::NewProp_TextureName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo_Statics::NewProp_TexelFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo_Statics::NewProp_TextureName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
		nullptr,
		&NewStructOps,
		"LandscapeMaterialTextureStreamingInfo",
		sizeof(FLandscapeMaterialTextureStreamingInfo),
		alignof(FLandscapeMaterialTextureStreamingInfo),
		Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Landscape();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LandscapeMaterialTextureStreamingInfo"), sizeof(FLandscapeMaterialTextureStreamingInfo), Get_Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo_Hash() { return 2069814239U; }
	void ULandscapeMaterialInstanceConstant::StaticRegisterNativesULandscapeMaterialInstanceConstant()
	{
	}
	UClass* Z_Construct_UClass_ULandscapeMaterialInstanceConstant_NoRegister()
	{
		return ULandscapeMaterialInstanceConstant::StaticClass();
	}
	struct Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEditorToolUsage_MetaData[];
#endif
		static void NewProp_bEditorToolUsage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEditorToolUsage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMobile_MetaData[];
#endif
		static void NewProp_bMobile_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMobile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableTessellation_MetaData[];
#endif
		static void NewProp_bDisableTessellation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableTessellation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsLayerThumbnail_MetaData[];
#endif
		static void NewProp_bIsLayerThumbnail_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLayerThumbnail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureStreamingInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TextureStreamingInfo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextureStreamingInfo_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialInstanceConstant,
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Thumbnail" },
		{ "IncludePath", "LandscapeMaterialInstanceConstant.h" },
		{ "ModuleRelativePath", "Classes/LandscapeMaterialInstanceConstant.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bEditorToolUsage_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeMaterialInstanceConstant.h" },
	};
#endif
	void Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bEditorToolUsage_SetBit(void* Obj)
	{
		((ULandscapeMaterialInstanceConstant*)Obj)->bEditorToolUsage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bEditorToolUsage = { "bEditorToolUsage", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULandscapeMaterialInstanceConstant), &Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bEditorToolUsage_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bEditorToolUsage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bEditorToolUsage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bMobile_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeMaterialInstanceConstant.h" },
	};
#endif
	void Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bMobile_SetBit(void* Obj)
	{
		((ULandscapeMaterialInstanceConstant*)Obj)->bMobile = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bMobile = { "bMobile", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULandscapeMaterialInstanceConstant), &Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bMobile_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bMobile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bMobile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bDisableTessellation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeMaterialInstanceConstant.h" },
	};
#endif
	void Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bDisableTessellation_SetBit(void* Obj)
	{
		((ULandscapeMaterialInstanceConstant*)Obj)->bDisableTessellation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bDisableTessellation = { "bDisableTessellation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULandscapeMaterialInstanceConstant), &Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bDisableTessellation_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bDisableTessellation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bDisableTessellation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bIsLayerThumbnail_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeMaterialInstanceConstant.h" },
	};
#endif
	void Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bIsLayerThumbnail_SetBit(void* Obj)
	{
		((ULandscapeMaterialInstanceConstant*)Obj)->bIsLayerThumbnail = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bIsLayerThumbnail = { "bIsLayerThumbnail", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULandscapeMaterialInstanceConstant), &Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bIsLayerThumbnail_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bIsLayerThumbnail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bIsLayerThumbnail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_TextureStreamingInfo_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeMaterialInstanceConstant.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_TextureStreamingInfo = { "TextureStreamingInfo", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeMaterialInstanceConstant, TextureStreamingInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_TextureStreamingInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_TextureStreamingInfo_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_TextureStreamingInfo_Inner = { "TextureStreamingInfo", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bEditorToolUsage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bMobile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bDisableTessellation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bIsLayerThumbnail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_TextureStreamingInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_TextureStreamingInfo_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeMaterialInstanceConstant>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::ClassParams = {
		&ULandscapeMaterialInstanceConstant::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::PropPointers),
		0,
		0x008820A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULandscapeMaterialInstanceConstant()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULandscapeMaterialInstanceConstant, 3459345861);
	template<> LANDSCAPE_API UClass* StaticClass<ULandscapeMaterialInstanceConstant>()
	{
		return ULandscapeMaterialInstanceConstant::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULandscapeMaterialInstanceConstant(Z_Construct_UClass_ULandscapeMaterialInstanceConstant, &ULandscapeMaterialInstanceConstant::StaticClass, TEXT("/Script/Landscape"), TEXT("ULandscapeMaterialInstanceConstant"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeMaterialInstanceConstant);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
