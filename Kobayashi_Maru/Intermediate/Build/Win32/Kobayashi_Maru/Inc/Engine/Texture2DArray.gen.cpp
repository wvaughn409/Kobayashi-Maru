// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/Texture2DArray.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTexture2DArray() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTexture2DArray_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2DArray();
	ENGINE_API UClass* Z_Construct_UClass_UTexture();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureAddress();
// End Cross Module References
	void UTexture2DArray::StaticRegisterNativesUTexture2DArray()
	{
	}
	UClass* Z_Construct_UClass_UTexture2DArray_NoRegister()
	{
		return UTexture2DArray::StaticClass();
	}
	struct Z_Construct_UClass_UTexture2DArray_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceTextures_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SourceTextures;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceTextures_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddressZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AddressZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddressY_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AddressY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddressX_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AddressX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTexture2DArray_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTexture,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture2DArray_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Engine/Texture2DArray.h" },
		{ "ModuleRelativePath", "Classes/Engine/Texture2DArray.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture2DArray_Statics::NewProp_SourceTextures_MetaData[] = {
		{ "Category", "Source2D" },
		{ "Comment", "/** Add Textures*/" },
		{ "DisplayName", "Source Textures" },
		{ "ModuleRelativePath", "Classes/Engine/Texture2DArray.h" },
		{ "ToolTip", "Add Textures" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTexture2DArray_Statics::NewProp_SourceTextures = { "SourceTextures", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture2DArray, SourceTextures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTexture2DArray_Statics::NewProp_SourceTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture2DArray_Statics::NewProp_SourceTextures_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTexture2DArray_Statics::NewProp_SourceTextures_Inner = { "SourceTextures", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture2DArray_Statics::NewProp_AddressZ_MetaData[] = {
		{ "Category", "Source2D" },
		{ "Comment", "/** The addressing mode to use for the Z axis.*/" },
		{ "DisplayName", "Address Z" },
		{ "ModuleRelativePath", "Classes/Engine/Texture2DArray.h" },
		{ "ToolTip", "The addressing mode to use for the Z axis." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTexture2DArray_Statics::NewProp_AddressZ = { "AddressZ", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture2DArray, AddressZ), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(Z_Construct_UClass_UTexture2DArray_Statics::NewProp_AddressZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture2DArray_Statics::NewProp_AddressZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture2DArray_Statics::NewProp_AddressY_MetaData[] = {
		{ "Category", "Source2D" },
		{ "Comment", "/** The addressing mode to use for the Y axis.*/" },
		{ "DisplayName", "Address Y" },
		{ "ModuleRelativePath", "Classes/Engine/Texture2DArray.h" },
		{ "ToolTip", "The addressing mode to use for the Y axis." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTexture2DArray_Statics::NewProp_AddressY = { "AddressY", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture2DArray, AddressY), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(Z_Construct_UClass_UTexture2DArray_Statics::NewProp_AddressY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture2DArray_Statics::NewProp_AddressY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture2DArray_Statics::NewProp_AddressX_MetaData[] = {
		{ "Category", "Source2D" },
		{ "Comment", "/** The addressing mode to use for the X axis.*/" },
		{ "DisplayName", "Address X" },
		{ "ModuleRelativePath", "Classes/Engine/Texture2DArray.h" },
		{ "ToolTip", "The addressing mode to use for the X axis." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTexture2DArray_Statics::NewProp_AddressX = { "AddressX", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture2DArray, AddressX), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(Z_Construct_UClass_UTexture2DArray_Statics::NewProp_AddressX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture2DArray_Statics::NewProp_AddressX_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTexture2DArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture2DArray_Statics::NewProp_SourceTextures,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture2DArray_Statics::NewProp_SourceTextures_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture2DArray_Statics::NewProp_AddressZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture2DArray_Statics::NewProp_AddressY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture2DArray_Statics::NewProp_AddressX,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTexture2DArray_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTexture2DArray>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTexture2DArray_Statics::ClassParams = {
		&UTexture2DArray::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UTexture2DArray_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UTexture2DArray_Statics::PropPointers), 0),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTexture2DArray_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture2DArray_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTexture2DArray()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTexture2DArray_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTexture2DArray, 2267786878);
	template<> ENGINE_API UClass* StaticClass<UTexture2DArray>()
	{
		return UTexture2DArray::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTexture2DArray(Z_Construct_UClass_UTexture2DArray, &UTexture2DArray::StaticClass, TEXT("/Script/Engine"), TEXT("UTexture2DArray"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTexture2DArray);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UTexture2DArray)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
