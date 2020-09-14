// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/VT/RuntimeVirtualTextureStreamingProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeVirtualTextureStreamingProxy() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_URuntimeVirtualTextureStreamingProxy_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_URuntimeVirtualTextureStreamingProxy();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVirtualTextureBuildSettings();
// End Cross Module References
	void URuntimeVirtualTextureStreamingProxy::StaticRegisterNativesURuntimeVirtualTextureStreamingProxy()
	{
	}
	UClass* Z_Construct_UClass_URuntimeVirtualTextureStreamingProxy_NoRegister()
	{
		return URuntimeVirtualTextureStreamingProxy::StaticClass();
	}
	struct Z_Construct_UClass_URuntimeVirtualTextureStreamingProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildHash_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_BuildHash;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSinglePhysicalSpace_MetaData[];
#endif
		static void NewProp_bSinglePhysicalSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSinglePhysicalSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URuntimeVirtualTextureStreamingProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTexture2D,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeVirtualTextureStreamingProxy_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/** Streaming virtual texture used to store the low mips in a URuntimeVirtualTexture. */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VT/RuntimeVirtualTextureStreamingProxy.h" },
		{ "ModuleRelativePath", "Classes/VT/RuntimeVirtualTextureStreamingProxy.h" },
		{ "ToolTip", "Streaming virtual texture used to store the low mips in a URuntimeVirtualTexture." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeVirtualTextureStreamingProxy_Statics::NewProp_BuildHash_MetaData[] = {
		{ "Comment", "/** Hash of settings used when building this texture. Used to invalidate when build settings have changed. */" },
		{ "ModuleRelativePath", "Classes/VT/RuntimeVirtualTextureStreamingProxy.h" },
		{ "ToolTip", "Hash of settings used when building this texture. Used to invalidate when build settings have changed." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_URuntimeVirtualTextureStreamingProxy_Statics::NewProp_BuildHash = { "BuildHash", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URuntimeVirtualTextureStreamingProxy, BuildHash), METADATA_PARAMS(Z_Construct_UClass_URuntimeVirtualTextureStreamingProxy_Statics::NewProp_BuildHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTextureStreamingProxy_Statics::NewProp_BuildHash_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeVirtualTextureStreamingProxy_Statics::NewProp_bSinglePhysicalSpace_MetaData[] = {
		{ "Comment", "/** \n\x09 * Enables combining layers into a single physical space. \n\x09 * If this value doesn't match the owning URuntimeVirtualTexture then unwanted physical pools may be allocated.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/VT/RuntimeVirtualTextureStreamingProxy.h" },
		{ "ToolTip", "Enables combining layers into a single physical space.\nIf this value doesn't match the owning URuntimeVirtualTexture then unwanted physical pools may be allocated." },
	};
#endif
	void Z_Construct_UClass_URuntimeVirtualTextureStreamingProxy_Statics::NewProp_bSinglePhysicalSpace_SetBit(void* Obj)
	{
		((URuntimeVirtualTextureStreamingProxy*)Obj)->bSinglePhysicalSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URuntimeVirtualTextureStreamingProxy_Statics::NewProp_bSinglePhysicalSpace = { "bSinglePhysicalSpace", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URuntimeVirtualTextureStreamingProxy), &Z_Construct_UClass_URuntimeVirtualTextureStreamingProxy_Statics::NewProp_bSinglePhysicalSpace_SetBit, METADATA_PARAMS(Z_Construct_UClass_URuntimeVirtualTextureStreamingProxy_Statics::NewProp_bSinglePhysicalSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTextureStreamingProxy_Statics::NewProp_bSinglePhysicalSpace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeVirtualTextureStreamingProxy_Statics::NewProp_Settings_MetaData[] = {
		{ "Comment", "/** Virtual texture build settings. These should match those of any owning URuntimeVirtualTexture. */" },
		{ "ModuleRelativePath", "Classes/VT/RuntimeVirtualTextureStreamingProxy.h" },
		{ "ToolTip", "Virtual texture build settings. These should match those of any owning URuntimeVirtualTexture." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URuntimeVirtualTextureStreamingProxy_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URuntimeVirtualTextureStreamingProxy, Settings), Z_Construct_UScriptStruct_FVirtualTextureBuildSettings, METADATA_PARAMS(Z_Construct_UClass_URuntimeVirtualTextureStreamingProxy_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTextureStreamingProxy_Statics::NewProp_Settings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URuntimeVirtualTextureStreamingProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTextureStreamingProxy_Statics::NewProp_BuildHash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTextureStreamingProxy_Statics::NewProp_bSinglePhysicalSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTextureStreamingProxy_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URuntimeVirtualTextureStreamingProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeVirtualTextureStreamingProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URuntimeVirtualTextureStreamingProxy_Statics::ClassParams = {
		&URuntimeVirtualTextureStreamingProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URuntimeVirtualTextureStreamingProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTextureStreamingProxy_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URuntimeVirtualTextureStreamingProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTextureStreamingProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URuntimeVirtualTextureStreamingProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URuntimeVirtualTextureStreamingProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URuntimeVirtualTextureStreamingProxy, 2323988292);
	template<> ENGINE_API UClass* StaticClass<URuntimeVirtualTextureStreamingProxy>()
	{
		return URuntimeVirtualTextureStreamingProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URuntimeVirtualTextureStreamingProxy(Z_Construct_UClass_URuntimeVirtualTextureStreamingProxy, &URuntimeVirtualTextureStreamingProxy::StaticClass, TEXT("/Script/Engine"), TEXT("URuntimeVirtualTextureStreamingProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeVirtualTextureStreamingProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
