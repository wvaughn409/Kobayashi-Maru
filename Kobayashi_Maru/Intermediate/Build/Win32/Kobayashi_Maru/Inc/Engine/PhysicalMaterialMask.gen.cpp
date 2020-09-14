// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/PhysicalMaterials/PhysicalMaterialMask.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicalMaterialMask() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPhysicalMaterialMask_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicalMaterialMask();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureAddress();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
// End Cross Module References
	void UPhysicalMaterialMask::StaticRegisterNativesUPhysicalMaterialMask()
	{
	}
	UClass* Z_Construct_UClass_UPhysicalMaterialMask_NoRegister()
	{
		return UPhysicalMaterialMask::StaticClass();
	}
	struct Z_Construct_UClass_UPhysicalMaterialMask_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddressY_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AddressY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddressX_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AddressX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UVChannelIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UVChannelIndex;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaskTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetImportData;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhysicalMaterialMask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalMaterialMask_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Physical material masks are used to map multiple physical materials to a single rendering material\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "PhysicalMaterials/PhysicalMaterialMask.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/PhysicalMaterials/PhysicalMaterialMask.h" },
		{ "ToolTip", "Physical material masks are used to map multiple physical materials to a single rendering material" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalMaterialMask_Statics::NewProp_AddressY_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "Comment", "/** The addressing mode to use for the Y axis. */" },
		{ "DisplayName", "Y-axis Tiling Method" },
		{ "ModuleRelativePath", "Classes/PhysicalMaterials/PhysicalMaterialMask.h" },
		{ "ToolTip", "The addressing mode to use for the Y axis." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPhysicalMaterialMask_Statics::NewProp_AddressY = { "AddressY", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicalMaterialMask, AddressY), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(Z_Construct_UClass_UPhysicalMaterialMask_Statics::NewProp_AddressY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterialMask_Statics::NewProp_AddressY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalMaterialMask_Statics::NewProp_AddressX_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "Comment", "/** The addressing mode to use for the X axis. */" },
		{ "DisplayName", "X-axis Tiling Method" },
		{ "ModuleRelativePath", "Classes/PhysicalMaterials/PhysicalMaterialMask.h" },
		{ "ToolTip", "The addressing mode to use for the X axis." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPhysicalMaterialMask_Statics::NewProp_AddressX = { "AddressX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicalMaterialMask, AddressX), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(Z_Construct_UClass_UPhysicalMaterialMask_Statics::NewProp_AddressX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterialMask_Statics::NewProp_AddressX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalMaterialMask_Statics::NewProp_UVChannelIndex_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "Comment", "/** StaticMesh UV channel index to use when performing lookups with this mask. */" },
		{ "ModuleRelativePath", "Classes/PhysicalMaterials/PhysicalMaterialMask.h" },
		{ "ToolTip", "StaticMesh UV channel index to use when performing lookups with this mask." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPhysicalMaterialMask_Statics::NewProp_UVChannelIndex = { "UVChannelIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicalMaterialMask, UVChannelIndex), METADATA_PARAMS(Z_Construct_UClass_UPhysicalMaterialMask_Statics::NewProp_UVChannelIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterialMask_Statics::NewProp_UVChannelIndex_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalMaterialMask_Statics::NewProp_MaskTexture_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "Comment", "/** Mask input texture, square aspect ratio recommended. Recognized mask colors include: white, black, red, green, yellow, cyan, turquoise, and magenta. */" },
		{ "ModuleRelativePath", "Classes/PhysicalMaterials/PhysicalMaterialMask.h" },
		{ "ToolTip", "Mask input texture, square aspect ratio recommended. Recognized mask colors include: white, black, red, green, yellow, cyan, turquoise, and magenta." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhysicalMaterialMask_Statics::NewProp_MaskTexture = { "MaskTexture", nullptr, (EPropertyFlags)0x0010000800020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicalMaterialMask, MaskTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhysicalMaterialMask_Statics::NewProp_MaskTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterialMask_Statics::NewProp_MaskTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalMaterialMask_Statics::NewProp_AssetImportData_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/PhysicalMaterials/PhysicalMaterialMask.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhysicalMaterialMask_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x00120008000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicalMaterialMask, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhysicalMaterialMask_Statics::NewProp_AssetImportData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterialMask_Statics::NewProp_AssetImportData_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhysicalMaterialMask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterialMask_Statics::NewProp_AddressY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterialMask_Statics::NewProp_AddressX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterialMask_Statics::NewProp_UVChannelIndex,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterialMask_Statics::NewProp_MaskTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterialMask_Statics::NewProp_AssetImportData,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhysicalMaterialMask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicalMaterialMask>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPhysicalMaterialMask_Statics::ClassParams = {
		&UPhysicalMaterialMask::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPhysicalMaterialMask_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterialMask_Statics::PropPointers),
		0,
		0x009020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPhysicalMaterialMask_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterialMask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhysicalMaterialMask()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPhysicalMaterialMask_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPhysicalMaterialMask, 344323623);
	template<> ENGINE_API UClass* StaticClass<UPhysicalMaterialMask>()
	{
		return UPhysicalMaterialMask::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPhysicalMaterialMask(Z_Construct_UClass_UPhysicalMaterialMask, &UPhysicalMaterialMask::StaticClass, TEXT("/Script/Engine"), TEXT("UPhysicalMaterialMask"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicalMaterialMask);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
