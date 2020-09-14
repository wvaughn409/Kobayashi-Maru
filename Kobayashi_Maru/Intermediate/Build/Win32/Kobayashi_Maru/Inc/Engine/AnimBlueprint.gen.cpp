// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/AnimBlueprint.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimBlueprint() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPreviewAnimationBlueprintApplicationMethod();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimGroupInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UAnimBlueprint_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimBlueprint();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPoseWatch_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_PreviewMeshProvider_NoRegister();
// End Cross Module References
	static UEnum* EPreviewAnimationBlueprintApplicationMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EPreviewAnimationBlueprintApplicationMethod, Z_Construct_UPackage__Script_Engine(), TEXT("EPreviewAnimationBlueprintApplicationMethod"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EPreviewAnimationBlueprintApplicationMethod>()
	{
		return EPreviewAnimationBlueprintApplicationMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPreviewAnimationBlueprintApplicationMethod(EPreviewAnimationBlueprintApplicationMethod_StaticEnum, TEXT("/Script/Engine"), TEXT("EPreviewAnimationBlueprintApplicationMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EPreviewAnimationBlueprintApplicationMethod_Hash() { return 112385493U; }
	UEnum* Z_Construct_UEnum_Engine_EPreviewAnimationBlueprintApplicationMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPreviewAnimationBlueprintApplicationMethod"), 0, Get_Z_Construct_UEnum_Engine_EPreviewAnimationBlueprintApplicationMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPreviewAnimationBlueprintApplicationMethod::LinkedLayers", (int64)EPreviewAnimationBlueprintApplicationMethod::LinkedLayers },
				{ "EPreviewAnimationBlueprintApplicationMethod::LinkedAnimGraph", (int64)EPreviewAnimationBlueprintApplicationMethod::LinkedAnimGraph },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** The method by which a preview animation blueprint is applied */" },
				{ "LinkedAnimGraph.Comment", "/** Apply the preview animation blueprint using SetLinkedAnimGraphByTag */" },
				{ "LinkedAnimGraph.Name", "EPreviewAnimationBlueprintApplicationMethod::LinkedAnimGraph" },
				{ "LinkedAnimGraph.ToolTip", "Apply the preview animation blueprint using SetLinkedAnimGraphByTag" },
				{ "LinkedLayers.Comment", "/** Apply the preview animation blueprint using LinkAnimClassLayers */" },
				{ "LinkedLayers.Name", "EPreviewAnimationBlueprintApplicationMethod::LinkedLayers" },
				{ "LinkedLayers.ToolTip", "Apply the preview animation blueprint using LinkAnimClassLayers" },
				{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
				{ "ToolTip", "The method by which a preview animation blueprint is applied" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EPreviewAnimationBlueprintApplicationMethod",
				"EPreviewAnimationBlueprintApplicationMethod",
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
class UScriptStruct* FAnimParentNodeAssetOverride::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride, Z_Construct_UPackage__Script_Engine(), TEXT("AnimParentNodeAssetOverride"), sizeof(FAnimParentNodeAssetOverride), Get_Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimParentNodeAssetOverride>()
{
	return FAnimParentNodeAssetOverride::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimParentNodeAssetOverride(FAnimParentNodeAssetOverride::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimParentNodeAssetOverride"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimParentNodeAssetOverride
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimParentNodeAssetOverride()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimParentNodeAssetOverride")),new UScriptStruct::TCppStructOps<FAnimParentNodeAssetOverride>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimParentNodeAssetOverride;
	struct Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentNodeGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParentNodeGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimParentNodeAssetOverride>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride_Statics::NewProp_ParentNodeGuid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride_Statics::NewProp_ParentNodeGuid = { "ParentNodeGuid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimParentNodeAssetOverride, ParentNodeGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride_Statics::NewProp_ParentNodeGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride_Statics::NewProp_ParentNodeGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride_Statics::NewProp_NewAsset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride_Statics::NewProp_NewAsset = { "NewAsset", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimParentNodeAssetOverride, NewAsset), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride_Statics::NewProp_NewAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride_Statics::NewProp_NewAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride_Statics::NewProp_ParentNodeGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride_Statics::NewProp_NewAsset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimParentNodeAssetOverride",
		sizeof(FAnimParentNodeAssetOverride),
		alignof(FAnimParentNodeAssetOverride),
		Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimParentNodeAssetOverride"), sizeof(FAnimParentNodeAssetOverride), Get_Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride_Hash() { return 893425039U; }
class UScriptStruct* FAnimGroupInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimGroupInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimGroupInfo, Z_Construct_UPackage__Script_Engine(), TEXT("AnimGroupInfo"), sizeof(FAnimGroupInfo), Get_Z_Construct_UScriptStruct_FAnimGroupInfo_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimGroupInfo>()
{
	return FAnimGroupInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimGroupInfo(FAnimGroupInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimGroupInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimGroupInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimGroupInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimGroupInfo")),new UScriptStruct::TCppStructOps<FAnimGroupInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimGroupInfo;
	struct Z_Construct_UScriptStruct_FAnimGroupInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimGroupInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimGroupInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimGroupInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimGroupInfo_Statics::NewProp_Color_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimGroupInfo_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimGroupInfo, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimGroupInfo_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGroupInfo_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimGroupInfo_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimGroupInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimGroupInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimGroupInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGroupInfo_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimGroupInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimGroupInfo_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimGroupInfo_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimGroupInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimGroupInfo",
		sizeof(FAnimGroupInfo),
		alignof(FAnimGroupInfo),
		Z_Construct_UScriptStruct_FAnimGroupInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGroupInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimGroupInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGroupInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimGroupInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimGroupInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimGroupInfo"), sizeof(FAnimGroupInfo), Get_Z_Construct_UScriptStruct_FAnimGroupInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimGroupInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimGroupInfo_Hash() { return 164796639U; }
	void UAnimBlueprint::StaticRegisterNativesUAnimBlueprint()
	{
	}
	UClass* Z_Construct_UClass_UAnimBlueprint_NoRegister()
	{
		return UAnimBlueprint::StaticClass();
	}
	struct Z_Construct_UClass_UAnimBlueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewAnimationBlueprintTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PreviewAnimationBlueprintTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewAnimationBlueprintApplicationMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PreviewAnimationBlueprintApplicationMethod;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PreviewAnimationBlueprintApplicationMethod_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewAnimationBlueprint_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_PreviewAnimationBlueprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewSkeletalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_PreviewSkeletalMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PoseWatches_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PoseWatches;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PoseWatches_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentAssetOverrides_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ParentAssetOverrides;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParentAssetOverrides_Inner;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWarnAboutBlueprintUsage_MetaData[];
#endif
		static void NewProp_bWarnAboutBlueprintUsage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWarnAboutBlueprintUsage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseMultiThreadedAnimationUpdate_MetaData[];
#endif
		static void NewProp_bUseMultiThreadedAnimationUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseMultiThreadedAnimationUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Groups_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Groups;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Groups_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetSkeleton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetSkeleton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimBlueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprint,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBlueprint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * An Anim Blueprint is essentially a specialized Blueprint whose graphs control the animation of a Skeletal Mesh.\n * It can perform blending of animations, directly control the bones of the skeleton, and output a final pose\n * for a Skeletal Mesh each frame.\n */" },
		{ "IncludePath", "Animation/AnimBlueprint.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
		{ "ToolTip", "An Anim Blueprint is essentially a specialized Blueprint whose graphs control the animation of a Skeletal Mesh.\nIt can perform blending of animations, directly control the bones of the skeleton, and output a final pose\nfor a Skeletal Mesh each frame." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PreviewAnimationBlueprintTag_MetaData[] = {
		{ "Comment", "/** The tag to use when applying a preview animation blueprint via LinkAnimGraphByTag */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
		{ "ToolTip", "The tag to use when applying a preview animation blueprint via LinkAnimGraphByTag" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PreviewAnimationBlueprintTag = { "PreviewAnimationBlueprintTag", nullptr, (EPropertyFlags)0x0040000800000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimBlueprint, PreviewAnimationBlueprintTag), METADATA_PARAMS(Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PreviewAnimationBlueprintTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PreviewAnimationBlueprintTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PreviewAnimationBlueprintApplicationMethod_MetaData[] = {
		{ "Comment", "/** The method by which a preview animation blueprint is applied, either as an overlay layer, or as a linked instance */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
		{ "ToolTip", "The method by which a preview animation blueprint is applied, either as an overlay layer, or as a linked instance" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PreviewAnimationBlueprintApplicationMethod = { "PreviewAnimationBlueprintApplicationMethod", nullptr, (EPropertyFlags)0x0040000800000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimBlueprint, PreviewAnimationBlueprintApplicationMethod), Z_Construct_UEnum_Engine_EPreviewAnimationBlueprintApplicationMethod, METADATA_PARAMS(Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PreviewAnimationBlueprintApplicationMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PreviewAnimationBlueprintApplicationMethod_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PreviewAnimationBlueprintApplicationMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PreviewAnimationBlueprint_MetaData[] = {
		{ "Comment", "/** \n\x09 * An animation Blueprint to overlay with this Blueprint. When working on layers, this allows this Blueprint to be previewed in the context of another 'outer' anim blueprint. \n\x09 * Setting this is the equivalent of running the preview animation blueprint on the preview mesh, then calling SetLayerOverlay with this anim blueprint.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
		{ "ToolTip", "An animation Blueprint to overlay with this Blueprint. When working on layers, this allows this Blueprint to be previewed in the context of another 'outer' anim blueprint.\nSetting this is the equivalent of running the preview animation blueprint on the preview mesh, then calling SetLayerOverlay with this anim blueprint." },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PreviewAnimationBlueprint = { "PreviewAnimationBlueprint", nullptr, (EPropertyFlags)0x0044010800200000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimBlueprint, PreviewAnimationBlueprint), Z_Construct_UClass_UAnimBlueprint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PreviewAnimationBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PreviewAnimationBlueprint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PreviewSkeletalMesh_MetaData[] = {
		{ "Comment", "/** The default skeletal mesh to use when previewing this asset - this only applies when you open Persona using this asset*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
		{ "ToolTip", "The default skeletal mesh to use when previewing this asset - this only applies when you open Persona using this asset" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PreviewSkeletalMesh = { "PreviewSkeletalMesh", nullptr, (EPropertyFlags)0x0044010800200000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimBlueprint, PreviewSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PreviewSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PreviewSkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PoseWatches_MetaData[] = {
		{ "Comment", "// Array of active pose watches (pose watch allows us to see the bone pose at a \n// particular point of the anim graph) \n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
		{ "ToolTip", "Array of active pose watches (pose watch allows us to see the bone pose at a\nparticular point of the anim graph)" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PoseWatches = { "PoseWatches", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimBlueprint, PoseWatches), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PoseWatches_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PoseWatches_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PoseWatches_Inner = { "PoseWatches", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPoseWatch_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_ParentAssetOverrides_MetaData[] = {
		{ "Comment", "// Array of overrides to asset containing nodes in the parent that have been overridden\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
		{ "ToolTip", "Array of overrides to asset containing nodes in the parent that have been overridden" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_ParentAssetOverrides = { "ParentAssetOverrides", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimBlueprint, ParentAssetOverrides), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_ParentAssetOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_ParentAssetOverrides_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_ParentAssetOverrides_Inner = { "ParentAssetOverrides", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_bWarnAboutBlueprintUsage_MetaData[] = {
		{ "Category", "Optimization" },
		{ "Comment", "/**\n\x09 * Selecting this option will cause the compiler to emit warnings whenever a call into Blueprint\n\x09 * is made from the animation graph. This can help track down optimizations that need to be made.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
		{ "ToolTip", "Selecting this option will cause the compiler to emit warnings whenever a call into Blueprint\nis made from the animation graph. This can help track down optimizations that need to be made." },
	};
#endif
	void Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_bWarnAboutBlueprintUsage_SetBit(void* Obj)
	{
		((UAnimBlueprint*)Obj)->bWarnAboutBlueprintUsage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_bWarnAboutBlueprintUsage = { "bWarnAboutBlueprintUsage", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAnimBlueprint), &Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_bWarnAboutBlueprintUsage_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_bWarnAboutBlueprintUsage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_bWarnAboutBlueprintUsage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_bUseMultiThreadedAnimationUpdate_MetaData[] = {
		{ "Category", "Optimization" },
		{ "Comment", "/**\n\x09 * Allows this anim Blueprint to update its native update, blend tree, montages and asset players on\n\x09 * a worker thread. The compiler will attempt to pick up any issues that may occur with threaded update.\n\x09 * For updates to run in multiple threads both this flag and the project setting \"Allow Multi Threaded \n\x09 * Animation Update\" should be set.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
		{ "ToolTip", "Allows this anim Blueprint to update its native update, blend tree, montages and asset players on\na worker thread. The compiler will attempt to pick up any issues that may occur with threaded update.\nFor updates to run in multiple threads both this flag and the project setting \"Allow Multi Threaded\nAnimation Update\" should be set." },
	};
#endif
	void Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_bUseMultiThreadedAnimationUpdate_SetBit(void* Obj)
	{
		((UAnimBlueprint*)Obj)->bUseMultiThreadedAnimationUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_bUseMultiThreadedAnimationUpdate = { "bUseMultiThreadedAnimationUpdate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAnimBlueprint), &Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_bUseMultiThreadedAnimationUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_bUseMultiThreadedAnimationUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_bUseMultiThreadedAnimationUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_Groups_MetaData[] = {
		{ "Comment", "// List of animation sync groups\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
		{ "ToolTip", "List of animation sync groups" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_Groups = { "Groups", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimBlueprint, Groups), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_Groups_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_Groups_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_Groups_Inner = { "Groups", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAnimGroupInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_TargetSkeleton_MetaData[] = {
		{ "Category", "ClassOptions" },
		{ "Comment", "/**\n\x09 * This is the target skeleton asset for anim instances created from this blueprint; all animations\n\x09 * referenced by the BP should be compatible with this skeleton.  For advanced use only, it is easy\n\x09 * to cause errors if this is modified without updating or replacing all referenced animations.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
		{ "ToolTip", "This is the target skeleton asset for anim instances created from this blueprint; all animations\nreferenced by the BP should be compatible with this skeleton.  For advanced use only, it is easy\nto cause errors if this is modified without updating or replacing all referenced animations." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_TargetSkeleton = { "TargetSkeleton", nullptr, (EPropertyFlags)0x0010050000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimBlueprint, TargetSkeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_TargetSkeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_TargetSkeleton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimBlueprint_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PreviewAnimationBlueprintTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PreviewAnimationBlueprintApplicationMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PreviewAnimationBlueprintApplicationMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PreviewAnimationBlueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PreviewSkeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PoseWatches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PoseWatches_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_ParentAssetOverrides,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_ParentAssetOverrides_Inner,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_bWarnAboutBlueprintUsage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_bUseMultiThreadedAnimationUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_Groups,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_Groups_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_TargetSkeleton,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAnimBlueprint_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterface_PreviewMeshProvider_NoRegister, (int32)VTABLE_OFFSET(UAnimBlueprint, IInterface_PreviewMeshProvider), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimBlueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimBlueprint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimBlueprint_Statics::ClassParams = {
		&UAnimBlueprint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimBlueprint_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprint_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimBlueprint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimBlueprint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimBlueprint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimBlueprint, 3576074422);
	template<> ENGINE_API UClass* StaticClass<UAnimBlueprint>()
	{
		return UAnimBlueprint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimBlueprint(Z_Construct_UClass_UAnimBlueprint, &UAnimBlueprint::StaticClass, TEXT("/Script/Engine"), TEXT("UAnimBlueprint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimBlueprint);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimBlueprint)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
