// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusHMD/Public/OculusHMDTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusHMDTypes() {}
// Cross Module References
	OCULUSHMD_API UScriptStruct* Z_Construct_UScriptStruct_FOculusSplashDesc();
	UPackage* Z_Construct_UPackage__Script_OculusHMD();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
// End Cross Module References
class UScriptStruct* FOculusSplashDesc::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OCULUSHMD_API uint32 Get_Z_Construct_UScriptStruct_FOculusSplashDesc_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusSplashDesc, Z_Construct_UPackage__Script_OculusHMD(), TEXT("OculusSplashDesc"), sizeof(FOculusSplashDesc), Get_Z_Construct_UScriptStruct_FOculusSplashDesc_Hash());
	}
	return Singleton;
}
template<> OCULUSHMD_API UScriptStruct* StaticStruct<FOculusSplashDesc>()
{
	return FOculusSplashDesc::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOculusSplashDesc(FOculusSplashDesc::StaticStruct, TEXT("/Script/OculusHMD"), TEXT("OculusSplashDesc"), false, nullptr, nullptr);
static struct FScriptStruct_OculusHMD_StaticRegisterNativesFOculusSplashDesc
{
	FScriptStruct_OculusHMD_StaticRegisterNativesFOculusSplashDesc()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("OculusSplashDesc")),new UScriptStruct::TCppStructOps<FOculusSplashDesc>);
	}
} ScriptStruct_OculusHMD_StaticRegisterNativesFOculusSplashDesc;
	struct Z_Construct_UScriptStruct_FOculusSplashDesc_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNoAlphaChannel_MetaData[];
#endif
		static void NewProp_bNoAlphaChannel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNoAlphaChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextureScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextureOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeltaRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DeltaRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuadSizeInMeters_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QuadSizeInMeters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransformInMeters_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TransformInMeters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TexturePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TexturePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OculusHMDTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusSplashDesc>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_bNoAlphaChannel_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/OculusHMDTypes.h" },
		{ "ToolTip", "Whether the splash layer uses it's alpha channel." },
	};
#endif
	void Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_bNoAlphaChannel_SetBit(void* Obj)
	{
		((FOculusSplashDesc*)Obj)->bNoAlphaChannel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_bNoAlphaChannel = { "bNoAlphaChannel", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FOculusSplashDesc), &Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_bNoAlphaChannel_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_bNoAlphaChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_bNoAlphaChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_TextureScale_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/OculusHMDTypes.h" },
		{ "ToolTip", "Texture scale." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_TextureScale = { "TextureScale", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOculusSplashDesc, TextureScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_TextureScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_TextureScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_TextureOffset_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/OculusHMDTypes.h" },
		{ "ToolTip", "Texture offset amount from the top left corner." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_TextureOffset = { "TextureOffset", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOculusSplashDesc, TextureOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_TextureOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_TextureOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_DeltaRotation_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/OculusHMDTypes.h" },
		{ "ToolTip", "A delta rotation that will be added each rendering frame (half rate of full vsync)." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_DeltaRotation = { "DeltaRotation", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOculusSplashDesc, DeltaRotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_DeltaRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_DeltaRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_QuadSizeInMeters_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/OculusHMDTypes.h" },
		{ "ToolTip", "Dimensions in meters." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_QuadSizeInMeters = { "QuadSizeInMeters", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOculusSplashDesc, QuadSizeInMeters), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_QuadSizeInMeters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_QuadSizeInMeters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_TransformInMeters_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/OculusHMDTypes.h" },
		{ "ToolTip", "transform of center of quad (meters)." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_TransformInMeters = { "TransformInMeters", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOculusSplashDesc, TransformInMeters), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_TransformInMeters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_TransformInMeters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_TexturePath_MetaData[] = {
		{ "AllowedClasses", "Texture" },
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/OculusHMDTypes.h" },
		{ "ToolTip", "Texture to display" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_TexturePath = { "TexturePath", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOculusSplashDesc, TexturePath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_TexturePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_TexturePath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_bNoAlphaChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_TextureScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_TextureOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_DeltaRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_QuadSizeInMeters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_TransformInMeters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_TexturePath,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OculusHMD,
		nullptr,
		&NewStructOps,
		"OculusSplashDesc",
		sizeof(FOculusSplashDesc),
		alignof(FOculusSplashDesc),
		Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOculusSplashDesc()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOculusSplashDesc_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OculusHMD();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OculusSplashDesc"), sizeof(FOculusSplashDesc), Get_Z_Construct_UScriptStruct_FOculusSplashDesc_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOculusSplashDesc_Hash() { return 2424288535U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
