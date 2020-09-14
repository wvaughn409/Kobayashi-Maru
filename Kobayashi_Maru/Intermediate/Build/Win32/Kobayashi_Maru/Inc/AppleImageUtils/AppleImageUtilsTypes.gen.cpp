// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AppleImageUtils/Public/AppleImageUtilsTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAppleImageUtilsTypes() {}
// Cross Module References
	APPLEIMAGEUTILS_API UEnum* Z_Construct_UEnum_AppleImageUtils_EAppleTextureType();
	UPackage* Z_Construct_UPackage__Script_AppleImageUtils();
	APPLEIMAGEUTILS_API UEnum* Z_Construct_UEnum_AppleImageUtils_ETextureRotationDirection();
	APPLEIMAGEUTILS_API UClass* Z_Construct_UClass_UAppleImageInterface_NoRegister();
	APPLEIMAGEUTILS_API UClass* Z_Construct_UClass_UAppleImageInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
// End Cross Module References
	static UEnum* EAppleTextureType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AppleImageUtils_EAppleTextureType, Z_Construct_UPackage__Script_AppleImageUtils(), TEXT("EAppleTextureType"));
		}
		return Singleton;
	}
	template<> APPLEIMAGEUTILS_API UEnum* StaticEnum<EAppleTextureType>()
	{
		return EAppleTextureType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAppleTextureType(EAppleTextureType_StaticEnum, TEXT("/Script/AppleImageUtils"), TEXT("EAppleTextureType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AppleImageUtils_EAppleTextureType_Hash() { return 2781203726U; }
	UEnum* Z_Construct_UEnum_AppleImageUtils_EAppleTextureType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AppleImageUtils();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAppleTextureType"), 0, Get_Z_Construct_UEnum_AppleImageUtils_EAppleTextureType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAppleTextureType::Unknown", (int64)EAppleTextureType::Unknown },
				{ "EAppleTextureType::Image", (int64)EAppleTextureType::Image },
				{ "EAppleTextureType::PixelBuffer", (int64)EAppleTextureType::PixelBuffer },
				{ "EAppleTextureType::Surface", (int64)EAppleTextureType::Surface },
				{ "EAppleTextureType::MetalTexture", (int64)EAppleTextureType::MetalTexture },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Category", "AppleImageUtils" },
				{ "Experimental", "" },
				{ "Image.Name", "EAppleTextureType::Image" },
				{ "MetalTexture.Name", "EAppleTextureType::MetalTexture" },
				{ "ModuleRelativePath", "Public/AppleImageUtilsTypes.h" },
				{ "PixelBuffer.Name", "EAppleTextureType::PixelBuffer" },
				{ "Surface.Name", "EAppleTextureType::Surface" },
				{ "Unknown.Name", "EAppleTextureType::Unknown" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AppleImageUtils,
				nullptr,
				"EAppleTextureType",
				"EAppleTextureType",
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
	static UEnum* ETextureRotationDirection_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AppleImageUtils_ETextureRotationDirection, Z_Construct_UPackage__Script_AppleImageUtils(), TEXT("ETextureRotationDirection"));
		}
		return Singleton;
	}
	template<> APPLEIMAGEUTILS_API UEnum* StaticEnum<ETextureRotationDirection>()
	{
		return ETextureRotationDirection_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETextureRotationDirection(ETextureRotationDirection_StaticEnum, TEXT("/Script/AppleImageUtils"), TEXT("ETextureRotationDirection"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AppleImageUtils_ETextureRotationDirection_Hash() { return 792783588U; }
	UEnum* Z_Construct_UEnum_AppleImageUtils_ETextureRotationDirection()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AppleImageUtils();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETextureRotationDirection"), 0, Get_Z_Construct_UEnum_AppleImageUtils_ETextureRotationDirection_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETextureRotationDirection::None", (int64)ETextureRotationDirection::None },
				{ "ETextureRotationDirection::Left", (int64)ETextureRotationDirection::Left },
				{ "ETextureRotationDirection::Right", (int64)ETextureRotationDirection::Right },
				{ "ETextureRotationDirection::Down", (int64)ETextureRotationDirection::Down },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Category", "AppleImageUtils" },
				{ "Down.Name", "ETextureRotationDirection::Down" },
				{ "Experimental", "" },
				{ "Left.Name", "ETextureRotationDirection::Left" },
				{ "ModuleRelativePath", "Public/AppleImageUtilsTypes.h" },
				{ "None.Name", "ETextureRotationDirection::None" },
				{ "Right.Name", "ETextureRotationDirection::Right" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AppleImageUtils,
				nullptr,
				"ETextureRotationDirection",
				"ETextureRotationDirection",
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
	void UAppleImageInterface::StaticRegisterNativesUAppleImageInterface()
	{
	}
	UClass* Z_Construct_UClass_UAppleImageInterface_NoRegister()
	{
		return UAppleImageInterface::StaticClass();
	}
	struct Z_Construct_UClass_UAppleImageInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAppleImageInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_AppleImageUtils,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAppleImageInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AppleImageUtilsTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAppleImageInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAppleImageInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAppleImageInterface_Statics::ClassParams = {
		&UAppleImageInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAppleImageInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAppleImageInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAppleImageInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAppleImageInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAppleImageInterface, 3392790500);
	template<> APPLEIMAGEUTILS_API UClass* StaticClass<UAppleImageInterface>()
	{
		return UAppleImageInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAppleImageInterface(Z_Construct_UClass_UAppleImageInterface, &UAppleImageInterface::StaticClass, TEXT("/Script/AppleImageUtils"), TEXT("UAppleImageInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAppleImageInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
