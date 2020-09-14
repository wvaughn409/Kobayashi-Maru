// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ImageWrapper/Public/BmpImageSupport.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBmpImageSupport() {}
// Cross Module References
	IMAGEWRAPPER_API UEnum* Z_Construct_UEnum_ImageWrapper_EBitmapCSType();
	UPackage* Z_Construct_UPackage__Script_ImageWrapper();
	IMAGEWRAPPER_API UEnum* Z_Construct_UEnum_ImageWrapper_EBitmapHeaderVersion();
// End Cross Module References
	static UEnum* EBitmapCSType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ImageWrapper_EBitmapCSType, Z_Construct_UPackage__Script_ImageWrapper(), TEXT("EBitmapCSType"));
		}
		return Singleton;
	}
	template<> IMAGEWRAPPER_API UEnum* StaticEnum<EBitmapCSType>()
	{
		return EBitmapCSType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBitmapCSType(EBitmapCSType_StaticEnum, TEXT("/Script/ImageWrapper"), TEXT("EBitmapCSType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ImageWrapper_EBitmapCSType_Hash() { return 1180731538U; }
	UEnum* Z_Construct_UEnum_ImageWrapper_EBitmapCSType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ImageWrapper();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBitmapCSType"), 0, Get_Z_Construct_UEnum_ImageWrapper_EBitmapCSType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBitmapCSType::BCST_BLCS_CALIBRATED_RGB", (int64)EBitmapCSType::BCST_BLCS_CALIBRATED_RGB },
				{ "EBitmapCSType::BCST_LCS_sRGB", (int64)EBitmapCSType::BCST_LCS_sRGB },
				{ "EBitmapCSType::BCST_LCS_WINDOWS_COLOR_SPACE", (int64)EBitmapCSType::BCST_LCS_WINDOWS_COLOR_SPACE },
				{ "EBitmapCSType::BCST_PROFILE_LINKED", (int64)EBitmapCSType::BCST_PROFILE_LINKED },
				{ "EBitmapCSType::BCST_PROFILE_EMBEDDED", (int64)EBitmapCSType::BCST_PROFILE_EMBEDDED },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BCST_BLCS_CALIBRATED_RGB.Name", "EBitmapCSType::BCST_BLCS_CALIBRATED_RGB" },
				{ "BCST_LCS_sRGB.Name", "EBitmapCSType::BCST_LCS_sRGB" },
				{ "BCST_LCS_WINDOWS_COLOR_SPACE.Name", "EBitmapCSType::BCST_LCS_WINDOWS_COLOR_SPACE" },
				{ "BCST_PROFILE_EMBEDDED.Name", "EBitmapCSType::BCST_PROFILE_EMBEDDED" },
				{ "BCST_PROFILE_LINKED.Name", "EBitmapCSType::BCST_PROFILE_LINKED" },
				{ "Comment", "// Color space type of the bitmap, property introduced in Bitmap header version 4.\n" },
				{ "ModuleRelativePath", "Public/BmpImageSupport.h" },
				{ "ToolTip", "Color space type of the bitmap, property introduced in Bitmap header version 4." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ImageWrapper,
				nullptr,
				"EBitmapCSType",
				"EBitmapCSType",
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
	static UEnum* EBitmapHeaderVersion_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ImageWrapper_EBitmapHeaderVersion, Z_Construct_UPackage__Script_ImageWrapper(), TEXT("EBitmapHeaderVersion"));
		}
		return Singleton;
	}
	template<> IMAGEWRAPPER_API UEnum* StaticEnum<EBitmapHeaderVersion>()
	{
		return EBitmapHeaderVersion_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBitmapHeaderVersion(EBitmapHeaderVersion_StaticEnum, TEXT("/Script/ImageWrapper"), TEXT("EBitmapHeaderVersion"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ImageWrapper_EBitmapHeaderVersion_Hash() { return 1370891055U; }
	UEnum* Z_Construct_UEnum_ImageWrapper_EBitmapHeaderVersion()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ImageWrapper();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBitmapHeaderVersion"), 0, Get_Z_Construct_UEnum_ImageWrapper_EBitmapHeaderVersion_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBitmapHeaderVersion::BHV_BITMAPINFOHEADER", (int64)EBitmapHeaderVersion::BHV_BITMAPINFOHEADER },
				{ "EBitmapHeaderVersion::BHV_BITMAPV2INFOHEADER", (int64)EBitmapHeaderVersion::BHV_BITMAPV2INFOHEADER },
				{ "EBitmapHeaderVersion::BHV_BITMAPV3INFOHEADER", (int64)EBitmapHeaderVersion::BHV_BITMAPV3INFOHEADER },
				{ "EBitmapHeaderVersion::BHV_BITMAPV4HEADER", (int64)EBitmapHeaderVersion::BHV_BITMAPV4HEADER },
				{ "EBitmapHeaderVersion::BHV_BITMAPV5HEADER", (int64)EBitmapHeaderVersion::BHV_BITMAPV5HEADER },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BHV_BITMAPINFOHEADER.Name", "EBitmapHeaderVersion::BHV_BITMAPINFOHEADER" },
				{ "BHV_BITMAPV2INFOHEADER.Name", "EBitmapHeaderVersion::BHV_BITMAPV2INFOHEADER" },
				{ "BHV_BITMAPV3INFOHEADER.Name", "EBitmapHeaderVersion::BHV_BITMAPV3INFOHEADER" },
				{ "BHV_BITMAPV4HEADER.Name", "EBitmapHeaderVersion::BHV_BITMAPV4HEADER" },
				{ "BHV_BITMAPV5HEADER.Name", "EBitmapHeaderVersion::BHV_BITMAPV5HEADER" },
				{ "Comment", "// Bitmap info header versions.\n" },
				{ "ModuleRelativePath", "Public/BmpImageSupport.h" },
				{ "ToolTip", "Bitmap info header versions." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ImageWrapper,
				nullptr,
				"EBitmapHeaderVersion",
				"EBitmapHeaderVersion",
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
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
