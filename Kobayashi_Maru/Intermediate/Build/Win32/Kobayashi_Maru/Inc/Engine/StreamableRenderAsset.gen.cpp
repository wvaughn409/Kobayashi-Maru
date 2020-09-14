// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/StreamableRenderAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStreamableRenderAsset() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UStreamableRenderAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStreamableRenderAsset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UStreamableRenderAsset::StaticRegisterNativesUStreamableRenderAsset()
	{
	}
	UClass* Z_Construct_UClass_UStreamableRenderAsset_NoRegister()
	{
		return UStreamableRenderAsset::StaticClass();
	}
	struct Z_Construct_UClass_UStreamableRenderAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseCinematicMipLevels_MetaData[];
#endif
		static void NewProp_bUseCinematicMipLevels_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCinematicMipLevels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreStreamingMipBias_MetaData[];
#endif
		static void NewProp_bIgnoreStreamingMipBias_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreStreamingMipBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceMiplevelsToBeResident_MetaData[];
#endif
		static void NewProp_bForceMiplevelsToBeResident_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceMiplevelsToBeResident;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasStreamingUpdatePending_MetaData[];
#endif
		static void NewProp_bHasStreamingUpdatePending_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasStreamingUpdatePending;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsStreamable_MetaData[];
#endif
		static void NewProp_bIsStreamable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsStreamable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGlobalForceMipLevelsToBeResident_MetaData[];
#endif
		static void NewProp_bGlobalForceMipLevelsToBeResident_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGlobalForceMipLevelsToBeResident;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeverStream_MetaData[];
#endif
		static void NewProp_NeverStream_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NeverStream;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCachedReadyForStreaming_MetaData[];
#endif
		static void NewProp_bCachedReadyForStreaming_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCachedReadyForStreaming;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedNumResidentLODs_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CachedNumResidentLODs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedCombinedLODBias_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CachedCombinedLODBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StreamingIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StreamingIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumCinematicMipLevels_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumCinematicMipLevels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceMipLevelsToBeResidentTimestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FDoublePropertyParams NewProp_ForceMipLevelsToBeResidentTimestamp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStreamableRenderAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamableRenderAsset_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/StreamableRenderAsset.h" },
		{ "ModuleRelativePath", "Classes/Engine/StreamableRenderAsset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bUseCinematicMipLevels_MetaData[] = {
		{ "Comment", "/** Whether to use the extra cinematic quality mip-levels, when we're forcing mip-levels to be resident. */" },
		{ "ModuleRelativePath", "Classes/Engine/StreamableRenderAsset.h" },
		{ "ToolTip", "Whether to use the extra cinematic quality mip-levels, when we're forcing mip-levels to be resident." },
	};
#endif
	void Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bUseCinematicMipLevels_SetBit(void* Obj)
	{
		((UStreamableRenderAsset*)Obj)->bUseCinematicMipLevels = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bUseCinematicMipLevels = { "bUseCinematicMipLevels", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UStreamableRenderAsset), &Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bUseCinematicMipLevels_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bUseCinematicMipLevels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bUseCinematicMipLevels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bIgnoreStreamingMipBias_MetaData[] = {
		{ "Comment", "/** When forced fully resident, ignores the streaming mip bias used to accommodate memory constraints. */" },
		{ "ModuleRelativePath", "Classes/Engine/StreamableRenderAsset.h" },
		{ "ToolTip", "When forced fully resident, ignores the streaming mip bias used to accommodate memory constraints." },
	};
#endif
	void Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bIgnoreStreamingMipBias_SetBit(void* Obj)
	{
		((UStreamableRenderAsset*)Obj)->bIgnoreStreamingMipBias = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bIgnoreStreamingMipBias = { "bIgnoreStreamingMipBias", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UStreamableRenderAsset), &Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bIgnoreStreamingMipBias_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bIgnoreStreamingMipBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bIgnoreStreamingMipBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bForceMiplevelsToBeResident_MetaData[] = {
		{ "Comment", "/** Override whether to fully stream even if texture hasn't been rendered.\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/StreamableRenderAsset.h" },
		{ "ToolTip", "Override whether to fully stream even if texture hasn't been rendered." },
	};
#endif
	void Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bForceMiplevelsToBeResident_SetBit(void* Obj)
	{
		((UStreamableRenderAsset*)Obj)->bForceMiplevelsToBeResident = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bForceMiplevelsToBeResident = { "bForceMiplevelsToBeResident", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UStreamableRenderAsset), &Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bForceMiplevelsToBeResident_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bForceMiplevelsToBeResident_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bForceMiplevelsToBeResident_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bHasStreamingUpdatePending_MetaData[] = {
		{ "Comment", "/** Whether some mips might be streamed soon. If false, the texture is not planned resolution will be stable. */" },
		{ "ModuleRelativePath", "Classes/Engine/StreamableRenderAsset.h" },
		{ "ToolTip", "Whether some mips might be streamed soon. If false, the texture is not planned resolution will be stable." },
	};
#endif
	void Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bHasStreamingUpdatePending_SetBit(void* Obj)
	{
		((UStreamableRenderAsset*)Obj)->bHasStreamingUpdatePending = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bHasStreamingUpdatePending = { "bHasStreamingUpdatePending", nullptr, (EPropertyFlags)0x0010000400002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UStreamableRenderAsset), &Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bHasStreamingUpdatePending_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bHasStreamingUpdatePending_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bHasStreamingUpdatePending_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bIsStreamable_MetaData[] = {
		{ "Comment", "/** Whether the texture is currently streamable or not.\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/StreamableRenderAsset.h" },
		{ "ToolTip", "Whether the texture is currently streamable or not." },
	};
#endif
	void Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bIsStreamable_SetBit(void* Obj)
	{
		((UStreamableRenderAsset*)Obj)->bIsStreamable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bIsStreamable = { "bIsStreamable", nullptr, (EPropertyFlags)0x0010000400002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UStreamableRenderAsset), &Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bIsStreamable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bIsStreamable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bIsStreamable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bGlobalForceMipLevelsToBeResident_MetaData[] = {
		{ "Category", "LevelOfDetail" },
		{ "Comment", "/** Global and serialized version of ForceMiplevelsToBeResident.\x09\x09\x09\x09*/" },
		{ "DisplayName", "Global Force Resident Mip Levels" },
		{ "ModuleRelativePath", "Classes/Engine/StreamableRenderAsset.h" },
		{ "ToolTip", "Global and serialized version of ForceMiplevelsToBeResident." },
	};
#endif
	void Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bGlobalForceMipLevelsToBeResident_SetBit(void* Obj)
	{
		((UStreamableRenderAsset*)Obj)->bGlobalForceMipLevelsToBeResident = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bGlobalForceMipLevelsToBeResident = { "bGlobalForceMipLevelsToBeResident", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UStreamableRenderAsset), &Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bGlobalForceMipLevelsToBeResident_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bGlobalForceMipLevelsToBeResident_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bGlobalForceMipLevelsToBeResident_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_NeverStream_MetaData[] = {
		{ "Category", "LevelOfDetail" },
		{ "ModuleRelativePath", "Classes/Engine/StreamableRenderAsset.h" },
	};
#endif
	void Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_NeverStream_SetBit(void* Obj)
	{
		((UStreamableRenderAsset*)Obj)->NeverStream = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_NeverStream = { "NeverStream", nullptr, (EPropertyFlags)0x0010050000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UStreamableRenderAsset), &Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_NeverStream_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_NeverStream_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_NeverStream_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bCachedReadyForStreaming_MetaData[] = {
		{ "Comment", "/** Cached value of IsReadyForStreaming(). Used to reduce cache misses */" },
		{ "ModuleRelativePath", "Classes/Engine/StreamableRenderAsset.h" },
		{ "ToolTip", "Cached value of IsReadyForStreaming(). Used to reduce cache misses" },
	};
#endif
	void Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bCachedReadyForStreaming_SetBit(void* Obj)
	{
		((UStreamableRenderAsset*)Obj)->bCachedReadyForStreaming = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bCachedReadyForStreaming = { "bCachedReadyForStreaming", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UStreamableRenderAsset), &Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bCachedReadyForStreaming_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bCachedReadyForStreaming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bCachedReadyForStreaming_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_CachedNumResidentLODs_MetaData[] = {
		{ "Comment", "/** Cached value of GetNumResidentMips(). Used to reduce cache misses */" },
		{ "ModuleRelativePath", "Classes/Engine/StreamableRenderAsset.h" },
		{ "ToolTip", "Cached value of GetNumResidentMips(). Used to reduce cache misses" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_CachedNumResidentLODs = { "CachedNumResidentLODs", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStreamableRenderAsset, CachedNumResidentLODs), nullptr, METADATA_PARAMS(Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_CachedNumResidentLODs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_CachedNumResidentLODs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_CachedCombinedLODBias_MetaData[] = {
		{ "Comment", "/** Cached combined group and texture LOD bias to use.\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/StreamableRenderAsset.h" },
		{ "ToolTip", "Cached combined group and texture LOD bias to use." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_CachedCombinedLODBias = { "CachedCombinedLODBias", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStreamableRenderAsset, CachedCombinedLODBias), METADATA_PARAMS(Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_CachedCombinedLODBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_CachedCombinedLODBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_StreamingIndex_MetaData[] = {
		{ "Comment", "/** FStreamingRenderAsset index used by the texture streaming system. */" },
		{ "ModuleRelativePath", "Classes/Engine/StreamableRenderAsset.h" },
		{ "ToolTip", "FStreamingRenderAsset index used by the texture streaming system." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_StreamingIndex = { "StreamingIndex", nullptr, (EPropertyFlags)0x0020080400202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStreamableRenderAsset, StreamingIndex), METADATA_PARAMS(Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_StreamingIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_StreamingIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_NumCinematicMipLevels_MetaData[] = {
		{ "Category", "LevelOfDetail" },
		{ "Comment", "/** Number of mip-levels to use for cinematic quality. */" },
		{ "ModuleRelativePath", "Classes/Engine/StreamableRenderAsset.h" },
		{ "ToolTip", "Number of mip-levels to use for cinematic quality." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_NumCinematicMipLevels = { "NumCinematicMipLevels", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStreamableRenderAsset, NumCinematicMipLevels), METADATA_PARAMS(Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_NumCinematicMipLevels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_NumCinematicMipLevels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_ForceMipLevelsToBeResidentTimestamp_MetaData[] = {
		{ "Comment", "/** WorldSettings timestamp that tells the streamer to force all miplevels to be resident up until that time. */" },
		{ "ModuleRelativePath", "Classes/Engine/StreamableRenderAsset.h" },
		{ "ToolTip", "WorldSettings timestamp that tells the streamer to force all miplevels to be resident up until that time." },
	};
#endif
	const UE4CodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_ForceMipLevelsToBeResidentTimestamp = { "ForceMipLevelsToBeResidentTimestamp", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStreamableRenderAsset, ForceMipLevelsToBeResidentTimestamp), METADATA_PARAMS(Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_ForceMipLevelsToBeResidentTimestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_ForceMipLevelsToBeResidentTimestamp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStreamableRenderAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bUseCinematicMipLevels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bIgnoreStreamingMipBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bForceMiplevelsToBeResident,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bHasStreamingUpdatePending,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bIsStreamable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bGlobalForceMipLevelsToBeResident,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_NeverStream,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bCachedReadyForStreaming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_CachedNumResidentLODs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_CachedCombinedLODBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_StreamingIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_NumCinematicMipLevels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_ForceMipLevelsToBeResidentTimestamp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStreamableRenderAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStreamableRenderAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStreamableRenderAsset_Statics::ClassParams = {
		&UStreamableRenderAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStreamableRenderAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStreamableRenderAsset_Statics::PropPointers),
		0,
		0x000800A1u,
		METADATA_PARAMS(Z_Construct_UClass_UStreamableRenderAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamableRenderAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStreamableRenderAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStreamableRenderAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStreamableRenderAsset, 1926591347);
	template<> ENGINE_API UClass* StaticClass<UStreamableRenderAsset>()
	{
		return UStreamableRenderAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStreamableRenderAsset(Z_Construct_UClass_UStreamableRenderAsset, &UStreamableRenderAsset::StaticClass, TEXT("/Script/Engine"), TEXT("UStreamableRenderAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStreamableRenderAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
