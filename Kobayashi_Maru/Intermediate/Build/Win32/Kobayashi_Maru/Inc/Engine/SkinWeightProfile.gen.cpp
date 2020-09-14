// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/Animation/SkinWeightProfile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkinWeightProfile() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkinWeightProfileInfo();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformInt();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformBool();
// End Cross Module References
class UScriptStruct* FSkinWeightProfileInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkinWeightProfileInfo, Z_Construct_UPackage__Script_Engine(), TEXT("SkinWeightProfileInfo"), sizeof(FSkinWeightProfileInfo), Get_Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSkinWeightProfileInfo>()
{
	return FSkinWeightProfileInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSkinWeightProfileInfo(FSkinWeightProfileInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("SkinWeightProfileInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSkinWeightProfileInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFSkinWeightProfileInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SkinWeightProfileInfo")),new UScriptStruct::TCppStructOps<FSkinWeightProfileInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSkinWeightProfileInfo;
	struct Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerLODSourceFiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PerLODSourceFiles;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PerLODSourceFiles_Key_KeyProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PerLODSourceFiles_ValueProp;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultProfileFromLODIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultProfileFromLODIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultProfile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultProfile;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Structure storing user facing properties, and is used to identify profiles at the SkeletalMesh level*/" },
		{ "ModuleRelativePath", "Public/Animation/SkinWeightProfile.h" },
		{ "ToolTip", "Structure storing user facing properties, and is used to identify profiles at the SkeletalMesh level" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkinWeightProfileInfo>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::NewProp_PerLODSourceFiles_MetaData[] = {
		{ "Category", "SkinWeights" },
		{ "ModuleRelativePath", "Public/Animation/SkinWeightProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::NewProp_PerLODSourceFiles = { "PerLODSourceFiles", nullptr, (EPropertyFlags)0x0010000800020001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkinWeightProfileInfo, PerLODSourceFiles), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::NewProp_PerLODSourceFiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::NewProp_PerLODSourceFiles_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::NewProp_PerLODSourceFiles_Key_KeyProp = { "PerLODSourceFiles_Key", nullptr, (EPropertyFlags)0x0000000800020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::NewProp_PerLODSourceFiles_ValueProp = { "PerLODSourceFiles", nullptr, (EPropertyFlags)0x0000000800020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::NewProp_DefaultProfileFromLODIndex_MetaData[] = {
		{ "Category", "SkinWeights" },
		{ "ClampMin", "0" },
		{ "Comment", "/** When DefaultProfile is set any LOD below this LOD Index will override the Skin Weights of the Skeletal Mesh with the Skin Weights from this Profile */" },
		{ "DisplayName", "Default Profile from LOD Index" },
		{ "EditCondition", "DefaultProfile" },
		{ "ModuleRelativePath", "Public/Animation/SkinWeightProfile.h" },
		{ "ToolTip", "When DefaultProfile is set any LOD below this LOD Index will override the Skin Weights of the Skeletal Mesh with the Skin Weights from this Profile" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::NewProp_DefaultProfileFromLODIndex = { "DefaultProfileFromLODIndex", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkinWeightProfileInfo, DefaultProfileFromLODIndex), Z_Construct_UScriptStruct_FPerPlatformInt, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::NewProp_DefaultProfileFromLODIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::NewProp_DefaultProfileFromLODIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::NewProp_DefaultProfile_MetaData[] = {
		{ "Category", "SkinWeights" },
		{ "Comment", "/** Whether or not this Profile should be considered the Default loaded for specific LODs rather than the original Skin Weights of the Skeletal Mesh */" },
		{ "ModuleRelativePath", "Public/Animation/SkinWeightProfile.h" },
		{ "ToolTip", "Whether or not this Profile should be considered the Default loaded for specific LODs rather than the original Skin Weights of the Skeletal Mesh" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::NewProp_DefaultProfile = { "DefaultProfile", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkinWeightProfileInfo, DefaultProfile), Z_Construct_UScriptStruct_FPerPlatformBool, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::NewProp_DefaultProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::NewProp_DefaultProfile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "SkinWeights" },
		{ "Comment", "/** Name of the Skin Weight Profile*/" },
		{ "ModuleRelativePath", "Public/Animation/SkinWeightProfile.h" },
		{ "ToolTip", "Name of the Skin Weight Profile" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkinWeightProfileInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::NewProp_PerLODSourceFiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::NewProp_PerLODSourceFiles_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::NewProp_PerLODSourceFiles_ValueProp,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::NewProp_DefaultProfileFromLODIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::NewProp_DefaultProfile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SkinWeightProfileInfo",
		sizeof(FSkinWeightProfileInfo),
		alignof(FSkinWeightProfileInfo),
		Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkinWeightProfileInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SkinWeightProfileInfo"), sizeof(FSkinWeightProfileInfo), Get_Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Hash() { return 2762999461U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
